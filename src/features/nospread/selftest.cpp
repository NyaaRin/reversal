// Self-test for the reconstructed no-spread subsystem.
//
// Checks the three things that decide whether the reconstruction is correct:
// the MD5 seed fold matches the reference digest, the seed is stable per command
// number, and compensating a view then re-applying the cone lands back on the
// original view (that is the entire point of the compensation loop).

#include <cmath>
#include <cstdio>
#include <cstring>
#include <string>

#include "angle.h"
#include "md5.h"
#include "swcs_spread.h"
#include "compensation.h"

namespace {

int g_failures = 0;

void Check(bool condition, const char* what)
{
    std::printf("%s  %s\n", condition ? "PASS" : "FAIL", what);
    if (!condition)
        ++g_failures;
}

void CheckNear(float actual, float expected, float tolerance, const char* what)
{
    const bool ok = std::fabs(actual - expected) <= tolerance;
    std::printf("%s  %s (got %.4f, want %.4f)\n", ok ? "PASS" : "FAIL", what, actual, expected);
    if (!ok)
        ++g_failures;
}

std::string Md5Hex(const char* text)
{
    sf::MD5 md5;
    md5.Update(text, std::strlen(text));
    uint8_t digest[16];
    md5.Final(digest);
    char out[33];
    for (int i = 0; i < 16; ++i)
        std::snprintf(out + i * 2, 3, "%02x", digest[i]);
    return std::string(out, 32);
}

// Shot direction for a compensated command: apply the cone again to the
// command we are about to send. If compensation worked, this equals the view
// the player was aiming at.
sf::QAngle ShotAngles(const sf::QAngle& command, const sf::nospread::ConeOffset& offset)
{
    sf::Vector forward, right, up;
    sf::AngleVectors(command, &forward, &right, &up);
    const float yawRad = offset.yaw * sf::kDegToRad;
    const float pitchRad = offset.pitch * sf::kDegToRad;
    const sf::Vector rotated = forward * (std::cos(yawRad) * std::cos(pitchRad)) +
                               right * std::sin(yawRad) + up * std::sin(pitchRad);
    return sf::VectorAngles(rotated);
}

float AngleDelta(float a, float b)
{
    return std::fabs(sf::NormalizeAngle(a - b));
}

} // namespace

int main()
{
    // ---------------------------------------------------------------- MD5
    Check(Md5Hex("") == "d41d8cd98f00b204e9800998ecf8427e", "md5(empty) matches RFC 1321");
    Check(Md5Hex("abc") == "900150983cd24fb0d6963f7d28e17f72", "md5(abc) matches RFC 1321");
    Check(Md5Hex("message digest") == "f96b697d7cb7938d525a2f31aaf161d0",
          "md5(message digest) matches RFC 1321");

    // --------------------------------------------------------------- seed
    const uint32_t seedA = sf::swcs::SeedForCommand(1000);
    const uint32_t seedB = sf::swcs::SeedForCommand(1000);
    const uint32_t seedC = sf::swcs::SeedForCommand(1001);
    Check(seedA == seedB, "seed is stable for the same command number");
    Check(seedA != seedC, "seed changes with the command number");
    std::printf("INFO  seed(cmd 1000) = 0x%08x, seed(1001) = 0x%08x\n", seedA, seedC);

    // ------------------------------------------------------- compensation
    // A realistic cone: roughly a degree of horizontal and half of vertical.
    const sf::nospread::ConeOffset offset{ 0.9f, 0.45f };
    const sf::QAngle aim(2.0f, 45.0f, 0.0f);

    sf::QAngle command = aim;
    const sf::nospread::CompensationResult result =
        sf::nospread::CompensateCommand(command, offset, 3);

    Check(result.valid, "compensation produced a valid command");
    std::printf("INFO  command after compensation: pitch=%.4f yaw=%.4f (%d iterations, residual %.5f/%.5f)\n",
                command.pitch, command.yaw, result.iterations, result.residualPitch, result.residualYaw);

    const sf::QAngle landed = ShotAngles(command, offset);
    CheckNear(landed.pitch, aim.pitch, 0.01f, "compensated shot lands on the aim pitch");
    CheckNear(landed.yaw, aim.yaw, 0.01f, "compensated shot lands on the aim yaw");

    // Uncompensated, the same cone misses by roughly the cone size. This proves
    // the check above is measuring something real and not a no-op.
    const sf::QAngle uncompensated = ShotAngles(aim, offset);
    const float miss = AngleDelta(uncompensated.yaw, aim.yaw);
    Check(miss > 0.1f, "the same cone visibly misses without compensation");
    std::printf("INFO  uncompensated miss: %.4f deg of yaw\n", miss);

    // ---------------------------------------------------------- angle math
    CheckNear(sf::NormalizeAngle(370.0f), 10.0f, 0.0001f, "NormalizeAngle wraps +370 to +10");
    CheckNear(sf::NormalizeAngle(-190.0f), 170.0f, 0.0001f, "NormalizeAngle wraps -190 to +170");

    sf::Vector forward;
    sf::AngleVectors(sf::QAngle(0.f, 0.f, 0.f), &forward);
    CheckNear(forward.x, 1.0f, 0.0001f, "yaw 0 points along +x");
    const sf::QAngle back = sf::VectorAngles(forward);
    CheckNear(back.yaw, 0.0f, 0.0001f, "vector -> angle round trip");

    // ------------------------------------------------------------- cone
    sf::swcs::WeaponParams params;
    params.spread = 0.02f;
    params.inaccuracyCone = 0.05f;
    params.bullets = 1;

    uint32_t state = sf::swcs::SeedForCommand(4242);
    const sf::swcs::ConeOffset cone = sf::swcs::ComputeConeOffset(params, nullptr, 0, state);
    Check(cone.valid, "cone offset computed");
    Check(std::isfinite(cone.yaw) && std::isfinite(cone.pitch), "cone offset is finite");

    std::printf("\n%s (%d failure%s)\n", g_failures == 0 ? "SELFTEST PASS" : "SELFTEST FAIL",
                g_failures, g_failures == 1 ? "" : "s");
    return g_failures == 0 ? 0 : 1;
}
