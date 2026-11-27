// 0x180023010  FUN_180023010
// size=313 thunk=false
// signature: undefined FUN_180023010()
// status: ok


longlong * FUN_180023010(longlong *param_1,longlong param_2)

{
  uint uVar1;
  HMODULE hModule;
  INT_PTR IVar2;
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  if (param_2 != 0) {
    if (DAT_1803fa806 == '\0') {
      hModule = GetModuleHandleA("lua_shared.dll");
      if (hModule == (HMODULE)0x0) {
        return param_1;
      }
      DAT_1803fa806 = '\x01';
      DAT_1803fae90 = GetProcAddress(hModule,"lua_sethook");
      DAT_1803fae98 = GetProcAddress(hModule,"lua_gethook");
      DAT_1803faea0 = GetProcAddress(hModule,"lua_gethookmask");
      DAT_1803faea8 = GetProcAddress(hModule,"lua_gethookcount");
    }
    if ((((DAT_1803fae90 != (FARPROC)0x0) && (DAT_1803fae98 != (FARPROC)0x0)) &&
        (DAT_1803faea0 != (FARPROC)0x0)) && (DAT_1803faea8 != (FARPROC)0x0)) {
      IVar2 = (*DAT_1803fae98)(*param_1);
      param_1[1] = IVar2;
      IVar2 = (*DAT_1803faea0)(*param_1);
      *(int *)(param_1 + 2) = (int)IVar2;
      IVar2 = (*DAT_1803faea8)(*param_1);
      *(int *)((longlong)param_1 + 0x14) = (int)IVar2;
      uVar1 = *(uint *)(param_1 + 2);
      if (((uVar1 != 0) || (param_1[1] != 0)) && (((uVar1 & 8) == 0 && ((uVar1 & 7) != 0)))) {
        *(undefined1 *)(param_1 + 3) = 1;
        (*DAT_1803fae90)(*param_1,0,0,0);
      }
    }
  }
  return param_1;
}


