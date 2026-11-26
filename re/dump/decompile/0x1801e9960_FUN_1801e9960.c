// 0x1801e9960  FUN_1801e9960
// size=2790 thunk=false
// signature: undefined FUN_1801e9960()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801e9960(longlong ****param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong ****pppplVar4;
  int iVar5;
  longlong *plVar6;
  char *pcVar7;
  longlong *****ppppplVar8;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  longlong **local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong ***local_60;
  longlong *local_58;
  int local_50;
  int local_4c;
  longlong ****local_48 [2];
  longlong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_d8;
  local_60 = (longlong ***)param_1;
  local_60 = (longlong ***)FUN_1801e97c0();
  if ((longlong ****)local_60 == (longlong ****)0x0) {
    DAT_18042541c = DAT_18042541c + 1;
    if (10 < DAT_18042541c) {
      return;
    }
    FUN_180014410("[VIS-INIT] no usable D3D render device from raw=%p\n",DAT_1803fa4e8);
    return;
  }
  DAT_1803fa4e8 = (longlong ****)local_60;
  if (DAT_1803fa668 == (longlong *)0x0) {
    if ((DAT_18042f17c & 1) == 0) {
      DAT_18042f17c = DAT_18042f17c | 1;
      _DAT_180427788 = 0;
      _DAT_180427790 = 0;
      _DAT_180427788 = FUN_1802d8350(0x48);
      *(longlong *)_DAT_180427788 = _DAT_180427788;
      *(longlong *)(_DAT_180427788 + 8) = _DAT_180427788;
      *(longlong *)(_DAT_180427788 + 0x10) = _DAT_180427788;
      *(undefined2 *)(_DAT_180427788 + 0x18) = 0x101;
      atexit(FUN_18030b490);
    }
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    local_70 = 0;
    FUN_18001d080(&local_88,"no device or engine interface",0x1d);
    plVar6 = (longlong *)FUN_1802184d0(&DAT_180427788,local_48,&local_88);
    lVar2 = *plVar6;
    FUN_18020e450(&local_88);
    piVar1 = (int *)(lVar2 + 0x40);
    *piVar1 = *piVar1 + 1;
    iVar5 = *(int *)(lVar2 + 0x40);
    if ((3 < iVar5) && (iVar5 != (iVar5 / 600) * 600)) {
      return;
    }
    pcVar7 = "no device or engine interface";
LAB_1801ea416:
    FUN_180014410("[VIS-INIT] giving up: %s (#%d) -- imgui contexts stay null\n",pcVar7);
    return;
  }
  DAT_1803fa618 = FindWindowW(L"Valve001",(LPCWSTR)0x0);
  local_4c = 0;
  local_50 = 0;
  (**(code **)(*DAT_1803fa668 + 0x28))(DAT_1803fa668,&local_4c,&local_50);
  if ((local_4c < 1) || (local_50 < 1)) {
    if ((DAT_18042f17c & 1) == 0) {
      DAT_18042f17c = DAT_18042f17c | 1;
      _DAT_180427788 = 0;
      _DAT_180427790 = 0;
      _DAT_180427788 = FUN_1802d8350(0x48);
      *(longlong *)_DAT_180427788 = _DAT_180427788;
      *(longlong *)(_DAT_180427788 + 8) = _DAT_180427788;
      *(longlong *)(_DAT_180427788 + 0x10) = _DAT_180427788;
      *(undefined2 *)(_DAT_180427788 + 0x18) = 0x101;
      atexit(FUN_18030b490);
    }
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    local_70 = 0;
    FUN_18001d080(&local_88,"engine reports zero screen size",0x1f);
    plVar6 = (longlong *)FUN_1802184d0(&DAT_180427788,local_48,&local_88);
    lVar2 = *plVar6;
    FUN_18020e450(&local_88);
    piVar1 = (int *)(lVar2 + 0x40);
    *piVar1 = *piVar1 + 1;
    iVar5 = *(int *)(lVar2 + 0x40);
    if ((3 < iVar5) && (iVar5 != (iVar5 / 600) * 600)) {
      return;
    }
    pcVar7 = "engine reports zero screen size";
    goto LAB_1801ea416;
  }
  if (DAT_1803fa618 == (HWND)0x0) {
    if ((DAT_18042f17c & 1) == 0) {
      DAT_18042f17c = DAT_18042f17c | 1;
      _DAT_180427788 = 0;
      _DAT_180427790 = 0;
      _DAT_180427788 = FUN_1802d8350(0x48);
      *(longlong *)_DAT_180427788 = _DAT_180427788;
      *(longlong *)(_DAT_180427788 + 8) = _DAT_180427788;
      *(longlong *)(_DAT_180427788 + 0x10) = _DAT_180427788;
      *(undefined2 *)(_DAT_180427788 + 0x18) = 0x101;
      atexit(FUN_18030b490);
    }
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    local_70 = 0;
    FUN_18001d080(&local_88,"Valve001 window not found",0x19);
    plVar6 = (longlong *)FUN_1802184d0(&DAT_180427788,local_48,&local_88);
    lVar2 = *plVar6;
    FUN_18020e450(&local_88);
    piVar1 = (int *)(lVar2 + 0x40);
    *piVar1 = *piVar1 + 1;
    iVar5 = *(int *)(lVar2 + 0x40);
    if ((3 < iVar5) && (iVar5 != (iVar5 / 600) * 600)) {
      return;
    }
    pcVar7 = "Valve001 window not found";
    goto LAB_1801ea416;
  }
  DAT_1803fa580 = (longlong *)FUN_1801e9890(local_60);
  if (DAT_1803fa580 == (longlong *)0x0) {
    if ((DAT_18042f17c & 1) == 0) {
      DAT_18042f17c = DAT_18042f17c | 1;
      _DAT_180427788 = 0;
      _DAT_180427790 = 0;
      _DAT_180427788 = FUN_1802d8350(0x48);
      *(longlong *)_DAT_180427788 = _DAT_180427788;
      *(longlong *)(_DAT_180427788 + 8) = _DAT_180427788;
      *(longlong *)(_DAT_180427788 + 0x10) = _DAT_180427788;
      *(undefined2 *)(_DAT_180427788 + 0x18) = 0x101;
      atexit(FUN_18030b490);
    }
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    local_70 = 0;
    FUN_18001d080(&local_88,"back buffer surface unavailable",0x1f);
    plVar6 = (longlong *)FUN_1802184d0(&DAT_180427788,local_48,&local_88);
    lVar2 = *plVar6;
    FUN_18020e450(&local_88);
    piVar1 = (int *)(lVar2 + 0x40);
    *piVar1 = *piVar1 + 1;
    iVar5 = *(int *)(lVar2 + 0x40);
    if ((3 < iVar5) && (iVar5 != (iVar5 / 600) * 600)) {
      return;
    }
    pcVar7 = "back buffer surface unavailable";
    goto LAB_1801ea416;
  }
  local_98 = 0;
  local_a0 = &DAT_1803fa4c8;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  iVar5 = (*(code *)(*local_60)[0x1c])(local_60,local_4c,local_50,0x15);
  if ((iVar5 < 0) || (DAT_1803fa4c8 == (longlong *)0x0)) {
    (**(code **)(*DAT_1803fa580 + 0x10))();
    DAT_1803fa580 = (longlong *)0x0;
    if ((DAT_18042f17c & 1) == 0) {
      DAT_18042f17c = DAT_18042f17c | 1;
      _DAT_180427788 = 0;
      _DAT_180427790 = 0;
      _DAT_180427788 = FUN_1802d8350(0x48);
      *(longlong *)_DAT_180427788 = _DAT_180427788;
      *(longlong *)(_DAT_180427788 + 8) = _DAT_180427788;
      *(longlong *)(_DAT_180427788 + 0x10) = _DAT_180427788;
      *(undefined2 *)(_DAT_180427788 + 0x18) = 0x101;
      atexit(FUN_18030b490);
    }
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    local_70 = 0;
    FUN_18001d080(&local_88,"CreateRenderTarget(backup) failed",0x21);
    plVar6 = (longlong *)FUN_1802184d0(&DAT_180427788,local_48,&local_88);
    lVar2 = *plVar6;
    FUN_18020e450(&local_88);
    piVar1 = (int *)(lVar2 + 0x40);
    *piVar1 = *piVar1 + 1;
    iVar5 = *(int *)(lVar2 + 0x40);
    if ((3 < iVar5) && (iVar5 != (iVar5 / 600) * 600)) {
      return;
    }
    pcVar7 = "CreateRenderTarget(backup) failed";
    goto LAB_1801ea416;
  }
  local_98 = 0;
  local_a0 = &DAT_1803fa500;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  iVar5 = (*(code *)(*local_60)[0x1c])(local_60,local_4c,local_50,0x15);
  if ((iVar5 < 0) || (DAT_1803fa500 == (longlong *)0x0)) {
    (**(code **)(*DAT_1803fa4c8 + 0x10))();
    DAT_1803fa4c8 = (longlong *)0x0;
    (**(code **)(*DAT_1803fa580 + 0x10))();
    DAT_1803fa580 = (longlong *)0x0;
    if ((DAT_18042f17c & 1) == 0) {
      DAT_18042f17c = DAT_18042f17c | 1;
      _DAT_180427788 = 0;
      _DAT_180427790 = 0;
      _DAT_180427788 = FUN_1802d8350(0x48);
      *(longlong *)_DAT_180427788 = _DAT_180427788;
      *(longlong *)(_DAT_180427788 + 8) = _DAT_180427788;
      *(longlong *)(_DAT_180427788 + 0x10) = _DAT_180427788;
      *(undefined2 *)(_DAT_180427788 + 0x18) = 0x101;
      atexit(FUN_18030b490);
    }
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    local_70 = 0;
    FUN_18001d080(&local_88,"CreateRenderTarget(backupAlt) failed",0x24);
    plVar6 = (longlong *)FUN_1802184d0(&DAT_180427788,local_48,&local_88);
    lVar2 = *plVar6;
    FUN_18020e450(&local_88);
    piVar1 = (int *)(lVar2 + 0x40);
    *piVar1 = *piVar1 + 1;
    iVar5 = *(int *)(lVar2 + 0x40);
    if ((3 < iVar5) && (iVar5 != (iVar5 / 600) * 600)) {
      return;
    }
    pcVar7 = "CreateRenderTarget(backupAlt) failed";
    goto LAB_1801ea416;
  }
  local_58 = (longlong *)0x0;
  local_98 = 0;
  local_a0 = &local_58;
  local_a8 = 0;
  local_b0 = 0x15;
  local_b8 = 1;
  iVar5 = (*(code *)(*local_60)[0x17])(local_60,local_4c,local_50,1);
  if ((iVar5 < 0) || (local_58 == (longlong *)0x0)) {
LAB_1801ea03a:
    (**(code **)(*DAT_1803fa500 + 0x10))();
    DAT_1803fa500 = (longlong *)0x0;
    (**(code **)(*DAT_1803fa4c8 + 0x10))();
    DAT_1803fa4c8 = (longlong *)0x0;
    (**(code **)(*DAT_1803fa580 + 0x10))();
    DAT_1803fa580 = (longlong *)0x0;
    return;
  }
  iVar5 = (**(code **)(*local_58 + 0x90))(local_58,0,&DAT_1803fa578);
  if ((iVar5 < 0) || (DAT_1803fa578 == 0)) {
    (**(code **)(*local_58 + 0x10))();
    goto LAB_1801ea03a;
  }
  DAT_1803fa510 = local_58;
  local_98 = 0;
  local_a0 = (longlong **)&DAT_1803fa4c0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  iVar5 = (*(code *)(*local_60)[0x1c])(local_60,local_4c,local_50,0x15);
  if ((iVar5 < 0) || (DAT_1803fa4c0 == 0)) {
    DAT_1803fa4c0 = 0;
  }
  if (DAT_1803fa4f0 == 0) {
    DAT_1803fa4f0 = SetWindowLongPtrW(DAT_1803fa618,-4,0x1801ec4e0);
  }
  if ((DAT_1805c7c20 & 1) == 0) {
    DAT_1805c7c20 = DAT_1805c7c20 | 1;
    FUN_1801ea450();
    atexit((_func_5014 *)&LAB_18030b480);
  }
  lVar2 = DAT_1803fa4d0;
  local_48[0] = &local_60;
  if (DAT_1803fa588 == 0) {
    DAT_1803fa4d0 = FUN_18026ce70();
    FUN_1801ea560(local_48,DAT_1803fa4d0);
    DAT_1803fa590 = FUN_18026ce70();
    FUN_1801ea560(local_48,DAT_1803fa590);
    DAT_1803fa588 = FUN_18026ce70();
    FUN_1801ea560(local_48,DAT_1803fa588);
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    *(undefined1 *)(*(longlong *)(lVar2 + 0xec0) + 0x7f) = 1;
    FUN_180199890();
    FUN_180170f70();
    FUN_1801a9730();
    FUN_1801a8dc0(local_48);
    if ((DAT_1803db385 != '\0') && (local_38 != 0)) {
      FUN_1801b2830(local_48);
      FUN_1801a9690(local_48);
      ppppplVar8 = local_48;
      if (0xf < local_30) {
        ppppplVar8 = (longlong *****)local_48[0];
      }
      strncpy_s(s_default_1803dc920,0x40,(char *)ppppplVar8,0xffffffffffffffff);
    }
    DAT_1803fa46c = 0;
    DAT_1803fa52d = 0;
    FUN_1801e5310();
    FUN_18020e450(local_48);
  }
  else {
    if (DAT_1803fa570 == (longlong ****)local_60) goto LAB_1801e9fd8;
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    pcVar7 = (char *)(lVar3 + 0x10);
    if (*pcVar7 == '\0') {
      __dyn_tls_on_demand_init();
    }
    plVar6 = (longlong *)(lVar3 + 0xec0);
    pppplVar4 = (longlong ****)*plVar6;
    local_48[0] = pppplVar4;
    if (*pcVar7 == '\0') {
      __dyn_tls_on_demand_init();
    }
    *plVar6 = lVar2;
    FUN_1802d0950();
    FUN_1802d0770(local_60);
    if (*pcVar7 == '\0') {
      __dyn_tls_on_demand_init();
    }
    *plVar6 = (longlong)pppplVar4;
    lVar2 = DAT_1803fa590;
    if (*pcVar7 == '\0') {
      __dyn_tls_on_demand_init();
    }
    pppplVar4 = (longlong ****)*plVar6;
    local_48[0] = pppplVar4;
    if (*pcVar7 == '\0') {
      __dyn_tls_on_demand_init();
    }
    *plVar6 = lVar2;
    FUN_1802d0950();
    FUN_1802d0770(local_60);
    if (*pcVar7 == '\0') {
      __dyn_tls_on_demand_init();
    }
    *plVar6 = (longlong)pppplVar4;
    lVar2 = DAT_1803fa588;
    if (*pcVar7 == '\0') {
      __dyn_tls_on_demand_init();
    }
    ppppplVar8 = (longlong *****)*plVar6;
    local_48[0] = (longlong ****)ppppplVar8;
    if (*pcVar7 == '\0') {
      __dyn_tls_on_demand_init();
    }
    *plVar6 = lVar2;
    FUN_1802d0950();
    FUN_1802d0770(local_60);
    if (*pcVar7 == '\0') {
      __dyn_tls_on_demand_init();
    }
    *plVar6 = (longlong)ppppplVar8;
    FUN_180014410("[VIS] imgui dx9 backend rebound to new device %p\n",local_60);
  }
  DAT_1803fa570 = (longlong ****)local_60;
LAB_1801e9fd8:
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_1803ff290);
  DAT_1803e7420 = DAT_1803e7420 + 1;
  DAT_1803ff284 = 0;
  DAT_1803fa455 = 0;
  DAT_1803fa453 = 0;
  DAT_1803da6a0 = 0xffffffff;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1803ff290);
  DAT_1803fa452 = 1;
  FUN_180014410("Done initializing visuals.\n");
  return;
}


