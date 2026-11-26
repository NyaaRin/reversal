// 0x1801ec4e0  FUN_1801ec4e0
// size=641 thunk=false
// signature: undefined FUN_1801ec4e0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

LRESULT FUN_1801ec4e0(HWND param_1,UINT param_2,WPARAM param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  LRESULT LVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  char *pcVar9;
  undefined1 auStackY_98 [32];
  int local_68;
  int local_64;
  tagRECT local_60;
  ulonglong local_50;
  
  lVar2 = DAT_1803fa590;
  lVar3 = DAT_1803fa588;
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStackY_98;
  if ((param_2 == 0x100) && (param_3 == (longlong)DAT_1803da6a8)) {
    if ((DAT_1803fa46f == '\0') && (DAT_1803fa588 != 0)) {
      FUN_1801e5310();
    }
    LVar4 = 0;
  }
  else if ((DAT_1803fa545 == '\0') || (DAT_1803fa588 == 0)) {
    LVar4 = CallWindowProcW(DAT_1803fa4f0,param_1,param_2,param_3,param_4);
  }
  else {
    if (param_2 == 0x200) {
      local_60.left = 0;
      local_60.top = 0;
      local_60.right = 0;
      local_60.bottom = 0;
      GetClientRect(param_1,&local_60);
      iVar7 = local_60.right - local_60.left;
      iVar5 = local_60.bottom - local_60.top;
      local_68 = 0;
      local_64 = 0;
      if (DAT_1803fa668 != (longlong *)0x0) {
        (**(code **)(*DAT_1803fa668 + 0x28))(DAT_1803fa668,&local_68,&local_64);
      }
      if ((((0 < iVar7) && (0 < iVar5)) && (0 < local_68)) && (0 < local_64)) {
        param_4 = ((longlong)((short)(param_4 >> 0x10) * local_64) / (longlong)iVar5 & 0xffffU) <<
                  0x10 | (longlong)((short)param_4 * local_68) / (longlong)iVar7 & 0xffffU;
      }
    }
    uVar8 = (ulonglong)_tls_index;
    if ((lVar2 != 0) && (DAT_1803ff79c != '\0')) {
      lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar8 * 8);
      if (*(char *)(lVar1 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      *(longlong *)(lVar1 + 0xec0) = lVar2;
      FUN_1802d1e70(param_1,param_2,param_3,param_4);
    }
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar8 * 8);
    pcVar9 = (char *)(lVar2 + 0x10);
    if (*pcVar9 == '\0') {
      __dyn_tls_on_demand_init();
    }
    plVar6 = (longlong *)(lVar2 + 0xec0);
    *plVar6 = lVar3;
    lVar3 = FUN_1802d1e70(param_1,param_2,param_3,param_4);
    if (((param_2 != 0x20) || ((short)param_4 != 1)) || (lVar3 == 0)) {
      if (*pcVar9 == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar3 = *plVar6;
      if (((0xe < param_2 - 0x200) || ((*(char *)(lVar3 + 0xd0) == '\0' && (DAT_1803ff7a4 == '\0')))
          ) && ((9 < param_2 - 0x100 ||
                ((*(char *)(lVar3 + 0xd1) == '\0' && (DAT_1803ff7b0 == '\0')))))) {
        LVar4 = CallWindowProcW(DAT_1803fa4f0,param_1,param_2,param_3,param_4);
        return LVar4;
      }
    }
    LVar4 = 1;
  }
  return LVar4;
}


