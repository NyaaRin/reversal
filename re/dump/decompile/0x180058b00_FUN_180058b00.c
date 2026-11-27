// 0x180058b00  FUN_180058b00
// size=656 thunk=false
// signature: undefined FUN_180058b00()
// status: ok


void FUN_180058b00(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  HMODULE pHVar5;
  ulonglong uVar6;
  INT_PTR IVar7;
  
  if ((param_1 != (longlong *)0x0) && (lVar1 = param_1[1], lVar1 != 0)) {
    if (DAT_1803fcfa0 == (FARPROC)0x0) {
      pHVar5 = GetModuleHandleA("lua_shared.dll");
      DAT_1803fcfa0 = GetProcAddress(pHVar5,"lua_gettop");
    }
    uVar6 = (*DAT_1803fcfa0)(lVar1);
    cVar3 = FUN_1800260c0(lVar1,0x2736efefe1fb290);
    pcVar2 = DAT_1803fcbe0;
    if (cVar3 == '\0') {
      FUN_180014410("[LUAGUARD] api table unavailable -- persist not ready\n");
    }
    else if (DAT_1803fcbe0 != (code *)0x0) {
      (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0x100))(param_1,FUN_180058300);
      (*pcVar2)(lVar1,0xfffffffe,&DAT_1803445e8);
      (**(code **)(*param_1 + 0x30))(param_1);
      if ((DAT_1803faf38 == (code *)0x0) || (param_1[1] == 0)) {
        FUN_180023e60(param_1,0);
      }
      else {
        (*DAT_1803faf38)(param_1[1],0xffffd8ee);
      }
      FUN_18002db10(lVar1,0xffffffff,&DAT_1803445e0);
      if ((DAT_1803faff8 == (code *)0x0) || (param_1[1] == 0)) {
        cVar3 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,5);
      }
      else {
        iVar4 = (*DAT_1803faff8)(param_1[1],0xffffffff);
        cVar3 = iVar4 == 5;
      }
      if (cVar3 == '\0') {
        if (DAT_1803fcfa0 == (FARPROC)0x0) {
          pHVar5 = GetModuleHandleA("lua_shared.dll");
          DAT_1803fcfa0 = GetProcAddress(pHVar5,"lua_gettop");
        }
        IVar7 = (*DAT_1803fcfa0)(lVar1);
        if (DAT_180425540 == (FARPROC)0x0) {
          pHVar5 = GetModuleHandleA("lua_shared.dll");
          DAT_180425540 = GetProcAddress(pHVar5,"lua_settop");
        }
        (*DAT_180425540)(lVar1,(ulonglong)((int)IVar7 - 3));
      }
      else {
        if (DAT_1803faee0 != (code *)0x0) {
          (*DAT_1803faee0)(lVar1,0xfffffffe);
        }
        (*pcVar2)(lVar1,0xfffffffe,"__index");
        (**(code **)(*param_1 + 0x40))(param_1,0xfffffffe);
      }
      (*pcVar2)(lVar1,0xfffffffe,&DAT_1803445e0);
      if (DAT_180425540 == (FARPROC)0x0) {
        pHVar5 = GetModuleHandleA("lua_shared.dll");
        DAT_180425540 = GetProcAddress(pHVar5,"lua_settop");
      }
      (*DAT_180425540)(lVar1,uVar6 & 0xffffffff);
      FUN_180014410("[LUAGUARD] hook.Add wrapper registered\n");
      return;
    }
    if (DAT_180425540 == (FARPROC)0x0) {
      pHVar5 = GetModuleHandleA("lua_shared.dll");
      DAT_180425540 = GetProcAddress(pHVar5,"lua_settop");
    }
    (*DAT_180425540)(lVar1,uVar6 & 0xffffffff);
  }
  return;
}


