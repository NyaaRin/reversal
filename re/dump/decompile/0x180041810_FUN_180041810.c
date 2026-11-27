// 0x180041810  FUN_180041810
// size=374 thunk=false
// signature: undefined FUN_180041810()
// status: ok


undefined4 FUN_180041810(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  HMODULE pHVar4;
  ulonglong uVar5;
  
  if (((param_1 != (longlong *)0x0) && (lVar1 = param_1[1], lVar1 != 0)) && (DAT_1803ff8a8 != 0)) {
    if (DAT_1803fcfa0 == (FARPROC)0x0) {
      pHVar4 = GetModuleHandleA("lua_shared.dll");
      DAT_1803fcfa0 = GetProcAddress(pHVar4,"lua_gettop");
    }
    uVar5 = (*DAT_1803fcfa0)(lVar1);
    lVar2 = DAT_1803ff8a8;
    if (DAT_180423ad0 == (FARPROC)0x0) {
      pHVar4 = GetModuleHandleA("lua_shared.dll");
      DAT_180423ad0 = GetProcAddress(pHVar4,"lua_pushvalue");
    }
    (*DAT_180423ad0)(lVar2,(ulonglong)param_2);
    lVar2 = DAT_1803ff8a8;
    if (DAT_1803feb38 == (FARPROC)0x0) {
      pHVar4 = GetModuleHandleA("lua_shared.dll");
      DAT_1803feb38 = GetProcAddress(pHVar4,"lua_xmove");
    }
    (*DAT_1803feb38)(lVar2,lVar1,1);
    uVar3 = (**(code **)(*param_1 + 0x140))(param_1,0xffffffff);
    if (DAT_180425540 == (FARPROC)0x0) {
      pHVar4 = GetModuleHandleA("lua_shared.dll");
      DAT_180425540 = GetProcAddress(pHVar4,"lua_settop");
    }
    (*DAT_180425540)(lVar1,uVar5 & 0xffffffff);
    return uVar3;
  }
  return 0;
}


