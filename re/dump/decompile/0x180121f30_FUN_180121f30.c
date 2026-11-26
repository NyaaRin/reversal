// 0x180121f30  FUN_180121f30
// size=1056 thunk=false
// signature: undefined FUN_180121f30()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180121f30(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 *_Buf1;
  char *******pppppppcVar5;
  undefined8 *******_Buf1_00;
  undefined8 *******pppppppuVar6;
  char *******pppppppcVar7;
  char *******pppppppcVar8;
  longlong lVar9;
  size_t sVar10;
  bool bVar11;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined8 ******local_d0;
  undefined8 uStack_c8;
  size_t local_c0;
  ulonglong uStack_b8;
  char ******local_b0 [2];
  size_t local_a0;
  ulonglong local_98;
  char ******local_90 [2];
  size_t local_80;
  ulonglong local_78;
  undefined8 ******local_70 [2];
  ulonglong local_60;
  ulonglong local_58;
  undefined8 ******local_50 [2];
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_f8;
  bVar1 = false;
  local_d8 = 0;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return local_30 & 0xffffffffffffff00;
  }
  FUN_18016d4c0(local_b0,param_1);
  FUN_18016d4c0(local_90,param_2);
  pppppppcVar5 = (char *******)local_b0[0];
  if (local_98 < 0x10) {
    pppppppcVar5 = local_b0;
  }
  pppppppcVar7 = (char *******)((longlong)pppppppcVar5 + local_a0);
  for (pppppppcVar8 = pppppppcVar5; pppppppcVar8 != pppppppcVar7;
      pppppppcVar8 = (char *******)((longlong)pppppppcVar8 + 1)) {
    iVar2 = tolower((int)*(char *)pppppppcVar8);
    *(char *)pppppppcVar5 = (char)iVar2;
    pppppppcVar5 = (char *******)((longlong)pppppppcVar5 + 1);
  }
  pppppppcVar5 = (char *******)local_90[0];
  if (local_78 < 0x10) {
    pppppppcVar5 = local_90;
  }
  pppppppcVar7 = (char *******)((longlong)pppppppcVar5 + local_80);
  for (pppppppcVar8 = pppppppcVar5; pppppppcVar8 != pppppppcVar7;
      pppppppcVar8 = (char *******)((longlong)pppppppcVar8 + 1)) {
    iVar2 = tolower((int)*(char *)pppppppcVar8);
    *(char *)pppppppcVar5 = (char)iVar2;
    pppppppcVar5 = (char *******)((longlong)pppppppcVar5 + 1);
  }
  pppppppcVar5 = local_b0;
  if (0xf < local_98) {
    pppppppcVar5 = (char *******)local_b0[0];
  }
  if (((local_a0 == 0) ||
      (pcVar4 = (char *)((longlong)pppppppcVar5 + local_a0),
      pcVar3 = (char *)thunk_FUN_1802d5c20(pppppppcVar5,pcVar4,0x2a), pcVar3 == pcVar4)) ||
     ((longlong)pcVar3 - (longlong)pppppppcVar5 == -1)) {
    pppppppcVar5 = local_90;
    if (0xf < local_78) {
      pppppppcVar5 = (char *******)local_90[0];
    }
    pppppppcVar8 = local_b0;
    if (0xf < local_98) {
      pppppppcVar8 = (char *******)local_b0[0];
    }
LAB_1801222f4:
    if (local_a0 == local_80) {
      if (local_a0 == 0) {
        bVar11 = true;
      }
      else {
        iVar2 = memcmp(pppppppcVar8,pppppppcVar5,local_a0);
        bVar11 = iVar2 == 0;
      }
    }
    else {
      bVar11 = false;
    }
    goto LAB_180122317;
  }
  pppppppcVar5 = local_b0;
  if (0xf < local_98) {
    pppppppcVar5 = (char *******)local_b0[0];
  }
  if (*(char *)pppppppcVar5 == '*') {
    pppppppcVar5 = local_b0;
    if (0xf < local_98) {
      pppppppcVar5 = (char *******)local_b0[0];
    }
    if ((*(char *)((longlong)pppppppcVar5 + (local_a0 - 1)) == '*') && (2 < local_a0)) {
      FUN_18020e670(local_b0,local_50,1,local_a0 - 2);
      pppppppuVar6 = local_50;
      if (0xf < local_38) {
        pppppppuVar6 = (undefined8 *******)local_50[0];
      }
      pppppppcVar5 = local_90;
      if (0xf < local_78) {
        pppppppcVar5 = (char *******)local_90[0];
      }
      if (local_80 < local_40) {
LAB_180122117:
        lVar9 = -1;
      }
      else if (local_40 == 0) {
        lVar9 = 0;
      }
      else {
        pcVar4 = (char *)thunk_FUN_1802d6b60(pppppppcVar5,
                                             (char *)((longlong)pppppppcVar5 + local_80),
                                             pppppppuVar6);
        if (pcVar4 == (char *)((longlong)pppppppcVar5 + local_80)) goto LAB_180122117;
        lVar9 = (longlong)pcVar4 - (longlong)pppppppcVar5;
      }
      bVar11 = lVar9 != -1;
      FUN_18020e450(local_50);
      goto LAB_180122317;
    }
  }
  pppppppcVar5 = local_b0;
  if (0xf < local_98) {
    pppppppcVar5 = (char *******)local_b0[0];
  }
  if (*(char *)((longlong)pppppppcVar5 + (local_a0 - 1)) == '*') {
    FUN_18020e670(local_b0,local_70,0,local_a0 - 1);
    local_d0 = (undefined8 *******)0x0;
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    sVar10 = local_60;
    if (local_80 < local_60) {
      sVar10 = local_80;
    }
    pppppppcVar5 = local_90;
    if (0xf < local_78) {
      pppppppcVar5 = (char *******)local_90[0];
    }
    FUN_18001d080(&local_d0,pppppppcVar5,sVar10);
    local_d8 = 4;
    pppppppuVar6 = local_70;
    if (0xf < local_58) {
      pppppppuVar6 = (undefined8 *******)local_70[0];
    }
    _Buf1_00 = &local_d0;
    if (0xf < uStack_b8) {
      _Buf1_00 = (undefined8 *******)local_d0;
    }
    if (local_c0 == local_60) {
      if (local_c0 == 0) {
        bVar11 = true;
      }
      else {
        iVar2 = memcmp(_Buf1_00,pppppppuVar6,local_c0);
        bVar11 = iVar2 == 0;
      }
    }
    else {
      bVar11 = false;
    }
    local_d8 = 0;
    FUN_18020e450(&local_d0);
    FUN_18020e450(local_70);
    goto LAB_180122317;
  }
  pppppppcVar5 = local_b0;
  if (0xf < local_98) {
    pppppppcVar5 = (char *******)local_b0[0];
  }
  if (*(char *)pppppppcVar5 != '*') {
    pppppppcVar5 = local_90;
    if (0xf < local_78) {
      pppppppcVar5 = (char *******)local_90[0];
    }
    pppppppcVar8 = local_b0;
    if (0xf < local_98) {
      pppppppcVar8 = (char *******)local_b0[0];
    }
    goto LAB_1801222f4;
  }
  FUN_18020e670(local_b0,local_70,1,0xffffffffffffffff);
  if (local_80 < local_60) {
LAB_18012228d:
    bVar11 = false;
  }
  else {
    _Buf1 = (undefined8 *)FUN_18020e670(local_90,&local_d0,local_80 - local_60,0xffffffffffffffff);
    bVar1 = true;
    local_d8 = 1;
    pppppppuVar6 = local_70;
    if (0xf < local_58) {
      pppppppuVar6 = (undefined8 *******)local_70[0];
    }
    sVar10 = _Buf1[2];
    if (0xf < (ulonglong)_Buf1[3]) {
      _Buf1 = (undefined8 *)*_Buf1;
    }
    if ((sVar10 != local_60) ||
       ((sVar10 != 0 && (iVar2 = memcmp(_Buf1,pppppppuVar6,sVar10), iVar2 != 0))))
    goto LAB_18012228d;
    bVar11 = true;
  }
  if (bVar1) {
    local_d8 = 0;
    FUN_18020e450(&local_d0);
  }
  FUN_18020e450(local_70);
LAB_180122317:
  FUN_18020e450(local_90);
  FUN_18020e450(local_b0);
  return (ulonglong)bVar11;
}


