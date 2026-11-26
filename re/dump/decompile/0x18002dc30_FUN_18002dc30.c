// 0x18002dc30  FUN_18002dc30
// size=309 thunk=false
// signature: undefined FUN_18002dc30()
// status: ok


longlong * FUN_18002dc30(longlong *param_1,longlong param_2)

{
  uint uVar1;
  HMODULE hModule;
  INT_PTR IVar2;
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  if (param_2 != 0) {
    if ((DAT_180425fbc == '\0') &&
       (hModule = GetModuleHandleA("lua_shared.dll"), hModule != (HMODULE)0x0)) {
      DAT_180425fbc = '\x01';
      DAT_1803faf78 = GetProcAddress(hModule,"lua_sethook");
      DAT_1803fafa8 = GetProcAddress(hModule,"lua_gethook");
      DAT_1803fb080 = GetProcAddress(hModule,"lua_gethookmask");
      DAT_1803faf20 = GetProcAddress(hModule,"lua_gethookcount");
    }
    if ((((DAT_1803faf78 != (FARPROC)0x0) && (DAT_1803fafa8 != (FARPROC)0x0)) &&
        (DAT_1803fb080 != (FARPROC)0x0)) && (DAT_1803faf20 != (FARPROC)0x0)) {
      IVar2 = (*DAT_1803fafa8)(*param_1);
      param_1[1] = IVar2;
      IVar2 = (*DAT_1803fb080)(*param_1);
      *(int *)(param_1 + 2) = (int)IVar2;
      IVar2 = (*DAT_1803faf20)(*param_1);
      *(int *)((longlong)param_1 + 0x14) = (int)IVar2;
      uVar1 = *(uint *)(param_1 + 2);
      if (((uVar1 != 0) || (param_1[1] != 0)) && (((uVar1 & 8) == 0 && ((uVar1 & 7) != 0)))) {
        *(undefined1 *)(param_1 + 3) = 1;
        (*DAT_1803faf78)(*param_1,0,0,0);
      }
    }
  }
  return param_1;
}


