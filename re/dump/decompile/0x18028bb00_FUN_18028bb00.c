// 0x18028bb00  FUN_18028bb00
// size=1503 thunk=false
// signature: undefined FUN_18028bb00()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18028bb00(longlong param_1,longlong param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  char *pcVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 uStack_90;
  int local_88 [4];
  undefined1 local_78 [16];
  longlong local_68;
  uint uStack_60;
  uint uStack_5c;
  longlong local_58;
  longlong lStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  *(longlong *)(param_1 + 8) = param_2;
  uVar15 = (ulonglong)param_3;
  *(uint *)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  uVar6 = FUN_18028b8e0(param_2,param_3,&DAT_18037f7a4);
  iVar7 = FUN_18028b8e0(param_2,uVar15,&DAT_18037f79c);
  *(int *)(param_1 + 0x18) = iVar7;
  iVar8 = FUN_18028b8e0(param_2,param_3,&DAT_180345dd8);
  *(int *)(param_1 + 0x1c) = iVar8;
  local_88[0] = FUN_18028b8e0(param_2,param_3,&DAT_18037f7b4);
  *(int *)(param_1 + 0x20) = local_88[0];
  iVar9 = FUN_18028b8e0(param_2,param_3,&DAT_18037f7ac);
  *(int *)(param_1 + 0x24) = iVar9;
  local_88[1] = FUN_18028b8e0(param_2,uVar15,&DAT_18037f7c4);
  *(int *)(param_1 + 0x28) = local_88[1];
  uVar10 = FUN_18028b8e0(param_2,param_3,&DAT_18037f7bc);
  *(undefined4 *)(param_1 + 0x2c) = uVar10;
  uVar10 = FUN_18028b8e0(param_2,param_3,&DAT_18037f7cc);
  *(undefined4 *)(param_1 + 0x30) = uVar10;
  if (uVar6 == 0) {
    return 0;
  }
  if (iVar8 == 0) {
    return 0;
  }
  if (iVar9 == 0) {
    return 0;
  }
  if (local_88[1] == 0) {
    return 0;
  }
  if (local_88[0] != 0) {
    if (iVar7 == 0) {
      return 0;
    }
    goto LAB_18028bf96;
  }
  uVar18 = 0;
  local_88[2] = 2;
  local_88[3] = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  iVar7 = (uint)*(byte *)(param_2 + 5 + uVar15) + (uint)*(byte *)(param_2 + 4 + uVar15) * 0x100;
  uVar15 = uVar18;
  if (iVar7 == 0) {
    return 0;
  }
  while( true ) {
    pcVar17 = (char *)((ulonglong)((int)uVar15 * 0x10 + param_3 + 0xc) + param_2);
    if ((((*pcVar17 == 'C') && (pcVar17[1] == 'F')) && (pcVar17[2] == 'F')) && (pcVar17[3] == ' '))
    break;
    uVar16 = (int)uVar15 + 1;
    uVar15 = (ulonglong)uVar16;
    if (iVar7 <= (int)uVar16) {
      return 0;
    }
  }
  uVar16 = (uint)(byte)pcVar17[0xb] +
           (uint)(byte)pcVar17[9] * 0x10000 + (uint)(byte)pcVar17[10] * 0x100 +
           (uint)(byte)pcVar17[8] * 0x1000000;
  if (uVar16 == 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(ulonglong *)(param_1 + 0x40) = (ulonglong)uVar16 + param_2;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x20000000;
  local_68 = SUB168(*(undefined1 (*) [16])(param_1 + 0x40),0);
  iVar7 = *(int *)(param_1 + 0x48) + 2;
  uStack_5c = SUB164(*(undefined1 (*) [16])(param_1 + 0x40),0xc);
  if ((((int)((ulonglong)*(undefined8 *)(param_1 + 0x48) >> 0x20) < iVar7) || (iVar7 < 0)) ||
     ((int)uStack_5c <= iVar7)) {
    uVar16 = 0;
  }
  else {
    uVar16 = (uint)*(byte *)(iVar7 + local_68);
  }
  uStack_60 = uStack_5c;
  if ((int)uVar16 <= (int)uStack_5c) {
    uStack_60 = uVar16;
  }
  FUN_18028b360(&local_98,&local_68);
  plVar11 = (longlong *)FUN_18028b360(&local_98,&local_68);
  local_98 = *plVar11;
  uStack_90 = plVar11[1];
  plVar11 = (longlong *)FUN_18028b790(&local_58,&local_98,0);
  local_58 = *plVar11;
  lStack_50 = plVar11[1];
  FUN_18028b360(&local_98,&local_68);
  puVar12 = (undefined8 *)FUN_18028b360(&local_98,&local_68);
  uVar5 = puVar12[1];
  *(undefined8 *)(param_1 + 0x60) = *puVar12;
  *(undefined8 *)(param_1 + 0x68) = uVar5;
  plVar11 = (longlong *)FUN_18028b650(&local_98,&local_58,0x11);
  local_98 = *plVar11;
  uStack_90 = plVar11[1];
  uVar15 = uVar18;
  do {
    if (uStack_90._4_4_ <= (int)uStack_90) break;
    uVar10 = FUN_18028b470(&local_98);
    uVar16 = (int)uVar15 + 1;
    *(undefined4 *)(local_78 + uVar15 * 4 + -4) = uVar10;
    uVar15 = (ulonglong)uVar16;
  } while ((int)uVar16 < 1);
  plVar11 = (longlong *)FUN_18028b650(&local_98,&local_58,0x106);
  local_98 = *plVar11;
  uStack_90 = plVar11[1];
  uVar15 = uVar18;
  do {
    if (uStack_90._4_4_ <= (int)uStack_90) break;
    iVar7 = FUN_18028b470(&local_98);
    uVar16 = (int)uVar15 + 1;
    local_88[uVar15 + 2] = iVar7;
    uVar15 = (ulonglong)uVar16;
  } while ((int)uVar16 < 1);
  plVar11 = (longlong *)FUN_18028b650(&local_98,&local_58,0x124);
  local_98 = *plVar11;
  uStack_90 = plVar11[1];
  uVar15 = uVar18;
  do {
    if (uStack_90._4_4_ <= (int)uStack_90) break;
    iVar7 = FUN_18028b470(&local_98);
    uVar16 = (int)uVar15 + 1;
    local_88[uVar15] = iVar7;
    uVar15 = (ulonglong)uVar16;
  } while ((int)uVar16 < 1);
  plVar11 = (longlong *)FUN_18028b650(&local_98,&local_58,0x125);
  local_98 = *plVar11;
  uStack_90 = plVar11[1];
  do {
    if (uStack_90._4_4_ <= (int)uStack_90) break;
    iVar7 = FUN_18028b470(&local_98);
    uVar16 = (int)uVar18 + 1;
    local_88[uVar18 + 1] = iVar7;
    uVar18 = (ulonglong)uVar16;
  } while ((int)uVar16 < 1);
  local_98 = local_58;
  uStack_90 = lStack_50;
  local_58 = local_68;
  lStack_50 = local_68._8_8_;
  uVar16 = uStack_5c;
  puVar13 = (undefined4 *)FUN_18028b990(local_78,&local_58,&local_98);
  iVar8 = local_88[3];
  iVar7 = local_88[1];
  uVar10 = puVar13[1];
  uVar3 = puVar13[2];
  uVar4 = puVar13[3];
  *(undefined4 *)(param_1 + 0x70) = *puVar13;
  *(undefined4 *)(param_1 + 0x74) = uVar10;
  *(undefined4 *)(param_1 + 0x78) = uVar3;
  *(undefined4 *)(param_1 + 0x7c) = uVar4;
  if (local_88[2] != 2) {
    return 0;
  }
  if (local_88[3] == 0) {
    return 0;
  }
  uVar14 = uStack_5c;
  if (local_88[0] != 0) {
    lVar19 = (longlong)local_88[1];
    if (local_88[1] == 0) {
      return 0;
    }
    if ((int)uVar16 < local_88[0]) {
LAB_18028bf16:
      uStack_60 = uVar16;
    }
    else {
      uStack_60 = local_88[0];
      if (local_88[0] < 0) goto LAB_18028bf16;
    }
    puVar12 = (undefined8 *)FUN_18028b360(local_78,&local_68);
    uVar5 = puVar12[1];
    local_58 = 0;
    lStack_50 = 0;
    *(undefined8 *)(param_1 + 0x80) = *puVar12;
    *(undefined8 *)(param_1 + 0x88) = uVar5;
    if (((-1 < iVar7) && (uVar16 = uStack_5c - iVar7, -1 < (int)uVar16)) &&
       ((iVar7 <= (int)uStack_5c && ((int)uVar16 <= (int)(uStack_5c - iVar7))))) {
      lStack_50 = (ulonglong)uVar16 << 0x20;
      local_58 = lVar19 + local_68;
    }
    *(longlong *)(param_1 + 0x90) = local_58;
    *(longlong *)(param_1 + 0x98) = lStack_50;
    uVar14 = uStack_5c;
  }
  if ((int)uVar14 < iVar8) {
LAB_18028bf7f:
    uStack_60 = uVar14;
  }
  else {
    uStack_60 = iVar8;
    if (iVar8 < 0) goto LAB_18028bf7f;
  }
  puVar12 = (undefined8 *)FUN_18028b360(local_78,&local_68);
  uVar5 = puVar12[1];
  *(undefined8 *)(param_1 + 0x50) = *puVar12;
  *(undefined8 *)(param_1 + 0x58) = uVar5;
LAB_18028bf96:
  iVar7 = 0;
  iVar8 = (uint)*(byte *)(param_2 + 5 + (ulonglong)param_3) +
          (uint)*(byte *)(param_2 + 4 + (ulonglong)param_3) * 0x100;
  if (iVar8 != 0) {
    do {
      pcVar17 = (char *)((ulonglong)(iVar7 * 0x10 + param_3 + 0xc) + param_2);
      if ((((*pcVar17 == 'm') && (pcVar17[1] == 'a')) && (pcVar17[2] == 'x')) && (pcVar17[3] == 'p')
         ) {
        uVar16 = (uint)(byte)pcVar17[0xb] +
                 (uint)(byte)pcVar17[9] * 0x10000 + (uint)(byte)pcVar17[10] * 0x100 +
                 (uint)(byte)pcVar17[8] * 0x1000000;
        if (uVar16 != 0) {
          iVar7 = (uint)*(byte *)((ulonglong)uVar16 + 4 + param_2) * 0x100 +
                  (uint)*(byte *)((ulonglong)uVar16 + 5 + param_2);
          goto LAB_18028bfe2;
        }
        break;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar8);
  }
  iVar7 = 0xffff;
LAB_18028bfe2:
  *(int *)(param_1 + 0x14) = iVar7;
  iVar7 = 0;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  bVar1 = *(byte *)((ulonglong)uVar6 + 2 + param_2);
  bVar2 = *(byte *)((ulonglong)uVar6 + 3 + param_2);
  *(undefined4 *)(param_1 + 0x38) = 0;
  iVar8 = (uint)bVar1 * 0x100 + (uint)bVar2;
  if (iVar8 != 0) {
    do {
      uVar16 = uVar6 + 4 + iVar7 * 8;
      uVar15 = (ulonglong)uVar16;
      iVar9 = (uint)*(byte *)((ulonglong)uVar16 + 1 + param_2) +
              (uint)*(byte *)((ulonglong)uVar16 + param_2) * 0x100;
      if ((iVar9 == 0) ||
         ((iVar9 == 3 &&
          ((iVar9 = (uint)*(byte *)(uVar15 + 2 + param_2) * 0x100 +
                    (uint)*(byte *)(uVar15 + 3 + param_2), iVar9 == 1 || (iVar9 == 10)))))) {
        *(uint *)(param_1 + 0x38) =
             (uint)*(byte *)(uVar15 + 7 + param_2) +
             ((uint)*(byte *)(uVar15 + 6 + param_2) +
             ((uint)*(byte *)(uVar15 + 5 + param_2) + (uint)*(byte *)(uVar15 + 4 + param_2) * 0x100)
             * 0x100) * 0x100 + uVar6;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar8);
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    return 0;
  }
  *(uint *)(param_1 + 0x3c) =
       (uint)*(byte *)((longlong)*(int *)(param_1 + 0x1c) + 0x33 + param_2) +
       (uint)*(byte *)((longlong)*(int *)(param_1 + 0x1c) + 0x32 + param_2) * 0x100;
  return 1;
}


