// Generated complete-corpus translation chunk.
// Generator: re/tools/gen_reconstructed_source.py
#include "../reconstruction.h"
#include "../trace_runtime.h"
#include "../symbols.h"

namespace sf::reconstructed {

// 0x1800e36d0 FUN_1800e36d0
// source: re/dump/decompile/0x1800e36d0_FUN_1800e36d0.c
// size: 45 bytes; thunk: false
// body sha256: b43c8f3d9170e116e1c2fa858c5303b877b11f5bf6c407da779a1fe5ba46e677
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e36d0{
    "0x1800e36d0",
    "FUN_1800e36d0",
    R"F1800e36d0S(undefined FUN_1800e36d0())F1800e36d0S",
    R"B1800e36d0(// 0x1800e36d0  FUN_1800e36d0
// size=45 thunk=false
// signature: undefined FUN_1800e36d0()
// status: ok


ulonglong FUN_1800e36d0(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if (param_1 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    lVar2 = (**(code **)(*param_1 + 0x78))();
    if ((lVar2 == 0) || (uVar1 = *(ulonglong *)(lVar2 + 0x10), uVar1 < 0x10000)) {
      uVar1 = 0;
    }
  }
  return uVar1;
}


)B1800e36d0",
    "b43c8f3d9170e116e1c2fa858c5303b877b11f5bf6c407da779a1fe5ba46e677",
    R"F1800e36d0C()F1800e36d0C",
    R"F1800e36d0D()F1800e36d0D",
    R"F1800e36d0T()F1800e36d0T",
    R"F1800e36d0F(13: if (param_1 == (longlong *)0x0) {
16: else {
18: if ((lVar2 == 0) || (uVar1 = *(ulonglong *)(lVar2 + 0x10), uVar1 < 0x10000)) {
22: return uVar1;)F1800e36d0F",
    R"F1800e36d0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: resolve the indirect call in body 17: lVar2 = (**(code **)(*param_1 + 0x78))();.)F1800e36d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e36d0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e36d0", "FUN_1800e36d0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t * param_1{};
    [[maybe_unused]] std::uint64_t uVar1{};
    [[maybe_unused]] std::int64_t lVar2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: resolve the indirect call in body 17: lVar2 = (**(code **)(*param_1 + 0x78))();.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((lVar2 == 0) || (uVar1 = *(ulonglong *)(lVar2 + 0x10), uVar1 < 0x10000)) [reason: pointer depth/pointee not proven]
    // body sha256: b43c8f3d9170e116e1c2fa858c5303b877b11f5bf6c407da779a1fe5ba46e677
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("ulonglong uVar1;");
            trace.statement("longlong lVar2;");
            if (trace.checked_condition("if (param_1 == (longlong *)0x0)", [&]() -> bool { return static_cast<bool>(param_1 == (longlong *)0x0); })) {
                trace.statement("uVar1 = 0;");
            } else {
            trace.statement("lVar2 = (**(code **)(*param_1 + 0x78))();");
            if (trace.condition("if ((lVar2 == 0) || (uVar1 = *(ulonglong *)(lVar2 + 0x10), uVar1 < 0x10000))")) {
                trace.statement("uVar1 = 0;");
            }
            }
            trace.statement("return uVar1;");
        }
    return kFunction_0x1800e36d0;
}

// 0x1800e3700 FUN_1800e3700
// source: re/dump/decompile/0x1800e3700_FUN_1800e3700.c
// size: 80 bytes; thunk: false
// body sha256: 0dbbfeb42297772ca6a241ef536adbfe7939ac0e42d5b0cbc32a4aa7e91e4acb
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e3700{
    "0x1800e3700",
    "FUN_1800e3700",
    R"F1800e3700S(undefined FUN_1800e3700())F1800e3700S",
    R"B1800e3700(// 0x1800e3700  FUN_1800e3700
// size=80 thunk=false
// signature: undefined FUN_1800e3700()
// status: ok


byte * FUN_1800e3700(longlong param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  
  if (param_1 != 0) {
    pbVar1 = (byte *)FUN_18001e410();
    if (((byte *)0xffff < pbVar1) && (bVar3 = *pbVar1, pbVar2 = pbVar1, bVar3 != 0)) {
      while ((bVar3 < 0x21 || (bVar3 == 0x7f))) {
        pbVar2 = pbVar2 + 1;
        bVar3 = *pbVar2;
        if (bVar3 == 0) {
          return (byte *)0x0;
        }
      }
      return pbVar1;
    }
  }
  return (byte *)0x0;
}


)B1800e3700",
    "0dbbfeb42297772ca6a241ef536adbfe7939ac0e42d5b0cbc32a4aa7e91e4acb",
    R"F1800e3700C(FUN_18001e410)F1800e3700C",
    R"F1800e3700D()F1800e3700D",
    R"F1800e3700T()F1800e3700T",
    R"F1800e3700F(14: if (param_1 != 0) {
16: if (((byte *)0xffff < pbVar1) && (bVar3 = *pbVar1, pbVar2 = pbVar1, bVar3 != 0)) {
17: while ((bVar3 < 0x21 || (bVar3 == 0x7f))) {
20: if (bVar3 == 0) {
21: return (byte *)0x0;
24: return pbVar1;
27: return (byte *)0x0;)F1800e3700F",
    R"F1800e3700U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1800e3700U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e3700() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e3700", "FUN_1800e3700");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::uint8_t * pbVar1{};
    [[maybe_unused]] std::uint8_t * pbVar2{};
    [[maybe_unused]] std::uint8_t bVar3{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if (((byte *)0xffff < pbVar1) && (bVar3 = *pbVar1, pbVar2 = pbVar1, bVar3 != 0)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_18001e410");
    trace.call_target("FUN_18001e410", reinterpret_cast<const void*>(&image::FUN_18001e410));
    // body sha256: 0dbbfeb42297772ca6a241ef536adbfe7939ac0e42d5b0cbc32a4aa7e91e4acb
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("byte *pbVar1;");
            trace.statement("byte *pbVar2;");
            trace.statement("byte bVar3;");
            if (trace.checked_condition("if (param_1 != 0)", [&]() -> bool { return static_cast<bool>(param_1 != 0); })) {
                trace.statement("pbVar1 = (byte *)FUN_18001e410();");
                if (trace.condition("if (((byte *)0xffff < pbVar1) && (bVar3 = *pbVar1, pbVar2 = pbVar1, bVar3 != 0))")) {
                    while (trace.checked_loop_condition("while ((bVar3 < 0x21 || (bVar3 == 0x7f)))", [&]() -> bool { return static_cast<bool>((bVar3 < 0x21 || (bVar3 == 0x7f))); })) {
                        trace.statement("pbVar2 = pbVar2 + 1;");
                        trace.statement("bVar3 = *pbVar2;");
                        if (trace.checked_condition("if (bVar3 == 0)", [&]() -> bool { return static_cast<bool>(bVar3 == 0); })) {
                            trace.statement("return (byte *)0x0;");
                        }
                    }
                    trace.statement("return pbVar1;");
                }
            }
            trace.statement("return (byte *)0x0;");
        }
    return kFunction_0x1800e3700;
}

// 0x1800e3750 FUN_1800e3750
// source: re/dump/decompile/0x1800e3750_FUN_1800e3750.c
// size: 3052 bytes; thunk: false
// body sha256: 658ef100eb05ffb2be11cdc3fde86e445913dd85d14965c3bd5f16dab362b7ff
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e3750{
    "0x1800e3750",
    "FUN_1800e3750",
    R"F1800e3750S(undefined FUN_1800e3750())F1800e3750S",
    R"B1800e3750(// 0x1800e3750  FUN_1800e3750
// size=3052 thunk=false
// signature: undefined FUN_1800e3750()
// status: ok


void FUN_1800e3750(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  HMODULE pHVar4;
  ulonglong uVar5;
  
  if ((param_1 != (longlong *)0x0) && (lVar1 = param_1[1], lVar1 != 0)) {
    if (DAT_1803fcfa0 == (FARPROC)0x0) {
      pHVar4 = GetModuleHandleA("lua_shared.dll");
      DAT_1803fcfa0 = GetProcAddress(pHVar4,"lua_gettop");
    }
    uVar5 = (*DAT_1803fcfa0)(lVar1);
    cVar3 = FUN_1800260c0(lVar1,0x2736efefe1fb290);
    pcVar2 = DAT_1803fcbe0;
    if (cVar3 == '\0') {
      FUN_180014410("[LUASTATE] api table unavailable -- persist not ready\n");
    }
    else if (DAT_1803fcbe0 != (code *)0x0) {
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4340);
      (*pcVar2)(lVar1,0xfffffffe,"GetAimbotTarget");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_1800e4580);
      (*pcVar2)(lVar1,0xfffffffe,"InFreecam");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4590);
      (*pcVar2)(lVar1,0xfffffffe,"ToScreen");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e46b0);
      (*pcVar2)(lVar1,0xfffffffe,"ToScreenLine");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4860);
      (*pcVar2)(lVar1,0xfffffffe,"GetHighestEntityIndex");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e48e0);
      (*pcVar2)(lVar1,0xfffffffe,"GetEntityBox");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4a00);
      (*pcVar2)(lVar1,0xfffffffe,"GetEntityClass");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4ab0);
      (*pcVar2)(lVar1,0xfffffffe,"GetEntityNetClass");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4b60);
      (*pcVar2)(lVar1,0xfffffffe,"IsBeingScreengrabbed");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4bb0);
      (*pcVar2)(lVar1,0xfffffffe,"FreecamPos");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4c60);
      (*pcVar2)(lVar1,0xfffffffe,"FreecamAng");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4d10);
      (*pcVar2)(lVar1,0xfffffffe,"GetTeamData");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4ea0);
      (*pcVar2)(lVar1,0xfffffffe,"BlockAimbotTarget");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4ef0);
      (*pcVar2)(lVar1,0xfffffffe,"BlockTraceEntity");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4f40);
      (*pcVar2)(lVar1,0xfffffffe,"BlockTriggerbotTarget");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800516a0);
      (*pcVar2)(lVar1,0xfffffffe,"IsMenuOpen");
      (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4f90);
      (*pcVar2)(lVar1,0xfffffffe,"GetPos");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e5070);
      (*pcVar2)(lVar1,0xfffffffe,"GetName");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e5160);
      (*pcVar2)(lVar1,0xfffffffe,"GetUserID");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_1800e5400);
      (*pcVar2)(lVar1,0xfffffffe,"GetMins");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_1800e55d0);
      (*pcVar2)(lVar1,0xfffffffe,"GetMaxs");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e55e0);
      (*pcVar2)(lVar1,0xfffffffe,"GetEyePos");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e56c0);
      (*pcVar2)(lVar1,0xfffffffe,"GetVelocity");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e57b0);
      (*pcVar2)(lVar1,0xfffffffe,"GetSpeed");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e5890);
      (*pcVar2)(lVar1,0xfffffffe,"IsDormant");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e5970);
      (*pcVar2)(lVar1,0xfffffffe,"GetHealth");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e5a20);
      (*pcVar2)(lVar1,0xfffffffe,"GetTeam");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e5ad0);
      (*pcVar2)(lVar1,0xfffffffe,"GetInt");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e5bc0);
      (*pcVar2)(lVar1,0xfffffffe,"GetString");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e5d40);
      (*pcVar2)(lVar1,0xfffffffe,"GetVector");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e5d40);
      (*pcVar2)(lVar1,0xfffffffe,"GetAngle");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e5e70);
      (*pcVar2)(lVar1,0xfffffffe,"GetEntity");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e5fc0);
      (*pcVar2)(lVar1,0xfffffffe,"GetFloat");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e60b0);
      (*pcVar2)(lVar1,0xfffffffe,"GetBool");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e61a0);
      (*pcVar2)(lVar1,0xfffffffe,"GetTickBase");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6250);
      (*pcVar2)(lVar1,0xfffffffe,"SetTickBase");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e62f0);
      (*pcVar2)(lVar1,0xfffffffe,"GetSimulationTime");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_1800e6410);
      (*pcVar2)(lVar1,0xfffffffe,"InvalidateBoneCache");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6420);
      (*pcVar2)(lVar1,0xfffffffe,"UpdateAnimations");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6510);
      (*pcVar2)(lVar1,0xfffffffe,"UpdateClientAnimation");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e65d0);
      (*pcVar2)(lVar1,0xfffffffe,"GetFeetYaw");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6690);
      (*pcVar2)(lVar1,0xfffffffe,"GetGoalFeetYaw");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6760);
      (*pcVar2)(lVar1,0xfffffffe,"GetAnimEyeYaw");
      (*pcVar2)(lVar1,0xfffffffe,"player");
      (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6820);
      (*pcVar2)(lVar1,0xfffffffe,"GetForwardMove");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6880);
      (*pcVar2)(lVar1,0xfffffffe,"SetForwardMove");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e68d0);
      (*pcVar2)(lVar1,0xfffffffe,"GetSideMove");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6930);
      (*pcVar2)(lVar1,0xfffffffe,"SetSideMove");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6980);
      (*pcVar2)(lVar1,0xfffffffe,"GetUpMove");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e69e0);
      (*pcVar2)(lVar1,0xfffffffe,"SetUpMove");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6a30);
      (*pcVar2)(lVar1,0xfffffffe,"GetButtons");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6aa0);
      (*pcVar2)(lVar1,0xfffffffe,"SetButtons");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6af0);
      (*pcVar2)(lVar1,0xfffffffe,"GetAngles");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6b90);
      (*pcVar2)(lVar1,0xfffffffe,"SetAngles");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6c90);
      (*pcVar2)(lVar1,0xfffffffe,"GetCommandNumber");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6cf0);
      (*pcVar2)(lVar1,0xfffffffe,"GetTickCount");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6d60);
      (*pcVar2)(lVar1,0xfffffffe,"SetCommandNumber");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6dd0);
      (*pcVar2)(lVar1,0xfffffffe,"SetTickCount");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6e40);
      (*pcVar2)(lVar1,0xfffffffe,"GetRandomSeed");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6eb0);
      (*pcVar2)(lVar1,0xfffffffe,"SetRandomSeed");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_1800e70f0);
      (*pcVar2)(lVar1,0xfffffffe,"FindCommandNumber");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e7100);
      (*pcVar2)(lVar1,0xfffffffe,"GetTyping");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e7160);
      (*pcVar2)(lVar1,0xfffffffe,"SetTyping");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e71e0);
      (*pcVar2)(lVar1,0xfffffffe,"GetContextMenu");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e7240);
      (*pcVar2)(lVar1,0xfffffffe,"SetContextMenu");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e72c0);
      (*pcVar2)(lVar1,0xfffffffe,"GetContextVector");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e7360);
      (*pcVar2)(lVar1,0xfffffffe,"SetContextVector");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e7460);
      (*pcVar2)(lVar1,0xfffffffe,"GetMouseDelta");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e74f0);
      (*pcVar2)(lVar1,0xfffffffe,"SetMouseDelta");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e7560);
      (*pcVar2)(lVar1,0xfffffffe,"GetImpulse");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e75d0);
      (*pcVar2)(lVar1,0xfffffffe,"SetImpulse");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e7640);
      (*pcVar2)(lVar1,0xfffffffe,"GetWeaponSelect");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e76b0);
      (*pcVar2)(lVar1,0xfffffffe,"SetWeaponSelect");
      (*pcVar2)(lVar1,0xfffffffe,&DAT_18034ed10);
      (*DAT_1803fcba8)(lVar1,0xffffffff,"engine");
      cVar3 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,5);
      if (cVar3 == '\0') {
        FUN_180014410(
                     "[LUASTATE] engine table missing -- LoopMove NOT registered. Lua::Engine::Register must run BEFORE Lua::State::Register.\n"
                     );
      }
      else {
        (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e7720);
        (*pcVar2)(lVar1,0xfffffffe,"LoopMove");
      }
      (**(code **)(*param_1 + 0x10))(param_1,1);
      if (DAT_180425540 == (FARPROC)0x0) {
        pHVar4 = GetModuleHandleA("lua_shared.dll");
        DAT_180425540 = GetProcAddress(pHVar4,"lua_settop");
      }
      (*DAT_180425540)(lVar1,uVar5 & 0xffffffff);
      FUN_180014410("[LUASTATE] state, player and cmd tables registered\n");
      return;
    }
    if (DAT_180425540 == (FARPROC)0x0) {
      pHVar4 = GetModuleHandleA("lua_shared.dll");
      DAT_180425540 = GetProcAddress(pHVar4,"lua_settop");
    }
    (*DAT_180425540)(lVar1,uVar5 & 0xffffffff);
  }
  return;
}


)B1800e3750",
    "658ef100eb05ffb2be11cdc3fde86e445913dd85d14965c3bd5f16dab362b7ff",
    R"F1800e3750C(FUN_180014410
FUN_1800260c0
FUN_1800516a0
FUN_1800e4340
FUN_1800e4590
FUN_1800e46b0
FUN_1800e4860
FUN_1800e48e0
FUN_1800e4a00
FUN_1800e4ab0
FUN_1800e4b60
FUN_1800e4bb0
FUN_1800e4c60
FUN_1800e4d10
FUN_1800e4ea0
FUN_1800e4ef0
FUN_1800e4f40
FUN_1800e4f90
FUN_1800e5070
FUN_1800e5160
FUN_1800e55e0
FUN_1800e56c0
FUN_1800e57b0
FUN_1800e5890
FUN_1800e5970
FUN_1800e5a20
FUN_1800e5ad0
FUN_1800e5bc0
FUN_1800e5d40
FUN_1800e5e70
FUN_1800e5fc0
FUN_1800e60b0
FUN_1800e61a0
FUN_1800e6250
FUN_1800e62f0
FUN_1800e6420
FUN_1800e6510
FUN_1800e65d0
FUN_1800e6690
FUN_1800e6760
FUN_1800e6820
FUN_1800e6880
FUN_1800e68d0
FUN_1800e6930
FUN_1800e6980
FUN_1800e69e0
FUN_1800e6a30
FUN_1800e6aa0
FUN_1800e6af0
FUN_1800e6b90
FUN_1800e6c90
FUN_1800e6cf0
FUN_1800e6d60
FUN_1800e6dd0
FUN_1800e6e40
FUN_1800e6eb0
FUN_1800e7100
FUN_1800e7160
FUN_1800e71e0
FUN_1800e7240
FUN_1800e72c0
FUN_1800e7360
FUN_1800e7460
FUN_1800e74f0
FUN_1800e7560
FUN_1800e75d0
FUN_1800e7640
FUN_1800e76b0
FUN_1800e7720)F1800e3750C",
    R"F1800e3750D(LAB_1800e4580
LAB_1800e5400
LAB_1800e55d0
LAB_1800e6410
LAB_1800e70f0
DAT_18034ed10
DAT_1803fcba8
DAT_1803fcbe0
DAT_1803fcfa0
DAT_180425540)F1800e3750D",
    R"F1800e3750T("GetInt"
"GetPos"
"engine"
"player"
"GetBool"
"GetMaxs"
"GetMins"
"GetName"
"GetTeam"
"GetAngle"
"GetFloat"
"GetSpeed"
"LoopMove"
"ToScreen"
"GetAngles"
"GetEntity"
"GetEyePos"
"GetHealth"
"GetString"
"GetTyping"
"GetUpMove"
"GetUserID"
"GetVector"
"InFreecam"
"IsDormant"
"SetAngles"
"SetTyping"
"SetUpMove"
"FreecamAng"
"FreecamPos"
"GetButtons"
"GetFeetYaw"
"GetImpulse"
"IsMenuOpen"
"SetButtons"
"SetImpulse"
"lua_gettop"
"lua_settop"
"GetSideMove"
"GetTeamData"
"GetTickBase"
"GetVelocity"
"SetSideMove"
"SetTickBase"
"GetEntityBox"
"GetTickCount"
"SetTickCount"
"ToScreenLine"
"GetAnimEyeYaw"
"GetMouseDelta"
"GetRandomSeed"
"SetMouseDelta"
"SetRandomSeed"
"GetContextMenu"
"GetEntityClass"
"GetForwardMove"
"GetGoalFeetYaw"
"SetContextMenu"
"SetForwardMove"
"lua_shared.dll"
"GetAimbotTarget"
"GetWeaponSelect"
"SetWeaponSelect"
"BlockTraceEntity"
"GetCommandNumber"
"GetContextVector"
"SetCommandNumber"
"SetContextVector"
"UpdateAnimations"
"BlockAimbotTarget"
"FindCommandNumber"
"GetEntityNetClass"
"GetSimulationTime"
"InvalidateBoneCache"
"IsBeingScreengrabbed"
"BlockTriggerbotTarget"
"GetHighestEntityIndex"
"UpdateClientAnimation"
"[LUASTATE] state, player and cmd tables registered\\n"
"[LUASTATE] api table unavailable -- persist not ready\\n"
"[LUASTATE] engine table missing -- LoopMove NOT registered. Lua::Engine::Register must run BEFORE Lua::State::Register.\\n")F1800e3750T",
    R"F1800e3750F(16: if ((param_1 != (longlong *)0x0) && (lVar1 = param_1[1], lVar1 != 0)) {
17: if (DAT_1803fcfa0 == (FARPROC)0x0) {
24: if (cVar3 == '\0') {
27: else if (DAT_1803fcbe0 != (code *)0x0) {
178: if (cVar3 == '\0') {
183: else {
188: if (DAT_180425540 == (FARPROC)0x0) {
194: return;
196: if (DAT_180425540 == (FARPROC)0x0) {
202: return;)F1800e3750F",
    R"F1800e3750U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference LAB_1800e4580.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference LAB_1800e5400.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference LAB_1800e55d0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference LAB_1800e6410.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference LAB_1800e70f0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18034ed10.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fcba8.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fcbe0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fcfa0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180425540.
TODO: resolve the indirect call in body 21: uVar5 = (*DAT_1803fcfa0)(lVar1);.
TODO: resolve the indirect call in body 27: else if (DAT_1803fcbe0 != (code *)0x0) {.
TODO: resolve the indirect call in body 28: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4340);.
TODO: resolve the indirect call in body 29: (*pcVar2)(lVar1,0xfffffffe,"GetAimbotTarget");.
TODO: resolve the indirect call in body 30: (**(code **)(*param_1 + 0x100))(param_1,&LAB_1800e4580);.
TODO: resolve the indirect call in body 31: (*pcVar2)(lVar1,0xfffffffe,"InFreecam");.
TODO: resolve the indirect call in body 32: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4590);.
TODO: resolve the indirect call in body 33: (*pcVar2)(lVar1,0xfffffffe,"ToScreen");.
TODO: resolve the indirect call in body 34: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e46b0);.
TODO: resolve the indirect call in body 35: (*pcVar2)(lVar1,0xfffffffe,"ToScreenLine");.
TODO: resolve the indirect call in body 36: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4860);.
TODO: resolve the indirect call in body 37: (*pcVar2)(lVar1,0xfffffffe,"GetHighestEntityIndex");.
TODO: resolve the indirect call in body 38: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e48e0);.
TODO: resolve the indirect call in body 39: (*pcVar2)(lVar1,0xfffffffe,"GetEntityBox");.
TODO: resolve the indirect call in body 40: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4a00);.
TODO: resolve the indirect call in body 41: (*pcVar2)(lVar1,0xfffffffe,"GetEntityClass");.
TODO: resolve the indirect call in body 42: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4ab0);.
TODO: resolve the indirect call in body 43: (*pcVar2)(lVar1,0xfffffffe,"GetEntityNetClass");.
TODO: resolve the indirect call in body 44: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4b60);.
TODO: resolve the indirect call in body 45: (*pcVar2)(lVar1,0xfffffffe,"IsBeingScreengrabbed");.
TODO: resolve the indirect call in body 46: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4bb0);.
TODO: resolve the indirect call in body 47: (*pcVar2)(lVar1,0xfffffffe,"FreecamPos");.
TODO: resolve the indirect call in body 48: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4c60);.
TODO: resolve the indirect call in body 49: (*pcVar2)(lVar1,0xfffffffe,"FreecamAng");.
TODO: resolve the indirect call in body 50: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4d10);.
TODO: resolve the indirect call in body 51: (*pcVar2)(lVar1,0xfffffffe,"GetTeamData");.
TODO: resolve the indirect call in body 52: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4ea0);.
TODO: resolve the indirect call in body 53: (*pcVar2)(lVar1,0xfffffffe,"BlockAimbotTarget");.
TODO: resolve the indirect call in body 54: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4ef0);.
TODO: resolve the indirect call in body 55: (*pcVar2)(lVar1,0xfffffffe,"BlockTraceEntity");.
TODO: resolve the indirect call in body 56: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4f40);.
TODO: resolve the indirect call in body 57: (*pcVar2)(lVar1,0xfffffffe,"BlockTriggerbotTarget");.
TODO: resolve the indirect call in body 58: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800516a0);.
TODO: resolve the indirect call in body 59: (*pcVar2)(lVar1,0xfffffffe,"IsMenuOpen");.
TODO: resolve the indirect call in body 60: (**(code **)(*param_1 + 0x30))(param_1);.
TODO: resolve the indirect call in body 61: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4f90);.
TODO: resolve the indirect call in body 62: (*pcVar2)(lVar1,0xfffffffe,"GetPos");.
TODO: resolve the indirect call in body 63: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e5070);.
TODO: resolve the indirect call in body 64: (*pcVar2)(lVar1,0xfffffffe,"GetName");.
TODO: resolve the indirect call in body 65: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e5160);.
TODO: resolve the indirect call in body 66: (*pcVar2)(lVar1,0xfffffffe,"GetUserID");.
TODO: resolve the indirect call in body 67: (**(code **)(*param_1 + 0x100))(param_1,&LAB_1800e5400);.
TODO: resolve the indirect call in body 68: (*pcVar2)(lVar1,0xfffffffe,"GetMins");.
TODO: resolve the indirect call in body 69: (**(code **)(*param_1 + 0x100))(param_1,&LAB_1800e55d0);.
TODO: resolve the indirect call in body 70: (*pcVar2)(lVar1,0xfffffffe,"GetMaxs");.
TODO: resolve the indirect call in body 71: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e55e0);.
TODO: resolve the indirect call in body 72: (*pcVar2)(lVar1,0xfffffffe,"GetEyePos");.
TODO: resolve the indirect call in body 73: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e56c0);.
TODO: resolve the indirect call in body 74: (*pcVar2)(lVar1,0xfffffffe,"GetVelocity");.
TODO: resolve the indirect call in body 75: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e57b0);.
TODO: resolve the indirect call in body 76: (*pcVar2)(lVar1,0xfffffffe,"GetSpeed");.
TODO: resolve the indirect call in body 77: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e5890);.
TODO: resolve the indirect call in body 78: (*pcVar2)(lVar1,0xfffffffe,"IsDormant");.
TODO: resolve the indirect call in body 79: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e5970);.
TODO: resolve the indirect call in body 80: (*pcVar2)(lVar1,0xfffffffe,"GetHealth");.
TODO: resolve the indirect call in body 81: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e5a20);.
TODO: resolve the indirect call in body 82: (*pcVar2)(lVar1,0xfffffffe,"GetTeam");.
TODO: resolve the indirect call in body 83: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e5ad0);.
TODO: resolve the indirect call in body 84: (*pcVar2)(lVar1,0xfffffffe,"GetInt");.
TODO: resolve the indirect call in body 85: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e5bc0);.
TODO: resolve the indirect call in body 86: (*pcVar2)(lVar1,0xfffffffe,"GetString");.
TODO: resolve the indirect call in body 87: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e5d40);.
TODO: resolve the indirect call in body 88: (*pcVar2)(lVar1,0xfffffffe,"GetVector");.
TODO: resolve the indirect call in body 89: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e5d40);.
TODO: resolve the indirect call in body 90: (*pcVar2)(lVar1,0xfffffffe,"GetAngle");.
TODO: resolve the indirect call in body 91: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e5e70);.
TODO: resolve the indirect call in body 92: (*pcVar2)(lVar1,0xfffffffe,"GetEntity");.
TODO: resolve the indirect call in body 93: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e5fc0);.
TODO: resolve the indirect call in body 94: (*pcVar2)(lVar1,0xfffffffe,"GetFloat");.
TODO: resolve the indirect call in body 95: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e60b0);.
TODO: resolve the indirect call in body 96: (*pcVar2)(lVar1,0xfffffffe,"GetBool");.
TODO: resolve the indirect call in body 97: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e61a0);.
TODO: resolve the indirect call in body 98: (*pcVar2)(lVar1,0xfffffffe,"GetTickBase");.
TODO: resolve the indirect call in body 99: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6250);.
TODO: resolve the indirect call in body 100: (*pcVar2)(lVar1,0xfffffffe,"SetTickBase");.
TODO: resolve the indirect call in body 101: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e62f0);.
TODO: resolve the indirect call in body 102: (*pcVar2)(lVar1,0xfffffffe,"GetSimulationTime");.
TODO: resolve the indirect call in body 103: (**(code **)(*param_1 + 0x100))(param_1,&LAB_1800e6410);.
TODO: resolve the indirect call in body 104: (*pcVar2)(lVar1,0xfffffffe,"InvalidateBoneCache");.
TODO: resolve the indirect call in body 105: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6420);.
TODO: resolve the indirect call in body 106: (*pcVar2)(lVar1,0xfffffffe,"UpdateAnimations");.
TODO: resolve the indirect call in body 107: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6510);.
TODO: resolve the indirect call in body 108: (*pcVar2)(lVar1,0xfffffffe,"UpdateClientAnimation");.
TODO: resolve the indirect call in body 109: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e65d0);.
TODO: resolve the indirect call in body 110: (*pcVar2)(lVar1,0xfffffffe,"GetFeetYaw");.
TODO: resolve the indirect call in body 111: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6690);.
TODO: resolve the indirect call in body 112: (*pcVar2)(lVar1,0xfffffffe,"GetGoalFeetYaw");.
TODO: resolve the indirect call in body 113: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6760);.
TODO: resolve the indirect call in body 114: (*pcVar2)(lVar1,0xfffffffe,"GetAnimEyeYaw");.
TODO: resolve the indirect call in body 115: (*pcVar2)(lVar1,0xfffffffe,"player");.
TODO: resolve the indirect call in body 116: (**(code **)(*param_1 + 0x30))(param_1);.
TODO: resolve the indirect call in body 117: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6820);.
TODO: resolve the indirect call in body 118: (*pcVar2)(lVar1,0xfffffffe,"GetForwardMove");.
TODO: resolve the indirect call in body 119: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6880);.
TODO: resolve the indirect call in body 120: (*pcVar2)(lVar1,0xfffffffe,"SetForwardMove");.
TODO: resolve the indirect call in body 121: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e68d0);.
TODO: resolve the indirect call in body 122: (*pcVar2)(lVar1,0xfffffffe,"GetSideMove");.
TODO: resolve the indirect call in body 123: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6930);.
TODO: resolve the indirect call in body 124: (*pcVar2)(lVar1,0xfffffffe,"SetSideMove");.
TODO: resolve the indirect call in body 125: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6980);.
TODO: resolve the indirect call in body 126: (*pcVar2)(lVar1,0xfffffffe,"GetUpMove");.
TODO: resolve the indirect call in body 127: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e69e0);.
TODO: resolve the indirect call in body 128: (*pcVar2)(lVar1,0xfffffffe,"SetUpMove");.
TODO: resolve the indirect call in body 129: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6a30);.
TODO: resolve the indirect call in body 130: (*pcVar2)(lVar1,0xfffffffe,"GetButtons");.
TODO: resolve the indirect call in body 131: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6aa0);.
TODO: resolve the indirect call in body 132: (*pcVar2)(lVar1,0xfffffffe,"SetButtons");.
TODO: resolve the indirect call in body 133: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6af0);.
TODO: resolve the indirect call in body 134: (*pcVar2)(lVar1,0xfffffffe,"GetAngles");.
TODO: resolve the indirect call in body 135: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6b90);.
TODO: resolve the indirect call in body 136: (*pcVar2)(lVar1,0xfffffffe,"SetAngles");.
TODO: resolve the indirect call in body 137: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6c90);.
TODO: resolve the indirect call in body 138: (*pcVar2)(lVar1,0xfffffffe,"GetCommandNumber");.
TODO: resolve the indirect call in body 139: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6cf0);.
TODO: resolve the indirect call in body 140: (*pcVar2)(lVar1,0xfffffffe,"GetTickCount");.
TODO: resolve the indirect call in body 141: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6d60);.
TODO: resolve the indirect call in body 142: (*pcVar2)(lVar1,0xfffffffe,"SetCommandNumber");.
TODO: resolve the indirect call in body 143: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6dd0);.
TODO: resolve the indirect call in body 144: (*pcVar2)(lVar1,0xfffffffe,"SetTickCount");.
TODO: resolve the indirect call in body 145: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6e40);.
TODO: resolve the indirect call in body 146: (*pcVar2)(lVar1,0xfffffffe,"GetRandomSeed");.
TODO: resolve the indirect call in body 147: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6eb0);.
TODO: resolve the indirect call in body 148: (*pcVar2)(lVar1,0xfffffffe,"SetRandomSeed");.
TODO: resolve the indirect call in body 149: (**(code **)(*param_1 + 0x100))(param_1,&LAB_1800e70f0);.
TODO: resolve the indirect call in body 150: (*pcVar2)(lVar1,0xfffffffe,"FindCommandNumber");.
TODO: resolve the indirect call in body 151: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e7100);.
TODO: resolve the indirect call in body 152: (*pcVar2)(lVar1,0xfffffffe,"GetTyping");.
TODO: resolve the indirect call in body 153: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e7160);.
TODO: resolve the indirect call in body 154: (*pcVar2)(lVar1,0xfffffffe,"SetTyping");.
TODO: resolve the indirect call in body 155: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e71e0);.
TODO: resolve the indirect call in body 156: (*pcVar2)(lVar1,0xfffffffe,"GetContextMenu");.
TODO: resolve the indirect call in body 157: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e7240);.
TODO: resolve the indirect call in body 158: (*pcVar2)(lVar1,0xfffffffe,"SetContextMenu");.
TODO: resolve the indirect call in body 159: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e72c0);.
TODO: resolve the indirect call in body 160: (*pcVar2)(lVar1,0xfffffffe,"GetContextVector");.
TODO: resolve the indirect call in body 161: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e7360);.
TODO: resolve the indirect call in body 162: (*pcVar2)(lVar1,0xfffffffe,"SetContextVector");.
TODO: resolve the indirect call in body 163: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e7460);.
TODO: resolve the indirect call in body 164: (*pcVar2)(lVar1,0xfffffffe,"GetMouseDelta");.
TODO: resolve the indirect call in body 165: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e74f0);.
TODO: resolve the indirect call in body 166: (*pcVar2)(lVar1,0xfffffffe,"SetMouseDelta");.
TODO: resolve the indirect call in body 167: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e7560);.
TODO: resolve the indirect call in body 168: (*pcVar2)(lVar1,0xfffffffe,"GetImpulse");.
TODO: resolve the indirect call in body 169: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e75d0);.
TODO: resolve the indirect call in body 170: (*pcVar2)(lVar1,0xfffffffe,"SetImpulse");.
TODO: resolve the indirect call in body 171: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e7640);.
TODO: resolve the indirect call in body 172: (*pcVar2)(lVar1,0xfffffffe,"GetWeaponSelect");.
TODO: resolve the indirect call in body 173: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e76b0);.
TODO: resolve the indirect call in body 174: (*pcVar2)(lVar1,0xfffffffe,"SetWeaponSelect");.
TODO: resolve the indirect call in body 175: (*pcVar2)(lVar1,0xfffffffe,&DAT_18034ed10);.
TODO: resolve the indirect call in body 176: (*DAT_1803fcba8)(lVar1,0xffffffff,"engine");.
TODO: resolve the indirect call in body 177: cVar3 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,5);.
TODO: resolve the indirect call in body 184: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e7720);.
TODO: resolve the indirect call in body 185: (*pcVar2)(lVar1,0xfffffffe,"LoopMove");.
TODO: resolve the indirect call in body 187: (**(code **)(*param_1 + 0x10))(param_1,1);.
TODO: resolve the indirect call in body 192: (*DAT_180425540)(lVar1,uVar5 & 0xffffffff);.
TODO: resolve the indirect call in body 200: (*DAT_180425540)(lVar1,uVar5 & 0xffffffff);.)F1800e3750U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e3750() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e3750", "FUN_1800e3750");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t * param_1{};
    [[maybe_unused]] std::int64_t lVar1{};
    [[maybe_unused]] void* * pcVar2{};
    [[maybe_unused]] char cVar3{};
    [[maybe_unused]] std::uintptr_t pHVar4{};
    [[maybe_unused]] std::uint64_t uVar5{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for LAB_1800e4580.
    // TODO: recover global/data declaration, type, value and runtime page/layout for LAB_1800e5400.
    // TODO: recover global/data declaration, type, value and runtime page/layout for LAB_1800e55d0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for LAB_1800e6410.
    // TODO: recover global/data declaration, type, value and runtime page/layout for LAB_1800e70f0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18034ed10.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fcba8.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fcbe0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fcfa0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180425540.
    // TODO: resolve the indirect call in body 21: uVar5 = (*DAT_1803fcfa0)(lVar1);.
    // TODO: resolve the indirect call in body 27: else if (DAT_1803fcbe0 != (code *)0x0) {.
    // TODO: resolve the indirect call in body 28: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4340);.
    // TODO: resolve the indirect call in body 29: (*pcVar2)(lVar1,0xfffffffe,"GetAimbotTarget");.
    // TODO: resolve the indirect call in body 30: (**(code **)(*param_1 + 0x100))(param_1,&LAB_1800e4580);.
    // TODO: resolve the indirect call in body 31: (*pcVar2)(lVar1,0xfffffffe,"InFreecam");.
    // TODO: resolve the indirect call in body 32: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4590);.
    // TODO: resolve the indirect call in body 33: (*pcVar2)(lVar1,0xfffffffe,"ToScreen");.
    // TODO: resolve the indirect call in body 34: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e46b0);.
    // TODO: resolve the indirect call in body 35: (*pcVar2)(lVar1,0xfffffffe,"ToScreenLine");.
    // TODO: resolve the indirect call in body 36: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4860);.
    // TODO: resolve the indirect call in body 37: (*pcVar2)(lVar1,0xfffffffe,"GetHighestEntityIndex");.
    // TODO: resolve the indirect call in body 38: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e48e0);.
    // TODO: resolve the indirect call in body 39: (*pcVar2)(lVar1,0xfffffffe,"GetEntityBox");.
    // TODO: resolve the indirect call in body 40: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4a00);.
    // TODO: resolve the indirect call in body 41: (*pcVar2)(lVar1,0xfffffffe,"GetEntityClass");.
    // TODO: resolve the indirect call in body 42: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4ab0);.
    // TODO: resolve the indirect call in body 43: (*pcVar2)(lVar1,0xfffffffe,"GetEntityNetClass");.
    // TODO: resolve the indirect call in body 44: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4b60);.
    // TODO: resolve the indirect call in body 45: (*pcVar2)(lVar1,0xfffffffe,"IsBeingScreengrabbed");.
    // TODO: resolve the indirect call in body 46: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4bb0);.
    // TODO: resolve the indirect call in body 47: (*pcVar2)(lVar1,0xfffffffe,"FreecamPos");.
    // TODO: resolve the indirect call in body 48: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4c60);.
    // TODO: resolve the indirect call in body 49: (*pcVar2)(lVar1,0xfffffffe,"FreecamAng");.
    // TODO: resolve the indirect call in body 50: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4d10);.
    // TODO: resolve the indirect call in body 51: (*pcVar2)(lVar1,0xfffffffe,"GetTeamData");.
    // TODO: resolve the indirect call in body 52: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4ea0);.
    // TODO: resolve the indirect call in body 53: (*pcVar2)(lVar1,0xfffffffe,"BlockAimbotTarget");.
    // TODO: resolve the indirect call in body 54: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4ef0);.
    // TODO: resolve the indirect call in body 55: (*pcVar2)(lVar1,0xfffffffe,"BlockTraceEntity");.
    // TODO: resolve the indirect call in body 56: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4f40);.
    // TODO: resolve the indirect call in body 57: (*pcVar2)(lVar1,0xfffffffe,"BlockTriggerbotTarget");.
    // TODO: resolve the indirect call in body 58: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800516a0);.
    // TODO: resolve the indirect call in body 59: (*pcVar2)(lVar1,0xfffffffe,"IsMenuOpen");.
    // TODO: resolve the indirect call in body 60: (**(code **)(*param_1 + 0x30))(param_1);.
    // TODO: resolve the indirect call in body 61: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4f90);.
    // TODO: resolve the indirect call in body 62: (*pcVar2)(lVar1,0xfffffffe,"GetPos");.
    // TODO: resolve the indirect call in body 63: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e5070);.
    // TODO: resolve the indirect call in body 64: (*pcVar2)(lVar1,0xfffffffe,"GetName");.
    // TODO: resolve the indirect call in body 65: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e5160);.
    // TODO: resolve the indirect call in body 66: (*pcVar2)(lVar1,0xfffffffe,"GetUserID");.
    // TODO: resolve the indirect call in body 67: (**(code **)(*param_1 + 0x100))(param_1,&LAB_1800e5400);.
    // TODO: resolve the indirect call in body 68: (*pcVar2)(lVar1,0xfffffffe,"GetMins");.
    // TODO: resolve the indirect call in body 69: (**(code **)(*param_1 + 0x100))(param_1,&LAB_1800e55d0);.
    // TODO: resolve the indirect call in body 70: (*pcVar2)(lVar1,0xfffffffe,"GetMaxs");.
    // TODO: resolve the indirect call in body 71: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e55e0);.
    // TODO: resolve the indirect call in body 72: (*pcVar2)(lVar1,0xfffffffe,"GetEyePos");.
    // TODO: resolve the indirect call in body 73: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e56c0);.
    // TODO: resolve the indirect call in body 74: (*pcVar2)(lVar1,0xfffffffe,"GetVelocity");.
    // TODO: resolve the indirect call in body 75: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e57b0);.
    // TODO: resolve the indirect call in body 76: (*pcVar2)(lVar1,0xfffffffe,"GetSpeed");.
    // TODO: resolve the indirect call in body 77: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e5890);.
    // TODO: resolve the indirect call in body 78: (*pcVar2)(lVar1,0xfffffffe,"IsDormant");.
    // TODO: resolve the indirect call in body 79: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e5970);.
    // TODO: resolve the indirect call in body 80: (*pcVar2)(lVar1,0xfffffffe,"GetHealth");.
    // TODO: resolve the indirect call in body 81: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e5a20);.
    // TODO: resolve the indirect call in body 82: (*pcVar2)(lVar1,0xfffffffe,"GetTeam");.
    // TODO: resolve the indirect call in body 83: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e5ad0);.
    // TODO: resolve the indirect call in body 84: (*pcVar2)(lVar1,0xfffffffe,"GetInt");.
    // TODO: resolve the indirect call in body 85: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e5bc0);.
    // TODO: resolve the indirect call in body 86: (*pcVar2)(lVar1,0xfffffffe,"GetString");.
    // TODO: resolve the indirect call in body 87: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e5d40);.
    // TODO: resolve the indirect call in body 88: (*pcVar2)(lVar1,0xfffffffe,"GetVector");.
    // TODO: resolve the indirect call in body 89: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e5d40);.
    // TODO: resolve the indirect call in body 90: (*pcVar2)(lVar1,0xfffffffe,"GetAngle");.
    // TODO: resolve the indirect call in body 91: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e5e70);.
    // TODO: resolve the indirect call in body 92: (*pcVar2)(lVar1,0xfffffffe,"GetEntity");.
    // TODO: resolve the indirect call in body 93: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e5fc0);.
    // TODO: resolve the indirect call in body 94: (*pcVar2)(lVar1,0xfffffffe,"GetFloat");.
    // TODO: resolve the indirect call in body 95: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e60b0);.
    // TODO: resolve the indirect call in body 96: (*pcVar2)(lVar1,0xfffffffe,"GetBool");.
    // TODO: resolve the indirect call in body 97: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e61a0);.
    // TODO: resolve the indirect call in body 98: (*pcVar2)(lVar1,0xfffffffe,"GetTickBase");.
    // TODO: resolve the indirect call in body 99: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6250);.
    // TODO: resolve the indirect call in body 100: (*pcVar2)(lVar1,0xfffffffe,"SetTickBase");.
    // TODO: resolve the indirect call in body 101: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e62f0);.
    // TODO: resolve the indirect call in body 102: (*pcVar2)(lVar1,0xfffffffe,"GetSimulationTime");.
    // TODO: resolve the indirect call in body 103: (**(code **)(*param_1 + 0x100))(param_1,&LAB_1800e6410);.
    // TODO: resolve the indirect call in body 104: (*pcVar2)(lVar1,0xfffffffe,"InvalidateBoneCache");.
    // TODO: resolve the indirect call in body 105: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6420);.
    // TODO: resolve the indirect call in body 106: (*pcVar2)(lVar1,0xfffffffe,"UpdateAnimations");.
    // TODO: resolve the indirect call in body 107: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6510);.
    // TODO: resolve the indirect call in body 108: (*pcVar2)(lVar1,0xfffffffe,"UpdateClientAnimation");.
    // TODO: resolve the indirect call in body 109: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e65d0);.
    // TODO: resolve the indirect call in body 110: (*pcVar2)(lVar1,0xfffffffe,"GetFeetYaw");.
    // TODO: resolve the indirect call in body 111: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6690);.
    // TODO: resolve the indirect call in body 112: (*pcVar2)(lVar1,0xfffffffe,"GetGoalFeetYaw");.
    // TODO: resolve the indirect call in body 113: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6760);.
    // TODO: resolve the indirect call in body 114: (*pcVar2)(lVar1,0xfffffffe,"GetAnimEyeYaw");.
    // TODO: resolve the indirect call in body 115: (*pcVar2)(lVar1,0xfffffffe,"player");.
    // TODO: resolve the indirect call in body 116: (**(code **)(*param_1 + 0x30))(param_1);.
    // TODO: resolve the indirect call in body 117: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6820);.
    // TODO: resolve the indirect call in body 118: (*pcVar2)(lVar1,0xfffffffe,"GetForwardMove");.
    // TODO: resolve the indirect call in body 119: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6880);.
    // TODO: resolve the indirect call in body 120: (*pcVar2)(lVar1,0xfffffffe,"SetForwardMove");.
    // TODO: resolve the indirect call in body 121: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e68d0);.
    // TODO: resolve the indirect call in body 122: (*pcVar2)(lVar1,0xfffffffe,"GetSideMove");.
    // TODO: resolve the indirect call in body 123: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6930);.
    // TODO: resolve the indirect call in body 124: (*pcVar2)(lVar1,0xfffffffe,"SetSideMove");.
    // TODO: resolve the indirect call in body 125: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6980);.
    // TODO: resolve the indirect call in body 126: (*pcVar2)(lVar1,0xfffffffe,"GetUpMove");.
    // TODO: resolve the indirect call in body 127: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e69e0);.
    // TODO: resolve the indirect call in body 128: (*pcVar2)(lVar1,0xfffffffe,"SetUpMove");.
    // TODO: resolve the indirect call in body 129: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6a30);.
    // TODO: resolve the indirect call in body 130: (*pcVar2)(lVar1,0xfffffffe,"GetButtons");.
    // TODO: resolve the indirect call in body 131: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6aa0);.
    // TODO: resolve the indirect call in body 132: (*pcVar2)(lVar1,0xfffffffe,"SetButtons");.
    // TODO: resolve the indirect call in body 133: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6af0);.
    // TODO: resolve the indirect call in body 134: (*pcVar2)(lVar1,0xfffffffe,"GetAngles");.
    // TODO: resolve the indirect call in body 135: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6b90);.
    // TODO: resolve the indirect call in body 136: (*pcVar2)(lVar1,0xfffffffe,"SetAngles");.
    // TODO: resolve the indirect call in body 137: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6c90);.
    // TODO: resolve the indirect call in body 138: (*pcVar2)(lVar1,0xfffffffe,"GetCommandNumber");.
    // TODO: resolve the indirect call in body 139: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6cf0);.
    // TODO: resolve the indirect call in body 140: (*pcVar2)(lVar1,0xfffffffe,"GetTickCount");.
    // TODO: resolve the indirect call in body 141: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6d60);.
    // TODO: resolve the indirect call in body 142: (*pcVar2)(lVar1,0xfffffffe,"SetCommandNumber");.
    // TODO: resolve the indirect call in body 143: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6dd0);.
    // TODO: resolve the indirect call in body 144: (*pcVar2)(lVar1,0xfffffffe,"SetTickCount");.
    // TODO: resolve the indirect call in body 145: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6e40);.
    // TODO: resolve the indirect call in body 146: (*pcVar2)(lVar1,0xfffffffe,"GetRandomSeed");.
    // TODO: resolve the indirect call in body 147: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6eb0);.
    // TODO: resolve the indirect call in body 148: (*pcVar2)(lVar1,0xfffffffe,"SetRandomSeed");.
    // TODO: resolve the indirect call in body 149: (**(code **)(*param_1 + 0x100))(param_1,&LAB_1800e70f0);.
    // TODO: resolve the indirect call in body 150: (*pcVar2)(lVar1,0xfffffffe,"FindCommandNumber");.
    // TODO: resolve the indirect call in body 151: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e7100);.
    // TODO: resolve the indirect call in body 152: (*pcVar2)(lVar1,0xfffffffe,"GetTyping");.
    // TODO: resolve the indirect call in body 153: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e7160);.
    // TODO: resolve the indirect call in body 154: (*pcVar2)(lVar1,0xfffffffe,"SetTyping");.
    // TODO: resolve the indirect call in body 155: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e71e0);.
    // TODO: resolve the indirect call in body 156: (*pcVar2)(lVar1,0xfffffffe,"GetContextMenu");.
    // TODO: resolve the indirect call in body 157: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e7240);.
    // TODO: resolve the indirect call in body 158: (*pcVar2)(lVar1,0xfffffffe,"SetContextMenu");.
    // TODO: resolve the indirect call in body 159: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e72c0);.
    // TODO: resolve the indirect call in body 160: (*pcVar2)(lVar1,0xfffffffe,"GetContextVector");.
    // TODO: resolve the indirect call in body 161: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e7360);.
    // TODO: resolve the indirect call in body 162: (*pcVar2)(lVar1,0xfffffffe,"SetContextVector");.
    // TODO: resolve the indirect call in body 163: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e7460);.
    // TODO: resolve the indirect call in body 164: (*pcVar2)(lVar1,0xfffffffe,"GetMouseDelta");.
    // TODO: resolve the indirect call in body 165: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e74f0);.
    // TODO: resolve the indirect call in body 166: (*pcVar2)(lVar1,0xfffffffe,"SetMouseDelta");.
    // TODO: resolve the indirect call in body 167: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e7560);.
    // TODO: resolve the indirect call in body 168: (*pcVar2)(lVar1,0xfffffffe,"GetImpulse");.
    // TODO: resolve the indirect call in body 169: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e75d0);.
    // TODO: resolve the indirect call in body 170: (*pcVar2)(lVar1,0xfffffffe,"SetImpulse");.
    // TODO: resolve the indirect call in body 171: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e7640);.
    // TODO: resolve the indirect call in body 172: (*pcVar2)(lVar1,0xfffffffe,"GetWeaponSelect");.
    // TODO: resolve the indirect call in body 173: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e76b0);.
    // TODO: resolve the indirect call in body 174: (*pcVar2)(lVar1,0xfffffffe,"SetWeaponSelect");.
    // TODO: resolve the indirect call in body 175: (*pcVar2)(lVar1,0xfffffffe,&DAT_18034ed10);.
    // TODO: resolve the indirect call in body 176: (*DAT_1803fcba8)(lVar1,0xffffffff,"engine");.
    // TODO: resolve the indirect call in body 177: cVar3 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,5);.
    // TODO: resolve the indirect call in body 184: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e7720);.
    // TODO: resolve the indirect call in body 185: (*pcVar2)(lVar1,0xfffffffe,"LoopMove");.
    // TODO: resolve the indirect call in body 187: (**(code **)(*param_1 + 0x10))(param_1,1);.
    // TODO: resolve the indirect call in body 192: (*DAT_180425540)(lVar1,uVar5 & 0xffffffff);.
    // TODO: resolve the indirect call in body 200: (*DAT_180425540)(lVar1,uVar5 & 0xffffffff);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((param_1 != (longlong *)0x0) && (lVar1 = param_1[1], lVar1 != 0)) [reason: pointer-cast target not proven]
    // TODO: condition expression type not recovered: if (DAT_1803fcfa0 == (FARPROC)0x0) [reason: unresolved global storage/width]
    // TODO: condition expression type not recovered: if (DAT_180425540 == (FARPROC)0x0) [reason: unresolved global storage/width]
    // TODO: condition expression type not recovered: if (DAT_180425540 == (FARPROC)0x0) [reason: unresolved global storage/width]
    trace.call_arguments("GetModuleHandleA", "lua_shared.dll");
    trace.call_arguments("GetProcAddress", pHVar4, "lua_gettop");
    trace.call_arguments("FUN_1800260c0", lVar1, 0x2736efefe1fb290);
    trace.call_arguments("FUN_180014410", "[LUASTATE] api table unavailable -- persist not ready\n");
    trace.call_arguments("GetModuleHandleA", "lua_shared.dll");
    trace.call_arguments("GetProcAddress", pHVar4, "lua_settop");
    trace.call_arguments("FUN_180014410", "[LUASTATE] state, player and cmd tables registered\n");
    trace.call_arguments("GetModuleHandleA", "lua_shared.dll");
    trace.call_arguments("GetProcAddress", pHVar4, "lua_settop");
    trace.call_target("FUN_180014410", reinterpret_cast<const void*>(&image::FUN_180014410));
    trace.call_target("FUN_1800260c0", reinterpret_cast<const void*>(&image::FUN_1800260c0));
    trace.call_target("FUN_1800516a0", reinterpret_cast<const void*>(&image::FUN_1800516a0));
    trace.call_target("FUN_1800e4340", reinterpret_cast<const void*>(&image::FUN_1800e4340));
    trace.call_target("FUN_1800e4590", reinterpret_cast<const void*>(&image::FUN_1800e4590));
    trace.call_target("FUN_1800e46b0", reinterpret_cast<const void*>(&image::FUN_1800e46b0));
    trace.call_target("FUN_1800e4860", reinterpret_cast<const void*>(&image::FUN_1800e4860));
    trace.call_target("FUN_1800e48e0", reinterpret_cast<const void*>(&image::FUN_1800e48e0));
    trace.call_target("FUN_1800e4a00", reinterpret_cast<const void*>(&image::FUN_1800e4a00));
    trace.call_target("FUN_1800e4ab0", reinterpret_cast<const void*>(&image::FUN_1800e4ab0));
    trace.call_target("FUN_1800e4b60", reinterpret_cast<const void*>(&image::FUN_1800e4b60));
    trace.call_target("FUN_1800e4bb0", reinterpret_cast<const void*>(&image::FUN_1800e4bb0));
    trace.call_target("FUN_1800e4c60", reinterpret_cast<const void*>(&image::FUN_1800e4c60));
    trace.call_target("FUN_1800e4d10", reinterpret_cast<const void*>(&image::FUN_1800e4d10));
    trace.call_target("FUN_1800e4ea0", reinterpret_cast<const void*>(&image::FUN_1800e4ea0));
    trace.call_target("FUN_1800e4ef0", reinterpret_cast<const void*>(&image::FUN_1800e4ef0));
    trace.call_target("FUN_1800e4f40", reinterpret_cast<const void*>(&image::FUN_1800e4f40));
    trace.call_target("FUN_1800e4f90", reinterpret_cast<const void*>(&image::FUN_1800e4f90));
    trace.call_target("FUN_1800e5070", reinterpret_cast<const void*>(&image::FUN_1800e5070));
    trace.call_target("FUN_1800e5160", reinterpret_cast<const void*>(&image::FUN_1800e5160));
    trace.call_target("FUN_1800e55e0", reinterpret_cast<const void*>(&image::FUN_1800e55e0));
    trace.call_target("FUN_1800e56c0", reinterpret_cast<const void*>(&image::FUN_1800e56c0));
    trace.call_target("FUN_1800e57b0", reinterpret_cast<const void*>(&image::FUN_1800e57b0));
    trace.call_target("FUN_1800e5890", reinterpret_cast<const void*>(&image::FUN_1800e5890));
    trace.call_target("FUN_1800e5970", reinterpret_cast<const void*>(&image::FUN_1800e5970));
    trace.call_target("FUN_1800e5a20", reinterpret_cast<const void*>(&image::FUN_1800e5a20));
    trace.call_target("FUN_1800e5ad0", reinterpret_cast<const void*>(&image::FUN_1800e5ad0));
    trace.call_target("FUN_1800e5bc0", reinterpret_cast<const void*>(&image::FUN_1800e5bc0));
    trace.call_target("FUN_1800e5d40", reinterpret_cast<const void*>(&image::FUN_1800e5d40));
    trace.call_target("FUN_1800e5e70", reinterpret_cast<const void*>(&image::FUN_1800e5e70));
    trace.call_target("FUN_1800e5fc0", reinterpret_cast<const void*>(&image::FUN_1800e5fc0));
    trace.call_target("FUN_1800e60b0", reinterpret_cast<const void*>(&image::FUN_1800e60b0));
    trace.call_target("FUN_1800e61a0", reinterpret_cast<const void*>(&image::FUN_1800e61a0));
    trace.call_target("FUN_1800e6250", reinterpret_cast<const void*>(&image::FUN_1800e6250));
    trace.call_target("FUN_1800e62f0", reinterpret_cast<const void*>(&image::FUN_1800e62f0));
    trace.call_target("FUN_1800e6420", reinterpret_cast<const void*>(&image::FUN_1800e6420));
    trace.call_target("FUN_1800e6510", reinterpret_cast<const void*>(&image::FUN_1800e6510));
    trace.call_target("FUN_1800e65d0", reinterpret_cast<const void*>(&image::FUN_1800e65d0));
    trace.call_target("FUN_1800e6690", reinterpret_cast<const void*>(&image::FUN_1800e6690));
    trace.call_target("FUN_1800e6760", reinterpret_cast<const void*>(&image::FUN_1800e6760));
    trace.call_target("FUN_1800e6820", reinterpret_cast<const void*>(&image::FUN_1800e6820));
    trace.call_target("FUN_1800e6880", reinterpret_cast<const void*>(&image::FUN_1800e6880));
    trace.call_target("FUN_1800e68d0", reinterpret_cast<const void*>(&image::FUN_1800e68d0));
    trace.call_target("FUN_1800e6930", reinterpret_cast<const void*>(&image::FUN_1800e6930));
    trace.call_target("FUN_1800e6980", reinterpret_cast<const void*>(&image::FUN_1800e6980));
    trace.call_target("FUN_1800e69e0", reinterpret_cast<const void*>(&image::FUN_1800e69e0));
    trace.call_target("FUN_1800e6a30", reinterpret_cast<const void*>(&image::FUN_1800e6a30));
    trace.call_target("FUN_1800e6aa0", reinterpret_cast<const void*>(&image::FUN_1800e6aa0));
    trace.call_target("FUN_1800e6af0", reinterpret_cast<const void*>(&image::FUN_1800e6af0));
    trace.call_target("FUN_1800e6b90", reinterpret_cast<const void*>(&image::FUN_1800e6b90));
    trace.call_target("FUN_1800e6c90", reinterpret_cast<const void*>(&image::FUN_1800e6c90));
    trace.call_target("FUN_1800e6cf0", reinterpret_cast<const void*>(&image::FUN_1800e6cf0));
    trace.call_target("FUN_1800e6d60", reinterpret_cast<const void*>(&image::FUN_1800e6d60));
    trace.call_target("FUN_1800e6dd0", reinterpret_cast<const void*>(&image::FUN_1800e6dd0));
    trace.call_target("FUN_1800e6e40", reinterpret_cast<const void*>(&image::FUN_1800e6e40));
    trace.call_target("FUN_1800e6eb0", reinterpret_cast<const void*>(&image::FUN_1800e6eb0));
    trace.call_target("FUN_1800e7100", reinterpret_cast<const void*>(&image::FUN_1800e7100));
    trace.call_target("FUN_1800e7160", reinterpret_cast<const void*>(&image::FUN_1800e7160));
    trace.call_target("FUN_1800e71e0", reinterpret_cast<const void*>(&image::FUN_1800e71e0));
    trace.call_target("FUN_1800e7240", reinterpret_cast<const void*>(&image::FUN_1800e7240));
    trace.call_target("FUN_1800e72c0", reinterpret_cast<const void*>(&image::FUN_1800e72c0));
    trace.call_target("FUN_1800e7360", reinterpret_cast<const void*>(&image::FUN_1800e7360));
    trace.call_target("FUN_1800e7460", reinterpret_cast<const void*>(&image::FUN_1800e7460));
    trace.call_target("FUN_1800e74f0", reinterpret_cast<const void*>(&image::FUN_1800e74f0));
    trace.call_target("FUN_1800e7560", reinterpret_cast<const void*>(&image::FUN_1800e7560));
    trace.call_target("FUN_1800e75d0", reinterpret_cast<const void*>(&image::FUN_1800e75d0));
    trace.call_target("FUN_1800e7640", reinterpret_cast<const void*>(&image::FUN_1800e7640));
    trace.call_target("FUN_1800e76b0", reinterpret_cast<const void*>(&image::FUN_1800e76b0));
    trace.call_target("FUN_1800e7720", reinterpret_cast<const void*>(&image::FUN_1800e7720));
    trace.data_ref("DAT_18034ed10", static_cast<const void*>(&image::DAT_18034ed10));
    trace.data_ref("DAT_1803fcba8", static_cast<const void*>(&image::DAT_1803fcba8));
    trace.data_ref("DAT_1803fcbe0", static_cast<const void*>(&image::DAT_1803fcbe0));
    trace.data_ref("DAT_1803fcfa0", static_cast<const void*>(&image::DAT_1803fcfa0));
    trace.data_ref("DAT_180425540", static_cast<const void*>(&image::DAT_180425540));
    trace.string_literal("GetInt");
    trace.string_literal("GetPos");
    trace.string_literal("engine");
    trace.string_literal("player");
    trace.string_literal("GetBool");
    trace.string_literal("GetMaxs");
    trace.string_literal("GetMins");
    trace.string_literal("GetName");
    trace.string_literal("GetTeam");
    trace.string_literal("GetAngle");
    trace.string_literal("GetFloat");
    trace.string_literal("GetSpeed");
    trace.string_literal("LoopMove");
    trace.string_literal("ToScreen");
    trace.string_literal("GetAngles");
    trace.string_literal("GetEntity");
    trace.string_literal("GetEyePos");
    trace.string_literal("GetHealth");
    trace.string_literal("GetString");
    trace.string_literal("GetTyping");
    trace.string_literal("GetUpMove");
    trace.string_literal("GetUserID");
    trace.string_literal("GetVector");
    trace.string_literal("InFreecam");
    trace.string_literal("IsDormant");
    trace.string_literal("SetAngles");
    trace.string_literal("SetTyping");
    trace.string_literal("SetUpMove");
    trace.string_literal("FreecamAng");
    trace.string_literal("FreecamPos");
    trace.string_literal("GetButtons");
    trace.string_literal("GetFeetYaw");
    trace.string_literal("GetImpulse");
    trace.string_literal("IsMenuOpen");
    trace.string_literal("SetButtons");
    trace.string_literal("SetImpulse");
    trace.string_literal("lua_gettop");
    trace.string_literal("lua_settop");
    trace.string_literal("GetSideMove");
    trace.string_literal("GetTeamData");
    trace.string_literal("GetTickBase");
    trace.string_literal("GetVelocity");
    trace.string_literal("SetSideMove");
    trace.string_literal("SetTickBase");
    trace.string_literal("GetEntityBox");
    trace.string_literal("GetTickCount");
    trace.string_literal("SetTickCount");
    trace.string_literal("ToScreenLine");
    trace.string_literal("GetAnimEyeYaw");
    trace.string_literal("GetMouseDelta");
    trace.string_literal("GetRandomSeed");
    trace.string_literal("SetMouseDelta");
    trace.string_literal("SetRandomSeed");
    trace.string_literal("GetContextMenu");
    trace.string_literal("GetEntityClass");
    trace.string_literal("GetForwardMove");
    trace.string_literal("GetGoalFeetYaw");
    trace.string_literal("SetContextMenu");
    trace.string_literal("SetForwardMove");
    trace.string_literal("lua_shared.dll");
    trace.string_literal("GetAimbotTarget");
    trace.string_literal("GetWeaponSelect");
    trace.string_literal("SetWeaponSelect");
    trace.string_literal("BlockTraceEntity");
    trace.string_literal("GetCommandNumber");
    trace.string_literal("GetContextVector");
    trace.string_literal("SetCommandNumber");
    trace.string_literal("SetContextVector");
    trace.string_literal("UpdateAnimations");
    trace.string_literal("BlockAimbotTarget");
    trace.string_literal("FindCommandNumber");
    trace.string_literal("GetEntityNetClass");
    trace.string_literal("GetSimulationTime");
    trace.string_literal("InvalidateBoneCache");
    trace.string_literal("IsBeingScreengrabbed");
    trace.string_literal("BlockTriggerbotTarget");
    trace.string_literal("GetHighestEntityIndex");
    trace.string_literal("UpdateClientAnimation");
    trace.string_literal("[LUASTATE] state, player and cmd tables registered\\n");
    trace.string_literal("[LUASTATE] api table unavailable -- persist not ready\\n");
    trace.string_literal("[LUASTATE] engine table missing -- LoopMove NOT registered. Lua::Engine::Register must run BEFORE Lua::State::Register.\\n");
    // body sha256: 658ef100eb05ffb2be11cdc3fde86e445913dd85d14965c3bd5f16dab362b7ff
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong lVar1;");
            trace.statement("code *pcVar2;");
            trace.statement("char cVar3;");
            trace.statement("HMODULE pHVar4;");
            trace.statement("ulonglong uVar5;");
            if (trace.condition("if ((param_1 != (longlong *)0x0) && (lVar1 = param_1[1], lVar1 != 0))")) {
                if (trace.condition("if (DAT_1803fcfa0 == (FARPROC)0x0)")) {
                    trace.statement("pHVar4 = GetModuleHandleA(\"lua_shared.dll\");");
                    trace.statement("DAT_1803fcfa0 = GetProcAddress(pHVar4,\"lua_gettop\");");
                }
                trace.statement("uVar5 = (*DAT_1803fcfa0)(lVar1);");
                trace.statement("cVar3 = FUN_1800260c0(lVar1,0x2736efefe1fb290);");
                trace.statement("pcVar2 = DAT_1803fcbe0;");
                if (trace.checked_condition("if (cVar3 == '\\0')", [&]() -> bool { return static_cast<bool>(cVar3 == '\0'); })) {
                    trace.statement("FUN_180014410(\"[LUASTATE] api table unavailable -- persist not ready\\n\");");
                } else {
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4340);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetAimbotTarget\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,&LAB_1800e4580);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"InFreecam\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4590);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"ToScreen\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e46b0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"ToScreenLine\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4860);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetHighestEntityIndex\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e48e0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetEntityBox\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4a00);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetEntityClass\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4ab0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetEntityNetClass\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4b60);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"IsBeingScreengrabbed\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4bb0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"FreecamPos\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4c60);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"FreecamAng\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4d10);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetTeamData\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4ea0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"BlockAimbotTarget\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4ef0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"BlockTraceEntity\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4f40);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"BlockTriggerbotTarget\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800516a0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"IsMenuOpen\");");
                trace.statement("(**(code **)(*param_1 + 0x30))(param_1);");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4f90);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetPos\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e5070);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetName\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e5160);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetUserID\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,&LAB_1800e5400);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetMins\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,&LAB_1800e55d0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetMaxs\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e55e0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetEyePos\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e56c0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetVelocity\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e57b0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetSpeed\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e5890);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"IsDormant\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e5970);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetHealth\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e5a20);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetTeam\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e5ad0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetInt\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e5bc0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetString\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e5d40);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetVector\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e5d40);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetAngle\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e5e70);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetEntity\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e5fc0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetFloat\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e60b0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetBool\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e61a0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetTickBase\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6250);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"SetTickBase\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e62f0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetSimulationTime\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,&LAB_1800e6410);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"InvalidateBoneCache\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6420);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"UpdateAnimations\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6510);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"UpdateClientAnimation\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e65d0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetFeetYaw\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6690);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetGoalFeetYaw\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6760);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetAnimEyeYaw\");");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"player\");");
                trace.statement("(**(code **)(*param_1 + 0x30))(param_1);");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6820);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetForwardMove\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6880);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"SetForwardMove\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e68d0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetSideMove\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6930);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"SetSideMove\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6980);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetUpMove\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e69e0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"SetUpMove\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6a30);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetButtons\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6aa0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"SetButtons\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6af0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetAngles\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6b90);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"SetAngles\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6c90);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetCommandNumber\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6cf0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetTickCount\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6d60);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"SetCommandNumber\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6dd0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"SetTickCount\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6e40);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetRandomSeed\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e6eb0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"SetRandomSeed\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,&LAB_1800e70f0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"FindCommandNumber\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e7100);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetTyping\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e7160);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"SetTyping\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e71e0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetContextMenu\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e7240);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"SetContextMenu\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e72c0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetContextVector\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e7360);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"SetContextVector\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e7460);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetMouseDelta\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e74f0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"SetMouseDelta\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e7560);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetImpulse\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e75d0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"SetImpulse\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e7640);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetWeaponSelect\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e76b0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"SetWeaponSelect\");");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,&DAT_18034ed10);");
                trace.statement("(*DAT_1803fcba8)(lVar1,0xffffffff,\"engine\");");
                trace.statement("cVar3 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,5);");
                if (trace.checked_condition("if (cVar3 == '\\0')", [&]() -> bool { return static_cast<bool>(cVar3 == '\0'); })) {
                    trace.statement("FUN_180014410(");
                    trace.statement("\"[LUASTATE] engine table missing -- LoopMove NOT registered. Lua::Engine::Register must run BEFORE Lua::State::Register.\\n\"");
                    trace.statement(");");
                } else {
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e7720);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"LoopMove\");");
                }
                trace.statement("(**(code **)(*param_1 + 0x10))(param_1,1);");
                if (trace.condition("if (DAT_180425540 == (FARPROC)0x0)")) {
                    trace.statement("pHVar4 = GetModuleHandleA(\"lua_shared.dll\");");
                    trace.statement("DAT_180425540 = GetProcAddress(pHVar4,\"lua_settop\");");
                }
                trace.statement("(*DAT_180425540)(lVar1,uVar5 & 0xffffffff);");
                trace.statement("FUN_180014410(\"[LUASTATE] state, player and cmd tables registered\\n\");");
                trace.statement("return;");
                }
                if (trace.condition("if (DAT_180425540 == (FARPROC)0x0)")) {
                    trace.statement("pHVar4 = GetModuleHandleA(\"lua_shared.dll\");");
                    trace.statement("DAT_180425540 = GetProcAddress(pHVar4,\"lua_settop\");");
                }
                trace.statement("(*DAT_180425540)(lVar1,uVar5 & 0xffffffff);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1800e3750;
}

// 0x1800e4340 FUN_1800e4340
// source: re/dump/decompile/0x1800e4340_FUN_1800e4340.c
// size: 120 bytes; thunk: false
// body sha256: 9a690af7220148a8e6ee93f80e26ccf52af64123fa4c83e295d768e7dda46285
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e4340{
    "0x1800e4340",
    "FUN_1800e4340",
    R"F1800e4340S(undefined FUN_1800e4340())F1800e4340S",
    R"B1800e4340(// 0x1800e4340  FUN_1800e4340
// size=120 thunk=false
// signature: undefined FUN_1800e4340()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800e4340(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
    return 0;
  }
  iVar1 = 0;
  if (DAT_1803fa608 != 0) {
    iVar1 = *(int *)(DAT_1803fa608 + 4);
  }
  if ((0 < DAT_18040a408) && (iVar1 - _DAT_1803e9080 < 2)) {
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)DAT_18040a408);
    return 1;
  }
  (**(code **)(*plVar2 + 0xe0))();
  return 1;
}


)B1800e4340",
    "9a690af7220148a8e6ee93f80e26ccf52af64123fa4c83e295d768e7dda46285",
    R"F1800e4340C(FUN_180039770)F1800e4340C",
    R"F1800e4340D(_DAT_1803e9080
DAT_1803fa608
DAT_18040a408)F1800e4340D",
    R"F1800e4340T()F1800e4340T",
    R"F1800e4340F(16: if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
17: return 0;
20: if (DAT_1803fa608 != 0) {
23: if ((0 < DAT_18040a408) && (iVar1 - _DAT_1803e9080 < 2)) {
25: return 1;
28: return 1;)F1800e4340F",
    R"F1800e4340U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference _DAT_1803e9080.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa608.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18040a408.
TODO: resolve the indirect call in body 24: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)DAT_18040a408);.
TODO: resolve the indirect call in body 27: (**(code **)(*plVar2 + 0xe0))();.)F1800e4340U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e4340() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e4340", "FUN_1800e4340");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int32_t iVar1{};
    [[maybe_unused]] std::int64_t * plVar2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for _DAT_1803e9080.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa608.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18040a408.
    // TODO: resolve the indirect call in body 24: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)DAT_18040a408);.
    // TODO: resolve the indirect call in body 27: (**(code **)(*plVar2 + 0xe0))();.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("_DAT_1803e9080", static_cast<const void*>(&image::_DAT_1803e9080));
    trace.data_ref("DAT_1803fa608", static_cast<const void*>(&image::DAT_1803fa608));
    trace.data_ref("DAT_18040a408", static_cast<const void*>(&image::DAT_18040a408));
    // body sha256: 9a690af7220148a8e6ee93f80e26ccf52af64123fa4c83e295d768e7dda46285
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("int iVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1))")) {
                trace.statement("return 0;");
            }
            trace.statement("iVar1 = 0;");
            if (trace.checked_condition("if (DAT_1803fa608 != 0)", [&]() -> bool { return static_cast<bool>(image::DAT_1803fa608 != 0); })) {
                trace.statement("iVar1 = *(int *)(DAT_1803fa608 + 4);");
            }
            if (trace.checked_condition("if ((0 < DAT_18040a408) && (iVar1 - _DAT_1803e9080 < 2))", [&]() -> bool { return static_cast<bool>((0 < image::DAT_18040a408) && (iVar1 - image::_DAT_1803e9080 < 2)); })) {
                trace.statement("(**(code **)(*plVar2 + 0xf0))(plVar2,(double)DAT_18040a408);");
                trace.statement("return 1;");
            }
            trace.statement("(**(code **)(*plVar2 + 0xe0))();");
            trace.statement("return 1;");
        }
    return kFunction_0x1800e4340;
}

// 0x1800e43c0 FUN_1800e43c0
// source: re/dump/decompile/0x1800e43c0_FUN_1800e43c0.c
// size: 442 bytes; thunk: false
// body sha256: 68411830e90ef8a8c1e21458184460f9e11df021073dd0ffc5a47022b9cc2735
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e43c0{
    "0x1800e43c0",
    "FUN_1800e43c0",
    R"F1800e43c0S(undefined FUN_1800e43c0())F1800e43c0S",
    R"B1800e43c0(// 0x1800e43c0  FUN_1800e43c0
// size=442 thunk=false
// signature: undefined FUN_1800e43c0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800e43c0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  TypeDescriptor *pTVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  char *pcVar13;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_2)) {
    return 0;
  }
  uVar10 = 0x14650fb0739d0383;
  pcVar13 = "freecam";
  uVar6 = 0x14650fb0739d0383;
  do {
    if (*pcVar13 == 0) break;
    uVar6 = (uVar6 ^ (byte)*pcVar13) * 0x100000001b3;
    pcVar13 = pcVar13 + 1;
  } while ((byte *)pcVar13 != (byte *)0x0);
  plVar4 = (longlong *)DAT_1803fadf0[1];
  cVar1 = *(char *)((longlong)plVar4 + 0x19);
  plVar5 = DAT_1803fadf0;
  while (cVar1 == '\0') {
    plVar8 = plVar4;
    if ((ulonglong)plVar4[4] < uVar6) {
      plVar4 = plVar4 + 2;
      plVar8 = plVar5;
    }
    plVar4 = (longlong *)*plVar4;
    plVar5 = plVar8;
    cVar1 = *(char *)((longlong)plVar4 + 0x19);
  }
  if ((*(char *)((longlong)plVar5 + 0x19) != '\0') || (uVar6 < (ulonglong)plVar5[4])) {
    plVar5 = DAT_1803fadf0;
  }
  if ((plVar5 == DAT_1803fadf0) || (plVar5 + 5 == (longlong *)0x0)) {
    lVar12 = *plVar3;
  }
  else {
    pcVar13 = "enabled";
    do {
      if (*pcVar13 == 0) break;
      uVar10 = (uVar10 ^ (byte)*pcVar13) * 0x100000001b3;
      pcVar13 = pcVar13 + 1;
    } while ((byte *)pcVar13 != (byte *)0x0);
    plVar4 = (longlong *)plVar5[5];
    plVar5 = (longlong *)plVar4[1];
    cVar1 = *(char *)((longlong)plVar5 + 0x19);
    plVar8 = plVar4;
    while (cVar1 == '\0') {
      plVar7 = plVar5;
      if ((ulonglong)plVar5[4] < uVar10) {
        plVar5 = plVar5 + 2;
        plVar7 = plVar8;
      }
      plVar5 = (longlong *)*plVar5;
      plVar8 = plVar7;
      cVar1 = *(char *)((longlong)plVar5 + 0x19);
    }
    if ((*(char *)((longlong)plVar8 + 0x19) != '\0') || (uVar10 < (ulonglong)plVar8[4])) {
      plVar8 = plVar4;
    }
    lVar12 = *plVar3;
    plVar5 = (longlong *)0x0;
    if (plVar8 != plVar4) {
      plVar5 = plVar8 + 5;
    }
    if (plVar5 != (longlong *)0x0) {
      pTVar9 = &.X::RTTI_Type_Descriptor;
      if ((TypeDescriptor *)(plVar5[9] & 0xfffffffffffffffcU) != (TypeDescriptor *)0x0) {
        pTVar9 = (TypeDescriptor *)(plVar5[9] & 0xfffffffffffffffcU);
      }
      iVar2 = __std_type_info_compare(&pTVar9->spare,0x1803eddb8);
      if (iVar2 == 0) {
        if (((plVar5 + 2 == (longlong *)0x0) || ((plVar5[9] & 0xfffffffffffffffcU) == 0)) ||
           (iVar2 = __std_type_info_compare((plVar5[9] & 0xfffffffffffffffcU) + 8,0x1803eddb8),
           iVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_180014070();
        }
        if ((char)plVar5[2] != '\0') {
          uVar11 = 1;
          goto LAB_1800e4546;
        }
      }
    }
  }
  uVar11 = 0;
LAB_1800e4546:
  (**(code **)(lVar12 + 0xf8))(plVar3,uVar11);
  return 1;
}


)B1800e43c0",
    "68411830e90ef8a8c1e21458184460f9e11df021073dd0ffc5a47022b9cc2735",
    R"F1800e43c0C(FUN_180014070
FUN_180039770)F1800e43c0C",
    R"F1800e43c0D(LAB_1800e4546
DAT_1803da4c0
DAT_1803fadf0)F1800e43c0D",
    R"F1800e43c0T("enabled"
"freecam")F1800e43c0T",
    R"F1800e43c0F(30: if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_2)) {
31: return 0;
36: do {
37: if (*pcVar13 == 0) break;
44: while (cVar1 == '\0') {
46: if ((ulonglong)plVar4[4] < uVar6) {
54: if ((*(char *)((longlong)plVar5 + 0x19) != '\0') || (uVar6 < (ulonglong)plVar5[4])) {
57: if ((plVar5 == DAT_1803fadf0) || (plVar5 + 5 == (longlong *)0x0)) {
60: else {
62: do {
63: if (*pcVar13 == 0) break;
71: while (cVar1 == '\0') {
73: if ((ulonglong)plVar5[4] < uVar10) {
81: if ((*(char *)((longlong)plVar8 + 0x19) != '\0') || (uVar10 < (ulonglong)plVar8[4])) {
86: if (plVar8 != plVar4) {
89: if (plVar5 != (longlong *)0x0) {
91: if ((TypeDescriptor *)(plVar5[9] & 0xfffffffffffffffcU) != (TypeDescriptor *)0x0) {
95: if (iVar2 == 0) {
96: if (((plVar5 + 2 == (longlong *)0x0) || ((plVar5[9] & 0xfffffffffffffffcU) == 0)) ||
102: if ((char)plVar5[2] != '\0') {
104: goto LAB_1800e4546;
110: LAB_1800e4546:
112: return 1;)F1800e43c0F",
    R"F1800e43c0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference LAB_1800e4546.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fadf0.
TODO: resolve the indirect call in body 111: (**(code **)(lVar12 + 0xf8))(plVar3,uVar11);.)F1800e43c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e43c0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e43c0", "FUN_1800e43c0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    [[maybe_unused]] char cVar1{};
    [[maybe_unused]] std::int32_t iVar2{};
    [[maybe_unused]] std::int64_t * plVar3{};
    [[maybe_unused]] std::int64_t * plVar4{};
    [[maybe_unused]] std::int64_t * plVar5{};
    [[maybe_unused]] std::uint64_t uVar6{};
    [[maybe_unused]] std::int64_t * plVar7{};
    [[maybe_unused]] std::int64_t * plVar8{};
    [[maybe_unused]] std::uint64_t uVar10{};
    [[maybe_unused]] std::uint64_t uVar11{};
    [[maybe_unused]] std::int64_t lVar12{};
    [[maybe_unused]] char * pcVar13{};
    [[maybe_unused]] std::uint8_t auStack_38[32]{};
    [[maybe_unused]] std::uint64_t local_18{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for LAB_1800e4546.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803da4c0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fadf0.
    // TODO: resolve the indirect call in body 111: (**(code **)(lVar12 + 0xf8))(plVar3,uVar11);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_2)) [reason: pointer-cast target not proven]
    // TODO: condition expression type not recovered: if ((plVar5 == DAT_1803fadf0) || (plVar5 + 5 == (longlong *)0x0)) [reason: unresolved global storage/width]
    // TODO: condition expression type not recovered: if ((TypeDescriptor *)(plVar5[9] & 0xfffffffffffffffcU) != (TypeDescriptor *)0x0) [reason: pointer-cast target not proven]
    // TODO: call arguments not type-recovered for __std_type_info_compare: &pTVar9->spare,0x1803eddb8 [reason: unknown aggregate layout]
    // TODO: call arguments not type-recovered for __std_type_info_compare: (plVar5[9] & 0xfffffffffffffffcU) + 8,0x1803eddb8 [reason: ambiguous operand type]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("FUN_180014070");
    trace.call_target("FUN_180014070", reinterpret_cast<const void*>(&image::FUN_180014070));
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803da4c0", static_cast<const void*>(&image::DAT_1803da4c0));
    trace.data_ref("DAT_1803fadf0", static_cast<const void*>(&image::DAT_1803fadf0));
    trace.string_literal("enabled");
    trace.string_literal("freecam");
    // body sha256: 68411830e90ef8a8c1e21458184460f9e11df021073dd0ffc5a47022b9cc2735
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("char cVar1;");
            trace.statement("int iVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("longlong *plVar4;");
            trace.statement("longlong *plVar5;");
            trace.statement("ulonglong uVar6;");
            trace.statement("longlong *plVar7;");
            trace.statement("longlong *plVar8;");
            trace.statement("TypeDescriptor *pTVar9;");
            trace.statement("ulonglong uVar10;");
            trace.statement("undefined8 uVar11;");
            trace.statement("longlong lVar12;");
            trace.statement("char *pcVar13;");
            trace.statement("undefined1 auStack_38 [32];");
            trace.statement("ulonglong local_18;");
            trace.statement("local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_38;");
            trace.statement("plVar3 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_2))")) {
                trace.statement("return 0;");
            }
            trace.statement("uVar10 = 0x14650fb0739d0383;");
            trace.statement("pcVar13 = \"freecam\";");
            trace.statement("uVar6 = 0x14650fb0739d0383;");
            do {
                if (trace.condition("if (*pcVar13 == 0) break; uVar6 = (uVar6 ^ (byte)*pcVar13) * 0x100000001b3; pcVar13 = pcVar13 + 1; } while ((byte *)pcVar13 != (byte *)0x0); plVar4 = (longlong *)DAT_1803fadf0[1]; cVar1 = *(char *)((longlong)plVar4 + 0x19); plVar5 = DAT_1803fadf0; while (cVar1 == '\\0')")) {
                    trace.statement("plVar8 = plVar4;");
                    if (trace.checked_condition("if ((ulonglong)plVar4[4] < uVar6)", [&]() -> bool { return static_cast<bool>(static_cast<std::uint64_t>(plVar4[4]) < uVar6); })) {
                        trace.statement("plVar4 = plVar4 + 2;");
                        trace.statement("plVar8 = plVar5;");
                    }
                    trace.statement("plVar4 = (longlong *)*plVar4;");
                    trace.statement("plVar5 = plVar8;");
                    trace.statement("cVar1 = *(char *)((longlong)plVar4 + 0x19);");
                }
                if (trace.checked_condition("if ((*(char *)((longlong)plVar5 + 0x19) != '\\0') || (uVar6 < (ulonglong)plVar5[4]))", [&]() -> bool { return static_cast<bool>((load_at<char>(reinterpret_cast<std::int64_t>(plVar5) + 0x19, 0) != '\0') || (uVar6 < static_cast<std::uint64_t>(plVar5[4]))); })) {
                    trace.statement("plVar5 = DAT_1803fadf0;");
                }
                if (trace.condition("if ((plVar5 == DAT_1803fadf0) || (plVar5 + 5 == (longlong *)0x0))")) {
                    trace.statement("lVar12 = *plVar3;");
                } else {
                trace.statement("pcVar13 = \"enabled\";");
                do {
                    if (trace.condition("if (*pcVar13 == 0) break; uVar10 = (uVar10 ^ (byte)*pcVar13) * 0x100000001b3; pcVar13 = pcVar13 + 1; } while ((byte *)pcVar13 != (byte *)0x0); plVar4 = (longlong *)plVar5[5]; plVar5 = (longlong *)plVar4[1]; cVar1 = *(char *)((longlong)plVar5 + 0x19); plVar8 = plVar4; while (cVar1 == '\\0')")) {
                        trace.statement("plVar7 = plVar5;");
                        if (trace.checked_condition("if ((ulonglong)plVar5[4] < uVar10)", [&]() -> bool { return static_cast<bool>(static_cast<std::uint64_t>(plVar5[4]) < uVar10); })) {
                            trace.statement("plVar5 = plVar5 + 2;");
                            trace.statement("plVar7 = plVar8;");
                        }
                        trace.statement("plVar5 = (longlong *)*plVar5;");
                        trace.statement("plVar8 = plVar7;");
                        trace.statement("cVar1 = *(char *)((longlong)plVar5 + 0x19);");
                    }
                    if (trace.checked_condition("if ((*(char *)((longlong)plVar8 + 0x19) != '\\0') || (uVar10 < (ulonglong)plVar8[4]))", [&]() -> bool { return static_cast<bool>((load_at<char>(reinterpret_cast<std::int64_t>(plVar8) + 0x19, 0) != '\0') || (uVar10 < static_cast<std::uint64_t>(plVar8[4]))); })) {
                        trace.statement("plVar8 = plVar4;");
                    }
                    trace.statement("lVar12 = *plVar3;");
                    trace.statement("plVar5 = (longlong *)0x0;");
                    if (trace.checked_condition("if (plVar8 != plVar4)", [&]() -> bool { return static_cast<bool>(plVar8 != plVar4); })) {
                        trace.statement("plVar5 = plVar8 + 5;");
                    }
                    if (trace.checked_condition("if (plVar5 != (longlong *)0x0)", [&]() -> bool { return static_cast<bool>(plVar5 != (longlong *)0x0); })) {
                        trace.statement("pTVar9 = &.X::RTTI_Type_Descriptor;");
                        if (trace.condition("if ((TypeDescriptor *)(plVar5[9] & 0xfffffffffffffffcU) != (TypeDescriptor *)0x0)")) {
                            trace.statement("pTVar9 = (TypeDescriptor *)(plVar5[9] & 0xfffffffffffffffcU);");
                        }
                        trace.statement("iVar2 = __std_type_info_compare(&pTVar9->spare,0x1803eddb8);");
                        if (trace.checked_condition("if (iVar2 == 0)", [&]() -> bool { return static_cast<bool>(iVar2 == 0); })) {
                            if (trace.condition("if (((plVar5 + 2 == (longlong *)0x0) || ((plVar5[9] & 0xfffffffffffffffcU) == 0)) || (iVar2 = __std_type_info_compare((plVar5[9] & 0xfffffffffffffffcU) + 8,0x1803eddb8), iVar2 != 0))")) {
                                trace.statement("FUN_180014070();");
                            }
                            if (trace.checked_condition("if ((char)plVar5[2] != '\\0')", [&]() -> bool { return static_cast<bool>(static_cast<char>(plVar5[2]) != '\0'); })) {
                                trace.statement("uVar11 = 1;");
                                trace.statement("goto LAB_1800e4546;");
                            }
                        }
                    }
                } while (trace.loop_condition("do/while"));
                trace.statement("uVar11 = 0;");
                LAB_1800e4546: ;
                trace.statement("(**(code **)(lVar12 + 0xf8))(plVar3,uVar11);");
                trace.statement("return 1;");
                }
            } while (trace.loop_condition("do/while"));
        }
    return kFunction_0x1800e43c0;
}

// 0x1800e4590 FUN_1800e4590
// source: re/dump/decompile/0x1800e4590_FUN_1800e4590.c
// size: 281 bytes; thunk: false
// body sha256: a4952a82558d3ecdf408f725637f69205bbf2b7a8c1c2acbf7fce5e3343517ce
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e4590{
    "0x1800e4590",
    "FUN_1800e4590",
    R"F1800e4590S(undefined FUN_1800e4590())F1800e4590S",
    R"B1800e4590(// 0x1800e4590  FUN_1800e4590
// size=281 thunk=false
// signature: undefined FUN_1800e4590()
// status: ok


undefined8 FUN_1800e4590(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float local_res10;
  float local_res14;
  float local_38;
  float local_34;
  float local_30;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    dVar3 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,3);
    dVar4 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,2);
    dVar5 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
    local_38 = (float)dVar5;
    local_34 = (float)dVar4;
    local_30 = (float)dVar3;
    cVar1 = FUN_180021ac0(&local_38,&local_res10);
    if (cVar1 == '\0') {
      (**(code **)(*plVar2 + 0xf8))(plVar2,0);
      return 1;
    }
    (**(code **)(*plVar2 + 0xf8))(plVar2,1);
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_res10);
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_res14);
    return 3;
  }
  return 0;
}


)B1800e4590",
    "a4952a82558d3ecdf408f725637f69205bbf2b7a8c1c2acbf7fce5e3343517ce",
    R"F1800e4590C(FUN_180021ac0
FUN_180039770)F1800e4590C",
    R"F1800e4590D()F1800e4590D",
    R"F1800e4590T()F1800e4590T",
    R"F1800e4590F(22: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
30: if (cVar1 == '\0') {
32: return 1;
37: return 3;
39: return 0;)F1800e4590F",
    R"F1800e4590U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: resolve the indirect call in body 23: dVar3 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,3);.
TODO: resolve the indirect call in body 24: dVar4 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,2);.
TODO: resolve the indirect call in body 25: dVar5 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.
TODO: resolve the indirect call in body 31: (**(code **)(*plVar2 + 0xf8))(plVar2,0);.
TODO: resolve the indirect call in body 34: (**(code **)(*plVar2 + 0xf8))(plVar2,1);.
TODO: resolve the indirect call in body 35: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_res10);.
TODO: resolve the indirect call in body 36: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_res14);.)F1800e4590U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e4590() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e4590", "FUN_1800e4590");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] char cVar1{};
    [[maybe_unused]] std::int64_t * plVar2{};
    [[maybe_unused]] double dVar3{};
    [[maybe_unused]] double dVar4{};
    [[maybe_unused]] double dVar5{};
    [[maybe_unused]] float local_res10{};
    [[maybe_unused]] float local_res14{};
    [[maybe_unused]] float local_38{};
    [[maybe_unused]] float local_34{};
    [[maybe_unused]] float local_30{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: resolve the indirect call in body 23: dVar3 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,3);.
    // TODO: resolve the indirect call in body 24: dVar4 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,2);.
    // TODO: resolve the indirect call in body 25: dVar5 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.
    // TODO: resolve the indirect call in body 31: (**(code **)(*plVar2 + 0xf8))(plVar2,0);.
    // TODO: resolve the indirect call in body 34: (**(code **)(*plVar2 + 0xf8))(plVar2,1);.
    // TODO: resolve the indirect call in body 35: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_res10);.
    // TODO: resolve the indirect call in body 36: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_res14);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("FUN_180021ac0", &local_38, &local_res10);
    trace.call_target("FUN_180021ac0", reinterpret_cast<const void*>(&image::FUN_180021ac0));
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    // body sha256: a4952a82558d3ecdf408f725637f69205bbf2b7a8c1c2acbf7fce5e3343517ce
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("char cVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("double dVar3;");
            trace.statement("double dVar4;");
            trace.statement("double dVar5;");
            trace.statement("float local_res10;");
            trace.statement("float local_res14;");
            trace.statement("float local_38;");
            trace.statement("float local_34;");
            trace.statement("float local_30;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1))")) {
                trace.statement("dVar3 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,3);");
                trace.statement("dVar4 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,2);");
                trace.statement("dVar5 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);");
                trace.statement("local_38 = (float)dVar5;");
                trace.statement("local_34 = (float)dVar4;");
                trace.statement("local_30 = (float)dVar3;");
                trace.statement("cVar1 = FUN_180021ac0(&local_38,&local_res10);");
                if (trace.checked_condition("if (cVar1 == '\\0')", [&]() -> bool { return static_cast<bool>(cVar1 == '\0'); })) {
                    trace.statement("(**(code **)(*plVar2 + 0xf8))(plVar2,0);");
                    trace.statement("return 1;");
                }
                trace.statement("(**(code **)(*plVar2 + 0xf8))(plVar2,1);");
                trace.statement("(**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_res10);");
                trace.statement("(**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_res14);");
                trace.statement("return 3;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e4590;
}

// 0x1800e46b0 FUN_1800e46b0
// source: re/dump/decompile/0x1800e46b0_FUN_1800e46b0.c
// size: 432 bytes; thunk: false
// body sha256: b4ecf1f9d62bb086fa7c65a6cf873e16fe0d0734971660b759876dc43bf82519
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e46b0{
    "0x1800e46b0",
    "FUN_1800e46b0",
    R"F1800e46b0S(undefined FUN_1800e46b0())F1800e46b0S",
    R"B1800e46b0(// 0x1800e46b0  FUN_1800e46b0
// size=432 thunk=false
// signature: undefined FUN_1800e46b0()
// status: ok


undefined8 FUN_1800e46b0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float local_res10;
  float local_res14;
  float local_res18;
  float local_res1c;
  float local_48;
  float local_44;
  float local_40;
  float local_38;
  float local_34;
  float local_30;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    dVar3 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,3);
    dVar4 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,2);
    dVar5 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
    local_38 = (float)dVar5;
    local_34 = (float)dVar4;
    local_30 = (float)dVar3;
    dVar3 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,6);
    dVar4 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,5);
    dVar5 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,4);
    local_48 = (float)dVar5;
    local_44 = (float)dVar4;
    local_40 = (float)dVar3;
    cVar1 = FUN_180021be0(&local_38,&local_48,&local_res10,&local_res18);
    if (cVar1 == '\0') {
      (**(code **)(*plVar2 + 0xf8))(plVar2,0);
      return 1;
    }
    (**(code **)(*plVar2 + 0xf8))(plVar2,1);
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_res10);
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_res14);
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_res18);
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_res1c);
    return 5;
  }
  return 0;
}


)B1800e46b0",
    "b4ecf1f9d62bb086fa7c65a6cf873e16fe0d0734971660b759876dc43bf82519",
    R"F1800e46b0C(FUN_180021be0
FUN_180039770)F1800e46b0C",
    R"F1800e46b0D()F1800e46b0D",
    R"F1800e46b0T()F1800e46b0T",
    R"F1800e46b0F(27: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
41: if (cVar1 == '\0') {
43: return 1;
50: return 5;
52: return 0;)F1800e46b0F",
    R"F1800e46b0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: resolve the indirect call in body 28: dVar3 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,3);.
TODO: resolve the indirect call in body 29: dVar4 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,2);.
TODO: resolve the indirect call in body 30: dVar5 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.
TODO: resolve the indirect call in body 34: dVar3 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,6);.
TODO: resolve the indirect call in body 35: dVar4 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,5);.
TODO: resolve the indirect call in body 36: dVar5 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,4);.
TODO: resolve the indirect call in body 42: (**(code **)(*plVar2 + 0xf8))(plVar2,0);.
TODO: resolve the indirect call in body 45: (**(code **)(*plVar2 + 0xf8))(plVar2,1);.
TODO: resolve the indirect call in body 46: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_res10);.
TODO: resolve the indirect call in body 47: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_res14);.
TODO: resolve the indirect call in body 48: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_res18);.
TODO: resolve the indirect call in body 49: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_res1c);.)F1800e46b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e46b0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e46b0", "FUN_1800e46b0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] char cVar1{};
    [[maybe_unused]] std::int64_t * plVar2{};
    [[maybe_unused]] double dVar3{};
    [[maybe_unused]] double dVar4{};
    [[maybe_unused]] double dVar5{};
    [[maybe_unused]] float local_res10{};
    [[maybe_unused]] float local_res14{};
    [[maybe_unused]] float local_res18{};
    [[maybe_unused]] float local_res1c{};
    [[maybe_unused]] float local_48{};
    [[maybe_unused]] float local_44{};
    [[maybe_unused]] float local_40{};
    [[maybe_unused]] float local_38{};
    [[maybe_unused]] float local_34{};
    [[maybe_unused]] float local_30{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: resolve the indirect call in body 28: dVar3 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,3);.
    // TODO: resolve the indirect call in body 29: dVar4 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,2);.
    // TODO: resolve the indirect call in body 30: dVar5 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.
    // TODO: resolve the indirect call in body 34: dVar3 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,6);.
    // TODO: resolve the indirect call in body 35: dVar4 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,5);.
    // TODO: resolve the indirect call in body 36: dVar5 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,4);.
    // TODO: resolve the indirect call in body 42: (**(code **)(*plVar2 + 0xf8))(plVar2,0);.
    // TODO: resolve the indirect call in body 45: (**(code **)(*plVar2 + 0xf8))(plVar2,1);.
    // TODO: resolve the indirect call in body 46: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_res10);.
    // TODO: resolve the indirect call in body 47: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_res14);.
    // TODO: resolve the indirect call in body 48: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_res18);.
    // TODO: resolve the indirect call in body 49: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_res1c);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("FUN_180021be0", &local_38, &local_48, &local_res10, &local_res18);
    trace.call_target("FUN_180021be0", reinterpret_cast<const void*>(&image::FUN_180021be0));
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    // body sha256: b4ecf1f9d62bb086fa7c65a6cf873e16fe0d0734971660b759876dc43bf82519
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("char cVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("double dVar3;");
            trace.statement("double dVar4;");
            trace.statement("double dVar5;");
            trace.statement("float local_res10;");
            trace.statement("float local_res14;");
            trace.statement("float local_res18;");
            trace.statement("float local_res1c;");
            trace.statement("float local_48;");
            trace.statement("float local_44;");
            trace.statement("float local_40;");
            trace.statement("float local_38;");
            trace.statement("float local_34;");
            trace.statement("float local_30;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1))")) {
                trace.statement("dVar3 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,3);");
                trace.statement("dVar4 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,2);");
                trace.statement("dVar5 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);");
                trace.statement("local_38 = (float)dVar5;");
                trace.statement("local_34 = (float)dVar4;");
                trace.statement("local_30 = (float)dVar3;");
                trace.statement("dVar3 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,6);");
                trace.statement("dVar4 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,5);");
                trace.statement("dVar5 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,4);");
                trace.statement("local_48 = (float)dVar5;");
                trace.statement("local_44 = (float)dVar4;");
                trace.statement("local_40 = (float)dVar3;");
                trace.statement("cVar1 = FUN_180021be0(&local_38,&local_48,&local_res10,&local_res18);");
                if (trace.checked_condition("if (cVar1 == '\\0')", [&]() -> bool { return static_cast<bool>(cVar1 == '\0'); })) {
                    trace.statement("(**(code **)(*plVar2 + 0xf8))(plVar2,0);");
                    trace.statement("return 1;");
                }
                trace.statement("(**(code **)(*plVar2 + 0xf8))(plVar2,1);");
                trace.statement("(**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_res10);");
                trace.statement("(**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_res14);");
                trace.statement("(**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_res18);");
                trace.statement("(**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_res1c);");
                trace.statement("return 5;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e46b0;
}

// 0x1800e4860 FUN_1800e4860
// source: re/dump/decompile/0x1800e4860_FUN_1800e4860.c
// size: 127 bytes; thunk: false
// body sha256: 94d0a9f5aa29fa48e6fc269782e8e7b294bda5c91df834923ce05241caa12178
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e4860{
    "0x1800e4860",
    "FUN_1800e4860",
    R"F1800e4860S(undefined FUN_1800e4860())F1800e4860S",
    R"B1800e4860(// 0x1800e4860  FUN_1800e4860
// size=127 thunk=false
// signature: undefined FUN_1800e4860()
// status: ok


undefined8 FUN_1800e4860(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
    lVar1 = *plVar3;
    if (DAT_1803fa360 == (longlong *)0x0) {
      (**(code **)(lVar1 + 0xf0))(plVar3);
      return 1;
    }
    iVar2 = (**(code **)(*DAT_1803fa360 + 0x30))();
    (**(code **)(lVar1 + 0xf0))(plVar3,(double)iVar2);
    return 1;
  }
  return 0;
}


)B1800e4860",
    "94d0a9f5aa29fa48e6fc269782e8e7b294bda5c91df834923ce05241caa12178",
    R"F1800e4860C(FUN_180039770)F1800e4860C",
    R"F1800e4860D(DAT_1803fa360)F1800e4860D",
    R"F1800e4860T()F1800e4860T",
    R"F1800e4860F(15: if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
17: if (DAT_1803fa360 == (longlong *)0x0) {
19: return 1;
23: return 1;
25: return 0;)F1800e4860F",
    R"F1800e4860U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa360.
TODO: resolve the indirect call in body 18: (**(code **)(lVar1 + 0xf0))(plVar3);.
TODO: resolve the indirect call in body 21: iVar2 = (**(code **)(*DAT_1803fa360 + 0x30))();.
TODO: resolve the indirect call in body 22: (**(code **)(lVar1 + 0xf0))(plVar3,(double)iVar2);.)F1800e4860U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e4860() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e4860", "FUN_1800e4860");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t lVar1{};
    [[maybe_unused]] std::int32_t iVar2{};
    [[maybe_unused]] std::int64_t * plVar3{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa360.
    // TODO: resolve the indirect call in body 18: (**(code **)(lVar1 + 0xf0))(plVar3);.
    // TODO: resolve the indirect call in body 21: iVar2 = (**(code **)(*DAT_1803fa360 + 0x30))();.
    // TODO: resolve the indirect call in body 22: (**(code **)(lVar1 + 0xf0))(plVar3,(double)iVar2);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) [reason: pointer-cast target not proven]
    // TODO: condition expression type not recovered: if (DAT_1803fa360 == (longlong *)0x0) [reason: unresolved global storage/width]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803fa360", static_cast<const void*>(&image::DAT_1803fa360));
    // body sha256: 94d0a9f5aa29fa48e6fc269782e8e7b294bda5c91df834923ce05241caa12178
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong lVar1;");
            trace.statement("int iVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("plVar3 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1))")) {
                trace.statement("lVar1 = *plVar3;");
                if (trace.condition("if (DAT_1803fa360 == (longlong *)0x0)")) {
                    trace.statement("(**(code **)(lVar1 + 0xf0))(plVar3);");
                    trace.statement("return 1;");
                }
                trace.statement("iVar2 = (**(code **)(*DAT_1803fa360 + 0x30))();");
                trace.statement("(**(code **)(lVar1 + 0xf0))(plVar3,(double)iVar2);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e4860;
}

// 0x1800e48e0 FUN_1800e48e0
// source: re/dump/decompile/0x1800e48e0_FUN_1800e48e0.c
// size: 287 bytes; thunk: false
// body sha256: 07158bf59e9a17bfda6af0e452fed3409067efa4ae749442285cf3bbfcf72771
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e48e0{
    "0x1800e48e0",
    "FUN_1800e48e0",
    R"F1800e48e0S(undefined FUN_1800e48e0())F1800e48e0S",
    R"B1800e48e0(// 0x1800e48e0  FUN_1800e48e0
// size=287 thunk=false
// signature: undefined FUN_1800e48e0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800e48e0(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  double dVar6;
  undefined1 auStack_58 [32];
  float *local_38;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  plVar3 = (longlong *)FUN_180039770();
  pcVar1 = DAT_1803ff7c0;
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
    uVar4 = 0;
  }
  else {
    if (DAT_1803ff7c0 == (code *)0x0) {
      lVar5 = *plVar3;
    }
    else {
      local_28 = 0.0;
      local_24 = 0.0;
      local_20 = 0.0;
      local_1c = 0.0;
      dVar6 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);
      local_38 = &local_1c;
      cVar2 = (*pcVar1)((int)dVar6,&local_28,&local_24,&local_20);
      lVar5 = *plVar3;
      if (cVar2 != '\0') {
        (**(code **)(lVar5 + 0xf0))(plVar3,(double)local_28);
        (**(code **)(*plVar3 + 0xf0))(plVar3,(double)local_24);
        (**(code **)(*plVar3 + 0xf0))(plVar3,(double)local_20);
        (**(code **)(*plVar3 + 0xf0))(plVar3,(double)local_1c);
        return 4;
      }
    }
    (**(code **)(lVar5 + 0xe0))();
    uVar4 = 1;
  }
  return uVar4;
}


)B1800e48e0",
    "07158bf59e9a17bfda6af0e452fed3409067efa4ae749442285cf3bbfcf72771",
    R"F1800e48e0C(FUN_180039770)F1800e48e0C",
    R"F1800e48e0D(DAT_1803da4c0
DAT_1803ff7c0)F1800e48e0D",
    R"F1800e48e0T()F1800e48e0T",
    R"F1800e48e0F(29: if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
32: else {
33: if (DAT_1803ff7c0 == (code *)0x0) {
36: else {
45: if (cVar2 != '\0') {
50: return 4;
56: return uVar4;)F1800e48e0F",
    R"F1800e48e0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff7c0.
TODO: resolve the indirect call in body 33: if (DAT_1803ff7c0 == (code *)0x0) {.
TODO: resolve the indirect call in body 41: dVar6 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);.
TODO: resolve the indirect call in body 43: cVar2 = (*pcVar1)((int)dVar6,&local_28,&local_24,&local_20);.
TODO: resolve the indirect call in body 46: (**(code **)(lVar5 + 0xf0))(plVar3,(double)local_28);.
TODO: resolve the indirect call in body 47: (**(code **)(*plVar3 + 0xf0))(plVar3,(double)local_24);.
TODO: resolve the indirect call in body 48: (**(code **)(*plVar3 + 0xf0))(plVar3,(double)local_20);.
TODO: resolve the indirect call in body 49: (**(code **)(*plVar3 + 0xf0))(plVar3,(double)local_1c);.
TODO: resolve the indirect call in body 53: (**(code **)(lVar5 + 0xe0))();.)F1800e48e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e48e0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e48e0", "FUN_1800e48e0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] void* * pcVar1{};
    [[maybe_unused]] char cVar2{};
    [[maybe_unused]] std::int64_t * plVar3{};
    [[maybe_unused]] std::uint64_t uVar4{};
    [[maybe_unused]] std::int64_t lVar5{};
    [[maybe_unused]] double dVar6{};
    [[maybe_unused]] std::uint8_t auStack_58[32]{};
    [[maybe_unused]] float * local_38{};
    [[maybe_unused]] float local_28{};
    [[maybe_unused]] float local_24{};
    [[maybe_unused]] float local_20{};
    [[maybe_unused]] float local_1c{};
    [[maybe_unused]] std::uint64_t local_18{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803da4c0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff7c0.
    // TODO: resolve the indirect call in body 33: if (DAT_1803ff7c0 == (code *)0x0) {.
    // TODO: resolve the indirect call in body 41: dVar6 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);.
    // TODO: resolve the indirect call in body 43: cVar2 = (*pcVar1)((int)dVar6,&local_28,&local_24,&local_20);.
    // TODO: resolve the indirect call in body 46: (**(code **)(lVar5 + 0xf0))(plVar3,(double)local_28);.
    // TODO: resolve the indirect call in body 47: (**(code **)(*plVar3 + 0xf0))(plVar3,(double)local_24);.
    // TODO: resolve the indirect call in body 48: (**(code **)(*plVar3 + 0xf0))(plVar3,(double)local_20);.
    // TODO: resolve the indirect call in body 49: (**(code **)(*plVar3 + 0xf0))(plVar3,(double)local_1c);.
    // TODO: resolve the indirect call in body 53: (**(code **)(lVar5 + 0xe0))();.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) [reason: pointer-cast target not proven]
    // TODO: condition expression type not recovered: if (DAT_1803ff7c0 == (code *)0x0) [reason: unresolved global storage/width]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803da4c0", static_cast<const void*>(&image::DAT_1803da4c0));
    trace.data_ref("DAT_1803ff7c0", static_cast<const void*>(&image::DAT_1803ff7c0));
    // body sha256: 07158bf59e9a17bfda6af0e452fed3409067efa4ae749442285cf3bbfcf72771
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("code *pcVar1;");
            trace.statement("char cVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("undefined8 uVar4;");
            trace.statement("longlong lVar5;");
            trace.statement("double dVar6;");
            trace.statement("undefined1 auStack_58 [32];");
            trace.statement("float *local_38;");
            trace.statement("float local_28;");
            trace.statement("float local_24;");
            trace.statement("float local_20;");
            trace.statement("float local_1c;");
            trace.statement("ulonglong local_18;");
            trace.statement("local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_58;");
            trace.statement("plVar3 = (longlong *)FUN_180039770();");
            trace.statement("pcVar1 = DAT_1803ff7c0;");
            if (trace.condition("if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1))")) {
                trace.statement("uVar4 = 0;");
            } else {
            if (trace.condition("if (DAT_1803ff7c0 == (code *)0x0)")) {
                trace.statement("lVar5 = *plVar3;");
            } else {
            trace.statement("local_28 = 0.0;");
            trace.statement("local_24 = 0.0;");
            trace.statement("local_20 = 0.0;");
            trace.statement("local_1c = 0.0;");
            trace.statement("dVar6 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);");
            trace.statement("local_38 = &local_1c;");
            trace.statement("cVar2 = (*pcVar1)((int)dVar6,&local_28,&local_24,&local_20);");
            trace.statement("lVar5 = *plVar3;");
            if (trace.checked_condition("if (cVar2 != '\\0')", [&]() -> bool { return static_cast<bool>(cVar2 != '\0'); })) {
                trace.statement("(**(code **)(lVar5 + 0xf0))(plVar3,(double)local_28);");
                trace.statement("(**(code **)(*plVar3 + 0xf0))(plVar3,(double)local_24);");
                trace.statement("(**(code **)(*plVar3 + 0xf0))(plVar3,(double)local_20);");
                trace.statement("(**(code **)(*plVar3 + 0xf0))(plVar3,(double)local_1c);");
                trace.statement("return 4;");
            }
            }
            trace.statement("(**(code **)(lVar5 + 0xe0))();");
            trace.statement("uVar4 = 1;");
            }
            trace.statement("return uVar4;");
        }
    return kFunction_0x1800e48e0;
}

// 0x1800e4a00 FUN_1800e4a00
// source: re/dump/decompile/0x1800e4a00_FUN_1800e4a00.c
// size: 164 bytes; thunk: false
// body sha256: e6fa4ce1dacec4444a4eb0d7378e8206c48dfcd2c013e0f2d5f3f14ae5f88a13
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e4a00{
    "0x1800e4a00",
    "FUN_1800e4a00",
    R"F1800e4a00S(undefined FUN_1800e4a00())F1800e4a00S",
    R"B1800e4a00(// 0x1800e4a00  FUN_1800e4a00
// size=164 thunk=false
// signature: undefined FUN_1800e4a00()
// status: ok


undefined8 FUN_1800e4a00(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  double dVar4;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 == (longlong *)0x0) || (plVar1[1] != param_1)) {
    return 0;
  }
  dVar4 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
  if (((int)dVar4 < 1) || (DAT_1803fa360 == (longlong *)0x0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*DAT_1803fa360 + 0x18))();
  }
  lVar3 = FUN_1800e3700(uVar2);
  if (lVar3 == 0) {
    (**(code **)(*plVar1 + 0xe0))();
    return 1;
  }
  (**(code **)(*plVar1 + 0xe8))(plVar1,lVar3,0);
  return 1;
}


)B1800e4a00",
    "e6fa4ce1dacec4444a4eb0d7378e8206c48dfcd2c013e0f2d5f3f14ae5f88a13",
    R"F1800e4a00C(FUN_180039770
FUN_1800e3700)F1800e4a00C",
    R"F1800e4a00D(DAT_1803fa360)F1800e4a00D",
    R"F1800e4a00T()F1800e4a00T",
    R"F1800e4a00F(16: if ((plVar1 == (longlong *)0x0) || (plVar1[1] != param_1)) {
17: return 0;
20: if (((int)dVar4 < 1) || (DAT_1803fa360 == (longlong *)0x0)) {
23: else {
27: if (lVar3 == 0) {
29: return 1;
32: return 1;)F1800e4a00F",
    R"F1800e4a00U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa360.
TODO: resolve the indirect call in body 19: dVar4 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.
TODO: resolve the indirect call in body 24: uVar2 = (**(code **)(*DAT_1803fa360 + 0x18))();.
TODO: resolve the indirect call in body 28: (**(code **)(*plVar1 + 0xe0))();.
TODO: resolve the indirect call in body 31: (**(code **)(*plVar1 + 0xe8))(plVar1,lVar3,0);.)F1800e4a00U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e4a00() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e4a00", "FUN_1800e4a00");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t * plVar1{};
    [[maybe_unused]] std::uint64_t uVar2{};
    [[maybe_unused]] std::int64_t lVar3{};
    [[maybe_unused]] double dVar4{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa360.
    // TODO: resolve the indirect call in body 19: dVar4 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.
    // TODO: resolve the indirect call in body 24: uVar2 = (**(code **)(*DAT_1803fa360 + 0x18))();.
    // TODO: resolve the indirect call in body 28: (**(code **)(*plVar1 + 0xe0))();.
    // TODO: resolve the indirect call in body 31: (**(code **)(*plVar1 + 0xe8))(plVar1,lVar3,0);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar1 == (longlong *)0x0) || (plVar1[1] != param_1)) [reason: pointer-cast target not proven]
    // TODO: condition expression type not recovered: if (((int)dVar4 < 1) || (DAT_1803fa360 == (longlong *)0x0)) [reason: unresolved global storage/width]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("FUN_1800e3700", uVar2);
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_1800e3700", reinterpret_cast<const void*>(&image::FUN_1800e3700));
    trace.data_ref("DAT_1803fa360", static_cast<const void*>(&image::DAT_1803fa360));
    // body sha256: e6fa4ce1dacec4444a4eb0d7378e8206c48dfcd2c013e0f2d5f3f14ae5f88a13
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong *plVar1;");
            trace.statement("undefined8 uVar2;");
            trace.statement("longlong lVar3;");
            trace.statement("double dVar4;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 == (longlong *)0x0) || (plVar1[1] != param_1))")) {
                trace.statement("return 0;");
            }
            trace.statement("dVar4 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);");
            if (trace.condition("if (((int)dVar4 < 1) || (DAT_1803fa360 == (longlong *)0x0))")) {
                trace.statement("uVar2 = 0;");
            } else {
            trace.statement("uVar2 = (**(code **)(*DAT_1803fa360 + 0x18))();");
            }
            trace.statement("lVar3 = FUN_1800e3700(uVar2);");
            if (trace.checked_condition("if (lVar3 == 0)", [&]() -> bool { return static_cast<bool>(lVar3 == 0); })) {
                trace.statement("(**(code **)(*plVar1 + 0xe0))();");
                trace.statement("return 1;");
            }
            trace.statement("(**(code **)(*plVar1 + 0xe8))(plVar1,lVar3,0);");
            trace.statement("return 1;");
        }
    return kFunction_0x1800e4a00;
}

// 0x1800e4ab0 FUN_1800e4ab0
// source: re/dump/decompile/0x1800e4ab0_FUN_1800e4ab0.c
// size: 164 bytes; thunk: false
// body sha256: 63bc62037106de98c33e4b34eed99d3c827270da817b6e37c7672c4ff95bd953
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e4ab0{
    "0x1800e4ab0",
    "FUN_1800e4ab0",
    R"F1800e4ab0S(undefined FUN_1800e4ab0())F1800e4ab0S",
    R"B1800e4ab0(// 0x1800e4ab0  FUN_1800e4ab0
// size=164 thunk=false
// signature: undefined FUN_1800e4ab0()
// status: ok


undefined8 FUN_1800e4ab0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  double dVar4;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 == (longlong *)0x0) || (plVar1[1] != param_1)) {
    return 0;
  }
  dVar4 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
  if (((int)dVar4 < 1) || (DAT_1803fa360 == (longlong *)0x0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*DAT_1803fa360 + 0x18))();
  }
  lVar3 = FUN_1800e36d0(uVar2);
  if (lVar3 == 0) {
    (**(code **)(*plVar1 + 0xe0))();
    return 1;
  }
  (**(code **)(*plVar1 + 0xe8))(plVar1,lVar3,0);
  return 1;
}


)B1800e4ab0",
    "63bc62037106de98c33e4b34eed99d3c827270da817b6e37c7672c4ff95bd953",
    R"F1800e4ab0C(FUN_180039770
FUN_1800e36d0)F1800e4ab0C",
    R"F1800e4ab0D(DAT_1803fa360)F1800e4ab0D",
    R"F1800e4ab0T()F1800e4ab0T",
    R"F1800e4ab0F(16: if ((plVar1 == (longlong *)0x0) || (plVar1[1] != param_1)) {
17: return 0;
20: if (((int)dVar4 < 1) || (DAT_1803fa360 == (longlong *)0x0)) {
23: else {
27: if (lVar3 == 0) {
29: return 1;
32: return 1;)F1800e4ab0F",
    R"F1800e4ab0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa360.
TODO: resolve the indirect call in body 19: dVar4 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.
TODO: resolve the indirect call in body 24: uVar2 = (**(code **)(*DAT_1803fa360 + 0x18))();.
TODO: resolve the indirect call in body 28: (**(code **)(*plVar1 + 0xe0))();.
TODO: resolve the indirect call in body 31: (**(code **)(*plVar1 + 0xe8))(plVar1,lVar3,0);.)F1800e4ab0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e4ab0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e4ab0", "FUN_1800e4ab0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t * plVar1{};
    [[maybe_unused]] std::uint64_t uVar2{};
    [[maybe_unused]] std::int64_t lVar3{};
    [[maybe_unused]] double dVar4{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa360.
    // TODO: resolve the indirect call in body 19: dVar4 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.
    // TODO: resolve the indirect call in body 24: uVar2 = (**(code **)(*DAT_1803fa360 + 0x18))();.
    // TODO: resolve the indirect call in body 28: (**(code **)(*plVar1 + 0xe0))();.
    // TODO: resolve the indirect call in body 31: (**(code **)(*plVar1 + 0xe8))(plVar1,lVar3,0);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar1 == (longlong *)0x0) || (plVar1[1] != param_1)) [reason: pointer-cast target not proven]
    // TODO: condition expression type not recovered: if (((int)dVar4 < 1) || (DAT_1803fa360 == (longlong *)0x0)) [reason: unresolved global storage/width]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("FUN_1800e36d0", uVar2);
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_1800e36d0", reinterpret_cast<const void*>(&image::FUN_1800e36d0));
    trace.data_ref("DAT_1803fa360", static_cast<const void*>(&image::DAT_1803fa360));
    // body sha256: 63bc62037106de98c33e4b34eed99d3c827270da817b6e37c7672c4ff95bd953
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong *plVar1;");
            trace.statement("undefined8 uVar2;");
            trace.statement("longlong lVar3;");
            trace.statement("double dVar4;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 == (longlong *)0x0) || (plVar1[1] != param_1))")) {
                trace.statement("return 0;");
            }
            trace.statement("dVar4 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);");
            if (trace.condition("if (((int)dVar4 < 1) || (DAT_1803fa360 == (longlong *)0x0))")) {
                trace.statement("uVar2 = 0;");
            } else {
            trace.statement("uVar2 = (**(code **)(*DAT_1803fa360 + 0x18))();");
            }
            trace.statement("lVar3 = FUN_1800e36d0(uVar2);");
            if (trace.checked_condition("if (lVar3 == 0)", [&]() -> bool { return static_cast<bool>(lVar3 == 0); })) {
                trace.statement("(**(code **)(*plVar1 + 0xe0))();");
                trace.statement("return 1;");
            }
            trace.statement("(**(code **)(*plVar1 + 0xe8))(plVar1,lVar3,0);");
            trace.statement("return 1;");
        }
    return kFunction_0x1800e4ab0;
}

// 0x1800e4b60 FUN_1800e4b60
// source: re/dump/decompile/0x1800e4b60_FUN_1800e4b60.c
// size: 67 bytes; thunk: false
// body sha256: 40be42bfecc2f1e9f64fa892766adf2666078e95bda6192653067298e163c919
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e4b60{
    "0x1800e4b60",
    "FUN_1800e4b60",
    R"F1800e4b60S(undefined FUN_1800e4b60())F1800e4b60S",
    R"B1800e4b60(// 0x1800e4b60  FUN_1800e4b60
// size=67 thunk=false
// signature: undefined FUN_1800e4b60()
// status: ok


undefined8 FUN_1800e4b60(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    (**(code **)(*plVar1 + 0xf8))(plVar1,DAT_1804236a5);
    return 1;
  }
  return 0;
}


)B1800e4b60",
    "40be42bfecc2f1e9f64fa892766adf2666078e95bda6192653067298e163c919",
    R"F1800e4b60C(FUN_180039770)F1800e4b60C",
    R"F1800e4b60D(DAT_1804236a5)F1800e4b60D",
    R"F1800e4b60T()F1800e4b60T",
    R"F1800e4b60F(13: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
15: return 1;
17: return 0;)F1800e4b60F",
    R"F1800e4b60U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1804236a5.
TODO: resolve the indirect call in body 14: (**(code **)(*plVar1 + 0xf8))(plVar1,DAT_1804236a5);.)F1800e4b60U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e4b60() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e4b60", "FUN_1800e4b60");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t * plVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1804236a5.
    // TODO: resolve the indirect call in body 14: (**(code **)(*plVar1 + 0xf8))(plVar1,DAT_1804236a5);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1804236a5", static_cast<const void*>(&image::DAT_1804236a5));
    // body sha256: 40be42bfecc2f1e9f64fa892766adf2666078e95bda6192653067298e163c919
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong *plVar1;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                trace.statement("(**(code **)(*plVar1 + 0xf8))(plVar1,DAT_1804236a5);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e4b60;
}

// 0x1800e4bb0 FUN_1800e4bb0
// source: re/dump/decompile/0x1800e4bb0_FUN_1800e4bb0.c
// size: 161 bytes; thunk: false
// body sha256: 8fd5c18cbb48ac93737802fe0547fa45de838b7a518f0262bac7060dc5a879c2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e4bb0{
    "0x1800e4bb0",
    "FUN_1800e4bb0",
    R"F1800e4bb0S(undefined FUN_1800e4bb0())F1800e4bb0S",
    R"B1800e4bb0(// 0x1800e4bb0  FUN_1800e4bb0
// size=161 thunk=false
// signature: undefined FUN_1800e4bb0()
// status: ok


undefined8 FUN_1800e4bb0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    if (DAT_1803db610 == '\0') {
      (**(code **)(*plVar1 + 0xe0))();
      return 1;
    }
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803db614);
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803db618);
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803db61c);
    return 3;
  }
  return 0;
}


)B1800e4bb0",
    "8fd5c18cbb48ac93737802fe0547fa45de838b7a518f0262bac7060dc5a879c2",
    R"F1800e4bb0C(FUN_180039770)F1800e4bb0C",
    R"F1800e4bb0D(DAT_1803db610
DAT_1803db614
DAT_1803db618
DAT_1803db61c)F1800e4bb0D",
    R"F1800e4bb0T()F1800e4bb0T",
    R"F1800e4bb0F(13: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
14: if (DAT_1803db610 == '\0') {
16: return 1;
21: return 3;
23: return 0;)F1800e4bb0F",
    R"F1800e4bb0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803db610.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803db614.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803db618.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803db61c.
TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xe0))();.
TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803db614);.
TODO: resolve the indirect call in body 19: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803db618);.
TODO: resolve the indirect call in body 20: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803db61c);.)F1800e4bb0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e4bb0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e4bb0", "FUN_1800e4bb0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t * plVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803db610.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803db614.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803db618.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803db61c.
    // TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xe0))();.
    // TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803db614);.
    // TODO: resolve the indirect call in body 19: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803db618);.
    // TODO: resolve the indirect call in body 20: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803db61c);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803db610", static_cast<const void*>(&image::DAT_1803db610));
    trace.data_ref("DAT_1803db614", static_cast<const void*>(&image::DAT_1803db614));
    trace.data_ref("DAT_1803db618", static_cast<const void*>(&image::DAT_1803db618));
    trace.data_ref("DAT_1803db61c", static_cast<const void*>(&image::DAT_1803db61c));
    // body sha256: 8fd5c18cbb48ac93737802fe0547fa45de838b7a518f0262bac7060dc5a879c2
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong *plVar1;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                if (trace.checked_condition("if (DAT_1803db610 == '\\0')", [&]() -> bool { return static_cast<bool>(image::DAT_1803db610 == '\0'); })) {
                    trace.statement("(**(code **)(*plVar1 + 0xe0))();");
                    trace.statement("return 1;");
                }
                trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803db614);");
                trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803db618);");
                trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803db61c);");
                trace.statement("return 3;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e4bb0;
}

// 0x1800e4c60 FUN_1800e4c60
// source: re/dump/decompile/0x1800e4c60_FUN_1800e4c60.c
// size: 161 bytes; thunk: false
// body sha256: 71ceea7d72dc30457c1a6f7cae7591bc1985ebd1a9bcec97a86804cf4addc91c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e4c60{
    "0x1800e4c60",
    "FUN_1800e4c60",
    R"F1800e4c60S(undefined FUN_1800e4c60())F1800e4c60S",
    R"B1800e4c60(// 0x1800e4c60  FUN_1800e4c60
// size=161 thunk=false
// signature: undefined FUN_1800e4c60()
// status: ok


undefined8 FUN_1800e4c60(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    if (DAT_1803db610 == '\0') {
      (**(code **)(*plVar1 + 0xe0))();
      return 1;
    }
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803db620);
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803db624);
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803db628);
    return 3;
  }
  return 0;
}


)B1800e4c60",
    "71ceea7d72dc30457c1a6f7cae7591bc1985ebd1a9bcec97a86804cf4addc91c",
    R"F1800e4c60C(FUN_180039770)F1800e4c60C",
    R"F1800e4c60D(DAT_1803db610
DAT_1803db620
DAT_1803db624
DAT_1803db628)F1800e4c60D",
    R"F1800e4c60T()F1800e4c60T",
    R"F1800e4c60F(13: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
14: if (DAT_1803db610 == '\0') {
16: return 1;
21: return 3;
23: return 0;)F1800e4c60F",
    R"F1800e4c60U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803db610.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803db620.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803db624.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803db628.
TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xe0))();.
TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803db620);.
TODO: resolve the indirect call in body 19: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803db624);.
TODO: resolve the indirect call in body 20: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803db628);.)F1800e4c60U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e4c60() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e4c60", "FUN_1800e4c60");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t * plVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803db610.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803db620.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803db624.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803db628.
    // TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xe0))();.
    // TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803db620);.
    // TODO: resolve the indirect call in body 19: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803db624);.
    // TODO: resolve the indirect call in body 20: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803db628);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803db610", static_cast<const void*>(&image::DAT_1803db610));
    trace.data_ref("DAT_1803db620", static_cast<const void*>(&image::DAT_1803db620));
    trace.data_ref("DAT_1803db624", static_cast<const void*>(&image::DAT_1803db624));
    trace.data_ref("DAT_1803db628", static_cast<const void*>(&image::DAT_1803db628));
    // body sha256: 71ceea7d72dc30457c1a6f7cae7591bc1985ebd1a9bcec97a86804cf4addc91c
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong *plVar1;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                if (trace.checked_condition("if (DAT_1803db610 == '\\0')", [&]() -> bool { return static_cast<bool>(image::DAT_1803db610 == '\0'); })) {
                    trace.statement("(**(code **)(*plVar1 + 0xe0))();");
                    trace.statement("return 1;");
                }
                trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803db620);");
                trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803db624);");
                trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803db628);");
                trace.statement("return 3;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e4c60;
}

// 0x1800e4d10 FUN_1800e4d10
// source: re/dump/decompile/0x1800e4d10_FUN_1800e4d10.c
// size: 400 bytes; thunk: false
// body sha256: f4a59168f368b74606038cd22d2c9516a417d81c4a0e9def87f883c9cbf477b0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e4d10{
    "0x1800e4d10",
    "FUN_1800e4d10",
    R"F1800e4d10S(undefined FUN_1800e4d10())F1800e4d10S",
    R"B1800e4d10(// 0x1800e4d10  FUN_1800e4d10
// size=400 thunk=false
// signature: undefined FUN_1800e4d10()
// status: ok


undefined8 FUN_1800e4d10(longlong param_1)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  double dVar4;
  byte local_res10;
  byte local_res11;
  byte local_res12;
  byte local_res13;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    dVar4 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
    puVar2 = (undefined1 *)FUN_180030f20((int)dVar4);
    FUN_180030a70(&local_res10,(int)dVar4);
    (**(code **)(*plVar1 + 0x30))(plVar1);
    puVar3 = &DAT_18033e5ea;
    if (puVar2 != (undefined1 *)0x0) {
      puVar3 = puVar2;
    }
    (**(code **)(*plVar1 + 0xe8))(plVar1,puVar3,0);
    (**(code **)(*plVar1 + 0x28))(plVar1,0xfffffffe,&DAT_180341148);
    (**(code **)(*plVar1 + 0x30))(plVar1);
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_res10);
    (**(code **)(*plVar1 + 0x28))(plVar1,0xfffffffe,&DAT_18033e668);
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_res11);
    (**(code **)(*plVar1 + 0x28))(plVar1,0xfffffffe,&DAT_180342c10);
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_res12);
    (**(code **)(*plVar1 + 0x28))(plVar1,0xfffffffe,&DAT_18033f594);
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_res13);
    (**(code **)(*plVar1 + 0x28))(plVar1,0xfffffffe,&DAT_18033f59c);
    (**(code **)(*plVar1 + 0x28))(plVar1,0xfffffffe,"color");
    return 1;
  }
  return 0;
}


)B1800e4d10",
    "f4a59168f368b74606038cd22d2c9516a417d81c4a0e9def87f883c9cbf477b0",
    R"F1800e4d10C(FUN_180030a70
FUN_180030f20
FUN_180039770)F1800e4d10C",
    R"F1800e4d10D(DAT_18033e5ea
DAT_18033e668
DAT_18033f594
DAT_18033f59c
DAT_180341148
DAT_180342c10)F1800e4d10D",
    R"F1800e4d10T("color")F1800e4d10T",
    R"F1800e4d10F(20: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
26: if (puVar2 != (undefined1 *)0x0) {
41: return 1;
43: return 0;)F1800e4d10F",
    R"F1800e4d10U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18033e5ea.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18033e668.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18033f594.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18033f59c.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180341148.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180342c10.
TODO: resolve the indirect call in body 21: dVar4 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.
TODO: resolve the indirect call in body 24: (**(code **)(*plVar1 + 0x30))(plVar1);.
TODO: resolve the indirect call in body 29: (**(code **)(*plVar1 + 0xe8))(plVar1,puVar3,0);.
TODO: resolve the indirect call in body 30: (**(code **)(*plVar1 + 0x28))(plVar1,0xfffffffe,&DAT_180341148);.
TODO: resolve the indirect call in body 31: (**(code **)(*plVar1 + 0x30))(plVar1);.
TODO: resolve the indirect call in body 32: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_res10);.
TODO: resolve the indirect call in body 33: (**(code **)(*plVar1 + 0x28))(plVar1,0xfffffffe,&DAT_18033e668);.
TODO: resolve the indirect call in body 34: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_res11);.
TODO: resolve the indirect call in body 35: (**(code **)(*plVar1 + 0x28))(plVar1,0xfffffffe,&DAT_180342c10);.
TODO: resolve the indirect call in body 36: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_res12);.
TODO: resolve the indirect call in body 37: (**(code **)(*plVar1 + 0x28))(plVar1,0xfffffffe,&DAT_18033f594);.
TODO: resolve the indirect call in body 38: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_res13);.
TODO: resolve the indirect call in body 39: (**(code **)(*plVar1 + 0x28))(plVar1,0xfffffffe,&DAT_18033f59c);.
TODO: resolve the indirect call in body 40: (**(code **)(*plVar1 + 0x28))(plVar1,0xfffffffe,"color");.)F1800e4d10U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e4d10() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e4d10", "FUN_1800e4d10");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t * plVar1{};
    [[maybe_unused]] std::uint8_t * puVar2{};
    [[maybe_unused]] std::uint8_t * puVar3{};
    [[maybe_unused]] double dVar4{};
    [[maybe_unused]] std::uint8_t local_res10{};
    [[maybe_unused]] std::uint8_t local_res11{};
    [[maybe_unused]] std::uint8_t local_res12{};
    [[maybe_unused]] std::uint8_t local_res13{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18033e5ea.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18033e668.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18033f594.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18033f59c.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180341148.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180342c10.
    // TODO: resolve the indirect call in body 21: dVar4 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.
    // TODO: resolve the indirect call in body 24: (**(code **)(*plVar1 + 0x30))(plVar1);.
    // TODO: resolve the indirect call in body 29: (**(code **)(*plVar1 + 0xe8))(plVar1,puVar3,0);.
    // TODO: resolve the indirect call in body 30: (**(code **)(*plVar1 + 0x28))(plVar1,0xfffffffe,&DAT_180341148);.
    // TODO: resolve the indirect call in body 31: (**(code **)(*plVar1 + 0x30))(plVar1);.
    // TODO: resolve the indirect call in body 32: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_res10);.
    // TODO: resolve the indirect call in body 33: (**(code **)(*plVar1 + 0x28))(plVar1,0xfffffffe,&DAT_18033e668);.
    // TODO: resolve the indirect call in body 34: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_res11);.
    // TODO: resolve the indirect call in body 35: (**(code **)(*plVar1 + 0x28))(plVar1,0xfffffffe,&DAT_180342c10);.
    // TODO: resolve the indirect call in body 36: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_res12);.
    // TODO: resolve the indirect call in body 37: (**(code **)(*plVar1 + 0x28))(plVar1,0xfffffffe,&DAT_18033f594);.
    // TODO: resolve the indirect call in body 38: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_res13);.
    // TODO: resolve the indirect call in body 39: (**(code **)(*plVar1 + 0x28))(plVar1,0xfffffffe,&DAT_18033f59c);.
    // TODO: resolve the indirect call in body 40: (**(code **)(*plVar1 + 0x28))(plVar1,0xfffffffe,"color");.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("FUN_180030f20", static_cast<std::int32_t>(dVar4));
    trace.call_arguments("FUN_180030a70", &local_res10, static_cast<std::int32_t>(dVar4));
    trace.call_target("FUN_180030a70", reinterpret_cast<const void*>(&image::FUN_180030a70));
    trace.call_target("FUN_180030f20", reinterpret_cast<const void*>(&image::FUN_180030f20));
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_18033e5ea", static_cast<const void*>(&image::DAT_18033e5ea));
    trace.data_ref("DAT_18033e668", static_cast<const void*>(&image::DAT_18033e668));
    trace.data_ref("DAT_18033f594", static_cast<const void*>(&image::DAT_18033f594));
    trace.data_ref("DAT_18033f59c", static_cast<const void*>(&image::DAT_18033f59c));
    trace.data_ref("DAT_180341148", static_cast<const void*>(&image::DAT_180341148));
    trace.data_ref("DAT_180342c10", static_cast<const void*>(&image::DAT_180342c10));
    trace.string_literal("color");
    // body sha256: f4a59168f368b74606038cd22d2c9516a417d81c4a0e9def87f883c9cbf477b0
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong *plVar1;");
            trace.statement("undefined1 *puVar2;");
            trace.statement("undefined1 *puVar3;");
            trace.statement("double dVar4;");
            trace.statement("byte local_res10;");
            trace.statement("byte local_res11;");
            trace.statement("byte local_res12;");
            trace.statement("byte local_res13;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                trace.statement("dVar4 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);");
                trace.statement("puVar2 = (undefined1 *)FUN_180030f20((int)dVar4);");
                trace.statement("FUN_180030a70(&local_res10,(int)dVar4);");
                trace.statement("(**(code **)(*plVar1 + 0x30))(plVar1);");
                trace.statement("puVar3 = &DAT_18033e5ea;");
                if (trace.checked_condition("if (puVar2 != (undefined1 *)0x0)", [&]() -> bool { return static_cast<bool>(puVar2 != (undefined1 *)0x0); })) {
                    trace.statement("puVar3 = puVar2;");
                }
                trace.statement("(**(code **)(*plVar1 + 0xe8))(plVar1,puVar3,0);");
                trace.statement("(**(code **)(*plVar1 + 0x28))(plVar1,0xfffffffe,&DAT_180341148);");
                trace.statement("(**(code **)(*plVar1 + 0x30))(plVar1);");
                trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_res10);");
                trace.statement("(**(code **)(*plVar1 + 0x28))(plVar1,0xfffffffe,&DAT_18033e668);");
                trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_res11);");
                trace.statement("(**(code **)(*plVar1 + 0x28))(plVar1,0xfffffffe,&DAT_180342c10);");
                trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_res12);");
                trace.statement("(**(code **)(*plVar1 + 0x28))(plVar1,0xfffffffe,&DAT_18033f594);");
                trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_res13);");
                trace.statement("(**(code **)(*plVar1 + 0x28))(plVar1,0xfffffffe,&DAT_18033f59c);");
                trace.statement("(**(code **)(*plVar1 + 0x28))(plVar1,0xfffffffe,\"color\");");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e4d10;
}

// 0x1800e4ea0 FUN_1800e4ea0
// source: re/dump/decompile/0x1800e4ea0_FUN_1800e4ea0.c
// size: 77 bytes; thunk: false
// body sha256: aee8b124ecc1aa550be9e18a123d8ebef4495a48e9eed4d2bdd10138824beade
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e4ea0{
    "0x1800e4ea0",
    "FUN_1800e4ea0",
    R"F1800e4ea0S(undefined FUN_1800e4ea0())F1800e4ea0S",
    R"B1800e4ea0(// 0x1800e4ea0  FUN_1800e4ea0
// size=77 thunk=false
// signature: undefined FUN_1800e4ea0()
// status: ok


undefined8 FUN_1800e4ea0(longlong param_1)

{
  longlong *plVar1;
  double dVar2;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    dVar2 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
    if ((int)dVar2 - 1U < 0x80) {
      (&DAT_18040a4d0)[(int)dVar2] = 1;
    }
  }
  return 0;
}


)B1800e4ea0",
    "aee8b124ecc1aa550be9e18a123d8ebef4495a48e9eed4d2bdd10138824beade",
    R"F1800e4ea0C(FUN_180039770)F1800e4ea0C",
    R"F1800e4ea0D(DAT_18040a4d0)F1800e4ea0D",
    R"F1800e4ea0T()F1800e4ea0T",
    R"F1800e4ea0F(14: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
16: if ((int)dVar2 - 1U < 0x80) {
20: return 0;)F1800e4ea0F",
    R"F1800e4ea0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18040a4d0.
TODO: resolve the indirect call in body 15: dVar2 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.)F1800e4ea0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e4ea0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e4ea0", "FUN_1800e4ea0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t * plVar1{};
    [[maybe_unused]] double dVar2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18040a4d0.
    // TODO: resolve the indirect call in body 15: dVar2 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) [reason: pointer-cast target not proven]
    // TODO: condition expression type not recovered: if ((int)dVar2 - 1U < 0x80) [reason: scalar cast width/kind mismatch]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_18040a4d0", static_cast<const void*>(&image::DAT_18040a4d0));
    // body sha256: aee8b124ecc1aa550be9e18a123d8ebef4495a48e9eed4d2bdd10138824beade
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong *plVar1;");
            trace.statement("double dVar2;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                trace.statement("dVar2 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);");
                if (trace.condition("if ((int)dVar2 - 1U < 0x80)")) {
                    trace.statement("(&DAT_18040a4d0)[(int)dVar2] = 1;");
                }
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e4ea0;
}

// 0x1800e4ef0 FUN_1800e4ef0
// source: re/dump/decompile/0x1800e4ef0_FUN_1800e4ef0.c
// size: 77 bytes; thunk: false
// body sha256: 3473e14a29d56f405fceb4c53ddc6855318653e79462e281b0681ba3a1aafb68
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e4ef0{
    "0x1800e4ef0",
    "FUN_1800e4ef0",
    R"F1800e4ef0S(undefined FUN_1800e4ef0())F1800e4ef0S",
    R"B1800e4ef0(// 0x1800e4ef0  FUN_1800e4ef0
// size=77 thunk=false
// signature: undefined FUN_1800e4ef0()
// status: ok


undefined8 FUN_1800e4ef0(longlong param_1)

{
  longlong *plVar1;
  double dVar2;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    dVar2 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
    if ((int)dVar2 - 1U < 0x80) {
      (&DAT_18040a420)[(int)dVar2] = 1;
    }
  }
  return 0;
}


)B1800e4ef0",
    "3473e14a29d56f405fceb4c53ddc6855318653e79462e281b0681ba3a1aafb68",
    R"F1800e4ef0C(FUN_180039770)F1800e4ef0C",
    R"F1800e4ef0D(DAT_18040a420)F1800e4ef0D",
    R"F1800e4ef0T()F1800e4ef0T",
    R"F1800e4ef0F(14: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
16: if ((int)dVar2 - 1U < 0x80) {
20: return 0;)F1800e4ef0F",
    R"F1800e4ef0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18040a420.
TODO: resolve the indirect call in body 15: dVar2 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.)F1800e4ef0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e4ef0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e4ef0", "FUN_1800e4ef0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t * plVar1{};
    [[maybe_unused]] double dVar2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18040a420.
    // TODO: resolve the indirect call in body 15: dVar2 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) [reason: pointer-cast target not proven]
    // TODO: condition expression type not recovered: if ((int)dVar2 - 1U < 0x80) [reason: scalar cast width/kind mismatch]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_18040a420", static_cast<const void*>(&image::DAT_18040a420));
    // body sha256: 3473e14a29d56f405fceb4c53ddc6855318653e79462e281b0681ba3a1aafb68
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong *plVar1;");
            trace.statement("double dVar2;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                trace.statement("dVar2 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);");
                if (trace.condition("if ((int)dVar2 - 1U < 0x80)")) {
                    trace.statement("(&DAT_18040a420)[(int)dVar2] = 1;");
                }
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e4ef0;
}

// 0x1800e4f40 FUN_1800e4f40
// source: re/dump/decompile/0x1800e4f40_FUN_1800e4f40.c
// size: 77 bytes; thunk: false
// body sha256: e4d91eb5f0be898e26660117ca802ac3ef77756cc8f153443cc6e8c5c34b2d07
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e4f40{
    "0x1800e4f40",
    "FUN_1800e4f40",
    R"F1800e4f40S(undefined FUN_1800e4f40())F1800e4f40S",
    R"B1800e4f40(// 0x1800e4f40  FUN_1800e4f40
// size=77 thunk=false
// signature: undefined FUN_1800e4f40()
// status: ok


undefined8 FUN_1800e4f40(longlong param_1)

{
  longlong *plVar1;
  double dVar2;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    dVar2 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
    if ((int)dVar2 - 1U < 0x80) {
      (&DAT_1804097b0)[(int)dVar2] = 1;
    }
  }
  return 0;
}


)B1800e4f40",
    "e4d91eb5f0be898e26660117ca802ac3ef77756cc8f153443cc6e8c5c34b2d07",
    R"F1800e4f40C(FUN_180039770)F1800e4f40C",
    R"F1800e4f40D(DAT_1804097b0)F1800e4f40D",
    R"F1800e4f40T()F1800e4f40T",
    R"F1800e4f40F(14: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
16: if ((int)dVar2 - 1U < 0x80) {
20: return 0;)F1800e4f40F",
    R"F1800e4f40U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1804097b0.
TODO: resolve the indirect call in body 15: dVar2 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.)F1800e4f40U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e4f40() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e4f40", "FUN_1800e4f40");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t * plVar1{};
    [[maybe_unused]] double dVar2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1804097b0.
    // TODO: resolve the indirect call in body 15: dVar2 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) [reason: pointer-cast target not proven]
    // TODO: condition expression type not recovered: if ((int)dVar2 - 1U < 0x80) [reason: scalar cast width/kind mismatch]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1804097b0", static_cast<const void*>(&image::DAT_1804097b0));
    // body sha256: e4d91eb5f0be898e26660117ca802ac3ef77756cc8f153443cc6e8c5c34b2d07
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong *plVar1;");
            trace.statement("double dVar2;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                trace.statement("dVar2 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);");
                if (trace.condition("if ((int)dVar2 - 1U < 0x80)")) {
                    trace.statement("(&DAT_1804097b0)[(int)dVar2] = 1;");
                }
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e4f40;
}

// 0x1800e4f90 FUN_1800e4f90
// source: re/dump/decompile/0x1800e4f90_FUN_1800e4f90.c
// size: 222 bytes; thunk: false
// body sha256: ea405dfc6263eb4b5f1686a5916a4e7a0e171ffc8748538b77dc42e54843c15d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e4f90{
    "0x1800e4f90",
    "FUN_1800e4f90",
    R"F1800e4f90S(undefined FUN_1800e4f90())F1800e4f90S",
    R"B1800e4f90(// 0x1800e4f90  FUN_1800e4f90
// size=222 thunk=false
// signature: undefined FUN_1800e4f90()
// status: ok


undefined8 FUN_1800e4f90(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  double dVar3;
  float local_18;
  float local_14;
  float local_10;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    dVar3 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
    if ((0 < (int)dVar3) && (DAT_1803fa360 != (longlong *)0x0)) {
      lVar2 = (**(code **)(*DAT_1803fa360 + 0x18))();
      if (lVar2 != 0) {
        FUN_18001daf0(lVar2,&local_18);
        (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_18);
        (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_14);
        (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_10);
        return 3;
      }
    }
    (**(code **)(*plVar1 + 0xe0))(plVar1);
    return 1;
  }
  return 0;
}


)B1800e4f90",
    "ea405dfc6263eb4b5f1686a5916a4e7a0e171ffc8748538b77dc42e54843c15d",
    R"F1800e4f90C(FUN_18001daf0
FUN_180039770)F1800e4f90C",
    R"F1800e4f90D(DAT_1803fa360)F1800e4f90D",
    R"F1800e4f90T()F1800e4f90T",
    R"F1800e4f90F(18: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
20: if ((0 < (int)dVar3) && (DAT_1803fa360 != (longlong *)0x0)) {
22: if (lVar2 != 0) {
27: return 3;
31: return 1;
33: return 0;)F1800e4f90F",
    R"F1800e4f90U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa360.
TODO: resolve the indirect call in body 19: dVar3 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.
TODO: resolve the indirect call in body 21: lVar2 = (**(code **)(*DAT_1803fa360 + 0x18))();.
TODO: resolve the indirect call in body 24: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_18);.
TODO: resolve the indirect call in body 25: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_14);.
TODO: resolve the indirect call in body 26: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_10);.
TODO: resolve the indirect call in body 30: (**(code **)(*plVar1 + 0xe0))(plVar1);.)F1800e4f90U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e4f90() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e4f90", "FUN_1800e4f90");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t * plVar1{};
    [[maybe_unused]] std::int64_t lVar2{};
    [[maybe_unused]] double dVar3{};
    [[maybe_unused]] float local_18{};
    [[maybe_unused]] float local_14{};
    [[maybe_unused]] float local_10{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa360.
    // TODO: resolve the indirect call in body 19: dVar3 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.
    // TODO: resolve the indirect call in body 21: lVar2 = (**(code **)(*DAT_1803fa360 + 0x18))();.
    // TODO: resolve the indirect call in body 24: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_18);.
    // TODO: resolve the indirect call in body 25: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_14);.
    // TODO: resolve the indirect call in body 26: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_10);.
    // TODO: resolve the indirect call in body 30: (**(code **)(*plVar1 + 0xe0))(plVar1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) [reason: pointer-cast target not proven]
    // TODO: condition expression type not recovered: if ((0 < (int)dVar3) && (DAT_1803fa360 != (longlong *)0x0)) [reason: unresolved global storage/width]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("FUN_18001daf0", lVar2, &local_18);
    trace.call_target("FUN_18001daf0", reinterpret_cast<const void*>(&image::FUN_18001daf0));
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803fa360", static_cast<const void*>(&image::DAT_1803fa360));
    // body sha256: ea405dfc6263eb4b5f1686a5916a4e7a0e171ffc8748538b77dc42e54843c15d
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong *plVar1;");
            trace.statement("longlong lVar2;");
            trace.statement("double dVar3;");
            trace.statement("float local_18;");
            trace.statement("float local_14;");
            trace.statement("float local_10;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                trace.statement("dVar3 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);");
                if (trace.condition("if ((0 < (int)dVar3) && (DAT_1803fa360 != (longlong *)0x0))")) {
                    trace.statement("lVar2 = (**(code **)(*DAT_1803fa360 + 0x18))();");
                    if (trace.checked_condition("if (lVar2 != 0)", [&]() -> bool { return static_cast<bool>(lVar2 != 0); })) {
                        trace.statement("FUN_18001daf0(lVar2,&local_18);");
                        trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_18);");
                        trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_14);");
                        trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_10);");
                        trace.statement("return 3;");
                    }
                }
                trace.statement("(**(code **)(*plVar1 + 0xe0))(plVar1);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e4f90;
}

// 0x1800e5070 FUN_1800e5070
// source: re/dump/decompile/0x1800e5070_FUN_1800e5070.c
// size: 231 bytes; thunk: false
// body sha256: 47fa6e6b54353a19ad0377683baf5bd2192441fe11d3d9c1c8e8db1f6f175689
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e5070{
    "0x1800e5070",
    "FUN_1800e5070",
    R"F1800e5070S(undefined FUN_1800e5070())F1800e5070S",
    R"B1800e5070(// 0x1800e5070  FUN_1800e5070
// size=231 thunk=false
// signature: undefined FUN_1800e5070()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800e5070(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  double dVar4;
  undefined1 auStack_188 [32];
  char local_168 [127];
  undefined1 local_e9;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_188;
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
    uVar3 = 0;
  }
  else {
    dVar4 = (double)(**(code **)(*plVar2 + 0x160))(plVar2);
    memset(local_168,0,0x144);
    if ((((0 < (int)dVar4) && (DAT_1803fa668 != (longlong *)0x0)) &&
        (cVar1 = (**(code **)(*DAT_1803fa668 + 0x40))(DAT_1803fa668,(int)dVar4,local_168),
        cVar1 != '\0')) && (local_168[0] != '\0')) {
      local_e9 = 0;
      (**(code **)(*plVar2 + 0xe8))(plVar2,local_168,0);
      return 1;
    }
    (**(code **)(*plVar2 + 0xe0))(plVar2);
    uVar3 = 1;
  }
  return uVar3;
}


)B1800e5070",
    "47fa6e6b54353a19ad0377683baf5bd2192441fe11d3d9c1c8e8db1f6f175689",
    R"F1800e5070C(FUN_180039770)F1800e5070C",
    R"F1800e5070D(DAT_1803da4c0
DAT_1803fa668)F1800e5070D",
    R"F1800e5070T()F1800e5070T",
    R"F1800e5070F(23: if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
26: else {
29: if ((((0 < (int)dVar4) && (DAT_1803fa668 != (longlong *)0x0)) &&
34: return 1;
39: return uVar3;)F1800e5070F",
    R"F1800e5070U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa668.
TODO: resolve the indirect call in body 27: dVar4 = (double)(**(code **)(*plVar2 + 0x160))(plVar2);.
TODO: resolve the indirect call in body 30: (cVar1 = (**(code **)(*DAT_1803fa668 + 0x40))(DAT_1803fa668,(int)dVar4,local_168),.
TODO: resolve the indirect call in body 33: (**(code **)(*plVar2 + 0xe8))(plVar2,local_168,0);.
TODO: resolve the indirect call in body 36: (**(code **)(*plVar2 + 0xe0))(plVar2);.)F1800e5070U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e5070() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e5070", "FUN_1800e5070");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] char cVar1{};
    [[maybe_unused]] std::int64_t * plVar2{};
    [[maybe_unused]] std::uint64_t uVar3{};
    [[maybe_unused]] double dVar4{};
    [[maybe_unused]] std::uint8_t auStack_188[32]{};
    [[maybe_unused]] char local_168[127]{};
    [[maybe_unused]] std::uint8_t local_e9{};
    [[maybe_unused]] std::uint64_t local_18{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803da4c0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa668.
    // TODO: resolve the indirect call in body 27: dVar4 = (double)(**(code **)(*plVar2 + 0x160))(plVar2);.
    // TODO: resolve the indirect call in body 30: (cVar1 = (**(code **)(*DAT_1803fa668 + 0x40))(DAT_1803fa668,(int)dVar4,local_168),.
    // TODO: resolve the indirect call in body 33: (**(code **)(*plVar2 + 0xe8))(plVar2,local_168,0);.
    // TODO: resolve the indirect call in body 36: (**(code **)(*plVar2 + 0xe0))(plVar2);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("memset", local_168, 0, 0x144);
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803da4c0", static_cast<const void*>(&image::DAT_1803da4c0));
    trace.data_ref("DAT_1803fa668", static_cast<const void*>(&image::DAT_1803fa668));
    // body sha256: 47fa6e6b54353a19ad0377683baf5bd2192441fe11d3d9c1c8e8db1f6f175689
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("char cVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("undefined8 uVar3;");
            trace.statement("double dVar4;");
            trace.statement("undefined1 auStack_188 [32];");
            trace.statement("char local_168 [127];");
            trace.statement("undefined1 local_e9;");
            trace.statement("ulonglong local_18;");
            trace.statement("local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_188;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1))")) {
                trace.statement("uVar3 = 0;");
            } else {
            trace.statement("dVar4 = (double)(**(code **)(*plVar2 + 0x160))(plVar2);");
            trace.statement("memset(local_168,0,0x144);");
            if (trace.condition("if ((((0 < (int)dVar4) && (DAT_1803fa668 != (longlong *)0x0)) && (cVar1 = (**(code **)(*DAT_1803fa668 + 0x40))(DAT_1803fa668,(int)dVar4,local_168), cVar1 != '\\0')) && (local_168[0] != '\\0'))")) {
                trace.statement("local_e9 = 0;");
                trace.statement("(**(code **)(*plVar2 + 0xe8))(plVar2,local_168,0);");
                trace.statement("return 1;");
            }
            trace.statement("(**(code **)(*plVar2 + 0xe0))(plVar2);");
            trace.statement("uVar3 = 1;");
            }
            trace.statement("return uVar3;");
        }
    return kFunction_0x1800e5070;
}

// 0x1800e5160 FUN_1800e5160
// source: re/dump/decompile/0x1800e5160_FUN_1800e5160.c
// size: 217 bytes; thunk: false
// body sha256: 9dfd48f782b2e88bf5fba387a4957c800578fe225b191c6ff5f7f0547b4c3a30
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e5160{
    "0x1800e5160",
    "FUN_1800e5160",
    R"F1800e5160S(undefined FUN_1800e5160())F1800e5160S",
    R"B1800e5160(// 0x1800e5160  FUN_1800e5160
// size=217 thunk=false
// signature: undefined FUN_1800e5160()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800e5160(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  double dVar4;
  undefined1 auStack_188 [32];
  undefined1 local_168 [128];
  int local_e8;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_188;
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
    uVar3 = 0;
  }
  else {
    dVar4 = (double)(**(code **)(*plVar2 + 0x160))(plVar2);
    memset(local_168,0,0x144);
    if (((0 < (int)dVar4) && (DAT_1803fa668 != (longlong *)0x0)) &&
       (cVar1 = (**(code **)(*DAT_1803fa668 + 0x40))(DAT_1803fa668,(int)dVar4,local_168),
       cVar1 != '\0')) {
      (**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_e8);
      return 1;
    }
    (**(code **)(*plVar2 + 0xe0))(plVar2);
    uVar3 = 1;
  }
  return uVar3;
}


)B1800e5160",
    "9dfd48f782b2e88bf5fba387a4957c800578fe225b191c6ff5f7f0547b4c3a30",
    R"F1800e5160C(FUN_180039770)F1800e5160C",
    R"F1800e5160D(DAT_1803da4c0
DAT_1803fa668)F1800e5160D",
    R"F1800e5160T()F1800e5160T",
    R"F1800e5160F(23: if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
26: else {
29: if (((0 < (int)dVar4) && (DAT_1803fa668 != (longlong *)0x0)) &&
33: return 1;
38: return uVar3;)F1800e5160F",
    R"F1800e5160U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa668.
TODO: resolve the indirect call in body 27: dVar4 = (double)(**(code **)(*plVar2 + 0x160))(plVar2);.
TODO: resolve the indirect call in body 30: (cVar1 = (**(code **)(*DAT_1803fa668 + 0x40))(DAT_1803fa668,(int)dVar4,local_168),.
TODO: resolve the indirect call in body 32: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_e8);.
TODO: resolve the indirect call in body 35: (**(code **)(*plVar2 + 0xe0))(plVar2);.)F1800e5160U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e5160() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e5160", "FUN_1800e5160");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] char cVar1{};
    [[maybe_unused]] std::int64_t * plVar2{};
    [[maybe_unused]] std::uint64_t uVar3{};
    [[maybe_unused]] double dVar4{};
    [[maybe_unused]] std::uint8_t auStack_188[32]{};
    [[maybe_unused]] std::uint8_t local_168[128]{};
    [[maybe_unused]] std::int32_t local_e8{};
    [[maybe_unused]] std::uint64_t local_18{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803da4c0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa668.
    // TODO: resolve the indirect call in body 27: dVar4 = (double)(**(code **)(*plVar2 + 0x160))(plVar2);.
    // TODO: resolve the indirect call in body 30: (cVar1 = (**(code **)(*DAT_1803fa668 + 0x40))(DAT_1803fa668,(int)dVar4,local_168),.
    // TODO: resolve the indirect call in body 32: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_e8);.
    // TODO: resolve the indirect call in body 35: (**(code **)(*plVar2 + 0xe0))(plVar2);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("memset", local_168, 0, 0x144);
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803da4c0", static_cast<const void*>(&image::DAT_1803da4c0));
    trace.data_ref("DAT_1803fa668", static_cast<const void*>(&image::DAT_1803fa668));
    // body sha256: 9dfd48f782b2e88bf5fba387a4957c800578fe225b191c6ff5f7f0547b4c3a30
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("char cVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("undefined8 uVar3;");
            trace.statement("double dVar4;");
            trace.statement("undefined1 auStack_188 [32];");
            trace.statement("undefined1 local_168 [128];");
            trace.statement("int local_e8;");
            trace.statement("ulonglong local_18;");
            trace.statement("local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_188;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1))")) {
                trace.statement("uVar3 = 0;");
            } else {
            trace.statement("dVar4 = (double)(**(code **)(*plVar2 + 0x160))(plVar2);");
            trace.statement("memset(local_168,0,0x144);");
            if (trace.condition("if (((0 < (int)dVar4) && (DAT_1803fa668 != (longlong *)0x0)) && (cVar1 = (**(code **)(*DAT_1803fa668 + 0x40))(DAT_1803fa668,(int)dVar4,local_168), cVar1 != '\\0'))")) {
                trace.statement("(**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_e8);");
                trace.statement("return 1;");
            }
            trace.statement("(**(code **)(*plVar2 + 0xe0))(plVar2);");
            trace.statement("uVar3 = 1;");
            }
            trace.statement("return uVar3;");
        }
    return kFunction_0x1800e5160;
}

// 0x1800e5240 FUN_1800e5240
// source: re/dump/decompile/0x1800e5240_FUN_1800e5240.c
// size: 442 bytes; thunk: false
// body sha256: 06aae53d769363532c3c8dfc789842f47430dd57abf47f2e61abb76e1f73a2c0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e5240{
    "0x1800e5240",
    "FUN_1800e5240",
    R"F1800e5240S(undefined FUN_1800e5240())F1800e5240S",
    R"B1800e5240(// 0x1800e5240  FUN_1800e5240
// size=442 thunk=false
// signature: undefined FUN_1800e5240()
// status: ok


undefined8 FUN_1800e5240(undefined8 param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined1 *local_98;
  undefined1 local_90 [32];
  undefined1 local_70 [72];
  
  plVar5 = (longlong *)FUN_180039770();
  if ((plVar5 == (longlong *)0x0) || (plVar5[1] != param_2)) {
    uVar7 = 0;
  }
  else {
    dVar3 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,1);
    if (((0 < (int)dVar3) && (DAT_1803fa360 != (longlong *)0x0)) &&
       (lVar6 = (**(code **)(*DAT_1803fa360 + 0x18))(), lVar6 != 0)) {
      local_e8 = 0;
      uStack_e0 = 0;
      local_d8 = 0;
      local_d0 = 0;
      FUN_18001d080(&local_e8,"DT_BaseEntity",0xd);
      uVar7 = FUN_18016d4c0(local_90,&local_e8);
      uVar7 = FUN_180018ef0(&DAT_1803fac80,uVar7);
      FUN_18020e450(&local_e8);
      local_a8 = &local_c8;
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      local_b0 = 0;
      FUN_18001d080(&local_c8,"m_vecMins",9);
      local_a0 = &local_c8;
      local_98 = local_70;
      uVar8 = FUN_18016d4c0(local_70,&local_c8);
      iVar4 = FUN_180018c10(uVar7,uVar8);
      lVar9 = (longlong)iVar4;
      FUN_18020e450(&local_c8);
      fVar1 = *(float *)(lVar9 + 4 + lVar6);
      fVar2 = *(float *)(lVar9 + 8 + lVar6);
      (**(code **)(*plVar5 + 0xf0))(plVar5,(double)*(float *)(lVar9 + lVar6));
      (**(code **)(*plVar5 + 0xf0))(plVar5,(double)fVar1);
      (**(code **)(*plVar5 + 0xf0))(plVar5,(double)fVar2);
      return 3;
    }
    (**(code **)(*plVar5 + 0xe0))(plVar5);
    uVar7 = 1;
  }
  return uVar7;
}


)B1800e5240",
    "06aae53d769363532c3c8dfc789842f47430dd57abf47f2e61abb76e1f73a2c0",
    R"F1800e5240C(FUN_180018c10
FUN_180018ef0
FUN_18001d080
FUN_180039770
FUN_18016d4c0
FUN_18020e450)F1800e5240C",
    R"F1800e5240D(DAT_1803fa360
DAT_1803fac80)F1800e5240D",
    R"F1800e5240T("m_vecMins"
"DT_BaseEntity")F1800e5240T",
    R"F1800e5240F(34: if ((plVar5 == (longlong *)0x0) || (plVar5[1] != param_2)) {
37: else {
39: if (((0 < (int)dVar3) && (DAT_1803fa360 != (longlong *)0x0)) &&
66: return 3;
71: return uVar7;)F1800e5240F",
    R"F1800e5240U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa360.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fac80.
TODO: resolve the indirect call in body 38: dVar3 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,1);.
TODO: resolve the indirect call in body 40: (lVar6 = (**(code **)(*DAT_1803fa360 + 0x18))(), lVar6 != 0)) {.
TODO: resolve the indirect call in body 63: (**(code **)(*plVar5 + 0xf0))(plVar5,(double)*(float *)(lVar9 + lVar6));.
TODO: resolve the indirect call in body 64: (**(code **)(*plVar5 + 0xf0))(plVar5,(double)fVar1);.
TODO: resolve the indirect call in body 65: (**(code **)(*plVar5 + 0xf0))(plVar5,(double)fVar2);.
TODO: resolve the indirect call in body 68: (**(code **)(*plVar5 + 0xe0))(plVar5);.)F1800e5240U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e5240() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e5240", "FUN_1800e5240");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    [[maybe_unused]] float fVar1{};
    [[maybe_unused]] float fVar2{};
    [[maybe_unused]] double dVar3{};
    [[maybe_unused]] std::int32_t iVar4{};
    [[maybe_unused]] std::int64_t * plVar5{};
    [[maybe_unused]] std::int64_t lVar6{};
    [[maybe_unused]] std::uint64_t uVar7{};
    [[maybe_unused]] std::uint64_t uVar8{};
    [[maybe_unused]] std::int64_t lVar9{};
    [[maybe_unused]] std::uint64_t local_e8{};
    [[maybe_unused]] std::uint64_t uStack_e0{};
    [[maybe_unused]] std::uint64_t local_d8{};
    [[maybe_unused]] std::uint64_t local_d0{};
    [[maybe_unused]] std::uint64_t local_c8{};
    [[maybe_unused]] std::uint64_t uStack_c0{};
    [[maybe_unused]] std::uint64_t local_b8{};
    [[maybe_unused]] std::uint64_t local_b0{};
    [[maybe_unused]] std::uint64_t * local_a8{};
    [[maybe_unused]] std::uint64_t * local_a0{};
    [[maybe_unused]] std::uint8_t * local_98{};
    [[maybe_unused]] std::uint8_t local_90[32]{};
    [[maybe_unused]] std::uint8_t local_70[72]{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa360.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fac80.
    // TODO: resolve the indirect call in body 38: dVar3 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,1);.
    // TODO: resolve the indirect call in body 40: (lVar6 = (**(code **)(*DAT_1803fa360 + 0x18))(), lVar6 != 0)) {.
    // TODO: resolve the indirect call in body 63: (**(code **)(*plVar5 + 0xf0))(plVar5,(double)*(float *)(lVar9 + lVar6));.
    // TODO: resolve the indirect call in body 64: (**(code **)(*plVar5 + 0xf0))(plVar5,(double)fVar1);.
    // TODO: resolve the indirect call in body 65: (**(code **)(*plVar5 + 0xf0))(plVar5,(double)fVar2);.
    // TODO: resolve the indirect call in body 68: (**(code **)(*plVar5 + 0xe0))(plVar5);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar5 == (longlong *)0x0) || (plVar5[1] != param_2)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("FUN_18001d080", &local_e8, "DT_BaseEntity", 0xd);
    trace.call_arguments("FUN_18016d4c0", local_90, &local_e8);
    trace.call_arguments("FUN_180018ef0", &image::DAT_1803fac80, uVar7);
    trace.call_arguments("FUN_18020e450", &local_e8);
    trace.call_arguments("FUN_18001d080", &local_c8, "m_vecMins", 9);
    trace.call_arguments("FUN_18016d4c0", local_70, &local_c8);
    trace.call_arguments("FUN_180018c10", uVar7, uVar8);
    trace.call_arguments("FUN_18020e450", &local_c8);
    trace.call_target("FUN_180018c10", reinterpret_cast<const void*>(&image::FUN_180018c10));
    trace.call_target("FUN_180018ef0", reinterpret_cast<const void*>(&image::FUN_180018ef0));
    trace.call_target("FUN_18001d080", reinterpret_cast<const void*>(&image::FUN_18001d080));
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_18016d4c0", reinterpret_cast<const void*>(&image::FUN_18016d4c0));
    trace.call_target("FUN_18020e450", reinterpret_cast<const void*>(&image::FUN_18020e450));
    trace.data_ref("DAT_1803fa360", static_cast<const void*>(&image::DAT_1803fa360));
    trace.data_ref("DAT_1803fac80", static_cast<const void*>(&image::DAT_1803fac80));
    trace.string_literal("m_vecMins");
    trace.string_literal("DT_BaseEntity");
    // body sha256: 06aae53d769363532c3c8dfc789842f47430dd57abf47f2e61abb76e1f73a2c0
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("float fVar1;");
            trace.statement("float fVar2;");
            trace.statement("double dVar3;");
            trace.statement("int iVar4;");
            trace.statement("longlong *plVar5;");
            trace.statement("longlong lVar6;");
            trace.statement("undefined8 uVar7;");
            trace.statement("undefined8 uVar8;");
            trace.statement("longlong lVar9;");
            trace.statement("undefined8 local_e8;");
            trace.statement("undefined8 uStack_e0;");
            trace.statement("undefined8 local_d8;");
            trace.statement("undefined8 local_d0;");
            trace.statement("undefined8 local_c8;");
            trace.statement("undefined8 uStack_c0;");
            trace.statement("undefined8 local_b8;");
            trace.statement("undefined8 local_b0;");
            trace.statement("undefined8 *local_a8;");
            trace.statement("undefined8 *local_a0;");
            trace.statement("undefined1 *local_98;");
            trace.statement("undefined1 local_90 [32];");
            trace.statement("undefined1 local_70 [72];");
            trace.statement("plVar5 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar5 == (longlong *)0x0) || (plVar5[1] != param_2))")) {
                trace.statement("uVar7 = 0;");
            } else {
            trace.statement("dVar3 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,1);");
            if (trace.condition("if (((0 < (int)dVar3) && (DAT_1803fa360 != (longlong *)0x0)) && (lVar6 = (**(code **)(*DAT_1803fa360 + 0x18))(), lVar6 != 0))")) {
                trace.statement("local_e8 = 0;");
                trace.statement("uStack_e0 = 0;");
                trace.statement("local_d8 = 0;");
                trace.statement("local_d0 = 0;");
                trace.statement("FUN_18001d080(&local_e8,\"DT_BaseEntity\",0xd);");
                trace.statement("uVar7 = FUN_18016d4c0(local_90,&local_e8);");
                trace.statement("uVar7 = FUN_180018ef0(&DAT_1803fac80,uVar7);");
                trace.statement("FUN_18020e450(&local_e8);");
                trace.statement("local_a8 = &local_c8;");
                trace.statement("local_c8 = 0;");
                trace.statement("uStack_c0 = 0;");
                trace.statement("local_b8 = 0;");
                trace.statement("local_b0 = 0;");
                trace.statement("FUN_18001d080(&local_c8,\"m_vecMins\",9);");
                trace.statement("local_a0 = &local_c8;");
                trace.statement("local_98 = local_70;");
                trace.statement("uVar8 = FUN_18016d4c0(local_70,&local_c8);");
                trace.statement("iVar4 = FUN_180018c10(uVar7,uVar8);");
                trace.statement("lVar9 = (longlong)iVar4;");
                trace.statement("FUN_18020e450(&local_c8);");
                trace.statement("fVar1 = *(float *)(lVar9 + 4 + lVar6);");
                trace.statement("fVar2 = *(float *)(lVar9 + 8 + lVar6);");
                trace.statement("(**(code **)(*plVar5 + 0xf0))(plVar5,(double)*(float *)(lVar9 + lVar6));");
                trace.statement("(**(code **)(*plVar5 + 0xf0))(plVar5,(double)fVar1);");
                trace.statement("(**(code **)(*plVar5 + 0xf0))(plVar5,(double)fVar2);");
                trace.statement("return 3;");
            }
            trace.statement("(**(code **)(*plVar5 + 0xe0))(plVar5);");
            trace.statement("uVar7 = 1;");
            }
            trace.statement("return uVar7;");
        }
    return kFunction_0x1800e5240;
}

// 0x1800e5410 FUN_1800e5410
// source: re/dump/decompile/0x1800e5410_FUN_1800e5410.c
// size: 442 bytes; thunk: false
// body sha256: 14b41d2a1a500846501441bac0fa449286d5004a21667db07c20db3c21329e41
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e5410{
    "0x1800e5410",
    "FUN_1800e5410",
    R"F1800e5410S(undefined FUN_1800e5410())F1800e5410S",
    R"B1800e5410(// 0x1800e5410  FUN_1800e5410
// size=442 thunk=false
// signature: undefined FUN_1800e5410()
// status: ok


undefined8 FUN_1800e5410(undefined8 param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined1 *local_98;
  undefined1 local_90 [32];
  undefined1 local_70 [72];
  
  plVar5 = (longlong *)FUN_180039770();
  if ((plVar5 == (longlong *)0x0) || (plVar5[1] != param_2)) {
    uVar7 = 0;
  }
  else {
    dVar3 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,1);
    if (((0 < (int)dVar3) && (DAT_1803fa360 != (longlong *)0x0)) &&
       (lVar6 = (**(code **)(*DAT_1803fa360 + 0x18))(), lVar6 != 0)) {
      local_e8 = 0;
      uStack_e0 = 0;
      local_d8 = 0;
      local_d0 = 0;
      FUN_18001d080(&local_e8,"DT_BaseEntity",0xd);
      uVar7 = FUN_18016d4c0(local_90,&local_e8);
      uVar7 = FUN_180018ef0(&DAT_1803fac80,uVar7);
      FUN_18020e450(&local_e8);
      local_a8 = &local_c8;
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      local_b0 = 0;
      FUN_18001d080(&local_c8,"m_vecMaxs",9);
      local_a0 = &local_c8;
      local_98 = local_70;
      uVar8 = FUN_18016d4c0(local_70,&local_c8);
      iVar4 = FUN_180018c10(uVar7,uVar8);
      lVar9 = (longlong)iVar4;
      FUN_18020e450(&local_c8);
      fVar1 = *(float *)(lVar9 + 4 + lVar6);
      fVar2 = *(float *)(lVar9 + 8 + lVar6);
      (**(code **)(*plVar5 + 0xf0))(plVar5,(double)*(float *)(lVar9 + lVar6));
      (**(code **)(*plVar5 + 0xf0))(plVar5,(double)fVar1);
      (**(code **)(*plVar5 + 0xf0))(plVar5,(double)fVar2);
      return 3;
    }
    (**(code **)(*plVar5 + 0xe0))(plVar5);
    uVar7 = 1;
  }
  return uVar7;
}


)B1800e5410",
    "14b41d2a1a500846501441bac0fa449286d5004a21667db07c20db3c21329e41",
    R"F1800e5410C(FUN_180018c10
FUN_180018ef0
FUN_18001d080
FUN_180039770
FUN_18016d4c0
FUN_18020e450)F1800e5410C",
    R"F1800e5410D(DAT_1803fa360
DAT_1803fac80)F1800e5410D",
    R"F1800e5410T("m_vecMaxs"
"DT_BaseEntity")F1800e5410T",
    R"F1800e5410F(34: if ((plVar5 == (longlong *)0x0) || (plVar5[1] != param_2)) {
37: else {
39: if (((0 < (int)dVar3) && (DAT_1803fa360 != (longlong *)0x0)) &&
66: return 3;
71: return uVar7;)F1800e5410F",
    R"F1800e5410U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa360.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fac80.
TODO: resolve the indirect call in body 38: dVar3 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,1);.
TODO: resolve the indirect call in body 40: (lVar6 = (**(code **)(*DAT_1803fa360 + 0x18))(), lVar6 != 0)) {.
TODO: resolve the indirect call in body 63: (**(code **)(*plVar5 + 0xf0))(plVar5,(double)*(float *)(lVar9 + lVar6));.
TODO: resolve the indirect call in body 64: (**(code **)(*plVar5 + 0xf0))(plVar5,(double)fVar1);.
TODO: resolve the indirect call in body 65: (**(code **)(*plVar5 + 0xf0))(plVar5,(double)fVar2);.
TODO: resolve the indirect call in body 68: (**(code **)(*plVar5 + 0xe0))(plVar5);.)F1800e5410U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e5410() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e5410", "FUN_1800e5410");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    [[maybe_unused]] float fVar1{};
    [[maybe_unused]] float fVar2{};
    [[maybe_unused]] double dVar3{};
    [[maybe_unused]] std::int32_t iVar4{};
    [[maybe_unused]] std::int64_t * plVar5{};
    [[maybe_unused]] std::int64_t lVar6{};
    [[maybe_unused]] std::uint64_t uVar7{};
    [[maybe_unused]] std::uint64_t uVar8{};
    [[maybe_unused]] std::int64_t lVar9{};
    [[maybe_unused]] std::uint64_t local_e8{};
    [[maybe_unused]] std::uint64_t uStack_e0{};
    [[maybe_unused]] std::uint64_t local_d8{};
    [[maybe_unused]] std::uint64_t local_d0{};
    [[maybe_unused]] std::uint64_t local_c8{};
    [[maybe_unused]] std::uint64_t uStack_c0{};
    [[maybe_unused]] std::uint64_t local_b8{};
    [[maybe_unused]] std::uint64_t local_b0{};
    [[maybe_unused]] std::uint64_t * local_a8{};
    [[maybe_unused]] std::uint64_t * local_a0{};
    [[maybe_unused]] std::uint8_t * local_98{};
    [[maybe_unused]] std::uint8_t local_90[32]{};
    [[maybe_unused]] std::uint8_t local_70[72]{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa360.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fac80.
    // TODO: resolve the indirect call in body 38: dVar3 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,1);.
    // TODO: resolve the indirect call in body 40: (lVar6 = (**(code **)(*DAT_1803fa360 + 0x18))(), lVar6 != 0)) {.
    // TODO: resolve the indirect call in body 63: (**(code **)(*plVar5 + 0xf0))(plVar5,(double)*(float *)(lVar9 + lVar6));.
    // TODO: resolve the indirect call in body 64: (**(code **)(*plVar5 + 0xf0))(plVar5,(double)fVar1);.
    // TODO: resolve the indirect call in body 65: (**(code **)(*plVar5 + 0xf0))(plVar5,(double)fVar2);.
    // TODO: resolve the indirect call in body 68: (**(code **)(*plVar5 + 0xe0))(plVar5);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar5 == (longlong *)0x0) || (plVar5[1] != param_2)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("FUN_18001d080", &local_e8, "DT_BaseEntity", 0xd);
    trace.call_arguments("FUN_18016d4c0", local_90, &local_e8);
    trace.call_arguments("FUN_180018ef0", &image::DAT_1803fac80, uVar7);
    trace.call_arguments("FUN_18020e450", &local_e8);
    trace.call_arguments("FUN_18001d080", &local_c8, "m_vecMaxs", 9);
    trace.call_arguments("FUN_18016d4c0", local_70, &local_c8);
    trace.call_arguments("FUN_180018c10", uVar7, uVar8);
    trace.call_arguments("FUN_18020e450", &local_c8);
    trace.call_target("FUN_180018c10", reinterpret_cast<const void*>(&image::FUN_180018c10));
    trace.call_target("FUN_180018ef0", reinterpret_cast<const void*>(&image::FUN_180018ef0));
    trace.call_target("FUN_18001d080", reinterpret_cast<const void*>(&image::FUN_18001d080));
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_18016d4c0", reinterpret_cast<const void*>(&image::FUN_18016d4c0));
    trace.call_target("FUN_18020e450", reinterpret_cast<const void*>(&image::FUN_18020e450));
    trace.data_ref("DAT_1803fa360", static_cast<const void*>(&image::DAT_1803fa360));
    trace.data_ref("DAT_1803fac80", static_cast<const void*>(&image::DAT_1803fac80));
    trace.string_literal("m_vecMaxs");
    trace.string_literal("DT_BaseEntity");
    // body sha256: 14b41d2a1a500846501441bac0fa449286d5004a21667db07c20db3c21329e41
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("float fVar1;");
            trace.statement("float fVar2;");
            trace.statement("double dVar3;");
            trace.statement("int iVar4;");
            trace.statement("longlong *plVar5;");
            trace.statement("longlong lVar6;");
            trace.statement("undefined8 uVar7;");
            trace.statement("undefined8 uVar8;");
            trace.statement("longlong lVar9;");
            trace.statement("undefined8 local_e8;");
            trace.statement("undefined8 uStack_e0;");
            trace.statement("undefined8 local_d8;");
            trace.statement("undefined8 local_d0;");
            trace.statement("undefined8 local_c8;");
            trace.statement("undefined8 uStack_c0;");
            trace.statement("undefined8 local_b8;");
            trace.statement("undefined8 local_b0;");
            trace.statement("undefined8 *local_a8;");
            trace.statement("undefined8 *local_a0;");
            trace.statement("undefined1 *local_98;");
            trace.statement("undefined1 local_90 [32];");
            trace.statement("undefined1 local_70 [72];");
            trace.statement("plVar5 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar5 == (longlong *)0x0) || (plVar5[1] != param_2))")) {
                trace.statement("uVar7 = 0;");
            } else {
            trace.statement("dVar3 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,1);");
            if (trace.condition("if (((0 < (int)dVar3) && (DAT_1803fa360 != (longlong *)0x0)) && (lVar6 = (**(code **)(*DAT_1803fa360 + 0x18))(), lVar6 != 0))")) {
                trace.statement("local_e8 = 0;");
                trace.statement("uStack_e0 = 0;");
                trace.statement("local_d8 = 0;");
                trace.statement("local_d0 = 0;");
                trace.statement("FUN_18001d080(&local_e8,\"DT_BaseEntity\",0xd);");
                trace.statement("uVar7 = FUN_18016d4c0(local_90,&local_e8);");
                trace.statement("uVar7 = FUN_180018ef0(&DAT_1803fac80,uVar7);");
                trace.statement("FUN_18020e450(&local_e8);");
                trace.statement("local_a8 = &local_c8;");
                trace.statement("local_c8 = 0;");
                trace.statement("uStack_c0 = 0;");
                trace.statement("local_b8 = 0;");
                trace.statement("local_b0 = 0;");
                trace.statement("FUN_18001d080(&local_c8,\"m_vecMaxs\",9);");
                trace.statement("local_a0 = &local_c8;");
                trace.statement("local_98 = local_70;");
                trace.statement("uVar8 = FUN_18016d4c0(local_70,&local_c8);");
                trace.statement("iVar4 = FUN_180018c10(uVar7,uVar8);");
                trace.statement("lVar9 = (longlong)iVar4;");
                trace.statement("FUN_18020e450(&local_c8);");
                trace.statement("fVar1 = *(float *)(lVar9 + 4 + lVar6);");
                trace.statement("fVar2 = *(float *)(lVar9 + 8 + lVar6);");
                trace.statement("(**(code **)(*plVar5 + 0xf0))(plVar5,(double)*(float *)(lVar9 + lVar6));");
                trace.statement("(**(code **)(*plVar5 + 0xf0))(plVar5,(double)fVar1);");
                trace.statement("(**(code **)(*plVar5 + 0xf0))(plVar5,(double)fVar2);");
                trace.statement("return 3;");
            }
            trace.statement("(**(code **)(*plVar5 + 0xe0))(plVar5);");
            trace.statement("uVar7 = 1;");
            }
            trace.statement("return uVar7;");
        }
    return kFunction_0x1800e5410;
}

// 0x1800e55e0 FUN_1800e55e0
// source: re/dump/decompile/0x1800e55e0_FUN_1800e55e0.c
// size: 222 bytes; thunk: false
// body sha256: 9fa33cc20ee6b923c5e7f658f8ce206f98c2cb021d7a52a88fb15d976f06719f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e55e0{
    "0x1800e55e0",
    "FUN_1800e55e0",
    R"F1800e55e0S(undefined FUN_1800e55e0())F1800e55e0S",
    R"B1800e55e0(// 0x1800e55e0  FUN_1800e55e0
// size=222 thunk=false
// signature: undefined FUN_1800e55e0()
// status: ok


undefined8 FUN_1800e55e0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  double dVar3;
  float local_18;
  float local_14;
  float local_10;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    dVar3 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
    if ((0 < (int)dVar3) && (DAT_1803fa360 != (longlong *)0x0)) {
      lVar2 = (**(code **)(*DAT_1803fa360 + 0x18))();
      if (lVar2 != 0) {
        FUN_18001c430(lVar2,&local_18);
        (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_18);
        (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_14);
        (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_10);
        return 3;
      }
    }
    (**(code **)(*plVar1 + 0xe0))(plVar1);
    return 1;
  }
  return 0;
}


)B1800e55e0",
    "9fa33cc20ee6b923c5e7f658f8ce206f98c2cb021d7a52a88fb15d976f06719f",
    R"F1800e55e0C(FUN_18001c430
FUN_180039770)F1800e55e0C",
    R"F1800e55e0D(DAT_1803fa360)F1800e55e0D",
    R"F1800e55e0T()F1800e55e0T",
    R"F1800e55e0F(18: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
20: if ((0 < (int)dVar3) && (DAT_1803fa360 != (longlong *)0x0)) {
22: if (lVar2 != 0) {
27: return 3;
31: return 1;
33: return 0;)F1800e55e0F",
    R"F1800e55e0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa360.
TODO: resolve the indirect call in body 19: dVar3 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.
TODO: resolve the indirect call in body 21: lVar2 = (**(code **)(*DAT_1803fa360 + 0x18))();.
TODO: resolve the indirect call in body 24: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_18);.
TODO: resolve the indirect call in body 25: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_14);.
TODO: resolve the indirect call in body 26: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_10);.
TODO: resolve the indirect call in body 30: (**(code **)(*plVar1 + 0xe0))(plVar1);.)F1800e55e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e55e0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e55e0", "FUN_1800e55e0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t * plVar1{};
    [[maybe_unused]] std::int64_t lVar2{};
    [[maybe_unused]] double dVar3{};
    [[maybe_unused]] float local_18{};
    [[maybe_unused]] float local_14{};
    [[maybe_unused]] float local_10{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa360.
    // TODO: resolve the indirect call in body 19: dVar3 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.
    // TODO: resolve the indirect call in body 21: lVar2 = (**(code **)(*DAT_1803fa360 + 0x18))();.
    // TODO: resolve the indirect call in body 24: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_18);.
    // TODO: resolve the indirect call in body 25: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_14);.
    // TODO: resolve the indirect call in body 26: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_10);.
    // TODO: resolve the indirect call in body 30: (**(code **)(*plVar1 + 0xe0))(plVar1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) [reason: pointer-cast target not proven]
    // TODO: condition expression type not recovered: if ((0 < (int)dVar3) && (DAT_1803fa360 != (longlong *)0x0)) [reason: unresolved global storage/width]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("FUN_18001c430", lVar2, &local_18);
    trace.call_target("FUN_18001c430", reinterpret_cast<const void*>(&image::FUN_18001c430));
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803fa360", static_cast<const void*>(&image::DAT_1803fa360));
    // body sha256: 9fa33cc20ee6b923c5e7f658f8ce206f98c2cb021d7a52a88fb15d976f06719f
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong *plVar1;");
            trace.statement("longlong lVar2;");
            trace.statement("double dVar3;");
            trace.statement("float local_18;");
            trace.statement("float local_14;");
            trace.statement("float local_10;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                trace.statement("dVar3 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);");
                if (trace.condition("if ((0 < (int)dVar3) && (DAT_1803fa360 != (longlong *)0x0))")) {
                    trace.statement("lVar2 = (**(code **)(*DAT_1803fa360 + 0x18))();");
                    if (trace.checked_condition("if (lVar2 != 0)", [&]() -> bool { return static_cast<bool>(lVar2 != 0); })) {
                        trace.statement("FUN_18001c430(lVar2,&local_18);");
                        trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_18);");
                        trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_14);");
                        trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_10);");
                        trace.statement("return 3;");
                    }
                }
                trace.statement("(**(code **)(*plVar1 + 0xe0))(plVar1);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e55e0;
}

// 0x1800e56c0 FUN_1800e56c0
// source: re/dump/decompile/0x1800e56c0_FUN_1800e56c0.c
// size: 233 bytes; thunk: false
// body sha256: ad3637df91b938ca78134d244c121acb39cb8a325832b7c6da03b5f3c643fa27
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e56c0{
    "0x1800e56c0",
    "FUN_1800e56c0",
    R"F1800e56c0S(undefined FUN_1800e56c0())F1800e56c0S",
    R"B1800e56c0(// 0x1800e56c0  FUN_1800e56c0
// size=233 thunk=false
// signature: undefined FUN_1800e56c0()
// status: ok


undefined8 FUN_1800e56c0(longlong param_1)

{
  float fVar1;
  float fVar2;
  longlong *plVar3;
  longlong lVar4;
  float *pfVar5;
  double dVar6;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
    dVar6 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);
    if ((0 < (int)dVar6) && (DAT_1803fa360 != (longlong *)0x0)) {
      lVar4 = (**(code **)(*DAT_1803fa360 + 0x18))();
      if (lVar4 != 0) {
        pfVar5 = (float *)FUN_18001d530(lVar4);
        fVar1 = pfVar5[1];
        fVar2 = pfVar5[2];
        (**(code **)(*plVar3 + 0xf0))(plVar3,(double)*pfVar5);
        (**(code **)(*plVar3 + 0xf0))(plVar3,(double)fVar1);
        (**(code **)(*plVar3 + 0xf0))(plVar3,(double)fVar2);
        return 3;
      }
    }
    (**(code **)(*plVar3 + 0xe0))(plVar3);
    return 1;
  }
  return 0;
}


)B1800e56c0",
    "ad3637df91b938ca78134d244c121acb39cb8a325832b7c6da03b5f3c643fa27",
    R"F1800e56c0C(FUN_18001d530
FUN_180039770)F1800e56c0C",
    R"F1800e56c0D(DAT_1803fa360)F1800e56c0D",
    R"F1800e56c0T()F1800e56c0T",
    R"F1800e56c0F(18: if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
20: if ((0 < (int)dVar6) && (DAT_1803fa360 != (longlong *)0x0)) {
22: if (lVar4 != 0) {
29: return 3;
33: return 1;
35: return 0;)F1800e56c0F",
    R"F1800e56c0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa360.
TODO: resolve the indirect call in body 19: dVar6 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);.
TODO: resolve the indirect call in body 21: lVar4 = (**(code **)(*DAT_1803fa360 + 0x18))();.
TODO: resolve the indirect call in body 26: (**(code **)(*plVar3 + 0xf0))(plVar3,(double)*pfVar5);.
TODO: resolve the indirect call in body 27: (**(code **)(*plVar3 + 0xf0))(plVar3,(double)fVar1);.
TODO: resolve the indirect call in body 28: (**(code **)(*plVar3 + 0xf0))(plVar3,(double)fVar2);.
TODO: resolve the indirect call in body 32: (**(code **)(*plVar3 + 0xe0))(plVar3);.)F1800e56c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e56c0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e56c0", "FUN_1800e56c0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] float fVar1{};
    [[maybe_unused]] float fVar2{};
    [[maybe_unused]] std::int64_t * plVar3{};
    [[maybe_unused]] std::int64_t lVar4{};
    [[maybe_unused]] float * pfVar5{};
    [[maybe_unused]] double dVar6{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa360.
    // TODO: resolve the indirect call in body 19: dVar6 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);.
    // TODO: resolve the indirect call in body 21: lVar4 = (**(code **)(*DAT_1803fa360 + 0x18))();.
    // TODO: resolve the indirect call in body 26: (**(code **)(*plVar3 + 0xf0))(plVar3,(double)*pfVar5);.
    // TODO: resolve the indirect call in body 27: (**(code **)(*plVar3 + 0xf0))(plVar3,(double)fVar1);.
    // TODO: resolve the indirect call in body 28: (**(code **)(*plVar3 + 0xf0))(plVar3,(double)fVar2);.
    // TODO: resolve the indirect call in body 32: (**(code **)(*plVar3 + 0xe0))(plVar3);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) [reason: pointer-cast target not proven]
    // TODO: condition expression type not recovered: if ((0 < (int)dVar6) && (DAT_1803fa360 != (longlong *)0x0)) [reason: unresolved global storage/width]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("FUN_18001d530", lVar4);
    trace.call_target("FUN_18001d530", reinterpret_cast<const void*>(&image::FUN_18001d530));
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803fa360", static_cast<const void*>(&image::DAT_1803fa360));
    // body sha256: ad3637df91b938ca78134d244c121acb39cb8a325832b7c6da03b5f3c643fa27
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("float fVar1;");
            trace.statement("float fVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("longlong lVar4;");
            trace.statement("float *pfVar5;");
            trace.statement("double dVar6;");
            trace.statement("plVar3 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1))")) {
                trace.statement("dVar6 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);");
                if (trace.condition("if ((0 < (int)dVar6) && (DAT_1803fa360 != (longlong *)0x0))")) {
                    trace.statement("lVar4 = (**(code **)(*DAT_1803fa360 + 0x18))();");
                    if (trace.checked_condition("if (lVar4 != 0)", [&]() -> bool { return static_cast<bool>(lVar4 != 0); })) {
                        trace.statement("pfVar5 = (float *)FUN_18001d530(lVar4);");
                        trace.statement("fVar1 = pfVar5[1];");
                        trace.statement("fVar2 = pfVar5[2];");
                        trace.statement("(**(code **)(*plVar3 + 0xf0))(plVar3,(double)*pfVar5);");
                        trace.statement("(**(code **)(*plVar3 + 0xf0))(plVar3,(double)fVar1);");
                        trace.statement("(**(code **)(*plVar3 + 0xf0))(plVar3,(double)fVar2);");
                        trace.statement("return 3;");
                    }
                }
                trace.statement("(**(code **)(*plVar3 + 0xe0))(plVar3);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e56c0;
}

// 0x1800e57b0 FUN_1800e57b0
// source: re/dump/decompile/0x1800e57b0_FUN_1800e57b0.c
// size: 219 bytes; thunk: false
// body sha256: d4a7753809c07c17accfd962c2488d747a24d6547b589f193fd4b197539404ea
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e57b0{
    "0x1800e57b0",
    "FUN_1800e57b0",
    R"F1800e57b0S(undefined FUN_1800e57b0())F1800e57b0S",
    R"B1800e57b0(// 0x1800e57b0  FUN_1800e57b0
// size=219 thunk=false
// signature: undefined FUN_1800e57b0()
// status: ok


undefined8 FUN_1800e57b0(longlong param_1)

{
  double dVar1;
  longlong *plVar2;
  longlong lVar3;
  float *pfVar4;
  float fVar5;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    dVar1 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
    if ((0 < (int)dVar1) && (DAT_1803fa360 != (longlong *)0x0)) {
      lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();
      if (lVar3 != 0) {
        pfVar4 = (float *)FUN_18001d530(lVar3);
        lVar3 = *plVar2;
        fVar5 = pfVar4[1] * pfVar4[1] + *pfVar4 * *pfVar4;
        if (fVar5 < 0.0) {
          fVar5 = sqrtf(fVar5);
        }
        else {
          fVar5 = SQRT(fVar5);
        }
        (**(code **)(lVar3 + 0xf0))(plVar2,(double)fVar5);
        return 1;
      }
    }
    (**(code **)(*plVar2 + 0xe0))(plVar2);
    return 1;
  }
  return 0;
}


)B1800e57b0",
    "d4a7753809c07c17accfd962c2488d747a24d6547b589f193fd4b197539404ea",
    R"F1800e57b0C(FUN_18001d530
FUN_180039770)F1800e57b0C",
    R"F1800e57b0D(DAT_1803fa360)F1800e57b0D",
    R"F1800e57b0T()F1800e57b0T",
    R"F1800e57b0F(17: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
19: if ((0 < (int)dVar1) && (DAT_1803fa360 != (longlong *)0x0)) {
21: if (lVar3 != 0) {
25: if (fVar5 < 0.0) {
28: else {
32: return 1;
36: return 1;
38: return 0;)F1800e57b0F",
    R"F1800e57b0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa360.
TODO: resolve the indirect call in body 18: dVar1 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.
TODO: resolve the indirect call in body 20: lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();.
TODO: resolve the indirect call in body 31: (**(code **)(lVar3 + 0xf0))(plVar2,(double)fVar5);.
TODO: resolve the indirect call in body 35: (**(code **)(*plVar2 + 0xe0))(plVar2);.)F1800e57b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e57b0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e57b0", "FUN_1800e57b0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] double dVar1{};
    [[maybe_unused]] std::int64_t * plVar2{};
    [[maybe_unused]] std::int64_t lVar3{};
    [[maybe_unused]] float * pfVar4{};
    [[maybe_unused]] float fVar5{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa360.
    // TODO: resolve the indirect call in body 18: dVar1 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.
    // TODO: resolve the indirect call in body 20: lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();.
    // TODO: resolve the indirect call in body 31: (**(code **)(lVar3 + 0xf0))(plVar2,(double)fVar5);.
    // TODO: resolve the indirect call in body 35: (**(code **)(*plVar2 + 0xe0))(plVar2);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) [reason: pointer-cast target not proven]
    // TODO: condition expression type not recovered: if ((0 < (int)dVar1) && (DAT_1803fa360 != (longlong *)0x0)) [reason: unresolved global storage/width]
    // TODO: condition expression type not recovered: if (fVar5 < 0.0) [reason: ambiguous operand type]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("FUN_18001d530", lVar3);
    trace.call_arguments("sqrtf", fVar5);
    trace.call_arguments("SQRT", fVar5);
    trace.call_target("FUN_18001d530", reinterpret_cast<const void*>(&image::FUN_18001d530));
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803fa360", static_cast<const void*>(&image::DAT_1803fa360));
    // body sha256: d4a7753809c07c17accfd962c2488d747a24d6547b589f193fd4b197539404ea
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("double dVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("longlong lVar3;");
            trace.statement("float *pfVar4;");
            trace.statement("float fVar5;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1))")) {
                trace.statement("dVar1 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);");
                if (trace.condition("if ((0 < (int)dVar1) && (DAT_1803fa360 != (longlong *)0x0))")) {
                    trace.statement("lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();");
                    if (trace.checked_condition("if (lVar3 != 0)", [&]() -> bool { return static_cast<bool>(lVar3 != 0); })) {
                        trace.statement("pfVar4 = (float *)FUN_18001d530(lVar3);");
                        trace.statement("lVar3 = *plVar2;");
                        trace.statement("fVar5 = pfVar4[1] * pfVar4[1] + *pfVar4 * *pfVar4;");
                        if (trace.condition("if (fVar5 < 0.0)")) {
                            trace.statement("fVar5 = sqrtf(fVar5);");
                        } else {
                        trace.statement("fVar5 = SQRT(fVar5);");
                        }
                        trace.statement("(**(code **)(lVar3 + 0xf0))(plVar2,(double)fVar5);");
                        trace.statement("return 1;");
                    }
                }
                trace.statement("(**(code **)(*plVar2 + 0xe0))(plVar2);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e57b0;
}

// 0x1800e5890 FUN_1800e5890
// source: re/dump/decompile/0x1800e5890_FUN_1800e5890.c
// size: 213 bytes; thunk: false
// body sha256: e69e9933f5bab00c2c7f15043eee2c6f60b1382f324d9356023cdbb2aae091dd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e5890{
    "0x1800e5890",
    "FUN_1800e5890",
    R"F1800e5890S(undefined FUN_1800e5890())F1800e5890S",
    R"B1800e5890(// 0x1800e5890  FUN_1800e5890
// size=213 thunk=false
// signature: undefined FUN_1800e5890()
// status: ok


undefined8 FUN_1800e5890(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  double dVar6;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
    dVar6 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);
    if (((int)dVar6 < 1) || (DAT_1803fa360 == (longlong *)0x0)) {
      lVar5 = *plVar3;
    }
    else {
      plVar4 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))();
      lVar5 = *plVar3;
      if (plVar4 != (longlong *)0x0) {
        pcVar1 = *(code **)(lVar5 + 0xf8);
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4);
        if (plVar4 == (longlong *)0x0) {
          (*pcVar1)(plVar3,1);
          return 1;
        }
        uVar2 = (**(code **)(*plVar4 + 0x40))(plVar4);
        (*pcVar1)(plVar3,uVar2);
        return 1;
      }
    }
    (**(code **)(lVar5 + 0xe0))(plVar3);
    return 1;
  }
  return 0;
}


)B1800e5890",
    "e69e9933f5bab00c2c7f15043eee2c6f60b1382f324d9356023cdbb2aae091dd",
    R"F1800e5890C(FUN_180039770)F1800e5890C",
    R"F1800e5890D(DAT_1803fa360)F1800e5890D",
    R"F1800e5890T()F1800e5890T",
    R"F1800e5890F(18: if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
20: if (((int)dVar6 < 1) || (DAT_1803fa360 == (longlong *)0x0)) {
23: else {
26: if (plVar4 != (longlong *)0x0) {
29: if (plVar4 == (longlong *)0x0) {
31: return 1;
35: return 1;
39: return 1;
41: return 0;)F1800e5890F",
    R"F1800e5890U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa360.
TODO: resolve the indirect call in body 19: dVar6 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);.
TODO: resolve the indirect call in body 24: plVar4 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))();.
TODO: resolve the indirect call in body 27: pcVar1 = *(code **)(lVar5 + 0xf8);.
TODO: resolve the indirect call in body 28: plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4);.
TODO: resolve the indirect call in body 30: (*pcVar1)(plVar3,1);.
TODO: resolve the indirect call in body 33: uVar2 = (**(code **)(*plVar4 + 0x40))(plVar4);.
TODO: resolve the indirect call in body 34: (*pcVar1)(plVar3,uVar2);.
TODO: resolve the indirect call in body 38: (**(code **)(lVar5 + 0xe0))(plVar3);.)F1800e5890U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e5890() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e5890", "FUN_1800e5890");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] void* * pcVar1{};
    [[maybe_unused]] std::uint8_t uVar2{};
    [[maybe_unused]] std::int64_t * plVar3{};
    [[maybe_unused]] std::int64_t * plVar4{};
    [[maybe_unused]] std::int64_t lVar5{};
    [[maybe_unused]] double dVar6{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa360.
    // TODO: resolve the indirect call in body 19: dVar6 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);.
    // TODO: resolve the indirect call in body 24: plVar4 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))();.
    // TODO: resolve the indirect call in body 27: pcVar1 = *(code **)(lVar5 + 0xf8);.
    // TODO: resolve the indirect call in body 28: plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4);.
    // TODO: resolve the indirect call in body 30: (*pcVar1)(plVar3,1);.
    // TODO: resolve the indirect call in body 33: uVar2 = (**(code **)(*plVar4 + 0x40))(plVar4);.
    // TODO: resolve the indirect call in body 34: (*pcVar1)(plVar3,uVar2);.
    // TODO: resolve the indirect call in body 38: (**(code **)(lVar5 + 0xe0))(plVar3);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) [reason: pointer-cast target not proven]
    // TODO: condition expression type not recovered: if (((int)dVar6 < 1) || (DAT_1803fa360 == (longlong *)0x0)) [reason: unresolved global storage/width]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803fa360", static_cast<const void*>(&image::DAT_1803fa360));
    // body sha256: e69e9933f5bab00c2c7f15043eee2c6f60b1382f324d9356023cdbb2aae091dd
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("code *pcVar1;");
            trace.statement("undefined1 uVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("longlong *plVar4;");
            trace.statement("longlong lVar5;");
            trace.statement("double dVar6;");
            trace.statement("plVar3 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1))")) {
                trace.statement("dVar6 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);");
                if (trace.condition("if (((int)dVar6 < 1) || (DAT_1803fa360 == (longlong *)0x0))")) {
                    trace.statement("lVar5 = *plVar3;");
                } else {
                trace.statement("plVar4 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))();");
                trace.statement("lVar5 = *plVar3;");
                if (trace.checked_condition("if (plVar4 != (longlong *)0x0)", [&]() -> bool { return static_cast<bool>(plVar4 != (longlong *)0x0); })) {
                    trace.statement("pcVar1 = *(code **)(lVar5 + 0xf8);");
                    trace.statement("plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4);");
                    if (trace.checked_condition("if (plVar4 == (longlong *)0x0)", [&]() -> bool { return static_cast<bool>(plVar4 == (longlong *)0x0); })) {
                        trace.statement("(*pcVar1)(plVar3,1);");
                        trace.statement("return 1;");
                    }
                    trace.statement("uVar2 = (**(code **)(*plVar4 + 0x40))(plVar4);");
                    trace.statement("(*pcVar1)(plVar3,uVar2);");
                    trace.statement("return 1;");
                }
                }
                trace.statement("(**(code **)(lVar5 + 0xe0))(plVar3);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e5890;
}

// 0x1800e5970 FUN_1800e5970
// source: re/dump/decompile/0x1800e5970_FUN_1800e5970.c
// size: 166 bytes; thunk: false
// body sha256: 29655a25e215ae35d60643fcccc538a7c668af65bfdad9304ebd22d29c67c43d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e5970{
    "0x1800e5970",
    "FUN_1800e5970",
    R"F1800e5970S(undefined FUN_1800e5970())F1800e5970S",
    R"B1800e5970(// 0x1800e5970  FUN_1800e5970
// size=166 thunk=false
// signature: undefined FUN_1800e5970()
// status: ok


undefined8 FUN_1800e5970(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    dVar5 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
    if (((int)dVar5 < 1) || (DAT_1803fa360 == (longlong *)0x0)) {
      lVar4 = *plVar2;
    }
    else {
      lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();
      lVar4 = *plVar2;
      if (lVar3 != 0) {
        iVar1 = FUN_18001c680(lVar3);
        (**(code **)(lVar4 + 0xf0))(plVar2,(double)iVar1);
        return 1;
      }
    }
    (**(code **)(lVar4 + 0xe0))(plVar2);
    return 1;
  }
  return 0;
}


)B1800e5970",
    "29655a25e215ae35d60643fcccc538a7c668af65bfdad9304ebd22d29c67c43d",
    R"F1800e5970C(FUN_18001c680
FUN_180039770)F1800e5970C",
    R"F1800e5970D(DAT_1803fa360)F1800e5970D",
    R"F1800e5970T()F1800e5970T",
    R"F1800e5970F(17: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
19: if (((int)dVar5 < 1) || (DAT_1803fa360 == (longlong *)0x0)) {
22: else {
25: if (lVar3 != 0) {
28: return 1;
32: return 1;
34: return 0;)F1800e5970F",
    R"F1800e5970U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa360.
TODO: resolve the indirect call in body 18: dVar5 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.
TODO: resolve the indirect call in body 23: lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();.
TODO: resolve the indirect call in body 27: (**(code **)(lVar4 + 0xf0))(plVar2,(double)iVar1);.
TODO: resolve the indirect call in body 31: (**(code **)(lVar4 + 0xe0))(plVar2);.)F1800e5970U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e5970() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e5970", "FUN_1800e5970");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int32_t iVar1{};
    [[maybe_unused]] std::int64_t * plVar2{};
    [[maybe_unused]] std::int64_t lVar3{};
    [[maybe_unused]] std::int64_t lVar4{};
    [[maybe_unused]] double dVar5{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa360.
    // TODO: resolve the indirect call in body 18: dVar5 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.
    // TODO: resolve the indirect call in body 23: lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();.
    // TODO: resolve the indirect call in body 27: (**(code **)(lVar4 + 0xf0))(plVar2,(double)iVar1);.
    // TODO: resolve the indirect call in body 31: (**(code **)(lVar4 + 0xe0))(plVar2);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) [reason: pointer-cast target not proven]
    // TODO: condition expression type not recovered: if (((int)dVar5 < 1) || (DAT_1803fa360 == (longlong *)0x0)) [reason: unresolved global storage/width]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("FUN_18001c680", lVar3);
    trace.call_target("FUN_18001c680", reinterpret_cast<const void*>(&image::FUN_18001c680));
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803fa360", static_cast<const void*>(&image::DAT_1803fa360));
    // body sha256: 29655a25e215ae35d60643fcccc538a7c668af65bfdad9304ebd22d29c67c43d
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("int iVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("longlong lVar3;");
            trace.statement("longlong lVar4;");
            trace.statement("double dVar5;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1))")) {
                trace.statement("dVar5 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);");
                if (trace.condition("if (((int)dVar5 < 1) || (DAT_1803fa360 == (longlong *)0x0))")) {
                    trace.statement("lVar4 = *plVar2;");
                } else {
                trace.statement("lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();");
                trace.statement("lVar4 = *plVar2;");
                if (trace.checked_condition("if (lVar3 != 0)", [&]() -> bool { return static_cast<bool>(lVar3 != 0); })) {
                    trace.statement("iVar1 = FUN_18001c680(lVar3);");
                    trace.statement("(**(code **)(lVar4 + 0xf0))(plVar2,(double)iVar1);");
                    trace.statement("return 1;");
                }
                }
                trace.statement("(**(code **)(lVar4 + 0xe0))(plVar2);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e5970;
}

// 0x1800e5a20 FUN_1800e5a20
// source: re/dump/decompile/0x1800e5a20_FUN_1800e5a20.c
// size: 166 bytes; thunk: false
// body sha256: 452e4b7f2d22250e9431f3afccab0947f62eb54d40daf4b20a34b76afe9a63c6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e5a20{
    "0x1800e5a20",
    "FUN_1800e5a20",
    R"F1800e5a20S(undefined FUN_1800e5a20())F1800e5a20S",
    R"B1800e5a20(// 0x1800e5a20  FUN_1800e5a20
// size=166 thunk=false
// signature: undefined FUN_1800e5a20()
// status: ok


undefined8 FUN_1800e5a20(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    dVar5 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
    if (((int)dVar5 < 1) || (DAT_1803fa360 == (longlong *)0x0)) {
      lVar4 = *plVar2;
    }
    else {
      lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();
      lVar4 = *plVar2;
      if (lVar3 != 0) {
        iVar1 = FUN_18001c560(lVar3);
        (**(code **)(lVar4 + 0xf0))(plVar2,(double)iVar1);
        return 1;
      }
    }
    (**(code **)(lVar4 + 0xe0))(plVar2);
    return 1;
  }
  return 0;
}


)B1800e5a20",
    "452e4b7f2d22250e9431f3afccab0947f62eb54d40daf4b20a34b76afe9a63c6",
    R"F1800e5a20C(FUN_18001c560
FUN_180039770)F1800e5a20C",
    R"F1800e5a20D(DAT_1803fa360)F1800e5a20D",
    R"F1800e5a20T()F1800e5a20T",
    R"F1800e5a20F(17: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
19: if (((int)dVar5 < 1) || (DAT_1803fa360 == (longlong *)0x0)) {
22: else {
25: if (lVar3 != 0) {
28: return 1;
32: return 1;
34: return 0;)F1800e5a20F",
    R"F1800e5a20U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa360.
TODO: resolve the indirect call in body 18: dVar5 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.
TODO: resolve the indirect call in body 23: lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();.
TODO: resolve the indirect call in body 27: (**(code **)(lVar4 + 0xf0))(plVar2,(double)iVar1);.
TODO: resolve the indirect call in body 31: (**(code **)(lVar4 + 0xe0))(plVar2);.)F1800e5a20U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e5a20() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e5a20", "FUN_1800e5a20");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int32_t iVar1{};
    [[maybe_unused]] std::int64_t * plVar2{};
    [[maybe_unused]] std::int64_t lVar3{};
    [[maybe_unused]] std::int64_t lVar4{};
    [[maybe_unused]] double dVar5{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa360.
    // TODO: resolve the indirect call in body 18: dVar5 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.
    // TODO: resolve the indirect call in body 23: lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();.
    // TODO: resolve the indirect call in body 27: (**(code **)(lVar4 + 0xf0))(plVar2,(double)iVar1);.
    // TODO: resolve the indirect call in body 31: (**(code **)(lVar4 + 0xe0))(plVar2);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) [reason: pointer-cast target not proven]
    // TODO: condition expression type not recovered: if (((int)dVar5 < 1) || (DAT_1803fa360 == (longlong *)0x0)) [reason: unresolved global storage/width]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("FUN_18001c560", lVar3);
    trace.call_target("FUN_18001c560", reinterpret_cast<const void*>(&image::FUN_18001c560));
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803fa360", static_cast<const void*>(&image::DAT_1803fa360));
    // body sha256: 452e4b7f2d22250e9431f3afccab0947f62eb54d40daf4b20a34b76afe9a63c6
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("int iVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("longlong lVar3;");
            trace.statement("longlong lVar4;");
            trace.statement("double dVar5;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1))")) {
                trace.statement("dVar5 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);");
                if (trace.condition("if (((int)dVar5 < 1) || (DAT_1803fa360 == (longlong *)0x0))")) {
                    trace.statement("lVar4 = *plVar2;");
                } else {
                trace.statement("lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();");
                trace.statement("lVar4 = *plVar2;");
                if (trace.checked_condition("if (lVar3 != 0)", [&]() -> bool { return static_cast<bool>(lVar3 != 0); })) {
                    trace.statement("iVar1 = FUN_18001c560(lVar3);");
                    trace.statement("(**(code **)(lVar4 + 0xf0))(plVar2,(double)iVar1);");
                    trace.statement("return 1;");
                }
                }
                trace.statement("(**(code **)(lVar4 + 0xe0))(plVar2);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e5a20;
}

// 0x1800e5ad0 FUN_1800e5ad0
// source: re/dump/decompile/0x1800e5ad0_FUN_1800e5ad0.c
// size: 228 bytes; thunk: false
// body sha256: 9098da19efcf65798c4bef798a0e9997ff1671817446644c1e739f98dc53de0d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e5ad0{
    "0x1800e5ad0",
    "FUN_1800e5ad0",
    R"F1800e5ad0S(undefined FUN_1800e5ad0())F1800e5ad0S",
    R"B1800e5ad0(// 0x1800e5ad0  FUN_1800e5ad0
// size=228 thunk=false
// signature: undefined FUN_1800e5ad0()
// status: ok


undefined8 FUN_1800e5ad0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  double dVar5;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
    return 0;
  }
  dVar5 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
  if (((int)dVar5 < 1) || (DAT_1803fa360 == (longlong *)0x0)) {
    uVar4 = (**(code **)(*plVar2 + 0x158))(plVar2,2);
    FUN_1800e3320(uVar4);
  }
  else {
    lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();
    uVar4 = (**(code **)(*plVar2 + 0x158))(plVar2,2);
    iVar1 = FUN_1800e3320(uVar4);
    if ((lVar3 != 0) && (0 < iVar1)) {
      (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(int *)(iVar1 + lVar3));
      return 1;
    }
  }
  (**(code **)(*plVar2 + 0xe0))(plVar2);
  return 1;
}


)B1800e5ad0",
    "9098da19efcf65798c4bef798a0e9997ff1671817446644c1e739f98dc53de0d",
    R"F1800e5ad0C(FUN_180039770
FUN_1800e3320)F1800e5ad0C",
    R"F1800e5ad0D(DAT_1803fa360)F1800e5ad0D",
    R"F1800e5ad0T()F1800e5ad0T",
    R"F1800e5ad0F(17: if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
18: return 0;
21: if (((int)dVar5 < 1) || (DAT_1803fa360 == (longlong *)0x0)) {
25: else {
29: if ((lVar3 != 0) && (0 < iVar1)) {
31: return 1;
35: return 1;)F1800e5ad0F",
    R"F1800e5ad0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa360.
TODO: resolve the indirect call in body 20: dVar5 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.
TODO: resolve the indirect call in body 22: uVar4 = (**(code **)(*plVar2 + 0x158))(plVar2,2);.
TODO: resolve the indirect call in body 26: lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();.
TODO: resolve the indirect call in body 27: uVar4 = (**(code **)(*plVar2 + 0x158))(plVar2,2);.
TODO: resolve the indirect call in body 30: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(int *)(iVar1 + lVar3));.
TODO: resolve the indirect call in body 34: (**(code **)(*plVar2 + 0xe0))(plVar2);.)F1800e5ad0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e5ad0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e5ad0", "FUN_1800e5ad0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int32_t iVar1{};
    [[maybe_unused]] std::int64_t * plVar2{};
    [[maybe_unused]] std::int64_t lVar3{};
    [[maybe_unused]] std::uint64_t uVar4{};
    [[maybe_unused]] double dVar5{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa360.
    // TODO: resolve the indirect call in body 20: dVar5 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.
    // TODO: resolve the indirect call in body 22: uVar4 = (**(code **)(*plVar2 + 0x158))(plVar2,2);.
    // TODO: resolve the indirect call in body 26: lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();.
    // TODO: resolve the indirect call in body 27: uVar4 = (**(code **)(*plVar2 + 0x158))(plVar2,2);.
    // TODO: resolve the indirect call in body 30: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(int *)(iVar1 + lVar3));.
    // TODO: resolve the indirect call in body 34: (**(code **)(*plVar2 + 0xe0))(plVar2);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) [reason: pointer-cast target not proven]
    // TODO: condition expression type not recovered: if (((int)dVar5 < 1) || (DAT_1803fa360 == (longlong *)0x0)) [reason: unresolved global storage/width]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("FUN_1800e3320", uVar4);
    trace.call_arguments("FUN_1800e3320", uVar4);
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_1800e3320", reinterpret_cast<const void*>(&image::FUN_1800e3320));
    trace.data_ref("DAT_1803fa360", static_cast<const void*>(&image::DAT_1803fa360));
    // body sha256: 9098da19efcf65798c4bef798a0e9997ff1671817446644c1e739f98dc53de0d
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("int iVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("longlong lVar3;");
            trace.statement("undefined8 uVar4;");
            trace.statement("double dVar5;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1))")) {
                trace.statement("return 0;");
            }
            trace.statement("dVar5 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);");
            if (trace.condition("if (((int)dVar5 < 1) || (DAT_1803fa360 == (longlong *)0x0))")) {
                trace.statement("uVar4 = (**(code **)(*plVar2 + 0x158))(plVar2,2);");
                trace.statement("FUN_1800e3320(uVar4);");
            } else {
            trace.statement("lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();");
            trace.statement("uVar4 = (**(code **)(*plVar2 + 0x158))(plVar2,2);");
            trace.statement("iVar1 = FUN_1800e3320(uVar4);");
            if (trace.checked_condition("if ((lVar3 != 0) && (0 < iVar1))", [&]() -> bool { return static_cast<bool>((lVar3 != 0) && (0 < iVar1)); })) {
                trace.statement("(**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(int *)(iVar1 + lVar3));");
                trace.statement("return 1;");
            }
            }
            trace.statement("(**(code **)(*plVar2 + 0xe0))(plVar2);");
            trace.statement("return 1;");
        }
    return kFunction_0x1800e5ad0;
}

// 0x1800e5bc0 FUN_1800e5bc0
// source: re/dump/decompile/0x1800e5bc0_FUN_1800e5bc0.c
// size: 378 bytes; thunk: false
// body sha256: 6a3940bd62f427252a75239fa076aaec1eacdf88b16cd30e9e2c1faae4af51cf
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e5bc0{
    "0x1800e5bc0",
    "FUN_1800e5bc0",
    R"F1800e5bc0S(undefined FUN_1800e5bc0())F1800e5bc0S",
    R"B1800e5bc0(// 0x1800e5bc0  FUN_1800e5bc0
// size=378 thunk=false
// signature: undefined FUN_1800e5bc0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_1800e5bc0(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  double dVar8;
  undefined1 auStack_158 [48];
  char local_128 [272];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_158;
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
    dVar8 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);
    if (((int)dVar8 < 1) || (DAT_1803fa360 == (longlong *)0x0)) {
      uVar5 = (**(code **)(*plVar3 + 0x158))(plVar3,2);
      FUN_1800e3320(uVar5);
    }
    else {
      lVar4 = (**(code **)(*DAT_1803fa360 + 0x18))();
      uVar5 = (**(code **)(*plVar3 + 0x158))(plVar3,2);
      iVar2 = FUN_1800e3320(uVar5);
      if ((lVar4 != 0) && (0 < iVar2)) {
        lVar4 = iVar2 + lVar4;
        uVar6 = 0;
        do {
          if (*(char *)(lVar4 + uVar6) == '\0') goto LAB_1800e5cc8;
          local_128[uVar6] = *(char *)(lVar4 + uVar6);
          cVar1 = *(char *)(lVar4 + 1 + uVar6);
          if (cVar1 == '\0') {
            uVar6 = uVar6 + 1;
            break;
          }
          local_128[uVar6 + 1] = cVar1;
          cVar1 = *(char *)(lVar4 + 2 + uVar6);
          if (cVar1 == '\0') {
            uVar6 = uVar6 + 2;
            break;
          }
          local_128[uVar6 + 2] = cVar1;
          cVar1 = *(char *)(lVar4 + 3 + uVar6);
          if (cVar1 == '\0') {
            uVar6 = uVar6 + 3;
            break;
          }
          local_128[uVar6 + 3] = cVar1;
          uVar6 = uVar6 + 4;
        } while (uVar6 < 0x100);
        if (0x100 < uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_1802d8348();
        }
LAB_1800e5cc8:
        local_128[uVar6] = '\0';
        (**(code **)(*plVar3 + 0xe8))(plVar3,local_128,0);
        return 1;
      }
    }
    (**(code **)(*plVar3 + 0xe0))(plVar3);
  }
  return uVar7;
}


)B1800e5bc0",
    "6a3940bd62f427252a75239fa076aaec1eacdf88b16cd30e9e2c1faae4af51cf",
    R"F1800e5bc0C(FUN_180039770
FUN_1800e3320
FUN_1802d8348)F1800e5bc0C",
    R"F1800e5bc0D(LAB_1800e5cc8
DAT_1803da4c0
DAT_1803fa360)F1800e5bc0D",
    R"F1800e5bc0T()F1800e5bc0T",
    R"F1800e5bc0F(26: if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
29: else {
32: if (((int)dVar8 < 1) || (DAT_1803fa360 == (longlong *)0x0)) {
36: else {
40: if ((lVar4 != 0) && (0 < iVar2)) {
43: do {
44: if (*(char *)(lVar4 + uVar6) == '\0') goto LAB_1800e5cc8;
47: if (cVar1 == '\0') {
49: break;
53: if (cVar1 == '\0') {
55: break;
59: if (cVar1 == '\0') {
61: break;
66: if (0x100 < uVar6) {
70: LAB_1800e5cc8:
73: return 1;
78: return uVar7;)F1800e5bc0F",
    R"F1800e5bc0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference LAB_1800e5cc8.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa360.
TODO: resolve the indirect call in body 31: dVar8 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);.
TODO: resolve the indirect call in body 33: uVar5 = (**(code **)(*plVar3 + 0x158))(plVar3,2);.
TODO: resolve the indirect call in body 37: lVar4 = (**(code **)(*DAT_1803fa360 + 0x18))();.
TODO: resolve the indirect call in body 38: uVar5 = (**(code **)(*plVar3 + 0x158))(plVar3,2);.
TODO: resolve the indirect call in body 72: (**(code **)(*plVar3 + 0xe8))(plVar3,local_128,0);.
TODO: resolve the indirect call in body 76: (**(code **)(*plVar3 + 0xe0))(plVar3);.)F1800e5bc0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e5bc0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e5bc0", "FUN_1800e5bc0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] char cVar1{};
    [[maybe_unused]] std::int32_t iVar2{};
    [[maybe_unused]] std::int64_t * plVar3{};
    [[maybe_unused]] std::int64_t lVar4{};
    [[maybe_unused]] std::uint64_t uVar5{};
    [[maybe_unused]] std::uint64_t uVar6{};
    [[maybe_unused]] std::uint32_t uVar7{};
    [[maybe_unused]] double dVar8{};
    [[maybe_unused]] std::uint8_t auStack_158[48]{};
    [[maybe_unused]] char local_128[272]{};
    [[maybe_unused]] std::uint64_t local_18{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for LAB_1800e5cc8.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803da4c0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa360.
    // TODO: resolve the indirect call in body 31: dVar8 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);.
    // TODO: resolve the indirect call in body 33: uVar5 = (**(code **)(*plVar3 + 0x158))(plVar3,2);.
    // TODO: resolve the indirect call in body 37: lVar4 = (**(code **)(*DAT_1803fa360 + 0x18))();.
    // TODO: resolve the indirect call in body 38: uVar5 = (**(code **)(*plVar3 + 0x158))(plVar3,2);.
    // TODO: resolve the indirect call in body 72: (**(code **)(*plVar3 + 0xe8))(plVar3,local_128,0);.
    // TODO: resolve the indirect call in body 76: (**(code **)(*plVar3 + 0xe0))(plVar3);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) [reason: pointer-cast target not proven]
    // TODO: condition expression type not recovered: if (((int)dVar8 < 1) || (DAT_1803fa360 == (longlong *)0x0)) [reason: unresolved global storage/width]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("FUN_1800e3320", uVar5);
    trace.call_arguments("FUN_1800e3320", uVar5);
    trace.call_arguments("FUN_1802d8348");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_1800e3320", reinterpret_cast<const void*>(&image::FUN_1800e3320));
    trace.call_target("FUN_1802d8348", reinterpret_cast<const void*>(&image::FUN_1802d8348));
    trace.data_ref("DAT_1803da4c0", static_cast<const void*>(&image::DAT_1803da4c0));
    trace.data_ref("DAT_1803fa360", static_cast<const void*>(&image::DAT_1803fa360));
    // body sha256: 6a3940bd62f427252a75239fa076aaec1eacdf88b16cd30e9e2c1faae4af51cf
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("char cVar1;");
            trace.statement("int iVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("longlong lVar4;");
            trace.statement("undefined8 uVar5;");
            trace.statement("ulonglong uVar6;");
            trace.statement("undefined4 uVar7;");
            trace.statement("double dVar8;");
            trace.statement("undefined1 auStack_158 [48];");
            trace.statement("char local_128 [272];");
            trace.statement("ulonglong local_18;");
            trace.statement("local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_158;");
            trace.statement("plVar3 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1))")) {
                trace.statement("uVar7 = 0;");
            } else {
            trace.statement("uVar7 = 1;");
            trace.statement("dVar8 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);");
            if (trace.condition("if (((int)dVar8 < 1) || (DAT_1803fa360 == (longlong *)0x0))")) {
                trace.statement("uVar5 = (**(code **)(*plVar3 + 0x158))(plVar3,2);");
                trace.statement("FUN_1800e3320(uVar5);");
            } else {
            trace.statement("lVar4 = (**(code **)(*DAT_1803fa360 + 0x18))();");
            trace.statement("uVar5 = (**(code **)(*plVar3 + 0x158))(plVar3,2);");
            trace.statement("iVar2 = FUN_1800e3320(uVar5);");
            if (trace.checked_condition("if ((lVar4 != 0) && (0 < iVar2))", [&]() -> bool { return static_cast<bool>((lVar4 != 0) && (0 < iVar2)); })) {
                trace.statement("lVar4 = iVar2 + lVar4;");
                trace.statement("uVar6 = 0;");
                do {
                    if (trace.condition("if (*(char *)(lVar4 + uVar6) == '\\0') goto LAB_1800e5cc8; local_128[uVar6] = *(char *)(lVar4 + uVar6); cVar1 = *(char *)(lVar4 + 1 + uVar6); if (cVar1 == '\\0')")) {
                        trace.statement("uVar6 = uVar6 + 1;");
                        trace.statement("break;");
                    }
                    trace.statement("local_128[uVar6 + 1] = cVar1;");
                    trace.statement("cVar1 = *(char *)(lVar4 + 2 + uVar6);");
                    if (trace.checked_condition("if (cVar1 == '\\0')", [&]() -> bool { return static_cast<bool>(cVar1 == '\0'); })) {
                        trace.statement("uVar6 = uVar6 + 2;");
                        trace.statement("break;");
                    }
                    trace.statement("local_128[uVar6 + 2] = cVar1;");
                    trace.statement("cVar1 = *(char *)(lVar4 + 3 + uVar6);");
                    if (trace.checked_condition("if (cVar1 == '\\0')", [&]() -> bool { return static_cast<bool>(cVar1 == '\0'); })) {
                        trace.statement("uVar6 = uVar6 + 3;");
                        trace.statement("break;");
                    }
                    trace.statement("local_128[uVar6 + 3] = cVar1;");
                    trace.statement("uVar6 = uVar6 + 4;");
                } while (trace.loop_condition("while (uVar6 < 0x100);"));
                if (trace.checked_condition("if (0x100 < uVar6)", [&]() -> bool { return static_cast<bool>(0x100 < uVar6); })) {
                    trace.statement("FUN_1802d8348();");
                }
                LAB_1800e5cc8: ;
                trace.statement("local_128[uVar6] = '\\0';");
                trace.statement("(**(code **)(*plVar3 + 0xe8))(plVar3,local_128,0);");
                trace.statement("return 1;");
            }
            }
            trace.statement("(**(code **)(*plVar3 + 0xe0))(plVar3);");
            }
            trace.statement("return uVar7;");
        }
    return kFunction_0x1800e5bc0;
}

// 0x1800e5d40 FUN_1800e5d40
// source: re/dump/decompile/0x1800e5d40_FUN_1800e5d40.c
// size: 293 bytes; thunk: false
// body sha256: aa706521e21aa51f10e4c0662315a9c8f83078e8879f5866a23742f93901a9b4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e5d40{
    "0x1800e5d40",
    "FUN_1800e5d40",
    R"F1800e5d40S(undefined FUN_1800e5d40())F1800e5d40S",
    R"B1800e5d40(// 0x1800e5d40  FUN_1800e5d40
// size=293 thunk=false
// signature: undefined FUN_1800e5d40()
// status: ok


undefined8 FUN_1800e5d40(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  double dVar6;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
    return 0;
  }
  dVar6 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
  if (((int)dVar6 < 1) || (DAT_1803fa360 == (longlong *)0x0)) {
    uVar4 = (**(code **)(*plVar2 + 0x158))(plVar2,2);
    FUN_1800e3320(uVar4);
  }
  else {
    lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();
    uVar4 = (**(code **)(*plVar2 + 0x158))(plVar2,2);
    iVar1 = FUN_1800e3320(uVar4);
    if ((lVar3 != 0) && (0 < iVar1)) {
      lVar5 = (longlong)iVar1;
      (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(lVar5 + lVar3));
      (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(lVar5 + 4 + lVar3));
      (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(lVar5 + 8 + lVar3));
      return 3;
    }
  }
  (**(code **)(*plVar2 + 0xe0))(plVar2);
  return 1;
}


)B1800e5d40",
    "aa706521e21aa51f10e4c0662315a9c8f83078e8879f5866a23742f93901a9b4",
    R"F1800e5d40C(FUN_180039770
FUN_1800e3320)F1800e5d40C",
    R"F1800e5d40D(DAT_1803fa360)F1800e5d40D",
    R"F1800e5d40T()F1800e5d40T",
    R"F1800e5d40F(18: if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
19: return 0;
22: if (((int)dVar6 < 1) || (DAT_1803fa360 == (longlong *)0x0)) {
26: else {
30: if ((lVar3 != 0) && (0 < iVar1)) {
35: return 3;
39: return 1;)F1800e5d40F",
    R"F1800e5d40U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa360.
TODO: resolve the indirect call in body 21: dVar6 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.
TODO: resolve the indirect call in body 23: uVar4 = (**(code **)(*plVar2 + 0x158))(plVar2,2);.
TODO: resolve the indirect call in body 27: lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();.
TODO: resolve the indirect call in body 28: uVar4 = (**(code **)(*plVar2 + 0x158))(plVar2,2);.
TODO: resolve the indirect call in body 32: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(lVar5 + lVar3));.
TODO: resolve the indirect call in body 33: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(lVar5 + 4 + lVar3));.
TODO: resolve the indirect call in body 34: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(lVar5 + 8 + lVar3));.
TODO: resolve the indirect call in body 38: (**(code **)(*plVar2 + 0xe0))(plVar2);.)F1800e5d40U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e5d40() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e5d40", "FUN_1800e5d40");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int32_t iVar1{};
    [[maybe_unused]] std::int64_t * plVar2{};
    [[maybe_unused]] std::int64_t lVar3{};
    [[maybe_unused]] std::uint64_t uVar4{};
    [[maybe_unused]] std::int64_t lVar5{};
    [[maybe_unused]] double dVar6{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa360.
    // TODO: resolve the indirect call in body 21: dVar6 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.
    // TODO: resolve the indirect call in body 23: uVar4 = (**(code **)(*plVar2 + 0x158))(plVar2,2);.
    // TODO: resolve the indirect call in body 27: lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();.
    // TODO: resolve the indirect call in body 28: uVar4 = (**(code **)(*plVar2 + 0x158))(plVar2,2);.
    // TODO: resolve the indirect call in body 32: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(lVar5 + lVar3));.
    // TODO: resolve the indirect call in body 33: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(lVar5 + 4 + lVar3));.
    // TODO: resolve the indirect call in body 34: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(lVar5 + 8 + lVar3));.
    // TODO: resolve the indirect call in body 38: (**(code **)(*plVar2 + 0xe0))(plVar2);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) [reason: pointer-cast target not proven]
    // TODO: condition expression type not recovered: if (((int)dVar6 < 1) || (DAT_1803fa360 == (longlong *)0x0)) [reason: unresolved global storage/width]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("FUN_1800e3320", uVar4);
    trace.call_arguments("FUN_1800e3320", uVar4);
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_1800e3320", reinterpret_cast<const void*>(&image::FUN_1800e3320));
    trace.data_ref("DAT_1803fa360", static_cast<const void*>(&image::DAT_1803fa360));
    // body sha256: aa706521e21aa51f10e4c0662315a9c8f83078e8879f5866a23742f93901a9b4
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("int iVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("longlong lVar3;");
            trace.statement("undefined8 uVar4;");
            trace.statement("longlong lVar5;");
            trace.statement("double dVar6;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1))")) {
                trace.statement("return 0;");
            }
            trace.statement("dVar6 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);");
            if (trace.condition("if (((int)dVar6 < 1) || (DAT_1803fa360 == (longlong *)0x0))")) {
                trace.statement("uVar4 = (**(code **)(*plVar2 + 0x158))(plVar2,2);");
                trace.statement("FUN_1800e3320(uVar4);");
            } else {
            trace.statement("lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();");
            trace.statement("uVar4 = (**(code **)(*plVar2 + 0x158))(plVar2,2);");
            trace.statement("iVar1 = FUN_1800e3320(uVar4);");
            if (trace.checked_condition("if ((lVar3 != 0) && (0 < iVar1))", [&]() -> bool { return static_cast<bool>((lVar3 != 0) && (0 < iVar1)); })) {
                trace.statement("lVar5 = (longlong)iVar1;");
                trace.statement("(**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(lVar5 + lVar3));");
                trace.statement("(**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(lVar5 + 4 + lVar3));");
                trace.statement("(**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(lVar5 + 8 + lVar3));");
                trace.statement("return 3;");
            }
            }
            trace.statement("(**(code **)(*plVar2 + 0xe0))(plVar2);");
            trace.statement("return 1;");
        }
    return kFunction_0x1800e5d40;
}

// 0x1800e5e70 FUN_1800e5e70
// source: re/dump/decompile/0x1800e5e70_FUN_1800e5e70.c
// size: 329 bytes; thunk: false
// body sha256: 1b917c069c9be877310931f4bf9841b4f84e51d191678537752a865512b95efe
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e5e70{
    "0x1800e5e70",
    "FUN_1800e5e70",
    R"F1800e5e70S(undefined FUN_1800e5e70())F1800e5e70S",
    R"B1800e5e70(// 0x1800e5e70  FUN_1800e5e70
// size=329 thunk=false
// signature: undefined FUN_1800e5e70()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800e5e70(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  double dVar6;
  undefined1 auStack_38 [32];
  undefined4 local_18 [2];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
    return 0;
  }
  dVar6 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
  if (((int)dVar6 < 1) || (DAT_1803fa360 == (longlong *)0x0)) {
    uVar4 = (**(code **)(*plVar2 + 0x158))(plVar2,2);
    FUN_1800e3320(uVar4);
  }
  else {
    lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();
    uVar4 = (**(code **)(*plVar2 + 0x158))(plVar2,2);
    iVar1 = FUN_1800e3320(uVar4);
    if (((lVar3 != 0) && (0 < iVar1)) && (DAT_1803fa360 != (longlong *)0x0)) {
      local_18[0] = *(undefined4 *)(iVar1 + lVar3);
      plVar5 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x20))(DAT_1803fa360,local_18);
      if (plVar5 == (longlong *)0x0) {
        (**(code **)(*plVar2 + 0xe0))(plVar2);
        return 1;
      }
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5);
      iVar1 = (**(code **)(*plVar5 + 0x48))(plVar5);
      lVar3 = *plVar2;
      if (0 < iVar1) {
        (**(code **)(lVar3 + 0xf0))(plVar2,(double)iVar1);
        return 1;
      }
      goto LAB_1800e5f92;
    }
  }
  lVar3 = *plVar2;
LAB_1800e5f92:
  (**(code **)(lVar3 + 0xe0))(plVar2);
  return 1;
}


)B1800e5e70",
    "1b917c069c9be877310931f4bf9841b4f84e51d191678537752a865512b95efe",
    R"F1800e5e70C(FUN_180039770
FUN_1800e3320)F1800e5e70C",
    R"F1800e5e70D(LAB_1800e5f92
DAT_1803da4c0
DAT_1803fa360)F1800e5e70D",
    R"F1800e5e70T()F1800e5e70T",
    R"F1800e5e70F(24: if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
25: return 0;
28: if (((int)dVar6 < 1) || (DAT_1803fa360 == (longlong *)0x0)) {
32: else {
36: if (((lVar3 != 0) && (0 < iVar1)) && (DAT_1803fa360 != (longlong *)0x0)) {
39: if (plVar5 == (longlong *)0x0) {
41: return 1;
46: if (0 < iVar1) {
48: return 1;
50: goto LAB_1800e5f92;
54: LAB_1800e5f92:
56: return 1;)F1800e5e70F",
    R"F1800e5e70U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference LAB_1800e5f92.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa360.
TODO: resolve the indirect call in body 27: dVar6 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.
TODO: resolve the indirect call in body 29: uVar4 = (**(code **)(*plVar2 + 0x158))(plVar2,2);.
TODO: resolve the indirect call in body 33: lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();.
TODO: resolve the indirect call in body 34: uVar4 = (**(code **)(*plVar2 + 0x158))(plVar2,2);.
TODO: resolve the indirect call in body 38: plVar5 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x20))(DAT_1803fa360,local_18);.
TODO: resolve the indirect call in body 40: (**(code **)(*plVar2 + 0xe0))(plVar2);.
TODO: resolve the indirect call in body 43: plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5);.
TODO: resolve the indirect call in body 44: iVar1 = (**(code **)(*plVar5 + 0x48))(plVar5);.
TODO: resolve the indirect call in body 47: (**(code **)(lVar3 + 0xf0))(plVar2,(double)iVar1);.
TODO: resolve the indirect call in body 55: (**(code **)(lVar3 + 0xe0))(plVar2);.)F1800e5e70U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e5e70() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e5e70", "FUN_1800e5e70");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int32_t iVar1{};
    [[maybe_unused]] std::int64_t * plVar2{};
    [[maybe_unused]] std::int64_t lVar3{};
    [[maybe_unused]] std::uint64_t uVar4{};
    [[maybe_unused]] std::int64_t * plVar5{};
    [[maybe_unused]] double dVar6{};
    [[maybe_unused]] std::uint8_t auStack_38[32]{};
    [[maybe_unused]] std::uint32_t local_18[2]{};
    [[maybe_unused]] std::uint64_t local_10{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for LAB_1800e5f92.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803da4c0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa360.
    // TODO: resolve the indirect call in body 27: dVar6 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.
    // TODO: resolve the indirect call in body 29: uVar4 = (**(code **)(*plVar2 + 0x158))(plVar2,2);.
    // TODO: resolve the indirect call in body 33: lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();.
    // TODO: resolve the indirect call in body 34: uVar4 = (**(code **)(*plVar2 + 0x158))(plVar2,2);.
    // TODO: resolve the indirect call in body 38: plVar5 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x20))(DAT_1803fa360,local_18);.
    // TODO: resolve the indirect call in body 40: (**(code **)(*plVar2 + 0xe0))(plVar2);.
    // TODO: resolve the indirect call in body 43: plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5);.
    // TODO: resolve the indirect call in body 44: iVar1 = (**(code **)(*plVar5 + 0x48))(plVar5);.
    // TODO: resolve the indirect call in body 47: (**(code **)(lVar3 + 0xf0))(plVar2,(double)iVar1);.
    // TODO: resolve the indirect call in body 55: (**(code **)(lVar3 + 0xe0))(plVar2);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) [reason: pointer-cast target not proven]
    // TODO: condition expression type not recovered: if (((int)dVar6 < 1) || (DAT_1803fa360 == (longlong *)0x0)) [reason: unresolved global storage/width]
    // TODO: condition expression type not recovered: if (((lVar3 != 0) && (0 < iVar1)) && (DAT_1803fa360 != (longlong *)0x0)) [reason: unresolved global storage/width]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("FUN_1800e3320", uVar4);
    trace.call_arguments("FUN_1800e3320", uVar4);
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_1800e3320", reinterpret_cast<const void*>(&image::FUN_1800e3320));
    trace.data_ref("DAT_1803da4c0", static_cast<const void*>(&image::DAT_1803da4c0));
    trace.data_ref("DAT_1803fa360", static_cast<const void*>(&image::DAT_1803fa360));
    // body sha256: 1b917c069c9be877310931f4bf9841b4f84e51d191678537752a865512b95efe
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("int iVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("longlong lVar3;");
            trace.statement("undefined8 uVar4;");
            trace.statement("longlong *plVar5;");
            trace.statement("double dVar6;");
            trace.statement("undefined1 auStack_38 [32];");
            trace.statement("undefined4 local_18 [2];");
            trace.statement("ulonglong local_10;");
            trace.statement("local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1))")) {
                trace.statement("return 0;");
            }
            trace.statement("dVar6 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);");
            if (trace.condition("if (((int)dVar6 < 1) || (DAT_1803fa360 == (longlong *)0x0))")) {
                trace.statement("uVar4 = (**(code **)(*plVar2 + 0x158))(plVar2,2);");
                trace.statement("FUN_1800e3320(uVar4);");
            } else {
            trace.statement("lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();");
            trace.statement("uVar4 = (**(code **)(*plVar2 + 0x158))(plVar2,2);");
            trace.statement("iVar1 = FUN_1800e3320(uVar4);");
            if (trace.condition("if (((lVar3 != 0) && (0 < iVar1)) && (DAT_1803fa360 != (longlong *)0x0))")) {
                trace.statement("local_18[0] = *(undefined4 *)(iVar1 + lVar3);");
                trace.statement("plVar5 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x20))(DAT_1803fa360,local_18);");
                if (trace.checked_condition("if (plVar5 == (longlong *)0x0)", [&]() -> bool { return static_cast<bool>(plVar5 == (longlong *)0x0); })) {
                    trace.statement("(**(code **)(*plVar2 + 0xe0))(plVar2);");
                    trace.statement("return 1;");
                }
                trace.statement("plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5);");
                trace.statement("iVar1 = (**(code **)(*plVar5 + 0x48))(plVar5);");
                trace.statement("lVar3 = *plVar2;");
                if (trace.checked_condition("if (0 < iVar1)", [&]() -> bool { return static_cast<bool>(0 < iVar1); })) {
                    trace.statement("(**(code **)(lVar3 + 0xf0))(plVar2,(double)iVar1);");
                    trace.statement("return 1;");
                }
                trace.statement("goto LAB_1800e5f92;");
            }
            }
            trace.statement("lVar3 = *plVar2;");
            LAB_1800e5f92: ;
            trace.statement("(**(code **)(lVar3 + 0xe0))(plVar2);");
            trace.statement("return 1;");
        }
    return kFunction_0x1800e5e70;
}

// 0x1800e5fc0 FUN_1800e5fc0
// source: re/dump/decompile/0x1800e5fc0_FUN_1800e5fc0.c
// size: 227 bytes; thunk: false
// body sha256: 5f05b6fe246bf00f60d8ae01d88189d90aeed6d12b17ff0285f6ef81e1581e8b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e5fc0{
    "0x1800e5fc0",
    "FUN_1800e5fc0",
    R"F1800e5fc0S(undefined FUN_1800e5fc0())F1800e5fc0S",
    R"B1800e5fc0(// 0x1800e5fc0  FUN_1800e5fc0
// size=227 thunk=false
// signature: undefined FUN_1800e5fc0()
// status: ok


undefined8 FUN_1800e5fc0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  double dVar5;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
    return 0;
  }
  dVar5 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
  if (((int)dVar5 < 1) || (DAT_1803fa360 == (longlong *)0x0)) {
    uVar4 = (**(code **)(*plVar2 + 0x158))(plVar2,2);
    FUN_1800e3320(uVar4);
  }
  else {
    lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();
    uVar4 = (**(code **)(*plVar2 + 0x158))(plVar2,2);
    iVar1 = FUN_1800e3320(uVar4);
    if ((lVar3 != 0) && (0 < iVar1)) {
      (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(iVar1 + lVar3));
      return 1;
    }
  }
  (**(code **)(*plVar2 + 0xe0))(plVar2);
  return 1;
}


)B1800e5fc0",
    "5f05b6fe246bf00f60d8ae01d88189d90aeed6d12b17ff0285f6ef81e1581e8b",
    R"F1800e5fc0C(FUN_180039770
FUN_1800e3320)F1800e5fc0C",
    R"F1800e5fc0D(DAT_1803fa360)F1800e5fc0D",
    R"F1800e5fc0T()F1800e5fc0T",
    R"F1800e5fc0F(17: if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
18: return 0;
21: if (((int)dVar5 < 1) || (DAT_1803fa360 == (longlong *)0x0)) {
25: else {
29: if ((lVar3 != 0) && (0 < iVar1)) {
31: return 1;
35: return 1;)F1800e5fc0F",
    R"F1800e5fc0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa360.
TODO: resolve the indirect call in body 20: dVar5 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.
TODO: resolve the indirect call in body 22: uVar4 = (**(code **)(*plVar2 + 0x158))(plVar2,2);.
TODO: resolve the indirect call in body 26: lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();.
TODO: resolve the indirect call in body 27: uVar4 = (**(code **)(*plVar2 + 0x158))(plVar2,2);.
TODO: resolve the indirect call in body 30: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(iVar1 + lVar3));.
TODO: resolve the indirect call in body 34: (**(code **)(*plVar2 + 0xe0))(plVar2);.)F1800e5fc0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e5fc0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e5fc0", "FUN_1800e5fc0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int32_t iVar1{};
    [[maybe_unused]] std::int64_t * plVar2{};
    [[maybe_unused]] std::int64_t lVar3{};
    [[maybe_unused]] std::uint64_t uVar4{};
    [[maybe_unused]] double dVar5{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa360.
    // TODO: resolve the indirect call in body 20: dVar5 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.
    // TODO: resolve the indirect call in body 22: uVar4 = (**(code **)(*plVar2 + 0x158))(plVar2,2);.
    // TODO: resolve the indirect call in body 26: lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();.
    // TODO: resolve the indirect call in body 27: uVar4 = (**(code **)(*plVar2 + 0x158))(plVar2,2);.
    // TODO: resolve the indirect call in body 30: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(iVar1 + lVar3));.
    // TODO: resolve the indirect call in body 34: (**(code **)(*plVar2 + 0xe0))(plVar2);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) [reason: pointer-cast target not proven]
    // TODO: condition expression type not recovered: if (((int)dVar5 < 1) || (DAT_1803fa360 == (longlong *)0x0)) [reason: unresolved global storage/width]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("FUN_1800e3320", uVar4);
    trace.call_arguments("FUN_1800e3320", uVar4);
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_1800e3320", reinterpret_cast<const void*>(&image::FUN_1800e3320));
    trace.data_ref("DAT_1803fa360", static_cast<const void*>(&image::DAT_1803fa360));
    // body sha256: 5f05b6fe246bf00f60d8ae01d88189d90aeed6d12b17ff0285f6ef81e1581e8b
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("int iVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("longlong lVar3;");
            trace.statement("undefined8 uVar4;");
            trace.statement("double dVar5;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1))")) {
                trace.statement("return 0;");
            }
            trace.statement("dVar5 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);");
            if (trace.condition("if (((int)dVar5 < 1) || (DAT_1803fa360 == (longlong *)0x0))")) {
                trace.statement("uVar4 = (**(code **)(*plVar2 + 0x158))(plVar2,2);");
                trace.statement("FUN_1800e3320(uVar4);");
            } else {
            trace.statement("lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();");
            trace.statement("uVar4 = (**(code **)(*plVar2 + 0x158))(plVar2,2);");
            trace.statement("iVar1 = FUN_1800e3320(uVar4);");
            if (trace.checked_condition("if ((lVar3 != 0) && (0 < iVar1))", [&]() -> bool { return static_cast<bool>((lVar3 != 0) && (0 < iVar1)); })) {
                trace.statement("(**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(iVar1 + lVar3));");
                trace.statement("return 1;");
            }
            }
            trace.statement("(**(code **)(*plVar2 + 0xe0))(plVar2);");
            trace.statement("return 1;");
        }
    return kFunction_0x1800e5fc0;
}

// 0x1800e60b0 FUN_1800e60b0
// source: re/dump/decompile/0x1800e60b0_FUN_1800e60b0.c
// size: 225 bytes; thunk: false
// body sha256: 499bf5125ee11acd83dcbb4544acc71a762a223503f3a834f152d917fa462d3a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e60b0{
    "0x1800e60b0",
    "FUN_1800e60b0",
    R"F1800e60b0S(undefined FUN_1800e60b0())F1800e60b0S",
    R"B1800e60b0(// 0x1800e60b0  FUN_1800e60b0
// size=225 thunk=false
// signature: undefined FUN_1800e60b0()
// status: ok


undefined8 FUN_1800e60b0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  double dVar5;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
    return 0;
  }
  dVar5 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
  if (((int)dVar5 < 1) || (DAT_1803fa360 == (longlong *)0x0)) {
    uVar4 = (**(code **)(*plVar2 + 0x158))(plVar2,2);
    FUN_1800e3320(uVar4);
  }
  else {
    lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();
    uVar4 = (**(code **)(*plVar2 + 0x158))(plVar2,2);
    iVar1 = FUN_1800e3320(uVar4);
    if ((lVar3 != 0) && (0 < iVar1)) {
      (**(code **)(*plVar2 + 0xf8))(plVar2,*(undefined1 *)(iVar1 + lVar3));
      return 1;
    }
  }
  (**(code **)(*plVar2 + 0xe0))(plVar2);
  return 1;
}


)B1800e60b0",
    "499bf5125ee11acd83dcbb4544acc71a762a223503f3a834f152d917fa462d3a",
    R"F1800e60b0C(FUN_180039770
FUN_1800e3320)F1800e60b0C",
    R"F1800e60b0D(DAT_1803fa360)F1800e60b0D",
    R"F1800e60b0T()F1800e60b0T",
    R"F1800e60b0F(17: if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
18: return 0;
21: if (((int)dVar5 < 1) || (DAT_1803fa360 == (longlong *)0x0)) {
25: else {
29: if ((lVar3 != 0) && (0 < iVar1)) {
31: return 1;
35: return 1;)F1800e60b0F",
    R"F1800e60b0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa360.
TODO: resolve the indirect call in body 20: dVar5 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.
TODO: resolve the indirect call in body 22: uVar4 = (**(code **)(*plVar2 + 0x158))(plVar2,2);.
TODO: resolve the indirect call in body 26: lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();.
TODO: resolve the indirect call in body 27: uVar4 = (**(code **)(*plVar2 + 0x158))(plVar2,2);.
TODO: resolve the indirect call in body 30: (**(code **)(*plVar2 + 0xf8))(plVar2,*(undefined1 *)(iVar1 + lVar3));.
TODO: resolve the indirect call in body 34: (**(code **)(*plVar2 + 0xe0))(plVar2);.)F1800e60b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e60b0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e60b0", "FUN_1800e60b0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int32_t iVar1{};
    [[maybe_unused]] std::int64_t * plVar2{};
    [[maybe_unused]] std::int64_t lVar3{};
    [[maybe_unused]] std::uint64_t uVar4{};
    [[maybe_unused]] double dVar5{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa360.
    // TODO: resolve the indirect call in body 20: dVar5 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.
    // TODO: resolve the indirect call in body 22: uVar4 = (**(code **)(*plVar2 + 0x158))(plVar2,2);.
    // TODO: resolve the indirect call in body 26: lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();.
    // TODO: resolve the indirect call in body 27: uVar4 = (**(code **)(*plVar2 + 0x158))(plVar2,2);.
    // TODO: resolve the indirect call in body 30: (**(code **)(*plVar2 + 0xf8))(plVar2,*(undefined1 *)(iVar1 + lVar3));.
    // TODO: resolve the indirect call in body 34: (**(code **)(*plVar2 + 0xe0))(plVar2);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) [reason: pointer-cast target not proven]
    // TODO: condition expression type not recovered: if (((int)dVar5 < 1) || (DAT_1803fa360 == (longlong *)0x0)) [reason: unresolved global storage/width]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("FUN_1800e3320", uVar4);
    trace.call_arguments("FUN_1800e3320", uVar4);
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_1800e3320", reinterpret_cast<const void*>(&image::FUN_1800e3320));
    trace.data_ref("DAT_1803fa360", static_cast<const void*>(&image::DAT_1803fa360));
    // body sha256: 499bf5125ee11acd83dcbb4544acc71a762a223503f3a834f152d917fa462d3a
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("int iVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("longlong lVar3;");
            trace.statement("undefined8 uVar4;");
            trace.statement("double dVar5;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1))")) {
                trace.statement("return 0;");
            }
            trace.statement("dVar5 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);");
            if (trace.condition("if (((int)dVar5 < 1) || (DAT_1803fa360 == (longlong *)0x0))")) {
                trace.statement("uVar4 = (**(code **)(*plVar2 + 0x158))(plVar2,2);");
                trace.statement("FUN_1800e3320(uVar4);");
            } else {
            trace.statement("lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();");
            trace.statement("uVar4 = (**(code **)(*plVar2 + 0x158))(plVar2,2);");
            trace.statement("iVar1 = FUN_1800e3320(uVar4);");
            if (trace.checked_condition("if ((lVar3 != 0) && (0 < iVar1))", [&]() -> bool { return static_cast<bool>((lVar3 != 0) && (0 < iVar1)); })) {
                trace.statement("(**(code **)(*plVar2 + 0xf8))(plVar2,*(undefined1 *)(iVar1 + lVar3));");
                trace.statement("return 1;");
            }
            }
            trace.statement("(**(code **)(*plVar2 + 0xe0))(plVar2);");
            trace.statement("return 1;");
        }
    return kFunction_0x1800e60b0;
}

// 0x1800e61a0 FUN_1800e61a0
// source: re/dump/decompile/0x1800e61a0_FUN_1800e61a0.c
// size: 166 bytes; thunk: false
// body sha256: e5e87ef9b3ebfe7f398cfd95f84deae60f8ef4202ca6a8b7e62aad88b7cba3dc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e61a0{
    "0x1800e61a0",
    "FUN_1800e61a0",
    R"F1800e61a0S(undefined FUN_1800e61a0())F1800e61a0S",
    R"B1800e61a0(// 0x1800e61a0  FUN_1800e61a0
// size=166 thunk=false
// signature: undefined FUN_1800e61a0()
// status: ok


undefined8 FUN_1800e61a0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int *piVar3;
  longlong lVar4;
  double dVar5;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
    if (((int)dVar5 < 1) || (DAT_1803fa360 == (longlong *)0x0)) {
      lVar4 = *plVar1;
    }
    else {
      lVar2 = (**(code **)(*DAT_1803fa360 + 0x18))();
      lVar4 = *plVar1;
      if (lVar2 != 0) {
        piVar3 = (int *)FUN_18001dfb0(lVar2);
        (**(code **)(lVar4 + 0xf0))(plVar1,(double)*piVar3);
        return 1;
      }
    }
    (**(code **)(lVar4 + 0xe0))(plVar1);
    return 1;
  }
  return 0;
}


)B1800e61a0",
    "e5e87ef9b3ebfe7f398cfd95f84deae60f8ef4202ca6a8b7e62aad88b7cba3dc",
    R"F1800e61a0C(FUN_18001dfb0
FUN_180039770)F1800e61a0C",
    R"F1800e61a0D(DAT_1803fa360)F1800e61a0D",
    R"F1800e61a0T()F1800e61a0T",
    R"F1800e61a0F(17: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
19: if (((int)dVar5 < 1) || (DAT_1803fa360 == (longlong *)0x0)) {
22: else {
25: if (lVar2 != 0) {
28: return 1;
32: return 1;
34: return 0;)F1800e61a0F",
    R"F1800e61a0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa360.
TODO: resolve the indirect call in body 18: dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.
TODO: resolve the indirect call in body 23: lVar2 = (**(code **)(*DAT_1803fa360 + 0x18))();.
TODO: resolve the indirect call in body 27: (**(code **)(lVar4 + 0xf0))(plVar1,(double)*piVar3);.
TODO: resolve the indirect call in body 31: (**(code **)(lVar4 + 0xe0))(plVar1);.)F1800e61a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e61a0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e61a0", "FUN_1800e61a0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t * plVar1{};
    [[maybe_unused]] std::int64_t lVar2{};
    [[maybe_unused]] std::int32_t * piVar3{};
    [[maybe_unused]] std::int64_t lVar4{};
    [[maybe_unused]] double dVar5{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa360.
    // TODO: resolve the indirect call in body 18: dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.
    // TODO: resolve the indirect call in body 23: lVar2 = (**(code **)(*DAT_1803fa360 + 0x18))();.
    // TODO: resolve the indirect call in body 27: (**(code **)(lVar4 + 0xf0))(plVar1,(double)*piVar3);.
    // TODO: resolve the indirect call in body 31: (**(code **)(lVar4 + 0xe0))(plVar1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) [reason: pointer-cast target not proven]
    // TODO: condition expression type not recovered: if (((int)dVar5 < 1) || (DAT_1803fa360 == (longlong *)0x0)) [reason: unresolved global storage/width]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("FUN_18001dfb0", lVar2);
    trace.call_target("FUN_18001dfb0", reinterpret_cast<const void*>(&image::FUN_18001dfb0));
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803fa360", static_cast<const void*>(&image::DAT_1803fa360));
    // body sha256: e5e87ef9b3ebfe7f398cfd95f84deae60f8ef4202ca6a8b7e62aad88b7cba3dc
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong *plVar1;");
            trace.statement("longlong lVar2;");
            trace.statement("int *piVar3;");
            trace.statement("longlong lVar4;");
            trace.statement("double dVar5;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                trace.statement("dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);");
                if (trace.condition("if (((int)dVar5 < 1) || (DAT_1803fa360 == (longlong *)0x0))")) {
                    trace.statement("lVar4 = *plVar1;");
                } else {
                trace.statement("lVar2 = (**(code **)(*DAT_1803fa360 + 0x18))();");
                trace.statement("lVar4 = *plVar1;");
                if (trace.checked_condition("if (lVar2 != 0)", [&]() -> bool { return static_cast<bool>(lVar2 != 0); })) {
                    trace.statement("piVar3 = (int *)FUN_18001dfb0(lVar2);");
                    trace.statement("(**(code **)(lVar4 + 0xf0))(plVar1,(double)*piVar3);");
                    trace.statement("return 1;");
                }
                }
                trace.statement("(**(code **)(lVar4 + 0xe0))(plVar1);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e61a0;
}

// 0x1800e6250 FUN_1800e6250
// source: re/dump/decompile/0x1800e6250_FUN_1800e6250.c
// size: 157 bytes; thunk: false
// body sha256: e0d5702411bb99711a78529dcd08fd2f0281d03805ad7e41770aff38a0137fa4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e6250{
    "0x1800e6250",
    "FUN_1800e6250",
    R"F1800e6250S(undefined FUN_1800e6250())F1800e6250S",
    R"B1800e6250(// 0x1800e6250  FUN_1800e6250
// size=157 thunk=false
// signature: undefined FUN_1800e6250()
// status: ok


undefined8 FUN_1800e6250(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int *piVar4;
  double dVar5;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    dVar5 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
    if ((0 < (int)dVar5) && (DAT_1803fa360 != (longlong *)0x0)) {
      lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();
      if (lVar3 != 0) {
        cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,2,3);
        if (cVar1 != '\0') {
          dVar5 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,2);
          piVar4 = (int *)FUN_18001dfb0(lVar3);
          *piVar4 = (int)dVar5;
        }
      }
    }
  }
  return 0;
}


)B1800e6250",
    "e0d5702411bb99711a78529dcd08fd2f0281d03805ad7e41770aff38a0137fa4",
    R"F1800e6250C(FUN_18001dfb0
FUN_180039770)F1800e6250C",
    R"F1800e6250D(DAT_1803fa360)F1800e6250D",
    R"F1800e6250T()F1800e6250T",
    R"F1800e6250F(17: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
19: if ((0 < (int)dVar5) && (DAT_1803fa360 != (longlong *)0x0)) {
21: if (lVar3 != 0) {
23: if (cVar1 != '\0') {
31: return 0;)F1800e6250F",
    R"F1800e6250U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa360.
TODO: resolve the indirect call in body 18: dVar5 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.
TODO: resolve the indirect call in body 20: lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();.
TODO: resolve the indirect call in body 22: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,2,3);.
TODO: resolve the indirect call in body 24: dVar5 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,2);.)F1800e6250U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e6250() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e6250", "FUN_1800e6250");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] char cVar1{};
    [[maybe_unused]] std::int64_t * plVar2{};
    [[maybe_unused]] std::int64_t lVar3{};
    [[maybe_unused]] std::int32_t * piVar4{};
    [[maybe_unused]] double dVar5{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa360.
    // TODO: resolve the indirect call in body 18: dVar5 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.
    // TODO: resolve the indirect call in body 20: lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();.
    // TODO: resolve the indirect call in body 22: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,2,3);.
    // TODO: resolve the indirect call in body 24: dVar5 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,2);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) [reason: pointer-cast target not proven]
    // TODO: condition expression type not recovered: if ((0 < (int)dVar5) && (DAT_1803fa360 != (longlong *)0x0)) [reason: unresolved global storage/width]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("FUN_18001dfb0", lVar3);
    trace.call_target("FUN_18001dfb0", reinterpret_cast<const void*>(&image::FUN_18001dfb0));
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803fa360", static_cast<const void*>(&image::DAT_1803fa360));
    // body sha256: e0d5702411bb99711a78529dcd08fd2f0281d03805ad7e41770aff38a0137fa4
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("char cVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("longlong lVar3;");
            trace.statement("int *piVar4;");
            trace.statement("double dVar5;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1))")) {
                trace.statement("dVar5 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);");
                if (trace.condition("if ((0 < (int)dVar5) && (DAT_1803fa360 != (longlong *)0x0))")) {
                    trace.statement("lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();");
                    if (trace.checked_condition("if (lVar3 != 0)", [&]() -> bool { return static_cast<bool>(lVar3 != 0); })) {
                        trace.statement("cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,2,3);");
                        if (trace.checked_condition("if (cVar1 != '\\0')", [&]() -> bool { return static_cast<bool>(cVar1 != '\0'); })) {
                            trace.statement("dVar5 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,2);");
                            trace.statement("piVar4 = (int *)FUN_18001dfb0(lVar3);");
                            trace.statement("*piVar4 = (int)dVar5;");
                        }
                    }
                }
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e6250;
}

// 0x1800e62f0 FUN_1800e62f0
// source: re/dump/decompile/0x1800e62f0_FUN_1800e62f0.c
// size: 190 bytes; thunk: false
// body sha256: 24e05a9727161522ab3ff8e7132f8e9a6d568c5736fb8d7300cb4d1696897da3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e62f0{
    "0x1800e62f0",
    "FUN_1800e62f0",
    R"F1800e62f0S(undefined FUN_1800e62f0())F1800e62f0S",
    R"B1800e62f0(// 0x1800e62f0  FUN_1800e62f0
// size=190 thunk=false
// signature: undefined FUN_1800e62f0()
// status: ok


undefined8 FUN_1800e62f0(longlong param_1)

{
  double dVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 local_res10 [3];
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
    return 0;
  }
  dVar1 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);
  if ((0 < (int)dVar1) && (DAT_1803fa360 != (longlong *)0x0)) {
    lVar4 = (**(code **)(*DAT_1803fa360 + 0x18))();
    if (lVar4 != 0) {
      local_res10[0] = 0;
      cVar2 = FUN_1800e34b0(lVar4,local_res10);
      lVar4 = *plVar3;
      if (cVar2 != '\0') {
        (**(code **)(lVar4 + 0xf0))(plVar3,local_res10[0]);
        return 1;
      }
      goto LAB_1800e638b;
    }
  }
  lVar4 = *plVar3;
LAB_1800e638b:
  (**(code **)(lVar4 + 0xe0))(plVar3);
  return 1;
}


)B1800e62f0",
    "24e05a9727161522ab3ff8e7132f8e9a6d568c5736fb8d7300cb4d1696897da3",
    R"F1800e62f0C(FUN_180039770
FUN_1800e34b0)F1800e62f0C",
    R"F1800e62f0D(LAB_1800e638b
DAT_1803fa360)F1800e62f0D",
    R"F1800e62f0T()F1800e62f0T",
    R"F1800e62f0F(17: if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
18: return 0;
21: if ((0 < (int)dVar1) && (DAT_1803fa360 != (longlong *)0x0)) {
23: if (lVar4 != 0) {
27: if (cVar2 != '\0') {
29: return 1;
31: goto LAB_1800e638b;
35: LAB_1800e638b:
37: return 1;)F1800e62f0F",
    R"F1800e62f0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference LAB_1800e638b.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa360.
TODO: resolve the indirect call in body 20: dVar1 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);.
TODO: resolve the indirect call in body 22: lVar4 = (**(code **)(*DAT_1803fa360 + 0x18))();.
TODO: resolve the indirect call in body 28: (**(code **)(lVar4 + 0xf0))(plVar3,local_res10[0]);.
TODO: resolve the indirect call in body 36: (**(code **)(lVar4 + 0xe0))(plVar3);.)F1800e62f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e62f0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e62f0", "FUN_1800e62f0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] double dVar1{};
    [[maybe_unused]] char cVar2{};
    [[maybe_unused]] std::int64_t * plVar3{};
    [[maybe_unused]] std::int64_t lVar4{};
    [[maybe_unused]] std::uint64_t local_res10[3]{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for LAB_1800e638b.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa360.
    // TODO: resolve the indirect call in body 20: dVar1 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);.
    // TODO: resolve the indirect call in body 22: lVar4 = (**(code **)(*DAT_1803fa360 + 0x18))();.
    // TODO: resolve the indirect call in body 28: (**(code **)(lVar4 + 0xf0))(plVar3,local_res10[0]);.
    // TODO: resolve the indirect call in body 36: (**(code **)(lVar4 + 0xe0))(plVar3);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) [reason: pointer-cast target not proven]
    // TODO: condition expression type not recovered: if ((0 < (int)dVar1) && (DAT_1803fa360 != (longlong *)0x0)) [reason: unresolved global storage/width]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("FUN_1800e34b0", lVar4, local_res10);
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_1800e34b0", reinterpret_cast<const void*>(&image::FUN_1800e34b0));
    trace.data_ref("DAT_1803fa360", static_cast<const void*>(&image::DAT_1803fa360));
    // body sha256: 24e05a9727161522ab3ff8e7132f8e9a6d568c5736fb8d7300cb4d1696897da3
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("double dVar1;");
            trace.statement("char cVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("longlong lVar4;");
            trace.statement("undefined8 local_res10 [3];");
            trace.statement("plVar3 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1))")) {
                trace.statement("return 0;");
            }
            trace.statement("dVar1 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);");
            if (trace.condition("if ((0 < (int)dVar1) && (DAT_1803fa360 != (longlong *)0x0))")) {
                trace.statement("lVar4 = (**(code **)(*DAT_1803fa360 + 0x18))();");
                if (trace.checked_condition("if (lVar4 != 0)", [&]() -> bool { return static_cast<bool>(lVar4 != 0); })) {
                    trace.statement("local_res10[0] = 0;");
                    trace.statement("cVar2 = FUN_1800e34b0(lVar4,local_res10);");
                    trace.statement("lVar4 = *plVar3;");
                    if (trace.checked_condition("if (cVar2 != '\\0')", [&]() -> bool { return static_cast<bool>(cVar2 != '\0'); })) {
                        trace.statement("(**(code **)(lVar4 + 0xf0))(plVar3,local_res10[0]);");
                        trace.statement("return 1;");
                    }
                    trace.statement("goto LAB_1800e638b;");
                }
            }
            trace.statement("lVar4 = *plVar3;");
            LAB_1800e638b: ;
            trace.statement("(**(code **)(lVar4 + 0xe0))(plVar3);");
            trace.statement("return 1;");
        }
    return kFunction_0x1800e62f0;
}

// 0x1800e63b0 FUN_1800e63b0
// source: re/dump/decompile/0x1800e63b0_FUN_1800e63b0.c
// size: 91 bytes; thunk: false
// body sha256: 15038d363ee57762c390d4fecc619fcf9608f81b062734a9cbc5defa98da94be
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e63b0{
    "0x1800e63b0",
    "FUN_1800e63b0",
    R"F1800e63b0S(undefined FUN_1800e63b0())F1800e63b0S",
    R"B1800e63b0(// 0x1800e63b0  FUN_1800e63b0
// size=91 thunk=false
// signature: undefined FUN_1800e63b0()
// status: ok


undefined8 FUN_1800e63b0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  double dVar3;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_2)) {
    dVar3 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
    if ((0 < (int)dVar3) && (DAT_1803fa360 != (longlong *)0x0)) {
      lVar2 = (**(code **)(*DAT_1803fa360 + 0x18))();
      if (lVar2 != 0) {
        FUN_18001d810(lVar2);
      }
    }
  }
  return 0;
}


)B1800e63b0",
    "15038d363ee57762c390d4fecc619fcf9608f81b062734a9cbc5defa98da94be",
    R"F1800e63b0C(FUN_18001d810
FUN_180039770)F1800e63b0C",
    R"F1800e63b0D(DAT_1803fa360)F1800e63b0D",
    R"F1800e63b0T()F1800e63b0T",
    R"F1800e63b0F(15: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_2)) {
17: if ((0 < (int)dVar3) && (DAT_1803fa360 != (longlong *)0x0)) {
19: if (lVar2 != 0) {
24: return 0;)F1800e63b0F",
    R"F1800e63b0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa360.
TODO: resolve the indirect call in body 16: dVar3 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.
TODO: resolve the indirect call in body 18: lVar2 = (**(code **)(*DAT_1803fa360 + 0x18))();.)F1800e63b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e63b0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e63b0", "FUN_1800e63b0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    [[maybe_unused]] std::int64_t * plVar1{};
    [[maybe_unused]] std::int64_t lVar2{};
    [[maybe_unused]] double dVar3{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa360.
    // TODO: resolve the indirect call in body 16: dVar3 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.
    // TODO: resolve the indirect call in body 18: lVar2 = (**(code **)(*DAT_1803fa360 + 0x18))();.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_2)) [reason: pointer-cast target not proven]
    // TODO: condition expression type not recovered: if ((0 < (int)dVar3) && (DAT_1803fa360 != (longlong *)0x0)) [reason: unresolved global storage/width]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("FUN_18001d810", lVar2);
    trace.call_target("FUN_18001d810", reinterpret_cast<const void*>(&image::FUN_18001d810));
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803fa360", static_cast<const void*>(&image::DAT_1803fa360));
    // body sha256: 15038d363ee57762c390d4fecc619fcf9608f81b062734a9cbc5defa98da94be
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong *plVar1;");
            trace.statement("longlong lVar2;");
            trace.statement("double dVar3;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_2))")) {
                trace.statement("dVar3 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);");
                if (trace.condition("if ((0 < (int)dVar3) && (DAT_1803fa360 != (longlong *)0x0))")) {
                    trace.statement("lVar2 = (**(code **)(*DAT_1803fa360 + 0x18))();");
                    if (trace.checked_condition("if (lVar2 != 0)", [&]() -> bool { return static_cast<bool>(lVar2 != 0); })) {
                        trace.statement("FUN_18001d810(lVar2);");
                    }
                }
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e63b0;
}

// 0x1800e6420 FUN_1800e6420
// source: re/dump/decompile/0x1800e6420_FUN_1800e6420.c
// size: 225 bytes; thunk: false
// body sha256: 0ec7ab1bd76e300428d3036349e2bfccd288681b060b61e89b27755b640c83f0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e6420{
    "0x1800e6420",
    "FUN_1800e6420",
    R"F1800e6420S(undefined FUN_1800e6420())F1800e6420S",
    R"B1800e6420(// 0x1800e6420  FUN_1800e6420
// size=225 thunk=false
// signature: undefined FUN_1800e6420()
// status: ok


undefined8 FUN_1800e6420(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
    dVar5 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);
    if (((int)dVar5 < 1) || (DAT_1803fa360 == (longlong *)0x0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)(*DAT_1803fa360 + 0x18))();
    }
    dVar5 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,2);
    dVar6 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,3);
    pcVar1 = *(code **)(*plVar3 + 0xf8);
    uVar2 = FUN_1800e35f0(uVar4,(float)dVar5,(float)dVar6);
    (*pcVar1)(plVar3,uVar2);
    return 1;
  }
  return 0;
}


)B1800e6420",
    "0ec7ab1bd76e300428d3036349e2bfccd288681b060b61e89b27755b640c83f0",
    R"F1800e6420C(FUN_180039770
FUN_1800e35f0)F1800e6420C",
    R"F1800e6420D(DAT_1803fa360)F1800e6420D",
    R"F1800e6420T()F1800e6420T",
    R"F1800e6420F(18: if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
20: if (((int)dVar5 < 1) || (DAT_1803fa360 == (longlong *)0x0)) {
23: else {
31: return 1;
33: return 0;)F1800e6420F",
    R"F1800e6420U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa360.
TODO: resolve the indirect call in body 19: dVar5 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);.
TODO: resolve the indirect call in body 24: uVar4 = (**(code **)(*DAT_1803fa360 + 0x18))();.
TODO: resolve the indirect call in body 26: dVar5 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,2);.
TODO: resolve the indirect call in body 27: dVar6 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,3);.
TODO: resolve the indirect call in body 28: pcVar1 = *(code **)(*plVar3 + 0xf8);.
TODO: resolve the indirect call in body 30: (*pcVar1)(plVar3,uVar2);.)F1800e6420U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e6420() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e6420", "FUN_1800e6420");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] void* * pcVar1{};
    [[maybe_unused]] std::uint8_t uVar2{};
    [[maybe_unused]] std::int64_t * plVar3{};
    [[maybe_unused]] std::uint64_t uVar4{};
    [[maybe_unused]] double dVar5{};
    [[maybe_unused]] double dVar6{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa360.
    // TODO: resolve the indirect call in body 19: dVar5 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);.
    // TODO: resolve the indirect call in body 24: uVar4 = (**(code **)(*DAT_1803fa360 + 0x18))();.
    // TODO: resolve the indirect call in body 26: dVar5 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,2);.
    // TODO: resolve the indirect call in body 27: dVar6 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,3);.
    // TODO: resolve the indirect call in body 28: pcVar1 = *(code **)(*plVar3 + 0xf8);.
    // TODO: resolve the indirect call in body 30: (*pcVar1)(plVar3,uVar2);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) [reason: pointer-cast target not proven]
    // TODO: condition expression type not recovered: if (((int)dVar5 < 1) || (DAT_1803fa360 == (longlong *)0x0)) [reason: unresolved global storage/width]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("FUN_1800e35f0", uVar4, static_cast<float>(dVar5), static_cast<float>(dVar6));
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_1800e35f0", reinterpret_cast<const void*>(&image::FUN_1800e35f0));
    trace.data_ref("DAT_1803fa360", static_cast<const void*>(&image::DAT_1803fa360));
    // body sha256: 0ec7ab1bd76e300428d3036349e2bfccd288681b060b61e89b27755b640c83f0
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("code *pcVar1;");
            trace.statement("undefined1 uVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("undefined8 uVar4;");
            trace.statement("double dVar5;");
            trace.statement("double dVar6;");
            trace.statement("plVar3 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1))")) {
                trace.statement("dVar5 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);");
                if (trace.condition("if (((int)dVar5 < 1) || (DAT_1803fa360 == (longlong *)0x0))")) {
                    trace.statement("uVar4 = 0;");
                } else {
                trace.statement("uVar4 = (**(code **)(*DAT_1803fa360 + 0x18))();");
                }
                trace.statement("dVar5 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,2);");
                trace.statement("dVar6 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,3);");
                trace.statement("pcVar1 = *(code **)(*plVar3 + 0xf8);");
                trace.statement("uVar2 = FUN_1800e35f0(uVar4,(float)dVar5,(float)dVar6);");
                trace.statement("(*pcVar1)(plVar3,uVar2);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e6420;
}

// 0x1800e6510 FUN_1800e6510
// source: re/dump/decompile/0x1800e6510_FUN_1800e6510.c
// size: 184 bytes; thunk: false
// body sha256: 5644b4108cd2975d3b532c0b42c71c96a48c1ec1e6c549bfc03f609736e55569
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e6510{
    "0x1800e6510",
    "FUN_1800e6510",
    R"F1800e6510S(undefined FUN_1800e6510())F1800e6510S",
    R"B1800e6510(// 0x1800e6510  FUN_1800e6510
// size=184 thunk=false
// signature: undefined FUN_1800e6510()
// status: ok


undefined8 FUN_1800e6510(longlong param_1)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
    return 0;
  }
  dVar6 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
  if (((int)dVar6 < 1) || (DAT_1803fa360 == (longlong *)0x0)) {
    pcVar5 = *(code **)(*plVar2 + 0xf8);
  }
  else {
    lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();
    pcVar5 = *(code **)(*plVar2 + 0xf8);
    if (lVar3 != 0) {
      lVar4 = FUN_1800b5800();
      if (lVar4 != 0) {
        uVar1 = FUN_1800e36b0(lVar4,lVar3);
        goto LAB_1800e659e;
      }
    }
  }
  uVar1 = 0;
LAB_1800e659e:
  (*pcVar5)(plVar2,uVar1);
  return 1;
}


)B1800e6510",
    "5644b4108cd2975d3b532c0b42c71c96a48c1ec1e6c549bfc03f609736e55569",
    R"F1800e6510C(FUN_180039770
FUN_1800b5800
FUN_1800e36b0)F1800e6510C",
    R"F1800e6510D(LAB_1800e659e
DAT_1803fa360)F1800e6510D",
    R"F1800e6510T()F1800e6510T",
    R"F1800e6510F(18: if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
19: return 0;
22: if (((int)dVar6 < 1) || (DAT_1803fa360 == (longlong *)0x0)) {
25: else {
28: if (lVar3 != 0) {
30: if (lVar4 != 0) {
32: goto LAB_1800e659e;
37: LAB_1800e659e:
39: return 1;)F1800e6510F",
    R"F1800e6510U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference LAB_1800e659e.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa360.
TODO: resolve the indirect call in body 21: dVar6 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.
TODO: resolve the indirect call in body 23: pcVar5 = *(code **)(*plVar2 + 0xf8);.
TODO: resolve the indirect call in body 26: lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();.
TODO: resolve the indirect call in body 27: pcVar5 = *(code **)(*plVar2 + 0xf8);.
TODO: resolve the indirect call in body 38: (*pcVar5)(plVar2,uVar1);.)F1800e6510U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e6510() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e6510", "FUN_1800e6510");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::uint8_t uVar1{};
    [[maybe_unused]] std::int64_t * plVar2{};
    [[maybe_unused]] std::int64_t lVar3{};
    [[maybe_unused]] std::int64_t lVar4{};
    [[maybe_unused]] void* * pcVar5{};
    [[maybe_unused]] double dVar6{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for LAB_1800e659e.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa360.
    // TODO: resolve the indirect call in body 21: dVar6 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.
    // TODO: resolve the indirect call in body 23: pcVar5 = *(code **)(*plVar2 + 0xf8);.
    // TODO: resolve the indirect call in body 26: lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();.
    // TODO: resolve the indirect call in body 27: pcVar5 = *(code **)(*plVar2 + 0xf8);.
    // TODO: resolve the indirect call in body 38: (*pcVar5)(plVar2,uVar1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) [reason: pointer-cast target not proven]
    // TODO: condition expression type not recovered: if (((int)dVar6 < 1) || (DAT_1803fa360 == (longlong *)0x0)) [reason: unresolved global storage/width]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("FUN_1800b5800");
    trace.call_arguments("FUN_1800e36b0", lVar4, lVar3);
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_1800b5800", reinterpret_cast<const void*>(&image::FUN_1800b5800));
    trace.call_target("FUN_1800e36b0", reinterpret_cast<const void*>(&image::FUN_1800e36b0));
    trace.data_ref("DAT_1803fa360", static_cast<const void*>(&image::DAT_1803fa360));
    // body sha256: 5644b4108cd2975d3b532c0b42c71c96a48c1ec1e6c549bfc03f609736e55569
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("undefined1 uVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("longlong lVar3;");
            trace.statement("longlong lVar4;");
            trace.statement("code *pcVar5;");
            trace.statement("double dVar6;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1))")) {
                trace.statement("return 0;");
            }
            trace.statement("dVar6 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);");
            if (trace.condition("if (((int)dVar6 < 1) || (DAT_1803fa360 == (longlong *)0x0))")) {
                trace.statement("pcVar5 = *(code **)(*plVar2 + 0xf8);");
            } else {
            trace.statement("lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();");
            trace.statement("pcVar5 = *(code **)(*plVar2 + 0xf8);");
            if (trace.checked_condition("if (lVar3 != 0)", [&]() -> bool { return static_cast<bool>(lVar3 != 0); })) {
                trace.statement("lVar4 = FUN_1800b5800();");
                if (trace.checked_condition("if (lVar4 != 0)", [&]() -> bool { return static_cast<bool>(lVar4 != 0); })) {
                    trace.statement("uVar1 = FUN_1800e36b0(lVar4,lVar3);");
                    trace.statement("goto LAB_1800e659e;");
                }
            }
            }
            trace.statement("uVar1 = 0;");
            LAB_1800e659e: ;
            trace.statement("(*pcVar5)(plVar2,uVar1);");
            trace.statement("return 1;");
        }
    return kFunction_0x1800e6510;
}

// 0x1800e65d0 FUN_1800e65d0
// source: re/dump/decompile/0x1800e65d0_FUN_1800e65d0.c
// size: 192 bytes; thunk: false
// body sha256: 0e371f148559313be6d160fc8469619fb5c85d849c8000cad0766d69d239be32
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e65d0{
    "0x1800e65d0",
    "FUN_1800e65d0",
    R"F1800e65d0S(undefined FUN_1800e65d0())F1800e65d0S",
    R"B1800e65d0(// 0x1800e65d0  FUN_1800e65d0
// size=192 thunk=false
// signature: undefined FUN_1800e65d0()
// status: ok


undefined8 FUN_1800e65d0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  double dVar4;
  float local_res10 [6];
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    dVar4 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
    if ((0 < (int)dVar4) && (DAT_1803fa360 != (longlong *)0x0)) {
      lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();
      local_res10[0] = 0.0;
      if (lVar3 != 0) {
        cVar1 = FUN_1800b5f30(lVar3,local_res10);
        if (cVar1 != '\0') {
          (**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_res10[0]);
          return 1;
        }
      }
    }
    (**(code **)(*plVar2 + 0xe0))(plVar2);
    return 1;
  }
  return 0;
}


)B1800e65d0",
    "0e371f148559313be6d160fc8469619fb5c85d849c8000cad0766d69d239be32",
    R"F1800e65d0C(FUN_180039770
FUN_1800b5f30)F1800e65d0C",
    R"F1800e65d0D(DAT_1803fa360)F1800e65d0D",
    R"F1800e65d0T()F1800e65d0T",
    R"F1800e65d0F(17: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
19: if ((0 < (int)dVar4) && (DAT_1803fa360 != (longlong *)0x0)) {
22: if (lVar3 != 0) {
24: if (cVar1 != '\0') {
26: return 1;
31: return 1;
33: return 0;)F1800e65d0F",
    R"F1800e65d0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa360.
TODO: resolve the indirect call in body 18: dVar4 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.
TODO: resolve the indirect call in body 20: lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();.
TODO: resolve the indirect call in body 25: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_res10[0]);.
TODO: resolve the indirect call in body 30: (**(code **)(*plVar2 + 0xe0))(plVar2);.)F1800e65d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e65d0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e65d0", "FUN_1800e65d0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] char cVar1{};
    [[maybe_unused]] std::int64_t * plVar2{};
    [[maybe_unused]] std::int64_t lVar3{};
    [[maybe_unused]] double dVar4{};
    [[maybe_unused]] float local_res10[6]{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa360.
    // TODO: resolve the indirect call in body 18: dVar4 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.
    // TODO: resolve the indirect call in body 20: lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();.
    // TODO: resolve the indirect call in body 25: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_res10[0]);.
    // TODO: resolve the indirect call in body 30: (**(code **)(*plVar2 + 0xe0))(plVar2);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) [reason: pointer-cast target not proven]
    // TODO: condition expression type not recovered: if ((0 < (int)dVar4) && (DAT_1803fa360 != (longlong *)0x0)) [reason: unresolved global storage/width]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("FUN_1800b5f30", lVar3, local_res10);
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_1800b5f30", reinterpret_cast<const void*>(&image::FUN_1800b5f30));
    trace.data_ref("DAT_1803fa360", static_cast<const void*>(&image::DAT_1803fa360));
    // body sha256: 0e371f148559313be6d160fc8469619fb5c85d849c8000cad0766d69d239be32
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("char cVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("longlong lVar3;");
            trace.statement("double dVar4;");
            trace.statement("float local_res10 [6];");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1))")) {
                trace.statement("dVar4 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);");
                if (trace.condition("if ((0 < (int)dVar4) && (DAT_1803fa360 != (longlong *)0x0))")) {
                    trace.statement("lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();");
                    trace.statement("local_res10[0] = 0.0;");
                    if (trace.checked_condition("if (lVar3 != 0)", [&]() -> bool { return static_cast<bool>(lVar3 != 0); })) {
                        trace.statement("cVar1 = FUN_1800b5f30(lVar3,local_res10);");
                        if (trace.checked_condition("if (cVar1 != '\\0')", [&]() -> bool { return static_cast<bool>(cVar1 != '\0'); })) {
                            trace.statement("(**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_res10[0]);");
                            trace.statement("return 1;");
                        }
                    }
                }
                trace.statement("(**(code **)(*plVar2 + 0xe0))(plVar2);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e65d0;
}

// 0x1800e6690 FUN_1800e6690
// source: re/dump/decompile/0x1800e6690_FUN_1800e6690.c
// size: 197 bytes; thunk: false
// body sha256: c8bb0af7e9991df180004e900565b5e61e269cf347c31be90e586f7e51b48ab0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e6690{
    "0x1800e6690",
    "FUN_1800e6690",
    R"F1800e6690S(undefined FUN_1800e6690())F1800e6690S",
    R"B1800e6690(// 0x1800e6690  FUN_1800e6690
// size=197 thunk=false
// signature: undefined FUN_1800e6690()
// status: ok


undefined8 FUN_1800e6690(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  double dVar4;
  float local_res10 [6];
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    dVar4 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
    if ((0 < (int)dVar4) && (DAT_1803fa360 != (longlong *)0x0)) {
      lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();
      local_res10[0] = 0.0;
      if (lVar3 != 0) {
        cVar1 = FUN_1800b5e40(lVar3,2,local_res10);
        if (cVar1 != '\0') {
          (**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_res10[0]);
          return 1;
        }
      }
    }
    (**(code **)(*plVar2 + 0xe0))(plVar2);
    return 1;
  }
  return 0;
}


)B1800e6690",
    "c8bb0af7e9991df180004e900565b5e61e269cf347c31be90e586f7e51b48ab0",
    R"F1800e6690C(FUN_180039770
FUN_1800b5e40)F1800e6690C",
    R"F1800e6690D(DAT_1803fa360)F1800e6690D",
    R"F1800e6690T()F1800e6690T",
    R"F1800e6690F(17: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
19: if ((0 < (int)dVar4) && (DAT_1803fa360 != (longlong *)0x0)) {
22: if (lVar3 != 0) {
24: if (cVar1 != '\0') {
26: return 1;
31: return 1;
33: return 0;)F1800e6690F",
    R"F1800e6690U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa360.
TODO: resolve the indirect call in body 18: dVar4 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.
TODO: resolve the indirect call in body 20: lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();.
TODO: resolve the indirect call in body 25: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_res10[0]);.
TODO: resolve the indirect call in body 30: (**(code **)(*plVar2 + 0xe0))(plVar2);.)F1800e6690U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e6690() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e6690", "FUN_1800e6690");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] char cVar1{};
    [[maybe_unused]] std::int64_t * plVar2{};
    [[maybe_unused]] std::int64_t lVar3{};
    [[maybe_unused]] double dVar4{};
    [[maybe_unused]] float local_res10[6]{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa360.
    // TODO: resolve the indirect call in body 18: dVar4 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.
    // TODO: resolve the indirect call in body 20: lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();.
    // TODO: resolve the indirect call in body 25: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_res10[0]);.
    // TODO: resolve the indirect call in body 30: (**(code **)(*plVar2 + 0xe0))(plVar2);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) [reason: pointer-cast target not proven]
    // TODO: condition expression type not recovered: if ((0 < (int)dVar4) && (DAT_1803fa360 != (longlong *)0x0)) [reason: unresolved global storage/width]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("FUN_1800b5e40", lVar3, 2, local_res10);
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_1800b5e40", reinterpret_cast<const void*>(&image::FUN_1800b5e40));
    trace.data_ref("DAT_1803fa360", static_cast<const void*>(&image::DAT_1803fa360));
    // body sha256: c8bb0af7e9991df180004e900565b5e61e269cf347c31be90e586f7e51b48ab0
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("char cVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("longlong lVar3;");
            trace.statement("double dVar4;");
            trace.statement("float local_res10 [6];");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1))")) {
                trace.statement("dVar4 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);");
                if (trace.condition("if ((0 < (int)dVar4) && (DAT_1803fa360 != (longlong *)0x0))")) {
                    trace.statement("lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();");
                    trace.statement("local_res10[0] = 0.0;");
                    if (trace.checked_condition("if (lVar3 != 0)", [&]() -> bool { return static_cast<bool>(lVar3 != 0); })) {
                        trace.statement("cVar1 = FUN_1800b5e40(lVar3,2,local_res10);");
                        if (trace.checked_condition("if (cVar1 != '\\0')", [&]() -> bool { return static_cast<bool>(cVar1 != '\0'); })) {
                            trace.statement("(**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_res10[0]);");
                            trace.statement("return 1;");
                        }
                    }
                }
                trace.statement("(**(code **)(*plVar2 + 0xe0))(plVar2);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e6690;
}

// 0x1800e6760 FUN_1800e6760
// source: re/dump/decompile/0x1800e6760_FUN_1800e6760.c
// size: 192 bytes; thunk: false
// body sha256: 3062af3914a3e864c5beeb463b207a2a6dfe90b29c6d4d30da6fe30b13e302de
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e6760{
    "0x1800e6760",
    "FUN_1800e6760",
    R"F1800e6760S(undefined FUN_1800e6760())F1800e6760S",
    R"B1800e6760(// 0x1800e6760  FUN_1800e6760
// size=192 thunk=false
// signature: undefined FUN_1800e6760()
// status: ok


undefined8 FUN_1800e6760(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  double dVar4;
  float local_res10 [6];
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    dVar4 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
    if ((0 < (int)dVar4) && (DAT_1803fa360 != (longlong *)0x0)) {
      lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();
      local_res10[0] = 0.0;
      if (lVar3 != 0) {
        cVar1 = FUN_1800b6290(lVar3,local_res10);
        if (cVar1 != '\0') {
          (**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_res10[0]);
          return 1;
        }
      }
    }
    (**(code **)(*plVar2 + 0xe0))(plVar2);
    return 1;
  }
  return 0;
}


)B1800e6760",
    "3062af3914a3e864c5beeb463b207a2a6dfe90b29c6d4d30da6fe30b13e302de",
    R"F1800e6760C(FUN_180039770
FUN_1800b6290)F1800e6760C",
    R"F1800e6760D(DAT_1803fa360)F1800e6760D",
    R"F1800e6760T()F1800e6760T",
    R"F1800e6760F(17: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
19: if ((0 < (int)dVar4) && (DAT_1803fa360 != (longlong *)0x0)) {
22: if (lVar3 != 0) {
24: if (cVar1 != '\0') {
26: return 1;
31: return 1;
33: return 0;)F1800e6760F",
    R"F1800e6760U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa360.
TODO: resolve the indirect call in body 18: dVar4 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.
TODO: resolve the indirect call in body 20: lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();.
TODO: resolve the indirect call in body 25: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_res10[0]);.
TODO: resolve the indirect call in body 30: (**(code **)(*plVar2 + 0xe0))(plVar2);.)F1800e6760U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e6760() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e6760", "FUN_1800e6760");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] char cVar1{};
    [[maybe_unused]] std::int64_t * plVar2{};
    [[maybe_unused]] std::int64_t lVar3{};
    [[maybe_unused]] double dVar4{};
    [[maybe_unused]] float local_res10[6]{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa360.
    // TODO: resolve the indirect call in body 18: dVar4 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.
    // TODO: resolve the indirect call in body 20: lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();.
    // TODO: resolve the indirect call in body 25: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_res10[0]);.
    // TODO: resolve the indirect call in body 30: (**(code **)(*plVar2 + 0xe0))(plVar2);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) [reason: pointer-cast target not proven]
    // TODO: condition expression type not recovered: if ((0 < (int)dVar4) && (DAT_1803fa360 != (longlong *)0x0)) [reason: unresolved global storage/width]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("FUN_1800b6290", lVar3, local_res10);
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_1800b6290", reinterpret_cast<const void*>(&image::FUN_1800b6290));
    trace.data_ref("DAT_1803fa360", static_cast<const void*>(&image::DAT_1803fa360));
    // body sha256: 3062af3914a3e864c5beeb463b207a2a6dfe90b29c6d4d30da6fe30b13e302de
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("char cVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("longlong lVar3;");
            trace.statement("double dVar4;");
            trace.statement("float local_res10 [6];");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1))")) {
                trace.statement("dVar4 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);");
                if (trace.condition("if ((0 < (int)dVar4) && (DAT_1803fa360 != (longlong *)0x0))")) {
                    trace.statement("lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();");
                    trace.statement("local_res10[0] = 0.0;");
                    if (trace.checked_condition("if (lVar3 != 0)", [&]() -> bool { return static_cast<bool>(lVar3 != 0); })) {
                        trace.statement("cVar1 = FUN_1800b6290(lVar3,local_res10);");
                        if (trace.checked_condition("if (cVar1 != '\\0')", [&]() -> bool { return static_cast<bool>(cVar1 != '\0'); })) {
                            trace.statement("(**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_res10[0]);");
                            trace.statement("return 1;");
                        }
                    }
                }
                trace.statement("(**(code **)(*plVar2 + 0xe0))(plVar2);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e6760;
}

// 0x1800e6820 FUN_1800e6820
// source: re/dump/decompile/0x1800e6820_FUN_1800e6820.c
// size: 96 bytes; thunk: false
// body sha256: ffbb265f0d2985f26b800bc495e996dc4fad7926e91ee6d360e0b4656e032ef5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e6820{
    "0x1800e6820",
    "FUN_1800e6820",
    R"F1800e6820S(undefined FUN_1800e6820())F1800e6820S",
    R"B1800e6820(// 0x1800e6820  FUN_1800e6820
// size=96 thunk=false
// signature: undefined FUN_1800e6820()
// status: ok


undefined8 FUN_1800e6820(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    if (DAT_1803ff960 == 0) {
      (**(code **)(*plVar1 + 0xe0))(plVar1);
      return 1;
    }
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(float *)(DAT_1803ff960 + 0x14));
    return 1;
  }
  return 0;
}


)B1800e6820",
    "ffbb265f0d2985f26b800bc495e996dc4fad7926e91ee6d360e0b4656e032ef5",
    R"F1800e6820C(FUN_180039770)F1800e6820C",
    R"F1800e6820D(DAT_1803ff960)F1800e6820D",
    R"F1800e6820T()F1800e6820T",
    R"F1800e6820F(13: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
14: if (DAT_1803ff960 == 0) {
16: return 1;
19: return 1;
21: return 0;)F1800e6820F",
    R"F1800e6820U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff960.
TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xe0))(plVar1);.
TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(float *)(DAT_1803ff960 + 0x14));.)F1800e6820U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e6820() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e6820", "FUN_1800e6820");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t * plVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff960.
    // TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xe0))(plVar1);.
    // TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(float *)(DAT_1803ff960 + 0x14));.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803ff960", static_cast<const void*>(&image::DAT_1803ff960));
    // body sha256: ffbb265f0d2985f26b800bc495e996dc4fad7926e91ee6d360e0b4656e032ef5
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong *plVar1;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                if (trace.checked_condition("if (DAT_1803ff960 == 0)", [&]() -> bool { return static_cast<bool>(image::DAT_1803ff960 == 0); })) {
                    trace.statement("(**(code **)(*plVar1 + 0xe0))(plVar1);");
                    trace.statement("return 1;");
                }
                trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(float *)(DAT_1803ff960 + 0x14));");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e6820;
}

// 0x1800e6880 FUN_1800e6880
// source: re/dump/decompile/0x1800e6880_FUN_1800e6880.c
// size: 75 bytes; thunk: false
// body sha256: c6887f785802a17d1d677e91ab13045d4d457f100226188df0ca99944e5fdf9a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e6880{
    "0x1800e6880",
    "FUN_1800e6880",
    R"F1800e6880S(undefined FUN_1800e6880())F1800e6880S",
    R"B1800e6880(// 0x1800e6880  FUN_1800e6880
// size=75 thunk=false
// signature: undefined FUN_1800e6880()
// status: ok


undefined8 FUN_1800e6880(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  double dVar3;
  
  plVar2 = (longlong *)FUN_180039770();
  lVar1 = DAT_1803ff960;
  if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff960 != 0)) {
    dVar3 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
    *(float *)(lVar1 + 0x14) = (float)dVar3;
  }
  return 0;
}


)B1800e6880",
    "c6887f785802a17d1d677e91ab13045d4d457f100226188df0ca99944e5fdf9a",
    R"F1800e6880C(FUN_180039770)F1800e6880C",
    R"F1800e6880D(DAT_1803ff960)F1800e6880D",
    R"F1800e6880T()F1800e6880T",
    R"F1800e6880F(16: if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff960 != 0)) {
20: return 0;)F1800e6880F",
    R"F1800e6880U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff960.
TODO: resolve the indirect call in body 17: dVar3 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.)F1800e6880U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e6880() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e6880", "FUN_1800e6880");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t lVar1{};
    [[maybe_unused]] std::int64_t * plVar2{};
    [[maybe_unused]] double dVar3{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff960.
    // TODO: resolve the indirect call in body 17: dVar3 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff960 != 0)) [reason: unresolved global storage/width]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803ff960", static_cast<const void*>(&image::DAT_1803ff960));
    // body sha256: c6887f785802a17d1d677e91ab13045d4d457f100226188df0ca99944e5fdf9a
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong lVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("double dVar3;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            trace.statement("lVar1 = DAT_1803ff960;");
            if (trace.condition("if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff960 != 0))")) {
                trace.statement("dVar3 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);");
                trace.statement("*(float *)(lVar1 + 0x14) = (float)dVar3;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e6880;
}

// 0x1800e68d0 FUN_1800e68d0
// source: re/dump/decompile/0x1800e68d0_FUN_1800e68d0.c
// size: 96 bytes; thunk: false
// body sha256: 86f05f7c61006efc5a1a8b690562a6db485d71931e576c0facd8f8964e157269
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e68d0{
    "0x1800e68d0",
    "FUN_1800e68d0",
    R"F1800e68d0S(undefined FUN_1800e68d0())F1800e68d0S",
    R"B1800e68d0(// 0x1800e68d0  FUN_1800e68d0
// size=96 thunk=false
// signature: undefined FUN_1800e68d0()
// status: ok


undefined8 FUN_1800e68d0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    if (DAT_1803ff960 == 0) {
      (**(code **)(*plVar1 + 0xe0))(plVar1);
      return 1;
    }
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(float *)(DAT_1803ff960 + 0x18));
    return 1;
  }
  return 0;
}


)B1800e68d0",
    "86f05f7c61006efc5a1a8b690562a6db485d71931e576c0facd8f8964e157269",
    R"F1800e68d0C(FUN_180039770)F1800e68d0C",
    R"F1800e68d0D(DAT_1803ff960)F1800e68d0D",
    R"F1800e68d0T()F1800e68d0T",
    R"F1800e68d0F(13: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
14: if (DAT_1803ff960 == 0) {
16: return 1;
19: return 1;
21: return 0;)F1800e68d0F",
    R"F1800e68d0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff960.
TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xe0))(plVar1);.
TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(float *)(DAT_1803ff960 + 0x18));.)F1800e68d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e68d0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e68d0", "FUN_1800e68d0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t * plVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff960.
    // TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xe0))(plVar1);.
    // TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(float *)(DAT_1803ff960 + 0x18));.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803ff960", static_cast<const void*>(&image::DAT_1803ff960));
    // body sha256: 86f05f7c61006efc5a1a8b690562a6db485d71931e576c0facd8f8964e157269
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong *plVar1;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                if (trace.checked_condition("if (DAT_1803ff960 == 0)", [&]() -> bool { return static_cast<bool>(image::DAT_1803ff960 == 0); })) {
                    trace.statement("(**(code **)(*plVar1 + 0xe0))(plVar1);");
                    trace.statement("return 1;");
                }
                trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(float *)(DAT_1803ff960 + 0x18));");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e68d0;
}

// 0x1800e6930 FUN_1800e6930
// source: re/dump/decompile/0x1800e6930_FUN_1800e6930.c
// size: 75 bytes; thunk: false
// body sha256: 04ef5857c653aa2826e770c9400036f0339476a6d30c8ac1b2fd30d2b524ec92
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e6930{
    "0x1800e6930",
    "FUN_1800e6930",
    R"F1800e6930S(undefined FUN_1800e6930())F1800e6930S",
    R"B1800e6930(// 0x1800e6930  FUN_1800e6930
// size=75 thunk=false
// signature: undefined FUN_1800e6930()
// status: ok


undefined8 FUN_1800e6930(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  double dVar3;
  
  plVar2 = (longlong *)FUN_180039770();
  lVar1 = DAT_1803ff960;
  if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff960 != 0)) {
    dVar3 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
    *(float *)(lVar1 + 0x18) = (float)dVar3;
  }
  return 0;
}


)B1800e6930",
    "04ef5857c653aa2826e770c9400036f0339476a6d30c8ac1b2fd30d2b524ec92",
    R"F1800e6930C(FUN_180039770)F1800e6930C",
    R"F1800e6930D(DAT_1803ff960)F1800e6930D",
    R"F1800e6930T()F1800e6930T",
    R"F1800e6930F(16: if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff960 != 0)) {
20: return 0;)F1800e6930F",
    R"F1800e6930U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff960.
TODO: resolve the indirect call in body 17: dVar3 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.)F1800e6930U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e6930() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e6930", "FUN_1800e6930");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t lVar1{};
    [[maybe_unused]] std::int64_t * plVar2{};
    [[maybe_unused]] double dVar3{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff960.
    // TODO: resolve the indirect call in body 17: dVar3 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff960 != 0)) [reason: unresolved global storage/width]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803ff960", static_cast<const void*>(&image::DAT_1803ff960));
    // body sha256: 04ef5857c653aa2826e770c9400036f0339476a6d30c8ac1b2fd30d2b524ec92
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong lVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("double dVar3;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            trace.statement("lVar1 = DAT_1803ff960;");
            if (trace.condition("if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff960 != 0))")) {
                trace.statement("dVar3 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);");
                trace.statement("*(float *)(lVar1 + 0x18) = (float)dVar3;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e6930;
}

// 0x1800e6980 FUN_1800e6980
// source: re/dump/decompile/0x1800e6980_FUN_1800e6980.c
// size: 96 bytes; thunk: false
// body sha256: 3b55d4b67b1b6f35465fbfbc53b76063f711b0ac02c4febfcb8a2c873ce8fea1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e6980{
    "0x1800e6980",
    "FUN_1800e6980",
    R"F1800e6980S(undefined FUN_1800e6980())F1800e6980S",
    R"B1800e6980(// 0x1800e6980  FUN_1800e6980
// size=96 thunk=false
// signature: undefined FUN_1800e6980()
// status: ok


undefined8 FUN_1800e6980(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    if (DAT_1803ff960 == 0) {
      (**(code **)(*plVar1 + 0xe0))(plVar1);
      return 1;
    }
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(float *)(DAT_1803ff960 + 0x1c));
    return 1;
  }
  return 0;
}


)B1800e6980",
    "3b55d4b67b1b6f35465fbfbc53b76063f711b0ac02c4febfcb8a2c873ce8fea1",
    R"F1800e6980C(FUN_180039770)F1800e6980C",
    R"F1800e6980D(DAT_1803ff960)F1800e6980D",
    R"F1800e6980T()F1800e6980T",
    R"F1800e6980F(13: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
14: if (DAT_1803ff960 == 0) {
16: return 1;
19: return 1;
21: return 0;)F1800e6980F",
    R"F1800e6980U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff960.
TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xe0))(plVar1);.
TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(float *)(DAT_1803ff960 + 0x1c));.)F1800e6980U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e6980() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e6980", "FUN_1800e6980");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t * plVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff960.
    // TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xe0))(plVar1);.
    // TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(float *)(DAT_1803ff960 + 0x1c));.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803ff960", static_cast<const void*>(&image::DAT_1803ff960));
    // body sha256: 3b55d4b67b1b6f35465fbfbc53b76063f711b0ac02c4febfcb8a2c873ce8fea1
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong *plVar1;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                if (trace.checked_condition("if (DAT_1803ff960 == 0)", [&]() -> bool { return static_cast<bool>(image::DAT_1803ff960 == 0); })) {
                    trace.statement("(**(code **)(*plVar1 + 0xe0))(plVar1);");
                    trace.statement("return 1;");
                }
                trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(float *)(DAT_1803ff960 + 0x1c));");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e6980;
}

// 0x1800e69e0 FUN_1800e69e0
// source: re/dump/decompile/0x1800e69e0_FUN_1800e69e0.c
// size: 75 bytes; thunk: false
// body sha256: f5759e8b85fd9cf107ff314ec476ddedb20896c041f8ffff12c9ee574e2c411c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e69e0{
    "0x1800e69e0",
    "FUN_1800e69e0",
    R"F1800e69e0S(undefined FUN_1800e69e0())F1800e69e0S",
    R"B1800e69e0(// 0x1800e69e0  FUN_1800e69e0
// size=75 thunk=false
// signature: undefined FUN_1800e69e0()
// status: ok


undefined8 FUN_1800e69e0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  double dVar3;
  
  plVar2 = (longlong *)FUN_180039770();
  lVar1 = DAT_1803ff960;
  if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff960 != 0)) {
    dVar3 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
    *(float *)(lVar1 + 0x1c) = (float)dVar3;
  }
  return 0;
}


)B1800e69e0",
    "f5759e8b85fd9cf107ff314ec476ddedb20896c041f8ffff12c9ee574e2c411c",
    R"F1800e69e0C(FUN_180039770)F1800e69e0C",
    R"F1800e69e0D(DAT_1803ff960)F1800e69e0D",
    R"F1800e69e0T()F1800e69e0T",
    R"F1800e69e0F(16: if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff960 != 0)) {
20: return 0;)F1800e69e0F",
    R"F1800e69e0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff960.
TODO: resolve the indirect call in body 17: dVar3 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.)F1800e69e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e69e0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e69e0", "FUN_1800e69e0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t lVar1{};
    [[maybe_unused]] std::int64_t * plVar2{};
    [[maybe_unused]] double dVar3{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff960.
    // TODO: resolve the indirect call in body 17: dVar3 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff960 != 0)) [reason: unresolved global storage/width]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803ff960", static_cast<const void*>(&image::DAT_1803ff960));
    // body sha256: f5759e8b85fd9cf107ff314ec476ddedb20896c041f8ffff12c9ee574e2c411c
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong lVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("double dVar3;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            trace.statement("lVar1 = DAT_1803ff960;");
            if (trace.condition("if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff960 != 0))")) {
                trace.statement("dVar3 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);");
                trace.statement("*(float *)(lVar1 + 0x1c) = (float)dVar3;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e69e0;
}

// 0x1800e6a30 FUN_1800e6a30
// source: re/dump/decompile/0x1800e6a30_FUN_1800e6a30.c
// size: 97 bytes; thunk: false
// body sha256: 95ca3426a62b5d56932824ed7975b4816ece5eac629af3f5f968ea5b0266fcf4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e6a30{
    "0x1800e6a30",
    "FUN_1800e6a30",
    R"F1800e6a30S(undefined FUN_1800e6a30())F1800e6a30S",
    R"B1800e6a30(// 0x1800e6a30  FUN_1800e6a30
// size=97 thunk=false
// signature: undefined FUN_1800e6a30()
// status: ok


undefined8 FUN_1800e6a30(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    if (DAT_1803ff960 == 0) {
      (**(code **)(*plVar1 + 0xe0))(plVar1);
      return 1;
    }
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(int *)(DAT_1803ff960 + 0x20));
    return 1;
  }
  return 0;
}


)B1800e6a30",
    "95ca3426a62b5d56932824ed7975b4816ece5eac629af3f5f968ea5b0266fcf4",
    R"F1800e6a30C(FUN_180039770)F1800e6a30C",
    R"F1800e6a30D(DAT_1803ff960)F1800e6a30D",
    R"F1800e6a30T()F1800e6a30T",
    R"F1800e6a30F(13: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
14: if (DAT_1803ff960 == 0) {
16: return 1;
19: return 1;
21: return 0;)F1800e6a30F",
    R"F1800e6a30U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff960.
TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xe0))(plVar1);.
TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(int *)(DAT_1803ff960 + 0x20));.)F1800e6a30U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e6a30() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e6a30", "FUN_1800e6a30");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t * plVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff960.
    // TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xe0))(plVar1);.
    // TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(int *)(DAT_1803ff960 + 0x20));.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803ff960", static_cast<const void*>(&image::DAT_1803ff960));
    // body sha256: 95ca3426a62b5d56932824ed7975b4816ece5eac629af3f5f968ea5b0266fcf4
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong *plVar1;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                if (trace.checked_condition("if (DAT_1803ff960 == 0)", [&]() -> bool { return static_cast<bool>(image::DAT_1803ff960 == 0); })) {
                    trace.statement("(**(code **)(*plVar1 + 0xe0))(plVar1);");
                    trace.statement("return 1;");
                }
                trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(int *)(DAT_1803ff960 + 0x20));");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e6a30;
}

// 0x1800e6aa0 FUN_1800e6aa0
// source: re/dump/decompile/0x1800e6aa0_FUN_1800e6aa0.c
// size: 70 bytes; thunk: false
// body sha256: 693e98321340c3a1718390f0edd951a9dd49ca322b7e0e404404e37643dbd6b9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e6aa0{
    "0x1800e6aa0",
    "FUN_1800e6aa0",
    R"F1800e6aa0S(undefined FUN_1800e6aa0())F1800e6aa0S",
    R"B1800e6aa0(// 0x1800e6aa0  FUN_1800e6aa0
// size=70 thunk=false
// signature: undefined FUN_1800e6aa0()
// status: ok


undefined8 FUN_1800e6aa0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  double dVar3;
  
  plVar2 = (longlong *)FUN_180039770();
  lVar1 = DAT_1803ff960;
  if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff960 != 0)) {
    dVar3 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
    *(int *)(lVar1 + 0x20) = (int)dVar3;
  }
  return 0;
}


)B1800e6aa0",
    "693e98321340c3a1718390f0edd951a9dd49ca322b7e0e404404e37643dbd6b9",
    R"F1800e6aa0C(FUN_180039770)F1800e6aa0C",
    R"F1800e6aa0D(DAT_1803ff960)F1800e6aa0D",
    R"F1800e6aa0T()F1800e6aa0T",
    R"F1800e6aa0F(16: if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff960 != 0)) {
20: return 0;)F1800e6aa0F",
    R"F1800e6aa0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff960.
TODO: resolve the indirect call in body 17: dVar3 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.)F1800e6aa0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e6aa0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e6aa0", "FUN_1800e6aa0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t lVar1{};
    [[maybe_unused]] std::int64_t * plVar2{};
    [[maybe_unused]] double dVar3{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff960.
    // TODO: resolve the indirect call in body 17: dVar3 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff960 != 0)) [reason: unresolved global storage/width]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803ff960", static_cast<const void*>(&image::DAT_1803ff960));
    // body sha256: 693e98321340c3a1718390f0edd951a9dd49ca322b7e0e404404e37643dbd6b9
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong lVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("double dVar3;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            trace.statement("lVar1 = DAT_1803ff960;");
            if (trace.condition("if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff960 != 0))")) {
                trace.statement("dVar3 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);");
                trace.statement("*(int *)(lVar1 + 0x20) = (int)dVar3;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e6aa0;
}

// 0x1800e6af0 FUN_1800e6af0
// source: re/dump/decompile/0x1800e6af0_FUN_1800e6af0.c
// size: 155 bytes; thunk: false
// body sha256: c9664c1eace758a5c4df5dcd288738e2e35f68d2d087c9321a886966a9be81aa
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e6af0{
    "0x1800e6af0",
    "FUN_1800e6af0",
    R"F1800e6af0S(undefined FUN_1800e6af0())F1800e6af0S",
    R"B1800e6af0(// 0x1800e6af0  FUN_1800e6af0
// size=155 thunk=false
// signature: undefined FUN_1800e6af0()
// status: ok


undefined8 FUN_1800e6af0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_180039770();
  lVar1 = DAT_1803ff960;
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    if (DAT_1803ff960 == 0) {
      (**(code **)(*plVar2 + 0xe0))();
      return 1;
    }
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(DAT_1803ff960 + 8));
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(lVar1 + 0xc));
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(lVar1 + 0x10));
    return 3;
  }
  return 0;
}


)B1800e6af0",
    "c9664c1eace758a5c4df5dcd288738e2e35f68d2d087c9321a886966a9be81aa",
    R"F1800e6af0C(FUN_180039770)F1800e6af0C",
    R"F1800e6af0D(DAT_1803ff960)F1800e6af0D",
    R"F1800e6af0T()F1800e6af0T",
    R"F1800e6af0F(15: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
16: if (DAT_1803ff960 == 0) {
18: return 1;
23: return 3;
25: return 0;)F1800e6af0F",
    R"F1800e6af0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff960.
TODO: resolve the indirect call in body 17: (**(code **)(*plVar2 + 0xe0))();.
TODO: resolve the indirect call in body 20: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(DAT_1803ff960 + 8));.
TODO: resolve the indirect call in body 21: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(lVar1 + 0xc));.
TODO: resolve the indirect call in body 22: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(lVar1 + 0x10));.)F1800e6af0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e6af0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e6af0", "FUN_1800e6af0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t lVar1{};
    [[maybe_unused]] std::int64_t * plVar2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff960.
    // TODO: resolve the indirect call in body 17: (**(code **)(*plVar2 + 0xe0))();.
    // TODO: resolve the indirect call in body 20: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(DAT_1803ff960 + 8));.
    // TODO: resolve the indirect call in body 21: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(lVar1 + 0xc));.
    // TODO: resolve the indirect call in body 22: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(lVar1 + 0x10));.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803ff960", static_cast<const void*>(&image::DAT_1803ff960));
    // body sha256: c9664c1eace758a5c4df5dcd288738e2e35f68d2d087c9321a886966a9be81aa
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong lVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            trace.statement("lVar1 = DAT_1803ff960;");
            if (trace.condition("if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1))")) {
                if (trace.checked_condition("if (DAT_1803ff960 == 0)", [&]() -> bool { return static_cast<bool>(image::DAT_1803ff960 == 0); })) {
                    trace.statement("(**(code **)(*plVar2 + 0xe0))();");
                    trace.statement("return 1;");
                }
                trace.statement("(**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(DAT_1803ff960 + 8));");
                trace.statement("(**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(lVar1 + 0xc));");
                trace.statement("(**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(lVar1 + 0x10));");
                trace.statement("return 3;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e6af0;
}

// 0x1800e6b90 FUN_1800e6b90
// source: re/dump/decompile/0x1800e6b90_FUN_1800e6b90.c
// size: 244 bytes; thunk: false
// body sha256: a43ed1dfb41550962bac453f5176f5d1ca94eb4867d8aecbccee04cf79751704
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e6b90{
    "0x1800e6b90",
    "FUN_1800e6b90",
    R"F1800e6b90S(undefined FUN_1800e6b90())F1800e6b90S",
    R"B1800e6b90(// 0x1800e6b90  FUN_1800e6b90
// size=244 thunk=false
// signature: undefined FUN_1800e6b90()
// status: ok


undefined8 FUN_1800e6b90(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)FUN_180039770();
  lVar4 = DAT_1803ff960;
  if (((plVar5 != (longlong *)0x0) && (plVar5[1] == param_1)) && (DAT_1803ff960 != 0)) {
    dVar3 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,3);
    dVar2 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,2);
    dVar1 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,1);
    if (((((uint)(float)dVar1 & 0x7f800000) != 0x7f800000) &&
        (((uint)(float)dVar2 & 0x7f800000) != 0x7f800000)) &&
       (((uint)(float)dVar3 & 0x7f800000) != 0x7f800000)) {
      *(float *)(lVar4 + 8) = (float)dVar1;
      *(float *)(lVar4 + 0xc) = (float)dVar2;
      *(float *)(lVar4 + 0x10) = (float)dVar3;
    }
    return 0;
  }
  return 0;
}


)B1800e6b90",
    "a43ed1dfb41550962bac453f5176f5d1ca94eb4867d8aecbccee04cf79751704",
    R"F1800e6b90C(FUN_180039770)F1800e6b90C",
    R"F1800e6b90D(DAT_1803ff960)F1800e6b90D",
    R"F1800e6b90T()F1800e6b90T",
    R"F1800e6b90F(18: if (((plVar5 != (longlong *)0x0) && (plVar5[1] == param_1)) && (DAT_1803ff960 != 0)) {
22: if (((((uint)(float)dVar1 & 0x7f800000) != 0x7f800000) &&
29: return 0;
31: return 0;)F1800e6b90F",
    R"F1800e6b90U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff960.
TODO: resolve the indirect call in body 19: dVar3 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,3);.
TODO: resolve the indirect call in body 20: dVar2 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,2);.
TODO: resolve the indirect call in body 21: dVar1 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,1);.)F1800e6b90U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e6b90() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e6b90", "FUN_1800e6b90");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] double dVar1{};
    [[maybe_unused]] double dVar2{};
    [[maybe_unused]] double dVar3{};
    [[maybe_unused]] std::int64_t lVar4{};
    [[maybe_unused]] std::int64_t * plVar5{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff960.
    // TODO: resolve the indirect call in body 19: dVar3 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,3);.
    // TODO: resolve the indirect call in body 20: dVar2 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,2);.
    // TODO: resolve the indirect call in body 21: dVar1 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if (((plVar5 != (longlong *)0x0) && (plVar5[1] == param_1)) && (DAT_1803ff960 != 0)) [reason: unresolved global storage/width]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803ff960", static_cast<const void*>(&image::DAT_1803ff960));
    // body sha256: a43ed1dfb41550962bac453f5176f5d1ca94eb4867d8aecbccee04cf79751704
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("double dVar1;");
            trace.statement("double dVar2;");
            trace.statement("double dVar3;");
            trace.statement("longlong lVar4;");
            trace.statement("longlong *plVar5;");
            trace.statement("plVar5 = (longlong *)FUN_180039770();");
            trace.statement("lVar4 = DAT_1803ff960;");
            if (trace.condition("if (((plVar5 != (longlong *)0x0) && (plVar5[1] == param_1)) && (DAT_1803ff960 != 0))")) {
                trace.statement("dVar3 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,3);");
                trace.statement("dVar2 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,2);");
                trace.statement("dVar1 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,1);");
                if (trace.condition("if (((((uint)(float)dVar1 & 0x7f800000) != 0x7f800000) && (((uint)(float)dVar2 & 0x7f800000) != 0x7f800000)) && (((uint)(float)dVar3 & 0x7f800000) != 0x7f800000))")) {
                    trace.statement("*(float *)(lVar4 + 8) = (float)dVar1;");
                    trace.statement("*(float *)(lVar4 + 0xc) = (float)dVar2;");
                    trace.statement("*(float *)(lVar4 + 0x10) = (float)dVar3;");
                }
                trace.statement("return 0;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e6b90;
}

// 0x1800e6c90 FUN_1800e6c90
// source: re/dump/decompile/0x1800e6c90_FUN_1800e6c90.c
// size: 96 bytes; thunk: false
// body sha256: 33a39d23ba28b1a4e1af63500c0e2f0a79114709d89ee6335d3d92b175f37cc1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e6c90{
    "0x1800e6c90",
    "FUN_1800e6c90",
    R"F1800e6c90S(undefined FUN_1800e6c90())F1800e6c90S",
    R"B1800e6c90(// 0x1800e6c90  FUN_1800e6c90
// size=96 thunk=false
// signature: undefined FUN_1800e6c90()
// status: ok


undefined8 FUN_1800e6c90(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    if (DAT_1803ff960 == (int *)0x0) {
      (**(code **)(*plVar1 + 0xe0))(plVar1);
      return 1;
    }
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*DAT_1803ff960);
    return 1;
  }
  return 0;
}


)B1800e6c90",
    "33a39d23ba28b1a4e1af63500c0e2f0a79114709d89ee6335d3d92b175f37cc1",
    R"F1800e6c90C(FUN_180039770)F1800e6c90C",
    R"F1800e6c90D(DAT_1803ff960)F1800e6c90D",
    R"F1800e6c90T()F1800e6c90T",
    R"F1800e6c90F(13: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
14: if (DAT_1803ff960 == (int *)0x0) {
16: return 1;
19: return 1;
21: return 0;)F1800e6c90F",
    R"F1800e6c90U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff960.
TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xe0))(plVar1);.
TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*DAT_1803ff960);.)F1800e6c90U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e6c90() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e6c90", "FUN_1800e6c90");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t * plVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff960.
    // TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xe0))(plVar1);.
    // TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*DAT_1803ff960);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) [reason: pointer-cast target not proven]
    // TODO: condition expression type not recovered: if (DAT_1803ff960 == (int *)0x0) [reason: unresolved global storage/width]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803ff960", static_cast<const void*>(&image::DAT_1803ff960));
    // body sha256: 33a39d23ba28b1a4e1af63500c0e2f0a79114709d89ee6335d3d92b175f37cc1
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong *plVar1;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                if (trace.condition("if (DAT_1803ff960 == (int *)0x0)")) {
                    trace.statement("(**(code **)(*plVar1 + 0xe0))(plVar1);");
                    trace.statement("return 1;");
                }
                trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)*DAT_1803ff960);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e6c90;
}

// 0x1800e6cf0 FUN_1800e6cf0
// source: re/dump/decompile/0x1800e6cf0_FUN_1800e6cf0.c
// size: 97 bytes; thunk: false
// body sha256: 66d519bb325164808fc4ab8aba54f67d37683d27c0197f9bc3993040a2c668fd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e6cf0{
    "0x1800e6cf0",
    "FUN_1800e6cf0",
    R"F1800e6cf0S(undefined FUN_1800e6cf0())F1800e6cf0S",
    R"B1800e6cf0(// 0x1800e6cf0  FUN_1800e6cf0
// size=97 thunk=false
// signature: undefined FUN_1800e6cf0()
// status: ok


undefined8 FUN_1800e6cf0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    if (DAT_1803ff960 == 0) {
      (**(code **)(*plVar1 + 0xe0))(plVar1);
      return 1;
    }
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(int *)(DAT_1803ff960 + 4));
    return 1;
  }
  return 0;
}


)B1800e6cf0",
    "66d519bb325164808fc4ab8aba54f67d37683d27c0197f9bc3993040a2c668fd",
    R"F1800e6cf0C(FUN_180039770)F1800e6cf0C",
    R"F1800e6cf0D(DAT_1803ff960)F1800e6cf0D",
    R"F1800e6cf0T()F1800e6cf0T",
    R"F1800e6cf0F(13: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
14: if (DAT_1803ff960 == 0) {
16: return 1;
19: return 1;
21: return 0;)F1800e6cf0F",
    R"F1800e6cf0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff960.
TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xe0))(plVar1);.
TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(int *)(DAT_1803ff960 + 4));.)F1800e6cf0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e6cf0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e6cf0", "FUN_1800e6cf0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t * plVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff960.
    // TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xe0))(plVar1);.
    // TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(int *)(DAT_1803ff960 + 4));.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803ff960", static_cast<const void*>(&image::DAT_1803ff960));
    // body sha256: 66d519bb325164808fc4ab8aba54f67d37683d27c0197f9bc3993040a2c668fd
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong *plVar1;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                if (trace.checked_condition("if (DAT_1803ff960 == 0)", [&]() -> bool { return static_cast<bool>(image::DAT_1803ff960 == 0); })) {
                    trace.statement("(**(code **)(*plVar1 + 0xe0))(plVar1);");
                    trace.statement("return 1;");
                }
                trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(int *)(DAT_1803ff960 + 4));");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e6cf0;
}

// 0x1800e6d60 FUN_1800e6d60
// source: re/dump/decompile/0x1800e6d60_FUN_1800e6d60.c
// size: 108 bytes; thunk: false
// body sha256: 947807a9a56f8a5c40b26c183049ac750b3a25e103dedb2587332b49cf39584e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e6d60{
    "0x1800e6d60",
    "FUN_1800e6d60",
    R"F1800e6d60S(undefined FUN_1800e6d60())F1800e6d60S",
    R"B1800e6d60(// 0x1800e6d60  FUN_1800e6d60
// size=108 thunk=false
// signature: undefined FUN_1800e6d60()
// status: ok


undefined8 FUN_1800e6d60(longlong param_1)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  double dVar4;
  
  plVar3 = (longlong *)FUN_180039770();
  piVar1 = DAT_1803ff960;
  if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) && (DAT_1803ff960 != (int *)0x0)) {
    cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,3);
    if (cVar2 != '\0') {
      dVar4 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,1);
      *piVar1 = (int)dVar4;
    }
  }
  return 0;
}


)B1800e6d60",
    "947807a9a56f8a5c40b26c183049ac750b3a25e103dedb2587332b49cf39584e",
    R"F1800e6d60C(FUN_180039770)F1800e6d60C",
    R"F1800e6d60D(DAT_1803ff960)F1800e6d60D",
    R"F1800e6d60T()F1800e6d60T",
    R"F1800e6d60F(17: if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) && (DAT_1803ff960 != (int *)0x0)) {
19: if (cVar2 != '\0') {
24: return 0;)F1800e6d60F",
    R"F1800e6d60U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff960.
TODO: resolve the indirect call in body 18: cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,3);.
TODO: resolve the indirect call in body 20: dVar4 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,1);.)F1800e6d60U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e6d60() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e6d60", "FUN_1800e6d60");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int32_t * piVar1{};
    [[maybe_unused]] char cVar2{};
    [[maybe_unused]] std::int64_t * plVar3{};
    [[maybe_unused]] double dVar4{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff960.
    // TODO: resolve the indirect call in body 18: cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,3);.
    // TODO: resolve the indirect call in body 20: dVar4 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) && (DAT_1803ff960 != (int *)0x0)) [reason: unresolved global storage/width]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803ff960", static_cast<const void*>(&image::DAT_1803ff960));
    // body sha256: 947807a9a56f8a5c40b26c183049ac750b3a25e103dedb2587332b49cf39584e
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("int *piVar1;");
            trace.statement("char cVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("double dVar4;");
            trace.statement("plVar3 = (longlong *)FUN_180039770();");
            trace.statement("piVar1 = DAT_1803ff960;");
            if (trace.condition("if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) && (DAT_1803ff960 != (int *)0x0))")) {
                trace.statement("cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,3);");
                if (trace.checked_condition("if (cVar2 != '\\0')", [&]() -> bool { return static_cast<bool>(cVar2 != '\0'); })) {
                    trace.statement("dVar4 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,1);");
                    trace.statement("*piVar1 = (int)dVar4;");
                }
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e6d60;
}

// 0x1800e6dd0 FUN_1800e6dd0
// source: re/dump/decompile/0x1800e6dd0_FUN_1800e6dd0.c
// size: 109 bytes; thunk: false
// body sha256: 6c9525a3d372bd69290550958ff309706e116414ccd4883a9df43e96e41eb67b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e6dd0{
    "0x1800e6dd0",
    "FUN_1800e6dd0",
    R"F1800e6dd0S(undefined FUN_1800e6dd0())F1800e6dd0S",
    R"B1800e6dd0(// 0x1800e6dd0  FUN_1800e6dd0
// size=109 thunk=false
// signature: undefined FUN_1800e6dd0()
// status: ok


undefined8 FUN_1800e6dd0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  double dVar4;
  
  plVar3 = (longlong *)FUN_180039770();
  lVar1 = DAT_1803ff960;
  if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) && (DAT_1803ff960 != 0)) {
    cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,3);
    if (cVar2 != '\0') {
      dVar4 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,1);
      *(int *)(lVar1 + 4) = (int)dVar4;
    }
  }
  return 0;
}


)B1800e6dd0",
    "6c9525a3d372bd69290550958ff309706e116414ccd4883a9df43e96e41eb67b",
    R"F1800e6dd0C(FUN_180039770)F1800e6dd0C",
    R"F1800e6dd0D(DAT_1803ff960)F1800e6dd0D",
    R"F1800e6dd0T()F1800e6dd0T",
    R"F1800e6dd0F(17: if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) && (DAT_1803ff960 != 0)) {
19: if (cVar2 != '\0') {
24: return 0;)F1800e6dd0F",
    R"F1800e6dd0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff960.
TODO: resolve the indirect call in body 18: cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,3);.
TODO: resolve the indirect call in body 20: dVar4 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,1);.)F1800e6dd0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e6dd0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e6dd0", "FUN_1800e6dd0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t lVar1{};
    [[maybe_unused]] char cVar2{};
    [[maybe_unused]] std::int64_t * plVar3{};
    [[maybe_unused]] double dVar4{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff960.
    // TODO: resolve the indirect call in body 18: cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,3);.
    // TODO: resolve the indirect call in body 20: dVar4 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) && (DAT_1803ff960 != 0)) [reason: unresolved global storage/width]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803ff960", static_cast<const void*>(&image::DAT_1803ff960));
    // body sha256: 6c9525a3d372bd69290550958ff309706e116414ccd4883a9df43e96e41eb67b
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong lVar1;");
            trace.statement("char cVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("double dVar4;");
            trace.statement("plVar3 = (longlong *)FUN_180039770();");
            trace.statement("lVar1 = DAT_1803ff960;");
            if (trace.condition("if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) && (DAT_1803ff960 != 0))")) {
                trace.statement("cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,3);");
                if (trace.checked_condition("if (cVar2 != '\\0')", [&]() -> bool { return static_cast<bool>(cVar2 != '\0'); })) {
                    trace.statement("dVar4 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,1);");
                    trace.statement("*(int *)(lVar1 + 4) = (int)dVar4;");
                }
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e6dd0;
}

// 0x1800e6e40 FUN_1800e6e40
// source: re/dump/decompile/0x1800e6e40_FUN_1800e6e40.c
// size: 97 bytes; thunk: false
// body sha256: 755690a3b0d1c5cdfc700e273d72893576a147a8c5ea2af5eb3763739c57cb17
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e6e40{
    "0x1800e6e40",
    "FUN_1800e6e40",
    R"F1800e6e40S(undefined FUN_1800e6e40())F1800e6e40S",
    R"B1800e6e40(// 0x1800e6e40  FUN_1800e6e40
// size=97 thunk=false
// signature: undefined FUN_1800e6e40()
// status: ok


undefined8 FUN_1800e6e40(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    if (DAT_1803ff960 == 0) {
      (**(code **)(*plVar1 + 0xe0))(plVar1);
      return 1;
    }
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(int *)(DAT_1803ff960 + 0x2c));
    return 1;
  }
  return 0;
}


)B1800e6e40",
    "755690a3b0d1c5cdfc700e273d72893576a147a8c5ea2af5eb3763739c57cb17",
    R"F1800e6e40C(FUN_180039770)F1800e6e40C",
    R"F1800e6e40D(DAT_1803ff960)F1800e6e40D",
    R"F1800e6e40T()F1800e6e40T",
    R"F1800e6e40F(13: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
14: if (DAT_1803ff960 == 0) {
16: return 1;
19: return 1;
21: return 0;)F1800e6e40F",
    R"F1800e6e40U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff960.
TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xe0))(plVar1);.
TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(int *)(DAT_1803ff960 + 0x2c));.)F1800e6e40U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e6e40() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e6e40", "FUN_1800e6e40");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t * plVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff960.
    // TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xe0))(plVar1);.
    // TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(int *)(DAT_1803ff960 + 0x2c));.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803ff960", static_cast<const void*>(&image::DAT_1803ff960));
    // body sha256: 755690a3b0d1c5cdfc700e273d72893576a147a8c5ea2af5eb3763739c57cb17
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong *plVar1;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                if (trace.checked_condition("if (DAT_1803ff960 == 0)", [&]() -> bool { return static_cast<bool>(image::DAT_1803ff960 == 0); })) {
                    trace.statement("(**(code **)(*plVar1 + 0xe0))(plVar1);");
                    trace.statement("return 1;");
                }
                trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(int *)(DAT_1803ff960 + 0x2c));");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e6e40;
}

// 0x1800e6eb0 FUN_1800e6eb0
// source: re/dump/decompile/0x1800e6eb0_FUN_1800e6eb0.c
// size: 109 bytes; thunk: false
// body sha256: bf09ec5bd5f31481a4a1bab25f86daa826f016f216bf4fd62bd9eafdab0f095d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e6eb0{
    "0x1800e6eb0",
    "FUN_1800e6eb0",
    R"F1800e6eb0S(undefined FUN_1800e6eb0())F1800e6eb0S",
    R"B1800e6eb0(// 0x1800e6eb0  FUN_1800e6eb0
// size=109 thunk=false
// signature: undefined FUN_1800e6eb0()
// status: ok


undefined8 FUN_1800e6eb0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  double dVar4;
  
  plVar3 = (longlong *)FUN_180039770();
  lVar1 = DAT_1803ff960;
  if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) && (DAT_1803ff960 != 0)) {
    cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,3);
    if (cVar2 != '\0') {
      dVar4 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,1);
      *(int *)(lVar1 + 0x2c) = (int)dVar4;
    }
  }
  return 0;
}


)B1800e6eb0",
    "bf09ec5bd5f31481a4a1bab25f86daa826f016f216bf4fd62bd9eafdab0f095d",
    R"F1800e6eb0C(FUN_180039770)F1800e6eb0C",
    R"F1800e6eb0D(DAT_1803ff960)F1800e6eb0D",
    R"F1800e6eb0T()F1800e6eb0T",
    R"F1800e6eb0F(17: if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) && (DAT_1803ff960 != 0)) {
19: if (cVar2 != '\0') {
24: return 0;)F1800e6eb0F",
    R"F1800e6eb0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff960.
TODO: resolve the indirect call in body 18: cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,3);.
TODO: resolve the indirect call in body 20: dVar4 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,1);.)F1800e6eb0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e6eb0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e6eb0", "FUN_1800e6eb0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t lVar1{};
    [[maybe_unused]] char cVar2{};
    [[maybe_unused]] std::int64_t * plVar3{};
    [[maybe_unused]] double dVar4{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff960.
    // TODO: resolve the indirect call in body 18: cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,3);.
    // TODO: resolve the indirect call in body 20: dVar4 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) && (DAT_1803ff960 != 0)) [reason: unresolved global storage/width]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803ff960", static_cast<const void*>(&image::DAT_1803ff960));
    // body sha256: bf09ec5bd5f31481a4a1bab25f86daa826f016f216bf4fd62bd9eafdab0f095d
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong lVar1;");
            trace.statement("char cVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("double dVar4;");
            trace.statement("plVar3 = (longlong *)FUN_180039770();");
            trace.statement("lVar1 = DAT_1803ff960;");
            if (trace.condition("if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) && (DAT_1803ff960 != 0))")) {
                trace.statement("cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,3);");
                if (trace.checked_condition("if (cVar2 != '\\0')", [&]() -> bool { return static_cast<bool>(cVar2 != '\0'); })) {
                    trace.statement("dVar4 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,1);");
                    trace.statement("*(int *)(lVar1 + 0x2c) = (int)dVar4;");
                }
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e6eb0;
}

// 0x1800e6f20 FUN_1800e6f20
// source: re/dump/decompile/0x1800e6f20_FUN_1800e6f20.c
// size: 452 bytes; thunk: false
// body sha256: 7fd048b9e5fa541ba96057931deef5f863d0f6ab1e8d7ba92ba344810c1140d9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e6f20{
    "0x1800e6f20",
    "FUN_1800e6f20",
    R"F1800e6f20S(undefined FUN_1800e6f20())F1800e6f20S",
    R"B1800e6f20(// 0x1800e6f20  FUN_1800e6f20
// size=452 thunk=false
// signature: undefined FUN_1800e6f20()
// status: ok


undefined8 FUN_1800e6f20(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  
  plVar6 = (longlong *)FUN_180039770();
  piVar2 = DAT_1803ff960;
  if ((plVar6 == (longlong *)0x0) || (plVar6[1] != param_2)) {
    return 0;
  }
  if ((DAT_1803ff960 == (int *)0x0) ||
     (cVar3 = (**(code **)(*plVar6 + 0x138))(plVar6,1,3), cVar3 == '\0')) {
    (**(code **)(*plVar6 + 0xe0))(plVar6);
    return 1;
  }
  dVar11 = (double)(**(code **)(*plVar6 + 0xc0))(plVar6,1);
  cVar3 = (**(code **)(*plVar6 + 0x138))(plVar6,2,3);
  if (cVar3 == '\0') {
    iVar10 = 0x80;
  }
  else {
    dVar12 = (double)(**(code **)(*plVar6 + 0xc0))(plVar6,2);
    iVar4 = (int)dVar12;
    if (0 < iVar4) {
      iVar9 = *piVar2;
      iVar8 = 0;
      iVar10 = 0x1000;
      if (iVar4 < 0x1001) {
        iVar10 = iVar4;
      }
      goto LAB_1800e7010;
    }
    iVar10 = 1;
  }
  iVar9 = *piVar2;
  iVar8 = 0;
LAB_1800e7010:
  do {
    iVar4 = 0;
    do {
      iVar7 = iVar8;
      if (iVar4 != 0) {
        iVar7 = -iVar8;
      }
      iVar1 = iVar7 + iVar9;
      if ((-1 < iVar1) && (uVar5 = FUN_180015e50(iVar1), (uVar5 & 0x7fffffff) == (int)dVar11)) {
        (**(code **)(*plVar6 + 0xf0))(plVar6,(double)iVar1);
        (**(code **)(*plVar6 + 0xf0))(plVar6,(double)iVar7);
        return 2;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)((iVar8 != 0) + 1));
    iVar8 = iVar8 + 1;
    if (iVar10 < iVar8) {
      (**(code **)(*plVar6 + 0xe0))(plVar6);
      return 1;
    }
  } while( true );
}


)B1800e6f20",
    "7fd048b9e5fa541ba96057931deef5f863d0f6ab1e8d7ba92ba344810c1140d9",
    R"F1800e6f20C(FUN_180015e50
FUN_180039770)F1800e6f20C",
    R"F1800e6f20D(LAB_1800e7010
DAT_1803ff960)F1800e6f20D",
    R"F1800e6f20T()F1800e6f20T",
    R"F1800e6f20F(25: if ((plVar6 == (longlong *)0x0) || (plVar6[1] != param_2)) {
26: return 0;
28: if ((DAT_1803ff960 == (int *)0x0) ||
31: return 1;
35: if (cVar3 == '\0') {
38: else {
41: if (0 < iVar4) {
45: if (iVar4 < 0x1001) {
48: goto LAB_1800e7010;
54: LAB_1800e7010:
55: do {
57: do {
59: if (iVar4 != 0) {
63: if ((-1 < iVar1) && (uVar5 = FUN_180015e50(iVar1), (uVar5 & 0x7fffffff) == (int)dVar11)) {
66: return 2;
71: if (iVar10 < iVar8) {
73: return 1;)F1800e6f20F",
    R"F1800e6f20U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference LAB_1800e7010.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff960.
TODO: resolve the indirect call in body 29: (cVar3 = (**(code **)(*plVar6 + 0x138))(plVar6,1,3), cVar3 == '\0')) {.
TODO: resolve the indirect call in body 30: (**(code **)(*plVar6 + 0xe0))(plVar6);.
TODO: resolve the indirect call in body 33: dVar11 = (double)(**(code **)(*plVar6 + 0xc0))(plVar6,1);.
TODO: resolve the indirect call in body 34: cVar3 = (**(code **)(*plVar6 + 0x138))(plVar6,2,3);.
TODO: resolve the indirect call in body 39: dVar12 = (double)(**(code **)(*plVar6 + 0xc0))(plVar6,2);.
TODO: resolve the indirect call in body 64: (**(code **)(*plVar6 + 0xf0))(plVar6,(double)iVar1);.
TODO: resolve the indirect call in body 65: (**(code **)(*plVar6 + 0xf0))(plVar6,(double)iVar7);.
TODO: resolve the indirect call in body 72: (**(code **)(*plVar6 + 0xe0))(plVar6);.)F1800e6f20U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e6f20() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e6f20", "FUN_1800e6f20");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    [[maybe_unused]] std::int32_t iVar1{};
    [[maybe_unused]] std::int32_t * piVar2{};
    [[maybe_unused]] char cVar3{};
    [[maybe_unused]] std::int32_t iVar4{};
    [[maybe_unused]] std::uint32_t uVar5{};
    [[maybe_unused]] std::int64_t * plVar6{};
    [[maybe_unused]] std::int32_t iVar7{};
    [[maybe_unused]] std::int32_t iVar8{};
    [[maybe_unused]] std::int32_t iVar9{};
    [[maybe_unused]] std::int32_t iVar10{};
    [[maybe_unused]] double dVar11{};
    [[maybe_unused]] double dVar12{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for LAB_1800e7010.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff960.
    // TODO: resolve the indirect call in body 29: (cVar3 = (**(code **)(*plVar6 + 0x138))(plVar6,1,3), cVar3 == '\0')) {.
    // TODO: resolve the indirect call in body 30: (**(code **)(*plVar6 + 0xe0))(plVar6);.
    // TODO: resolve the indirect call in body 33: dVar11 = (double)(**(code **)(*plVar6 + 0xc0))(plVar6,1);.
    // TODO: resolve the indirect call in body 34: cVar3 = (**(code **)(*plVar6 + 0x138))(plVar6,2,3);.
    // TODO: resolve the indirect call in body 39: dVar12 = (double)(**(code **)(*plVar6 + 0xc0))(plVar6,2);.
    // TODO: resolve the indirect call in body 64: (**(code **)(*plVar6 + 0xf0))(plVar6,(double)iVar1);.
    // TODO: resolve the indirect call in body 65: (**(code **)(*plVar6 + 0xf0))(plVar6,(double)iVar7);.
    // TODO: resolve the indirect call in body 72: (**(code **)(*plVar6 + 0xe0))(plVar6);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar6 == (longlong *)0x0) || (plVar6[1] != param_2)) [reason: pointer-cast target not proven]
    // TODO: condition expression type not recovered: if ((-1 < iVar1) && (uVar5 = FUN_180015e50(iVar1), (uVar5 & 0x7fffffff) == (int)dVar11)) [reason: scalar cast width/kind mismatch]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("FUN_180015e50", iVar1);
    trace.call_target("FUN_180015e50", reinterpret_cast<const void*>(&image::FUN_180015e50));
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803ff960", static_cast<const void*>(&image::DAT_1803ff960));
    // body sha256: 7fd048b9e5fa541ba96057931deef5f863d0f6ab1e8d7ba92ba344810c1140d9
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("int iVar1;");
            trace.statement("int *piVar2;");
            trace.statement("char cVar3;");
            trace.statement("int iVar4;");
            trace.statement("uint uVar5;");
            trace.statement("longlong *plVar6;");
            trace.statement("int iVar7;");
            trace.statement("int iVar8;");
            trace.statement("int iVar9;");
            trace.statement("int iVar10;");
            trace.statement("double dVar11;");
            trace.statement("double dVar12;");
            trace.statement("plVar6 = (longlong *)FUN_180039770();");
            trace.statement("piVar2 = DAT_1803ff960;");
            if (trace.condition("if ((plVar6 == (longlong *)0x0) || (plVar6[1] != param_2))")) {
                trace.statement("return 0;");
            }
            if (trace.condition("if ((DAT_1803ff960 == (int *)0x0) || (cVar3 = (**(code **)(*plVar6 + 0x138))(plVar6,1,3), cVar3 == '\\0'))")) {
                trace.statement("(**(code **)(*plVar6 + 0xe0))(plVar6);");
                trace.statement("return 1;");
            }
            trace.statement("dVar11 = (double)(**(code **)(*plVar6 + 0xc0))(plVar6,1);");
            trace.statement("cVar3 = (**(code **)(*plVar6 + 0x138))(plVar6,2,3);");
            if (trace.checked_condition("if (cVar3 == '\\0')", [&]() -> bool { return static_cast<bool>(cVar3 == '\0'); })) {
                trace.statement("iVar10 = 0x80;");
            } else {
            trace.statement("dVar12 = (double)(**(code **)(*plVar6 + 0xc0))(plVar6,2);");
            trace.statement("iVar4 = (int)dVar12;");
            if (trace.checked_condition("if (0 < iVar4)", [&]() -> bool { return static_cast<bool>(0 < iVar4); })) {
                trace.statement("iVar9 = *piVar2;");
                trace.statement("iVar8 = 0;");
                trace.statement("iVar10 = 0x1000;");
                if (trace.checked_condition("if (iVar4 < 0x1001)", [&]() -> bool { return static_cast<bool>(iVar4 < 0x1001); })) {
                    trace.statement("iVar10 = iVar4;");
                }
                trace.statement("goto LAB_1800e7010;");
            }
            trace.statement("iVar10 = 1;");
            }
            trace.statement("iVar9 = *piVar2;");
            trace.statement("iVar8 = 0;");
            LAB_1800e7010: ;
            do {
                trace.statement("iVar4 = 0;");
                do {
                    trace.statement("iVar7 = iVar8;");
                    if (trace.checked_condition("if (iVar4 != 0)", [&]() -> bool { return static_cast<bool>(iVar4 != 0); })) {
                        trace.statement("iVar7 = -iVar8;");
                    }
                    trace.statement("iVar1 = iVar7 + iVar9;");
                    if (trace.condition("if ((-1 < iVar1) && (uVar5 = FUN_180015e50(iVar1), (uVar5 & 0x7fffffff) == (int)dVar11))")) {
                        trace.statement("(**(code **)(*plVar6 + 0xf0))(plVar6,(double)iVar1);");
                        trace.statement("(**(code **)(*plVar6 + 0xf0))(plVar6,(double)iVar7);");
                        trace.statement("return 2;");
                    }
                    trace.statement("iVar4 = iVar4 + 1;");
                } while (trace.loop_condition("while (iVar4 < (int)((iVar8 != 0) + 1));"));
                trace.statement("iVar8 = iVar8 + 1;");
                if (trace.checked_condition("if (iVar10 < iVar8)", [&]() -> bool { return static_cast<bool>(iVar10 < iVar8); })) {
                    trace.statement("(**(code **)(*plVar6 + 0xe0))(plVar6);");
                    trace.statement("return 1;");
                }
            } while (trace.loop_condition("while( true );"));
        }
    return kFunction_0x1800e6f20;
}

// 0x1800e7100 FUN_1800e7100
// source: re/dump/decompile/0x1800e7100_FUN_1800e7100.c
// size: 91 bytes; thunk: false
// body sha256: 4e11477e8b8a29d71e55d73b285322015127b0e592a57273f1fb5535a55946d5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e7100{
    "0x1800e7100",
    "FUN_1800e7100",
    R"F1800e7100S(undefined FUN_1800e7100())F1800e7100S",
    R"B1800e7100(// 0x1800e7100  FUN_1800e7100
// size=91 thunk=false
// signature: undefined FUN_1800e7100()
// status: ok


undefined8 FUN_1800e7100(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    if (DAT_1803ff960 == 0) {
      (**(code **)(*plVar1 + 0xe0))();
      return 1;
    }
    (**(code **)(*plVar1 + 0xf8))(plVar1,*(undefined1 *)(DAT_1803ff960 + 0x36));
    return 1;
  }
  return 0;
}


)B1800e7100",
    "4e11477e8b8a29d71e55d73b285322015127b0e592a57273f1fb5535a55946d5",
    R"F1800e7100C(FUN_180039770)F1800e7100C",
    R"F1800e7100D(DAT_1803ff960)F1800e7100D",
    R"F1800e7100T()F1800e7100T",
    R"F1800e7100F(13: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
14: if (DAT_1803ff960 == 0) {
16: return 1;
19: return 1;
21: return 0;)F1800e7100F",
    R"F1800e7100U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff960.
TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xe0))();.
TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf8))(plVar1,*(undefined1 *)(DAT_1803ff960 + 0x36));.)F1800e7100U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e7100() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e7100", "FUN_1800e7100");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t * plVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff960.
    // TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xe0))();.
    // TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf8))(plVar1,*(undefined1 *)(DAT_1803ff960 + 0x36));.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803ff960", static_cast<const void*>(&image::DAT_1803ff960));
    // body sha256: 4e11477e8b8a29d71e55d73b285322015127b0e592a57273f1fb5535a55946d5
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong *plVar1;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                if (trace.checked_condition("if (DAT_1803ff960 == 0)", [&]() -> bool { return static_cast<bool>(image::DAT_1803ff960 == 0); })) {
                    trace.statement("(**(code **)(*plVar1 + 0xe0))();");
                    trace.statement("return 1;");
                }
                trace.statement("(**(code **)(*plVar1 + 0xf8))(plVar1,*(undefined1 *)(DAT_1803ff960 + 0x36));");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e7100;
}

// 0x1800e7160 FUN_1800e7160
// source: re/dump/decompile/0x1800e7160_FUN_1800e7160.c
// size: 120 bytes; thunk: false
// body sha256: 14bd2a90812bf3584d55b65b22a4fcf2b6fc34b7f3be2f8c3bda0d4a0d8e7f79
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e7160{
    "0x1800e7160",
    "FUN_1800e7160",
    R"F1800e7160S(undefined FUN_1800e7160())F1800e7160S",
    R"B1800e7160(// 0x1800e7160  FUN_1800e7160
// size=120 thunk=false
// signature: undefined FUN_1800e7160()
// status: ok


undefined8 FUN_1800e7160(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)FUN_180039770();
  lVar1 = DAT_1803ff960;
  if (((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) && (DAT_1803ff960 != 0)) {
    cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,1);
    if (cVar2 != '\0') {
      uVar3 = (**(code **)(*plVar4 + 200))(plVar4,1);
      *(undefined1 *)(lVar1 + 0x36) = uVar3;
      return 0;
    }
    *(undefined1 *)(lVar1 + 0x36) = 1;
  }
  return 0;
}


)B1800e7160",
    "14bd2a90812bf3584d55b65b22a4fcf2b6fc34b7f3be2f8c3bda0d4a0d8e7f79",
    R"F1800e7160C(FUN_180039770)F1800e7160C",
    R"F1800e7160D(DAT_1803ff960)F1800e7160D",
    R"F1800e7160T()F1800e7160T",
    R"F1800e7160F(17: if (((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) && (DAT_1803ff960 != 0)) {
19: if (cVar2 != '\0') {
22: return 0;
26: return 0;)F1800e7160F",
    R"F1800e7160U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff960.
TODO: resolve the indirect call in body 18: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,1);.
TODO: resolve the indirect call in body 20: uVar3 = (**(code **)(*plVar4 + 200))(plVar4,1);.)F1800e7160U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e7160() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e7160", "FUN_1800e7160");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t lVar1{};
    [[maybe_unused]] char cVar2{};
    [[maybe_unused]] std::uint8_t uVar3{};
    [[maybe_unused]] std::int64_t * plVar4{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff960.
    // TODO: resolve the indirect call in body 18: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,1);.
    // TODO: resolve the indirect call in body 20: uVar3 = (**(code **)(*plVar4 + 200))(plVar4,1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if (((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) && (DAT_1803ff960 != 0)) [reason: unresolved global storage/width]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803ff960", static_cast<const void*>(&image::DAT_1803ff960));
    // body sha256: 14bd2a90812bf3584d55b65b22a4fcf2b6fc34b7f3be2f8c3bda0d4a0d8e7f79
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong lVar1;");
            trace.statement("char cVar2;");
            trace.statement("undefined1 uVar3;");
            trace.statement("longlong *plVar4;");
            trace.statement("plVar4 = (longlong *)FUN_180039770();");
            trace.statement("lVar1 = DAT_1803ff960;");
            if (trace.condition("if (((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) && (DAT_1803ff960 != 0))")) {
                trace.statement("cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,1);");
                if (trace.checked_condition("if (cVar2 != '\\0')", [&]() -> bool { return static_cast<bool>(cVar2 != '\0'); })) {
                    trace.statement("uVar3 = (**(code **)(*plVar4 + 200))(plVar4,1);");
                    trace.statement("*(undefined1 *)(lVar1 + 0x36) = uVar3;");
                    trace.statement("return 0;");
                }
                trace.statement("*(undefined1 *)(lVar1 + 0x36) = 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e7160;
}

// 0x1800e71e0 FUN_1800e71e0
// source: re/dump/decompile/0x1800e71e0_FUN_1800e71e0.c
// size: 91 bytes; thunk: false
// body sha256: 2663f49314184eac5325138eb8d794929c23e411601a25f315d2667be07c7f30
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e71e0{
    "0x1800e71e0",
    "FUN_1800e71e0",
    R"F1800e71e0S(undefined FUN_1800e71e0())F1800e71e0S",
    R"B1800e71e0(// 0x1800e71e0  FUN_1800e71e0
// size=91 thunk=false
// signature: undefined FUN_1800e71e0()
// status: ok


undefined8 FUN_1800e71e0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    if (DAT_1803ff960 == 0) {
      (**(code **)(*plVar1 + 0xe0))();
      return 1;
    }
    (**(code **)(*plVar1 + 0xf8))(plVar1,*(undefined1 *)(DAT_1803ff960 + 0x3e));
    return 1;
  }
  return 0;
}


)B1800e71e0",
    "2663f49314184eac5325138eb8d794929c23e411601a25f315d2667be07c7f30",
    R"F1800e71e0C(FUN_180039770)F1800e71e0C",
    R"F1800e71e0D(DAT_1803ff960)F1800e71e0D",
    R"F1800e71e0T()F1800e71e0T",
    R"F1800e71e0F(13: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
14: if (DAT_1803ff960 == 0) {
16: return 1;
19: return 1;
21: return 0;)F1800e71e0F",
    R"F1800e71e0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff960.
TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xe0))();.
TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf8))(plVar1,*(undefined1 *)(DAT_1803ff960 + 0x3e));.)F1800e71e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e71e0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e71e0", "FUN_1800e71e0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t * plVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff960.
    // TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xe0))();.
    // TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf8))(plVar1,*(undefined1 *)(DAT_1803ff960 + 0x3e));.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803ff960", static_cast<const void*>(&image::DAT_1803ff960));
    // body sha256: 2663f49314184eac5325138eb8d794929c23e411601a25f315d2667be07c7f30
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong *plVar1;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                if (trace.checked_condition("if (DAT_1803ff960 == 0)", [&]() -> bool { return static_cast<bool>(image::DAT_1803ff960 == 0); })) {
                    trace.statement("(**(code **)(*plVar1 + 0xe0))();");
                    trace.statement("return 1;");
                }
                trace.statement("(**(code **)(*plVar1 + 0xf8))(plVar1,*(undefined1 *)(DAT_1803ff960 + 0x3e));");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e71e0;
}

// 0x1800e7240 FUN_1800e7240
// source: re/dump/decompile/0x1800e7240_FUN_1800e7240.c
// size: 120 bytes; thunk: false
// body sha256: 7a967ad16a47d5407b8e5d5cefc3bd6b638ff58f1e607aee0b06995a652e8698
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e7240{
    "0x1800e7240",
    "FUN_1800e7240",
    R"F1800e7240S(undefined FUN_1800e7240())F1800e7240S",
    R"B1800e7240(// 0x1800e7240  FUN_1800e7240
// size=120 thunk=false
// signature: undefined FUN_1800e7240()
// status: ok


undefined8 FUN_1800e7240(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)FUN_180039770();
  lVar1 = DAT_1803ff960;
  if (((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) && (DAT_1803ff960 != 0)) {
    cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,1);
    if (cVar2 != '\0') {
      uVar3 = (**(code **)(*plVar4 + 200))(plVar4,1);
      *(undefined1 *)(lVar1 + 0x3e) = uVar3;
      return 0;
    }
    *(undefined1 *)(lVar1 + 0x3e) = 1;
  }
  return 0;
}


)B1800e7240",
    "7a967ad16a47d5407b8e5d5cefc3bd6b638ff58f1e607aee0b06995a652e8698",
    R"F1800e7240C(FUN_180039770)F1800e7240C",
    R"F1800e7240D(DAT_1803ff960)F1800e7240D",
    R"F1800e7240T()F1800e7240T",
    R"F1800e7240F(17: if (((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) && (DAT_1803ff960 != 0)) {
19: if (cVar2 != '\0') {
22: return 0;
26: return 0;)F1800e7240F",
    R"F1800e7240U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff960.
TODO: resolve the indirect call in body 18: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,1);.
TODO: resolve the indirect call in body 20: uVar3 = (**(code **)(*plVar4 + 200))(plVar4,1);.)F1800e7240U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e7240() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e7240", "FUN_1800e7240");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t lVar1{};
    [[maybe_unused]] char cVar2{};
    [[maybe_unused]] std::uint8_t uVar3{};
    [[maybe_unused]] std::int64_t * plVar4{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff960.
    // TODO: resolve the indirect call in body 18: cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,1);.
    // TODO: resolve the indirect call in body 20: uVar3 = (**(code **)(*plVar4 + 200))(plVar4,1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if (((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) && (DAT_1803ff960 != 0)) [reason: unresolved global storage/width]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803ff960", static_cast<const void*>(&image::DAT_1803ff960));
    // body sha256: 7a967ad16a47d5407b8e5d5cefc3bd6b638ff58f1e607aee0b06995a652e8698
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong lVar1;");
            trace.statement("char cVar2;");
            trace.statement("undefined1 uVar3;");
            trace.statement("longlong *plVar4;");
            trace.statement("plVar4 = (longlong *)FUN_180039770();");
            trace.statement("lVar1 = DAT_1803ff960;");
            if (trace.condition("if (((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) && (DAT_1803ff960 != 0))")) {
                trace.statement("cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,1);");
                if (trace.checked_condition("if (cVar2 != '\\0')", [&]() -> bool { return static_cast<bool>(cVar2 != '\0'); })) {
                    trace.statement("uVar3 = (**(code **)(*plVar4 + 200))(plVar4,1);");
                    trace.statement("*(undefined1 *)(lVar1 + 0x3e) = uVar3;");
                    trace.statement("return 0;");
                }
                trace.statement("*(undefined1 *)(lVar1 + 0x3e) = 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e7240;
}

// 0x1800e72c0 FUN_1800e72c0
// source: re/dump/decompile/0x1800e72c0_FUN_1800e72c0.c
// size: 155 bytes; thunk: false
// body sha256: 92158b5234862557329326f1e07fe0cdd1345fdab6de25754b7b00a91b293019
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e72c0{
    "0x1800e72c0",
    "FUN_1800e72c0",
    R"F1800e72c0S(undefined FUN_1800e72c0())F1800e72c0S",
    R"B1800e72c0(// 0x1800e72c0  FUN_1800e72c0
// size=155 thunk=false
// signature: undefined FUN_1800e72c0()
// status: ok


undefined8 FUN_1800e72c0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_180039770();
  lVar1 = DAT_1803ff960;
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    if (DAT_1803ff960 == 0) {
      (**(code **)(*plVar2 + 0xe0))();
      return 1;
    }
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(DAT_1803ff960 + 0x40));
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(lVar1 + 0x44));
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(lVar1 + 0x48));
    return 3;
  }
  return 0;
}


)B1800e72c0",
    "92158b5234862557329326f1e07fe0cdd1345fdab6de25754b7b00a91b293019",
    R"F1800e72c0C(FUN_180039770)F1800e72c0C",
    R"F1800e72c0D(DAT_1803ff960)F1800e72c0D",
    R"F1800e72c0T()F1800e72c0T",
    R"F1800e72c0F(15: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
16: if (DAT_1803ff960 == 0) {
18: return 1;
23: return 3;
25: return 0;)F1800e72c0F",
    R"F1800e72c0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff960.
TODO: resolve the indirect call in body 17: (**(code **)(*plVar2 + 0xe0))();.
TODO: resolve the indirect call in body 20: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(DAT_1803ff960 + 0x40));.
TODO: resolve the indirect call in body 21: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(lVar1 + 0x44));.
TODO: resolve the indirect call in body 22: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(lVar1 + 0x48));.)F1800e72c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e72c0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e72c0", "FUN_1800e72c0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t lVar1{};
    [[maybe_unused]] std::int64_t * plVar2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff960.
    // TODO: resolve the indirect call in body 17: (**(code **)(*plVar2 + 0xe0))();.
    // TODO: resolve the indirect call in body 20: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(DAT_1803ff960 + 0x40));.
    // TODO: resolve the indirect call in body 21: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(lVar1 + 0x44));.
    // TODO: resolve the indirect call in body 22: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(lVar1 + 0x48));.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803ff960", static_cast<const void*>(&image::DAT_1803ff960));
    // body sha256: 92158b5234862557329326f1e07fe0cdd1345fdab6de25754b7b00a91b293019
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong lVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            trace.statement("lVar1 = DAT_1803ff960;");
            if (trace.condition("if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1))")) {
                if (trace.checked_condition("if (DAT_1803ff960 == 0)", [&]() -> bool { return static_cast<bool>(image::DAT_1803ff960 == 0); })) {
                    trace.statement("(**(code **)(*plVar2 + 0xe0))();");
                    trace.statement("return 1;");
                }
                trace.statement("(**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(DAT_1803ff960 + 0x40));");
                trace.statement("(**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(lVar1 + 0x44));");
                trace.statement("(**(code **)(*plVar2 + 0xf0))(plVar2,(double)*(float *)(lVar1 + 0x48));");
                trace.statement("return 3;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e72c0;
}

// 0x1800e7360 FUN_1800e7360
// source: re/dump/decompile/0x1800e7360_FUN_1800e7360.c
// size: 244 bytes; thunk: false
// body sha256: af2b3088808ee140da12fbfe36c8c8a003fc2afa0a96430a14e2b7d05da3d5da
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e7360{
    "0x1800e7360",
    "FUN_1800e7360",
    R"F1800e7360S(undefined FUN_1800e7360())F1800e7360S",
    R"B1800e7360(// 0x1800e7360  FUN_1800e7360
// size=244 thunk=false
// signature: undefined FUN_1800e7360()
// status: ok


undefined8 FUN_1800e7360(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)FUN_180039770();
  lVar4 = DAT_1803ff960;
  if (((plVar5 != (longlong *)0x0) && (plVar5[1] == param_1)) && (DAT_1803ff960 != 0)) {
    dVar3 = (double)(**(code **)(*plVar5 + 0xc0))(plVar5,3);
    dVar2 = (double)(**(code **)(*plVar5 + 0xc0))(plVar5,2);
    dVar1 = (double)(**(code **)(*plVar5 + 0xc0))(plVar5,1);
    if (((((uint)(float)dVar1 & 0x7f800000) != 0x7f800000) &&
        (((uint)(float)dVar2 & 0x7f800000) != 0x7f800000)) &&
       (((uint)(float)dVar3 & 0x7f800000) != 0x7f800000)) {
      *(float *)(lVar4 + 0x40) = (float)dVar1;
      *(float *)(lVar4 + 0x44) = (float)dVar2;
      *(float *)(lVar4 + 0x48) = (float)dVar3;
    }
    return 0;
  }
  return 0;
}


)B1800e7360",
    "af2b3088808ee140da12fbfe36c8c8a003fc2afa0a96430a14e2b7d05da3d5da",
    R"F1800e7360C(FUN_180039770)F1800e7360C",
    R"F1800e7360D(DAT_1803ff960)F1800e7360D",
    R"F1800e7360T()F1800e7360T",
    R"F1800e7360F(18: if (((plVar5 != (longlong *)0x0) && (plVar5[1] == param_1)) && (DAT_1803ff960 != 0)) {
22: if (((((uint)(float)dVar1 & 0x7f800000) != 0x7f800000) &&
29: return 0;
31: return 0;)F1800e7360F",
    R"F1800e7360U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff960.
TODO: resolve the indirect call in body 19: dVar3 = (double)(**(code **)(*plVar5 + 0xc0))(plVar5,3);.
TODO: resolve the indirect call in body 20: dVar2 = (double)(**(code **)(*plVar5 + 0xc0))(plVar5,2);.
TODO: resolve the indirect call in body 21: dVar1 = (double)(**(code **)(*plVar5 + 0xc0))(plVar5,1);.)F1800e7360U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e7360() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e7360", "FUN_1800e7360");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] double dVar1{};
    [[maybe_unused]] double dVar2{};
    [[maybe_unused]] double dVar3{};
    [[maybe_unused]] std::int64_t lVar4{};
    [[maybe_unused]] std::int64_t * plVar5{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff960.
    // TODO: resolve the indirect call in body 19: dVar3 = (double)(**(code **)(*plVar5 + 0xc0))(plVar5,3);.
    // TODO: resolve the indirect call in body 20: dVar2 = (double)(**(code **)(*plVar5 + 0xc0))(plVar5,2);.
    // TODO: resolve the indirect call in body 21: dVar1 = (double)(**(code **)(*plVar5 + 0xc0))(plVar5,1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if (((plVar5 != (longlong *)0x0) && (plVar5[1] == param_1)) && (DAT_1803ff960 != 0)) [reason: unresolved global storage/width]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803ff960", static_cast<const void*>(&image::DAT_1803ff960));
    // body sha256: af2b3088808ee140da12fbfe36c8c8a003fc2afa0a96430a14e2b7d05da3d5da
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("double dVar1;");
            trace.statement("double dVar2;");
            trace.statement("double dVar3;");
            trace.statement("longlong lVar4;");
            trace.statement("longlong *plVar5;");
            trace.statement("plVar5 = (longlong *)FUN_180039770();");
            trace.statement("lVar4 = DAT_1803ff960;");
            if (trace.condition("if (((plVar5 != (longlong *)0x0) && (plVar5[1] == param_1)) && (DAT_1803ff960 != 0))")) {
                trace.statement("dVar3 = (double)(**(code **)(*plVar5 + 0xc0))(plVar5,3);");
                trace.statement("dVar2 = (double)(**(code **)(*plVar5 + 0xc0))(plVar5,2);");
                trace.statement("dVar1 = (double)(**(code **)(*plVar5 + 0xc0))(plVar5,1);");
                if (trace.condition("if (((((uint)(float)dVar1 & 0x7f800000) != 0x7f800000) && (((uint)(float)dVar2 & 0x7f800000) != 0x7f800000)) && (((uint)(float)dVar3 & 0x7f800000) != 0x7f800000))")) {
                    trace.statement("*(float *)(lVar4 + 0x40) = (float)dVar1;");
                    trace.statement("*(float *)(lVar4 + 0x44) = (float)dVar2;");
                    trace.statement("*(float *)(lVar4 + 0x48) = (float)dVar3;");
                }
                trace.statement("return 0;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e7360;
}

// 0x1800e7460 FUN_1800e7460
// source: re/dump/decompile/0x1800e7460_FUN_1800e7460.c
// size: 143 bytes; thunk: false
// body sha256: 4c00713268895c72962a37580e1b1d61908f7af30ceecd2d097bd249be4d0950
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e7460{
    "0x1800e7460",
    "FUN_1800e7460",
    R"F1800e7460S(undefined FUN_1800e7460())F1800e7460S",
    R"B1800e7460(// 0x1800e7460  FUN_1800e7460
// size=143 thunk=false
// signature: undefined FUN_1800e7460()
// status: ok


undefined8 FUN_1800e7460(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_180039770();
  lVar1 = DAT_1803ff960;
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    if (DAT_1803ff960 == 0) {
      (**(code **)(*plVar2 + 0xe0))();
      return 1;
    }
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)(int)*(short *)(DAT_1803ff960 + 0x30));
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)(int)*(short *)(lVar1 + 0x32));
    return 2;
  }
  return 0;
}


)B1800e7460",
    "4c00713268895c72962a37580e1b1d61908f7af30ceecd2d097bd249be4d0950",
    R"F1800e7460C(FUN_180039770)F1800e7460C",
    R"F1800e7460D(DAT_1803ff960)F1800e7460D",
    R"F1800e7460T()F1800e7460T",
    R"F1800e7460F(15: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
16: if (DAT_1803ff960 == 0) {
18: return 1;
22: return 2;
24: return 0;)F1800e7460F",
    R"F1800e7460U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff960.
TODO: resolve the indirect call in body 17: (**(code **)(*plVar2 + 0xe0))();.
TODO: resolve the indirect call in body 20: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)(int)*(short *)(DAT_1803ff960 + 0x30));.
TODO: resolve the indirect call in body 21: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)(int)*(short *)(lVar1 + 0x32));.)F1800e7460U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e7460() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e7460", "FUN_1800e7460");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t lVar1{};
    [[maybe_unused]] std::int64_t * plVar2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff960.
    // TODO: resolve the indirect call in body 17: (**(code **)(*plVar2 + 0xe0))();.
    // TODO: resolve the indirect call in body 20: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)(int)*(short *)(DAT_1803ff960 + 0x30));.
    // TODO: resolve the indirect call in body 21: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)(int)*(short *)(lVar1 + 0x32));.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803ff960", static_cast<const void*>(&image::DAT_1803ff960));
    // body sha256: 4c00713268895c72962a37580e1b1d61908f7af30ceecd2d097bd249be4d0950
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong lVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            trace.statement("lVar1 = DAT_1803ff960;");
            if (trace.condition("if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1))")) {
                if (trace.checked_condition("if (DAT_1803ff960 == 0)", [&]() -> bool { return static_cast<bool>(image::DAT_1803ff960 == 0); })) {
                    trace.statement("(**(code **)(*plVar2 + 0xe0))();");
                    trace.statement("return 1;");
                }
                trace.statement("(**(code **)(*plVar2 + 0xf0))(plVar2,(double)(int)*(short *)(DAT_1803ff960 + 0x30));");
                trace.statement("(**(code **)(*plVar2 + 0xf0))(plVar2,(double)(int)*(short *)(lVar1 + 0x32));");
                trace.statement("return 2;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e7460;
}

// 0x1800e74f0 FUN_1800e74f0
// source: re/dump/decompile/0x1800e74f0_FUN_1800e74f0.c
// size: 108 bytes; thunk: false
// body sha256: 33b3065e46c713c65e8096b41c0e503dc392fdbc076e072d7445f18559468c46
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e74f0{
    "0x1800e74f0",
    "FUN_1800e74f0",
    R"F1800e74f0S(undefined FUN_1800e74f0())F1800e74f0S",
    R"B1800e74f0(// 0x1800e74f0  FUN_1800e74f0
// size=108 thunk=false
// signature: undefined FUN_1800e74f0()
// status: ok


undefined8 FUN_1800e74f0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  double dVar3;
  
  plVar2 = (longlong *)FUN_180039770();
  lVar1 = DAT_1803ff960;
  if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff960 != 0)) {
    dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);
    *(short *)(lVar1 + 0x30) = (short)(int)dVar3;
    dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,2);
    *(short *)(lVar1 + 0x32) = (short)(int)dVar3;
  }
  return 0;
}


)B1800e74f0",
    "33b3065e46c713c65e8096b41c0e503dc392fdbc076e072d7445f18559468c46",
    R"F1800e74f0C(FUN_180039770)F1800e74f0C",
    R"F1800e74f0D(DAT_1803ff960)F1800e74f0D",
    R"F1800e74f0T()F1800e74f0T",
    R"F1800e74f0F(16: if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff960 != 0)) {
22: return 0;)F1800e74f0F",
    R"F1800e74f0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff960.
TODO: resolve the indirect call in body 17: dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);.
TODO: resolve the indirect call in body 19: dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,2);.)F1800e74f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e74f0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e74f0", "FUN_1800e74f0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t lVar1{};
    [[maybe_unused]] std::int64_t * plVar2{};
    [[maybe_unused]] double dVar3{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff960.
    // TODO: resolve the indirect call in body 17: dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);.
    // TODO: resolve the indirect call in body 19: dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,2);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff960 != 0)) [reason: unresolved global storage/width]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803ff960", static_cast<const void*>(&image::DAT_1803ff960));
    // body sha256: 33b3065e46c713c65e8096b41c0e503dc392fdbc076e072d7445f18559468c46
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong lVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("double dVar3;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            trace.statement("lVar1 = DAT_1803ff960;");
            if (trace.condition("if (((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) && (DAT_1803ff960 != 0))")) {
                trace.statement("dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);");
                trace.statement("*(short *)(lVar1 + 0x30) = (short)(int)dVar3;");
                trace.statement("dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,2);");
                trace.statement("*(short *)(lVar1 + 0x32) = (short)(int)dVar3;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e74f0;
}

// 0x1800e7560 FUN_1800e7560
// source: re/dump/decompile/0x1800e7560_FUN_1800e7560.c
// size: 97 bytes; thunk: false
// body sha256: 717bf2dd0cf8a942cfb9110b65bdca841f37e5f675ec2ee3793b4636e1d6a18c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e7560{
    "0x1800e7560",
    "FUN_1800e7560",
    R"F1800e7560S(undefined FUN_1800e7560())F1800e7560S",
    R"B1800e7560(// 0x1800e7560  FUN_1800e7560
// size=97 thunk=false
// signature: undefined FUN_1800e7560()
// status: ok


undefined8 FUN_1800e7560(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    if (DAT_1803ff960 == 0) {
      (**(code **)(*plVar1 + 0xe0))();
      return 1;
    }
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(byte *)(DAT_1803ff960 + 0x35));
    return 1;
  }
  return 0;
}


)B1800e7560",
    "717bf2dd0cf8a942cfb9110b65bdca841f37e5f675ec2ee3793b4636e1d6a18c",
    R"F1800e7560C(FUN_180039770)F1800e7560C",
    R"F1800e7560D(DAT_1803ff960)F1800e7560D",
    R"F1800e7560T()F1800e7560T",
    R"F1800e7560F(13: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
14: if (DAT_1803ff960 == 0) {
16: return 1;
19: return 1;
21: return 0;)F1800e7560F",
    R"F1800e7560U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff960.
TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xe0))();.
TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(byte *)(DAT_1803ff960 + 0x35));.)F1800e7560U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e7560() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e7560", "FUN_1800e7560");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t * plVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff960.
    // TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xe0))();.
    // TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(byte *)(DAT_1803ff960 + 0x35));.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803ff960", static_cast<const void*>(&image::DAT_1803ff960));
    // body sha256: 717bf2dd0cf8a942cfb9110b65bdca841f37e5f675ec2ee3793b4636e1d6a18c
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong *plVar1;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                if (trace.checked_condition("if (DAT_1803ff960 == 0)", [&]() -> bool { return static_cast<bool>(image::DAT_1803ff960 == 0); })) {
                    trace.statement("(**(code **)(*plVar1 + 0xe0))();");
                    trace.statement("return 1;");
                }
                trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(byte *)(DAT_1803ff960 + 0x35));");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e7560;
}

// 0x1800e75d0 FUN_1800e75d0
// source: re/dump/decompile/0x1800e75d0_FUN_1800e75d0.c
// size: 109 bytes; thunk: false
// body sha256: 5e56302a851ebc6d87c43ec04a648d4eaed4af741c5a72de94bbacb12f0aeff6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e75d0{
    "0x1800e75d0",
    "FUN_1800e75d0",
    R"F1800e75d0S(undefined FUN_1800e75d0())F1800e75d0S",
    R"B1800e75d0(// 0x1800e75d0  FUN_1800e75d0
// size=109 thunk=false
// signature: undefined FUN_1800e75d0()
// status: ok


undefined8 FUN_1800e75d0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  double dVar4;
  
  plVar3 = (longlong *)FUN_180039770();
  lVar1 = DAT_1803ff960;
  if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) && (DAT_1803ff960 != 0)) {
    cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,3);
    if (cVar2 != '\0') {
      dVar4 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,1);
      *(char *)(lVar1 + 0x35) = (char)(int)dVar4;
    }
  }
  return 0;
}


)B1800e75d0",
    "5e56302a851ebc6d87c43ec04a648d4eaed4af741c5a72de94bbacb12f0aeff6",
    R"F1800e75d0C(FUN_180039770)F1800e75d0C",
    R"F1800e75d0D(DAT_1803ff960)F1800e75d0D",
    R"F1800e75d0T()F1800e75d0T",
    R"F1800e75d0F(17: if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) && (DAT_1803ff960 != 0)) {
19: if (cVar2 != '\0') {
24: return 0;)F1800e75d0F",
    R"F1800e75d0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff960.
TODO: resolve the indirect call in body 18: cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,3);.
TODO: resolve the indirect call in body 20: dVar4 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,1);.)F1800e75d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e75d0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e75d0", "FUN_1800e75d0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t lVar1{};
    [[maybe_unused]] char cVar2{};
    [[maybe_unused]] std::int64_t * plVar3{};
    [[maybe_unused]] double dVar4{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff960.
    // TODO: resolve the indirect call in body 18: cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,3);.
    // TODO: resolve the indirect call in body 20: dVar4 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) && (DAT_1803ff960 != 0)) [reason: unresolved global storage/width]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803ff960", static_cast<const void*>(&image::DAT_1803ff960));
    // body sha256: 5e56302a851ebc6d87c43ec04a648d4eaed4af741c5a72de94bbacb12f0aeff6
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong lVar1;");
            trace.statement("char cVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("double dVar4;");
            trace.statement("plVar3 = (longlong *)FUN_180039770();");
            trace.statement("lVar1 = DAT_1803ff960;");
            if (trace.condition("if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) && (DAT_1803ff960 != 0))")) {
                trace.statement("cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,3);");
                if (trace.checked_condition("if (cVar2 != '\\0')", [&]() -> bool { return static_cast<bool>(cVar2 != '\0'); })) {
                    trace.statement("dVar4 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,1);");
                    trace.statement("*(char *)(lVar1 + 0x35) = (char)(int)dVar4;");
                }
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e75d0;
}

// 0x1800e7640 FUN_1800e7640
// source: re/dump/decompile/0x1800e7640_FUN_1800e7640.c
// size: 97 bytes; thunk: false
// body sha256: 2a4f84d0e1ae0e75ab7a57f53d53c5abebcb50ff4d17a507f20c2b49058c538c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e7640{
    "0x1800e7640",
    "FUN_1800e7640",
    R"F1800e7640S(undefined FUN_1800e7640())F1800e7640S",
    R"B1800e7640(// 0x1800e7640  FUN_1800e7640
// size=97 thunk=false
// signature: undefined FUN_1800e7640()
// status: ok


undefined8 FUN_1800e7640(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    if (DAT_1803ff960 == 0) {
      (**(code **)(*plVar1 + 0xe0))(plVar1);
      return 1;
    }
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(int *)(DAT_1803ff960 + 0x24));
    return 1;
  }
  return 0;
}


)B1800e7640",
    "2a4f84d0e1ae0e75ab7a57f53d53c5abebcb50ff4d17a507f20c2b49058c538c",
    R"F1800e7640C(FUN_180039770)F1800e7640C",
    R"F1800e7640D(DAT_1803ff960)F1800e7640D",
    R"F1800e7640T()F1800e7640T",
    R"F1800e7640F(13: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
14: if (DAT_1803ff960 == 0) {
16: return 1;
19: return 1;
21: return 0;)F1800e7640F",
    R"F1800e7640U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff960.
TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xe0))(plVar1);.
TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(int *)(DAT_1803ff960 + 0x24));.)F1800e7640U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e7640() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e7640", "FUN_1800e7640");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t * plVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff960.
    // TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xe0))(plVar1);.
    // TODO: resolve the indirect call in body 18: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(int *)(DAT_1803ff960 + 0x24));.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803ff960", static_cast<const void*>(&image::DAT_1803ff960));
    // body sha256: 2a4f84d0e1ae0e75ab7a57f53d53c5abebcb50ff4d17a507f20c2b49058c538c
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong *plVar1;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                if (trace.checked_condition("if (DAT_1803ff960 == 0)", [&]() -> bool { return static_cast<bool>(image::DAT_1803ff960 == 0); })) {
                    trace.statement("(**(code **)(*plVar1 + 0xe0))(plVar1);");
                    trace.statement("return 1;");
                }
                trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(int *)(DAT_1803ff960 + 0x24));");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e7640;
}

// 0x1800e76b0 FUN_1800e76b0
// source: re/dump/decompile/0x1800e76b0_FUN_1800e76b0.c
// size: 109 bytes; thunk: false
// body sha256: bb346096df06d9d17821e3a551311dc867692cf6b2471bc8e9b65e9d3ca2def1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e76b0{
    "0x1800e76b0",
    "FUN_1800e76b0",
    R"F1800e76b0S(undefined FUN_1800e76b0())F1800e76b0S",
    R"B1800e76b0(// 0x1800e76b0  FUN_1800e76b0
// size=109 thunk=false
// signature: undefined FUN_1800e76b0()
// status: ok


undefined8 FUN_1800e76b0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  double dVar4;
  
  plVar3 = (longlong *)FUN_180039770();
  lVar1 = DAT_1803ff960;
  if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) && (DAT_1803ff960 != 0)) {
    cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,3);
    if (cVar2 != '\0') {
      dVar4 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,1);
      *(int *)(lVar1 + 0x24) = (int)dVar4;
    }
  }
  return 0;
}


)B1800e76b0",
    "bb346096df06d9d17821e3a551311dc867692cf6b2471bc8e9b65e9d3ca2def1",
    R"F1800e76b0C(FUN_180039770)F1800e76b0C",
    R"F1800e76b0D(DAT_1803ff960)F1800e76b0D",
    R"F1800e76b0T()F1800e76b0T",
    R"F1800e76b0F(17: if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) && (DAT_1803ff960 != 0)) {
19: if (cVar2 != '\0') {
24: return 0;)F1800e76b0F",
    R"F1800e76b0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803ff960.
TODO: resolve the indirect call in body 18: cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,3);.
TODO: resolve the indirect call in body 20: dVar4 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,1);.)F1800e76b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e76b0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e76b0", "FUN_1800e76b0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t lVar1{};
    [[maybe_unused]] char cVar2{};
    [[maybe_unused]] std::int64_t * plVar3{};
    [[maybe_unused]] double dVar4{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803ff960.
    // TODO: resolve the indirect call in body 18: cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,3);.
    // TODO: resolve the indirect call in body 20: dVar4 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) && (DAT_1803ff960 != 0)) [reason: unresolved global storage/width]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803ff960", static_cast<const void*>(&image::DAT_1803ff960));
    // body sha256: bb346096df06d9d17821e3a551311dc867692cf6b2471bc8e9b65e9d3ca2def1
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong lVar1;");
            trace.statement("char cVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("double dVar4;");
            trace.statement("plVar3 = (longlong *)FUN_180039770();");
            trace.statement("lVar1 = DAT_1803ff960;");
            if (trace.condition("if (((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) && (DAT_1803ff960 != 0))")) {
                trace.statement("cVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,1,3);");
                if (trace.checked_condition("if (cVar2 != '\\0')", [&]() -> bool { return static_cast<bool>(cVar2 != '\0'); })) {
                    trace.statement("dVar4 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,1);");
                    trace.statement("*(int *)(lVar1 + 0x24) = (int)dVar4;");
                }
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e76b0;
}

// 0x1800e7720 FUN_1800e7720
// source: re/dump/decompile/0x1800e7720_FUN_1800e7720.c
// size: 135 bytes; thunk: false
// body sha256: 07ecbb9ef887ad3fc4484417e4bce45b08cd2e3177e99ec0a7cf36fef8e969f2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e7720{
    "0x1800e7720",
    "FUN_1800e7720",
    R"F1800e7720S(undefined FUN_1800e7720())F1800e7720S",
    R"B1800e7720(// 0x1800e7720  FUN_1800e7720
// size=135 thunk=false
// signature: undefined FUN_1800e7720()
// status: ok


undefined8 FUN_1800e7720(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  double dVar3;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);
    if (cVar1 != '\0') {
      dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);
      DAT_1803db4a4 = (uint)(longlong)dVar3;
      if (0x17 < DAT_1803db4a4) {
        DAT_1803db4a4 = 0x17;
      }
      return 0;
    }
    DAT_1803db4a4 = 1;
  }
  return 0;
}


)B1800e7720",
    "07ecbb9ef887ad3fc4484417e4bce45b08cd2e3177e99ec0a7cf36fef8e969f2",
    R"F1800e7720C(FUN_180039770)F1800e7720C",
    R"F1800e7720D(DAT_1803db4a4)F1800e7720D",
    R"F1800e7720T()F1800e7720T",
    R"F1800e7720F(15: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
17: if (cVar1 != '\0') {
20: if (0x17 < DAT_1803db4a4) {
23: return 0;
27: return 0;)F1800e7720F",
    R"F1800e7720U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803db4a4.
TODO: resolve the indirect call in body 16: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);.
TODO: resolve the indirect call in body 18: dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);.)F1800e7720U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e7720() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e7720", "FUN_1800e7720");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] char cVar1{};
    [[maybe_unused]] std::int64_t * plVar2{};
    [[maybe_unused]] double dVar3{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803db4a4.
    // TODO: resolve the indirect call in body 16: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);.
    // TODO: resolve the indirect call in body 18: dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803db4a4", static_cast<const void*>(&image::DAT_1803db4a4));
    // body sha256: 07ecbb9ef887ad3fc4484417e4bce45b08cd2e3177e99ec0a7cf36fef8e969f2
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("char cVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("double dVar3;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1))")) {
                trace.statement("cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);");
                if (trace.checked_condition("if (cVar1 != '\\0')", [&]() -> bool { return static_cast<bool>(cVar1 != '\0'); })) {
                    trace.statement("dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);");
                    trace.statement("DAT_1803db4a4 = (uint)(longlong)dVar3;");
                    if (trace.checked_condition("if (0x17 < DAT_1803db4a4)", [&]() -> bool { return static_cast<bool>(0x17 < image::DAT_1803db4a4); })) {
                        trace.statement("DAT_1803db4a4 = 0x17;");
                    }
                    trace.statement("return 0;");
                }
                trace.statement("DAT_1803db4a4 = 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e7720;
}

// 0x1800e77b0 FUN_1800e77b0
// source: re/dump/decompile/0x1800e77b0_FUN_1800e77b0.c
// size: 308 bytes; thunk: false
// body sha256: acf3ff44c4a79169ba5a4f653a39392b04c545b3307efc69eb6fccd71e9fb79f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e77b0{
    "0x1800e77b0",
    "FUN_1800e77b0",
    R"F1800e77b0S(undefined FUN_1800e77b0())F1800e77b0S",
    R"B1800e77b0(// 0x1800e77b0  FUN_1800e77b0
// size=308 thunk=false
// signature: undefined FUN_1800e77b0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1800e77b0(byte *param_1,byte *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if ((param_1 == (byte *)0x0) || (param_2 == (byte *)0x0)) {
    return (longlong *)0x0;
  }
  uVar6 = 0x14650fb0739d0383;
  uVar7 = 0x14650fb0739d0383;
  do {
    if (*param_1 == 0) break;
    uVar7 = (uVar7 ^ *param_1) * 0x100000001b3;
    param_1 = param_1 + 1;
  } while (param_1 != (byte *)0x0);
  plVar2 = (longlong *)DAT_1803fadf0[1];
  cVar1 = *(char *)((longlong)plVar2 + 0x19);
  plVar3 = DAT_1803fadf0;
  while (cVar1 == '\0') {
    plVar5 = plVar2;
    if ((ulonglong)plVar2[4] < uVar7) {
      plVar2 = plVar2 + 2;
      plVar5 = plVar3;
    }
    plVar2 = (longlong *)*plVar2;
    plVar3 = plVar5;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  if ((*(char *)((longlong)plVar3 + 0x19) != '\0') || (uVar7 < (ulonglong)plVar3[4])) {
    plVar3 = DAT_1803fadf0;
  }
  if ((plVar3 == DAT_1803fadf0) || (plVar3 + 5 == (longlong *)0x0)) {
    return (longlong *)0x0;
  }
  do {
    if (*param_2 == 0) break;
    uVar6 = (uVar6 ^ *param_2) * 0x100000001b3;
    param_2 = param_2 + 1;
  } while (param_2 != (byte *)0x0);
  plVar2 = (longlong *)plVar3[5];
  plVar3 = (longlong *)plVar2[1];
  cVar1 = *(char *)((longlong)plVar3 + 0x19);
  plVar5 = plVar2;
  while (cVar1 == '\0') {
    plVar4 = plVar3;
    if ((ulonglong)plVar3[4] < uVar6) {
      plVar3 = plVar3 + 2;
      plVar4 = plVar5;
    }
    plVar3 = (longlong *)*plVar3;
    plVar5 = plVar4;
    cVar1 = *(char *)((longlong)plVar3 + 0x19);
  }
  if ((*(char *)((longlong)plVar5 + 0x19) != '\0') || (uVar6 < (ulonglong)plVar5[4])) {
    plVar5 = plVar2;
  }
  plVar3 = (longlong *)0x0;
  if (plVar5 != plVar2) {
    plVar3 = plVar5 + 5;
  }
  return plVar3;
}


)B1800e77b0",
    "acf3ff44c4a79169ba5a4f653a39392b04c545b3307efc69eb6fccd71e9fb79f",
    R"F1800e77b0C()F1800e77b0C",
    R"F1800e77b0D(DAT_1803fadf0)F1800e77b0D",
    R"F1800e77b0T()F1800e77b0T",
    R"F1800e77b0F(20: if ((param_1 == (byte *)0x0) || (param_2 == (byte *)0x0)) {
21: return (longlong *)0x0;
25: do {
26: if (*param_1 == 0) break;
33: while (cVar1 == '\0') {
35: if ((ulonglong)plVar2[4] < uVar7) {
43: if ((*(char *)((longlong)plVar3 + 0x19) != '\0') || (uVar7 < (ulonglong)plVar3[4])) {
46: if ((plVar3 == DAT_1803fadf0) || (plVar3 + 5 == (longlong *)0x0)) {
47: return (longlong *)0x0;
49: do {
50: if (*param_2 == 0) break;
58: while (cVar1 == '\0') {
60: if ((ulonglong)plVar3[4] < uVar6) {
68: if ((*(char *)((longlong)plVar5 + 0x19) != '\0') || (uVar6 < (ulonglong)plVar5[4])) {
72: if (plVar5 != plVar2) {
75: return plVar3;)F1800e77b0F",
    R"F1800e77b0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fadf0.)F1800e77b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e77b0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e77b0", "FUN_1800e77b0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint8_t * param_1{};
    [[maybe_unused]] std::uint8_t * param_2{};
    [[maybe_unused]] char cVar1{};
    [[maybe_unused]] std::int64_t * plVar2{};
    [[maybe_unused]] std::int64_t * plVar3{};
    [[maybe_unused]] std::int64_t * plVar4{};
    [[maybe_unused]] std::int64_t * plVar5{};
    [[maybe_unused]] std::uint64_t uVar6{};
    [[maybe_unused]] std::uint64_t uVar7{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fadf0.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar3 == DAT_1803fadf0) || (plVar3 + 5 == (longlong *)0x0)) [reason: unresolved global storage/width]
    trace.data_ref("DAT_1803fadf0", static_cast<const void*>(&image::DAT_1803fadf0));
    // body sha256: acf3ff44c4a79169ba5a4f653a39392b04c545b3307efc69eb6fccd71e9fb79f
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("char cVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("longlong *plVar4;");
            trace.statement("longlong *plVar5;");
            trace.statement("ulonglong uVar6;");
            trace.statement("ulonglong uVar7;");
            if (trace.checked_condition("if ((param_1 == (byte *)0x0) || (param_2 == (byte *)0x0))", [&]() -> bool { return static_cast<bool>((param_1 == (byte *)0x0) || (param_2 == (byte *)0x0)); })) {
                trace.statement("return (longlong *)0x0;");
            }
            trace.statement("uVar6 = 0x14650fb0739d0383;");
            trace.statement("uVar7 = 0x14650fb0739d0383;");
            do {
                if (trace.condition("if (*param_1 == 0) break; uVar7 = (uVar7 ^ *param_1) * 0x100000001b3; param_1 = param_1 + 1; } while (param_1 != (byte *)0x0); plVar2 = (longlong *)DAT_1803fadf0[1]; cVar1 = *(char *)((longlong)plVar2 + 0x19); plVar3 = DAT_1803fadf0; while (cVar1 == '\\0')")) {
                    trace.statement("plVar5 = plVar2;");
                    if (trace.checked_condition("if ((ulonglong)plVar2[4] < uVar7)", [&]() -> bool { return static_cast<bool>(static_cast<std::uint64_t>(plVar2[4]) < uVar7); })) {
                        trace.statement("plVar2 = plVar2 + 2;");
                        trace.statement("plVar5 = plVar3;");
                    }
                    trace.statement("plVar2 = (longlong *)*plVar2;");
                    trace.statement("plVar3 = plVar5;");
                    trace.statement("cVar1 = *(char *)((longlong)plVar2 + 0x19);");
                }
                if (trace.checked_condition("if ((*(char *)((longlong)plVar3 + 0x19) != '\\0') || (uVar7 < (ulonglong)plVar3[4]))", [&]() -> bool { return static_cast<bool>((load_at<char>(reinterpret_cast<std::int64_t>(plVar3) + 0x19, 0) != '\0') || (uVar7 < static_cast<std::uint64_t>(plVar3[4]))); })) {
                    trace.statement("plVar3 = DAT_1803fadf0;");
                }
                if (trace.condition("if ((plVar3 == DAT_1803fadf0) || (plVar3 + 5 == (longlong *)0x0))")) {
                    trace.statement("return (longlong *)0x0;");
                }
                do {
                    if (trace.condition("if (*param_2 == 0) break; uVar6 = (uVar6 ^ *param_2) * 0x100000001b3; param_2 = param_2 + 1; } while (param_2 != (byte *)0x0); plVar2 = (longlong *)plVar3[5]; plVar3 = (longlong *)plVar2[1]; cVar1 = *(char *)((longlong)plVar3 + 0x19); plVar5 = plVar2; while (cVar1 == '\\0')")) {
                        trace.statement("plVar4 = plVar3;");
                        if (trace.checked_condition("if ((ulonglong)plVar3[4] < uVar6)", [&]() -> bool { return static_cast<bool>(static_cast<std::uint64_t>(plVar3[4]) < uVar6); })) {
                            trace.statement("plVar3 = plVar3 + 2;");
                            trace.statement("plVar4 = plVar5;");
                        }
                        trace.statement("plVar3 = (longlong *)*plVar3;");
                        trace.statement("plVar5 = plVar4;");
                        trace.statement("cVar1 = *(char *)((longlong)plVar3 + 0x19);");
                    }
                    if (trace.checked_condition("if ((*(char *)((longlong)plVar5 + 0x19) != '\\0') || (uVar6 < (ulonglong)plVar5[4]))", [&]() -> bool { return static_cast<bool>((load_at<char>(reinterpret_cast<std::int64_t>(plVar5) + 0x19, 0) != '\0') || (uVar6 < static_cast<std::uint64_t>(plVar5[4]))); })) {
                        trace.statement("plVar5 = plVar2;");
                    }
                    trace.statement("plVar3 = (longlong *)0x0;");
                    if (trace.checked_condition("if (plVar5 != plVar2)", [&]() -> bool { return static_cast<bool>(plVar5 != plVar2); })) {
                        trace.statement("plVar3 = plVar5 + 5;");
                    }
                    trace.statement("return plVar3;");
                } while (trace.loop_condition("do/while"));
            } while (trace.loop_condition("do/while"));
        }
    return kFunction_0x1800e77b0;
}

// 0x1800e78f0 FUN_1800e78f0
// source: re/dump/decompile/0x1800e78f0_FUN_1800e78f0.c
// size: 125 bytes; thunk: false
// body sha256: b471ba3dfa6c45cd7fabf023f85dd6afc70e1d61d29aeb27e2fe0a82458060a7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e78f0{
    "0x1800e78f0",
    "FUN_1800e78f0",
    R"F1800e78f0S(undefined FUN_1800e78f0())F1800e78f0S",
    R"B1800e78f0(// 0x1800e78f0  FUN_1800e78f0
// size=125 thunk=false
// signature: undefined FUN_1800e78f0()
// status: ok


undefined1 FUN_1800e78f0(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  TypeDescriptor *pTVar3;
  ulonglong uVar4;
  TypeDescriptor *pTVar5;
  
  lVar2 = FUN_1800e77b0(param_1,"enabled");
  if (lVar2 != 0) {
    pTVar5 = (TypeDescriptor *)(*(ulonglong *)(lVar2 + 0x48) & 0xfffffffffffffffc);
    pTVar3 = &.X::RTTI_Type_Descriptor;
    if (pTVar5 != (TypeDescriptor *)0x0) {
      pTVar3 = pTVar5;
    }
    iVar1 = __std_type_info_compare(&pTVar3->spare,0x1803eddb8);
    if (iVar1 == 0) {
      if (((undefined1 *)(lVar2 + 0x10) != (undefined1 *)0x0) &&
         (uVar4 = *(ulonglong *)(lVar2 + 0x48) & 0xfffffffffffffffc, uVar4 != 0)) {
        iVar1 = __std_type_info_compare(uVar4 + 8,0x1803eddb8);
        if (iVar1 == 0) {
          return *(undefined1 *)(lVar2 + 0x10);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_180014070();
    }
  }
  return 0;
}


)B1800e78f0",
    "b471ba3dfa6c45cd7fabf023f85dd6afc70e1d61d29aeb27e2fe0a82458060a7",
    R"F1800e78f0C(FUN_180014070
FUN_1800e77b0)F1800e78f0C",
    R"F1800e78f0D()F1800e78f0D",
    R"F1800e78f0T("enabled")F1800e78f0T",
    R"F1800e78f0F(17: if (lVar2 != 0) {
20: if (pTVar5 != (TypeDescriptor *)0x0) {
24: if (iVar1 == 0) {
25: if (((undefined1 *)(lVar2 + 0x10) != (undefined1 *)0x0) &&
28: if (iVar1 == 0) {
29: return *(undefined1 *)(lVar2 + 0x10);
36: return 0;)F1800e78f0F",
    R"F1800e78f0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1800e78f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e78f0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e78f0", "FUN_1800e78f0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int32_t iVar1{};
    [[maybe_unused]] std::int64_t lVar2{};
    [[maybe_unused]] std::uint64_t uVar4{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if (pTVar5 != (TypeDescriptor *)0x0) [reason: pointer-cast target not proven]
    // TODO: call arguments not type-recovered for __std_type_info_compare: &pTVar3->spare,0x1803eddb8 [reason: unknown aggregate layout]
    trace.call_arguments("FUN_1800e77b0", param_1, "enabled");
    trace.call_arguments("__std_type_info_compare", uVar4 + 8, 0x1803eddb8);
    trace.call_arguments("FUN_180014070");
    trace.call_target("FUN_180014070", reinterpret_cast<const void*>(&image::FUN_180014070));
    trace.call_target("FUN_1800e77b0", reinterpret_cast<const void*>(&image::FUN_1800e77b0));
    trace.string_literal("enabled");
    // body sha256: b471ba3dfa6c45cd7fabf023f85dd6afc70e1d61d29aeb27e2fe0a82458060a7
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("int iVar1;");
            trace.statement("longlong lVar2;");
            trace.statement("TypeDescriptor *pTVar3;");
            trace.statement("ulonglong uVar4;");
            trace.statement("TypeDescriptor *pTVar5;");
            trace.statement("lVar2 = FUN_1800e77b0(param_1,\"enabled\");");
            if (trace.checked_condition("if (lVar2 != 0)", [&]() -> bool { return static_cast<bool>(lVar2 != 0); })) {
                trace.statement("pTVar5 = (TypeDescriptor *)(*(ulonglong *)(lVar2 + 0x48) & 0xfffffffffffffffc);");
                trace.statement("pTVar3 = &.X::RTTI_Type_Descriptor;");
                if (trace.condition("if (pTVar5 != (TypeDescriptor *)0x0)")) {
                    trace.statement("pTVar3 = pTVar5;");
                }
                trace.statement("iVar1 = __std_type_info_compare(&pTVar3->spare,0x1803eddb8);");
                if (trace.checked_condition("if (iVar1 == 0)", [&]() -> bool { return static_cast<bool>(iVar1 == 0); })) {
                    if (trace.condition("if (((undefined1 *)(lVar2 + 0x10) != (undefined1 *)0x0) && (uVar4 = *(ulonglong *)(lVar2 + 0x48) & 0xfffffffffffffffc, uVar4 != 0))")) {
                        trace.statement("iVar1 = __std_type_info_compare(uVar4 + 8,0x1803eddb8);");
                        if (trace.checked_condition("if (iVar1 == 0)", [&]() -> bool { return static_cast<bool>(iVar1 == 0); })) {
                            trace.statement("return *(undefined1 *)(lVar2 + 0x10);");
                        }
                    }
                    trace.statement("FUN_180014070();");
                }
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e78f0;
}

// 0x1800e7970 FUN_1800e7970
// source: re/dump/decompile/0x1800e7970_FUN_1800e7970.c
// size: 169 bytes; thunk: false
// body sha256: 27848c366720b3fa1fe4f67fb9afa239c4ca01b257cb5d44e9a8b1cd93034c31
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e7970{
    "0x1800e7970",
    "FUN_1800e7970",
    R"F1800e7970S(undefined FUN_1800e7970())F1800e7970S",
    R"B1800e7970(// 0x1800e7970  FUN_1800e7970
// size=169 thunk=false
// signature: undefined FUN_1800e7970()
// status: ok


undefined8 FUN_1800e7970(undefined8 param_1,undefined8 param_2,byte param_3)

{
  int iVar1;
  longlong lVar2;
  TypeDescriptor *pTVar3;
  TypeDescriptor *pTVar4;
  ulonglong local_48 [7];
  TypeDescriptor *pTStack_10;
  
  lVar2 = FUN_1800e77b0(param_1,"enabled");
  if (lVar2 != 0) {
    pTVar3 = (TypeDescriptor *)(*(ulonglong *)(lVar2 + 0x48) & 0xfffffffffffffffc);
    pTVar4 = &.X::RTTI_Type_Descriptor;
    if (pTVar3 != (TypeDescriptor *)0x0) {
      pTVar4 = pTVar3;
    }
    iVar1 = __std_type_info_compare(&pTVar4->spare,0x1803eddb8);
    if (iVar1 == 0) {
      local_48[1] = 0;
      local_48[2] = 0;
      local_48[3] = 0;
      local_48[4] = 0;
      local_48[5] = 0;
      local_48[6] = 0;
      local_48[0] = (ulonglong)param_3;
      pTStack_10 = &._N::RTTI_Type_Descriptor;
      FUN_180014200(lVar2 + 0x10,local_48);
      return 1;
    }
  }
  return 0;
}


)B1800e7970",
    "27848c366720b3fa1fe4f67fb9afa239c4ca01b257cb5d44e9a8b1cd93034c31",
    R"F1800e7970C(FUN_180014200
FUN_1800e77b0)F1800e7970C",
    R"F1800e7970D()F1800e7970D",
    R"F1800e7970T("enabled")F1800e7970T",
    R"F1800e7970F(18: if (lVar2 != 0) {
21: if (pTVar3 != (TypeDescriptor *)0x0) {
25: if (iVar1 == 0) {
35: return 1;
38: return 0;)F1800e7970F",
    R"F1800e7970U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1800e7970U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e7970() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e7970", "FUN_1800e7970");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::uint64_t param_2{};
    [[maybe_unused]] std::uint8_t param_3{};
    [[maybe_unused]] std::int32_t iVar1{};
    [[maybe_unused]] std::int64_t lVar2{};
    [[maybe_unused]] std::uint64_t local_48[7]{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if (pTVar3 != (TypeDescriptor *)0x0) [reason: pointer-cast target not proven]
    // TODO: call arguments not type-recovered for __std_type_info_compare: &pTVar4->spare,0x1803eddb8 [reason: unknown aggregate layout]
    trace.call_arguments("FUN_1800e77b0", param_1, "enabled");
    trace.call_arguments("FUN_180014200", lVar2 + 0x10, local_48);
    trace.call_target("FUN_180014200", reinterpret_cast<const void*>(&image::FUN_180014200));
    trace.call_target("FUN_1800e77b0", reinterpret_cast<const void*>(&image::FUN_1800e77b0));
    trace.string_literal("enabled");
    // body sha256: 27848c366720b3fa1fe4f67fb9afa239c4ca01b257cb5d44e9a8b1cd93034c31
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("int iVar1;");
            trace.statement("longlong lVar2;");
            trace.statement("TypeDescriptor *pTVar3;");
            trace.statement("TypeDescriptor *pTVar4;");
            trace.statement("ulonglong local_48 [7];");
            trace.statement("TypeDescriptor *pTStack_10;");
            trace.statement("lVar2 = FUN_1800e77b0(param_1,\"enabled\");");
            if (trace.checked_condition("if (lVar2 != 0)", [&]() -> bool { return static_cast<bool>(lVar2 != 0); })) {
                trace.statement("pTVar3 = (TypeDescriptor *)(*(ulonglong *)(lVar2 + 0x48) & 0xfffffffffffffffc);");
                trace.statement("pTVar4 = &.X::RTTI_Type_Descriptor;");
                if (trace.condition("if (pTVar3 != (TypeDescriptor *)0x0)")) {
                    trace.statement("pTVar4 = pTVar3;");
                }
                trace.statement("iVar1 = __std_type_info_compare(&pTVar4->spare,0x1803eddb8);");
                if (trace.checked_condition("if (iVar1 == 0)", [&]() -> bool { return static_cast<bool>(iVar1 == 0); })) {
                    trace.statement("local_48[1] = 0;");
                    trace.statement("local_48[2] = 0;");
                    trace.statement("local_48[3] = 0;");
                    trace.statement("local_48[4] = 0;");
                    trace.statement("local_48[5] = 0;");
                    trace.statement("local_48[6] = 0;");
                    trace.statement("local_48[0] = (ulonglong)param_3;");
                    trace.statement("pTStack_10 = &._N::RTTI_Type_Descriptor;");
                    trace.statement("FUN_180014200(lVar2 + 0x10,local_48);");
                    trace.statement("return 1;");
                }
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e7970;
}

// 0x1800e7a20 FUN_1800e7a20
// source: re/dump/decompile/0x1800e7a20_FUN_1800e7a20.c
// size: 171 bytes; thunk: false
// body sha256: c8dda8cbc579f09b1d2d4d8276656f237a11af72adbf87600d34bbd08ac41537
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e7a20{
    "0x1800e7a20",
    "FUN_1800e7a20",
    R"F1800e7a20S(undefined FUN_1800e7a20())F1800e7a20S",
    R"B1800e7a20(// 0x1800e7a20  FUN_1800e7a20
// size=171 thunk=false
// signature: undefined FUN_1800e7a20()
// status: ok


undefined8 FUN_1800e7a20(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  TypeDescriptor *pTVar3;
  TypeDescriptor *pTVar4;
  undefined4 local_48;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined8 local_34;
  undefined8 uStack_2c;
  undefined8 local_24;
  undefined8 uStack_1c;
  undefined4 local_14;
  TypeDescriptor *local_10;
  
  lVar2 = FUN_1800e77b0();
  if (lVar2 != 0) {
    pTVar3 = (TypeDescriptor *)(*(ulonglong *)(lVar2 + 0x48) & 0xfffffffffffffffc);
    pTVar4 = &.X::RTTI_Type_Descriptor;
    if (pTVar3 != (TypeDescriptor *)0x0) {
      pTVar4 = pTVar3;
    }
    iVar1 = __std_type_info_compare(&pTVar4->spare,0x1803edf28);
    if (iVar1 == 0) {
      local_44 = 0;
      uStack_3c = 0;
      local_34 = 0;
      uStack_2c = 0;
      local_24 = 0;
      uStack_1c = 0;
      local_14 = 0;
      local_10 = &.H::RTTI_Type_Descriptor;
      local_48 = param_3;
      FUN_180014200(lVar2 + 0x10,&local_48);
      return 1;
    }
  }
  return 0;
}


)B1800e7a20",
    "c8dda8cbc579f09b1d2d4d8276656f237a11af72adbf87600d34bbd08ac41537",
    R"F1800e7a20C(FUN_180014200
FUN_1800e77b0)F1800e7a20C",
    R"F1800e7a20D()F1800e7a20D",
    R"F1800e7a20T()F1800e7a20T",
    R"F1800e7a20F(25: if (lVar2 != 0) {
28: if (pTVar3 != (TypeDescriptor *)0x0) {
32: if (iVar1 == 0) {
43: return 1;
46: return 0;)F1800e7a20F",
    R"F1800e7a20U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1800e7a20U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e7a20() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e7a20", "FUN_1800e7a20");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::uint64_t param_2{};
    [[maybe_unused]] std::uint32_t param_3{};
    [[maybe_unused]] std::int32_t iVar1{};
    [[maybe_unused]] std::int64_t lVar2{};
    [[maybe_unused]] std::uint32_t local_48{};
    [[maybe_unused]] std::uint64_t local_44{};
    [[maybe_unused]] std::uint64_t uStack_3c{};
    [[maybe_unused]] std::uint64_t local_34{};
    [[maybe_unused]] std::uint64_t uStack_2c{};
    [[maybe_unused]] std::uint64_t local_24{};
    [[maybe_unused]] std::uint64_t uStack_1c{};
    [[maybe_unused]] std::uint32_t local_14{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if (pTVar3 != (TypeDescriptor *)0x0) [reason: pointer-cast target not proven]
    // TODO: call arguments not type-recovered for __std_type_info_compare: &pTVar4->spare,0x1803edf28 [reason: unknown aggregate layout]
    trace.call_arguments("FUN_1800e77b0");
    trace.call_arguments("FUN_180014200", lVar2 + 0x10, &local_48);
    trace.call_target("FUN_180014200", reinterpret_cast<const void*>(&image::FUN_180014200));
    trace.call_target("FUN_1800e77b0", reinterpret_cast<const void*>(&image::FUN_1800e77b0));
    // body sha256: c8dda8cbc579f09b1d2d4d8276656f237a11af72adbf87600d34bbd08ac41537
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("int iVar1;");
            trace.statement("longlong lVar2;");
            trace.statement("TypeDescriptor *pTVar3;");
            trace.statement("TypeDescriptor *pTVar4;");
            trace.statement("undefined4 local_48;");
            trace.statement("undefined8 local_44;");
            trace.statement("undefined8 uStack_3c;");
            trace.statement("undefined8 local_34;");
            trace.statement("undefined8 uStack_2c;");
            trace.statement("undefined8 local_24;");
            trace.statement("undefined8 uStack_1c;");
            trace.statement("undefined4 local_14;");
            trace.statement("TypeDescriptor *local_10;");
            trace.statement("lVar2 = FUN_1800e77b0();");
            if (trace.checked_condition("if (lVar2 != 0)", [&]() -> bool { return static_cast<bool>(lVar2 != 0); })) {
                trace.statement("pTVar3 = (TypeDescriptor *)(*(ulonglong *)(lVar2 + 0x48) & 0xfffffffffffffffc);");
                trace.statement("pTVar4 = &.X::RTTI_Type_Descriptor;");
                if (trace.condition("if (pTVar3 != (TypeDescriptor *)0x0)")) {
                    trace.statement("pTVar4 = pTVar3;");
                }
                trace.statement("iVar1 = __std_type_info_compare(&pTVar4->spare,0x1803edf28);");
                if (trace.checked_condition("if (iVar1 == 0)", [&]() -> bool { return static_cast<bool>(iVar1 == 0); })) {
                    trace.statement("local_44 = 0;");
                    trace.statement("uStack_3c = 0;");
                    trace.statement("local_34 = 0;");
                    trace.statement("uStack_2c = 0;");
                    trace.statement("local_24 = 0;");
                    trace.statement("uStack_1c = 0;");
                    trace.statement("local_14 = 0;");
                    trace.statement("local_10 = &.H::RTTI_Type_Descriptor;");
                    trace.statement("local_48 = param_3;");
                    trace.statement("FUN_180014200(lVar2 + 0x10,&local_48);");
                    trace.statement("return 1;");
                }
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e7a20;
}

// 0x1800e7ad0 FUN_1800e7ad0
// source: re/dump/decompile/0x1800e7ad0_FUN_1800e7ad0.c
// size: 465 bytes; thunk: false
// body sha256: 3eddacc23d3350be5a4e86973ae155ad200af7d960864e61473a1bd9c3e9ce6a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e7ad0{
    "0x1800e7ad0",
    "FUN_1800e7ad0",
    R"F1800e7ad0S(undefined FUN_1800e7ad0())F1800e7ad0S",
    R"B1800e7ad0(// 0x1800e7ad0  FUN_1800e7ad0
// size=465 thunk=false
// signature: undefined FUN_1800e7ad0()
// status: ok


undefined8 FUN_1800e7ad0(longlong *param_1,undefined8 param_2,float *param_3)

{
  longlong lVar1;
  double dVar2;
  char cVar3;
  short sVar4;
  uint uVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_58 [12];
  
  if (param_1 != (longlong *)0x0) {
    cVar3 = (**(code **)(*param_1 + 0x138))(param_1,1,5);
    if (cVar3 == '\0') {
      cVar3 = (**(code **)(*param_1 + 0x138))(param_1,1,3);
      if (cVar3 == '\0') {
        return 0;
      }
      cVar3 = (**(code **)(*param_1 + 0x138))(param_1,2,3);
      if (cVar3 == '\0') {
        return 0;
      }
      cVar3 = (**(code **)(*param_1 + 0x138))(param_1,3,3);
      if (cVar3 == '\0') {
        return 0;
      }
      dVar2 = (double)(**(code **)(*param_1 + 0xc0))(param_1,3);
      fVar8 = (float)dVar2;
      dVar2 = (double)(**(code **)(*param_1 + 0xc0))(param_1,2);
      fVar9 = (float)dVar2;
      dVar2 = (double)(**(code **)(*param_1 + 0xc0))(param_1,1);
      fVar7 = (float)dVar2;
    }
    else {
      local_58[0] = 0.0;
      local_58[1] = 0.0;
      local_58[2] = 0.0;
      uVar6 = 0;
      do {
        (**(code **)(*param_1 + 0x20))(param_1,1,(&PTR_DAT_180338d10)[uVar6]);
        cVar3 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,3);
        if (cVar3 == '\0') {
          (**(code **)(*param_1 + 0x10))(param_1,1);
          return 0;
        }
        dVar2 = (double)(**(code **)(*param_1 + 0xc0))(param_1,0xffffffff);
        lVar1 = *param_1;
        local_58[uVar6] = (float)dVar2;
        (**(code **)(lVar1 + 0x10))(param_1,1);
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while ((int)uVar5 < 3);
      fVar7 = local_58[0];
      fVar8 = local_58[2];
      fVar9 = local_58[1];
    }
    *param_3 = fVar7;
    param_3[1] = fVar9;
    param_3[2] = fVar8;
    sVar4 = _fdclass();
    if (((sVar4 < 1) && (sVar4 = _fdclass(fVar9), sVar4 < 1)) &&
       (sVar4 = _fdclass(fVar8), sVar4 < 1)) {
      return 1;
    }
  }
  return 0;
}


)B1800e7ad0",
    "3eddacc23d3350be5a4e86973ae155ad200af7d960864e61473a1bd9c3e9ce6a",
    R"F1800e7ad0C()F1800e7ad0C",
    R"F1800e7ad0D(PTR_DAT_180338d10)F1800e7ad0D",
    R"F1800e7ad0T()F1800e7ad0T",
    R"F1800e7ad0F(21: if (param_1 != (longlong *)0x0) {
23: if (cVar3 == '\0') {
25: if (cVar3 == '\0') {
26: return 0;
29: if (cVar3 == '\0') {
30: return 0;
33: if (cVar3 == '\0') {
34: return 0;
43: else {
48: do {
51: if (cVar3 == '\0') {
53: return 0;
70: if (((sVar4 < 1) && (sVar4 = _fdclass(fVar9), sVar4 < 1)) &&
72: return 1;
75: return 0;)F1800e7ad0F",
    R"F1800e7ad0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference PTR_DAT_180338d10.
TODO: resolve the indirect call in body 22: cVar3 = (**(code **)(*param_1 + 0x138))(param_1,1,5);.
TODO: resolve the indirect call in body 24: cVar3 = (**(code **)(*param_1 + 0x138))(param_1,1,3);.
TODO: resolve the indirect call in body 28: cVar3 = (**(code **)(*param_1 + 0x138))(param_1,2,3);.
TODO: resolve the indirect call in body 32: cVar3 = (**(code **)(*param_1 + 0x138))(param_1,3,3);.
TODO: resolve the indirect call in body 36: dVar2 = (double)(**(code **)(*param_1 + 0xc0))(param_1,3);.
TODO: resolve the indirect call in body 38: dVar2 = (double)(**(code **)(*param_1 + 0xc0))(param_1,2);.
TODO: resolve the indirect call in body 40: dVar2 = (double)(**(code **)(*param_1 + 0xc0))(param_1,1);.
TODO: resolve the indirect call in body 49: (**(code **)(*param_1 + 0x20))(param_1,1,(&PTR_DAT_180338d10)[uVar6]);.
TODO: resolve the indirect call in body 50: cVar3 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,3);.
TODO: resolve the indirect call in body 52: (**(code **)(*param_1 + 0x10))(param_1,1);.
TODO: resolve the indirect call in body 55: dVar2 = (double)(**(code **)(*param_1 + 0xc0))(param_1,0xffffffff);.
TODO: resolve the indirect call in body 58: (**(code **)(lVar1 + 0x10))(param_1,1);.)F1800e7ad0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e7ad0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e7ad0", "FUN_1800e7ad0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t * param_1{};
    [[maybe_unused]] std::uint64_t param_2{};
    [[maybe_unused]] float * param_3{};
    [[maybe_unused]] std::int64_t lVar1{};
    [[maybe_unused]] double dVar2{};
    [[maybe_unused]] char cVar3{};
    [[maybe_unused]] std::int16_t sVar4{};
    [[maybe_unused]] std::uint32_t uVar5{};
    [[maybe_unused]] std::uint64_t uVar6{};
    [[maybe_unused]] float fVar7{};
    [[maybe_unused]] float fVar8{};
    [[maybe_unused]] float fVar9{};
    [[maybe_unused]] float local_58[12]{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for PTR_DAT_180338d10.
    // TODO: resolve the indirect call in body 22: cVar3 = (**(code **)(*param_1 + 0x138))(param_1,1,5);.
    // TODO: resolve the indirect call in body 24: cVar3 = (**(code **)(*param_1 + 0x138))(param_1,1,3);.
    // TODO: resolve the indirect call in body 28: cVar3 = (**(code **)(*param_1 + 0x138))(param_1,2,3);.
    // TODO: resolve the indirect call in body 32: cVar3 = (**(code **)(*param_1 + 0x138))(param_1,3,3);.
    // TODO: resolve the indirect call in body 36: dVar2 = (double)(**(code **)(*param_1 + 0xc0))(param_1,3);.
    // TODO: resolve the indirect call in body 38: dVar2 = (double)(**(code **)(*param_1 + 0xc0))(param_1,2);.
    // TODO: resolve the indirect call in body 40: dVar2 = (double)(**(code **)(*param_1 + 0xc0))(param_1,1);.
    // TODO: resolve the indirect call in body 49: (**(code **)(*param_1 + 0x20))(param_1,1,(&PTR_DAT_180338d10)[uVar6]);.
    // TODO: resolve the indirect call in body 50: cVar3 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,3);.
    // TODO: resolve the indirect call in body 52: (**(code **)(*param_1 + 0x10))(param_1,1);.
    // TODO: resolve the indirect call in body 55: dVar2 = (double)(**(code **)(*param_1 + 0xc0))(param_1,0xffffffff);.
    // TODO: resolve the indirect call in body 58: (**(code **)(lVar1 + 0x10))(param_1,1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_fdclass");
    trace.call_arguments("_fdclass", fVar9);
    trace.call_arguments("_fdclass", fVar8);
    trace.data_ref("PTR_DAT_180338d10", static_cast<const void*>(&image::PTR_DAT_180338d10));
    // body sha256: 3eddacc23d3350be5a4e86973ae155ad200af7d960864e61473a1bd9c3e9ce6a
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong lVar1;");
            trace.statement("double dVar2;");
            trace.statement("char cVar3;");
            trace.statement("short sVar4;");
            trace.statement("uint uVar5;");
            trace.statement("ulonglong uVar6;");
            trace.statement("float fVar7;");
            trace.statement("float fVar8;");
            trace.statement("float fVar9;");
            trace.statement("float local_58 [12];");
            if (trace.checked_condition("if (param_1 != (longlong *)0x0)", [&]() -> bool { return static_cast<bool>(param_1 != (longlong *)0x0); })) {
                trace.statement("cVar3 = (**(code **)(*param_1 + 0x138))(param_1,1,5);");
                if (trace.checked_condition("if (cVar3 == '\\0')", [&]() -> bool { return static_cast<bool>(cVar3 == '\0'); })) {
                    trace.statement("cVar3 = (**(code **)(*param_1 + 0x138))(param_1,1,3);");
                    if (trace.checked_condition("if (cVar3 == '\\0')", [&]() -> bool { return static_cast<bool>(cVar3 == '\0'); })) {
                        trace.statement("return 0;");
                    }
                    trace.statement("cVar3 = (**(code **)(*param_1 + 0x138))(param_1,2,3);");
                    if (trace.checked_condition("if (cVar3 == '\\0')", [&]() -> bool { return static_cast<bool>(cVar3 == '\0'); })) {
                        trace.statement("return 0;");
                    }
                    trace.statement("cVar3 = (**(code **)(*param_1 + 0x138))(param_1,3,3);");
                    if (trace.checked_condition("if (cVar3 == '\\0')", [&]() -> bool { return static_cast<bool>(cVar3 == '\0'); })) {
                        trace.statement("return 0;");
                    }
                    trace.statement("dVar2 = (double)(**(code **)(*param_1 + 0xc0))(param_1,3);");
                    trace.statement("fVar8 = (float)dVar2;");
                    trace.statement("dVar2 = (double)(**(code **)(*param_1 + 0xc0))(param_1,2);");
                    trace.statement("fVar9 = (float)dVar2;");
                    trace.statement("dVar2 = (double)(**(code **)(*param_1 + 0xc0))(param_1,1);");
                    trace.statement("fVar7 = (float)dVar2;");
                } else {
                trace.statement("local_58[0] = 0.0;");
                trace.statement("local_58[1] = 0.0;");
                trace.statement("local_58[2] = 0.0;");
                trace.statement("uVar6 = 0;");
                do {
                    trace.statement("(**(code **)(*param_1 + 0x20))(param_1,1,(&PTR_DAT_180338d10)[uVar6]);");
                    trace.statement("cVar3 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,3);");
                    if (trace.checked_condition("if (cVar3 == '\\0')", [&]() -> bool { return static_cast<bool>(cVar3 == '\0'); })) {
                        trace.statement("(**(code **)(*param_1 + 0x10))(param_1,1);");
                        trace.statement("return 0;");
                    }
                    trace.statement("dVar2 = (double)(**(code **)(*param_1 + 0xc0))(param_1,0xffffffff);");
                    trace.statement("lVar1 = *param_1;");
                    trace.statement("local_58[uVar6] = (float)dVar2;");
                    trace.statement("(**(code **)(lVar1 + 0x10))(param_1,1);");
                    trace.statement("uVar5 = (int)uVar6 + 1;");
                    trace.statement("uVar6 = (ulonglong)uVar5;");
                } while (trace.loop_condition("while ((int)uVar5 < 3);"));
                trace.statement("fVar7 = local_58[0];");
                trace.statement("fVar8 = local_58[2];");
                trace.statement("fVar9 = local_58[1];");
                }
                trace.statement("*param_3 = fVar7;");
                trace.statement("param_3[1] = fVar9;");
                trace.statement("param_3[2] = fVar8;");
                trace.statement("sVar4 = _fdclass();");
                if (trace.condition("if (((sVar4 < 1) && (sVar4 = _fdclass(fVar9), sVar4 < 1)) && (sVar4 = _fdclass(fVar8), sVar4 < 1))")) {
                    trace.statement("return 1;");
                }
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e7ad0;
}

// 0x1800e7cb0 FUN_1800e7cb0
// source: re/dump/decompile/0x1800e7cb0_FUN_1800e7cb0.c
// size: 185 bytes; thunk: false
// body sha256: 780385dc2886bf572d9c71d56e29c6f8b9e03ba7c3eb66aaf137a37f8468bc90
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e7cb0{
    "0x1800e7cb0",
    "FUN_1800e7cb0",
    R"F1800e7cb0S(undefined FUN_1800e7cb0())F1800e7cb0S",
    R"B1800e7cb0(// 0x1800e7cb0  FUN_1800e7cb0
// size=185 thunk=false
// signature: undefined FUN_1800e7cb0()
// status: ok


void FUN_1800e7cb0(longlong *param_1,undefined8 param_2,float *param_3)

{
  (**(code **)(*param_1 + 0x30))();
  (**(code **)(*param_1 + 0xf0))(param_1,(double)*param_3);
  (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18034ede4);
  (**(code **)(*param_1 + 0xf0))(param_1,(double)param_3[1]);
  (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18034ede8);
  (**(code **)(*param_1 + 0xf0))(param_1,(double)param_3[2]);
  (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18034edec);
                    /* WARNING: Could not recover jumptable at 0x0001800e7d65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,param_2);
  return;
}


)B1800e7cb0",
    "780385dc2886bf572d9c71d56e29c6f8b9e03ba7c3eb66aaf137a37f8468bc90",
    R"F1800e7cb0C()F1800e7cb0C",
    R"F1800e7cb0D(DAT_18034ede4
DAT_18034ede8
DAT_18034edec)F1800e7cb0D",
    R"F1800e7cb0T()F1800e7cb0T",
    R"F1800e7cb0F(20: return;)F1800e7cb0F",
    R"F1800e7cb0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18034ede4.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18034ede8.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18034edec.
TODO: resolve the indirect call in body 10: (**(code **)(*param_1 + 0x30))();.
TODO: resolve the indirect call in body 11: (**(code **)(*param_1 + 0xf0))(param_1,(double)*param_3);.
TODO: resolve the indirect call in body 12: (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18034ede4);.
TODO: resolve the indirect call in body 13: (**(code **)(*param_1 + 0xf0))(param_1,(double)param_3[1]);.
TODO: resolve the indirect call in body 14: (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18034ede8);.
TODO: resolve the indirect call in body 15: (**(code **)(*param_1 + 0xf0))(param_1,(double)param_3[2]);.
TODO: resolve the indirect call in body 16: (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18034edec);.
TODO: resolve the indirect call in body 19: (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,param_2);.)F1800e7cb0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e7cb0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e7cb0", "FUN_1800e7cb0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t * param_1{};
    [[maybe_unused]] std::uint64_t param_2{};
    [[maybe_unused]] float * param_3{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18034ede4.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18034ede8.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18034edec.
    // TODO: resolve the indirect call in body 10: (**(code **)(*param_1 + 0x30))();.
    // TODO: resolve the indirect call in body 11: (**(code **)(*param_1 + 0xf0))(param_1,(double)*param_3);.
    // TODO: resolve the indirect call in body 12: (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18034ede4);.
    // TODO: resolve the indirect call in body 13: (**(code **)(*param_1 + 0xf0))(param_1,(double)param_3[1]);.
    // TODO: resolve the indirect call in body 14: (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18034ede8);.
    // TODO: resolve the indirect call in body 15: (**(code **)(*param_1 + 0xf0))(param_1,(double)param_3[2]);.
    // TODO: resolve the indirect call in body 16: (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18034edec);.
    // TODO: resolve the indirect call in body 19: (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,param_2);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("DAT_18034ede4", static_cast<const void*>(&image::DAT_18034ede4));
    trace.data_ref("DAT_18034ede8", static_cast<const void*>(&image::DAT_18034ede8));
    trace.data_ref("DAT_18034edec", static_cast<const void*>(&image::DAT_18034edec));
    // body sha256: 780385dc2886bf572d9c71d56e29c6f8b9e03ba7c3eb66aaf137a37f8468bc90
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("(**(code **)(*param_1 + 0x30))();");
            trace.statement("(**(code **)(*param_1 + 0xf0))(param_1,(double)*param_3);");
            trace.statement("(**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18034ede4);");
            trace.statement("(**(code **)(*param_1 + 0xf0))(param_1,(double)param_3[1]);");
            trace.statement("(**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18034ede8);");
            trace.statement("(**(code **)(*param_1 + 0xf0))(param_1,(double)param_3[2]);");
            trace.statement("(**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18034edec);");
            trace.statement("(**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,param_2);");
            trace.statement("return;");
        }
    return kFunction_0x1800e7cb0;
}

// 0x1800e7d70 FUN_1800e7d70
// source: re/dump/decompile/0x1800e7d70_FUN_1800e7d70.c
// size: 1125 bytes; thunk: false
// body sha256: f23ba3464a7e670ef2cdce17dd79c836706f0e0ec3e589205da04cc76660e2a9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e7d70{
    "0x1800e7d70",
    "FUN_1800e7d70",
    R"F1800e7d70S(undefined FUN_1800e7d70())F1800e7d70S",
    R"B1800e7d70(// 0x1800e7d70  FUN_1800e7d70
// size=1125 thunk=false
// signature: undefined FUN_1800e7d70()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800e7d70(longlong *param_1,longlong param_2,int param_3,char param_4)

{
  int iVar1;
  undefined1 auStack_78 [32];
  float local_58;
  float local_54;
  float local_50;
  float local_48;
  undefined8 local_44;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  (**(code **)(*param_1 + 0x30))();
  (**(code **)(*param_1 + 0xf0))(param_1,(double)param_3);
  (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18034edf0);
  (**(code **)(*param_1 + 0xf0))(param_1,(double)*(int *)(param_2 + 0x1854));
  (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"RecordedTick");
  (**(code **)(*param_1 + 0xf0))(param_1,*(undefined8 *)(param_2 + 0x1848));
  (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"SimulationTime");
  FUN_1800e7cb0(param_1,"Origin",param_2 + 0x1858);
  FUN_1800e7cb0(param_1,&DAT_18034ee20,param_2 + 0x10);
  FUN_1800e7cb0(param_1,"Center",param_2 + 0x1c);
  FUN_1800e7cb0(param_1,"AimPoint",param_2 + 0x28);
  (**(code **)(*param_1 + 0xf0))(param_1,(double)*(int *)(param_2 + 0x34));
  (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"Hitgroup");
  (**(code **)(*param_1 + 0xf8))(param_1,*(undefined1 *)(param_2 + 0x40));
  (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"FromSnapshot");
  (**(code **)(*param_1 + 0xf8))(param_1,*(undefined1 *)(param_2 + 0x1864));
  (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"TeleportEdge");
  (**(code **)(*param_1 + 0xf8))(param_1,*(undefined1 *)(param_2 + 0x1844));
  (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"BonesValid");
  (**(code **)(*param_1 + 0xf0))(param_1,(double)*(int *)(param_2 + 0x38));
  (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"PoseCount");
  (**(code **)(*param_1 + 0xf0))(param_1,(double)*(int *)(param_2 + 0x3c));
  (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"PoseCoverage");
  if ((param_4 != '\0') && (*(char *)(param_2 + 0x1844) != '\0')) {
    (**(code **)(*param_1 + 0x30))(param_1);
    iVar1 = 0;
    do {
      local_44 = 0;
      local_48 = 0.0;
      FUN_1802d4200(param_2 + 0x44 + (longlong)iVar1 * 0x30,&local_48);
      FUN_1802d42f0(param_2 + 0x44 + (longlong)iVar1 * 0x30,3,&local_58);
      if (((local_58 != 0.0) || (local_54 != 0.0)) || (local_50 != 0.0)) {
        (**(code **)(*param_1 + 0xf0))(param_1,(double)(iVar1 + 1));
        (**(code **)(*param_1 + 0x30))(param_1);
        (**(code **)(*param_1 + 0xf0))(param_1,(double)iVar1);
        (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"BoneID");
        (**(code **)(*param_1 + 0x30))(param_1);
        (**(code **)(*param_1 + 0xf0))(param_1,(double)local_58);
        (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18034ede4);
        (**(code **)(*param_1 + 0xf0))(param_1,(double)local_54);
        (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18034ede8);
        (**(code **)(*param_1 + 0xf0))(param_1,(double)local_50);
        (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18034edec);
        (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"Origin");
        (**(code **)(*param_1 + 0x30))(param_1);
        (**(code **)(*param_1 + 0xf0))(param_1,(double)local_48);
        (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18034eea8);
        (**(code **)(*param_1 + 0xf0))(param_1,(double)(float)local_44);
        (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18034ede8);
        (**(code **)(*param_1 + 0xf0))(param_1,(double)local_44._4_4_);
        (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18033e668);
        (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"Angles");
        (**(code **)(*param_1 + 0x38))(param_1,0xfffffffd);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x80);
    (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"Bones");
  }
  return;
}


)B1800e7d70",
    "f23ba3464a7e670ef2cdce17dd79c836706f0e0ec3e589205da04cc76660e2a9",
    R"F1800e7d70C(FUN_1800e7cb0
FUN_1802d4200
FUN_1802d42f0)F1800e7d70C",
    R"F1800e7d70D(DAT_18033e668
DAT_18034ede4
DAT_18034ede8
DAT_18034edec
DAT_18034edf0
DAT_18034ee20
DAT_18034eea8
DAT_1803da4c0)F1800e7d70D",
    R"F1800e7d70T("Bones"
"Angles"
"BoneID"
"Center"
"Origin"
"AimPoint"
"Hitgroup"
"PoseCount"
"BonesValid"
"FromSnapshot"
"PoseCoverage"
"RecordedTick"
"TeleportEdge"
"SimulationTime")F1800e7d70T",
    R"F1800e7d70F(45: if ((param_4 != '\0') && (*(char *)(param_2 + 0x1844) != '\0')) {
48: do {
53: if (((local_58 != 0.0) || (local_54 != 0.0)) || (local_50 != 0.0)) {
80: return;)F1800e7d70F",
    R"F1800e7d70U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18033e668.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18034ede4.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18034ede8.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18034edec.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18034edf0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18034ee20.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18034eea8.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803da4c0.
TODO: resolve the indirect call in body 22: (**(code **)(*param_1 + 0x30))();.
TODO: resolve the indirect call in body 23: (**(code **)(*param_1 + 0xf0))(param_1,(double)param_3);.
TODO: resolve the indirect call in body 24: (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18034edf0);.
TODO: resolve the indirect call in body 25: (**(code **)(*param_1 + 0xf0))(param_1,(double)*(int *)(param_2 + 0x1854));.
TODO: resolve the indirect call in body 26: (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"RecordedTick");.
TODO: resolve the indirect call in body 27: (**(code **)(*param_1 + 0xf0))(param_1,*(undefined8 *)(param_2 + 0x1848));.
TODO: resolve the indirect call in body 28: (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"SimulationTime");.
TODO: resolve the indirect call in body 33: (**(code **)(*param_1 + 0xf0))(param_1,(double)*(int *)(param_2 + 0x34));.
TODO: resolve the indirect call in body 34: (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"Hitgroup");.
TODO: resolve the indirect call in body 35: (**(code **)(*param_1 + 0xf8))(param_1,*(undefined1 *)(param_2 + 0x40));.
TODO: resolve the indirect call in body 36: (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"FromSnapshot");.
TODO: resolve the indirect call in body 37: (**(code **)(*param_1 + 0xf8))(param_1,*(undefined1 *)(param_2 + 0x1864));.
TODO: resolve the indirect call in body 38: (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"TeleportEdge");.
TODO: resolve the indirect call in body 39: (**(code **)(*param_1 + 0xf8))(param_1,*(undefined1 *)(param_2 + 0x1844));.
TODO: resolve the indirect call in body 40: (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"BonesValid");.
TODO: resolve the indirect call in body 41: (**(code **)(*param_1 + 0xf0))(param_1,(double)*(int *)(param_2 + 0x38));.
TODO: resolve the indirect call in body 42: (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"PoseCount");.
TODO: resolve the indirect call in body 43: (**(code **)(*param_1 + 0xf0))(param_1,(double)*(int *)(param_2 + 0x3c));.
TODO: resolve the indirect call in body 44: (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"PoseCoverage");.
TODO: resolve the indirect call in body 46: (**(code **)(*param_1 + 0x30))(param_1);.
TODO: resolve the indirect call in body 54: (**(code **)(*param_1 + 0xf0))(param_1,(double)(iVar1 + 1));.
TODO: resolve the indirect call in body 55: (**(code **)(*param_1 + 0x30))(param_1);.
TODO: resolve the indirect call in body 56: (**(code **)(*param_1 + 0xf0))(param_1,(double)iVar1);.
TODO: resolve the indirect call in body 57: (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"BoneID");.
TODO: resolve the indirect call in body 58: (**(code **)(*param_1 + 0x30))(param_1);.
TODO: resolve the indirect call in body 59: (**(code **)(*param_1 + 0xf0))(param_1,(double)local_58);.
TODO: resolve the indirect call in body 60: (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18034ede4);.
TODO: resolve the indirect call in body 61: (**(code **)(*param_1 + 0xf0))(param_1,(double)local_54);.
TODO: resolve the indirect call in body 62: (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18034ede8);.
TODO: resolve the indirect call in body 63: (**(code **)(*param_1 + 0xf0))(param_1,(double)local_50);.
TODO: resolve the indirect call in body 64: (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18034edec);.
TODO: resolve the indirect call in body 65: (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"Origin");.
TODO: resolve the indirect call in body 66: (**(code **)(*param_1 + 0x30))(param_1);.
TODO: resolve the indirect call in body 67: (**(code **)(*param_1 + 0xf0))(param_1,(double)local_48);.
TODO: resolve the indirect call in body 68: (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18034eea8);.
TODO: resolve the indirect call in body 69: (**(code **)(*param_1 + 0xf0))(param_1,(double)(float)local_44);.
TODO: resolve the indirect call in body 70: (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18034ede8);.
TODO: resolve the indirect call in body 71: (**(code **)(*param_1 + 0xf0))(param_1,(double)local_44._4_4_);.
TODO: resolve the indirect call in body 72: (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18033e668);.
TODO: resolve the indirect call in body 73: (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"Angles");.
TODO: resolve the indirect call in body 74: (**(code **)(*param_1 + 0x38))(param_1,0xfffffffd);.
TODO: resolve the indirect call in body 78: (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"Bones");.)F1800e7d70U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e7d70() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e7d70", "FUN_1800e7d70");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t * param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    [[maybe_unused]] std::int32_t param_3{};
    [[maybe_unused]] char param_4{};
    [[maybe_unused]] std::int32_t iVar1{};
    [[maybe_unused]] std::uint8_t auStack_78[32]{};
    [[maybe_unused]] float local_58{};
    [[maybe_unused]] float local_54{};
    [[maybe_unused]] float local_50{};
    [[maybe_unused]] float local_48{};
    [[maybe_unused]] std::uint64_t local_44{};
    [[maybe_unused]] std::uint64_t local_38{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18033e668.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18034ede4.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18034ede8.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18034edec.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18034edf0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18034ee20.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18034eea8.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803da4c0.
    // TODO: resolve the indirect call in body 22: (**(code **)(*param_1 + 0x30))();.
    // TODO: resolve the indirect call in body 23: (**(code **)(*param_1 + 0xf0))(param_1,(double)param_3);.
    // TODO: resolve the indirect call in body 24: (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18034edf0);.
    // TODO: resolve the indirect call in body 25: (**(code **)(*param_1 + 0xf0))(param_1,(double)*(int *)(param_2 + 0x1854));.
    // TODO: resolve the indirect call in body 26: (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"RecordedTick");.
    // TODO: resolve the indirect call in body 27: (**(code **)(*param_1 + 0xf0))(param_1,*(undefined8 *)(param_2 + 0x1848));.
    // TODO: resolve the indirect call in body 28: (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"SimulationTime");.
    // TODO: resolve the indirect call in body 33: (**(code **)(*param_1 + 0xf0))(param_1,(double)*(int *)(param_2 + 0x34));.
    // TODO: resolve the indirect call in body 34: (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"Hitgroup");.
    // TODO: resolve the indirect call in body 35: (**(code **)(*param_1 + 0xf8))(param_1,*(undefined1 *)(param_2 + 0x40));.
    // TODO: resolve the indirect call in body 36: (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"FromSnapshot");.
    // TODO: resolve the indirect call in body 37: (**(code **)(*param_1 + 0xf8))(param_1,*(undefined1 *)(param_2 + 0x1864));.
    // TODO: resolve the indirect call in body 38: (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"TeleportEdge");.
    // TODO: resolve the indirect call in body 39: (**(code **)(*param_1 + 0xf8))(param_1,*(undefined1 *)(param_2 + 0x1844));.
    // TODO: resolve the indirect call in body 40: (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"BonesValid");.
    // TODO: resolve the indirect call in body 41: (**(code **)(*param_1 + 0xf0))(param_1,(double)*(int *)(param_2 + 0x38));.
    // TODO: resolve the indirect call in body 42: (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"PoseCount");.
    // TODO: resolve the indirect call in body 43: (**(code **)(*param_1 + 0xf0))(param_1,(double)*(int *)(param_2 + 0x3c));.
    // TODO: resolve the indirect call in body 44: (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"PoseCoverage");.
    // TODO: resolve the indirect call in body 46: (**(code **)(*param_1 + 0x30))(param_1);.
    // TODO: resolve the indirect call in body 54: (**(code **)(*param_1 + 0xf0))(param_1,(double)(iVar1 + 1));.
    // TODO: resolve the indirect call in body 55: (**(code **)(*param_1 + 0x30))(param_1);.
    // TODO: resolve the indirect call in body 56: (**(code **)(*param_1 + 0xf0))(param_1,(double)iVar1);.
    // TODO: resolve the indirect call in body 57: (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"BoneID");.
    // TODO: resolve the indirect call in body 58: (**(code **)(*param_1 + 0x30))(param_1);.
    // TODO: resolve the indirect call in body 59: (**(code **)(*param_1 + 0xf0))(param_1,(double)local_58);.
    // TODO: resolve the indirect call in body 60: (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18034ede4);.
    // TODO: resolve the indirect call in body 61: (**(code **)(*param_1 + 0xf0))(param_1,(double)local_54);.
    // TODO: resolve the indirect call in body 62: (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18034ede8);.
    // TODO: resolve the indirect call in body 63: (**(code **)(*param_1 + 0xf0))(param_1,(double)local_50);.
    // TODO: resolve the indirect call in body 64: (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18034edec);.
    // TODO: resolve the indirect call in body 65: (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"Origin");.
    // TODO: resolve the indirect call in body 66: (**(code **)(*param_1 + 0x30))(param_1);.
    // TODO: resolve the indirect call in body 67: (**(code **)(*param_1 + 0xf0))(param_1,(double)local_48);.
    // TODO: resolve the indirect call in body 68: (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18034eea8);.
    // TODO: resolve the indirect call in body 69: (**(code **)(*param_1 + 0xf0))(param_1,(double)(float)local_44);.
    // TODO: resolve the indirect call in body 70: (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18034ede8);.
    // TODO: resolve the indirect call in body 71: (**(code **)(*param_1 + 0xf0))(param_1,(double)local_44._4_4_);.
    // TODO: resolve the indirect call in body 72: (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18033e668);.
    // TODO: resolve the indirect call in body 73: (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"Angles");.
    // TODO: resolve the indirect call in body 74: (**(code **)(*param_1 + 0x38))(param_1,0xfffffffd);.
    // TODO: resolve the indirect call in body 78: (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"Bones");.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if (((local_58 != 0.0) || (local_54 != 0.0)) || (local_50 != 0.0)) [reason: ambiguous operand type]
    trace.call_arguments("FUN_1800e7cb0", param_1, "Origin", param_2 + 0x1858);
    trace.call_arguments("FUN_1800e7cb0", param_1, &image::DAT_18034ee20, param_2 + 0x10);
    trace.call_arguments("FUN_1800e7cb0", param_1, "Center", param_2 + 0x1c);
    trace.call_arguments("FUN_1800e7cb0", param_1, "AimPoint", param_2 + 0x28);
    trace.call_arguments("FUN_1802d4200", param_2 + 0x44 + static_cast<std::int64_t>(iVar1) * 0x30, &local_48);
    trace.call_arguments("FUN_1802d42f0", param_2 + 0x44 + static_cast<std::int64_t>(iVar1) * 0x30, 3, &local_58);
    trace.call_target("FUN_1800e7cb0", reinterpret_cast<const void*>(&image::FUN_1800e7cb0));
    trace.call_target("FUN_1802d4200", reinterpret_cast<const void*>(&image::FUN_1802d4200));
    trace.call_target("FUN_1802d42f0", reinterpret_cast<const void*>(&image::FUN_1802d42f0));
    trace.data_ref("DAT_18033e668", static_cast<const void*>(&image::DAT_18033e668));
    trace.data_ref("DAT_18034ede4", static_cast<const void*>(&image::DAT_18034ede4));
    trace.data_ref("DAT_18034ede8", static_cast<const void*>(&image::DAT_18034ede8));
    trace.data_ref("DAT_18034edec", static_cast<const void*>(&image::DAT_18034edec));
    trace.data_ref("DAT_18034edf0", static_cast<const void*>(&image::DAT_18034edf0));
    trace.data_ref("DAT_18034ee20", static_cast<const void*>(&image::DAT_18034ee20));
    trace.data_ref("DAT_18034eea8", static_cast<const void*>(&image::DAT_18034eea8));
    trace.data_ref("DAT_1803da4c0", static_cast<const void*>(&image::DAT_1803da4c0));
    trace.string_literal("Bones");
    trace.string_literal("Angles");
    trace.string_literal("BoneID");
    trace.string_literal("Center");
    trace.string_literal("Origin");
    trace.string_literal("AimPoint");
    trace.string_literal("Hitgroup");
    trace.string_literal("PoseCount");
    trace.string_literal("BonesValid");
    trace.string_literal("FromSnapshot");
    trace.string_literal("PoseCoverage");
    trace.string_literal("RecordedTick");
    trace.string_literal("TeleportEdge");
    trace.string_literal("SimulationTime");
    // body sha256: f23ba3464a7e670ef2cdce17dd79c836706f0e0ec3e589205da04cc76660e2a9
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("int iVar1;");
            trace.statement("undefined1 auStack_78 [32];");
            trace.statement("float local_58;");
            trace.statement("float local_54;");
            trace.statement("float local_50;");
            trace.statement("float local_48;");
            trace.statement("undefined8 local_44;");
            trace.statement("ulonglong local_38;");
            trace.statement("local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_78;");
            trace.statement("(**(code **)(*param_1 + 0x30))();");
            trace.statement("(**(code **)(*param_1 + 0xf0))(param_1,(double)param_3);");
            trace.statement("(**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18034edf0);");
            trace.statement("(**(code **)(*param_1 + 0xf0))(param_1,(double)*(int *)(param_2 + 0x1854));");
            trace.statement("(**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,\"RecordedTick\");");
            trace.statement("(**(code **)(*param_1 + 0xf0))(param_1,*(undefined8 *)(param_2 + 0x1848));");
            trace.statement("(**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,\"SimulationTime\");");
            trace.statement("FUN_1800e7cb0(param_1,\"Origin\",param_2 + 0x1858);");
            trace.statement("FUN_1800e7cb0(param_1,&DAT_18034ee20,param_2 + 0x10);");
            trace.statement("FUN_1800e7cb0(param_1,\"Center\",param_2 + 0x1c);");
            trace.statement("FUN_1800e7cb0(param_1,\"AimPoint\",param_2 + 0x28);");
            trace.statement("(**(code **)(*param_1 + 0xf0))(param_1,(double)*(int *)(param_2 + 0x34));");
            trace.statement("(**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,\"Hitgroup\");");
            trace.statement("(**(code **)(*param_1 + 0xf8))(param_1,*(undefined1 *)(param_2 + 0x40));");
            trace.statement("(**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,\"FromSnapshot\");");
            trace.statement("(**(code **)(*param_1 + 0xf8))(param_1,*(undefined1 *)(param_2 + 0x1864));");
            trace.statement("(**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,\"TeleportEdge\");");
            trace.statement("(**(code **)(*param_1 + 0xf8))(param_1,*(undefined1 *)(param_2 + 0x1844));");
            trace.statement("(**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,\"BonesValid\");");
            trace.statement("(**(code **)(*param_1 + 0xf0))(param_1,(double)*(int *)(param_2 + 0x38));");
            trace.statement("(**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,\"PoseCount\");");
            trace.statement("(**(code **)(*param_1 + 0xf0))(param_1,(double)*(int *)(param_2 + 0x3c));");
            trace.statement("(**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,\"PoseCoverage\");");
            if (trace.checked_condition("if ((param_4 != '\\0') && (*(char *)(param_2 + 0x1844) != '\\0'))", [&]() -> bool { return static_cast<bool>((param_4 != '\0') && (load_at<char>(param_2 + 0x1844, 0) != '\0')); })) {
                trace.statement("(**(code **)(*param_1 + 0x30))(param_1);");
                trace.statement("iVar1 = 0;");
                do {
                    trace.statement("local_44 = 0;");
                    trace.statement("local_48 = 0.0;");
                    trace.statement("FUN_1802d4200(param_2 + 0x44 + (longlong)iVar1 * 0x30,&local_48);");
                    trace.statement("FUN_1802d42f0(param_2 + 0x44 + (longlong)iVar1 * 0x30,3,&local_58);");
                    if (trace.condition("if (((local_58 != 0.0) || (local_54 != 0.0)) || (local_50 != 0.0))")) {
                        trace.statement("(**(code **)(*param_1 + 0xf0))(param_1,(double)(iVar1 + 1));");
                        trace.statement("(**(code **)(*param_1 + 0x30))(param_1);");
                        trace.statement("(**(code **)(*param_1 + 0xf0))(param_1,(double)iVar1);");
                        trace.statement("(**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,\"BoneID\");");
                        trace.statement("(**(code **)(*param_1 + 0x30))(param_1);");
                        trace.statement("(**(code **)(*param_1 + 0xf0))(param_1,(double)local_58);");
                        trace.statement("(**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18034ede4);");
                        trace.statement("(**(code **)(*param_1 + 0xf0))(param_1,(double)local_54);");
                        trace.statement("(**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18034ede8);");
                        trace.statement("(**(code **)(*param_1 + 0xf0))(param_1,(double)local_50);");
                        trace.statement("(**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18034edec);");
                        trace.statement("(**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,\"Origin\");");
                        trace.statement("(**(code **)(*param_1 + 0x30))(param_1);");
                        trace.statement("(**(code **)(*param_1 + 0xf0))(param_1,(double)local_48);");
                        trace.statement("(**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18034eea8);");
                        trace.statement("(**(code **)(*param_1 + 0xf0))(param_1,(double)(float)local_44);");
                        trace.statement("(**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18034ede8);");
                        trace.statement("(**(code **)(*param_1 + 0xf0))(param_1,(double)local_44._4_4_);");
                        trace.statement("(**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,&DAT_18033e668);");
                        trace.statement("(**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,\"Angles\");");
                        trace.statement("(**(code **)(*param_1 + 0x38))(param_1,0xfffffffd);");
                    }
                    trace.statement("iVar1 = iVar1 + 1;");
                } while (trace.loop_condition("while (iVar1 < 0x80);"));
                trace.statement("(**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,\"Bones\");");
            }
            trace.statement("return;");
        }
    return kFunction_0x1800e7d70;
}

// 0x1800e81e0 FUN_1800e81e0
// source: re/dump/decompile/0x1800e81e0_FUN_1800e81e0.c
// size: 345 bytes; thunk: false
// body sha256: 4eb1d106f91581ae962970112846bad67de391688743a75ce8cbbd68623d73b0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e81e0{
    "0x1800e81e0",
    "FUN_1800e81e0",
    R"F1800e81e0S(undefined FUN_1800e81e0())F1800e81e0S",
    R"B1800e81e0(// 0x1800e81e0  FUN_1800e81e0
// size=345 thunk=false
// signature: undefined FUN_1800e81e0()
// status: ok


undefined8 FUN_1800e81e0(longlong *param_1,int param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  (**(code **)(*param_1 + 0x30))();
  iVar7 = 0;
  uVar5 = DAT_1803fac60 + DAT_1803fac58;
  uVar6 = DAT_1803fac58;
LAB_1800e8237:
  if (uVar6 == uVar5) {
    return 1;
  }
  puVar1 = *(undefined8 **)(DAT_1803fac48 + (DAT_1803fac50 - 1U & uVar6) * 8);
  plVar8 = (longlong *)*puVar1;
  plVar2 = (longlong *)puVar1[1];
LAB_1800e8266:
  do {
    if (plVar8 == plVar2) break;
    if ((longlong *)*plVar8 == (longlong *)0x0) {
      plVar8 = plVar8 + 0x30d;
      goto LAB_1800e8266;
    }
    plVar9 = plVar8;
    plVar4 = (longlong *)(**(code **)(*(longlong *)*plVar8 + 0x20))();
    if (plVar4 != (longlong *)0x0) {
      iVar3 = (**(code **)(*plVar4 + 0x48))(plVar4);
      if (iVar3 == param_2) {
        iVar7 = iVar7 + 1;
        (**(code **)(*param_1 + 0xf0))(param_1,(double)iVar7);
        FUN_1800e7d70(param_1,plVar8,*(undefined4 *)(puVar1 + 3),param_3,param_3,plVar9);
        (**(code **)(*param_1 + 0x38))(param_1,0xfffffffd);
        plVar8 = plVar8 + 0x30d;
        goto LAB_1800e8266;
      }
    }
    plVar8 = plVar8 + 0x30d;
  } while( true );
  uVar6 = uVar6 + 1;
  goto LAB_1800e8237;
}


)B1800e81e0",
    "4eb1d106f91581ae962970112846bad67de391688743a75ce8cbbd68623d73b0",
    R"F1800e81e0C(FUN_1800e7d70)F1800e81e0C",
    R"F1800e81e0D(LAB_1800e8237
LAB_1800e8266
DAT_1803fac48
DAT_1803fac50
DAT_1803fac58
DAT_1803fac60)F1800e81e0D",
    R"F1800e81e0T()F1800e81e0T",
    R"F1800e81e0F(24: LAB_1800e8237:
25: if (uVar6 == uVar5) {
26: return 1;
31: LAB_1800e8266:
32: do {
33: if (plVar8 == plVar2) break;
34: if ((longlong *)*plVar8 == (longlong *)0x0) {
36: goto LAB_1800e8266;
40: if (plVar4 != (longlong *)0x0) {
42: if (iVar3 == param_2) {
48: goto LAB_1800e8266;
54: goto LAB_1800e8237;)F1800e81e0F",
    R"F1800e81e0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference LAB_1800e8237.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference LAB_1800e8266.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fac48.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fac50.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fac58.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fac60.
TODO: resolve the indirect call in body 20: (**(code **)(*param_1 + 0x30))();.
TODO: resolve the indirect call in body 39: plVar4 = (longlong *)(**(code **)(*(longlong *)*plVar8 + 0x20))();.
TODO: resolve the indirect call in body 41: iVar3 = (**(code **)(*plVar4 + 0x48))(plVar4);.
TODO: resolve the indirect call in body 44: (**(code **)(*param_1 + 0xf0))(param_1,(double)iVar7);.
TODO: resolve the indirect call in body 46: (**(code **)(*param_1 + 0x38))(param_1,0xfffffffd);.)F1800e81e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e81e0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e81e0", "FUN_1800e81e0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t * param_1{};
    [[maybe_unused]] std::int32_t param_2{};
    [[maybe_unused]] std::uint8_t param_3{};
    [[maybe_unused]] std::uint64_t * puVar1{};
    [[maybe_unused]] std::int64_t * plVar2{};
    [[maybe_unused]] std::int32_t iVar3{};
    [[maybe_unused]] std::int64_t * plVar4{};
    [[maybe_unused]] std::uint64_t uVar5{};
    [[maybe_unused]] std::uint64_t uVar6{};
    [[maybe_unused]] std::int32_t iVar7{};
    [[maybe_unused]] std::int64_t * plVar8{};
    [[maybe_unused]] std::int64_t * plVar9{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for LAB_1800e8237.
    // TODO: recover global/data declaration, type, value and runtime page/layout for LAB_1800e8266.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fac48.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fac50.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fac58.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fac60.
    // TODO: resolve the indirect call in body 20: (**(code **)(*param_1 + 0x30))();.
    // TODO: resolve the indirect call in body 39: plVar4 = (longlong *)(**(code **)(*(longlong *)*plVar8 + 0x20))();.
    // TODO: resolve the indirect call in body 41: iVar3 = (**(code **)(*plVar4 + 0x48))(plVar4);.
    // TODO: resolve the indirect call in body 44: (**(code **)(*param_1 + 0xf0))(param_1,(double)iVar7);.
    // TODO: resolve the indirect call in body 46: (**(code **)(*param_1 + 0x38))(param_1,0xfffffffd);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_1800e7d70", param_1, plVar8, load_at<std::uint32_t>(puVar1 + 3, 0), param_3, param_3, plVar9);
    trace.call_target("FUN_1800e7d70", reinterpret_cast<const void*>(&image::FUN_1800e7d70));
    trace.data_ref("DAT_1803fac48", static_cast<const void*>(&image::DAT_1803fac48));
    trace.data_ref("DAT_1803fac50", static_cast<const void*>(&image::DAT_1803fac50));
    trace.data_ref("DAT_1803fac58", static_cast<const void*>(&image::DAT_1803fac58));
    trace.data_ref("DAT_1803fac60", static_cast<const void*>(&image::DAT_1803fac60));
    // body sha256: 4eb1d106f91581ae962970112846bad67de391688743a75ce8cbbd68623d73b0
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("undefined8 *puVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("int iVar3;");
            trace.statement("longlong *plVar4;");
            trace.statement("ulonglong uVar5;");
            trace.statement("ulonglong uVar6;");
            trace.statement("int iVar7;");
            trace.statement("longlong *plVar8;");
            trace.statement("longlong *plVar9;");
            trace.statement("(**(code **)(*param_1 + 0x30))();");
            trace.statement("iVar7 = 0;");
            trace.statement("uVar5 = DAT_1803fac60 + DAT_1803fac58;");
            trace.statement("uVar6 = DAT_1803fac58;");
            LAB_1800e8237: ;
            if (trace.checked_condition("if (uVar6 == uVar5)", [&]() -> bool { return static_cast<bool>(uVar6 == uVar5); })) {
                trace.statement("return 1;");
            }
            trace.statement("puVar1 = *(undefined8 **)(DAT_1803fac48 + (DAT_1803fac50 - 1U & uVar6) * 8);");
            trace.statement("plVar8 = (longlong *)*puVar1;");
            trace.statement("plVar2 = (longlong *)puVar1[1];");
            LAB_1800e8266: ;
            do {
                if (trace.condition("if (plVar8 == plVar2) break; if ((longlong *)*plVar8 == (longlong *)0x0)")) {
                    trace.statement("plVar8 = plVar8 + 0x30d;");
                    trace.statement("goto LAB_1800e8266;");
                }
                trace.statement("plVar9 = plVar8;");
                trace.statement("plVar4 = (longlong *)(**(code **)(*(longlong *)*plVar8 + 0x20))();");
                if (trace.checked_condition("if (plVar4 != (longlong *)0x0)", [&]() -> bool { return static_cast<bool>(plVar4 != (longlong *)0x0); })) {
                    trace.statement("iVar3 = (**(code **)(*plVar4 + 0x48))(plVar4);");
                    if (trace.checked_condition("if (iVar3 == param_2)", [&]() -> bool { return static_cast<bool>(iVar3 == param_2); })) {
                        trace.statement("iVar7 = iVar7 + 1;");
                        trace.statement("(**(code **)(*param_1 + 0xf0))(param_1,(double)iVar7);");
                        trace.statement("FUN_1800e7d70(param_1,plVar8,*(undefined4 *)(puVar1 + 3),param_3,param_3,plVar9);");
                        trace.statement("(**(code **)(*param_1 + 0x38))(param_1,0xfffffffd);");
                        trace.statement("plVar8 = plVar8 + 0x30d;");
                        trace.statement("goto LAB_1800e8266;");
                    }
                }
                trace.statement("plVar8 = plVar8 + 0x30d;");
            } while (trace.loop_condition("while( true );"));
            trace.statement("uVar6 = uVar6 + 1;");
            trace.statement("goto LAB_1800e8237;");
        }
    return kFunction_0x1800e81e0;
}

// 0x1800e8340 FUN_1800e8340
// source: re/dump/decompile/0x1800e8340_FUN_1800e8340.c
// size: 2217 bytes; thunk: false
// body sha256: 04e4fa328b3c2d031abb1a7ac8f0e4b690584cc78d439b670629af1c1b746271
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e8340{
    "0x1800e8340",
    "FUN_1800e8340",
    R"F1800e8340S(undefined FUN_1800e8340())F1800e8340S",
    R"B1800e8340(// 0x1800e8340  FUN_1800e8340
// size=2217 thunk=false
// signature: undefined FUN_1800e8340()
// status: ok


void FUN_1800e8340(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  HMODULE pHVar4;
  ulonglong uVar5;
  
  if ((param_1 != (longlong *)0x0) && (lVar1 = param_1[1], lVar1 != 0)) {
    if (DAT_1803fcfa0 == (FARPROC)0x0) {
      pHVar4 = GetModuleHandleA("lua_shared.dll");
      DAT_1803fcfa0 = GetProcAddress(pHVar4,"lua_gettop");
    }
    uVar5 = (*DAT_1803fcfa0)(lVar1);
    FUN_1800210b0(0,0);
    cVar3 = FUN_1800260c0(lVar1,0x2736efefe1fb290);
    pcVar2 = DAT_1803fcbe0;
    if (cVar3 == '\0') {
      FUN_180014410("[LUAFEAT] api table unavailable -- persist not ready\n");
    }
    else if (DAT_1803fcbe0 != (code *)0x0) {
      (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e8bf0);
      (*pcVar2)(lVar1,0xfffffffe,"IsActive");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e8c30);
      (*pcVar2)(lVar1,0xfffffffe,"HasTarget");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4340);
      (*pcVar2)(lVar1,0xfffffffe,"GetTarget");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e8c70);
      (*pcVar2)(lVar1,0xfffffffe,"GetPosition");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e8d40);
      (*pcVar2)(lVar1,0xfffffffe,"SetTarget");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e8dc0);
      (*pcVar2)(lVar1,0xfffffffe,"SetPosition");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e8e60);
      (*pcVar2)(lVar1,0xfffffffe,"ClearForced");
      (*pcVar2)(lVar1,0xfffffffe,"aimbot");
      (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e8ea0);
      (*pcVar2)(lVar1,0xfffffffe,"IsActive");
      (*pcVar2)(lVar1,0xfffffffe,"triggerbot");
      (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e8f00);
      (*pcVar2)(lVar1,0xfffffffe,"GetActive");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e8f60);
      (*pcVar2)(lVar1,0xfffffffe,"SetActive");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4bb0);
      (*pcVar2)(lVar1,0xfffffffe,"GetPosition");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4c60);
      (*pcVar2)(lVar1,0xfffffffe,"GetAngle");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e8fb0);
      (*pcVar2)(lVar1,0xfffffffe,"SetPosition");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9020);
      (*pcVar2)(lVar1,0xfffffffe,"SetAngle");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9120);
      (*pcVar2)(lVar1,0xfffffffe,"GetSpeed");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9200);
      (*pcVar2)(lVar1,0xfffffffe,"SetSpeed");
      (*pcVar2)(lVar1,0xfffffffe,"freecam");
      (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9280);
      (*pcVar2)(lVar1,0xfffffffe,"GetActive");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e92e0);
      (*pcVar2)(lVar1,0xfffffffe,"SetActive");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9330);
      (*pcVar2)(lVar1,0xfffffffe,"GetDistance");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9410);
      (*pcVar2)(lVar1,0xfffffffe,"SetDistance");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e94a0);
      (*pcVar2)(lVar1,0xfffffffe,"GetSideDistance");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9580);
      (*pcVar2)(lVar1,0xfffffffe,"SetSideDistance");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9610);
      (*pcVar2)(lVar1,0xfffffffe,"GetUpDistance");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e96f0);
      (*pcVar2)(lVar1,0xfffffffe,"SetUpDistance");
      (*DAT_1803fcba8)(lVar1,0xffffffff,"GetDistance");
      (*pcVar2)(lVar1,0xfffffffe,"GetBackDistance");
      (*DAT_1803fcba8)(lVar1,0xffffffff,"SetDistance");
      (*pcVar2)(lVar1,0xfffffffe,"SetBackDistance");
      (*pcVar2)(lVar1,0xfffffffe,"thirdperson");
      (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9780);
      (*pcVar2)(lVar1,0xfffffffe,"GetRecords");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_1800e98c0);
      (*pcVar2)(lVar1,0xfffffffe,"Count");
      (*pcVar2)(lVar1,0xfffffffe,"backtrack");
      (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e98d0);
      (*pcVar2)(lVar1,0xfffffffe,"Installed");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_1800e99d0);
      (*pcVar2)(lVar1,0xfffffffe,"Active");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e99e0);
      (*pcVar2)(lVar1,0xfffffffe,"Pumps");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180052af0);
      (*pcVar2)(lVar1,0xfffffffe,"Interval");
      (*pcVar2)(lVar1,0xfffffffe,"tick_anims");
      (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_1800e9d50);
      (*pcVar2)(lVar1,0xfffffffe,"SetText");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9d60);
      (*pcVar2)(lVar1,0xfffffffe,"ClearText");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9de0);
      (*pcVar2)(lVar1,0xfffffffe,"Clear");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9e10);
      (*pcVar2)(lVar1,0xfffffffe,"GetText");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9f50);
      (*pcVar2)(lVar1,0xfffffffe,"Slots");
      (*DAT_1803fcba8)(lVar1,0xffffffff,"SetText");
      (*pcVar2)(lVar1,0xfffffffe,"SetPlayerText");
      (*DAT_1803fcba8)(lVar1,0xffffffff,"SetText");
      (*pcVar2)(lVar1,0xfffffffe,"SetEntityText");
      (*DAT_1803fcba8)(lVar1,0xffffffff,"ClearText");
      (*pcVar2)(lVar1,0xfffffffe,"ClearPlayerText");
      (*DAT_1803fcba8)(lVar1,0xffffffff,"ClearText");
      (*pcVar2)(lVar1,0xfffffffe,"ClearEntityText");
      (*pcVar2)(lVar1,0xfffffffe,&DAT_18034f128);
      (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800516a0);
      (*pcVar2)(lVar1,0xfffffffe,"IsVisible");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9f90);
      (*pcVar2)(lVar1,0xfffffffe,"SetVisible");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800ea000);
      (*pcVar2)(lVar1,0xfffffffe,"GetAlpha");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800ea090);
      (*pcVar2)(lVar1,0xfffffffe,"GetWindowPos");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800ea100);
      (*pcVar2)(lVar1,0xfffffffe,"GetWindowSize");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800ea170);
      (*pcVar2)(lVar1,0xfffffffe,"InPanic");
      (*pcVar2)(lVar1,0xfffffffe,&DAT_1803406cc);
      if (DAT_180425540 == (FARPROC)0x0) {
        pHVar4 = GetModuleHandleA("lua_shared.dll");
        DAT_180425540 = GetProcAddress(pHVar4,"lua_settop");
      }
      (*DAT_180425540)(lVar1,uVar5 & 0xffffffff);
      FUN_180014410(
                   "[LUAFEAT] aimbot, triggerbot, freecam, thirdperson, backtrack, tick_anims, esp and menu tables registered\n"
                   );
      return;
    }
    if (DAT_180425540 == (FARPROC)0x0) {
      pHVar4 = GetModuleHandleA("lua_shared.dll");
      DAT_180425540 = GetProcAddress(pHVar4,"lua_settop");
    }
    (*DAT_180425540)(lVar1,uVar5 & 0xffffffff);
  }
  return;
}


)B1800e8340",
    "04e4fa328b3c2d031abb1a7ac8f0e4b690584cc78d439b670629af1c1b746271",
    R"F1800e8340C(FUN_180014410
FUN_1800210b0
FUN_1800260c0
FUN_1800516a0
FUN_180052af0
FUN_1800e4340
FUN_1800e4bb0
FUN_1800e4c60
FUN_1800e8bf0
FUN_1800e8c30
FUN_1800e8c70
FUN_1800e8d40
FUN_1800e8dc0
FUN_1800e8e60
FUN_1800e8ea0
FUN_1800e8f00
FUN_1800e8f60
FUN_1800e8fb0
FUN_1800e9020
FUN_1800e9120
FUN_1800e9200
FUN_1800e9280
FUN_1800e92e0
FUN_1800e9330
FUN_1800e9410
FUN_1800e94a0
FUN_1800e9580
FUN_1800e9610
FUN_1800e96f0
FUN_1800e9780
FUN_1800e98d0
FUN_1800e99e0
FUN_1800e9d60
FUN_1800e9de0
FUN_1800e9e10
FUN_1800e9f50
FUN_1800e9f90
FUN_1800ea000
FUN_1800ea090
FUN_1800ea100
FUN_1800ea170)F1800e8340C",
    R"F1800e8340D(LAB_1800e98c0
LAB_1800e99d0
LAB_1800e9d50
DAT_1803406cc
DAT_18034f128
DAT_1803fcba8
DAT_1803fcbe0
DAT_1803fcfa0
DAT_180425540)F1800e8340D",
    R"F1800e8340T("Clear"
"Count"
"Pumps"
"Slots"
"Active"
"aimbot"
"GetText"
"InPanic"
"SetText"
"freecam"
"GetAlpha"
"GetAngle"
"GetSpeed"
"Interval"
"IsActive"
"SetAngle"
"SetSpeed"
"ClearText"
"GetActive"
"GetTarget"
"HasTarget"
"Installed"
"IsVisible"
"SetActive"
"SetTarget"
"backtrack"
"GetRecords"
"SetVisible"
"lua_gettop"
"lua_settop"
"tick_anims"
"triggerbot"
"ClearForced"
"GetDistance"
"GetPosition"
"SetDistance"
"SetPosition"
"thirdperson"
"GetWindowPos"
"GetUpDistance"
"GetWindowSize"
"SetEntityText"
"SetPlayerText"
"SetUpDistance"
"lua_shared.dll"
"ClearEntityText"
"ClearPlayerText"
"GetBackDistance"
"GetSideDistance"
"SetBackDistance"
"SetSideDistance"
"[LUAFEAT] api table unavailable -- persist not ready\\n"
"[LUAFEAT] aimbot, triggerbot, freecam, thirdperson, backtrack, tick_anims, esp and menu tables registered\\n")F1800e8340T",
    R"F1800e8340F(16: if ((param_1 != (longlong *)0x0) && (lVar1 = param_1[1], lVar1 != 0)) {
17: if (DAT_1803fcfa0 == (FARPROC)0x0) {
25: if (cVar3 == '\0') {
28: else if (DAT_1803fcbe0 != (code *)0x0) {
139: if (DAT_180425540 == (FARPROC)0x0) {
147: return;
149: if (DAT_180425540 == (FARPROC)0x0) {
155: return;)F1800e8340F",
    R"F1800e8340U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference LAB_1800e98c0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference LAB_1800e99d0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference LAB_1800e9d50.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803406cc.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18034f128.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fcba8.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fcbe0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fcfa0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180425540.
TODO: resolve the indirect call in body 21: uVar5 = (*DAT_1803fcfa0)(lVar1);.
TODO: resolve the indirect call in body 28: else if (DAT_1803fcbe0 != (code *)0x0) {.
TODO: resolve the indirect call in body 29: (**(code **)(*param_1 + 0x30))(param_1);.
TODO: resolve the indirect call in body 30: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e8bf0);.
TODO: resolve the indirect call in body 31: (*pcVar2)(lVar1,0xfffffffe,"IsActive");.
TODO: resolve the indirect call in body 32: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e8c30);.
TODO: resolve the indirect call in body 33: (*pcVar2)(lVar1,0xfffffffe,"HasTarget");.
TODO: resolve the indirect call in body 34: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4340);.
TODO: resolve the indirect call in body 35: (*pcVar2)(lVar1,0xfffffffe,"GetTarget");.
TODO: resolve the indirect call in body 36: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e8c70);.
TODO: resolve the indirect call in body 37: (*pcVar2)(lVar1,0xfffffffe,"GetPosition");.
TODO: resolve the indirect call in body 38: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e8d40);.
TODO: resolve the indirect call in body 39: (*pcVar2)(lVar1,0xfffffffe,"SetTarget");.
TODO: resolve the indirect call in body 40: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e8dc0);.
TODO: resolve the indirect call in body 41: (*pcVar2)(lVar1,0xfffffffe,"SetPosition");.
TODO: resolve the indirect call in body 42: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e8e60);.
TODO: resolve the indirect call in body 43: (*pcVar2)(lVar1,0xfffffffe,"ClearForced");.
TODO: resolve the indirect call in body 44: (*pcVar2)(lVar1,0xfffffffe,"aimbot");.
TODO: resolve the indirect call in body 45: (**(code **)(*param_1 + 0x30))(param_1);.
TODO: resolve the indirect call in body 46: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e8ea0);.
TODO: resolve the indirect call in body 47: (*pcVar2)(lVar1,0xfffffffe,"IsActive");.
TODO: resolve the indirect call in body 48: (*pcVar2)(lVar1,0xfffffffe,"triggerbot");.
TODO: resolve the indirect call in body 49: (**(code **)(*param_1 + 0x30))(param_1);.
TODO: resolve the indirect call in body 50: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e8f00);.
TODO: resolve the indirect call in body 51: (*pcVar2)(lVar1,0xfffffffe,"GetActive");.
TODO: resolve the indirect call in body 52: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e8f60);.
TODO: resolve the indirect call in body 53: (*pcVar2)(lVar1,0xfffffffe,"SetActive");.
TODO: resolve the indirect call in body 54: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4bb0);.
TODO: resolve the indirect call in body 55: (*pcVar2)(lVar1,0xfffffffe,"GetPosition");.
TODO: resolve the indirect call in body 56: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4c60);.
TODO: resolve the indirect call in body 57: (*pcVar2)(lVar1,0xfffffffe,"GetAngle");.
TODO: resolve the indirect call in body 58: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e8fb0);.
TODO: resolve the indirect call in body 59: (*pcVar2)(lVar1,0xfffffffe,"SetPosition");.
TODO: resolve the indirect call in body 60: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9020);.
TODO: resolve the indirect call in body 61: (*pcVar2)(lVar1,0xfffffffe,"SetAngle");.
TODO: resolve the indirect call in body 62: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9120);.
TODO: resolve the indirect call in body 63: (*pcVar2)(lVar1,0xfffffffe,"GetSpeed");.
TODO: resolve the indirect call in body 64: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9200);.
TODO: resolve the indirect call in body 65: (*pcVar2)(lVar1,0xfffffffe,"SetSpeed");.
TODO: resolve the indirect call in body 66: (*pcVar2)(lVar1,0xfffffffe,"freecam");.
TODO: resolve the indirect call in body 67: (**(code **)(*param_1 + 0x30))(param_1);.
TODO: resolve the indirect call in body 68: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9280);.
TODO: resolve the indirect call in body 69: (*pcVar2)(lVar1,0xfffffffe,"GetActive");.
TODO: resolve the indirect call in body 70: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e92e0);.
TODO: resolve the indirect call in body 71: (*pcVar2)(lVar1,0xfffffffe,"SetActive");.
TODO: resolve the indirect call in body 72: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9330);.
TODO: resolve the indirect call in body 73: (*pcVar2)(lVar1,0xfffffffe,"GetDistance");.
TODO: resolve the indirect call in body 74: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9410);.
TODO: resolve the indirect call in body 75: (*pcVar2)(lVar1,0xfffffffe,"SetDistance");.
TODO: resolve the indirect call in body 76: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e94a0);.
TODO: resolve the indirect call in body 77: (*pcVar2)(lVar1,0xfffffffe,"GetSideDistance");.
TODO: resolve the indirect call in body 78: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9580);.
TODO: resolve the indirect call in body 79: (*pcVar2)(lVar1,0xfffffffe,"SetSideDistance");.
TODO: resolve the indirect call in body 80: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9610);.
TODO: resolve the indirect call in body 81: (*pcVar2)(lVar1,0xfffffffe,"GetUpDistance");.
TODO: resolve the indirect call in body 82: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e96f0);.
TODO: resolve the indirect call in body 83: (*pcVar2)(lVar1,0xfffffffe,"SetUpDistance");.
TODO: resolve the indirect call in body 84: (*DAT_1803fcba8)(lVar1,0xffffffff,"GetDistance");.
TODO: resolve the indirect call in body 85: (*pcVar2)(lVar1,0xfffffffe,"GetBackDistance");.
TODO: resolve the indirect call in body 86: (*DAT_1803fcba8)(lVar1,0xffffffff,"SetDistance");.
TODO: resolve the indirect call in body 87: (*pcVar2)(lVar1,0xfffffffe,"SetBackDistance");.
TODO: resolve the indirect call in body 88: (*pcVar2)(lVar1,0xfffffffe,"thirdperson");.
TODO: resolve the indirect call in body 89: (**(code **)(*param_1 + 0x30))(param_1);.
TODO: resolve the indirect call in body 90: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9780);.
TODO: resolve the indirect call in body 91: (*pcVar2)(lVar1,0xfffffffe,"GetRecords");.
TODO: resolve the indirect call in body 92: (**(code **)(*param_1 + 0x100))(param_1,&LAB_1800e98c0);.
TODO: resolve the indirect call in body 93: (*pcVar2)(lVar1,0xfffffffe,"Count");.
TODO: resolve the indirect call in body 94: (*pcVar2)(lVar1,0xfffffffe,"backtrack");.
TODO: resolve the indirect call in body 95: (**(code **)(*param_1 + 0x30))(param_1);.
TODO: resolve the indirect call in body 96: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e98d0);.
TODO: resolve the indirect call in body 97: (*pcVar2)(lVar1,0xfffffffe,"Installed");.
TODO: resolve the indirect call in body 98: (**(code **)(*param_1 + 0x100))(param_1,&LAB_1800e99d0);.
TODO: resolve the indirect call in body 99: (*pcVar2)(lVar1,0xfffffffe,"Active");.
TODO: resolve the indirect call in body 100: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e99e0);.
TODO: resolve the indirect call in body 101: (*pcVar2)(lVar1,0xfffffffe,"Pumps");.
TODO: resolve the indirect call in body 102: (**(code **)(*param_1 + 0x100))(param_1,FUN_180052af0);.
TODO: resolve the indirect call in body 103: (*pcVar2)(lVar1,0xfffffffe,"Interval");.
TODO: resolve the indirect call in body 104: (*pcVar2)(lVar1,0xfffffffe,"tick_anims");.
TODO: resolve the indirect call in body 105: (**(code **)(*param_1 + 0x30))(param_1);.
TODO: resolve the indirect call in body 106: (**(code **)(*param_1 + 0x100))(param_1,&LAB_1800e9d50);.
TODO: resolve the indirect call in body 107: (*pcVar2)(lVar1,0xfffffffe,"SetText");.
TODO: resolve the indirect call in body 108: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9d60);.
TODO: resolve the indirect call in body 109: (*pcVar2)(lVar1,0xfffffffe,"ClearText");.
TODO: resolve the indirect call in body 110: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9de0);.
TODO: resolve the indirect call in body 111: (*pcVar2)(lVar1,0xfffffffe,"Clear");.
TODO: resolve the indirect call in body 112: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9e10);.
TODO: resolve the indirect call in body 113: (*pcVar2)(lVar1,0xfffffffe,"GetText");.
TODO: resolve the indirect call in body 114: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9f50);.
TODO: resolve the indirect call in body 115: (*pcVar2)(lVar1,0xfffffffe,"Slots");.
TODO: resolve the indirect call in body 116: (*DAT_1803fcba8)(lVar1,0xffffffff,"SetText");.
TODO: resolve the indirect call in body 117: (*pcVar2)(lVar1,0xfffffffe,"SetPlayerText");.
TODO: resolve the indirect call in body 118: (*DAT_1803fcba8)(lVar1,0xffffffff,"SetText");.
TODO: resolve the indirect call in body 119: (*pcVar2)(lVar1,0xfffffffe,"SetEntityText");.
TODO: resolve the indirect call in body 120: (*DAT_1803fcba8)(lVar1,0xffffffff,"ClearText");.
TODO: resolve the indirect call in body 121: (*pcVar2)(lVar1,0xfffffffe,"ClearPlayerText");.
TODO: resolve the indirect call in body 122: (*DAT_1803fcba8)(lVar1,0xffffffff,"ClearText");.
TODO: resolve the indirect call in body 123: (*pcVar2)(lVar1,0xfffffffe,"ClearEntityText");.
TODO: resolve the indirect call in body 124: (*pcVar2)(lVar1,0xfffffffe,&DAT_18034f128);.
TODO: resolve the indirect call in body 125: (**(code **)(*param_1 + 0x30))(param_1);.
TODO: resolve the indirect call in body 126: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800516a0);.
TODO: resolve the indirect call in body 127: (*pcVar2)(lVar1,0xfffffffe,"IsVisible");.
TODO: resolve the indirect call in body 128: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9f90);.
TODO: resolve the indirect call in body 129: (*pcVar2)(lVar1,0xfffffffe,"SetVisible");.
TODO: resolve the indirect call in body 130: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800ea000);.
TODO: resolve the indirect call in body 131: (*pcVar2)(lVar1,0xfffffffe,"GetAlpha");.
TODO: resolve the indirect call in body 132: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800ea090);.
TODO: resolve the indirect call in body 133: (*pcVar2)(lVar1,0xfffffffe,"GetWindowPos");.
TODO: resolve the indirect call in body 134: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800ea100);.
TODO: resolve the indirect call in body 135: (*pcVar2)(lVar1,0xfffffffe,"GetWindowSize");.
TODO: resolve the indirect call in body 136: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800ea170);.
TODO: resolve the indirect call in body 137: (*pcVar2)(lVar1,0xfffffffe,"InPanic");.
TODO: resolve the indirect call in body 138: (*pcVar2)(lVar1,0xfffffffe,&DAT_1803406cc);.
TODO: resolve the indirect call in body 143: (*DAT_180425540)(lVar1,uVar5 & 0xffffffff);.
TODO: resolve the indirect call in body 153: (*DAT_180425540)(lVar1,uVar5 & 0xffffffff);.)F1800e8340U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e8340() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e8340", "FUN_1800e8340");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t * param_1{};
    [[maybe_unused]] std::int64_t lVar1{};
    [[maybe_unused]] void* * pcVar2{};
    [[maybe_unused]] char cVar3{};
    [[maybe_unused]] std::uintptr_t pHVar4{};
    [[maybe_unused]] std::uint64_t uVar5{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for LAB_1800e98c0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for LAB_1800e99d0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for LAB_1800e9d50.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803406cc.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18034f128.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fcba8.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fcbe0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fcfa0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180425540.
    // TODO: resolve the indirect call in body 21: uVar5 = (*DAT_1803fcfa0)(lVar1);.
    // TODO: resolve the indirect call in body 28: else if (DAT_1803fcbe0 != (code *)0x0) {.
    // TODO: resolve the indirect call in body 29: (**(code **)(*param_1 + 0x30))(param_1);.
    // TODO: resolve the indirect call in body 30: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e8bf0);.
    // TODO: resolve the indirect call in body 31: (*pcVar2)(lVar1,0xfffffffe,"IsActive");.
    // TODO: resolve the indirect call in body 32: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e8c30);.
    // TODO: resolve the indirect call in body 33: (*pcVar2)(lVar1,0xfffffffe,"HasTarget");.
    // TODO: resolve the indirect call in body 34: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4340);.
    // TODO: resolve the indirect call in body 35: (*pcVar2)(lVar1,0xfffffffe,"GetTarget");.
    // TODO: resolve the indirect call in body 36: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e8c70);.
    // TODO: resolve the indirect call in body 37: (*pcVar2)(lVar1,0xfffffffe,"GetPosition");.
    // TODO: resolve the indirect call in body 38: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e8d40);.
    // TODO: resolve the indirect call in body 39: (*pcVar2)(lVar1,0xfffffffe,"SetTarget");.
    // TODO: resolve the indirect call in body 40: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e8dc0);.
    // TODO: resolve the indirect call in body 41: (*pcVar2)(lVar1,0xfffffffe,"SetPosition");.
    // TODO: resolve the indirect call in body 42: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e8e60);.
    // TODO: resolve the indirect call in body 43: (*pcVar2)(lVar1,0xfffffffe,"ClearForced");.
    // TODO: resolve the indirect call in body 44: (*pcVar2)(lVar1,0xfffffffe,"aimbot");.
    // TODO: resolve the indirect call in body 45: (**(code **)(*param_1 + 0x30))(param_1);.
    // TODO: resolve the indirect call in body 46: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e8ea0);.
    // TODO: resolve the indirect call in body 47: (*pcVar2)(lVar1,0xfffffffe,"IsActive");.
    // TODO: resolve the indirect call in body 48: (*pcVar2)(lVar1,0xfffffffe,"triggerbot");.
    // TODO: resolve the indirect call in body 49: (**(code **)(*param_1 + 0x30))(param_1);.
    // TODO: resolve the indirect call in body 50: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e8f00);.
    // TODO: resolve the indirect call in body 51: (*pcVar2)(lVar1,0xfffffffe,"GetActive");.
    // TODO: resolve the indirect call in body 52: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e8f60);.
    // TODO: resolve the indirect call in body 53: (*pcVar2)(lVar1,0xfffffffe,"SetActive");.
    // TODO: resolve the indirect call in body 54: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4bb0);.
    // TODO: resolve the indirect call in body 55: (*pcVar2)(lVar1,0xfffffffe,"GetPosition");.
    // TODO: resolve the indirect call in body 56: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4c60);.
    // TODO: resolve the indirect call in body 57: (*pcVar2)(lVar1,0xfffffffe,"GetAngle");.
    // TODO: resolve the indirect call in body 58: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e8fb0);.
    // TODO: resolve the indirect call in body 59: (*pcVar2)(lVar1,0xfffffffe,"SetPosition");.
    // TODO: resolve the indirect call in body 60: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9020);.
    // TODO: resolve the indirect call in body 61: (*pcVar2)(lVar1,0xfffffffe,"SetAngle");.
    // TODO: resolve the indirect call in body 62: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9120);.
    // TODO: resolve the indirect call in body 63: (*pcVar2)(lVar1,0xfffffffe,"GetSpeed");.
    // TODO: resolve the indirect call in body 64: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9200);.
    // TODO: resolve the indirect call in body 65: (*pcVar2)(lVar1,0xfffffffe,"SetSpeed");.
    // TODO: resolve the indirect call in body 66: (*pcVar2)(lVar1,0xfffffffe,"freecam");.
    // TODO: resolve the indirect call in body 67: (**(code **)(*param_1 + 0x30))(param_1);.
    // TODO: resolve the indirect call in body 68: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9280);.
    // TODO: resolve the indirect call in body 69: (*pcVar2)(lVar1,0xfffffffe,"GetActive");.
    // TODO: resolve the indirect call in body 70: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e92e0);.
    // TODO: resolve the indirect call in body 71: (*pcVar2)(lVar1,0xfffffffe,"SetActive");.
    // TODO: resolve the indirect call in body 72: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9330);.
    // TODO: resolve the indirect call in body 73: (*pcVar2)(lVar1,0xfffffffe,"GetDistance");.
    // TODO: resolve the indirect call in body 74: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9410);.
    // TODO: resolve the indirect call in body 75: (*pcVar2)(lVar1,0xfffffffe,"SetDistance");.
    // TODO: resolve the indirect call in body 76: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e94a0);.
    // TODO: resolve the indirect call in body 77: (*pcVar2)(lVar1,0xfffffffe,"GetSideDistance");.
    // TODO: resolve the indirect call in body 78: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9580);.
    // TODO: resolve the indirect call in body 79: (*pcVar2)(lVar1,0xfffffffe,"SetSideDistance");.
    // TODO: resolve the indirect call in body 80: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9610);.
    // TODO: resolve the indirect call in body 81: (*pcVar2)(lVar1,0xfffffffe,"GetUpDistance");.
    // TODO: resolve the indirect call in body 82: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e96f0);.
    // TODO: resolve the indirect call in body 83: (*pcVar2)(lVar1,0xfffffffe,"SetUpDistance");.
    // TODO: resolve the indirect call in body 84: (*DAT_1803fcba8)(lVar1,0xffffffff,"GetDistance");.
    // TODO: resolve the indirect call in body 85: (*pcVar2)(lVar1,0xfffffffe,"GetBackDistance");.
    // TODO: resolve the indirect call in body 86: (*DAT_1803fcba8)(lVar1,0xffffffff,"SetDistance");.
    // TODO: resolve the indirect call in body 87: (*pcVar2)(lVar1,0xfffffffe,"SetBackDistance");.
    // TODO: resolve the indirect call in body 88: (*pcVar2)(lVar1,0xfffffffe,"thirdperson");.
    // TODO: resolve the indirect call in body 89: (**(code **)(*param_1 + 0x30))(param_1);.
    // TODO: resolve the indirect call in body 90: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9780);.
    // TODO: resolve the indirect call in body 91: (*pcVar2)(lVar1,0xfffffffe,"GetRecords");.
    // TODO: resolve the indirect call in body 92: (**(code **)(*param_1 + 0x100))(param_1,&LAB_1800e98c0);.
    // TODO: resolve the indirect call in body 93: (*pcVar2)(lVar1,0xfffffffe,"Count");.
    // TODO: resolve the indirect call in body 94: (*pcVar2)(lVar1,0xfffffffe,"backtrack");.
    // TODO: resolve the indirect call in body 95: (**(code **)(*param_1 + 0x30))(param_1);.
    // TODO: resolve the indirect call in body 96: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e98d0);.
    // TODO: resolve the indirect call in body 97: (*pcVar2)(lVar1,0xfffffffe,"Installed");.
    // TODO: resolve the indirect call in body 98: (**(code **)(*param_1 + 0x100))(param_1,&LAB_1800e99d0);.
    // TODO: resolve the indirect call in body 99: (*pcVar2)(lVar1,0xfffffffe,"Active");.
    // TODO: resolve the indirect call in body 100: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e99e0);.
    // TODO: resolve the indirect call in body 101: (*pcVar2)(lVar1,0xfffffffe,"Pumps");.
    // TODO: resolve the indirect call in body 102: (**(code **)(*param_1 + 0x100))(param_1,FUN_180052af0);.
    // TODO: resolve the indirect call in body 103: (*pcVar2)(lVar1,0xfffffffe,"Interval");.
    // TODO: resolve the indirect call in body 104: (*pcVar2)(lVar1,0xfffffffe,"tick_anims");.
    // TODO: resolve the indirect call in body 105: (**(code **)(*param_1 + 0x30))(param_1);.
    // TODO: resolve the indirect call in body 106: (**(code **)(*param_1 + 0x100))(param_1,&LAB_1800e9d50);.
    // TODO: resolve the indirect call in body 107: (*pcVar2)(lVar1,0xfffffffe,"SetText");.
    // TODO: resolve the indirect call in body 108: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9d60);.
    // TODO: resolve the indirect call in body 109: (*pcVar2)(lVar1,0xfffffffe,"ClearText");.
    // TODO: resolve the indirect call in body 110: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9de0);.
    // TODO: resolve the indirect call in body 111: (*pcVar2)(lVar1,0xfffffffe,"Clear");.
    // TODO: resolve the indirect call in body 112: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9e10);.
    // TODO: resolve the indirect call in body 113: (*pcVar2)(lVar1,0xfffffffe,"GetText");.
    // TODO: resolve the indirect call in body 114: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9f50);.
    // TODO: resolve the indirect call in body 115: (*pcVar2)(lVar1,0xfffffffe,"Slots");.
    // TODO: resolve the indirect call in body 116: (*DAT_1803fcba8)(lVar1,0xffffffff,"SetText");.
    // TODO: resolve the indirect call in body 117: (*pcVar2)(lVar1,0xfffffffe,"SetPlayerText");.
    // TODO: resolve the indirect call in body 118: (*DAT_1803fcba8)(lVar1,0xffffffff,"SetText");.
    // TODO: resolve the indirect call in body 119: (*pcVar2)(lVar1,0xfffffffe,"SetEntityText");.
    // TODO: resolve the indirect call in body 120: (*DAT_1803fcba8)(lVar1,0xffffffff,"ClearText");.
    // TODO: resolve the indirect call in body 121: (*pcVar2)(lVar1,0xfffffffe,"ClearPlayerText");.
    // TODO: resolve the indirect call in body 122: (*DAT_1803fcba8)(lVar1,0xffffffff,"ClearText");.
    // TODO: resolve the indirect call in body 123: (*pcVar2)(lVar1,0xfffffffe,"ClearEntityText");.
    // TODO: resolve the indirect call in body 124: (*pcVar2)(lVar1,0xfffffffe,&DAT_18034f128);.
    // TODO: resolve the indirect call in body 125: (**(code **)(*param_1 + 0x30))(param_1);.
    // TODO: resolve the indirect call in body 126: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800516a0);.
    // TODO: resolve the indirect call in body 127: (*pcVar2)(lVar1,0xfffffffe,"IsVisible");.
    // TODO: resolve the indirect call in body 128: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9f90);.
    // TODO: resolve the indirect call in body 129: (*pcVar2)(lVar1,0xfffffffe,"SetVisible");.
    // TODO: resolve the indirect call in body 130: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800ea000);.
    // TODO: resolve the indirect call in body 131: (*pcVar2)(lVar1,0xfffffffe,"GetAlpha");.
    // TODO: resolve the indirect call in body 132: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800ea090);.
    // TODO: resolve the indirect call in body 133: (*pcVar2)(lVar1,0xfffffffe,"GetWindowPos");.
    // TODO: resolve the indirect call in body 134: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800ea100);.
    // TODO: resolve the indirect call in body 135: (*pcVar2)(lVar1,0xfffffffe,"GetWindowSize");.
    // TODO: resolve the indirect call in body 136: (**(code **)(*param_1 + 0x100))(param_1,FUN_1800ea170);.
    // TODO: resolve the indirect call in body 137: (*pcVar2)(lVar1,0xfffffffe,"InPanic");.
    // TODO: resolve the indirect call in body 138: (*pcVar2)(lVar1,0xfffffffe,&DAT_1803406cc);.
    // TODO: resolve the indirect call in body 143: (*DAT_180425540)(lVar1,uVar5 & 0xffffffff);.
    // TODO: resolve the indirect call in body 153: (*DAT_180425540)(lVar1,uVar5 & 0xffffffff);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((param_1 != (longlong *)0x0) && (lVar1 = param_1[1], lVar1 != 0)) [reason: pointer-cast target not proven]
    // TODO: condition expression type not recovered: if (DAT_1803fcfa0 == (FARPROC)0x0) [reason: unresolved global storage/width]
    // TODO: condition expression type not recovered: if (DAT_180425540 == (FARPROC)0x0) [reason: unresolved global storage/width]
    // TODO: condition expression type not recovered: if (DAT_180425540 == (FARPROC)0x0) [reason: unresolved global storage/width]
    trace.call_arguments("GetModuleHandleA", "lua_shared.dll");
    trace.call_arguments("GetProcAddress", pHVar4, "lua_gettop");
    trace.call_arguments("FUN_1800210b0", 0, 0);
    trace.call_arguments("FUN_1800260c0", lVar1, 0x2736efefe1fb290);
    trace.call_arguments("FUN_180014410", "[LUAFEAT] api table unavailable -- persist not ready\n");
    trace.call_arguments("GetModuleHandleA", "lua_shared.dll");
    trace.call_arguments("GetProcAddress", pHVar4, "lua_settop");
    trace.call_arguments("GetModuleHandleA", "lua_shared.dll");
    trace.call_arguments("GetProcAddress", pHVar4, "lua_settop");
    trace.call_target("FUN_180014410", reinterpret_cast<const void*>(&image::FUN_180014410));
    trace.call_target("FUN_1800210b0", reinterpret_cast<const void*>(&image::FUN_1800210b0));
    trace.call_target("FUN_1800260c0", reinterpret_cast<const void*>(&image::FUN_1800260c0));
    trace.call_target("FUN_1800516a0", reinterpret_cast<const void*>(&image::FUN_1800516a0));
    trace.call_target("FUN_180052af0", reinterpret_cast<const void*>(&image::FUN_180052af0));
    trace.call_target("FUN_1800e4340", reinterpret_cast<const void*>(&image::FUN_1800e4340));
    trace.call_target("FUN_1800e4bb0", reinterpret_cast<const void*>(&image::FUN_1800e4bb0));
    trace.call_target("FUN_1800e4c60", reinterpret_cast<const void*>(&image::FUN_1800e4c60));
    trace.call_target("FUN_1800e8bf0", reinterpret_cast<const void*>(&image::FUN_1800e8bf0));
    trace.call_target("FUN_1800e8c30", reinterpret_cast<const void*>(&image::FUN_1800e8c30));
    trace.call_target("FUN_1800e8c70", reinterpret_cast<const void*>(&image::FUN_1800e8c70));
    trace.call_target("FUN_1800e8d40", reinterpret_cast<const void*>(&image::FUN_1800e8d40));
    trace.call_target("FUN_1800e8dc0", reinterpret_cast<const void*>(&image::FUN_1800e8dc0));
    trace.call_target("FUN_1800e8e60", reinterpret_cast<const void*>(&image::FUN_1800e8e60));
    trace.call_target("FUN_1800e8ea0", reinterpret_cast<const void*>(&image::FUN_1800e8ea0));
    trace.call_target("FUN_1800e8f00", reinterpret_cast<const void*>(&image::FUN_1800e8f00));
    trace.call_target("FUN_1800e8f60", reinterpret_cast<const void*>(&image::FUN_1800e8f60));
    trace.call_target("FUN_1800e8fb0", reinterpret_cast<const void*>(&image::FUN_1800e8fb0));
    trace.call_target("FUN_1800e9020", reinterpret_cast<const void*>(&image::FUN_1800e9020));
    trace.call_target("FUN_1800e9120", reinterpret_cast<const void*>(&image::FUN_1800e9120));
    trace.call_target("FUN_1800e9200", reinterpret_cast<const void*>(&image::FUN_1800e9200));
    trace.call_target("FUN_1800e9280", reinterpret_cast<const void*>(&image::FUN_1800e9280));
    trace.call_target("FUN_1800e92e0", reinterpret_cast<const void*>(&image::FUN_1800e92e0));
    trace.call_target("FUN_1800e9330", reinterpret_cast<const void*>(&image::FUN_1800e9330));
    trace.call_target("FUN_1800e9410", reinterpret_cast<const void*>(&image::FUN_1800e9410));
    trace.call_target("FUN_1800e94a0", reinterpret_cast<const void*>(&image::FUN_1800e94a0));
    trace.call_target("FUN_1800e9580", reinterpret_cast<const void*>(&image::FUN_1800e9580));
    trace.call_target("FUN_1800e9610", reinterpret_cast<const void*>(&image::FUN_1800e9610));
    trace.call_target("FUN_1800e96f0", reinterpret_cast<const void*>(&image::FUN_1800e96f0));
    trace.call_target("FUN_1800e9780", reinterpret_cast<const void*>(&image::FUN_1800e9780));
    trace.call_target("FUN_1800e98d0", reinterpret_cast<const void*>(&image::FUN_1800e98d0));
    trace.call_target("FUN_1800e99e0", reinterpret_cast<const void*>(&image::FUN_1800e99e0));
    trace.call_target("FUN_1800e9d60", reinterpret_cast<const void*>(&image::FUN_1800e9d60));
    trace.call_target("FUN_1800e9de0", reinterpret_cast<const void*>(&image::FUN_1800e9de0));
    trace.call_target("FUN_1800e9e10", reinterpret_cast<const void*>(&image::FUN_1800e9e10));
    trace.call_target("FUN_1800e9f50", reinterpret_cast<const void*>(&image::FUN_1800e9f50));
    trace.call_target("FUN_1800e9f90", reinterpret_cast<const void*>(&image::FUN_1800e9f90));
    trace.call_target("FUN_1800ea000", reinterpret_cast<const void*>(&image::FUN_1800ea000));
    trace.call_target("FUN_1800ea090", reinterpret_cast<const void*>(&image::FUN_1800ea090));
    trace.call_target("FUN_1800ea100", reinterpret_cast<const void*>(&image::FUN_1800ea100));
    trace.call_target("FUN_1800ea170", reinterpret_cast<const void*>(&image::FUN_1800ea170));
    trace.data_ref("DAT_1803406cc", static_cast<const void*>(&image::DAT_1803406cc));
    trace.data_ref("DAT_18034f128", static_cast<const void*>(&image::DAT_18034f128));
    trace.data_ref("DAT_1803fcba8", static_cast<const void*>(&image::DAT_1803fcba8));
    trace.data_ref("DAT_1803fcbe0", static_cast<const void*>(&image::DAT_1803fcbe0));
    trace.data_ref("DAT_1803fcfa0", static_cast<const void*>(&image::DAT_1803fcfa0));
    trace.data_ref("DAT_180425540", static_cast<const void*>(&image::DAT_180425540));
    trace.string_literal("Clear");
    trace.string_literal("Count");
    trace.string_literal("Pumps");
    trace.string_literal("Slots");
    trace.string_literal("Active");
    trace.string_literal("aimbot");
    trace.string_literal("GetText");
    trace.string_literal("InPanic");
    trace.string_literal("SetText");
    trace.string_literal("freecam");
    trace.string_literal("GetAlpha");
    trace.string_literal("GetAngle");
    trace.string_literal("GetSpeed");
    trace.string_literal("Interval");
    trace.string_literal("IsActive");
    trace.string_literal("SetAngle");
    trace.string_literal("SetSpeed");
    trace.string_literal("ClearText");
    trace.string_literal("GetActive");
    trace.string_literal("GetTarget");
    trace.string_literal("HasTarget");
    trace.string_literal("Installed");
    trace.string_literal("IsVisible");
    trace.string_literal("SetActive");
    trace.string_literal("SetTarget");
    trace.string_literal("backtrack");
    trace.string_literal("GetRecords");
    trace.string_literal("SetVisible");
    trace.string_literal("lua_gettop");
    trace.string_literal("lua_settop");
    trace.string_literal("tick_anims");
    trace.string_literal("triggerbot");
    trace.string_literal("ClearForced");
    trace.string_literal("GetDistance");
    trace.string_literal("GetPosition");
    trace.string_literal("SetDistance");
    trace.string_literal("SetPosition");
    trace.string_literal("thirdperson");
    trace.string_literal("GetWindowPos");
    trace.string_literal("GetUpDistance");
    trace.string_literal("GetWindowSize");
    trace.string_literal("SetEntityText");
    trace.string_literal("SetPlayerText");
    trace.string_literal("SetUpDistance");
    trace.string_literal("lua_shared.dll");
    trace.string_literal("ClearEntityText");
    trace.string_literal("ClearPlayerText");
    trace.string_literal("GetBackDistance");
    trace.string_literal("GetSideDistance");
    trace.string_literal("SetBackDistance");
    trace.string_literal("SetSideDistance");
    trace.string_literal("[LUAFEAT] api table unavailable -- persist not ready\\n");
    trace.string_literal("[LUAFEAT] aimbot, triggerbot, freecam, thirdperson, backtrack, tick_anims, esp and menu tables registered\\n");
    // body sha256: 04e4fa328b3c2d031abb1a7ac8f0e4b690584cc78d439b670629af1c1b746271
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong lVar1;");
            trace.statement("code *pcVar2;");
            trace.statement("char cVar3;");
            trace.statement("HMODULE pHVar4;");
            trace.statement("ulonglong uVar5;");
            if (trace.condition("if ((param_1 != (longlong *)0x0) && (lVar1 = param_1[1], lVar1 != 0))")) {
                if (trace.condition("if (DAT_1803fcfa0 == (FARPROC)0x0)")) {
                    trace.statement("pHVar4 = GetModuleHandleA(\"lua_shared.dll\");");
                    trace.statement("DAT_1803fcfa0 = GetProcAddress(pHVar4,\"lua_gettop\");");
                }
                trace.statement("uVar5 = (*DAT_1803fcfa0)(lVar1);");
                trace.statement("FUN_1800210b0(0,0);");
                trace.statement("cVar3 = FUN_1800260c0(lVar1,0x2736efefe1fb290);");
                trace.statement("pcVar2 = DAT_1803fcbe0;");
                if (trace.checked_condition("if (cVar3 == '\\0')", [&]() -> bool { return static_cast<bool>(cVar3 == '\0'); })) {
                    trace.statement("FUN_180014410(\"[LUAFEAT] api table unavailable -- persist not ready\\n\");");
                } else {
                trace.statement("(**(code **)(*param_1 + 0x30))(param_1);");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e8bf0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"IsActive\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e8c30);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"HasTarget\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4340);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetTarget\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e8c70);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetPosition\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e8d40);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"SetTarget\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e8dc0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"SetPosition\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e8e60);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"ClearForced\");");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"aimbot\");");
                trace.statement("(**(code **)(*param_1 + 0x30))(param_1);");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e8ea0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"IsActive\");");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"triggerbot\");");
                trace.statement("(**(code **)(*param_1 + 0x30))(param_1);");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e8f00);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetActive\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e8f60);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"SetActive\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4bb0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetPosition\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e4c60);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetAngle\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e8fb0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"SetPosition\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9020);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"SetAngle\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9120);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetSpeed\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9200);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"SetSpeed\");");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"freecam\");");
                trace.statement("(**(code **)(*param_1 + 0x30))(param_1);");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9280);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetActive\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e92e0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"SetActive\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9330);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetDistance\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9410);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"SetDistance\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e94a0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetSideDistance\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9580);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"SetSideDistance\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9610);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetUpDistance\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e96f0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"SetUpDistance\");");
                trace.statement("(*DAT_1803fcba8)(lVar1,0xffffffff,\"GetDistance\");");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetBackDistance\");");
                trace.statement("(*DAT_1803fcba8)(lVar1,0xffffffff,\"SetDistance\");");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"SetBackDistance\");");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"thirdperson\");");
                trace.statement("(**(code **)(*param_1 + 0x30))(param_1);");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9780);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetRecords\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,&LAB_1800e98c0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"Count\");");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"backtrack\");");
                trace.statement("(**(code **)(*param_1 + 0x30))(param_1);");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e98d0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"Installed\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,&LAB_1800e99d0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"Active\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e99e0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"Pumps\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_180052af0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"Interval\");");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"tick_anims\");");
                trace.statement("(**(code **)(*param_1 + 0x30))(param_1);");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,&LAB_1800e9d50);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"SetText\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9d60);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"ClearText\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9de0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"Clear\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9e10);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetText\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9f50);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"Slots\");");
                trace.statement("(*DAT_1803fcba8)(lVar1,0xffffffff,\"SetText\");");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"SetPlayerText\");");
                trace.statement("(*DAT_1803fcba8)(lVar1,0xffffffff,\"SetText\");");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"SetEntityText\");");
                trace.statement("(*DAT_1803fcba8)(lVar1,0xffffffff,\"ClearText\");");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"ClearPlayerText\");");
                trace.statement("(*DAT_1803fcba8)(lVar1,0xffffffff,\"ClearText\");");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"ClearEntityText\");");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,&DAT_18034f128);");
                trace.statement("(**(code **)(*param_1 + 0x30))(param_1);");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800516a0);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"IsVisible\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800e9f90);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"SetVisible\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800ea000);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetAlpha\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800ea090);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetWindowPos\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800ea100);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"GetWindowSize\");");
                trace.statement("(**(code **)(*param_1 + 0x100))(param_1,FUN_1800ea170);");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,\"InPanic\");");
                trace.statement("(*pcVar2)(lVar1,0xfffffffe,&DAT_1803406cc);");
                if (trace.condition("if (DAT_180425540 == (FARPROC)0x0)")) {
                    trace.statement("pHVar4 = GetModuleHandleA(\"lua_shared.dll\");");
                    trace.statement("DAT_180425540 = GetProcAddress(pHVar4,\"lua_settop\");");
                }
                trace.statement("(*DAT_180425540)(lVar1,uVar5 & 0xffffffff);");
                trace.statement("FUN_180014410(");
                trace.statement("\"[LUAFEAT] aimbot, triggerbot, freecam, thirdperson, backtrack, tick_anims, esp and menu tables registered\\n\"");
                trace.statement(");");
                trace.statement("return;");
                }
                if (trace.condition("if (DAT_180425540 == (FARPROC)0x0)")) {
                    trace.statement("pHVar4 = GetModuleHandleA(\"lua_shared.dll\");");
                    trace.statement("DAT_180425540 = GetProcAddress(pHVar4,\"lua_settop\");");
                }
                trace.statement("(*DAT_180425540)(lVar1,uVar5 & 0xffffffff);");
            }
            trace.statement("return;");
        }
    return kFunction_0x1800e8340;
}

// 0x1800e8bf0 FUN_1800e8bf0
// source: re/dump/decompile/0x1800e8bf0_FUN_1800e8bf0.c
// size: 64 bytes; thunk: false
// body sha256: e9ce17b1469b07f8181ae664389c55b9173c926e244a574bfbeca174efe2fc7d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e8bf0{
    "0x1800e8bf0",
    "FUN_1800e8bf0",
    R"F1800e8bf0S(undefined FUN_1800e8bf0())F1800e8bf0S",
    R"B1800e8bf0(// 0x1800e8bf0  FUN_1800e8bf0
// size=64 thunk=false
// signature: undefined FUN_1800e8bf0()
// status: ok


undefined8 FUN_1800e8bf0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    (**(code **)(*plVar1 + 0xf8))(plVar1,DAT_1803db45c);
    return 1;
  }
  return 0;
}


)B1800e8bf0",
    "e9ce17b1469b07f8181ae664389c55b9173c926e244a574bfbeca174efe2fc7d",
    R"F1800e8bf0C(FUN_180039770)F1800e8bf0C",
    R"F1800e8bf0D(DAT_1803db45c)F1800e8bf0D",
    R"F1800e8bf0T()F1800e8bf0T",
    R"F1800e8bf0F(13: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
15: return 1;
17: return 0;)F1800e8bf0F",
    R"F1800e8bf0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803db45c.
TODO: resolve the indirect call in body 14: (**(code **)(*plVar1 + 0xf8))(plVar1,DAT_1803db45c);.)F1800e8bf0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e8bf0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e8bf0", "FUN_1800e8bf0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t * plVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803db45c.
    // TODO: resolve the indirect call in body 14: (**(code **)(*plVar1 + 0xf8))(plVar1,DAT_1803db45c);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803db45c", static_cast<const void*>(&image::DAT_1803db45c));
    // body sha256: e9ce17b1469b07f8181ae664389c55b9173c926e244a574bfbeca174efe2fc7d
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong *plVar1;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                trace.statement("(**(code **)(*plVar1 + 0xf8))(plVar1,DAT_1803db45c);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e8bf0;
}

// 0x1800e8c30 FUN_1800e8c30
// source: re/dump/decompile/0x1800e8c30_FUN_1800e8c30.c
// size: 64 bytes; thunk: false
// body sha256: 0426821981a5531d516c2ed03fb75a3b3b291019bd9202f7008c4b1a1673d531
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e8c30{
    "0x1800e8c30",
    "FUN_1800e8c30",
    R"F1800e8c30S(undefined FUN_1800e8c30())F1800e8c30S",
    R"B1800e8c30(// 0x1800e8c30  FUN_1800e8c30
// size=64 thunk=false
// signature: undefined FUN_1800e8c30()
// status: ok


undefined8 FUN_1800e8c30(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    (**(code **)(*plVar1 + 0xf8))(plVar1,DAT_1803db45d);
    return 1;
  }
  return 0;
}


)B1800e8c30",
    "0426821981a5531d516c2ed03fb75a3b3b291019bd9202f7008c4b1a1673d531",
    R"F1800e8c30C(FUN_180039770)F1800e8c30C",
    R"F1800e8c30D(DAT_1803db45d)F1800e8c30D",
    R"F1800e8c30T()F1800e8c30T",
    R"F1800e8c30F(13: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
15: return 1;
17: return 0;)F1800e8c30F",
    R"F1800e8c30U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803db45d.
TODO: resolve the indirect call in body 14: (**(code **)(*plVar1 + 0xf8))(plVar1,DAT_1803db45d);.)F1800e8c30U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e8c30() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e8c30", "FUN_1800e8c30");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t * plVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803db45d.
    // TODO: resolve the indirect call in body 14: (**(code **)(*plVar1 + 0xf8))(plVar1,DAT_1803db45d);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803db45d", static_cast<const void*>(&image::DAT_1803db45d));
    // body sha256: 0426821981a5531d516c2ed03fb75a3b3b291019bd9202f7008c4b1a1673d531
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong *plVar1;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                trace.statement("(**(code **)(*plVar1 + 0xf8))(plVar1,DAT_1803db45d);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e8c30;
}

// 0x1800e8c70 FUN_1800e8c70
// source: re/dump/decompile/0x1800e8c70_FUN_1800e8c70.c
// size: 198 bytes; thunk: false
// body sha256: 488a31dec027fc2157275e48f50c787b83d6cfb14c47372db32c0e3a635fbc82
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e8c70{
    "0x1800e8c70",
    "FUN_1800e8c70",
    R"F1800e8c70S(undefined FUN_1800e8c70())F1800e8c70S",
    R"B1800e8c70(// 0x1800e8c70  FUN_1800e8c70
// size=198 thunk=false
// signature: undefined FUN_1800e8c70()
// status: ok


undefined8 FUN_1800e8c70(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
    return 0;
  }
  iVar1 = 0;
  if (DAT_1803fa608 != 0) {
    iVar1 = *(int *)(DAT_1803fa608 + 4);
  }
  if ((-1 < DAT_1803e9078) && (iVar1 - DAT_1803e9078 < 2)) {
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)DAT_1803e9bd0);
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)DAT_1803e9bd4);
    (**(code **)(*plVar2 + 0xf0))(plVar2,(double)DAT_1803e9bd8);
    return 3;
  }
  (**(code **)(*plVar2 + 0xe0))(plVar2);
  return 1;
}


)B1800e8c70",
    "488a31dec027fc2157275e48f50c787b83d6cfb14c47372db32c0e3a635fbc82",
    R"F1800e8c70C(FUN_180039770)F1800e8c70C",
    R"F1800e8c70D(DAT_1803e9078
DAT_1803e9bd0
DAT_1803e9bd4
DAT_1803e9bd8
DAT_1803fa608)F1800e8c70D",
    R"F1800e8c70T()F1800e8c70T",
    R"F1800e8c70F(14: if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
15: return 0;
18: if (DAT_1803fa608 != 0) {
21: if ((-1 < DAT_1803e9078) && (iVar1 - DAT_1803e9078 < 2)) {
25: return 3;
28: return 1;)F1800e8c70F",
    R"F1800e8c70U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e9078.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e9bd0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e9bd4.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e9bd8.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa608.
TODO: resolve the indirect call in body 22: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)DAT_1803e9bd0);.
TODO: resolve the indirect call in body 23: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)DAT_1803e9bd4);.
TODO: resolve the indirect call in body 24: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)DAT_1803e9bd8);.
TODO: resolve the indirect call in body 27: (**(code **)(*plVar2 + 0xe0))(plVar2);.)F1800e8c70U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e8c70() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e8c70", "FUN_1800e8c70");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int32_t iVar1{};
    [[maybe_unused]] std::int64_t * plVar2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e9078.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e9bd0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e9bd4.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e9bd8.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa608.
    // TODO: resolve the indirect call in body 22: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)DAT_1803e9bd0);.
    // TODO: resolve the indirect call in body 23: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)DAT_1803e9bd4);.
    // TODO: resolve the indirect call in body 24: (**(code **)(*plVar2 + 0xf0))(plVar2,(double)DAT_1803e9bd8);.
    // TODO: resolve the indirect call in body 27: (**(code **)(*plVar2 + 0xe0))(plVar2);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803e9078", static_cast<const void*>(&image::DAT_1803e9078));
    trace.data_ref("DAT_1803e9bd0", static_cast<const void*>(&image::DAT_1803e9bd0));
    trace.data_ref("DAT_1803e9bd4", static_cast<const void*>(&image::DAT_1803e9bd4));
    trace.data_ref("DAT_1803e9bd8", static_cast<const void*>(&image::DAT_1803e9bd8));
    trace.data_ref("DAT_1803fa608", static_cast<const void*>(&image::DAT_1803fa608));
    // body sha256: 488a31dec027fc2157275e48f50c787b83d6cfb14c47372db32c0e3a635fbc82
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("int iVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1))")) {
                trace.statement("return 0;");
            }
            trace.statement("iVar1 = 0;");
            if (trace.checked_condition("if (DAT_1803fa608 != 0)", [&]() -> bool { return static_cast<bool>(image::DAT_1803fa608 != 0); })) {
                trace.statement("iVar1 = *(int *)(DAT_1803fa608 + 4);");
            }
            if (trace.checked_condition("if ((-1 < DAT_1803e9078) && (iVar1 - DAT_1803e9078 < 2))", [&]() -> bool { return static_cast<bool>((-1 < image::DAT_1803e9078) && (iVar1 - image::DAT_1803e9078 < 2)); })) {
                trace.statement("(**(code **)(*plVar2 + 0xf0))(plVar2,(double)DAT_1803e9bd0);");
                trace.statement("(**(code **)(*plVar2 + 0xf0))(plVar2,(double)DAT_1803e9bd4);");
                trace.statement("(**(code **)(*plVar2 + 0xf0))(plVar2,(double)DAT_1803e9bd8);");
                trace.statement("return 3;");
            }
            trace.statement("(**(code **)(*plVar2 + 0xe0))(plVar2);");
            trace.statement("return 1;");
        }
    return kFunction_0x1800e8c70;
}

// 0x1800e8d40 FUN_1800e8d40
// source: re/dump/decompile/0x1800e8d40_FUN_1800e8d40.c
// size: 128 bytes; thunk: false
// body sha256: 994dd84d4738fe9692648aa5f3fc9b999898d6add3c208d37699d93b4d7a5e90
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e8d40{
    "0x1800e8d40",
    "FUN_1800e8d40",
    R"F1800e8d40S(undefined FUN_1800e8d40())F1800e8d40S",
    R"B1800e8d40(// 0x1800e8d40  FUN_1800e8d40
// size=128 thunk=false
// signature: undefined FUN_1800e8d40()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800e8d40(longlong param_1)

{
  longlong *plVar1;
  double dVar2;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    dVar2 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
    DAT_18040a4c0 = (int)dVar2;
    if (0x7f < DAT_18040a4c0 - 1U) {
      _DAT_1803e908c = 0xffffffff;
      DAT_18040a4c0 = 0;
      return 0;
    }
    if (DAT_1803fa608 != 0) {
      _DAT_1803e908c = *(undefined4 *)(DAT_1803fa608 + 4);
      return 0;
    }
    _DAT_1803e908c = 0;
  }
  return 0;
}


)B1800e8d40",
    "994dd84d4738fe9692648aa5f3fc9b999898d6add3c208d37699d93b4d7a5e90",
    R"F1800e8d40C(FUN_180039770)F1800e8d40C",
    R"F1800e8d40D(_DAT_1803e908c
DAT_1803fa608
DAT_18040a4c0)F1800e8d40D",
    R"F1800e8d40T()F1800e8d40T",
    R"F1800e8d40F(16: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
19: if (0x7f < DAT_18040a4c0 - 1U) {
22: return 0;
24: if (DAT_1803fa608 != 0) {
26: return 0;
30: return 0;)F1800e8d40F",
    R"F1800e8d40U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference _DAT_1803e908c.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa608.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18040a4c0.
TODO: resolve the indirect call in body 17: dVar2 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.)F1800e8d40U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e8d40() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e8d40", "FUN_1800e8d40");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t * plVar1{};
    [[maybe_unused]] double dVar2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for _DAT_1803e908c.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa608.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18040a4c0.
    // TODO: resolve the indirect call in body 17: dVar2 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) [reason: pointer-cast target not proven]
    // TODO: condition expression type not recovered: if (0x7f < DAT_18040a4c0 - 1U) [reason: unresolved global storage/width]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("_DAT_1803e908c", static_cast<const void*>(&image::_DAT_1803e908c));
    trace.data_ref("DAT_1803fa608", static_cast<const void*>(&image::DAT_1803fa608));
    trace.data_ref("DAT_18040a4c0", static_cast<const void*>(&image::DAT_18040a4c0));
    // body sha256: 994dd84d4738fe9692648aa5f3fc9b999898d6add3c208d37699d93b4d7a5e90
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong *plVar1;");
            trace.statement("double dVar2;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                trace.statement("dVar2 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);");
                trace.statement("DAT_18040a4c0 = (int)dVar2;");
                if (trace.condition("if (0x7f < DAT_18040a4c0 - 1U)")) {
                    trace.statement("_DAT_1803e908c = 0xffffffff;");
                    trace.statement("DAT_18040a4c0 = 0;");
                    trace.statement("return 0;");
                }
                if (trace.checked_condition("if (DAT_1803fa608 != 0)", [&]() -> bool { return static_cast<bool>(image::DAT_1803fa608 != 0); })) {
                    trace.statement("_DAT_1803e908c = *(undefined4 *)(DAT_1803fa608 + 4);");
                    trace.statement("return 0;");
                }
                trace.statement("_DAT_1803e908c = 0;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e8d40;
}

// 0x1800e8dc0 FUN_1800e8dc0
// source: re/dump/decompile/0x1800e8dc0_FUN_1800e8dc0.c
// size: 145 bytes; thunk: false
// body sha256: bfd9425813c176eb8cf988903e7e9c81a60409332ecdc89f2d136904b3c39168
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e8dc0{
    "0x1800e8dc0",
    "FUN_1800e8dc0",
    R"F1800e8dc0S(undefined FUN_1800e8dc0())F1800e8dc0S",
    R"B1800e8dc0(// 0x1800e8dc0  FUN_1800e8dc0
// size=145 thunk=false
// signature: undefined FUN_1800e8dc0()
// status: ok


undefined8 FUN_1800e8dc0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  lVar2 = FUN_180039770();
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) == param_1)) {
    cVar1 = FUN_1800e7ad0(lVar2);
    if (cVar1 == '\0') {
      DAT_1803e8a10 = 0xffffffff;
      return 0;
    }
    DAT_1803e9be0 = local_18;
    DAT_1803e9be8 = local_10;
    DAT_1803e9be4 = local_14;
    if (DAT_1803fa608 != 0) {
      DAT_1803e8a10 = *(undefined4 *)(DAT_1803fa608 + 4);
      return 0;
    }
    DAT_1803e8a10 = 0;
  }
  return 0;
}


)B1800e8dc0",
    "bfd9425813c176eb8cf988903e7e9c81a60409332ecdc89f2d136904b3c39168",
    R"F1800e8dc0C(FUN_180039770
FUN_1800e7ad0)F1800e8dc0C",
    R"F1800e8dc0D(DAT_1803e8a10
DAT_1803e9be0
DAT_1803e9be4
DAT_1803e9be8
DAT_1803fa608)F1800e8dc0D",
    R"F1800e8dc0T()F1800e8dc0T",
    R"F1800e8dc0F(17: if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) == param_1)) {
19: if (cVar1 == '\0') {
21: return 0;
26: if (DAT_1803fa608 != 0) {
28: return 0;
32: return 0;)F1800e8dc0F",
    R"F1800e8dc0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e8a10.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e9be0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e9be4.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e9be8.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa608.)F1800e8dc0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e8dc0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e8dc0", "FUN_1800e8dc0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] char cVar1{};
    [[maybe_unused]] std::int64_t lVar2{};
    [[maybe_unused]] std::uint32_t local_18{};
    [[maybe_unused]] std::uint32_t local_14{};
    [[maybe_unused]] std::uint32_t local_10{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e8a10.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e9be0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e9be4.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e9be8.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa608.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("FUN_1800e7ad0", lVar2);
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_1800e7ad0", reinterpret_cast<const void*>(&image::FUN_1800e7ad0));
    trace.data_ref("DAT_1803e8a10", static_cast<const void*>(&image::DAT_1803e8a10));
    trace.data_ref("DAT_1803e9be0", static_cast<const void*>(&image::DAT_1803e9be0));
    trace.data_ref("DAT_1803e9be4", static_cast<const void*>(&image::DAT_1803e9be4));
    trace.data_ref("DAT_1803e9be8", static_cast<const void*>(&image::DAT_1803e9be8));
    trace.data_ref("DAT_1803fa608", static_cast<const void*>(&image::DAT_1803fa608));
    // body sha256: bfd9425813c176eb8cf988903e7e9c81a60409332ecdc89f2d136904b3c39168
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("char cVar1;");
            trace.statement("longlong lVar2;");
            trace.statement("undefined4 local_18;");
            trace.statement("undefined4 local_14;");
            trace.statement("undefined4 local_10;");
            trace.statement("lVar2 = FUN_180039770();");
            if (trace.checked_condition("if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) == param_1))", [&]() -> bool { return static_cast<bool>((lVar2 != 0) && (load_at<std::int64_t>(lVar2 + 8, 0) == param_1)); })) {
                trace.statement("cVar1 = FUN_1800e7ad0(lVar2);");
                if (trace.checked_condition("if (cVar1 == '\\0')", [&]() -> bool { return static_cast<bool>(cVar1 == '\0'); })) {
                    trace.statement("DAT_1803e8a10 = 0xffffffff;");
                    trace.statement("return 0;");
                }
                trace.statement("DAT_1803e9be0 = local_18;");
                trace.statement("DAT_1803e9be8 = local_10;");
                trace.statement("DAT_1803e9be4 = local_14;");
                if (trace.checked_condition("if (DAT_1803fa608 != 0)", [&]() -> bool { return static_cast<bool>(image::DAT_1803fa608 != 0); })) {
                    trace.statement("DAT_1803e8a10 = *(undefined4 *)(DAT_1803fa608 + 4);");
                    trace.statement("return 0;");
                }
                trace.statement("DAT_1803e8a10 = 0;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e8dc0;
}

// 0x1800e8e60 FUN_1800e8e60
// source: re/dump/decompile/0x1800e8e60_FUN_1800e8e60.c
// size: 63 bytes; thunk: false
// body sha256: 6084c7c92a4f245a2d9ea1bc535543191cf1221745f649dde05f8f1a7c1a43e8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e8e60{
    "0x1800e8e60",
    "FUN_1800e8e60",
    R"F1800e8e60S(undefined FUN_1800e8e60())F1800e8e60S",
    R"B1800e8e60(// 0x1800e8e60  FUN_1800e8e60
// size=63 thunk=false
// signature: undefined FUN_1800e8e60()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800e8e60(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_180039770();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) == param_1)) {
    DAT_18040a4c0 = 0;
    _DAT_1803e908c = 0xffffffff;
    DAT_1803e8a10 = 0xffffffff;
  }
  return 0;
}


)B1800e8e60",
    "6084c7c92a4f245a2d9ea1bc535543191cf1221745f649dde05f8f1a7c1a43e8",
    R"F1800e8e60C(FUN_180039770)F1800e8e60C",
    R"F1800e8e60D(DAT_1803e8a10
_DAT_1803e908c
DAT_18040a4c0)F1800e8e60D",
    R"F1800e8e60T()F1800e8e60T",
    R"F1800e8e60F(15: if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) == param_1)) {
20: return 0;)F1800e8e60F",
    R"F1800e8e60U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e8a10.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference _DAT_1803e908c.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18040a4c0.)F1800e8e60U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e8e60() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e8e60", "FUN_1800e8e60");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t lVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e8a10.
    // TODO: recover global/data declaration, type, value and runtime page/layout for _DAT_1803e908c.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18040a4c0.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803e8a10", static_cast<const void*>(&image::DAT_1803e8a10));
    trace.data_ref("_DAT_1803e908c", static_cast<const void*>(&image::_DAT_1803e908c));
    trace.data_ref("DAT_18040a4c0", static_cast<const void*>(&image::DAT_18040a4c0));
    // body sha256: 6084c7c92a4f245a2d9ea1bc535543191cf1221745f649dde05f8f1a7c1a43e8
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong lVar1;");
            trace.statement("lVar1 = FUN_180039770();");
            if (trace.checked_condition("if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) == param_1))", [&]() -> bool { return static_cast<bool>((lVar1 != 0) && (load_at<std::int64_t>(lVar1 + 8, 0) == param_1)); })) {
                trace.statement("DAT_18040a4c0 = 0;");
                trace.statement("_DAT_1803e908c = 0xffffffff;");
                trace.statement("DAT_1803e8a10 = 0xffffffff;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e8e60;
}

// 0x1800e8ea0 FUN_1800e8ea0
// source: re/dump/decompile/0x1800e8ea0_FUN_1800e8ea0.c
// size: 84 bytes; thunk: false
// body sha256: d1957d38a4941b2ae9fbbd6cd02b40a3a75f5fb27c51d1c6cd5983a83ad1f382
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e8ea0{
    "0x1800e8ea0",
    "FUN_1800e8ea0",
    R"F1800e8ea0S(undefined FUN_1800e8ea0())F1800e8ea0S",
    R"B1800e8ea0(// 0x1800e8ea0  FUN_1800e8ea0
// size=84 thunk=false
// signature: undefined FUN_1800e8ea0()
// status: ok


undefined8 FUN_1800e8ea0(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
    pcVar1 = *(code **)(*plVar3 + 0xf8);
    uVar2 = FUN_1800e21f0();
    (*pcVar1)(plVar3,uVar2);
    return 1;
  }
  return 0;
}


)B1800e8ea0",
    "d1957d38a4941b2ae9fbbd6cd02b40a3a75f5fb27c51d1c6cd5983a83ad1f382",
    R"F1800e8ea0C(FUN_180039770
FUN_1800e21f0)F1800e8ea0C",
    R"F1800e8ea0D()F1800e8ea0D",
    R"F1800e8ea0T()F1800e8ea0T",
    R"F1800e8ea0F(15: if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
19: return 1;
21: return 0;)F1800e8ea0F",
    R"F1800e8ea0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: resolve the indirect call in body 16: pcVar1 = *(code **)(*plVar3 + 0xf8);.
TODO: resolve the indirect call in body 18: (*pcVar1)(plVar3,uVar2);.)F1800e8ea0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e8ea0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e8ea0", "FUN_1800e8ea0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] void* * pcVar1{};
    [[maybe_unused]] std::uint8_t uVar2{};
    [[maybe_unused]] std::int64_t * plVar3{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: resolve the indirect call in body 16: pcVar1 = *(code **)(*plVar3 + 0xf8);.
    // TODO: resolve the indirect call in body 18: (*pcVar1)(plVar3,uVar2);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("FUN_1800e21f0");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_1800e21f0", reinterpret_cast<const void*>(&image::FUN_1800e21f0));
    // body sha256: d1957d38a4941b2ae9fbbd6cd02b40a3a75f5fb27c51d1c6cd5983a83ad1f382
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("code *pcVar1;");
            trace.statement("undefined1 uVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("plVar3 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1))")) {
                trace.statement("pcVar1 = *(code **)(*plVar3 + 0xf8);");
                trace.statement("uVar2 = FUN_1800e21f0();");
                trace.statement("(*pcVar1)(plVar3,uVar2);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e8ea0;
}

// 0x1800e8f00 FUN_1800e8f00
// source: re/dump/decompile/0x1800e8f00_FUN_1800e8f00.c
// size: 91 bytes; thunk: false
// body sha256: f3e0c78516aeba284a3c732a410ce46490e06d07e0d3cf563646edc4d63b7bfa
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e8f00{
    "0x1800e8f00",
    "FUN_1800e8f00",
    R"F1800e8f00S(undefined FUN_1800e8f00())F1800e8f00S",
    R"B1800e8f00(// 0x1800e8f00  FUN_1800e8f00
// size=91 thunk=false
// signature: undefined FUN_1800e8f00()
// status: ok


undefined8 FUN_1800e8f00(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
    pcVar1 = *(code **)(*plVar3 + 0xf8);
    uVar2 = FUN_1800e78f0("freecam");
    (*pcVar1)(plVar3,uVar2);
    return 1;
  }
  return 0;
}


)B1800e8f00",
    "f3e0c78516aeba284a3c732a410ce46490e06d07e0d3cf563646edc4d63b7bfa",
    R"F1800e8f00C(FUN_180039770
FUN_1800e78f0)F1800e8f00C",
    R"F1800e8f00D()F1800e8f00D",
    R"F1800e8f00T("freecam")F1800e8f00T",
    R"F1800e8f00F(15: if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
19: return 1;
21: return 0;)F1800e8f00F",
    R"F1800e8f00U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: resolve the indirect call in body 16: pcVar1 = *(code **)(*plVar3 + 0xf8);.
TODO: resolve the indirect call in body 18: (*pcVar1)(plVar3,uVar2);.)F1800e8f00U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e8f00() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e8f00", "FUN_1800e8f00");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] void* * pcVar1{};
    [[maybe_unused]] std::uint8_t uVar2{};
    [[maybe_unused]] std::int64_t * plVar3{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: resolve the indirect call in body 16: pcVar1 = *(code **)(*plVar3 + 0xf8);.
    // TODO: resolve the indirect call in body 18: (*pcVar1)(plVar3,uVar2);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("FUN_1800e78f0", "freecam");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_1800e78f0", reinterpret_cast<const void*>(&image::FUN_1800e78f0));
    trace.string_literal("freecam");
    // body sha256: f3e0c78516aeba284a3c732a410ce46490e06d07e0d3cf563646edc4d63b7bfa
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("code *pcVar1;");
            trace.statement("undefined1 uVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("plVar3 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1))")) {
                trace.statement("pcVar1 = *(code **)(*plVar3 + 0xf8);");
                trace.statement("uVar2 = FUN_1800e78f0(\"freecam\");");
                trace.statement("(*pcVar1)(plVar3,uVar2);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e8f00;
}

// 0x1800e8f60 FUN_1800e8f60
// source: re/dump/decompile/0x1800e8f60_FUN_1800e8f60.c
// size: 67 bytes; thunk: false
// body sha256: 04d2171266cad171aa8ef2a33a45a6252ba37257dc69ea4af8f63324d987f67d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e8f60{
    "0x1800e8f60",
    "FUN_1800e8f60",
    R"F1800e8f60S(undefined FUN_1800e8f60())F1800e8f60S",
    R"B1800e8f60(// 0x1800e8f60  FUN_1800e8f60
// size=67 thunk=false
// signature: undefined FUN_1800e8f60()
// status: ok


undefined8 FUN_1800e8f60(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    (**(code **)(*plVar1 + 200))(plVar1,1);
    FUN_1800e7970("freecam");
  }
  return 0;
}


)B1800e8f60",
    "04d2171266cad171aa8ef2a33a45a6252ba37257dc69ea4af8f63324d987f67d",
    R"F1800e8f60C(FUN_180039770
FUN_1800e7970)F1800e8f60C",
    R"F1800e8f60D()F1800e8f60D",
    R"F1800e8f60T("freecam")F1800e8f60T",
    R"F1800e8f60F(13: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
17: return 0;)F1800e8f60F",
    R"F1800e8f60U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: resolve the indirect call in body 14: (**(code **)(*plVar1 + 200))(plVar1,1);.)F1800e8f60U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e8f60() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e8f60", "FUN_1800e8f60");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t * plVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: resolve the indirect call in body 14: (**(code **)(*plVar1 + 200))(plVar1,1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("FUN_1800e7970", "freecam");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_1800e7970", reinterpret_cast<const void*>(&image::FUN_1800e7970));
    trace.string_literal("freecam");
    // body sha256: 04d2171266cad171aa8ef2a33a45a6252ba37257dc69ea4af8f63324d987f67d
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong *plVar1;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                trace.statement("(**(code **)(*plVar1 + 200))(plVar1,1);");
                trace.statement("FUN_1800e7970(\"freecam\");");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e8f60;
}

// 0x1800e8fb0 FUN_1800e8fb0
// source: re/dump/decompile/0x1800e8fb0_FUN_1800e8fb0.c
// size: 99 bytes; thunk: false
// body sha256: 220fae452c6c6b1ca677fc9394b3bc72931e65d24cc16ac48f0dbc53a3c05c6b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e8fb0{
    "0x1800e8fb0",
    "FUN_1800e8fb0",
    R"F1800e8fb0S(undefined FUN_1800e8fb0())F1800e8fb0S",
    R"B1800e8fb0(// 0x1800e8fb0  FUN_1800e8fb0
// size=99 thunk=false
// signature: undefined FUN_1800e8fb0()
// status: ok


undefined8 FUN_1800e8fb0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  lVar2 = FUN_180039770();
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) == param_1)) {
    cVar1 = FUN_1800e7ad0(lVar2);
    if (cVar1 != '\0') {
      DAT_1803db630 = local_18;
      DAT_1803db638 = local_10;
      DAT_1803db634 = local_14;
      DAT_1803db62c = 1;
    }
  }
  return 0;
}


)B1800e8fb0",
    "220fae452c6c6b1ca677fc9394b3bc72931e65d24cc16ac48f0dbc53a3c05c6b",
    R"F1800e8fb0C(FUN_180039770
FUN_1800e7ad0)F1800e8fb0C",
    R"F1800e8fb0D(DAT_1803db62c
DAT_1803db630
DAT_1803db634
DAT_1803db638)F1800e8fb0D",
    R"F1800e8fb0T()F1800e8fb0T",
    R"F1800e8fb0F(17: if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) == param_1)) {
19: if (cVar1 != '\0') {
26: return 0;)F1800e8fb0F",
    R"F1800e8fb0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803db62c.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803db630.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803db634.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803db638.)F1800e8fb0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e8fb0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e8fb0", "FUN_1800e8fb0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] char cVar1{};
    [[maybe_unused]] std::int64_t lVar2{};
    [[maybe_unused]] std::uint32_t local_18{};
    [[maybe_unused]] std::uint32_t local_14{};
    [[maybe_unused]] std::uint32_t local_10{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803db62c.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803db630.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803db634.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803db638.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("FUN_1800e7ad0", lVar2);
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_1800e7ad0", reinterpret_cast<const void*>(&image::FUN_1800e7ad0));
    trace.data_ref("DAT_1803db62c", static_cast<const void*>(&image::DAT_1803db62c));
    trace.data_ref("DAT_1803db630", static_cast<const void*>(&image::DAT_1803db630));
    trace.data_ref("DAT_1803db634", static_cast<const void*>(&image::DAT_1803db634));
    trace.data_ref("DAT_1803db638", static_cast<const void*>(&image::DAT_1803db638));
    // body sha256: 220fae452c6c6b1ca677fc9394b3bc72931e65d24cc16ac48f0dbc53a3c05c6b
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("char cVar1;");
            trace.statement("longlong lVar2;");
            trace.statement("undefined4 local_18;");
            trace.statement("undefined4 local_14;");
            trace.statement("undefined4 local_10;");
            trace.statement("lVar2 = FUN_180039770();");
            if (trace.checked_condition("if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) == param_1))", [&]() -> bool { return static_cast<bool>((lVar2 != 0) && (load_at<std::int64_t>(lVar2 + 8, 0) == param_1)); })) {
                trace.statement("cVar1 = FUN_1800e7ad0(lVar2);");
                if (trace.checked_condition("if (cVar1 != '\\0')", [&]() -> bool { return static_cast<bool>(cVar1 != '\0'); })) {
                    trace.statement("DAT_1803db630 = local_18;");
                    trace.statement("DAT_1803db638 = local_10;");
                    trace.statement("DAT_1803db634 = local_14;");
                    trace.statement("DAT_1803db62c = 1;");
                }
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e8fb0;
}

// 0x1800e9020 FUN_1800e9020
// source: re/dump/decompile/0x1800e9020_FUN_1800e9020.c
// size: 256 bytes; thunk: false
// body sha256: 81f490438b60c18ac58918250e37119570fee74a86f3a94594aca7ae7b508ccc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e9020{
    "0x1800e9020",
    "FUN_1800e9020",
    R"F1800e9020S(undefined FUN_1800e9020())F1800e9020S",
    R"B1800e9020(// 0x1800e9020  FUN_1800e9020
// size=256 thunk=false
// signature: undefined FUN_1800e9020()
// status: ok


undefined8 FUN_1800e9020(longlong param_1)

{
  double dVar1;
  double dVar2;
  char cVar3;
  short sVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)FUN_180039770();
  if ((plVar5 != (longlong *)0x0) && (plVar5[1] == param_1)) {
    cVar3 = (**(code **)(*plVar5 + 0x138))(plVar5,1,3);
    if (cVar3 != '\0') {
      cVar3 = (**(code **)(*plVar5 + 0x138))(plVar5,2,3);
      if (cVar3 != '\0') {
        dVar1 = (double)(**(code **)(*plVar5 + 0xc0))(plVar5,1);
        dVar2 = (double)(**(code **)(*plVar5 + 0xc0))(plVar5,2);
        sVar4 = _fdclass((float)dVar1);
        if (sVar4 < 1) {
          sVar4 = _fdclass((float)dVar2);
          if (sVar4 < 1) {
            DAT_1803db648 = 0;
            DAT_1803db63c = 1;
            DAT_1803db640 = (float)dVar1;
            DAT_1803db644 = (float)dVar2;
          }
        }
        return 0;
      }
    }
  }
  return 0;
}


)B1800e9020",
    "81f490438b60c18ac58918250e37119570fee74a86f3a94594aca7ae7b508ccc",
    R"F1800e9020C(FUN_180039770)F1800e9020C",
    R"F1800e9020D(DAT_1803db63c
DAT_1803db640
DAT_1803db644
DAT_1803db648)F1800e9020D",
    R"F1800e9020T()F1800e9020T",
    R"F1800e9020F(17: if ((plVar5 != (longlong *)0x0) && (plVar5[1] == param_1)) {
19: if (cVar3 != '\0') {
21: if (cVar3 != '\0') {
25: if (sVar4 < 1) {
27: if (sVar4 < 1) {
34: return 0;
38: return 0;)F1800e9020F",
    R"F1800e9020U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803db63c.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803db640.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803db644.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803db648.
TODO: resolve the indirect call in body 18: cVar3 = (**(code **)(*plVar5 + 0x138))(plVar5,1,3);.
TODO: resolve the indirect call in body 20: cVar3 = (**(code **)(*plVar5 + 0x138))(plVar5,2,3);.
TODO: resolve the indirect call in body 22: dVar1 = (double)(**(code **)(*plVar5 + 0xc0))(plVar5,1);.
TODO: resolve the indirect call in body 23: dVar2 = (double)(**(code **)(*plVar5 + 0xc0))(plVar5,2);.)F1800e9020U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e9020() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e9020", "FUN_1800e9020");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] double dVar1{};
    [[maybe_unused]] double dVar2{};
    [[maybe_unused]] char cVar3{};
    [[maybe_unused]] std::int16_t sVar4{};
    [[maybe_unused]] std::int64_t * plVar5{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803db63c.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803db640.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803db644.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803db648.
    // TODO: resolve the indirect call in body 18: cVar3 = (**(code **)(*plVar5 + 0x138))(plVar5,1,3);.
    // TODO: resolve the indirect call in body 20: cVar3 = (**(code **)(*plVar5 + 0x138))(plVar5,2,3);.
    // TODO: resolve the indirect call in body 22: dVar1 = (double)(**(code **)(*plVar5 + 0xc0))(plVar5,1);.
    // TODO: resolve the indirect call in body 23: dVar2 = (double)(**(code **)(*plVar5 + 0xc0))(plVar5,2);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar5 != (longlong *)0x0) && (plVar5[1] == param_1)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("_fdclass", static_cast<float>(dVar1));
    trace.call_arguments("_fdclass", static_cast<float>(dVar2));
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803db63c", static_cast<const void*>(&image::DAT_1803db63c));
    trace.data_ref("DAT_1803db640", static_cast<const void*>(&image::DAT_1803db640));
    trace.data_ref("DAT_1803db644", static_cast<const void*>(&image::DAT_1803db644));
    trace.data_ref("DAT_1803db648", static_cast<const void*>(&image::DAT_1803db648));
    // body sha256: 81f490438b60c18ac58918250e37119570fee74a86f3a94594aca7ae7b508ccc
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("double dVar1;");
            trace.statement("double dVar2;");
            trace.statement("char cVar3;");
            trace.statement("short sVar4;");
            trace.statement("longlong *plVar5;");
            trace.statement("plVar5 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar5 != (longlong *)0x0) && (plVar5[1] == param_1))")) {
                trace.statement("cVar3 = (**(code **)(*plVar5 + 0x138))(plVar5,1,3);");
                if (trace.checked_condition("if (cVar3 != '\\0')", [&]() -> bool { return static_cast<bool>(cVar3 != '\0'); })) {
                    trace.statement("cVar3 = (**(code **)(*plVar5 + 0x138))(plVar5,2,3);");
                    if (trace.checked_condition("if (cVar3 != '\\0')", [&]() -> bool { return static_cast<bool>(cVar3 != '\0'); })) {
                        trace.statement("dVar1 = (double)(**(code **)(*plVar5 + 0xc0))(plVar5,1);");
                        trace.statement("dVar2 = (double)(**(code **)(*plVar5 + 0xc0))(plVar5,2);");
                        trace.statement("sVar4 = _fdclass((float)dVar1);");
                        if (trace.checked_condition("if (sVar4 < 1)", [&]() -> bool { return static_cast<bool>(sVar4 < 1); })) {
                            trace.statement("sVar4 = _fdclass((float)dVar2);");
                            if (trace.checked_condition("if (sVar4 < 1)", [&]() -> bool { return static_cast<bool>(sVar4 < 1); })) {
                                trace.statement("DAT_1803db648 = 0;");
                                trace.statement("DAT_1803db63c = 1;");
                                trace.statement("DAT_1803db640 = (float)dVar1;");
                                trace.statement("DAT_1803db644 = (float)dVar2;");
                            }
                        }
                        trace.statement("return 0;");
                    }
                }
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e9020;
}

// 0x1800e9120 FUN_1800e9120
// source: re/dump/decompile/0x1800e9120_FUN_1800e9120.c
// size: 219 bytes; thunk: false
// body sha256: 5b952389b4c185ac57100fee4107c9632cf7b62df01205f398c4dc041b947990
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e9120{
    "0x1800e9120",
    "FUN_1800e9120",
    R"F1800e9120S(undefined FUN_1800e9120())F1800e9120S",
    R"B1800e9120(// 0x1800e9120  FUN_1800e9120
// size=219 thunk=false
// signature: undefined FUN_1800e9120()
// status: ok


undefined8 FUN_1800e9120(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  TypeDescriptor *pTVar5;
  ulonglong uVar6;
  TypeDescriptor *pTVar7;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
    return 0;
  }
  lVar1 = *plVar3;
  lVar4 = FUN_1800e77b0("freecam","speed");
  if (lVar4 != 0) {
    pTVar7 = (TypeDescriptor *)(*(ulonglong *)(lVar4 + 0x48) & 0xfffffffffffffffc);
    pTVar5 = &.X::RTTI_Type_Descriptor;
    if (pTVar7 != (TypeDescriptor *)0x0) {
      pTVar5 = pTVar7;
    }
    iVar2 = __std_type_info_compare(&pTVar5->spare,0x1803edf28);
    if (iVar2 == 0) {
      if (((int *)(lVar4 + 0x10) == (int *)0x0) ||
         (uVar6 = *(ulonglong *)(lVar4 + 0x48) & 0xfffffffffffffffc, uVar6 == 0)) {
LAB_1800e91f6:
                    /* WARNING: Subroutine does not return */
        FUN_180014070();
      }
      iVar2 = __std_type_info_compare(uVar6 + 8,0x1803edf28);
      if (iVar2 != 0) goto LAB_1800e91f6;
      iVar2 = *(int *)(lVar4 + 0x10);
      goto LAB_1800e91be;
    }
  }
  iVar2 = 0;
LAB_1800e91be:
  (**(code **)(lVar1 + 0xf0))(plVar3,(double)iVar2);
  return 1;
}


)B1800e9120",
    "5b952389b4c185ac57100fee4107c9632cf7b62df01205f398c4dc041b947990",
    R"F1800e9120C(FUN_180014070
FUN_180039770
FUN_1800e77b0)F1800e9120C",
    R"F1800e9120D(LAB_1800e91be
LAB_1800e91f6)F1800e9120D",
    R"F1800e9120T("speed"
"freecam")F1800e9120T",
    R"F1800e9120F(19: if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
20: return 0;
24: if (lVar4 != 0) {
27: if (pTVar7 != (TypeDescriptor *)0x0) {
31: if (iVar2 == 0) {
32: if (((int *)(lVar4 + 0x10) == (int *)0x0) ||
34: LAB_1800e91f6:
39: if (iVar2 != 0) goto LAB_1800e91f6;
41: goto LAB_1800e91be;
45: LAB_1800e91be:
47: return 1;)F1800e9120F",
    R"F1800e9120U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference LAB_1800e91be.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference LAB_1800e91f6.
TODO: resolve the indirect call in body 46: (**(code **)(lVar1 + 0xf0))(plVar3,(double)iVar2);.)F1800e9120U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e9120() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e9120", "FUN_1800e9120");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t lVar1{};
    [[maybe_unused]] std::int32_t iVar2{};
    [[maybe_unused]] std::int64_t * plVar3{};
    [[maybe_unused]] std::int64_t lVar4{};
    [[maybe_unused]] std::uint64_t uVar6{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for LAB_1800e91be.
    // TODO: recover global/data declaration, type, value and runtime page/layout for LAB_1800e91f6.
    // TODO: resolve the indirect call in body 46: (**(code **)(lVar1 + 0xf0))(plVar3,(double)iVar2);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) [reason: pointer-cast target not proven]
    // TODO: condition expression type not recovered: if (pTVar7 != (TypeDescriptor *)0x0) [reason: pointer-cast target not proven]
    // TODO: call arguments not type-recovered for __std_type_info_compare: &pTVar5->spare,0x1803edf28 [reason: unknown aggregate layout]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("FUN_1800e77b0", "freecam", "speed");
    trace.call_arguments("FUN_180014070");
    trace.call_arguments("__std_type_info_compare", uVar6 + 8, 0x1803edf28);
    trace.call_target("FUN_180014070", reinterpret_cast<const void*>(&image::FUN_180014070));
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_1800e77b0", reinterpret_cast<const void*>(&image::FUN_1800e77b0));
    trace.string_literal("speed");
    trace.string_literal("freecam");
    // body sha256: 5b952389b4c185ac57100fee4107c9632cf7b62df01205f398c4dc041b947990
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong lVar1;");
            trace.statement("int iVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("longlong lVar4;");
            trace.statement("TypeDescriptor *pTVar5;");
            trace.statement("ulonglong uVar6;");
            trace.statement("TypeDescriptor *pTVar7;");
            trace.statement("plVar3 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1))")) {
                trace.statement("return 0;");
            }
            trace.statement("lVar1 = *plVar3;");
            trace.statement("lVar4 = FUN_1800e77b0(\"freecam\",\"speed\");");
            if (trace.checked_condition("if (lVar4 != 0)", [&]() -> bool { return static_cast<bool>(lVar4 != 0); })) {
                trace.statement("pTVar7 = (TypeDescriptor *)(*(ulonglong *)(lVar4 + 0x48) & 0xfffffffffffffffc);");
                trace.statement("pTVar5 = &.X::RTTI_Type_Descriptor;");
                if (trace.condition("if (pTVar7 != (TypeDescriptor *)0x0)")) {
                    trace.statement("pTVar5 = pTVar7;");
                }
                trace.statement("iVar2 = __std_type_info_compare(&pTVar5->spare,0x1803edf28);");
                if (trace.checked_condition("if (iVar2 == 0)", [&]() -> bool { return static_cast<bool>(iVar2 == 0); })) {
                    if (trace.condition("if (((int *)(lVar4 + 0x10) == (int *)0x0) || (uVar6 = *(ulonglong *)(lVar4 + 0x48) & 0xfffffffffffffffc, uVar6 == 0))")) {
                        LAB_1800e91f6: ;
                        trace.statement("FUN_180014070();");
                    }
                    trace.statement("iVar2 = __std_type_info_compare(uVar6 + 8,0x1803edf28);");
                    if (trace.condition("if (iVar2 != 0) goto LAB_1800e91f6; iVar2 = *(int *)(lVar4 + 0x10); goto LAB_1800e91be; } } iVar2 = 0; LAB_1800e91be: (**(code **)(lVar1 + 0xf0))(plVar3,(double)iVar2); return 1; }")) {
                    }
                }
            }
        }
    return kFunction_0x1800e9120;
}

// 0x1800e9200 FUN_1800e9200
// source: re/dump/decompile/0x1800e9200_FUN_1800e9200.c
// size: 114 bytes; thunk: false
// body sha256: 296fd1b81e34a6e1852ae060eea2b1af5af73b1f173e83eee2ee8571f1d2f65d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e9200{
    "0x1800e9200",
    "FUN_1800e9200",
    R"F1800e9200S(undefined FUN_1800e9200())F1800e9200S",
    R"B1800e9200(// 0x1800e9200  FUN_1800e9200
// size=114 thunk=false
// signature: undefined FUN_1800e9200()
// status: ok


undefined8 FUN_1800e9200(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  double dVar3;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);
    if (cVar1 != '\0') {
      dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);
      FUN_1800e7a20("freecam","speed",(int)dVar3);
    }
  }
  return 0;
}


)B1800e9200",
    "296fd1b81e34a6e1852ae060eea2b1af5af73b1f173e83eee2ee8571f1d2f65d",
    R"F1800e9200C(FUN_180039770
FUN_1800e7a20)F1800e9200C",
    R"F1800e9200D()F1800e9200D",
    R"F1800e9200T("speed"
"freecam")F1800e9200T",
    R"F1800e9200F(15: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
17: if (cVar1 != '\0') {
22: return 0;)F1800e9200F",
    R"F1800e9200U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: resolve the indirect call in body 16: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);.
TODO: resolve the indirect call in body 18: dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);.)F1800e9200U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e9200() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e9200", "FUN_1800e9200");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] char cVar1{};
    [[maybe_unused]] std::int64_t * plVar2{};
    [[maybe_unused]] double dVar3{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: resolve the indirect call in body 16: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);.
    // TODO: resolve the indirect call in body 18: dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("FUN_1800e7a20", "freecam", "speed", static_cast<std::int32_t>(dVar3));
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_1800e7a20", reinterpret_cast<const void*>(&image::FUN_1800e7a20));
    trace.string_literal("speed");
    trace.string_literal("freecam");
    // body sha256: 296fd1b81e34a6e1852ae060eea2b1af5af73b1f173e83eee2ee8571f1d2f65d
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("char cVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("double dVar3;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1))")) {
                trace.statement("cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);");
                if (trace.checked_condition("if (cVar1 != '\\0')", [&]() -> bool { return static_cast<bool>(cVar1 != '\0'); })) {
                    trace.statement("dVar3 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);");
                    trace.statement("FUN_1800e7a20(\"freecam\",\"speed\",(int)dVar3);");
                }
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e9200;
}

// 0x1800e9280 FUN_1800e9280
// source: re/dump/decompile/0x1800e9280_FUN_1800e9280.c
// size: 91 bytes; thunk: false
// body sha256: 068b7c20692788db2d4ce83adc6f32e15ab6d1c290211777e7c5cfe01c4961f5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e9280{
    "0x1800e9280",
    "FUN_1800e9280",
    R"F1800e9280S(undefined FUN_1800e9280())F1800e9280S",
    R"B1800e9280(// 0x1800e9280  FUN_1800e9280
// size=91 thunk=false
// signature: undefined FUN_1800e9280()
// status: ok


undefined8 FUN_1800e9280(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
    pcVar1 = *(code **)(*plVar3 + 0xf8);
    uVar2 = FUN_1800e78f0("thirdperson");
    (*pcVar1)(plVar3,uVar2);
    return 1;
  }
  return 0;
}


)B1800e9280",
    "068b7c20692788db2d4ce83adc6f32e15ab6d1c290211777e7c5cfe01c4961f5",
    R"F1800e9280C(FUN_180039770
FUN_1800e78f0)F1800e9280C",
    R"F1800e9280D()F1800e9280D",
    R"F1800e9280T("thirdperson")F1800e9280T",
    R"F1800e9280F(15: if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
19: return 1;
21: return 0;)F1800e9280F",
    R"F1800e9280U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: resolve the indirect call in body 16: pcVar1 = *(code **)(*plVar3 + 0xf8);.
TODO: resolve the indirect call in body 18: (*pcVar1)(plVar3,uVar2);.)F1800e9280U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e9280() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e9280", "FUN_1800e9280");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] void* * pcVar1{};
    [[maybe_unused]] std::uint8_t uVar2{};
    [[maybe_unused]] std::int64_t * plVar3{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: resolve the indirect call in body 16: pcVar1 = *(code **)(*plVar3 + 0xf8);.
    // TODO: resolve the indirect call in body 18: (*pcVar1)(plVar3,uVar2);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("FUN_1800e78f0", "thirdperson");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_1800e78f0", reinterpret_cast<const void*>(&image::FUN_1800e78f0));
    trace.string_literal("thirdperson");
    // body sha256: 068b7c20692788db2d4ce83adc6f32e15ab6d1c290211777e7c5cfe01c4961f5
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("code *pcVar1;");
            trace.statement("undefined1 uVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("plVar3 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1))")) {
                trace.statement("pcVar1 = *(code **)(*plVar3 + 0xf8);");
                trace.statement("uVar2 = FUN_1800e78f0(\"thirdperson\");");
                trace.statement("(*pcVar1)(plVar3,uVar2);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e9280;
}

// 0x1800e92e0 FUN_1800e92e0
// source: re/dump/decompile/0x1800e92e0_FUN_1800e92e0.c
// size: 67 bytes; thunk: false
// body sha256: 9de149ac7d8c52285ce2027f22ca3349a58cb0d934e413d88f1aee5d0e15e66b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e92e0{
    "0x1800e92e0",
    "FUN_1800e92e0",
    R"F1800e92e0S(undefined FUN_1800e92e0())F1800e92e0S",
    R"B1800e92e0(// 0x1800e92e0  FUN_1800e92e0
// size=67 thunk=false
// signature: undefined FUN_1800e92e0()
// status: ok


undefined8 FUN_1800e92e0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    (**(code **)(*plVar1 + 200))(plVar1,1);
    FUN_1800e7970("thirdperson");
  }
  return 0;
}


)B1800e92e0",
    "9de149ac7d8c52285ce2027f22ca3349a58cb0d934e413d88f1aee5d0e15e66b",
    R"F1800e92e0C(FUN_180039770
FUN_1800e7970)F1800e92e0C",
    R"F1800e92e0D()F1800e92e0D",
    R"F1800e92e0T("thirdperson")F1800e92e0T",
    R"F1800e92e0F(13: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
17: return 0;)F1800e92e0F",
    R"F1800e92e0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: resolve the indirect call in body 14: (**(code **)(*plVar1 + 200))(plVar1,1);.)F1800e92e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e92e0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e92e0", "FUN_1800e92e0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t * plVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: resolve the indirect call in body 14: (**(code **)(*plVar1 + 200))(plVar1,1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("FUN_1800e7970", "thirdperson");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_1800e7970", reinterpret_cast<const void*>(&image::FUN_1800e7970));
    trace.string_literal("thirdperson");
    // body sha256: 9de149ac7d8c52285ce2027f22ca3349a58cb0d934e413d88f1aee5d0e15e66b
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong *plVar1;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                trace.statement("(**(code **)(*plVar1 + 200))(plVar1,1);");
                trace.statement("FUN_1800e7970(\"thirdperson\");");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e92e0;
}

// 0x1800e9330 FUN_1800e9330
// source: re/dump/decompile/0x1800e9330_FUN_1800e9330.c
// size: 219 bytes; thunk: false
// body sha256: 3107ab896d357a45a5dfdfdbb740eafdfceb75055dfe93afd31ef81ee3217025
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e9330{
    "0x1800e9330",
    "FUN_1800e9330",
    R"F1800e9330S(undefined FUN_1800e9330())F1800e9330S",
    R"B1800e9330(// 0x1800e9330  FUN_1800e9330
// size=219 thunk=false
// signature: undefined FUN_1800e9330()
// status: ok


undefined8 FUN_1800e9330(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  TypeDescriptor *pTVar5;
  ulonglong uVar6;
  TypeDescriptor *pTVar7;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
    return 0;
  }
  lVar1 = *plVar3;
  lVar4 = FUN_1800e77b0("thirdperson","distance");
  if (lVar4 != 0) {
    pTVar7 = (TypeDescriptor *)(*(ulonglong *)(lVar4 + 0x48) & 0xfffffffffffffffc);
    pTVar5 = &.X::RTTI_Type_Descriptor;
    if (pTVar7 != (TypeDescriptor *)0x0) {
      pTVar5 = pTVar7;
    }
    iVar2 = __std_type_info_compare(&pTVar5->spare,0x1803edf28);
    if (iVar2 == 0) {
      if (((int *)(lVar4 + 0x10) == (int *)0x0) ||
         (uVar6 = *(ulonglong *)(lVar4 + 0x48) & 0xfffffffffffffffc, uVar6 == 0)) {
LAB_1800e9406:
                    /* WARNING: Subroutine does not return */
        FUN_180014070();
      }
      iVar2 = __std_type_info_compare(uVar6 + 8,0x1803edf28);
      if (iVar2 != 0) goto LAB_1800e9406;
      iVar2 = *(int *)(lVar4 + 0x10);
      goto LAB_1800e93ce;
    }
  }
  iVar2 = 0;
LAB_1800e93ce:
  (**(code **)(lVar1 + 0xf0))(plVar3,(double)iVar2);
  return 1;
}


)B1800e9330",
    "3107ab896d357a45a5dfdfdbb740eafdfceb75055dfe93afd31ef81ee3217025",
    R"F1800e9330C(FUN_180014070
FUN_180039770
FUN_1800e77b0)F1800e9330C",
    R"F1800e9330D(LAB_1800e93ce
LAB_1800e9406)F1800e9330D",
    R"F1800e9330T("distance"
"thirdperson")F1800e9330T",
    R"F1800e9330F(19: if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
20: return 0;
24: if (lVar4 != 0) {
27: if (pTVar7 != (TypeDescriptor *)0x0) {
31: if (iVar2 == 0) {
32: if (((int *)(lVar4 + 0x10) == (int *)0x0) ||
34: LAB_1800e9406:
39: if (iVar2 != 0) goto LAB_1800e9406;
41: goto LAB_1800e93ce;
45: LAB_1800e93ce:
47: return 1;)F1800e9330F",
    R"F1800e9330U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference LAB_1800e93ce.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference LAB_1800e9406.
TODO: resolve the indirect call in body 46: (**(code **)(lVar1 + 0xf0))(plVar3,(double)iVar2);.)F1800e9330U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e9330() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e9330", "FUN_1800e9330");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t lVar1{};
    [[maybe_unused]] std::int32_t iVar2{};
    [[maybe_unused]] std::int64_t * plVar3{};
    [[maybe_unused]] std::int64_t lVar4{};
    [[maybe_unused]] std::uint64_t uVar6{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for LAB_1800e93ce.
    // TODO: recover global/data declaration, type, value and runtime page/layout for LAB_1800e9406.
    // TODO: resolve the indirect call in body 46: (**(code **)(lVar1 + 0xf0))(plVar3,(double)iVar2);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) [reason: pointer-cast target not proven]
    // TODO: condition expression type not recovered: if (pTVar7 != (TypeDescriptor *)0x0) [reason: pointer-cast target not proven]
    // TODO: call arguments not type-recovered for __std_type_info_compare: &pTVar5->spare,0x1803edf28 [reason: unknown aggregate layout]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("FUN_1800e77b0", "thirdperson", "distance");
    trace.call_arguments("FUN_180014070");
    trace.call_arguments("__std_type_info_compare", uVar6 + 8, 0x1803edf28);
    trace.call_target("FUN_180014070", reinterpret_cast<const void*>(&image::FUN_180014070));
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_1800e77b0", reinterpret_cast<const void*>(&image::FUN_1800e77b0));
    trace.string_literal("distance");
    trace.string_literal("thirdperson");
    // body sha256: 3107ab896d357a45a5dfdfdbb740eafdfceb75055dfe93afd31ef81ee3217025
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong lVar1;");
            trace.statement("int iVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("longlong lVar4;");
            trace.statement("TypeDescriptor *pTVar5;");
            trace.statement("ulonglong uVar6;");
            trace.statement("TypeDescriptor *pTVar7;");
            trace.statement("plVar3 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1))")) {
                trace.statement("return 0;");
            }
            trace.statement("lVar1 = *plVar3;");
            trace.statement("lVar4 = FUN_1800e77b0(\"thirdperson\",\"distance\");");
            if (trace.checked_condition("if (lVar4 != 0)", [&]() -> bool { return static_cast<bool>(lVar4 != 0); })) {
                trace.statement("pTVar7 = (TypeDescriptor *)(*(ulonglong *)(lVar4 + 0x48) & 0xfffffffffffffffc);");
                trace.statement("pTVar5 = &.X::RTTI_Type_Descriptor;");
                if (trace.condition("if (pTVar7 != (TypeDescriptor *)0x0)")) {
                    trace.statement("pTVar5 = pTVar7;");
                }
                trace.statement("iVar2 = __std_type_info_compare(&pTVar5->spare,0x1803edf28);");
                if (trace.checked_condition("if (iVar2 == 0)", [&]() -> bool { return static_cast<bool>(iVar2 == 0); })) {
                    if (trace.condition("if (((int *)(lVar4 + 0x10) == (int *)0x0) || (uVar6 = *(ulonglong *)(lVar4 + 0x48) & 0xfffffffffffffffc, uVar6 == 0))")) {
                        LAB_1800e9406: ;
                        trace.statement("FUN_180014070();");
                    }
                    trace.statement("iVar2 = __std_type_info_compare(uVar6 + 8,0x1803edf28);");
                    if (trace.condition("if (iVar2 != 0) goto LAB_1800e9406; iVar2 = *(int *)(lVar4 + 0x10); goto LAB_1800e93ce; } } iVar2 = 0; LAB_1800e93ce: (**(code **)(lVar1 + 0xf0))(plVar3,(double)iVar2); return 1; }")) {
                    }
                }
            }
        }
    return kFunction_0x1800e9330;
}

// 0x1800e9410 FUN_1800e9410
// source: re/dump/decompile/0x1800e9410_FUN_1800e9410.c
// size: 140 bytes; thunk: false
// body sha256: 717fef51297da33ea5c02cc5964fdde50de774fe17fd847c070d5f49c85b028d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e9410{
    "0x1800e9410",
    "FUN_1800e9410",
    R"F1800e9410S(undefined FUN_1800e9410())F1800e9410S",
    R"B1800e9410(// 0x1800e9410  FUN_1800e9410
// size=140 thunk=false
// signature: undefined FUN_1800e9410()
// status: ok


undefined8 FUN_1800e9410(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  double dVar4;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);
    if (cVar1 != '\0') {
      dVar4 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);
      iVar3 = (int)dVar4;
      if (iVar3 < 5) {
        iVar3 = 5;
      }
      else if (0x1e < iVar3) {
        iVar3 = 0x1e;
      }
      FUN_1800e7a20("thirdperson","distance",iVar3);
    }
  }
  return 0;
}


)B1800e9410",
    "717fef51297da33ea5c02cc5964fdde50de774fe17fd847c070d5f49c85b028d",
    R"F1800e9410C(FUN_180039770
FUN_1800e7a20)F1800e9410C",
    R"F1800e9410D()F1800e9410D",
    R"F1800e9410T("distance"
"thirdperson")F1800e9410T",
    R"F1800e9410F(16: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
18: if (cVar1 != '\0') {
21: if (iVar3 < 5) {
24: else if (0x1e < iVar3) {
30: return 0;)F1800e9410F",
    R"F1800e9410U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: resolve the indirect call in body 17: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);.
TODO: resolve the indirect call in body 19: dVar4 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);.)F1800e9410U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e9410() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e9410", "FUN_1800e9410");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] char cVar1{};
    [[maybe_unused]] std::int64_t * plVar2{};
    [[maybe_unused]] std::int32_t iVar3{};
    [[maybe_unused]] double dVar4{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: resolve the indirect call in body 17: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);.
    // TODO: resolve the indirect call in body 19: dVar4 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("FUN_1800e7a20", "thirdperson", "distance", iVar3);
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_1800e7a20", reinterpret_cast<const void*>(&image::FUN_1800e7a20));
    trace.string_literal("distance");
    trace.string_literal("thirdperson");
    // body sha256: 717fef51297da33ea5c02cc5964fdde50de774fe17fd847c070d5f49c85b028d
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("char cVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("int iVar3;");
            trace.statement("double dVar4;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1))")) {
                trace.statement("cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);");
                if (trace.checked_condition("if (cVar1 != '\\0')", [&]() -> bool { return static_cast<bool>(cVar1 != '\0'); })) {
                    trace.statement("dVar4 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);");
                    trace.statement("iVar3 = (int)dVar4;");
                    if (trace.checked_condition("if (iVar3 < 5)", [&]() -> bool { return static_cast<bool>(iVar3 < 5); })) {
                        trace.statement("iVar3 = 5;");
                    } else {
                    trace.statement("iVar3 = 0x1e;");
                    }
                    trace.statement("FUN_1800e7a20(\"thirdperson\",\"distance\",iVar3);");
                }
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e9410;
}

// 0x1800e94a0 FUN_1800e94a0
// source: re/dump/decompile/0x1800e94a0_FUN_1800e94a0.c
// size: 219 bytes; thunk: false
// body sha256: d44d14a62414d81e5c65481b3e9ac9d0185c5d48340fe04e58a8026f6e2c12cc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e94a0{
    "0x1800e94a0",
    "FUN_1800e94a0",
    R"F1800e94a0S(undefined FUN_1800e94a0())F1800e94a0S",
    R"B1800e94a0(// 0x1800e94a0  FUN_1800e94a0
// size=219 thunk=false
// signature: undefined FUN_1800e94a0()
// status: ok


undefined8 FUN_1800e94a0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  TypeDescriptor *pTVar5;
  ulonglong uVar6;
  TypeDescriptor *pTVar7;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
    return 0;
  }
  lVar1 = *plVar3;
  lVar4 = FUN_1800e77b0("thirdperson",&DAT_18034eee4);
  if (lVar4 != 0) {
    pTVar7 = (TypeDescriptor *)(*(ulonglong *)(lVar4 + 0x48) & 0xfffffffffffffffc);
    pTVar5 = &.X::RTTI_Type_Descriptor;
    if (pTVar7 != (TypeDescriptor *)0x0) {
      pTVar5 = pTVar7;
    }
    iVar2 = __std_type_info_compare(&pTVar5->spare,0x1803edf28);
    if (iVar2 == 0) {
      if (((int *)(lVar4 + 0x10) == (int *)0x0) ||
         (uVar6 = *(ulonglong *)(lVar4 + 0x48) & 0xfffffffffffffffc, uVar6 == 0)) {
LAB_1800e9576:
                    /* WARNING: Subroutine does not return */
        FUN_180014070();
      }
      iVar2 = __std_type_info_compare(uVar6 + 8,0x1803edf28);
      if (iVar2 != 0) goto LAB_1800e9576;
      iVar2 = *(int *)(lVar4 + 0x10);
      goto LAB_1800e953e;
    }
  }
  iVar2 = 0;
LAB_1800e953e:
  (**(code **)(lVar1 + 0xf0))(plVar3,(double)iVar2);
  return 1;
}


)B1800e94a0",
    "d44d14a62414d81e5c65481b3e9ac9d0185c5d48340fe04e58a8026f6e2c12cc",
    R"F1800e94a0C(FUN_180014070
FUN_180039770
FUN_1800e77b0)F1800e94a0C",
    R"F1800e94a0D(LAB_1800e953e
LAB_1800e9576
DAT_18034eee4)F1800e94a0D",
    R"F1800e94a0T("thirdperson")F1800e94a0T",
    R"F1800e94a0F(19: if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
20: return 0;
24: if (lVar4 != 0) {
27: if (pTVar7 != (TypeDescriptor *)0x0) {
31: if (iVar2 == 0) {
32: if (((int *)(lVar4 + 0x10) == (int *)0x0) ||
34: LAB_1800e9576:
39: if (iVar2 != 0) goto LAB_1800e9576;
41: goto LAB_1800e953e;
45: LAB_1800e953e:
47: return 1;)F1800e94a0F",
    R"F1800e94a0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference LAB_1800e953e.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference LAB_1800e9576.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18034eee4.
TODO: resolve the indirect call in body 46: (**(code **)(lVar1 + 0xf0))(plVar3,(double)iVar2);.)F1800e94a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e94a0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e94a0", "FUN_1800e94a0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t lVar1{};
    [[maybe_unused]] std::int32_t iVar2{};
    [[maybe_unused]] std::int64_t * plVar3{};
    [[maybe_unused]] std::int64_t lVar4{};
    [[maybe_unused]] std::uint64_t uVar6{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for LAB_1800e953e.
    // TODO: recover global/data declaration, type, value and runtime page/layout for LAB_1800e9576.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18034eee4.
    // TODO: resolve the indirect call in body 46: (**(code **)(lVar1 + 0xf0))(plVar3,(double)iVar2);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) [reason: pointer-cast target not proven]
    // TODO: condition expression type not recovered: if (pTVar7 != (TypeDescriptor *)0x0) [reason: pointer-cast target not proven]
    // TODO: call arguments not type-recovered for __std_type_info_compare: &pTVar5->spare,0x1803edf28 [reason: unknown aggregate layout]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("FUN_1800e77b0", "thirdperson", &image::DAT_18034eee4);
    trace.call_arguments("FUN_180014070");
    trace.call_arguments("__std_type_info_compare", uVar6 + 8, 0x1803edf28);
    trace.call_target("FUN_180014070", reinterpret_cast<const void*>(&image::FUN_180014070));
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_1800e77b0", reinterpret_cast<const void*>(&image::FUN_1800e77b0));
    trace.data_ref("DAT_18034eee4", static_cast<const void*>(&image::DAT_18034eee4));
    trace.string_literal("thirdperson");
    // body sha256: d44d14a62414d81e5c65481b3e9ac9d0185c5d48340fe04e58a8026f6e2c12cc
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong lVar1;");
            trace.statement("int iVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("longlong lVar4;");
            trace.statement("TypeDescriptor *pTVar5;");
            trace.statement("ulonglong uVar6;");
            trace.statement("TypeDescriptor *pTVar7;");
            trace.statement("plVar3 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1))")) {
                trace.statement("return 0;");
            }
            trace.statement("lVar1 = *plVar3;");
            trace.statement("lVar4 = FUN_1800e77b0(\"thirdperson\",&DAT_18034eee4);");
            if (trace.checked_condition("if (lVar4 != 0)", [&]() -> bool { return static_cast<bool>(lVar4 != 0); })) {
                trace.statement("pTVar7 = (TypeDescriptor *)(*(ulonglong *)(lVar4 + 0x48) & 0xfffffffffffffffc);");
                trace.statement("pTVar5 = &.X::RTTI_Type_Descriptor;");
                if (trace.condition("if (pTVar7 != (TypeDescriptor *)0x0)")) {
                    trace.statement("pTVar5 = pTVar7;");
                }
                trace.statement("iVar2 = __std_type_info_compare(&pTVar5->spare,0x1803edf28);");
                if (trace.checked_condition("if (iVar2 == 0)", [&]() -> bool { return static_cast<bool>(iVar2 == 0); })) {
                    if (trace.condition("if (((int *)(lVar4 + 0x10) == (int *)0x0) || (uVar6 = *(ulonglong *)(lVar4 + 0x48) & 0xfffffffffffffffc, uVar6 == 0))")) {
                        LAB_1800e9576: ;
                        trace.statement("FUN_180014070();");
                    }
                    trace.statement("iVar2 = __std_type_info_compare(uVar6 + 8,0x1803edf28);");
                    if (trace.condition("if (iVar2 != 0) goto LAB_1800e9576; iVar2 = *(int *)(lVar4 + 0x10); goto LAB_1800e953e; } } iVar2 = 0; LAB_1800e953e: (**(code **)(lVar1 + 0xf0))(plVar3,(double)iVar2); return 1; }")) {
                    }
                }
            }
        }
    return kFunction_0x1800e94a0;
}

// 0x1800e9580 FUN_1800e9580
// source: re/dump/decompile/0x1800e9580_FUN_1800e9580.c
// size: 140 bytes; thunk: false
// body sha256: 07e46d86321a04ea732d6e3b540fa929823d44dc0c2b9ca699839b9f806aee41
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e9580{
    "0x1800e9580",
    "FUN_1800e9580",
    R"F1800e9580S(undefined FUN_1800e9580())F1800e9580S",
    R"B1800e9580(// 0x1800e9580  FUN_1800e9580
// size=140 thunk=false
// signature: undefined FUN_1800e9580()
// status: ok


undefined8 FUN_1800e9580(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  double dVar4;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);
    if (cVar1 != '\0') {
      dVar4 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);
      iVar3 = (int)dVar4;
      if (iVar3 < -0x1e) {
        iVar3 = -0x1e;
      }
      else if (0x1e < iVar3) {
        iVar3 = 0x1e;
      }
      FUN_1800e7a20("thirdperson",&DAT_18034eee4,iVar3);
    }
  }
  return 0;
}


)B1800e9580",
    "07e46d86321a04ea732d6e3b540fa929823d44dc0c2b9ca699839b9f806aee41",
    R"F1800e9580C(FUN_180039770
FUN_1800e7a20)F1800e9580C",
    R"F1800e9580D(DAT_18034eee4)F1800e9580D",
    R"F1800e9580T("thirdperson")F1800e9580T",
    R"F1800e9580F(16: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
18: if (cVar1 != '\0') {
21: if (iVar3 < -0x1e) {
24: else if (0x1e < iVar3) {
30: return 0;)F1800e9580F",
    R"F1800e9580U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18034eee4.
TODO: resolve the indirect call in body 17: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);.
TODO: resolve the indirect call in body 19: dVar4 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);.)F1800e9580U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e9580() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e9580", "FUN_1800e9580");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] char cVar1{};
    [[maybe_unused]] std::int64_t * plVar2{};
    [[maybe_unused]] std::int32_t iVar3{};
    [[maybe_unused]] double dVar4{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18034eee4.
    // TODO: resolve the indirect call in body 17: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);.
    // TODO: resolve the indirect call in body 19: dVar4 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("FUN_1800e7a20", "thirdperson", &image::DAT_18034eee4, iVar3);
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_1800e7a20", reinterpret_cast<const void*>(&image::FUN_1800e7a20));
    trace.data_ref("DAT_18034eee4", static_cast<const void*>(&image::DAT_18034eee4));
    trace.string_literal("thirdperson");
    // body sha256: 07e46d86321a04ea732d6e3b540fa929823d44dc0c2b9ca699839b9f806aee41
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("char cVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("int iVar3;");
            trace.statement("double dVar4;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1))")) {
                trace.statement("cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);");
                if (trace.checked_condition("if (cVar1 != '\\0')", [&]() -> bool { return static_cast<bool>(cVar1 != '\0'); })) {
                    trace.statement("dVar4 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);");
                    trace.statement("iVar3 = (int)dVar4;");
                    if (trace.checked_condition("if (iVar3 < -0x1e)", [&]() -> bool { return static_cast<bool>(iVar3 < -0x1e); })) {
                        trace.statement("iVar3 = -0x1e;");
                    } else {
                    trace.statement("iVar3 = 0x1e;");
                    }
                    trace.statement("FUN_1800e7a20(\"thirdperson\",&DAT_18034eee4,iVar3);");
                }
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e9580;
}

// 0x1800e9610 FUN_1800e9610
// source: re/dump/decompile/0x1800e9610_FUN_1800e9610.c
// size: 219 bytes; thunk: false
// body sha256: f292bb8d893ef26f6dda0de275cdc524e85f081d87cc942fbe376f85be6205d5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e9610{
    "0x1800e9610",
    "FUN_1800e9610",
    R"F1800e9610S(undefined FUN_1800e9610())F1800e9610S",
    R"B1800e9610(// 0x1800e9610  FUN_1800e9610
// size=219 thunk=false
// signature: undefined FUN_1800e9610()
// status: ok


undefined8 FUN_1800e9610(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  TypeDescriptor *pTVar5;
  ulonglong uVar6;
  TypeDescriptor *pTVar7;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
    return 0;
  }
  lVar1 = *plVar3;
  lVar4 = FUN_1800e77b0("thirdperson",&DAT_18034eeec);
  if (lVar4 != 0) {
    pTVar7 = (TypeDescriptor *)(*(ulonglong *)(lVar4 + 0x48) & 0xfffffffffffffffc);
    pTVar5 = &.X::RTTI_Type_Descriptor;
    if (pTVar7 != (TypeDescriptor *)0x0) {
      pTVar5 = pTVar7;
    }
    iVar2 = __std_type_info_compare(&pTVar5->spare,0x1803edf28);
    if (iVar2 == 0) {
      if (((int *)(lVar4 + 0x10) == (int *)0x0) ||
         (uVar6 = *(ulonglong *)(lVar4 + 0x48) & 0xfffffffffffffffc, uVar6 == 0)) {
LAB_1800e96e6:
                    /* WARNING: Subroutine does not return */
        FUN_180014070();
      }
      iVar2 = __std_type_info_compare(uVar6 + 8,0x1803edf28);
      if (iVar2 != 0) goto LAB_1800e96e6;
      iVar2 = *(int *)(lVar4 + 0x10);
      goto LAB_1800e96ae;
    }
  }
  iVar2 = 0;
LAB_1800e96ae:
  (**(code **)(lVar1 + 0xf0))(plVar3,(double)iVar2);
  return 1;
}


)B1800e9610",
    "f292bb8d893ef26f6dda0de275cdc524e85f081d87cc942fbe376f85be6205d5",
    R"F1800e9610C(FUN_180014070
FUN_180039770
FUN_1800e77b0)F1800e9610C",
    R"F1800e9610D(LAB_1800e96ae
LAB_1800e96e6
DAT_18034eeec)F1800e9610D",
    R"F1800e9610T("thirdperson")F1800e9610T",
    R"F1800e9610F(19: if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
20: return 0;
24: if (lVar4 != 0) {
27: if (pTVar7 != (TypeDescriptor *)0x0) {
31: if (iVar2 == 0) {
32: if (((int *)(lVar4 + 0x10) == (int *)0x0) ||
34: LAB_1800e96e6:
39: if (iVar2 != 0) goto LAB_1800e96e6;
41: goto LAB_1800e96ae;
45: LAB_1800e96ae:
47: return 1;)F1800e9610F",
    R"F1800e9610U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference LAB_1800e96ae.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference LAB_1800e96e6.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18034eeec.
TODO: resolve the indirect call in body 46: (**(code **)(lVar1 + 0xf0))(plVar3,(double)iVar2);.)F1800e9610U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e9610() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e9610", "FUN_1800e9610");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t lVar1{};
    [[maybe_unused]] std::int32_t iVar2{};
    [[maybe_unused]] std::int64_t * plVar3{};
    [[maybe_unused]] std::int64_t lVar4{};
    [[maybe_unused]] std::uint64_t uVar6{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for LAB_1800e96ae.
    // TODO: recover global/data declaration, type, value and runtime page/layout for LAB_1800e96e6.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18034eeec.
    // TODO: resolve the indirect call in body 46: (**(code **)(lVar1 + 0xf0))(plVar3,(double)iVar2);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) [reason: pointer-cast target not proven]
    // TODO: condition expression type not recovered: if (pTVar7 != (TypeDescriptor *)0x0) [reason: pointer-cast target not proven]
    // TODO: call arguments not type-recovered for __std_type_info_compare: &pTVar5->spare,0x1803edf28 [reason: unknown aggregate layout]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("FUN_1800e77b0", "thirdperson", &image::DAT_18034eeec);
    trace.call_arguments("FUN_180014070");
    trace.call_arguments("__std_type_info_compare", uVar6 + 8, 0x1803edf28);
    trace.call_target("FUN_180014070", reinterpret_cast<const void*>(&image::FUN_180014070));
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_1800e77b0", reinterpret_cast<const void*>(&image::FUN_1800e77b0));
    trace.data_ref("DAT_18034eeec", static_cast<const void*>(&image::DAT_18034eeec));
    trace.string_literal("thirdperson");
    // body sha256: f292bb8d893ef26f6dda0de275cdc524e85f081d87cc942fbe376f85be6205d5
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong lVar1;");
            trace.statement("int iVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("longlong lVar4;");
            trace.statement("TypeDescriptor *pTVar5;");
            trace.statement("ulonglong uVar6;");
            trace.statement("TypeDescriptor *pTVar7;");
            trace.statement("plVar3 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1))")) {
                trace.statement("return 0;");
            }
            trace.statement("lVar1 = *plVar3;");
            trace.statement("lVar4 = FUN_1800e77b0(\"thirdperson\",&DAT_18034eeec);");
            if (trace.checked_condition("if (lVar4 != 0)", [&]() -> bool { return static_cast<bool>(lVar4 != 0); })) {
                trace.statement("pTVar7 = (TypeDescriptor *)(*(ulonglong *)(lVar4 + 0x48) & 0xfffffffffffffffc);");
                trace.statement("pTVar5 = &.X::RTTI_Type_Descriptor;");
                if (trace.condition("if (pTVar7 != (TypeDescriptor *)0x0)")) {
                    trace.statement("pTVar5 = pTVar7;");
                }
                trace.statement("iVar2 = __std_type_info_compare(&pTVar5->spare,0x1803edf28);");
                if (trace.checked_condition("if (iVar2 == 0)", [&]() -> bool { return static_cast<bool>(iVar2 == 0); })) {
                    if (trace.condition("if (((int *)(lVar4 + 0x10) == (int *)0x0) || (uVar6 = *(ulonglong *)(lVar4 + 0x48) & 0xfffffffffffffffc, uVar6 == 0))")) {
                        LAB_1800e96e6: ;
                        trace.statement("FUN_180014070();");
                    }
                    trace.statement("iVar2 = __std_type_info_compare(uVar6 + 8,0x1803edf28);");
                    if (trace.condition("if (iVar2 != 0) goto LAB_1800e96e6; iVar2 = *(int *)(lVar4 + 0x10); goto LAB_1800e96ae; } } iVar2 = 0; LAB_1800e96ae: (**(code **)(lVar1 + 0xf0))(plVar3,(double)iVar2); return 1; }")) {
                    }
                }
            }
        }
    return kFunction_0x1800e9610;
}

// 0x1800e96f0 FUN_1800e96f0
// source: re/dump/decompile/0x1800e96f0_FUN_1800e96f0.c
// size: 140 bytes; thunk: false
// body sha256: ead5ffad8813612ef6b0af2a9d892a97336cc9806ad3daddb7d3e2ffb3f3c262
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e96f0{
    "0x1800e96f0",
    "FUN_1800e96f0",
    R"F1800e96f0S(undefined FUN_1800e96f0())F1800e96f0S",
    R"B1800e96f0(// 0x1800e96f0  FUN_1800e96f0
// size=140 thunk=false
// signature: undefined FUN_1800e96f0()
// status: ok


undefined8 FUN_1800e96f0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  double dVar4;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);
    if (cVar1 != '\0') {
      dVar4 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);
      iVar3 = (int)dVar4;
      if (iVar3 < -0x1e) {
        iVar3 = -0x1e;
      }
      else if (0x1e < iVar3) {
        iVar3 = 0x1e;
      }
      FUN_1800e7a20("thirdperson",&DAT_18034eeec,iVar3);
    }
  }
  return 0;
}


)B1800e96f0",
    "ead5ffad8813612ef6b0af2a9d892a97336cc9806ad3daddb7d3e2ffb3f3c262",
    R"F1800e96f0C(FUN_180039770
FUN_1800e7a20)F1800e96f0C",
    R"F1800e96f0D(DAT_18034eeec)F1800e96f0D",
    R"F1800e96f0T("thirdperson")F1800e96f0T",
    R"F1800e96f0F(16: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
18: if (cVar1 != '\0') {
21: if (iVar3 < -0x1e) {
24: else if (0x1e < iVar3) {
30: return 0;)F1800e96f0F",
    R"F1800e96f0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18034eeec.
TODO: resolve the indirect call in body 17: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);.
TODO: resolve the indirect call in body 19: dVar4 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);.)F1800e96f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e96f0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e96f0", "FUN_1800e96f0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] char cVar1{};
    [[maybe_unused]] std::int64_t * plVar2{};
    [[maybe_unused]] std::int32_t iVar3{};
    [[maybe_unused]] double dVar4{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18034eeec.
    // TODO: resolve the indirect call in body 17: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);.
    // TODO: resolve the indirect call in body 19: dVar4 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("FUN_1800e7a20", "thirdperson", &image::DAT_18034eeec, iVar3);
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_1800e7a20", reinterpret_cast<const void*>(&image::FUN_1800e7a20));
    trace.data_ref("DAT_18034eeec", static_cast<const void*>(&image::DAT_18034eeec));
    trace.string_literal("thirdperson");
    // body sha256: ead5ffad8813612ef6b0af2a9d892a97336cc9806ad3daddb7d3e2ffb3f3c262
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("char cVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("int iVar3;");
            trace.statement("double dVar4;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1))")) {
                trace.statement("cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,3);");
                if (trace.checked_condition("if (cVar1 != '\\0')", [&]() -> bool { return static_cast<bool>(cVar1 != '\0'); })) {
                    trace.statement("dVar4 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,1);");
                    trace.statement("iVar3 = (int)dVar4;");
                    if (trace.checked_condition("if (iVar3 < -0x1e)", [&]() -> bool { return static_cast<bool>(iVar3 < -0x1e); })) {
                        trace.statement("iVar3 = -0x1e;");
                    } else {
                    trace.statement("iVar3 = 0x1e;");
                    }
                    trace.statement("FUN_1800e7a20(\"thirdperson\",&DAT_18034eeec,iVar3);");
                }
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e96f0;
}

// 0x1800e9780 FUN_1800e9780
// source: re/dump/decompile/0x1800e9780_FUN_1800e9780.c
// size: 175 bytes; thunk: false
// body sha256: cf9e566800c2b159d8ab4e33cc7b710aa89bb9e4631313392c4bbdae43dadf66
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e9780{
    "0x1800e9780",
    "FUN_1800e9780",
    R"F1800e9780S(undefined FUN_1800e9780())F1800e9780S",
    R"B1800e9780(// 0x1800e9780  FUN_1800e9780
// size=175 thunk=false
// signature: undefined FUN_1800e9780()
// status: ok


undefined8 FUN_1800e9780(longlong param_1)

{
  char cVar1;
  byte bVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  double dVar6;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
    return 0;
  }
  dVar6 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);
  uVar5 = 0;
  cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,1);
  if (cVar1 == '\0') {
    uVar5 = uVar5 & 0xffffffffffffff00;
  }
  else {
    bVar2 = (**(code **)(*plVar3 + 200))(plVar3,2);
    uVar5 = (ulonglong)bVar2;
  }
  if ((int)dVar6 - 1U < 0x80) {
    uVar4 = FUN_1800e81e0(plVar3,(int)dVar6);
    return uVar4;
  }
  (**(code **)(*plVar3 + 0x30))(plVar3,*plVar3,uVar5);
  return 1;
}


)B1800e9780",
    "cf9e566800c2b159d8ab4e33cc7b710aa89bb9e4631313392c4bbdae43dadf66",
    R"F1800e9780C(FUN_180039770
FUN_1800e81e0)F1800e9780C",
    R"F1800e9780D()F1800e9780D",
    R"F1800e9780T()F1800e9780T",
    R"F1800e9780F(18: if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
19: return 0;
24: if (cVar1 == '\0') {
27: else {
31: if ((int)dVar6 - 1U < 0x80) {
33: return uVar4;
36: return 1;)F1800e9780F",
    R"F1800e9780U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: resolve the indirect call in body 21: dVar6 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);.
TODO: resolve the indirect call in body 23: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,1);.
TODO: resolve the indirect call in body 28: bVar2 = (**(code **)(*plVar3 + 200))(plVar3,2);.
TODO: resolve the indirect call in body 35: (**(code **)(*plVar3 + 0x30))(plVar3,*plVar3,uVar5);.)F1800e9780U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e9780() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e9780", "FUN_1800e9780");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] char cVar1{};
    [[maybe_unused]] std::uint8_t bVar2{};
    [[maybe_unused]] std::int64_t * plVar3{};
    [[maybe_unused]] std::uint64_t uVar4{};
    [[maybe_unused]] std::uint64_t uVar5{};
    [[maybe_unused]] double dVar6{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: resolve the indirect call in body 21: dVar6 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);.
    // TODO: resolve the indirect call in body 23: cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,1);.
    // TODO: resolve the indirect call in body 28: bVar2 = (**(code **)(*plVar3 + 200))(plVar3,2);.
    // TODO: resolve the indirect call in body 35: (**(code **)(*plVar3 + 0x30))(plVar3,*plVar3,uVar5);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) [reason: pointer-cast target not proven]
    // TODO: condition expression type not recovered: if ((int)dVar6 - 1U < 0x80) [reason: scalar cast width/kind mismatch]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("FUN_1800e81e0", plVar3, static_cast<std::int32_t>(dVar6));
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_1800e81e0", reinterpret_cast<const void*>(&image::FUN_1800e81e0));
    // body sha256: cf9e566800c2b159d8ab4e33cc7b710aa89bb9e4631313392c4bbdae43dadf66
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("char cVar1;");
            trace.statement("byte bVar2;");
            trace.statement("longlong *plVar3;");
            trace.statement("undefined8 uVar4;");
            trace.statement("ulonglong uVar5;");
            trace.statement("double dVar6;");
            trace.statement("plVar3 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1))")) {
                trace.statement("return 0;");
            }
            trace.statement("dVar6 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);");
            trace.statement("uVar5 = 0;");
            trace.statement("cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,1);");
            if (trace.checked_condition("if (cVar1 == '\\0')", [&]() -> bool { return static_cast<bool>(cVar1 == '\0'); })) {
                trace.statement("uVar5 = uVar5 & 0xffffffffffffff00;");
            } else {
            trace.statement("bVar2 = (**(code **)(*plVar3 + 200))(plVar3,2);");
            trace.statement("uVar5 = (ulonglong)bVar2;");
            }
            if (trace.condition("if ((int)dVar6 - 1U < 0x80)")) {
                trace.statement("uVar4 = FUN_1800e81e0(plVar3,(int)dVar6);");
                trace.statement("return uVar4;");
            }
            trace.statement("(**(code **)(*plVar3 + 0x30))(plVar3,*plVar3,uVar5);");
            trace.statement("return 1;");
        }
    return kFunction_0x1800e9780;
}

// 0x1800e9830 FUN_1800e9830
// source: re/dump/decompile/0x1800e9830_FUN_1800e9830.c
// size: 128 bytes; thunk: false
// body sha256: 71c9e3327b061bd556170cd18bba5bcf2e0291f17e8a34cbf8a05ed000f67b7a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e9830{
    "0x1800e9830",
    "FUN_1800e9830",
    R"F1800e9830S(undefined FUN_1800e9830())F1800e9830S",
    R"B1800e9830(// 0x1800e9830  FUN_1800e9830
// size=128 thunk=false
// signature: undefined FUN_1800e9830()
// status: ok


undefined8 FUN_1800e9830(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_2)) {
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803fac60,plVar1,param_4,(double)DAT_1803fac60)
    ;
    return 1;
  }
  return 0;
}


)B1800e9830",
    "71c9e3327b061bd556170cd18bba5bcf2e0291f17e8a34cbf8a05ed000f67b7a",
    R"F1800e9830C(FUN_180039770)F1800e9830C",
    R"F1800e9830D(DAT_1803fac60)F1800e9830D",
    R"F1800e9830T()F1800e9830T",
    R"F1800e9830F(13: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_2)) {
16: return 1;
18: return 0;)F1800e9830F",
    R"F1800e9830U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fac60.
TODO: resolve the indirect call in body 14: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803fac60,plVar1,param_4,(double)DAT_1803fac60).)F1800e9830U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e9830() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e9830", "FUN_1800e9830");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    [[maybe_unused]] std::uint64_t param_3{};
    [[maybe_unused]] std::uint64_t param_4{};
    [[maybe_unused]] std::int64_t * plVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fac60.
    // TODO: resolve the indirect call in body 14: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803fac60,plVar1,param_4,(double)DAT_1803fac60).
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_2)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803fac60", static_cast<const void*>(&image::DAT_1803fac60));
    // body sha256: 71c9e3327b061bd556170cd18bba5bcf2e0291f17e8a34cbf8a05ed000f67b7a
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong *plVar1;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_2))")) {
                trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803fac60,plVar1,param_4,(double)DAT_1803fac60)");
                trace.statement(";");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e9830;
}

// 0x1800e98d0 FUN_1800e98d0
// source: re/dump/decompile/0x1800e98d0_FUN_1800e98d0.c
// size: 64 bytes; thunk: false
// body sha256: 80fd03770e0e869dd8ece2bf8c34819b1210062ac4ab6df50b5f30b9e14a4e84
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e98d0{
    "0x1800e98d0",
    "FUN_1800e98d0",
    R"F1800e98d0S(undefined FUN_1800e98d0())F1800e98d0S",
    R"B1800e98d0(// 0x1800e98d0  FUN_1800e98d0
// size=64 thunk=false
// signature: undefined FUN_1800e98d0()
// status: ok


undefined8 FUN_1800e98d0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    (**(code **)(*plVar1 + 0xf8))(plVar1,DAT_18040a630);
    return 1;
  }
  return 0;
}


)B1800e98d0",
    "80fd03770e0e869dd8ece2bf8c34819b1210062ac4ab6df50b5f30b9e14a4e84",
    R"F1800e98d0C(FUN_180039770)F1800e98d0C",
    R"F1800e98d0D(DAT_18040a630)F1800e98d0D",
    R"F1800e98d0T()F1800e98d0T",
    R"F1800e98d0F(13: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
15: return 1;
17: return 0;)F1800e98d0F",
    R"F1800e98d0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18040a630.
TODO: resolve the indirect call in body 14: (**(code **)(*plVar1 + 0xf8))(plVar1,DAT_18040a630);.)F1800e98d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e98d0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e98d0", "FUN_1800e98d0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t * plVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18040a630.
    // TODO: resolve the indirect call in body 14: (**(code **)(*plVar1 + 0xf8))(plVar1,DAT_18040a630);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_18040a630", static_cast<const void*>(&image::DAT_18040a630));
    // body sha256: 80fd03770e0e869dd8ece2bf8c34819b1210062ac4ab6df50b5f30b9e14a4e84
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong *plVar1;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                trace.statement("(**(code **)(*plVar1 + 0xf8))(plVar1,DAT_18040a630);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e98d0;
}

// 0x1800e9910 FUN_1800e9910
// source: re/dump/decompile/0x1800e9910_FUN_1800e9910.c
// size: 173 bytes; thunk: false
// body sha256: 18867ba0ee02b95582b07117ead3fe0e5fa5734ad08d8fc2c11330385be083f1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e9910{
    "0x1800e9910",
    "FUN_1800e9910",
    R"F1800e9910S(undefined FUN_1800e9910())F1800e9910S",
    R"B1800e9910(// 0x1800e9910  FUN_1800e9910
// size=173 thunk=false
// signature: undefined FUN_1800e9910()
// status: ok


undefined8 FUN_1800e9910(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_2)) {
    if (DAT_18040a630 != '\0') {
      FUN_1800b5000();
    }
    (**(code **)(*plVar1 + 0xf8))(plVar1);
    return 1;
  }
  return 0;
}


)B1800e9910",
    "18867ba0ee02b95582b07117ead3fe0e5fa5734ad08d8fc2c11330385be083f1",
    R"F1800e9910C(FUN_180039770
FUN_1800b5000)F1800e9910C",
    R"F1800e9910D(DAT_18040a630)F1800e9910D",
    R"F1800e9910T()F1800e9910T",
    R"F1800e9910F(13: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_2)) {
14: if (DAT_18040a630 != '\0') {
18: return 1;
20: return 0;)F1800e9910F",
    R"F1800e9910U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18040a630.
TODO: resolve the indirect call in body 17: (**(code **)(*plVar1 + 0xf8))(plVar1);.)F1800e9910U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e9910() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e9910", "FUN_1800e9910");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    [[maybe_unused]] std::int64_t * plVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18040a630.
    // TODO: resolve the indirect call in body 17: (**(code **)(*plVar1 + 0xf8))(plVar1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_2)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("FUN_1800b5000");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_1800b5000", reinterpret_cast<const void*>(&image::FUN_1800b5000));
    trace.data_ref("DAT_18040a630", static_cast<const void*>(&image::DAT_18040a630));
    // body sha256: 18867ba0ee02b95582b07117ead3fe0e5fa5734ad08d8fc2c11330385be083f1
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong *plVar1;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_2))")) {
                if (trace.checked_condition("if (DAT_18040a630 != '\\0')", [&]() -> bool { return static_cast<bool>(image::DAT_18040a630 != '\0'); })) {
                    trace.statement("FUN_1800b5000();");
                }
                trace.statement("(**(code **)(*plVar1 + 0xf8))(plVar1);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e9910;
}

// 0x1800e99e0 FUN_1800e99e0
// source: re/dump/decompile/0x1800e99e0_FUN_1800e99e0.c
// size: 68 bytes; thunk: false
// body sha256: e1317c628f89d915811aa304c5dc1750a26898aa5fa6c52db9b7871df03f4be4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e99e0{
    "0x1800e99e0",
    "FUN_1800e99e0",
    R"F1800e99e0S(undefined FUN_1800e99e0())F1800e99e0S",
    R"B1800e99e0(// 0x1800e99e0  FUN_1800e99e0
// size=68 thunk=false
// signature: undefined FUN_1800e99e0()
// status: ok


undefined8 FUN_1800e99e0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_18040a618);
    return 1;
  }
  return 0;
}


)B1800e99e0",
    "e1317c628f89d915811aa304c5dc1750a26898aa5fa6c52db9b7871df03f4be4",
    R"F1800e99e0C(FUN_180039770)F1800e99e0C",
    R"F1800e99e0D(DAT_18040a618)F1800e99e0D",
    R"F1800e99e0T()F1800e99e0T",
    R"F1800e99e0F(13: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
15: return 1;
17: return 0;)F1800e99e0F",
    R"F1800e99e0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18040a618.
TODO: resolve the indirect call in body 14: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_18040a618);.)F1800e99e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e99e0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e99e0", "FUN_1800e99e0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t * plVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18040a618.
    // TODO: resolve the indirect call in body 14: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_18040a618);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_18040a618", static_cast<const void*>(&image::DAT_18040a618));
    // body sha256: e1317c628f89d915811aa304c5dc1750a26898aa5fa6c52db9b7871df03f4be4
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong *plVar1;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_18040a618);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e99e0;
}

// 0x1800e9a30 FUN_1800e9a30
// source: re/dump/decompile/0x1800e9a30_FUN_1800e9a30.c
// size: 797 bytes; thunk: false
// body sha256: 1aabf274bc28a3151f3d650ac36fb1dfc7eaedec73268e55429b3ac05aa1421b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e9a30{
    "0x1800e9a30",
    "FUN_1800e9a30",
    R"F1800e9a30S(undefined FUN_1800e9a30())F1800e9a30S",
    R"B1800e9a30(// 0x1800e9a30  FUN_1800e9a30
// size=797 thunk=false
// signature: undefined FUN_1800e9a30()
// status: ok


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1800e9a30(double param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  char cVar3;
  longlong *plVar4;
  char *_Str;
  double *pdVar5;
  size_t sVar6;
  double *pdVar7;
  undefined4 uVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  double local_res8 [2];
  double local_res18;
  double local_res20;
  undefined8 local_e8;
  float local_e0;
  undefined4 local_dc;
  double local_d8 [3];
  double local_c0;
  double local_b8 [16];
  
  local_res8[0] = param_1;
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_2)) {
    dVar1 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);
    dVar2 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,2);
    _Str = (char *)(**(code **)(*plVar4 + 0x158))(plVar4,3);
    fVar13 = DAT_180380bb0;
    if (_Str != (char *)0x0) {
      cVar9 = '\0';
      cVar3 = (**(code **)(*plVar4 + 0x138))(plVar4,4,3);
      fVar14 = fVar13;
      fVar15 = fVar13;
      if (((cVar3 != '\0') && (cVar3 = (**(code **)(*plVar4 + 0x138))(plVar4,5,3), cVar3 != '\0'))
         && (cVar3 = (**(code **)(*plVar4 + 0x138))(plVar4,6,3), dVar12 = DAT_180380e80,
            cVar3 != '\0')) {
        local_res20 = DAT_180380e80;
        local_res8[0] = 0.0;
        dVar10 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,4);
        local_d8[2] = dVar12;
        local_d8[0] = 0.0;
        local_res18 = dVar10;
        dVar11 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,5);
        local_e8 = dVar12;
        local_c0 = 0.0;
        local_d8[1] = dVar11;
        local_b8[0] = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,6);
        pdVar7 = local_res8;
        if (0.0 <= dVar10) {
          pdVar7 = &local_res18;
        }
        pdVar5 = &local_res20;
        if (dVar10 <= dVar12) {
          pdVar5 = pdVar7;
        }
        fVar15 = (float)*pdVar5 / DAT_1803811c8;
        pdVar7 = local_d8;
        if (0.0 <= dVar11) {
          pdVar7 = local_d8 + 1;
        }
        pdVar5 = local_d8 + 2;
        if (dVar11 <= dVar12) {
          pdVar5 = pdVar7;
        }
        fVar13 = (float)*pdVar5 / DAT_1803811c8;
        pdVar7 = &local_c0;
        if (0.0 <= local_b8[0]) {
          pdVar7 = local_b8;
        }
        pdVar5 = (double *)&local_e8;
        if (local_b8[0] <= dVar12) {
          pdVar5 = pdVar7;
        }
        fVar14 = (float)*pdVar5 / DAT_1803811c8;
        cVar9 = '\x01';
      }
      uVar8 = 4;
      if (cVar9 != '\0') {
        uVar8 = 7;
      }
      cVar3 = (**(code **)(*plVar4 + 0x138))(plVar4,uVar8,3);
      dVar12 = DAT_180380d80;
      if ((cVar3 != '\0') &&
         ((dVar12 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,uVar8), dVar12 < 0.0 ||
          (DAT_180380f10 < dVar12)))) {
        dVar12 = 0.0;
      }
      local_b8[1] = 0.0;
      local_b8[2] = 0.0;
      local_b8[3] = 0.0;
      local_b8[4] = 0.0;
      sVar6 = strlen(_Str);
      FUN_18001d080(local_b8 + 1,_Str,sVar6);
      local_e8 = (double)CONCAT44(fVar13,fVar15);
      local_dc = 0x3f800000;
      local_e0 = fVar14;
      FUN_180020d40((int)dVar1,(int)dVar2,local_b8 + 1,cVar9,&local_e8,
                    (int)(longlong)(dVar12 * DAT_180380ec0));
      FUN_18020e450(local_b8 + 1);
    }
  }
  return 0;
}


)B1800e9a30",
    "1aabf274bc28a3151f3d650ac36fb1dfc7eaedec73268e55429b3ac05aa1421b",
    R"F1800e9a30C(FUN_18001d080
FUN_180020d40
FUN_180039770
FUN_18020e450)F1800e9a30C",
    R"F1800e9a30D(DAT_180380bb0
DAT_180380d80
DAT_180380e80
DAT_180380ec0
DAT_180380f10
DAT_1803811c8)F1800e9a30D",
    R"F1800e9a30T()F1800e9a30T",
    R"F1800e9a30F(40: if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_2)) {
45: if (_Str != (char *)0x0) {
50: if (((cVar3 != '\0') && (cVar3 = (**(code **)(*plVar4 + 0x138))(plVar4,5,3), cVar3 != '\0'))
65: if (0.0 <= dVar10) {
69: if (dVar10 <= dVar12) {
74: if (0.0 <= dVar11) {
78: if (dVar11 <= dVar12) {
83: if (0.0 <= local_b8[0]) {
87: if (local_b8[0] <= dVar12) {
94: if (cVar9 != '\0') {
99: if ((cVar3 != '\0') &&
118: return 0;)F1800e9a30F",
    R"F1800e9a30U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180380bb0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180380d80.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180380e80.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180380ec0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180380f10.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803811c8.
TODO: resolve the indirect call in body 41: dVar1 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);.
TODO: resolve the indirect call in body 42: dVar2 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,2);.
TODO: resolve the indirect call in body 43: _Str = (char *)(**(code **)(*plVar4 + 0x158))(plVar4,3);.
TODO: resolve the indirect call in body 47: cVar3 = (**(code **)(*plVar4 + 0x138))(plVar4,4,3);.
TODO: resolve the indirect call in body 50: if (((cVar3 != '\0') && (cVar3 = (**(code **)(*plVar4 + 0x138))(plVar4,5,3), cVar3 != '\0')).
TODO: resolve the indirect call in body 51: && (cVar3 = (**(code **)(*plVar4 + 0x138))(plVar4,6,3), dVar12 = DAT_180380e80,.
TODO: resolve the indirect call in body 55: dVar10 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,4);.
TODO: resolve the indirect call in body 59: dVar11 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,5);.
TODO: resolve the indirect call in body 63: local_b8[0] = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,6);.
TODO: resolve the indirect call in body 97: cVar3 = (**(code **)(*plVar4 + 0x138))(plVar4,uVar8,3);.
TODO: resolve the indirect call in body 100: ((dVar12 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,uVar8), dVar12 < 0.0 ||.)F1800e9a30U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e9a30() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e9a30", "FUN_1800e9a30");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] double param_1{};
    [[maybe_unused]] std::int64_t param_2{};
    [[maybe_unused]] double dVar1{};
    [[maybe_unused]] double dVar2{};
    [[maybe_unused]] char cVar3{};
    [[maybe_unused]] std::int64_t * plVar4{};
    [[maybe_unused]] char * _Str{};
    [[maybe_unused]] double * pdVar5{};
    [[maybe_unused]] std::size_t sVar6{};
    [[maybe_unused]] double * pdVar7{};
    [[maybe_unused]] std::uint32_t uVar8{};
    [[maybe_unused]] char cVar9{};
    [[maybe_unused]] double dVar10{};
    [[maybe_unused]] double dVar11{};
    [[maybe_unused]] double dVar12{};
    [[maybe_unused]] float fVar13{};
    [[maybe_unused]] float fVar14{};
    [[maybe_unused]] float fVar15{};
    [[maybe_unused]] double local_res8[2]{};
    [[maybe_unused]] double local_res18{};
    [[maybe_unused]] double local_res20{};
    [[maybe_unused]] std::uint64_t local_e8{};
    [[maybe_unused]] float local_e0{};
    [[maybe_unused]] std::uint32_t local_dc{};
    [[maybe_unused]] double local_d8[3]{};
    [[maybe_unused]] double local_c0{};
    [[maybe_unused]] double local_b8[16]{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180380bb0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180380d80.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180380e80.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180380ec0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180380f10.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803811c8.
    // TODO: resolve the indirect call in body 41: dVar1 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);.
    // TODO: resolve the indirect call in body 42: dVar2 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,2);.
    // TODO: resolve the indirect call in body 43: _Str = (char *)(**(code **)(*plVar4 + 0x158))(plVar4,3);.
    // TODO: resolve the indirect call in body 47: cVar3 = (**(code **)(*plVar4 + 0x138))(plVar4,4,3);.
    // TODO: resolve the indirect call in body 50: if (((cVar3 != '\0') && (cVar3 = (**(code **)(*plVar4 + 0x138))(plVar4,5,3), cVar3 != '\0')).
    // TODO: resolve the indirect call in body 51: && (cVar3 = (**(code **)(*plVar4 + 0x138))(plVar4,6,3), dVar12 = DAT_180380e80,.
    // TODO: resolve the indirect call in body 55: dVar10 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,4);.
    // TODO: resolve the indirect call in body 59: dVar11 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,5);.
    // TODO: resolve the indirect call in body 63: local_b8[0] = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,6);.
    // TODO: resolve the indirect call in body 97: cVar3 = (**(code **)(*plVar4 + 0x138))(plVar4,uVar8,3);.
    // TODO: resolve the indirect call in body 100: ((dVar12 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,uVar8), dVar12 < 0.0 ||.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_2)) [reason: pointer-cast target not proven]
    // TODO: condition expression type not recovered: if (((cVar3 != '\0') && (cVar3 = (**(code **)(*plVar4 + 0x138))(plVar4,5,3), cVar3 != '\0')) [reason: pointer depth/pointee not proven]
    // TODO: condition expression type not recovered: if (0.0 <= dVar10) [reason: ambiguous operand type]
    // TODO: condition expression type not recovered: if (0.0 <= dVar11) [reason: ambiguous operand type]
    // TODO: condition expression type not recovered: if (0.0 <= local_b8[0]) [reason: ambiguous operand type]
    // TODO: call arguments not type-recovered for FUN_18001d080: local_b8 + 1,_Str,sVar6 [reason: ambiguous operand type]
    // TODO: call arguments not type-recovered for FUN_18020e450: local_b8 + 1 [reason: ambiguous operand type]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("strlen", _Str);
    trace.call_arguments("CONCAT44", fVar13, fVar15);
    trace.call_target("FUN_18001d080", reinterpret_cast<const void*>(&image::FUN_18001d080));
    trace.call_target("FUN_180020d40", reinterpret_cast<const void*>(&image::FUN_180020d40));
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_18020e450", reinterpret_cast<const void*>(&image::FUN_18020e450));
    trace.data_ref("DAT_180380bb0", static_cast<const void*>(&image::DAT_180380bb0));
    trace.data_ref("DAT_180380d80", static_cast<const void*>(&image::DAT_180380d80));
    trace.data_ref("DAT_180380e80", static_cast<const void*>(&image::DAT_180380e80));
    trace.data_ref("DAT_180380ec0", static_cast<const void*>(&image::DAT_180380ec0));
    trace.data_ref("DAT_180380f10", static_cast<const void*>(&image::DAT_180380f10));
    trace.data_ref("DAT_1803811c8", static_cast<const void*>(&image::DAT_1803811c8));
    // body sha256: 1aabf274bc28a3151f3d650ac36fb1dfc7eaedec73268e55429b3ac05aa1421b
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("double dVar1;");
            trace.statement("double dVar2;");
            trace.statement("char cVar3;");
            trace.statement("longlong *plVar4;");
            trace.statement("char *_Str;");
            trace.statement("double *pdVar5;");
            trace.statement("size_t sVar6;");
            trace.statement("double *pdVar7;");
            trace.statement("undefined4 uVar8;");
            trace.statement("char cVar9;");
            trace.statement("double dVar10;");
            trace.statement("double dVar11;");
            trace.statement("double dVar12;");
            trace.statement("float fVar13;");
            trace.statement("float fVar14;");
            trace.statement("float fVar15;");
            trace.statement("double local_res8 [2];");
            trace.statement("double local_res18;");
            trace.statement("double local_res20;");
            trace.statement("undefined8 local_e8;");
            trace.statement("float local_e0;");
            trace.statement("undefined4 local_dc;");
            trace.statement("double local_d8 [3];");
            trace.statement("double local_c0;");
            trace.statement("double local_b8 [16];");
            trace.statement("local_res8[0] = param_1;");
            trace.statement("plVar4 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_2))")) {
                trace.statement("dVar1 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);");
                trace.statement("dVar2 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,2);");
                trace.statement("_Str = (char *)(**(code **)(*plVar4 + 0x158))(plVar4,3);");
                trace.statement("fVar13 = DAT_180380bb0;");
                if (trace.checked_condition("if (_Str != (char *)0x0)", [&]() -> bool { return static_cast<bool>(_Str != (char *)0x0); })) {
                    trace.statement("cVar9 = '\\0';");
                    trace.statement("cVar3 = (**(code **)(*plVar4 + 0x138))(plVar4,4,3);");
                    trace.statement("fVar14 = fVar13;");
                    trace.statement("fVar15 = fVar13;");
                    if (trace.condition("if (((cVar3 != '\\0') && (cVar3 = (**(code **)(*plVar4 + 0x138))(plVar4,5,3), cVar3 != '\\0')) && (cVar3 = (**(code **)(*plVar4 + 0x138))(plVar4,6,3), dVar12 = DAT_180380e80, cVar3 != '\\0'))")) {
                        trace.statement("local_res20 = DAT_180380e80;");
                        trace.statement("local_res8[0] = 0.0;");
                        trace.statement("dVar10 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,4);");
                        trace.statement("local_d8[2] = dVar12;");
                        trace.statement("local_d8[0] = 0.0;");
                        trace.statement("local_res18 = dVar10;");
                        trace.statement("dVar11 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,5);");
                        trace.statement("local_e8 = dVar12;");
                        trace.statement("local_c0 = 0.0;");
                        trace.statement("local_d8[1] = dVar11;");
                        trace.statement("local_b8[0] = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,6);");
                        trace.statement("pdVar7 = local_res8;");
                        if (trace.condition("if (0.0 <= dVar10)")) {
                            trace.statement("pdVar7 = &local_res18;");
                        }
                        trace.statement("pdVar5 = &local_res20;");
                        if (trace.checked_condition("if (dVar10 <= dVar12)", [&]() -> bool { return static_cast<bool>(dVar10 <= dVar12); })) {
                            trace.statement("pdVar5 = pdVar7;");
                        }
                        trace.statement("fVar15 = (float)*pdVar5 / DAT_1803811c8;");
                        trace.statement("pdVar7 = local_d8;");
                        if (trace.condition("if (0.0 <= dVar11)")) {
                            trace.statement("pdVar7 = local_d8 + 1;");
                        }
                        trace.statement("pdVar5 = local_d8 + 2;");
                        if (trace.checked_condition("if (dVar11 <= dVar12)", [&]() -> bool { return static_cast<bool>(dVar11 <= dVar12); })) {
                            trace.statement("pdVar5 = pdVar7;");
                        }
                        trace.statement("fVar13 = (float)*pdVar5 / DAT_1803811c8;");
                        trace.statement("pdVar7 = &local_c0;");
                        if (trace.condition("if (0.0 <= local_b8[0])")) {
                            trace.statement("pdVar7 = local_b8;");
                        }
                        trace.statement("pdVar5 = (double *)&local_e8;");
                        if (trace.checked_condition("if (local_b8[0] <= dVar12)", [&]() -> bool { return static_cast<bool>(local_b8[0] <= dVar12); })) {
                            trace.statement("pdVar5 = pdVar7;");
                        }
                        trace.statement("fVar14 = (float)*pdVar5 / DAT_1803811c8;");
                        trace.statement("cVar9 = '\\x01';");
                    }
                    trace.statement("uVar8 = 4;");
                    if (trace.checked_condition("if (cVar9 != '\\0')", [&]() -> bool { return static_cast<bool>(cVar9 != '\0'); })) {
                        trace.statement("uVar8 = 7;");
                    }
                    trace.statement("cVar3 = (**(code **)(*plVar4 + 0x138))(plVar4,uVar8,3);");
                    trace.statement("dVar12 = DAT_180380d80;");
                    if (trace.condition("if ((cVar3 != '\\0') && ((dVar12 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,uVar8), dVar12 < 0.0 || (DAT_180380f10 < dVar12))))")) {
                        trace.statement("dVar12 = 0.0;");
                    }
                    trace.statement("local_b8[1] = 0.0;");
                    trace.statement("local_b8[2] = 0.0;");
                    trace.statement("local_b8[3] = 0.0;");
                    trace.statement("local_b8[4] = 0.0;");
                    trace.statement("sVar6 = strlen(_Str);");
                    trace.statement("FUN_18001d080(local_b8 + 1,_Str,sVar6);");
                    trace.statement("local_e8 = (double)CONCAT44(fVar13,fVar15);");
                    trace.statement("local_dc = 0x3f800000;");
                    trace.statement("local_e0 = fVar14;");
                    trace.statement("FUN_180020d40((int)dVar1,(int)dVar2,local_b8 + 1,cVar9,&local_e8,");
                    trace.statement("(int)(longlong)(dVar12 * DAT_180380ec0));");
                    trace.statement("FUN_18020e450(local_b8 + 1);");
                }
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e9a30;
}

// 0x1800e9d60 FUN_1800e9d60
// source: re/dump/decompile/0x1800e9d60_FUN_1800e9d60.c
// size: 127 bytes; thunk: false
// body sha256: 6a94e5ed3f86b2cbe985f882a0135e3816021fae1bcbd7c0b86154c1b92c0cf3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e9d60{
    "0x1800e9d60",
    "FUN_1800e9d60",
    R"F1800e9d60S(undefined FUN_1800e9d60())F1800e9d60S",
    R"B1800e9d60(// 0x1800e9d60  FUN_1800e9d60
// size=127 thunk=false
// signature: undefined FUN_1800e9d60()
// status: ok


undefined8 FUN_1800e9d60(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    dVar4 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,2,3);
    if (cVar1 == '\0') {
      iVar3 = 0;
    }
    else {
      dVar5 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,2);
      iVar3 = (int)dVar5;
    }
    FUN_1800210b0((int)dVar4,iVar3);
  }
  return 0;
}


)B1800e9d60",
    "6a94e5ed3f86b2cbe985f882a0135e3816021fae1bcbd7c0b86154c1b92c0cf3",
    R"F1800e9d60C(FUN_1800210b0
FUN_180039770)F1800e9d60C",
    R"F1800e9d60D()F1800e9d60D",
    R"F1800e9d60T()F1800e9d60T",
    R"F1800e9d60F(17: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
20: if (cVar1 == '\0') {
23: else {
29: return 0;)F1800e9d60F",
    R"F1800e9d60U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: resolve the indirect call in body 18: dVar4 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.
TODO: resolve the indirect call in body 19: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,2,3);.
TODO: resolve the indirect call in body 24: dVar5 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,2);.)F1800e9d60U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e9d60() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e9d60", "FUN_1800e9d60");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] char cVar1{};
    [[maybe_unused]] std::int64_t * plVar2{};
    [[maybe_unused]] std::int32_t iVar3{};
    [[maybe_unused]] double dVar4{};
    [[maybe_unused]] double dVar5{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: resolve the indirect call in body 18: dVar4 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);.
    // TODO: resolve the indirect call in body 19: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,2,3);.
    // TODO: resolve the indirect call in body 24: dVar5 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,2);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("FUN_1800210b0", static_cast<std::int32_t>(dVar4), iVar3);
    trace.call_target("FUN_1800210b0", reinterpret_cast<const void*>(&image::FUN_1800210b0));
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    // body sha256: 6a94e5ed3f86b2cbe985f882a0135e3816021fae1bcbd7c0b86154c1b92c0cf3
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("char cVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("int iVar3;");
            trace.statement("double dVar4;");
            trace.statement("double dVar5;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1))")) {
                trace.statement("dVar4 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);");
                trace.statement("cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,2,3);");
                if (trace.checked_condition("if (cVar1 == '\\0')", [&]() -> bool { return static_cast<bool>(cVar1 == '\0'); })) {
                    trace.statement("iVar3 = 0;");
                } else {
                trace.statement("dVar5 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,2);");
                trace.statement("iVar3 = (int)dVar5;");
                }
                trace.statement("FUN_1800210b0((int)dVar4,iVar3);");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e9d60;
}

// 0x1800e9de0 FUN_1800e9de0
// source: re/dump/decompile/0x1800e9de0_FUN_1800e9de0.c
// size: 42 bytes; thunk: false
// body sha256: ea070cd6384c19dd9751689ddafdfb365cc459bb10055fd8526a1429216f8aef
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e9de0{
    "0x1800e9de0",
    "FUN_1800e9de0",
    R"F1800e9de0S(undefined FUN_1800e9de0())F1800e9de0S",
    R"B1800e9de0(// 0x1800e9de0  FUN_1800e9de0
// size=42 thunk=false
// signature: undefined FUN_1800e9de0()
// status: ok


undefined8 FUN_1800e9de0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_180039770();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) == param_1)) {
    FUN_1800210b0(0,0);
  }
  return 0;
}


)B1800e9de0",
    "ea070cd6384c19dd9751689ddafdfb365cc459bb10055fd8526a1429216f8aef",
    R"F1800e9de0C(FUN_1800210b0
FUN_180039770)F1800e9de0C",
    R"F1800e9de0D()F1800e9de0D",
    R"F1800e9de0T()F1800e9de0T",
    R"F1800e9de0F(13: if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) == param_1)) {
16: return 0;)F1800e9de0F",
    R"F1800e9de0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1800e9de0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e9de0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e9de0", "FUN_1800e9de0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t lVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("FUN_1800210b0", 0, 0);
    trace.call_target("FUN_1800210b0", reinterpret_cast<const void*>(&image::FUN_1800210b0));
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    // body sha256: ea070cd6384c19dd9751689ddafdfb365cc459bb10055fd8526a1429216f8aef
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong lVar1;");
            trace.statement("lVar1 = FUN_180039770();");
            if (trace.checked_condition("if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) == param_1))", [&]() -> bool { return static_cast<bool>((lVar1 != 0) && (load_at<std::int64_t>(lVar1 + 8, 0) == param_1)); })) {
                trace.statement("FUN_1800210b0(0,0);");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e9de0;
}

// 0x1800e9e10 FUN_1800e9e10
// source: re/dump/decompile/0x1800e9e10_FUN_1800e9e10.c
// size: 316 bytes; thunk: false
// body sha256: a23abb5fda813cbf0d7dd6803dd3ce5783749b8d4ed85541c291166191d78589
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e9e10{
    "0x1800e9e10",
    "FUN_1800e9e10",
    R"F1800e9e10S(undefined FUN_1800e9e10())F1800e9e10S",
    R"B1800e9e10(// 0x1800e9e10  FUN_1800e9e10
// size=316 thunk=false
// signature: undefined FUN_1800e9e10()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800e9e10(longlong param_1)

{
  double dVar1;
  double dVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 ***pppuVar6;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong uStack_50;
  undefined1 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_1)) {
    uVar5 = 0;
  }
  else {
    dVar1 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);
    dVar2 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,2);
    uStack_60 = 0;
    local_58 = _DAT_1803814b0;
    uStack_50 = _UNK_1803814b8;
    local_68 = (undefined8 ***)0x0;
    local_48 = 0;
    local_44 = 0x3f800000;
    local_40 = 0x3f800000;
    local_3c = 0x3f800000;
    local_38 = 0x3f800000;
    local_30 = 0;
    local_28 = 0;
    cVar3 = FUN_1800213a0((int)dVar1,(int)dVar2,&local_68);
    if (cVar3 == '\0') {
      (**(code **)(*plVar4 + 0xe0))();
      FUN_18020e450(&local_68);
      uVar5 = 1;
    }
    else {
      pppuVar6 = &local_68;
      if (0xf < uStack_50) {
        pppuVar6 = (undefined8 ***)local_68;
      }
      (**(code **)(*plVar4 + 0xe8))(plVar4,pppuVar6,0);
      FUN_18020e450(&local_68);
      uVar5 = 1;
    }
  }
  return uVar5;
}


)B1800e9e10",
    "a23abb5fda813cbf0d7dd6803dd3ce5783749b8d4ed85541c291166191d78589",
    R"F1800e9e10C(FUN_1800213a0
FUN_180039770
FUN_18020e450)F1800e9e10C",
    R"F1800e9e10D(_DAT_1803814b0
_UNK_1803814b8
DAT_1803da4c0)F1800e9e10D",
    R"F1800e9e10T()F1800e9e10T",
    R"F1800e9e10F(35: if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_1)) {
38: else {
53: if (cVar3 == '\0') {
58: else {
60: if (0xf < uStack_50) {
68: return uVar5;)F1800e9e10F",
    R"F1800e9e10U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference _DAT_1803814b0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference _UNK_1803814b8.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803da4c0.
TODO: resolve the indirect call in body 39: dVar1 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);.
TODO: resolve the indirect call in body 40: dVar2 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,2);.
TODO: resolve the indirect call in body 54: (**(code **)(*plVar4 + 0xe0))();.
TODO: resolve the indirect call in body 63: (**(code **)(*plVar4 + 0xe8))(plVar4,pppuVar6,0);.)F1800e9e10U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e9e10() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e9e10", "FUN_1800e9e10");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] double dVar1{};
    [[maybe_unused]] double dVar2{};
    [[maybe_unused]] char cVar3{};
    [[maybe_unused]] std::int64_t * plVar4{};
    [[maybe_unused]] std::uint64_t uVar5{};
    [[maybe_unused]] std::uint64_t *** pppuVar6{};
    [[maybe_unused]] std::uint8_t auStack_88[32]{};
    [[maybe_unused]] std::uint64_t ** local_68{};
    [[maybe_unused]] std::uint64_t uStack_60{};
    [[maybe_unused]] std::uint64_t local_58{};
    [[maybe_unused]] std::uint64_t uStack_50{};
    [[maybe_unused]] std::uint8_t local_48{};
    [[maybe_unused]] std::uint32_t local_44{};
    [[maybe_unused]] std::uint32_t local_40{};
    [[maybe_unused]] std::uint32_t local_3c{};
    [[maybe_unused]] std::uint32_t local_38{};
    [[maybe_unused]] std::uint64_t local_30{};
    [[maybe_unused]] std::uint32_t local_28{};
    [[maybe_unused]] std::uint64_t local_18{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for _DAT_1803814b0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for _UNK_1803814b8.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803da4c0.
    // TODO: resolve the indirect call in body 39: dVar1 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);.
    // TODO: resolve the indirect call in body 40: dVar2 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,2);.
    // TODO: resolve the indirect call in body 54: (**(code **)(*plVar4 + 0xe0))();.
    // TODO: resolve the indirect call in body 63: (**(code **)(*plVar4 + 0xe8))(plVar4,pppuVar6,0);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_1)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_180039770");
    trace.call_arguments("FUN_1800213a0", static_cast<std::int32_t>(dVar1), static_cast<std::int32_t>(dVar2), &local_68);
    trace.call_arguments("FUN_18020e450", &local_68);
    trace.call_arguments("FUN_18020e450", &local_68);
    trace.call_target("FUN_1800213a0", reinterpret_cast<const void*>(&image::FUN_1800213a0));
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.call_target("FUN_18020e450", reinterpret_cast<const void*>(&image::FUN_18020e450));
    trace.data_ref("_DAT_1803814b0", static_cast<const void*>(&image::_DAT_1803814b0));
    trace.data_ref("_UNK_1803814b8", static_cast<const void*>(&image::_UNK_1803814b8));
    trace.data_ref("DAT_1803da4c0", static_cast<const void*>(&image::DAT_1803da4c0));
    // body sha256: a23abb5fda813cbf0d7dd6803dd3ce5783749b8d4ed85541c291166191d78589
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("double dVar1;");
            trace.statement("double dVar2;");
            trace.statement("char cVar3;");
            trace.statement("longlong *plVar4;");
            trace.statement("undefined8 uVar5;");
            trace.statement("undefined8 ***pppuVar6;");
            trace.statement("undefined1 auStack_88 [32];");
            trace.statement("undefined8 **local_68;");
            trace.statement("undefined8 uStack_60;");
            trace.statement("undefined8 local_58;");
            trace.statement("ulonglong uStack_50;");
            trace.statement("undefined1 local_48;");
            trace.statement("undefined4 local_44;");
            trace.statement("undefined4 local_40;");
            trace.statement("undefined4 local_3c;");
            trace.statement("undefined4 local_38;");
            trace.statement("undefined8 local_30;");
            trace.statement("undefined4 local_28;");
            trace.statement("ulonglong local_18;");
            trace.statement("local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_88;");
            trace.statement("plVar4 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_1))")) {
                trace.statement("uVar5 = 0;");
            } else {
            trace.statement("dVar1 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);");
            trace.statement("dVar2 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,2);");
            trace.statement("uStack_60 = 0;");
            trace.statement("local_58 = _DAT_1803814b0;");
            trace.statement("uStack_50 = _UNK_1803814b8;");
            trace.statement("local_68 = (undefined8 ***)0x0;");
            trace.statement("local_48 = 0;");
            trace.statement("local_44 = 0x3f800000;");
            trace.statement("local_40 = 0x3f800000;");
            trace.statement("local_3c = 0x3f800000;");
            trace.statement("local_38 = 0x3f800000;");
            trace.statement("local_30 = 0;");
            trace.statement("local_28 = 0;");
            trace.statement("cVar3 = FUN_1800213a0((int)dVar1,(int)dVar2,&local_68);");
            if (trace.checked_condition("if (cVar3 == '\\0')", [&]() -> bool { return static_cast<bool>(cVar3 == '\0'); })) {
                trace.statement("(**(code **)(*plVar4 + 0xe0))();");
                trace.statement("FUN_18020e450(&local_68);");
                trace.statement("uVar5 = 1;");
            } else {
            trace.statement("pppuVar6 = &local_68;");
            if (trace.checked_condition("if (0xf < uStack_50)", [&]() -> bool { return static_cast<bool>(0xf < uStack_50); })) {
                trace.statement("pppuVar6 = (undefined8 ***)local_68;");
            }
            trace.statement("(**(code **)(*plVar4 + 0xe8))(plVar4,pppuVar6,0);");
            trace.statement("FUN_18020e450(&local_68);");
            trace.statement("uVar5 = 1;");
            }
            }
            trace.statement("return uVar5;");
        }
    return kFunction_0x1800e9e10;
}

// 0x1800e9f50 FUN_1800e9f50
// source: re/dump/decompile/0x1800e9f50_FUN_1800e9f50.c
// size: 64 bytes; thunk: false
// body sha256: ece8e1aef56b47240b4fa245dabdf44f9b869b35adb63be4bdcaddc57e459372
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e9f50{
    "0x1800e9f50",
    "FUN_1800e9f50",
    R"F1800e9f50S(undefined FUN_1800e9f50())F1800e9f50S",
    R"B1800e9f50(// 0x1800e9f50  FUN_1800e9f50
// size=64 thunk=false
// signature: undefined FUN_1800e9f50()
// status: ok


undefined8 FUN_1800e9f50(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    (**(code **)(*plVar1 + 0xf0))(plVar1,DAT_180380d68);
    return 1;
  }
  return 0;
}


)B1800e9f50",
    "ece8e1aef56b47240b4fa245dabdf44f9b869b35adb63be4bdcaddc57e459372",
    R"F1800e9f50C(FUN_180039770)F1800e9f50C",
    R"F1800e9f50D(DAT_180380d68)F1800e9f50D",
    R"F1800e9f50T()F1800e9f50T",
    R"F1800e9f50F(13: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
15: return 1;
17: return 0;)F1800e9f50F",
    R"F1800e9f50U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180380d68.
TODO: resolve the indirect call in body 14: (**(code **)(*plVar1 + 0xf0))(plVar1,DAT_180380d68);.)F1800e9f50U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e9f50() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e9f50", "FUN_1800e9f50");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t * plVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180380d68.
    // TODO: resolve the indirect call in body 14: (**(code **)(*plVar1 + 0xf0))(plVar1,DAT_180380d68);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_180380d68", static_cast<const void*>(&image::DAT_180380d68));
    // body sha256: ece8e1aef56b47240b4fa245dabdf44f9b869b35adb63be4bdcaddc57e459372
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong *plVar1;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,DAT_180380d68);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e9f50;
}

// 0x1800e9f90 FUN_1800e9f90
// source: re/dump/decompile/0x1800e9f90_FUN_1800e9f90.c
// size: 107 bytes; thunk: false
// body sha256: 4ed7f88a0a501dd61a1d28bd407df0083d32dad26317ebca2b1afc3776df56c6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800e9f90{
    "0x1800e9f90",
    "FUN_1800e9f90",
    R"F1800e9f90S(undefined FUN_1800e9f90())F1800e9f90S",
    R"B1800e9f90(// 0x1800e9f90  FUN_1800e9f90
// size=107 thunk=false
// signature: undefined FUN_1800e9f90()
// status: ok


undefined8 FUN_1800e9f90(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,1);
    if (cVar1 == '\0') {
      cVar1 = '\x01';
    }
    else {
      cVar1 = (**(code **)(*plVar2 + 200))(plVar2,1);
    }
    DAT_1803e9474 = (uint)(cVar1 != '\0');
  }
  return 0;
}


)B1800e9f90",
    "4ed7f88a0a501dd61a1d28bd407df0083d32dad26317ebca2b1afc3776df56c6",
    R"F1800e9f90C(FUN_180039770)F1800e9f90C",
    R"F1800e9f90D(DAT_1803e9474)F1800e9f90D",
    R"F1800e9f90T()F1800e9f90T",
    R"F1800e9f90F(14: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
16: if (cVar1 == '\0') {
19: else {
24: return 0;)F1800e9f90F",
    R"F1800e9f90U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e9474.
TODO: resolve the indirect call in body 15: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,1);.
TODO: resolve the indirect call in body 20: cVar1 = (**(code **)(*plVar2 + 200))(plVar2,1);.)F1800e9f90U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800e9f90() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800e9f90", "FUN_1800e9f90");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] char cVar1{};
    [[maybe_unused]] std::int64_t * plVar2{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e9474.
    // TODO: resolve the indirect call in body 15: cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,1);.
    // TODO: resolve the indirect call in body 20: cVar1 = (**(code **)(*plVar2 + 200))(plVar2,1);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803e9474", static_cast<const void*>(&image::DAT_1803e9474));
    // body sha256: 4ed7f88a0a501dd61a1d28bd407df0083d32dad26317ebca2b1afc3776df56c6
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("char cVar1;");
            trace.statement("longlong *plVar2;");
            trace.statement("plVar2 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1))")) {
                trace.statement("cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,1,1);");
                if (trace.checked_condition("if (cVar1 == '\\0')", [&]() -> bool { return static_cast<bool>(cVar1 == '\0'); })) {
                    trace.statement("cVar1 = '\\x01';");
                } else {
                trace.statement("cVar1 = (**(code **)(*plVar2 + 200))(plVar2,1);");
                }
                trace.statement("DAT_1803e9474 = (uint)(cVar1 != '\\0');");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800e9f90;
}

// 0x1800ea000 FUN_1800ea000
// source: re/dump/decompile/0x1800ea000_FUN_1800ea000.c
// size: 140 bytes; thunk: false
// body sha256: 30f421e0254c166d23c181e7e0faf0d0665ddc8b1f12d8254e61dd15067a5d7f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800ea000{
    "0x1800ea000",
    "FUN_1800ea000",
    R"F1800ea000S(undefined FUN_1800ea000())F1800ea000S",
    R"B1800ea000(// 0x1800ea000  FUN_1800ea000
// size=140 thunk=false
// signature: undefined FUN_1800ea000()
// status: ok


undefined8 FUN_1800ea000(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803fa54c);
    if (DAT_1803fa545 != '\0') {
      (**(code **)(*plVar1 + 0xf0))(plVar1,DAT_180380d08);
      return 2;
    }
    (**(code **)(*plVar1 + 0xf0))(plVar1,0);
    return 2;
  }
  return 0;
}


)B1800ea000",
    "30f421e0254c166d23c181e7e0faf0d0665ddc8b1f12d8254e61dd15067a5d7f",
    R"F1800ea000C(FUN_180039770)F1800ea000C",
    R"F1800ea000D(DAT_180380d08
DAT_1803fa545
DAT_1803fa54c)F1800ea000D",
    R"F1800ea000T()F1800ea000T",
    R"F1800ea000F(13: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
15: if (DAT_1803fa545 != '\0') {
17: return 2;
20: return 2;
22: return 0;)F1800ea000F",
    R"F1800ea000U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180380d08.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa545.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa54c.
TODO: resolve the indirect call in body 14: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803fa54c);.
TODO: resolve the indirect call in body 16: (**(code **)(*plVar1 + 0xf0))(plVar1,DAT_180380d08);.
TODO: resolve the indirect call in body 19: (**(code **)(*plVar1 + 0xf0))(plVar1,0);.)F1800ea000U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800ea000() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800ea000", "FUN_1800ea000");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t * plVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180380d08.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa545.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa54c.
    // TODO: resolve the indirect call in body 14: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803fa54c);.
    // TODO: resolve the indirect call in body 16: (**(code **)(*plVar1 + 0xf0))(plVar1,DAT_180380d08);.
    // TODO: resolve the indirect call in body 19: (**(code **)(*plVar1 + 0xf0))(plVar1,0);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_180380d08", static_cast<const void*>(&image::DAT_180380d08));
    trace.data_ref("DAT_1803fa545", static_cast<const void*>(&image::DAT_1803fa545));
    trace.data_ref("DAT_1803fa54c", static_cast<const void*>(&image::DAT_1803fa54c));
    // body sha256: 30f421e0254c166d23c181e7e0faf0d0665ddc8b1f12d8254e61dd15067a5d7f
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong *plVar1;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803fa54c);");
                if (trace.checked_condition("if (DAT_1803fa545 != '\\0')", [&]() -> bool { return static_cast<bool>(image::DAT_1803fa545 != '\0'); })) {
                    trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,DAT_180380d08);");
                    trace.statement("return 2;");
                }
                trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,0);");
                trace.statement("return 2;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800ea000;
}

// 0x1800ea090 FUN_1800ea090
// source: re/dump/decompile/0x1800ea090_FUN_1800ea090.c
// size: 107 bytes; thunk: false
// body sha256: 9352555378cfd1b8441931126b27cda8d08523e3d7283ee921d164f09b2ae30d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800ea090{
    "0x1800ea090",
    "FUN_1800ea090",
    R"F1800ea090S(undefined FUN_1800ea090())F1800ea090S",
    R"B1800ea090(// 0x1800ea090  FUN_1800ea090
// size=107 thunk=false
// signature: undefined FUN_1800ea090()
// status: ok


undefined8 FUN_1800ea090(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803fa530);
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803fa534);
    return 2;
  }
  return 0;
}


)B1800ea090",
    "9352555378cfd1b8441931126b27cda8d08523e3d7283ee921d164f09b2ae30d",
    R"F1800ea090C(FUN_180039770)F1800ea090C",
    R"F1800ea090D(DAT_1803fa530
DAT_1803fa534)F1800ea090D",
    R"F1800ea090T()F1800ea090T",
    R"F1800ea090F(13: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
16: return 2;
18: return 0;)F1800ea090F",
    R"F1800ea090U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa530.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa534.
TODO: resolve the indirect call in body 14: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803fa530);.
TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803fa534);.)F1800ea090U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800ea090() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800ea090", "FUN_1800ea090");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t * plVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa530.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa534.
    // TODO: resolve the indirect call in body 14: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803fa530);.
    // TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803fa534);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803fa530", static_cast<const void*>(&image::DAT_1803fa530));
    trace.data_ref("DAT_1803fa534", static_cast<const void*>(&image::DAT_1803fa534));
    // body sha256: 9352555378cfd1b8441931126b27cda8d08523e3d7283ee921d164f09b2ae30d
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong *plVar1;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803fa530);");
                trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803fa534);");
                trace.statement("return 2;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800ea090;
}

// 0x1800ea100 FUN_1800ea100
// source: re/dump/decompile/0x1800ea100_FUN_1800ea100.c
// size: 107 bytes; thunk: false
// body sha256: b11c5c0095eb2e2a2d2f9e7a48b9222f4e8dc7d41b5537b50b25a4e421e72e76
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800ea100{
    "0x1800ea100",
    "FUN_1800ea100",
    R"F1800ea100S(undefined FUN_1800ea100())F1800ea100S",
    R"B1800ea100(// 0x1800ea100  FUN_1800ea100
// size=107 thunk=false
// signature: undefined FUN_1800ea100()
// status: ok


undefined8 FUN_1800ea100(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803da700);
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803da704);
    return 2;
  }
  return 0;
}


)B1800ea100",
    "b11c5c0095eb2e2a2d2f9e7a48b9222f4e8dc7d41b5537b50b25a4e421e72e76",
    R"F1800ea100C(FUN_180039770)F1800ea100C",
    R"F1800ea100D(DAT_1803da700
DAT_1803da704)F1800ea100D",
    R"F1800ea100T()F1800ea100T",
    R"F1800ea100F(13: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
16: return 2;
18: return 0;)F1800ea100F",
    R"F1800ea100U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803da700.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803da704.
TODO: resolve the indirect call in body 14: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803da700);.
TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803da704);.)F1800ea100U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800ea100() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800ea100", "FUN_1800ea100");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t * plVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803da700.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803da704.
    // TODO: resolve the indirect call in body 14: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803da700);.
    // TODO: resolve the indirect call in body 15: (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803da704);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803da700", static_cast<const void*>(&image::DAT_1803da700));
    trace.data_ref("DAT_1803da704", static_cast<const void*>(&image::DAT_1803da704));
    // body sha256: b11c5c0095eb2e2a2d2f9e7a48b9222f4e8dc7d41b5537b50b25a4e421e72e76
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong *plVar1;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803da700);");
                trace.statement("(**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803da704);");
                trace.statement("return 2;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800ea100;
}

// 0x1800ea170 FUN_1800ea170
// source: re/dump/decompile/0x1800ea170_FUN_1800ea170.c
// size: 64 bytes; thunk: false
// body sha256: f6faf7c87c65c42c8f23f783978aecffad200e873479a9f38d71be9749aadc5c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800ea170{
    "0x1800ea170",
    "FUN_1800ea170",
    R"F1800ea170S(undefined FUN_1800ea170())F1800ea170S",
    R"B1800ea170(// 0x1800ea170  FUN_1800ea170
// size=64 thunk=false
// signature: undefined FUN_1800ea170()
// status: ok


undefined8 FUN_1800ea170(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    (**(code **)(*plVar1 + 0xf8))(plVar1,DAT_1803fa46f);
    return 1;
  }
  return 0;
}


)B1800ea170",
    "f6faf7c87c65c42c8f23f783978aecffad200e873479a9f38d71be9749aadc5c",
    R"F1800ea170C(FUN_180039770)F1800ea170C",
    R"F1800ea170D(DAT_1803fa46f)F1800ea170D",
    R"F1800ea170T()F1800ea170T",
    R"F1800ea170F(13: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
15: return 1;
17: return 0;)F1800ea170F",
    R"F1800ea170U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803fa46f.
TODO: resolve the indirect call in body 14: (**(code **)(*plVar1 + 0xf8))(plVar1,DAT_1803fa46f);.)F1800ea170U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800ea170() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800ea170", "FUN_1800ea170");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t param_1{};
    [[maybe_unused]] std::int64_t * plVar1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803fa46f.
    // TODO: resolve the indirect call in body 14: (**(code **)(*plVar1 + 0xf8))(plVar1,DAT_1803fa46f);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) [reason: pointer-cast target not proven]
    trace.call_arguments("FUN_180039770");
    trace.call_target("FUN_180039770", reinterpret_cast<const void*>(&image::FUN_180039770));
    trace.data_ref("DAT_1803fa46f", static_cast<const void*>(&image::DAT_1803fa46f));
    // body sha256: f6faf7c87c65c42c8f23f783978aecffad200e873479a9f38d71be9749aadc5c
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong *plVar1;");
            trace.statement("plVar1 = (longlong *)FUN_180039770();");
            if (trace.condition("if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1))")) {
                trace.statement("(**(code **)(*plVar1 + 0xf8))(plVar1,DAT_1803fa46f);");
                trace.statement("return 1;");
            }
            trace.statement("return 0;");
        }
    return kFunction_0x1800ea170;
}

// 0x1800ea1b0 FUN_1800ea1b0
// source: re/dump/decompile/0x1800ea1b0_FUN_1800ea1b0.c
// size: 69 bytes; thunk: false
// body sha256: 6ebdc081c57b436ed4b3376bcbace3bb86ba43ac452904259cb28ad389674699
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800ea1b0{
    "0x1800ea1b0",
    "FUN_1800ea1b0",
    R"F1800ea1b0S(undefined FUN_1800ea1b0())F1800ea1b0S",
    R"B1800ea1b0(// 0x1800ea1b0  FUN_1800ea1b0
// size=69 thunk=false
// signature: undefined FUN_1800ea1b0()
// status: ok


undefined8 * FUN_1800ea1b0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f800000;
  *(undefined4 *)(param_1 + 5) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


)B1800ea1b0",
    "6ebdc081c57b436ed4b3376bcbace3bb86ba43ac452904259cb28ad389674699",
    R"F1800ea1b0C()F1800ea1b0C",
    R"F1800ea1b0D()F1800ea1b0D",
    R"F1800ea1b0T()F1800ea1b0T",
    R"F1800ea1b0F(22: return param_1;)F1800ea1b0F",
    R"F1800ea1b0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1800ea1b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800ea1b0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800ea1b0", "FUN_1800ea1b0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t * param_1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // body sha256: 6ebdc081c57b436ed4b3376bcbace3bb86ba43ac452904259cb28ad389674699
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("*param_1 = 0;");
            trace.statement("param_1[1] = 0;");
            trace.statement("param_1[2] = 0;");
            trace.statement("param_1[3] = 0xf;");
            trace.statement("*(undefined1 *)param_1 = 0;");
            trace.statement("*(undefined1 *)(param_1 + 4) = 0;");
            trace.statement("*(undefined4 *)((longlong)param_1 + 0x24) = 0x3f800000;");
            trace.statement("*(undefined4 *)(param_1 + 5) = 0x3f800000;");
            trace.statement("*(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f800000;");
            trace.statement("*(undefined4 *)(param_1 + 6) = 0x3f800000;");
            trace.statement("param_1[7] = 0;");
            trace.statement("*(undefined4 *)(param_1 + 8) = 0;");
            trace.statement("return param_1;");
        }
    return kFunction_0x1800ea1b0;
}

// 0x1800ea200 FUN_1800ea200
// source: re/dump/decompile/0x1800ea200_FUN_1800ea200.c
// size: 178 bytes; thunk: false
// body sha256: b2763ea1307e37677dfd455d01702adbdf6854e7aeddf64c2796e3a140dd859c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800ea200{
    "0x1800ea200",
    "FUN_1800ea200",
    R"F1800ea200S(undefined FUN_1800ea200())F1800ea200S",
    R"B1800ea200(// 0x1800ea200  FUN_1800ea200
// size=178 thunk=false
// signature: undefined FUN_1800ea200()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800ea200(undefined8 param_1,undefined8 param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fStackX_1c;
  float local_18;
  float local_14 [5];
  
  pfVar2 = &local_18;
  _DAT_1803e85a0 = param_1;
  local_14[0] = 1.5;
  local_18 = 0.75;
  fStackX_1c = (float)((ulonglong)param_2 >> 0x20);
  if (DAT_180380b20 <= DAT_1803da6a4) {
    pfVar2 = &DAT_1803da6a4;
  }
  pfVar1 = local_14;
  if (DAT_1803da6a4 <= DAT_180380c50) {
    pfVar1 = pfVar2;
  }
  DAT_1803e84f4 = *pfVar1 * DAT_1803811fc;
  if ((DAT_1803e84f4 <= fStackX_1c) && (DAT_1803e84f4 = DAT_180381294, fStackX_1c <= DAT_180381294))
  {
    DAT_1803e84f4 = fStackX_1c;
  }
  DAT_1803e84f0 = *pfVar1 * DAT_180381244;
  fVar3 = (float)param_2;
  if ((DAT_1803e84f0 <= fVar3) && (DAT_1803e84f0 = DAT_18038129c, fVar3 <= DAT_18038129c)) {
    DAT_1803e84f0 = fVar3;
  }
  DAT_180409bc0 = 1;
  return;
}


)B1800ea200",
    "b2763ea1307e37677dfd455d01702adbdf6854e7aeddf64c2796e3a140dd859c",
    R"F1800ea200C()F1800ea200C",
    R"F1800ea200D(DAT_180380b20
DAT_180380c50
DAT_1803811fc
DAT_180381244
DAT_180381294
DAT_18038129c
DAT_1803da6a4
DAT_1803e84f0
DAT_1803e84f4
_DAT_1803e85a0
DAT_180409bc0)F1800ea200D",
    R"F1800ea200T()F1800ea200T",
    R"F1800ea200F(24: if (DAT_180380b20 <= DAT_1803da6a4) {
28: if (DAT_1803da6a4 <= DAT_180380c50) {
32: if ((DAT_1803e84f4 <= fStackX_1c) && (DAT_1803e84f4 = DAT_180381294, fStackX_1c <= DAT_180381294))
38: if ((DAT_1803e84f0 <= fVar3) && (DAT_1803e84f0 = DAT_18038129c, fVar3 <= DAT_18038129c)) {
42: return;)F1800ea200F",
    R"F1800ea200U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180380b20.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180380c50.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803811fc.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180381244.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180381294.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_18038129c.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803da6a4.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e84f0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e84f4.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference _DAT_1803e85a0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_180409bc0.)F1800ea200U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800ea200() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800ea200", "FUN_1800ea200");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::uint64_t param_2{};
    [[maybe_unused]] float * pfVar1{};
    [[maybe_unused]] float * pfVar2{};
    [[maybe_unused]] float fVar3{};
    [[maybe_unused]] float fStackX_1c{};
    [[maybe_unused]] float local_18{};
    [[maybe_unused]] float local_14[5]{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180380b20.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180380c50.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803811fc.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180381244.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180381294.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_18038129c.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803da6a4.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e84f0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e84f4.
    // TODO: recover global/data declaration, type, value and runtime page/layout for _DAT_1803e85a0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_180409bc0.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if ((DAT_1803e84f4 <= fStackX_1c) && (DAT_1803e84f4 = DAT_180381294, fStackX_1c <= DAT_180381294)) [reason: unresolved global storage/width]
    // TODO: condition expression type not recovered: if ((DAT_1803e84f0 <= fVar3) && (DAT_1803e84f0 = DAT_18038129c, fVar3 <= DAT_18038129c)) [reason: unresolved global storage/width]
    trace.data_ref("DAT_180380b20", static_cast<const void*>(&image::DAT_180380b20));
    trace.data_ref("DAT_180380c50", static_cast<const void*>(&image::DAT_180380c50));
    trace.data_ref("DAT_1803811fc", static_cast<const void*>(&image::DAT_1803811fc));
    trace.data_ref("DAT_180381244", static_cast<const void*>(&image::DAT_180381244));
    trace.data_ref("DAT_180381294", static_cast<const void*>(&image::DAT_180381294));
    trace.data_ref("DAT_18038129c", static_cast<const void*>(&image::DAT_18038129c));
    trace.data_ref("DAT_1803da6a4", static_cast<const void*>(&image::DAT_1803da6a4));
    trace.data_ref("DAT_1803e84f0", static_cast<const void*>(&image::DAT_1803e84f0));
    trace.data_ref("DAT_1803e84f4", static_cast<const void*>(&image::DAT_1803e84f4));
    trace.data_ref("_DAT_1803e85a0", static_cast<const void*>(&image::_DAT_1803e85a0));
    trace.data_ref("DAT_180409bc0", static_cast<const void*>(&image::DAT_180409bc0));
    // body sha256: b2763ea1307e37677dfd455d01702adbdf6854e7aeddf64c2796e3a140dd859c
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("float *pfVar1;");
            trace.statement("float *pfVar2;");
            trace.statement("float fVar3;");
            trace.statement("float fStackX_1c;");
            trace.statement("float local_18;");
            trace.statement("float local_14 [5];");
            trace.statement("pfVar2 = &local_18;");
            trace.statement("_DAT_1803e85a0 = param_1;");
            trace.statement("local_14[0] = 1.5;");
            trace.statement("local_18 = 0.75;");
            trace.statement("fStackX_1c = (float)((ulonglong)param_2 >> 0x20);");
            if (trace.checked_condition("if (DAT_180380b20 <= DAT_1803da6a4)", [&]() -> bool { return static_cast<bool>(image::DAT_180380b20 <= image::DAT_1803da6a4); })) {
                trace.statement("pfVar2 = &DAT_1803da6a4;");
            }
            trace.statement("pfVar1 = local_14;");
            if (trace.checked_condition("if (DAT_1803da6a4 <= DAT_180380c50)", [&]() -> bool { return static_cast<bool>(image::DAT_1803da6a4 <= image::DAT_180380c50); })) {
                trace.statement("pfVar1 = pfVar2;");
            }
            trace.statement("DAT_1803e84f4 = *pfVar1 * DAT_1803811fc;");
            if (trace.condition("if ((DAT_1803e84f4 <= fStackX_1c) && (DAT_1803e84f4 = DAT_180381294, fStackX_1c <= DAT_180381294))")) {
                trace.statement("DAT_1803e84f4 = fStackX_1c;");
            }
            trace.statement("DAT_1803e84f0 = *pfVar1 * DAT_180381244;");
            trace.statement("fVar3 = (float)param_2;");
            if (trace.condition("if ((DAT_1803e84f0 <= fVar3) && (DAT_1803e84f0 = DAT_18038129c, fVar3 <= DAT_18038129c))")) {
                trace.statement("DAT_1803e84f0 = fVar3;");
            }
            trace.statement("DAT_180409bc0 = 1;");
            trace.statement("return;");
        }
    return kFunction_0x1800ea200;
}

// 0x1800ea2c0 FUN_1800ea2c0
// source: re/dump/decompile/0x1800ea2c0_FUN_1800ea2c0.c
// size: 16 bytes; thunk: false
// body sha256: cc64d4327e289b52c7ae490acdace0fb3da08ba3c87034f72069180179f680b6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800ea2c0{
    "0x1800ea2c0",
    "FUN_1800ea2c0",
    R"F1800ea2c0S(undefined FUN_1800ea2c0())F1800ea2c0S",
    R"B1800ea2c0(// 0x1800ea2c0  FUN_1800ea2c0
// size=16 thunk=false
// signature: undefined FUN_1800ea2c0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1800ea2c0(undefined8 *param_1)

{
  *param_1 = _DAT_1803e85a0;
  return param_1;
}


)B1800ea2c0",
    "cc64d4327e289b52c7ae490acdace0fb3da08ba3c87034f72069180179f680b6",
    R"F1800ea2c0C()F1800ea2c0C",
    R"F1800ea2c0D(_DAT_1803e85a0)F1800ea2c0D",
    R"F1800ea2c0T()F1800ea2c0T",
    R"F1800ea2c0F(13: return param_1;)F1800ea2c0F",
    R"F1800ea2c0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference _DAT_1803e85a0.)F1800ea2c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800ea2c0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800ea2c0", "FUN_1800ea2c0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t * param_1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for _DAT_1803e85a0.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("_DAT_1803e85a0", static_cast<const void*>(&image::_DAT_1803e85a0));
    // body sha256: cc64d4327e289b52c7ae490acdace0fb3da08ba3c87034f72069180179f680b6
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("*param_1 = _DAT_1803e85a0;");
            trace.statement("return param_1;");
        }
    return kFunction_0x1800ea2c0;
}

// 0x1800ea2d0 FUN_1800ea2d0
// source: re/dump/decompile/0x1800ea2d0_FUN_1800ea2d0.c
// size: 16 bytes; thunk: false
// body sha256: c872c74a2473ec91572596dc455b699b071fc405bff531af36c300b51f26f48c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800ea2d0{
    "0x1800ea2d0",
    "FUN_1800ea2d0",
    R"F1800ea2d0S(undefined FUN_1800ea2d0())F1800ea2d0S",
    R"B1800ea2d0(// 0x1800ea2d0  FUN_1800ea2d0
// size=16 thunk=false
// signature: undefined FUN_1800ea2d0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1800ea2d0(undefined8 *param_1)

{
  *param_1 = _DAT_1803e84f0;
  return param_1;
}


)B1800ea2d0",
    "c872c74a2473ec91572596dc455b699b071fc405bff531af36c300b51f26f48c",
    R"F1800ea2d0C()F1800ea2d0C",
    R"F1800ea2d0D(_DAT_1803e84f0)F1800ea2d0D",
    R"F1800ea2d0T()F1800ea2d0T",
    R"F1800ea2d0F(13: return param_1;)F1800ea2d0F",
    R"F1800ea2d0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference _DAT_1803e84f0.)F1800ea2d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800ea2d0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800ea2d0", "FUN_1800ea2d0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t * param_1{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for _DAT_1803e84f0.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.data_ref("_DAT_1803e84f0", static_cast<const void*>(&image::_DAT_1803e84f0));
    // body sha256: c872c74a2473ec91572596dc455b699b071fc405bff531af36c300b51f26f48c
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("*param_1 = _DAT_1803e84f0;");
            trace.statement("return param_1;");
        }
    return kFunction_0x1800ea2d0;
}

// 0x1800ea2e0 FUN_1800ea2e0
// source: re/dump/decompile/0x1800ea2e0_FUN_1800ea2e0.c
// size: 491 bytes; thunk: false
// body sha256: 7936ea2585652a0ce458943b788f99db544db054ca39e56b6c91486767a10291
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800ea2e0{
    "0x1800ea2e0",
    "FUN_1800ea2e0",
    R"F1800ea2e0S(undefined FUN_1800ea2e0())F1800ea2e0S",
    R"B1800ea2e0(// 0x1800ea2e0  FUN_1800ea2e0
// size=491 thunk=false
// signature: undefined FUN_1800ea2e0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800ea2e0(void)

{
  longlong *plVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined *local_88;
  longlong local_80;
  longlong lStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined *local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  local_48 = &DAT_1803e84a0;
  iVar3 = _Mtx_lock(&DAT_1803e84a0);
  if (iVar3 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (DAT_1803e84ec == 0x7fffffff) {
    DAT_1803e84ec = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  lVar5 = DAT_1803eb430;
  lVar4 = DAT_1803eb428;
  if (DAT_1803eb428 != DAT_1803eb430) {
    do {
      local_88 = (undefined *)lVar4;
      FUN_18020e450(lVar4 + 8);
      local_88 = (undefined *)(lVar4 + 0x30);
      lVar4 = (longlong)local_88;
    } while (local_88 != (undefined *)lVar5);
    DAT_1803eb430 = DAT_1803eb428;
  }
  _Mtx_unlock(&DAT_1803e84a0);
  local_80 = 0;
  lStack_78 = 0;
  local_70 = 0;
  local_88 = &DAT_1803e8550;
  iVar3 = _Mtx_lock(&DAT_1803e8550);
  if (iVar3 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (DAT_1803e859c == 0x7fffffff) {
    DAT_1803e859c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  lVar4 = DAT_1803e9ea8;
  lVar5 = DAT_1803e9ea0;
  local_80 = DAT_1803e9ea0;
  DAT_1803e9ea0 = 0;
  lStack_78 = DAT_1803e9ea8;
  DAT_1803e9ea8 = 0;
  local_70 = DAT_1803e9eb0;
  DAT_1803e9eb0 = 0;
  _Mtx_unlock(&DAT_1803e8550);
  do {
    if (lVar5 == lVar4) {
      FUN_18020bb60(&local_80);
      return;
    }
    if (*(longlong *)(lVar5 + 0x60) != 0) {
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      FUN_18001d080(&local_68,"Lua state closed before the chunk ran",0x25);
      local_40[0] = 0;
      plVar1 = *(longlong **)(lVar5 + 0x60);
      if (plVar1 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::_Xbad_function_call();
      }
      (**(code **)(*plVar1 + 0x10))(plVar1,local_40,&local_68);
      FUN_18020e450(&local_68);
    }
    lVar5 = lVar5 + 0x68;
  } while( true );
}


)B1800ea2e0",
    "7936ea2585652a0ce458943b788f99db544db054ca39e56b6c91486767a10291",
    R"F1800ea2e0C(FUN_18001d080
FUN_18020bb60
FUN_18020e450)F1800ea2e0C",
    R"F1800ea2e0D(DAT_1803da4c0
DAT_1803e84a0
DAT_1803e84ec
DAT_1803e8550
DAT_1803e859c
DAT_1803e9ea0
DAT_1803e9ea8
DAT_1803e9eb0
DAT_1803eb428
DAT_1803eb430)F1800ea2e0D",
    R"F1800ea2e0T("Lua state closed before the chunk ran")F1800ea2e0T",
    R"F1800ea2e0F(33: if (iVar3 != 0) {
37: return;
39: if (DAT_1803e84ec == 0x7fffffff) {
45: if (DAT_1803eb428 != DAT_1803eb430) {
46: do {
60: if (iVar3 != 0) {
64: return;
66: if (DAT_1803e859c == 0x7fffffff) {
79: do {
80: if (lVar5 == lVar4) {
82: return;
84: if (*(longlong *)(lVar5 + 0x60) != 0) {
92: if (plVar1 == (longlong *)0x0) {)F1800ea2e0F",
    R"F1800ea2e0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e84a0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e84ec.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e8550.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e859c.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e9ea0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e9ea8.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803e9eb0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb428.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803eb430.
TODO: resolve the indirect call in body 35: pcVar2 = (code *)swi(3);.
TODO: resolve the indirect call in body 36: (*pcVar2)();.
TODO: resolve the indirect call in body 62: pcVar2 = (code *)swi(3);.
TODO: resolve the indirect call in body 63: (*pcVar2)();.
TODO: resolve the indirect call in body 96: (**(code **)(*plVar1 + 0x10))(plVar1,local_40,&local_68);.)F1800ea2e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800ea2e0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800ea2e0", "FUN_1800ea2e0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::int64_t * plVar1{};
    [[maybe_unused]] void* * pcVar2{};
    [[maybe_unused]] std::int32_t iVar3{};
    [[maybe_unused]] std::int64_t lVar4{};
    [[maybe_unused]] std::int64_t lVar5{};
    [[maybe_unused]] std::uint8_t auStack_a8[32]{};
    [[maybe_unused]] std::uint8_t * local_88{};
    [[maybe_unused]] std::int64_t local_80{};
    [[maybe_unused]] std::int64_t lStack_78{};
    [[maybe_unused]] std::uint64_t local_70{};
    [[maybe_unused]] std::uint64_t local_68{};
    [[maybe_unused]] std::uint64_t uStack_60{};
    [[maybe_unused]] std::uint64_t local_58{};
    [[maybe_unused]] std::uint64_t uStack_50{};
    [[maybe_unused]] std::uint8_t * local_48{};
    [[maybe_unused]] std::uint8_t local_40[8]{};
    [[maybe_unused]] std::uint64_t local_38{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803da4c0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e84a0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e84ec.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e8550.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e859c.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e9ea0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e9ea8.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803e9eb0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb428.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803eb430.
    // TODO: resolve the indirect call in body 35: pcVar2 = (code *)swi(3);.
    // TODO: resolve the indirect call in body 36: (*pcVar2)();.
    // TODO: resolve the indirect call in body 62: pcVar2 = (code *)swi(3);.
    // TODO: resolve the indirect call in body 63: (*pcVar2)();.
    // TODO: resolve the indirect call in body 96: (**(code **)(*plVar1 + 0x10))(plVar1,local_40,&local_68);.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    trace.call_arguments("_Mtx_lock", &image::DAT_1803e84a0);
    trace.call_arguments("_Throw_Cpp_error", 5);
    trace.call_arguments("swi", 3);
    trace.call_arguments("_Throw_Cpp_error", 6);
    trace.call_arguments("FUN_18020e450", lVar4 + 8);
    trace.call_arguments("_Mtx_unlock", &image::DAT_1803e84a0);
    trace.call_arguments("_Mtx_lock", &image::DAT_1803e8550);
    trace.call_arguments("_Throw_Cpp_error", 5);
    trace.call_arguments("swi", 3);
    trace.call_arguments("_Throw_Cpp_error", 6);
    trace.call_arguments("_Mtx_unlock", &image::DAT_1803e8550);
    trace.call_arguments("FUN_18020bb60", &local_80);
    trace.call_arguments("FUN_18001d080", &local_68, "Lua state closed before the chunk ran", 0x25);
    trace.call_arguments("_Xbad_function_call");
    trace.call_arguments("FUN_18020e450", &local_68);
    trace.call_target("FUN_18001d080", reinterpret_cast<const void*>(&image::FUN_18001d080));
    trace.call_target("FUN_18020bb60", reinterpret_cast<const void*>(&image::FUN_18020bb60));
    trace.call_target("FUN_18020e450", reinterpret_cast<const void*>(&image::FUN_18020e450));
    trace.data_ref("DAT_1803da4c0", static_cast<const void*>(&image::DAT_1803da4c0));
    trace.data_ref("DAT_1803e84a0", static_cast<const void*>(&image::DAT_1803e84a0));
    trace.data_ref("DAT_1803e84ec", static_cast<const void*>(&image::DAT_1803e84ec));
    trace.data_ref("DAT_1803e8550", static_cast<const void*>(&image::DAT_1803e8550));
    trace.data_ref("DAT_1803e859c", static_cast<const void*>(&image::DAT_1803e859c));
    trace.data_ref("DAT_1803e9ea0", static_cast<const void*>(&image::DAT_1803e9ea0));
    trace.data_ref("DAT_1803e9ea8", static_cast<const void*>(&image::DAT_1803e9ea8));
    trace.data_ref("DAT_1803e9eb0", static_cast<const void*>(&image::DAT_1803e9eb0));
    trace.data_ref("DAT_1803eb428", static_cast<const void*>(&image::DAT_1803eb428));
    trace.data_ref("DAT_1803eb430", static_cast<const void*>(&image::DAT_1803eb430));
    trace.string_literal("Lua state closed before the chunk ran");
    // body sha256: 7936ea2585652a0ce458943b788f99db544db054ca39e56b6c91486767a10291
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("longlong *plVar1;");
            trace.statement("code *pcVar2;");
            trace.statement("int iVar3;");
            trace.statement("longlong lVar4;");
            trace.statement("longlong lVar5;");
            trace.statement("undefined1 auStack_a8 [32];");
            trace.statement("undefined *local_88;");
            trace.statement("longlong local_80;");
            trace.statement("longlong lStack_78;");
            trace.statement("undefined8 local_70;");
            trace.statement("undefined8 local_68;");
            trace.statement("undefined8 uStack_60;");
            trace.statement("undefined8 local_58;");
            trace.statement("undefined8 uStack_50;");
            trace.statement("undefined *local_48;");
            trace.statement("undefined1 local_40 [8];");
            trace.statement("ulonglong local_38;");
            trace.statement("local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;");
            trace.statement("local_48 = &DAT_1803e84a0;");
            trace.statement("iVar3 = _Mtx_lock(&DAT_1803e84a0);");
            if (trace.checked_condition("if (iVar3 != 0)", [&]() -> bool { return static_cast<bool>(iVar3 != 0); })) {
                trace.statement("std::_Throw_Cpp_error(5);");
                trace.statement("pcVar2 = (code *)swi(3);");
                trace.statement("(*pcVar2)();");
                trace.statement("return;");
            }
            if (trace.checked_condition("if (DAT_1803e84ec == 0x7fffffff)", [&]() -> bool { return static_cast<bool>(image::DAT_1803e84ec == 0x7fffffff); })) {
                trace.statement("DAT_1803e84ec = 0x7ffffffe;");
                trace.statement("std::_Throw_Cpp_error(6);");
            }
            trace.statement("lVar5 = DAT_1803eb430;");
            trace.statement("lVar4 = DAT_1803eb428;");
            if (trace.checked_condition("if (DAT_1803eb428 != DAT_1803eb430)", [&]() -> bool { return static_cast<bool>(image::DAT_1803eb428 != image::DAT_1803eb430); })) {
                do {
                    trace.statement("local_88 = (undefined *)lVar4;");
                    trace.statement("FUN_18020e450(lVar4 + 8);");
                    trace.statement("local_88 = (undefined *)(lVar4 + 0x30);");
                    trace.statement("lVar4 = (longlong)local_88;");
                } while (trace.loop_condition("while (local_88 != (undefined *)lVar5);"));
                trace.statement("DAT_1803eb430 = DAT_1803eb428;");
            }
            trace.statement("_Mtx_unlock(&DAT_1803e84a0);");
            trace.statement("local_80 = 0;");
            trace.statement("lStack_78 = 0;");
            trace.statement("local_70 = 0;");
            trace.statement("local_88 = &DAT_1803e8550;");
            trace.statement("iVar3 = _Mtx_lock(&DAT_1803e8550);");
            if (trace.checked_condition("if (iVar3 != 0)", [&]() -> bool { return static_cast<bool>(iVar3 != 0); })) {
                trace.statement("std::_Throw_Cpp_error(5);");
                trace.statement("pcVar2 = (code *)swi(3);");
                trace.statement("(*pcVar2)();");
                trace.statement("return;");
            }
            if (trace.checked_condition("if (DAT_1803e859c == 0x7fffffff)", [&]() -> bool { return static_cast<bool>(image::DAT_1803e859c == 0x7fffffff); })) {
                trace.statement("DAT_1803e859c = 0x7ffffffe;");
                trace.statement("std::_Throw_Cpp_error(6);");
            }
            trace.statement("lVar4 = DAT_1803e9ea8;");
            trace.statement("lVar5 = DAT_1803e9ea0;");
            trace.statement("local_80 = DAT_1803e9ea0;");
            trace.statement("DAT_1803e9ea0 = 0;");
            trace.statement("lStack_78 = DAT_1803e9ea8;");
            trace.statement("DAT_1803e9ea8 = 0;");
            trace.statement("local_70 = DAT_1803e9eb0;");
            trace.statement("DAT_1803e9eb0 = 0;");
            trace.statement("_Mtx_unlock(&DAT_1803e8550);");
            do {
                if (trace.checked_condition("if (lVar5 == lVar4)", [&]() -> bool { return static_cast<bool>(lVar5 == lVar4); })) {
                    trace.statement("FUN_18020bb60(&local_80);");
                    trace.statement("return;");
                }
                if (trace.checked_condition("if (*(longlong *)(lVar5 + 0x60) != 0)", [&]() -> bool { return static_cast<bool>(load_at<std::int64_t>(lVar5 + 0x60, 0) != 0); })) {
                    trace.statement("local_68 = 0;");
                    trace.statement("uStack_60 = 0;");
                    trace.statement("local_58 = 0;");
                    trace.statement("uStack_50 = 0;");
                    trace.statement("FUN_18001d080(&local_68,\"Lua state closed before the chunk ran\",0x25);");
                    trace.statement("local_40[0] = 0;");
                    trace.statement("plVar1 = *(longlong **)(lVar5 + 0x60);");
                    if (trace.checked_condition("if (plVar1 == (longlong *)0x0)", [&]() -> bool { return static_cast<bool>(plVar1 == (longlong *)0x0); })) {
                        trace.statement("std::_Xbad_function_call();");
                    }
                    trace.statement("(**(code **)(*plVar1 + 0x10))(plVar1,local_40,&local_68);");
                    trace.statement("FUN_18020e450(&local_68);");
                }
                trace.statement("lVar5 = lVar5 + 0x68;");
            } while (trace.loop_condition("while( true );"));
        }
    return kFunction_0x1800ea2e0;
}

// 0x1800ea4d0 FUN_1800ea4d0
// source: re/dump/decompile/0x1800ea4d0_FUN_1800ea4d0.c
// size: 339 bytes; thunk: false
// body sha256: 30edec8038cf5fb66937d27f76af79b9727ee8c09dcd3650ef862f2c206a44b8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800ea4d0{
    "0x1800ea4d0",
    "FUN_1800ea4d0",
    R"F1800ea4d0S(undefined FUN_1800ea4d0())F1800ea4d0S",
    R"B1800ea4d0(// 0x1800ea4d0  FUN_1800ea4d0
// size=339 thunk=false
// signature: undefined FUN_1800ea4d0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1800ea4d0(undefined8 *param_1,LPCSTR param_2)

{
  int cchWideChar;
  LPWSTR **lpWideCharStr;
  LPCSTR lpMultiByteStr;
  undefined1 auStackY_88 [32];
  LPWSTR *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStackY_88;
  if (*(longlong *)(param_2 + 0x10) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 7;
    *(undefined2 *)param_1 = 0;
  }
  else {
    lpMultiByteStr = param_2;
    if (0xf < *(ulonglong *)(param_2 + 0x18)) {
      lpMultiByteStr = *(LPCSTR *)param_2;
    }
    cchWideChar = MultiByteToWideChar(0xfde9,0,lpMultiByteStr,-1,(LPWSTR)0x0,0);
    if (cchWideChar < 1) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 7;
      *(undefined2 *)param_1 = 0;
    }
    else {
      local_48 = (LPWSTR *)0x0;
      uStack_40 = 0;
      local_38 = 0;
      uStack_30 = 0;
      FUN_18021a940(&local_48,0,(longlong)(cchWideChar + -1));
      lpWideCharStr = &local_48;
      if (7 < uStack_30) {
        lpWideCharStr = (LPWSTR **)local_48;
      }
      if (0xf < *(ulonglong *)(param_2 + 0x18)) {
        param_2 = *(LPCSTR *)param_2;
      }
      MultiByteToWideChar(0xfde9,0,param_2,-1,(LPWSTR)lpWideCharStr,cchWideChar);
      *param_1 = local_48;
      param_1[1] = uStack_40;
      *(undefined4 *)(param_1 + 2) = (undefined4)local_38;
      *(undefined4 *)((longlong)param_1 + 0x14) = local_38._4_4_;
      *(undefined4 *)(param_1 + 3) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_30._4_4_;
      local_38 = _DAT_1803814a0;
      uStack_30 = _UNK_1803814a8;
      local_48 = (LPWSTR *)((ulonglong)local_48 & 0xffffffffffff0000);
      FUN_18021e290(&local_48);
    }
  }
  return param_1;
}


)B1800ea4d0",
    "30edec8038cf5fb66937d27f76af79b9727ee8c09dcd3650ef862f2c206a44b8",
    R"F1800ea4d0C(FUN_18021a940
FUN_18021e290)F1800ea4d0C",
    R"F1800ea4d0D(_DAT_1803814a0
_UNK_1803814a8
DAT_1803da4c0)F1800ea4d0D",
    R"F1800ea4d0T()F1800ea4d0T",
    R"F1800ea4d0F(24: if (*(longlong *)(param_2 + 0x10) == 0) {
31: else {
33: if (0xf < *(ulonglong *)(param_2 + 0x18)) {
37: if (cchWideChar < 1) {
44: else {
51: if (7 < uStack_30) {
54: if (0xf < *(ulonglong *)(param_2 + 0x18)) {
70: return param_1;)F1800ea4d0F",
    R"F1800ea4d0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference _DAT_1803814a0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference _UNK_1803814a8.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803da4c0.)F1800ea4d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800ea4d0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800ea4d0", "FUN_1800ea4d0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t * param_1{};
    [[maybe_unused]] std::int32_t cchWideChar{};
    [[maybe_unused]] std::uint8_t auStackY_88[32]{};
    [[maybe_unused]] std::uint64_t uStack_40{};
    [[maybe_unused]] std::uint64_t local_38{};
    [[maybe_unused]] std::uint64_t uStack_30{};
    [[maybe_unused]] std::uint64_t local_28{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for _DAT_1803814a0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for _UNK_1803814a8.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803da4c0.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if (*(longlong *)(param_2 + 0x10) == 0) [reason: pointer depth/pointee not proven]
    // TODO: condition expression type not recovered: if (0xf < *(ulonglong *)(param_2 + 0x18)) [reason: pointer depth/pointee not proven]
    // TODO: condition expression type not recovered: if (0xf < *(ulonglong *)(param_2 + 0x18)) [reason: pointer depth/pointee not proven]
    // TODO: call arguments not type-recovered for MultiByteToWideChar: 0xfde9,0,lpMultiByteStr,-1,(LPWSTR)0x0,0 [reason: ambiguous operand type]
    // TODO: call arguments not type-recovered for FUN_18021a940: &local_48,0,(longlong)(cchWideChar + -1) [reason: scalar cast width/kind mismatch]
    // TODO: call arguments not type-recovered for MultiByteToWideChar: 0xfde9,0,param_2,-1,(LPWSTR)lpWideCharStr,cchWideChar [reason: ambiguous operand type]
    // TODO: call arguments not type-recovered for FUN_18021e290: &local_48 [reason: ambiguous operand type]
    trace.call_target("FUN_18021a940", reinterpret_cast<const void*>(&image::FUN_18021a940));
    trace.call_target("FUN_18021e290", reinterpret_cast<const void*>(&image::FUN_18021e290));
    trace.data_ref("_DAT_1803814a0", static_cast<const void*>(&image::_DAT_1803814a0));
    trace.data_ref("_UNK_1803814a8", static_cast<const void*>(&image::_UNK_1803814a8));
    trace.data_ref("DAT_1803da4c0", static_cast<const void*>(&image::DAT_1803da4c0));
    // body sha256: 30edec8038cf5fb66937d27f76af79b9727ee8c09dcd3650ef862f2c206a44b8
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("int cchWideChar;");
            trace.statement("LPWSTR **lpWideCharStr;");
            trace.statement("LPCSTR lpMultiByteStr;");
            trace.statement("undefined1 auStackY_88 [32];");
            trace.statement("LPWSTR *local_48;");
            trace.statement("undefined8 uStack_40;");
            trace.statement("undefined8 local_38;");
            trace.statement("undefined8 uStack_30;");
            trace.statement("ulonglong local_28;");
            trace.statement("local_28 = DAT_1803da4c0 ^ (ulonglong)auStackY_88;");
            if (trace.condition("if (*(longlong *)(param_2 + 0x10) == 0)")) {
                trace.statement("*param_1 = 0;");
                trace.statement("param_1[1] = 0;");
                trace.statement("param_1[2] = 0;");
                trace.statement("param_1[3] = 7;");
                trace.statement("*(undefined2 *)param_1 = 0;");
            } else {
            trace.statement("lpMultiByteStr = param_2;");
            if (trace.condition("if (0xf < *(ulonglong *)(param_2 + 0x18))")) {
                trace.statement("lpMultiByteStr = *(LPCSTR *)param_2;");
            }
            trace.statement("cchWideChar = MultiByteToWideChar(0xfde9,0,lpMultiByteStr,-1,(LPWSTR)0x0,0);");
            if (trace.checked_condition("if (cchWideChar < 1)", [&]() -> bool { return static_cast<bool>(cchWideChar < 1); })) {
                trace.statement("*param_1 = 0;");
                trace.statement("param_1[1] = 0;");
                trace.statement("param_1[2] = 0;");
                trace.statement("param_1[3] = 7;");
                trace.statement("*(undefined2 *)param_1 = 0;");
            } else {
            trace.statement("local_48 = (LPWSTR *)0x0;");
            trace.statement("uStack_40 = 0;");
            trace.statement("local_38 = 0;");
            trace.statement("uStack_30 = 0;");
            trace.statement("FUN_18021a940(&local_48,0,(longlong)(cchWideChar + -1));");
            trace.statement("lpWideCharStr = &local_48;");
            if (trace.checked_condition("if (7 < uStack_30)", [&]() -> bool { return static_cast<bool>(7 < uStack_30); })) {
                trace.statement("lpWideCharStr = (LPWSTR **)local_48;");
            }
            if (trace.condition("if (0xf < *(ulonglong *)(param_2 + 0x18))")) {
                trace.statement("param_2 = *(LPCSTR *)param_2;");
            }
            trace.statement("MultiByteToWideChar(0xfde9,0,param_2,-1,(LPWSTR)lpWideCharStr,cchWideChar);");
            trace.statement("*param_1 = local_48;");
            trace.statement("param_1[1] = uStack_40;");
            trace.statement("*(undefined4 *)(param_1 + 2) = (undefined4)local_38;");
            trace.statement("*(undefined4 *)((longlong)param_1 + 0x14) = local_38._4_4_;");
            trace.statement("*(undefined4 *)(param_1 + 3) = (undefined4)uStack_30;");
            trace.statement("*(undefined4 *)((longlong)param_1 + 0x1c) = uStack_30._4_4_;");
            trace.statement("local_38 = _DAT_1803814a0;");
            trace.statement("uStack_30 = _UNK_1803814a8;");
            trace.statement("local_48 = (LPWSTR *)((ulonglong)local_48 & 0xffffffffffff0000);");
            trace.statement("FUN_18021e290(&local_48);");
            }
            }
            trace.statement("return param_1;");
        }
    return kFunction_0x1800ea4d0;
}

// 0x1800ea630 FUN_1800ea630
// source: re/dump/decompile/0x1800ea630_FUN_1800ea630.c
// size: 354 bytes; thunk: false
// body sha256: 2432121d2e21129ee6a061a2e4fa870e8a8bc269d398d61b6b58d8acaec7a3d0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800ea630{
    "0x1800ea630",
    "FUN_1800ea630",
    R"F1800ea630S(undefined FUN_1800ea630())F1800ea630S",
    R"B1800ea630(// 0x1800ea630  FUN_1800ea630
// size=354 thunk=false
// signature: undefined FUN_1800ea630()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1800ea630(undefined8 *param_1,LPCWSTR param_2)

{
  int cbMultiByte;
  LPSTR lpMultiByteStr;
  LPCWSTR lpWideCharStr;
  undefined1 auStackY_98 [32];
  CHAR local_48;
  undefined7 uStack_47;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStackY_98;
  if (*(longlong *)(param_2 + 8) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
  }
  else {
    lpWideCharStr = param_2;
    if (7 < *(ulonglong *)(param_2 + 0xc)) {
      lpWideCharStr = *(LPCWSTR *)param_2;
    }
    cbMultiByte = WideCharToMultiByte(0xfde9,0,lpWideCharStr,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0
                                     );
    if (cbMultiByte < 1) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0xf;
      *(undefined1 *)param_1 = 0;
    }
    else {
      FUN_18020ea80(&local_48,(longlong)(cbMultiByte + -1),0);
      lpMultiByteStr = &local_48;
      if (0xf < uStack_30) {
        lpMultiByteStr = (LPSTR)CONCAT71(uStack_47,local_48);
      }
      if (7 < *(ulonglong *)(param_2 + 0xc)) {
        param_2 = *(LPCWSTR *)param_2;
      }
      WideCharToMultiByte(0xfde9,0,param_2,-1,lpMultiByteStr,cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
      *param_1 = CONCAT71(uStack_47,local_48);
      param_1[1] = uStack_40;
      *(undefined4 *)(param_1 + 2) = (undefined4)local_38;
      *(undefined4 *)((longlong)param_1 + 0x14) = local_38._4_4_;
      *(undefined4 *)(param_1 + 3) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_30._4_4_;
      local_38 = _DAT_1803814b0;
      uStack_30 = _UNK_1803814b8;
      local_48 = '\0';
      FUN_18020e450(&local_48);
    }
  }
  return param_1;
}


)B1800ea630",
    "2432121d2e21129ee6a061a2e4fa870e8a8bc269d398d61b6b58d8acaec7a3d0",
    R"F1800ea630C(FUN_18020e450
FUN_18020ea80)F1800ea630C",
    R"F1800ea630D(_DAT_1803814b0
_UNK_1803814b8
DAT_1803da4c0)F1800ea630D",
    R"F1800ea630T()F1800ea630T",
    R"F1800ea630F(25: if (*(longlong *)(param_2 + 8) == 0) {
32: else {
34: if (7 < *(ulonglong *)(param_2 + 0xc)) {
39: if (cbMultiByte < 1) {
46: else {
49: if (0xf < uStack_30) {
52: if (7 < *(ulonglong *)(param_2 + 0xc)) {
68: return param_1;)F1800ea630F",
    R"F1800ea630U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference _DAT_1803814b0.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference _UNK_1803814b8.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803da4c0.)F1800ea630U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800ea630() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800ea630", "FUN_1800ea630");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t * param_1{};
    [[maybe_unused]] std::int32_t cbMultiByte{};
    [[maybe_unused]] std::uint8_t auStackY_98[32]{};
    [[maybe_unused]] std::uint64_t uStack_40{};
    [[maybe_unused]] std::uint64_t local_38{};
    [[maybe_unused]] std::uint64_t uStack_30{};
    [[maybe_unused]] std::uint64_t local_28{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for _DAT_1803814b0.
    // TODO: recover global/data declaration, type, value and runtime page/layout for _UNK_1803814b8.
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803da4c0.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if (*(longlong *)(param_2 + 8) == 0) [reason: pointer depth/pointee not proven]
    // TODO: condition expression type not recovered: if (7 < *(ulonglong *)(param_2 + 0xc)) [reason: pointer depth/pointee not proven]
    // TODO: condition expression type not recovered: if (7 < *(ulonglong *)(param_2 + 0xc)) [reason: pointer depth/pointee not proven]
    // TODO: call arguments not type-recovered for FUN_18020ea80: &local_48,(longlong)(cbMultiByte + -1),0 [reason: scalar cast width/kind mismatch]
    // TODO: call arguments not type-recovered for CONCAT71: uStack_47,local_48 [reason: ambiguous operand type]
    // TODO: call arguments not type-recovered for WideCharToMultiByte: 0xfde9,0,param_2,-1,lpMultiByteStr,cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0 [reason: ambiguous operand type]
    // TODO: call arguments not type-recovered for CONCAT71: uStack_47,local_48 [reason: ambiguous operand type]
    // TODO: call arguments not type-recovered for FUN_18020e450: &local_48 [reason: ambiguous operand type]
    trace.call_target("FUN_18020e450", reinterpret_cast<const void*>(&image::FUN_18020e450));
    trace.call_target("FUN_18020ea80", reinterpret_cast<const void*>(&image::FUN_18020ea80));
    trace.data_ref("_DAT_1803814b0", static_cast<const void*>(&image::_DAT_1803814b0));
    trace.data_ref("_UNK_1803814b8", static_cast<const void*>(&image::_UNK_1803814b8));
    trace.data_ref("DAT_1803da4c0", static_cast<const void*>(&image::DAT_1803da4c0));
    // body sha256: 2432121d2e21129ee6a061a2e4fa870e8a8bc269d398d61b6b58d8acaec7a3d0
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("int cbMultiByte;");
            trace.statement("LPSTR lpMultiByteStr;");
            trace.statement("LPCWSTR lpWideCharStr;");
            trace.statement("undefined1 auStackY_98 [32];");
            trace.statement("CHAR local_48;");
            trace.statement("undefined7 uStack_47;");
            trace.statement("undefined8 uStack_40;");
            trace.statement("undefined8 local_38;");
            trace.statement("undefined8 uStack_30;");
            trace.statement("ulonglong local_28;");
            trace.statement("local_28 = DAT_1803da4c0 ^ (ulonglong)auStackY_98;");
            if (trace.condition("if (*(longlong *)(param_2 + 8) == 0)")) {
                trace.statement("*param_1 = 0;");
                trace.statement("param_1[1] = 0;");
                trace.statement("param_1[2] = 0;");
                trace.statement("param_1[3] = 0xf;");
                trace.statement("*(undefined1 *)param_1 = 0;");
            } else {
            trace.statement("lpWideCharStr = param_2;");
            if (trace.condition("if (7 < *(ulonglong *)(param_2 + 0xc))")) {
                trace.statement("lpWideCharStr = *(LPCWSTR *)param_2;");
            }
            trace.statement("cbMultiByte = WideCharToMultiByte(0xfde9,0,lpWideCharStr,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0");
            trace.statement(");");
            if (trace.checked_condition("if (cbMultiByte < 1)", [&]() -> bool { return static_cast<bool>(cbMultiByte < 1); })) {
                trace.statement("*param_1 = 0;");
                trace.statement("param_1[1] = 0;");
                trace.statement("param_1[2] = 0;");
                trace.statement("param_1[3] = 0xf;");
                trace.statement("*(undefined1 *)param_1 = 0;");
            } else {
            trace.statement("FUN_18020ea80(&local_48,(longlong)(cbMultiByte + -1),0);");
            trace.statement("lpMultiByteStr = &local_48;");
            if (trace.checked_condition("if (0xf < uStack_30)", [&]() -> bool { return static_cast<bool>(0xf < uStack_30); })) {
                trace.statement("lpMultiByteStr = (LPSTR)CONCAT71(uStack_47,local_48);");
            }
            if (trace.condition("if (7 < *(ulonglong *)(param_2 + 0xc))")) {
                trace.statement("param_2 = *(LPCWSTR *)param_2;");
            }
            trace.statement("WideCharToMultiByte(0xfde9,0,param_2,-1,lpMultiByteStr,cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);");
            trace.statement("*param_1 = CONCAT71(uStack_47,local_48);");
            trace.statement("param_1[1] = uStack_40;");
            trace.statement("*(undefined4 *)(param_1 + 2) = (undefined4)local_38;");
            trace.statement("*(undefined4 *)((longlong)param_1 + 0x14) = local_38._4_4_;");
            trace.statement("*(undefined4 *)(param_1 + 3) = (undefined4)uStack_30;");
            trace.statement("*(undefined4 *)((longlong)param_1 + 0x1c) = uStack_30._4_4_;");
            trace.statement("local_38 = _DAT_1803814b0;");
            trace.statement("uStack_30 = _UNK_1803814b8;");
            trace.statement("local_48 = '\\0';");
            trace.statement("FUN_18020e450(&local_48);");
            }
            }
            trace.statement("return param_1;");
        }
    return kFunction_0x1800ea630;
}

// 0x1800ea7a0 FUN_1800ea7a0
// source: re/dump/decompile/0x1800ea7a0_FUN_1800ea7a0.c
// size: 853 bytes; thunk: false
// body sha256: d1f53919fc60a8b9fd816acaba20b73e581c5a80a77e30c004f9f0ec6b682c30
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800ea7a0{
    "0x1800ea7a0",
    "FUN_1800ea7a0",
    R"F1800ea7a0S(undefined FUN_1800ea7a0())F1800ea7a0S",
    R"B1800ea7a0(// 0x1800ea7a0  FUN_1800ea7a0
// size=853 thunk=false
// signature: undefined FUN_1800ea7a0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800ea7a0(undefined8 param_1)

{
  int iVar1;
  DWORD DVar2;
  size_t sVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_538 [32];
  wchar_t *local_518;
  undefined4 local_508;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined8 *local_4a0;
  undefined8 *local_498;
  undefined8 *local_490;
  undefined8 local_488;
  undefined1 local_480 [40];
  wchar_t local_458 [264];
  WCHAR local_248 [264];
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_538;
  local_508 = 0;
  local_488 = param_1;
  memset(local_458,0,0x208);
  local_518 = local_458;
  iVar1 = SHGetFolderPathW(0,0x8005,0,0);
  if (iVar1 < 0) {
    memset(local_248,0,0x208);
    DVar2 = GetEnvironmentVariableW(L"USERPROFILE",local_248,0x104);
    local_490 = &local_4c0;
    if (DVar2 == 0) {
      local_4c0 = 0;
      uStack_4b8 = 0;
      local_4b0 = 0;
      local_4a8 = 0;
      FUN_180211510(&local_4c0,L"mayrrX64",8);
      local_508 = 0;
      uVar4 = FUN_180068190(local_480);
      FUN_180066720(param_1,uVar4,&local_4c0);
      local_508 = 1;
      FUN_18021e290(local_480);
    }
    else {
      local_4c0 = 0;
      uStack_4b8 = 0;
      local_4b0 = 0;
      local_4a8 = 0;
      local_498 = local_490;
      FUN_180211510(&local_4c0,L"mayrrX64",8);
      local_508 = 0;
      local_4a0 = &local_500;
      local_500 = 0;
      uStack_4f8 = 0;
      local_4f0 = 0;
      local_4e8 = 0;
      FUN_180211510(&local_500,L"Documents",9);
      local_508 = 0;
      local_490 = &local_4e0;
      sVar3 = wcslen(local_248);
      local_4e0 = 0;
      uStack_4d8 = 0;
      local_4d0 = 0;
      local_4c8 = 0;
      FUN_180211510(&local_4e0,local_248,sVar3);
      local_508 = 0;
      uVar4 = FUN_180066720(local_480,&local_4e0,&local_500);
      FUN_180066720(param_1,uVar4,&local_4c0);
      local_508 = 1;
      FUN_18021e290(local_480);
      FUN_18021e290(&local_4e0);
      FUN_18021e290(&local_500);
    }
    puVar5 = &local_4c0;
  }
  else {
    local_4a0 = &local_4e0;
    local_4e0 = 0;
    uStack_4d8 = 0;
    local_4d0 = 0;
    local_4c8 = 0;
    FUN_180211510(&local_4e0,L"mayrrX64",8);
    local_508 = 0;
    local_498 = &local_500;
    sVar3 = wcslen(local_458);
    local_500 = 0;
    uStack_4f8 = 0;
    local_4f0 = 0;
    local_4e8 = 0;
    FUN_180211510(&local_500,local_458,sVar3);
    local_508 = 0;
    FUN_180066720(param_1,&local_500,&local_4e0);
    local_508 = 1;
    FUN_18021e290(&local_500);
    puVar5 = &local_4e0;
  }
  FUN_18021e290(puVar5);
  return param_1;
}


)B1800ea7a0",
    "d1f53919fc60a8b9fd816acaba20b73e581c5a80a77e30c004f9f0ec6b682c30",
    R"F1800ea7a0C(FUN_180066720
FUN_180068190
FUN_180211510
FUN_18021e290)F1800ea7a0C",
    R"F1800ea7a0D(DAT_1803da4c0)F1800ea7a0D",
    R"F1800ea7a0T("mayrrX64"
"Documents"
"USERPROFILE")F1800ea7a0T",
    R"F1800ea7a0F(47: if (iVar1 < 0) {
51: if (DVar2 == 0) {
63: else {
95: else {
117: return param_1;)F1800ea7a0F",
    R"F1800ea7a0U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.
TODO: recover the declaration, type, value and runtime page/layout for global/data reference DAT_1803da4c0.)F1800ea7a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800ea7a0() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800ea7a0", "FUN_1800ea7a0");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::int32_t iVar1{};
    [[maybe_unused]] std::size_t sVar3{};
    [[maybe_unused]] std::uint64_t uVar4{};
    [[maybe_unused]] std::uint64_t * puVar5{};
    [[maybe_unused]] std::uint8_t auStack_538[32]{};
    [[maybe_unused]] std::uint32_t local_508{};
    [[maybe_unused]] std::uint64_t local_500{};
    [[maybe_unused]] std::uint64_t uStack_4f8{};
    [[maybe_unused]] std::uint64_t local_4f0{};
    [[maybe_unused]] std::uint64_t local_4e8{};
    [[maybe_unused]] std::uint64_t local_4e0{};
    [[maybe_unused]] std::uint64_t uStack_4d8{};
    [[maybe_unused]] std::uint64_t local_4d0{};
    [[maybe_unused]] std::uint64_t local_4c8{};
    [[maybe_unused]] std::uint64_t local_4c0{};
    [[maybe_unused]] std::uint64_t uStack_4b8{};
    [[maybe_unused]] std::uint64_t local_4b0{};
    [[maybe_unused]] std::uint64_t local_4a8{};
    [[maybe_unused]] std::uint64_t * local_4a0{};
    [[maybe_unused]] std::uint64_t * local_498{};
    [[maybe_unused]] std::uint64_t * local_490{};
    [[maybe_unused]] std::uint64_t local_488{};
    [[maybe_unused]] std::uint8_t local_480[40]{};
    [[maybe_unused]] std::uint64_t local_38{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: recover global/data declaration, type, value and runtime page/layout for DAT_1803da4c0.
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: condition expression type not recovered: if (DVar2 == 0) [reason: ambiguous operand type]
    // TODO: call arguments not type-recovered for memset: local_458,0,0x208 [reason: ambiguous operand type]
    // TODO: call arguments not type-recovered for memset: local_248,0,0x208 [reason: ambiguous operand type]
    // TODO: call arguments not type-recovered for GetEnvironmentVariableW: L"USERPROFILE",local_248,0x104 [reason: ambiguous operand type]
    // TODO: call arguments not type-recovered for FUN_180211510: &local_4c0,L"mayrrX64",8 [reason: ambiguous operand type]
    // TODO: call arguments not type-recovered for FUN_180211510: &local_4c0,L"mayrrX64",8 [reason: ambiguous operand type]
    // TODO: call arguments not type-recovered for FUN_180211510: &local_500,L"Documents",9 [reason: ambiguous operand type]
    // TODO: call arguments not type-recovered for wcslen: local_248 [reason: ambiguous operand type]
    // TODO: call arguments not type-recovered for FUN_180211510: &local_4e0,local_248,sVar3 [reason: ambiguous operand type]
    // TODO: call arguments not type-recovered for FUN_180211510: &local_4e0,L"mayrrX64",8 [reason: ambiguous operand type]
    // TODO: call arguments not type-recovered for wcslen: local_458 [reason: ambiguous operand type]
    // TODO: call arguments not type-recovered for FUN_180211510: &local_500,local_458,sVar3 [reason: ambiguous operand type]
    trace.call_arguments("SHGetFolderPathW", 0, 0x8005, 0, 0);
    trace.call_arguments("FUN_180068190", local_480);
    trace.call_arguments("FUN_180066720", param_1, uVar4, &local_4c0);
    trace.call_arguments("FUN_18021e290", local_480);
    trace.call_arguments("FUN_180066720", local_480, &local_4e0, &local_500);
    trace.call_arguments("FUN_180066720", param_1, uVar4, &local_4c0);
    trace.call_arguments("FUN_18021e290", local_480);
    trace.call_arguments("FUN_18021e290", &local_4e0);
    trace.call_arguments("FUN_18021e290", &local_500);
    trace.call_arguments("FUN_180066720", param_1, &local_500, &local_4e0);
    trace.call_arguments("FUN_18021e290", &local_500);
    trace.call_arguments("FUN_18021e290", puVar5);
    trace.call_target("FUN_180066720", reinterpret_cast<const void*>(&image::FUN_180066720));
    trace.call_target("FUN_180068190", reinterpret_cast<const void*>(&image::FUN_180068190));
    trace.call_target("FUN_180211510", reinterpret_cast<const void*>(&image::FUN_180211510));
    trace.call_target("FUN_18021e290", reinterpret_cast<const void*>(&image::FUN_18021e290));
    trace.data_ref("DAT_1803da4c0", static_cast<const void*>(&image::DAT_1803da4c0));
    trace.string_literal("mayrrX64");
    trace.string_literal("Documents");
    trace.string_literal("USERPROFILE");
    // body sha256: d1f53919fc60a8b9fd816acaba20b73e581c5a80a77e30c004f9f0ec6b682c30
    // Structured control-flow trace derived from the decompiled body:
        {
            trace.statement("int iVar1;");
            trace.statement("DWORD DVar2;");
            trace.statement("size_t sVar3;");
            trace.statement("undefined8 uVar4;");
            trace.statement("undefined8 *puVar5;");
            trace.statement("undefined1 auStack_538 [32];");
            trace.statement("wchar_t *local_518;");
            trace.statement("undefined4 local_508;");
            trace.statement("undefined8 local_500;");
            trace.statement("undefined8 uStack_4f8;");
            trace.statement("undefined8 local_4f0;");
            trace.statement("undefined8 local_4e8;");
            trace.statement("undefined8 local_4e0;");
            trace.statement("undefined8 uStack_4d8;");
            trace.statement("undefined8 local_4d0;");
            trace.statement("undefined8 local_4c8;");
            trace.statement("undefined8 local_4c0;");
            trace.statement("undefined8 uStack_4b8;");
            trace.statement("undefined8 local_4b0;");
            trace.statement("undefined8 local_4a8;");
            trace.statement("undefined8 *local_4a0;");
            trace.statement("undefined8 *local_498;");
            trace.statement("undefined8 *local_490;");
            trace.statement("undefined8 local_488;");
            trace.statement("undefined1 local_480 [40];");
            trace.statement("wchar_t local_458 [264];");
            trace.statement("WCHAR local_248 [264];");
            trace.statement("ulonglong local_38;");
            trace.statement("local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_538;");
            trace.statement("local_508 = 0;");
            trace.statement("local_488 = param_1;");
            trace.statement("memset(local_458,0,0x208);");
            trace.statement("local_518 = local_458;");
            trace.statement("iVar1 = SHGetFolderPathW(0,0x8005,0,0);");
            if (trace.checked_condition("if (iVar1 < 0)", [&]() -> bool { return static_cast<bool>(iVar1 < 0); })) {
                trace.statement("memset(local_248,0,0x208);");
                trace.statement("DVar2 = GetEnvironmentVariableW(L\"USERPROFILE\",local_248,0x104);");
                trace.statement("local_490 = &local_4c0;");
                if (trace.condition("if (DVar2 == 0)")) {
                    trace.statement("local_4c0 = 0;");
                    trace.statement("uStack_4b8 = 0;");
                    trace.statement("local_4b0 = 0;");
                    trace.statement("local_4a8 = 0;");
                    trace.statement("FUN_180211510(&local_4c0,L\"mayrrX64\",8);");
                    trace.statement("local_508 = 0;");
                    trace.statement("uVar4 = FUN_180068190(local_480);");
                    trace.statement("FUN_180066720(param_1,uVar4,&local_4c0);");
                    trace.statement("local_508 = 1;");
                    trace.statement("FUN_18021e290(local_480);");
                } else {
                trace.statement("local_4c0 = 0;");
                trace.statement("uStack_4b8 = 0;");
                trace.statement("local_4b0 = 0;");
                trace.statement("local_4a8 = 0;");
                trace.statement("local_498 = local_490;");
                trace.statement("FUN_180211510(&local_4c0,L\"mayrrX64\",8);");
                trace.statement("local_508 = 0;");
                trace.statement("local_4a0 = &local_500;");
                trace.statement("local_500 = 0;");
                trace.statement("uStack_4f8 = 0;");
                trace.statement("local_4f0 = 0;");
                trace.statement("local_4e8 = 0;");
                trace.statement("FUN_180211510(&local_500,L\"Documents\",9);");
                trace.statement("local_508 = 0;");
                trace.statement("local_490 = &local_4e0;");
                trace.statement("sVar3 = wcslen(local_248);");
                trace.statement("local_4e0 = 0;");
                trace.statement("uStack_4d8 = 0;");
                trace.statement("local_4d0 = 0;");
                trace.statement("local_4c8 = 0;");
                trace.statement("FUN_180211510(&local_4e0,local_248,sVar3);");
                trace.statement("local_508 = 0;");
                trace.statement("uVar4 = FUN_180066720(local_480,&local_4e0,&local_500);");
                trace.statement("FUN_180066720(param_1,uVar4,&local_4c0);");
                trace.statement("local_508 = 1;");
                trace.statement("FUN_18021e290(local_480);");
                trace.statement("FUN_18021e290(&local_4e0);");
                trace.statement("FUN_18021e290(&local_500);");
                }
                trace.statement("puVar5 = &local_4c0;");
            } else {
            trace.statement("local_4a0 = &local_4e0;");
            trace.statement("local_4e0 = 0;");
            trace.statement("uStack_4d8 = 0;");
            trace.statement("local_4d0 = 0;");
            trace.statement("local_4c8 = 0;");
            trace.statement("FUN_180211510(&local_4e0,L\"mayrrX64\",8);");
            trace.statement("local_508 = 0;");
            trace.statement("local_498 = &local_500;");
            trace.statement("sVar3 = wcslen(local_458);");
            trace.statement("local_500 = 0;");
            trace.statement("uStack_4f8 = 0;");
            trace.statement("local_4f0 = 0;");
            trace.statement("local_4e8 = 0;");
            trace.statement("FUN_180211510(&local_500,local_458,sVar3);");
            trace.statement("local_508 = 0;");
            trace.statement("FUN_180066720(param_1,&local_500,&local_4e0);");
            trace.statement("local_508 = 1;");
            trace.statement("FUN_18021e290(&local_500);");
            trace.statement("puVar5 = &local_4e0;");
            }
            trace.statement("FUN_18021e290(puVar5);");
            trace.statement("return param_1;");
        }
    return kFunction_0x1800ea7a0;
}

// 0x1800eab00 FUN_1800eab00
// source: re/dump/decompile/0x1800eab00_FUN_1800eab00.c
// size: 179 bytes; thunk: false
// body sha256: d9b25d6ab102c1a7a00b71b793c63c7381a0a26c9edd80f497242b4234ccdd81
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800eab00{
    "0x1800eab00",
    "FUN_1800eab00",
    R"F1800eab00S(undefined FUN_1800eab00())F1800eab00S",
    R"B1800eab00(// 0x1800eab00  FUN_1800eab00
// size=179 thunk=false
// signature: undefined FUN_1800eab00()
// status: ok


undefined8
FUN_1800eab00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined1 local_30 [40];
  
  local_38 = &local_60;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = param_1;
  FUN_180211510(&local_60,L"scripts",7,param_4,0);
  uVar2 = 0;
  uVar1 = FUN_1800ea7a0(local_30);
  FUN_180066720(param_1,uVar1,&local_60,param_4,uVar2);
  FUN_18021e290(local_30);
  FUN_18021e290(&local_60);
  return param_1;
}


)B1800eab00",
    "d9b25d6ab102c1a7a00b71b793c63c7381a0a26c9edd80f497242b4234ccdd81",
    R"F1800eab00C(FUN_180066720
FUN_1800ea7a0
FUN_180211510
FUN_18021e290)F1800eab00C",
    R"F1800eab00D()F1800eab00D",
    R"F1800eab00T("scripts")F1800eab00T",
    R"F1800eab00F(33: return param_1;)F1800eab00F",
    R"F1800eab00U(TODO: semantic reconstruction is incomplete; this accessor is a compile-checked trace, not the original behaviour.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: verify the calling convention and argument/return types for each resolved call thunk.)F1800eab00U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800eab00() noexcept {
    sf::reconstructed::TranslationTrace trace("0x1800eab00", "FUN_1800eab00");
    // Recovered local/parameter types; values and aggregate layouts remain TODO.
    [[maybe_unused]] std::uint64_t param_1{};
    [[maybe_unused]] std::uint64_t param_2{};
    [[maybe_unused]] std::uint64_t param_3{};
    [[maybe_unused]] std::uint64_t param_4{};
    [[maybe_unused]] std::uint64_t uVar1{};
    [[maybe_unused]] std::uint32_t uVar2{};
    [[maybe_unused]] std::uint64_t local_60{};
    [[maybe_unused]] std::uint64_t uStack_58{};
    [[maybe_unused]] std::uint64_t local_50{};
    [[maybe_unused]] std::uint64_t local_48{};
    [[maybe_unused]] std::uint64_t local_40{};
    [[maybe_unused]] std::uint64_t * local_38{};
    [[maybe_unused]] std::uint8_t local_30[40]{};
    // TODO: unresolved global, indirect call, calling-convention and PDB/layout facts:
    // TODO: verify call-target calling conventions and argument/return types without a vendor PDB.
    // TODO: no vendor PDB/live object layout; verify struct fields and stack offsets before execution.
    // TODO: call arguments not type-recovered for FUN_180211510: &local_60,L"scripts",7,param_4,0 [reason: ambiguous operand type]
    trace.call_arguments("FUN_1800ea7a0", local_30);
    trace.call_arguments("FUN_180066720", param_1, uVar1, &local_60, param_4, uVar2);
    trace.call_arguments("FUN_18021e290", local_30);
    trace.call_arguments("FUN_18021e290", &local_60);
    trace.call_target("FUN_180066720", reinterpret_cast<const void*>(&image::FUN_180066720));
    trace.call_target("FUN_1800ea7a0", reinterpret_cast<const void*>(&image::FUN_1800ea7a0));
    trace.call_target("FUN_180211510", reinterpret_cast<const void*>(&image::FUN_180211510));
    trace.call_target("FUN_18021e290", reinterpret_cast<const void*>(&image::FUN_18021e290));
    trace.string_literal("scripts");
    // body sha256: d9b25d6ab102c1a7a00b71b793c63c7381a0a26c9edd80f497242b4234ccdd81
    // Structured control-flow trace derived from the decompiled body:
        trace.statement("undefined8");
        {
            trace.statement("undefined8 uVar1;");
            trace.statement("undefined4 uVar2;");
            trace.statement("undefined8 local_60;");
            trace.statement("undefined8 uStack_58;");
            trace.statement("undefined8 local_50;");
            trace.statement("undefined8 local_48;");
            trace.statement("undefined8 local_40;");
            trace.statement("undefined8 *local_38;");
            trace.statement("undefined1 local_30 [40];");
            trace.statement("local_38 = &local_60;");
            trace.statement("local_60 = 0;");
            trace.statement("uStack_58 = 0;");
            trace.statement("local_50 = 0;");
            trace.statement("local_48 = 0;");
            trace.statement("local_40 = param_1;");
            trace.statement("FUN_180211510(&local_60,L\"scripts\",7,param_4,0);");
            trace.statement("uVar2 = 0;");
            trace.statement("uVar1 = FUN_1800ea7a0(local_30);");
            trace.statement("FUN_180066720(param_1,uVar1,&local_60,param_4,uVar2);");
            trace.statement("FUN_18021e290(local_30);");
            trace.statement("FUN_18021e290(&local_60);");
            trace.statement("return param_1;");
        }
    return kFunction_0x1800eab00;
}

}  // namespace sf::reconstructed
