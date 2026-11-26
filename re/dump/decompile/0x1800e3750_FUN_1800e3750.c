// 0x1800e3750  FUN_1800e3750
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


