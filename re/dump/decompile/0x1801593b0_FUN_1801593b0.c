// 0x1801593b0  FUN_1801593b0
// size=731 thunk=false
// signature: undefined FUN_1801593b0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801593b0(longlong param_1,char param_2)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  char *pcVar8;
  undefined8 uVar9;
  int *piVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar4 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar6 = (*pcVar1)(DAT_1803fa360,uVar4);
  if (((lVar6 == 0) || (DAT_1803fa668 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar2 == '\0')) {
    bVar12 = false;
  }
  else {
    local_68 = 0x93fd561a96ab0c67;
    local_60 = 0xe4f59bc9468cfac2;
    plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_88,&local_68);
    plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_78,&local_60);
    pcVar8 = (char *)FUN_1801fcfc0(*plVar7 + 0x28);
    local_60 = 0x93fd561a96ab0c67;
    bVar12 = *pcVar8 != '\0';
    local_68 = 0x38e8f2037574e19f;
    plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_78,&local_60);
    plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_88,&local_68);
    pcVar8 = (char *)FUN_1801fcfc0(*plVar7 + 0x28);
    if (*pcVar8 != '\0') {
      cVar2 = '\x01';
      goto LAB_1801594d9;
    }
  }
  cVar2 = '\0';
LAB_1801594d9:
  if (lVar6 != *(longlong *)(param_1 + 8)) {
    *(longlong *)(param_1 + 8) = lVar6;
    *(undefined2 *)(param_1 + 0x18) = 0;
    *(undefined1 *)(param_1 + 0x1a) = 0;
  }
  if ((*(char *)(param_1 + 0x18) != '\0') && (lVar6 != 0)) {
    if ((*(char *)(param_1 + 0x19) != '\0') && (bVar12 == false)) {
      uVar4 = *(undefined4 *)(param_1 + 0x10);
      uVar9 = FUN_180159030(lVar6);
      FUN_180159270(uVar9,uVar4);
    }
    if ((*(char *)(param_1 + 0x1a) != '\0') && (cVar2 == '\0')) {
      uVar4 = *(undefined4 *)(param_1 + 0x14);
      uVar9 = FUN_180159120(lVar6);
      FUN_180159270(uVar9,uVar4);
    }
  }
  *(bool *)(param_1 + 0x19) = bVar12;
  *(char *)(param_1 + 0x1a) = cVar2;
  if ((bVar12 == false) && (cVar2 == '\0')) {
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  else {
    if (param_2 != '\0') {
      FUN_180159290(lVar6);
    }
    if (*(char *)(param_1 + 0x18) == '\0') {
      uVar3 = FUN_180159210(lVar6,param_1 + 0x10,param_1 + 0x14);
      *(undefined1 *)(param_1 + 0x18) = uVar3;
    }
    if (bVar12 != false) {
      local_60 = 0x93fd561a96ab0c67;
      local_68 = 0x7d8b8d6fd2a43404;
      plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_78,&local_60);
      plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_88,&local_68);
      piVar10 = (int *)FUN_1802029c0(*plVar7 + 0x28);
      iVar11 = *piVar10;
      iVar5 = iVar11;
      if ((0 < DAT_18040a400) && (iVar5 = DAT_18040a400 + -1, iVar11 < DAT_18040a400)) {
        iVar5 = iVar11;
      }
      iVar11 = 0;
      if (0 < iVar5) {
        iVar11 = iVar5;
      }
      uVar9 = FUN_180159030(lVar6);
      FUN_180159270(uVar9,iVar11);
    }
    if (cVar2 != '\0') {
      local_60 = 0x93fd561a96ab0c67;
      local_68 = 0xdc9817f331935b39;
      plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_78,&local_60);
      plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_88,&local_68);
      piVar10 = (int *)FUN_1802029c0(*plVar7 + 0x28);
      iVar11 = *piVar10;
      iVar5 = iVar11;
      if ((0 < DAT_18040a3fc) && (iVar5 = DAT_18040a3fc, iVar11 <= DAT_18040a3fc)) {
        iVar5 = iVar11;
      }
      iVar11 = 0;
      if (0 < iVar5) {
        iVar11 = iVar5;
      }
      uVar9 = FUN_180159120(lVar6);
      FUN_180159270(uVar9,iVar11);
    }
  }
  return;
}


