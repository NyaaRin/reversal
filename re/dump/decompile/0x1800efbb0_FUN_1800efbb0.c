// 0x1800efbb0  FUN_1800efbb0
// size=287 thunk=false
// signature: undefined FUN_1800efbb0()
// status: ok


INT_PTR * FUN_1800efbb0(INT_PTR *param_1,undefined8 param_2)

{
  HMODULE hModule;
  INT_PTR IVar1;
  bool bVar2;
  
  bVar2 = DAT_1803fed78 == (FARPROC)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  if (bVar2) {
    hModule = GetModuleHandleA("lua_shared.dll");
    if (hModule == (HMODULE)0x0) {
      return param_1;
    }
    DAT_1803fed78 = GetProcAddress(hModule,"lua_sethook");
    DAT_1803fd070 = GetProcAddress(hModule,"lua_gethook");
    DAT_180426128 = GetProcAddress(hModule,"lua_gethookmask");
    DAT_1804007c8 = GetProcAddress(hModule,"lua_gethookcount");
    if (DAT_1803fed78 == (FARPROC)0x0) {
      return param_1;
    }
  }
  if (((DAT_1803fd070 != (FARPROC)0x0) && (DAT_180426128 != (FARPROC)0x0)) &&
     (DAT_1804007c8 != (FARPROC)0x0)) {
    IVar1 = (*DAT_1803fd070)(param_2);
    *param_1 = IVar1;
    IVar1 = (*DAT_180426128)(param_2);
    *(int *)(param_1 + 1) = (int)IVar1;
    IVar1 = (*DAT_1804007c8)(param_2);
    *(int *)((longlong)param_1 + 0xc) = (int)IVar1;
    *(undefined1 *)(param_1 + 2) = 1;
    (*DAT_1803fed78)(param_2,0,0,0);
  }
  return param_1;
}


