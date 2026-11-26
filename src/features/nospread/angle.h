#pragma once
// Source-engine angle/vector math.
//
// QAngle is (pitch, yaw, roll) with pitch positive down, as in the engine.
// These are the same conventions the original uses: its compensation path
// converts angles to a direction, rotates the direction by the shot cone, and
// converts back, so any sign error here shows up as a mirrored shot.

#include <cmath>

namespace sf {

struct Vector
{
    float x = 0.f, y = 0.f, z = 0.f;

    Vector() = default;
    Vector(float x_, float y_, float z_) : x(x_), y(y_), z(z_) {}

    Vector operator+(const Vector& o) const { return { x + o.x, y + o.y, z + o.z }; }
    Vector operator-(const Vector& o) const { return { x - o.x, y - o.y, z - o.z }; }
    Vector operator*(float s) const { return { x * s, y * s, z * s }; }

    float Dot(const Vector& o) const { return x * o.x + y * o.y + z * o.z; }
    float LengthSqr() const { return x * x + y * y + z * z; }
};

struct QAngle
{
    float pitch = 0.f, yaw = 0.f, roll = 0.f;

    QAngle() = default;
    QAngle(float p, float y, float r = 0.f) : pitch(p), yaw(y), roll(r) {}

    QAngle operator+(const QAngle& o) const
    {
        return { pitch + o.pitch, yaw + o.yaw, roll + o.roll };
    }
    QAngle operator-(const QAngle& o) const
    {
        return { pitch - o.pitch, yaw - o.yaw, roll - o.roll };
    }
};

constexpr float kPi = 3.14159265358979323846f;
constexpr float kTwoPi = 6.28318530717958647692f;
constexpr float kHalfPi = 1.57079632679489661923f;
constexpr float kRadToDeg = 180.f / kPi;
constexpr float kDegToRad = kPi / 180.f;

// Wraps an angle into (-180, 180]. The original calls this on every component
// it writes back into the command, so an unwrapped angle would drift the aim.
inline float NormalizeAngle(float angle)
{
    if (!std::isfinite(angle))
        return 0.f;
    angle = std::fmod(angle, 360.f);
    if (angle > 180.f)
        angle -= 360.f;
    else if (angle < -180.f)
        angle += 360.f;
    return angle;
}

inline QAngle NormalizeAngles(const QAngle& a)
{
    return { NormalizeAngle(a.pitch), NormalizeAngle(a.yaw), NormalizeAngle(a.roll) };
}

// AngleVectors with pitch down, yaw left-hand around +Z.
inline void AngleVectors(const QAngle& angles, Vector* forward, Vector* right = nullptr,
                         Vector* up = nullptr)
{
    const float sp = std::sin(angles.pitch * kDegToRad);
    const float cp = std::cos(angles.pitch * kDegToRad);
    const float sy = std::sin(angles.yaw * kDegToRad);
    const float cy = std::cos(angles.yaw * kDegToRad);
    const float sr = std::sin(angles.roll * kDegToRad);
    const float cr = std::cos(angles.roll * kDegToRad);

    if (forward)
        *forward = Vector(cp * cy, cp * sy, -sp);

    if (right)
        *right = Vector(-sr * sp * cy + -cr * -sy, -sr * sp * sy + -cr * cy, -sr * cp);

    if (up)
        *up = Vector(cr * sp * cy + -sr * -sy, cr * sp * sy + -sr * cy, cr * cp);
}

// Direction -> angles, same convention as the engine's VectorAngles.
inline QAngle VectorAngles(const Vector& dir)
{
    if (!std::isfinite(dir.x) || !std::isfinite(dir.y) || !std::isfinite(dir.z))
        return {};
    if (dir.x == 0.f && dir.y == 0.f)
        return QAngle(dir.z > 0.f ? 270.f : 90.f, 0.f, 0.f);

    const float yaw = std::atan2(dir.y, dir.x) * kRadToDeg;
    const float hyp = std::sqrt(dir.x * dir.x + dir.y * dir.y);
    const float pitch = std::atan2(-dir.z, hyp) * kRadToDeg;
    return QAngle(pitch, yaw, 0.f);
}

} // namespace sf
