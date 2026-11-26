// 0x180121360  Features_VMChams_VMChamsFeature_vfunc15
// size=835 thunk=false
// signature: undefined Features_VMChams_VMChamsFeature_vfunc15()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_VMChams_VMChamsFeature_vfunc15(void)

{
  longlong lVar1;
  char cVar2;
  BOOL BVar3;
  longlong *plVar4;
  char *pcVar5;
  longlong lVar6;
  ulonglong *puVar7;
  undefined4 *puVar8;
  ulonglong *puVar9;
  longlong in_R9;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 local_50 [2];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  local_58 = 0x809c2c8398aa910b;
  local_40 = 0x93fd561a96ab0c67;
  plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_50,&local_40);
  plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_78,&local_58);
  pcVar5 = (char *)FUN_1801fcfc0(*plVar4 + 0x28);
  if (*pcVar5 == '\0') {
    return;
  }
  if (DAT_1804236a5 != '\0') {
    return;
  }
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0xf6f) == '\0') {
    if (*(int *)(in_R9 + 0x44) < 1) {
      return;
    }
    if (DAT_1803fa360 == (longlong *)0x0) {
      return;
    }
    plVar4 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))();
    if (plVar4 == (longlong *)0x0) {
      return;
    }
    BVar3 = IsBadReadPtr(plVar4,8);
    if (BVar3 != 0) {
      return;
    }
    BVar3 = IsBadReadPtr((void *)*plVar4,8);
    if (BVar3 != 0) {
      return;
    }
    pcVar5 = (char *)FUN_18001e410(plVar4);
    if (((pcVar5 < (char *)0x10001) || (*pcVar5 == '\0')) &&
       ((lVar6 = (**(code **)(*plVar4 + 0x78))(plVar4), lVar6 == 0 ||
        (pcVar5 = *(char **)(lVar6 + 0x10), pcVar5 < (char *)0x10001)))) {
      pcVar5 = (char *)0x0;
    }
    cVar2 = FUN_180121100(pcVar5);
    if (cVar2 == '\0') {
      return;
    }
    if (DAT_180426198 < 8) {
      DAT_180426198 = DAT_180426198 + 1;
      FUN_180014410("[VMCHAMS] DME vm ent %d \'%s\' (pass=%d)\n",*(undefined4 *)(in_R9 + 0x44),
                    pcVar5,*(char *)(lVar1 + 0xf6f) != '\0');
    }
  }
  local_40 = local_40 & 0xffffffff00000000;
  local_50[0] = 0xea004a2b62efe75f;
  local_58 = 0x93fd561a96ab0c67;
  plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_78,&local_58);
  plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_68,local_50);
  puVar7 = (ulonglong *)FUN_1802029c0(*plVar4 + 0x28);
  puVar9 = &local_40;
  if (-1 < (int)*puVar7) {
    puVar9 = puVar7;
  }
  if (0xd < (int)*puVar7) {
    puVar9 = (ulonglong *)&DAT_18033c398;
  }
  lVar6 = 0;
  if (((int)*puVar9 < 1) || (lVar6 = FUN_1801070a0((int)*puVar9 + -1), lVar6 != 0)) {
    local_50[0] = 0x93fd561a96ab0c67;
    *(undefined1 *)(lVar1 + 0xf88) = 1;
    *(longlong *)(lVar1 + 0xf80) = lVar6;
    local_58 = 0x17668cc7d4d6e10a;
    plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_68,local_50);
    plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_78,&local_58);
    puVar8 = (undefined4 *)FUN_180202dc0(*plVar4 + 0x28);
    local_50[0] = 0x93fd561a96ab0c67;
    *(undefined4 *)(lVar1 + 0xf70) = *puVar8;
    local_58 = 0x176699c7d4d6f721;
    plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_68,local_50);
    plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_78,&local_58);
    puVar8 = (undefined4 *)FUN_180202dc0(*plVar4 + 0x28);
    local_50[0] = 0x93fd561a96ab0c67;
    *(undefined4 *)(lVar1 + 0xf74) = *puVar8;
    local_58 = 0x17669cc7d4d6fc3a;
    plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_68,local_50);
    plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_78,&local_58);
    puVar8 = (undefined4 *)FUN_180202dc0(*plVar4 + 0x28);
    *(undefined4 *)(lVar1 + 0xf78) = *puVar8;
  }
  return;
}


