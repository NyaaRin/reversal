// 0x180069950  FUN_180069950
// size=708 thunk=false
// signature: undefined FUN_180069950()
// status: ok


void FUN_180069950(longlong *param_1)

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
      FUN_180014410("[LUATIMER] api table unavailable -- persist not ready\n");
    }
    else if (DAT_1803fcbe0 != (code *)0x0) {
      (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_180069e40);
      (*pcVar2)(lVar1,0xfffffffe,"Simple");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_18006a0d0);
      (*pcVar2)(lVar1,0xfffffffe,"Create");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18006a0e0);
      (*pcVar2)(lVar1,0xfffffffe,"Exists");
      (**(code **)(*param_1 + 0x100))(param_1,FUN_18006a150);
      (*pcVar2)(lVar1,0xfffffffe,"Remove");
      (*pcVar2)(lVar1,0xfffffffe,"timer");
      (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_18006a3f0);
      (*pcVar2)(lVar1,0xfffffffe,&DAT_180345d78);
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_18006a690);
      (*pcVar2)(lVar1,0xfffffffe,"Write");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_18006a830);
      (*pcVar2)(lVar1,0xfffffffe,"Exists");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_18006a9f0);
      (*pcVar2)(lVar1,0xfffffffe,"Delete");
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_18006ae00);
      (*pcVar2)(lVar1,0xfffffffe,&DAT_180345d90);
      (**(code **)(*param_1 + 0x100))(param_1,&LAB_18006afb0);
      (*pcVar2)(lVar1,0xfffffffe,"CreateDirectory");
      (*pcVar2)(lVar1,0xfffffffe,&DAT_180345374);
      if (DAT_180425540 == (FARPROC)0x0) {
        pHVar4 = GetModuleHandleA("lua_shared.dll");
        DAT_180425540 = GetProcAddress(pHVar4,"lua_settop");
      }
      (*DAT_180425540)(lVar1,uVar5 & 0xffffffff);
      FUN_180014410("[LUATIMER] timer and File tables registered\n");
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


