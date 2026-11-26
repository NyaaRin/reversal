// 0x180058d90  FUN_180058d90
// size=375 thunk=false
// signature: undefined FUN_180058d90()
// status: ok


void FUN_180058d90(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  HMODULE pHVar3;
  ulonglong uVar4;
  INT_PTR IVar5;
  undefined8 *puVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  if (DAT_1803fcfa0 == (FARPROC)0x0) {
    pHVar3 = GetModuleHandleA("lua_shared.dll");
    DAT_1803fcfa0 = GetProcAddress(pHVar3,"lua_gettop");
  }
  uVar4 = (*DAT_1803fcfa0)(uVar1);
  if (DAT_180423ad0 == (FARPROC)0x0) {
    pHVar3 = GetModuleHandleA("lua_shared.dll");
    DAT_180423ad0 = GetProcAddress(pHVar3,"lua_pushvalue");
  }
  (*DAT_180423ad0)(uVar1,0xffffd8ed);
  if (DAT_1803fe490 == (FARPROC)0x0) {
    pHVar3 = GetModuleHandleA("lua_shared.dll");
    DAT_1803fe490 = GetProcAddress(pHVar3,"lua_type");
  }
  IVar5 = (*DAT_1803fe490)(uVar1,0xffffffff);
  if ((int)IVar5 == 5) {
    if (DAT_1803ff2a8 == (FARPROC)0x0) {
      pHVar3 = GetModuleHandleA("lua_shared.dll");
      DAT_1803ff2a8 = GetProcAddress(pHVar3,"lua_pushnil");
    }
    (*DAT_1803ff2a8)(uVar1);
    pcVar2 = DAT_1803fcbe0;
    if (DAT_1803fcbe0 != (code *)0x0) {
      puVar6 = (undefined8 *)FUN_180025620(param_2);
      if (0xf < (ulonglong)puVar6[3]) {
        puVar6 = (undefined8 *)*puVar6;
      }
      (*pcVar2)(uVar1,0xfffffffe,puVar6);
    }
  }
  if (DAT_180425540 == (FARPROC)0x0) {
    pHVar3 = GetModuleHandleA("lua_shared.dll");
    DAT_180425540 = GetProcAddress(pHVar3,"lua_settop");
  }
                    /* WARNING: Could not recover jumptable at 0x000180058f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_180425540)(uVar1,uVar4 & 0xffffffff);
  return;
}


