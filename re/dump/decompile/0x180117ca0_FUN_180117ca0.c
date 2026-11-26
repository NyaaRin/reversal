// 0x180117ca0  FUN_180117ca0
// size=501 thunk=false
// signature: undefined FUN_180117ca0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180117ca0(longlong param_1)

{
  byte bVar1;
  int iVar2;
  HMODULE pHVar3;
  ulonglong uVar4;
  INT_PTR IVar5;
  int iVar6;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [192];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_f8;
  if ((param_1 == 0) || (DAT_1803fa5b0 == (code *)0x0)) {
    local_18 = local_18 & 0xffffffffffffff00;
  }
  else {
    if (DAT_1803fcfa0 == (FARPROC)0x0) {
      pHVar3 = GetModuleHandleA("lua_shared.dll");
      DAT_1803fcfa0 = GetProcAddress(pHVar3,"lua_gettop");
    }
    uVar4 = (*DAT_1803fcfa0)(param_1);
    bVar1 = 0;
    iVar6 = 0;
    do {
      if (bVar1 != 0) break;
      memset(local_d8,0,0xc0);
      iVar2 = (*DAT_1803fa5b0)(param_1,iVar6,local_d8);
      if (iVar2 == 0) break;
      if (DAT_1803fecd0 == (FARPROC)0x0) {
        pHVar3 = GetModuleHandleA("lua_shared.dll");
        DAT_1803fecd0 = GetProcAddress(pHVar3,"lua_getinfo");
      }
      IVar5 = (*DAT_1803fecd0)(param_1,&DAT_18033f598,local_d8);
      if ((int)IVar5 != 0) {
        if (DAT_1803ff2d0 == (FARPROC)0x0) {
          pHVar3 = GetModuleHandleA("lua_shared.dll");
          DAT_1803ff2d0 = GetProcAddress(pHVar3,"lua_topointer");
        }
        IVar5 = (*DAT_1803ff2d0)(param_1,0xffffffff);
        bVar1 = FUN_1801177f0(param_1,IVar5);
      }
      if (DAT_180425540 == (FARPROC)0x0) {
        pHVar3 = GetModuleHandleA("lua_shared.dll");
        DAT_180425540 = GetProcAddress(pHVar3,"lua_settop");
      }
      (*DAT_180425540)(param_1);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0xd);
    if (DAT_180425540 == (FARPROC)0x0) {
      pHVar3 = GetModuleHandleA("lua_shared.dll");
      DAT_180425540 = GetProcAddress(pHVar3,"lua_settop");
    }
    (*DAT_180425540)(param_1,uVar4 & 0xffffffff);
    local_18 = (ulonglong)bVar1;
  }
  return local_18;
}


