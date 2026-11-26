// 0x1800525b0  FUN_1800525b0
// size=1082 thunk=false
// signature: undefined FUN_1800525b0()
// status: ok


void FUN_1800525b0(longlong *param_1)

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
      FUN_180014410("[LUAMOVESIM] api table unavailable -- persist not ready\n");
    }
    else if (DAT_1803fcbe0 != (code *)0x0) {
      (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800529f0);
      (*pcVar2)(lVar1,0xfffffffe,"Simulated");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180052a30);
      (*pcVar2)(lVar1,0xfffffffe,"TickBase");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180052a80);
      (*pcVar2)(lVar1,0xfffffffe,"CurTime");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180052af0);
      (*pcVar2)(lVar1,0xfffffffe,"Interval");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180052b50);
      (*pcVar2)(lVar1,0xfffffffe,"Available");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180052bd0);
      (*pcVar2)(lVar1,0xfffffffe,"Active");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180052c10);
      (*pcVar2)(lVar1,0xfffffffe,"Ticks");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180052c60);
      (*pcVar2)(lVar1,0xfffffffe,"StartPrediction");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180052cc0);
      (*pcVar2)(lVar1,0xfffffffe,"EndPrediction");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_180052f50);
      (*pcVar2)(lVar1,0xfffffffe,"RunTick");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180052f60);
      (*pcVar2)(lVar1,0xfffffffe,"GetPos");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180053010);
      (*pcVar2)(lVar1,0xfffffffe,"SetPos");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180053110);
      (*pcVar2)(lVar1,0xfffffffe,"GetVelocity");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800531c0);
      (*pcVar2)(lVar1,0xfffffffe,"SetVelocity");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_1800532c0);
      (*pcVar2)(lVar1,0xfffffffe,"GetSpeed");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180053370);
      (*pcVar2)(lVar1,0xfffffffe,"GetAngles");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_1800535f0);
      (*pcVar2)(lVar1,0xfffffffe,"OnGround");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180053600);
      (*pcVar2)(lVar1,0xfffffffe,"GetStepHeight");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180053660);
      (*pcVar2)(lVar1,0xfffffffe,"GetMaxSpeed");
      (*DAT_1803fcba8)(lVar1,0xffffffff,"StartPrediction");
      (*pcVar2)(lVar1,0xfffffffe,"Start");
      (*DAT_1803fcba8)(lVar1,0xffffffff,"EndPrediction");
      (*pcVar2)(lVar1,0xfffffffe,&DAT_1803430fc);
      (*pcVar2)(lVar1,0xfffffffe,"movement_sim");
      if (DAT_180425540 == (FARPROC)0x0) {
        pHVar4 = GetModuleHandleA("lua_shared.dll");
        DAT_180425540 = GetProcAddress(pHVar4,"lua_settop");
      }
      (*DAT_180425540)(lVar1,uVar5 & 0xffffffff);
      FUN_180014410("[LUAMOVESIM] movement_sim table registered\n");
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


