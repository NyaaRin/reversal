// 0x18029ce90  FUN_18029ce90
// size=1432 thunk=false
// signature: undefined FUN_18029ce90()
// status: ok


undefined8
FUN_18029ce90(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,uint param_5,
             uint *param_6,float *param_7)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  longlong lVar4;
  float fVar5;
  uint uVar6;
  uint *puVar7;
  void *pvVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int local_res10 [2];
  undefined8 in_stack_fffffffffffffef8;
  uint uVar23;
  ulonglong uVar22;
  undefined4 uVar24;
  undefined8 in_stack_ffffffffffffff00;
  uint uVar26;
  ulonglong uVar25;
  undefined4 *puVar27;
  int *piVar28;
  int *piVar29;
  undefined4 uVar30;
  void **ppvVar31;
  void *local_d8;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  uint local_c0;
  longlong local_b8;
  longlong local_b0;
  
  uVar6 = param_5;
  uVar23 = (uint)((ulonglong)in_stack_fffffffffffffef8 >> 0x20);
  uVar26 = (uint)((ulonglong)in_stack_ffffffffffffff00 >> 0x20);
  lVar4 = *(longlong *)(param_2 + 0x90);
  local_b8 = lVar4;
  iVar9 = FUN_18028c0e0(lVar4,(undefined2)param_5);
  if (iVar9 == 0) {
LAB_18029d3e8:
    uVar11 = 0;
  }
  else {
    iVar13 = (int)*(char *)(param_2 + 0x37);
    if ((*(char *)(param_2 + 0x37) == '\0') &&
       ((DAT_180381080 <
         *(float *)(param_3 + 0x14) * *(float *)(param_3 + 0x18) * *(float *)(param_2 + 0x70) ||
        (iVar13 = 2, *(char *)(param_2 + 0x36) != '\0')))) {
      iVar13 = 1;
    }
    iVar15 = (int)*(char *)(param_2 + 0x38);
    if (*(char *)(param_2 + 0x38) == '\0') {
      iVar15 = 1;
    }
    fVar17 = *(float *)(param_3 + 0x14) * *(float *)(lVar4 + 0xa0);
    piVar29 = &local_d0;
    ppvVar31 = &local_d8;
    fVar18 = *(float *)(param_3 + 0x18) * *(float *)(param_2 + 0x70);
    piVar28 = local_res10;
    puVar27 = &param_5;
    uVar25 = (ulonglong)uVar26 << 0x20;
    fVar16 = fVar18 * fVar17;
    fVar21 = (float)iVar15;
    uVar22 = (ulonglong)uVar23 << 0x20;
    fVar20 = (float)iVar13;
    fVar19 = fVar16 * fVar20;
    local_c4 = iVar9;
    FUN_18028ea20(lVar4,iVar9,fVar19);
    puVar7 = param_6;
    lVar12 = *(longlong *)(lVar4 + 8);
    lVar14 = (longlong)*(int *)(lVar4 + 0x28);
    iVar10 = (uint)*(byte *)((longlong)*(int *)(lVar4 + 0x24) + 0x22 + lVar12) * 0x100 +
             (uint)*(byte *)((longlong)*(int *)(lVar4 + 0x24) + 0x23 + lVar12);
    if (iVar9 < iVar10) {
      lVar12 = iVar9 * 4 + lVar12;
      bVar1 = *(byte *)(lVar12 + 1 + lVar14);
      bVar2 = *(byte *)(lVar12 + lVar14);
    }
    else {
      lVar12 = (ulonglong)(uint)(iVar10 * 4) + lVar12;
      bVar1 = *(byte *)(lVar12 + -3 + lVar14);
      bVar2 = *(byte *)(lVar12 + -4 + lVar14);
    }
    fVar17 = (float)(int)(short)((ushort)bVar1 + (ushort)bVar2 * 0x100) * fVar17;
    if (param_7 != (float *)0x0) {
      *param_7 = fVar17;
      return 1;
    }
    *param_6 = *param_6 & 0x3f;
    *param_6 = *param_6 | (uVar6 & 0xffff) << 6;
    param_6[1] = (uint)fVar17;
    if ((param_5 != (uint)local_d8) && (local_res10[0] != local_d0)) {
      local_c8 = (uint)local_d8 - param_5;
      local_cc = (local_d0 - local_res10[0]) + -1 + iVar15;
      local_c0 = FUN_18029c320(param_1,local_c8 + iVar13 + -1,local_cc,0,uVar22,uVar25,puVar27,
                               piVar28,ppvVar31,piVar29);
      if (local_c0 == 0xffffffff) goto LAB_18029d3e8;
      lVar12 = *(longlong *)(param_1 + 0x2b0);
      local_b0 = *(longlong *)(lVar12 + 0x68) +
                 ((longlong)
                  (*(int *)(*(longlong *)(lVar12 + 0x78) + (ulonglong)(local_c0 & 0x7ffff) * 4) <<
                  0xc) >> 0xc) * 8;
      ppvVar31 = &local_d8;
      piVar29 = local_res10;
      uVar22 = uVar22 & 0xffffffff00000000;
      FUN_18028ea20(lVar4,local_c4,fVar19,lVar12,uVar22,uVar25 & 0xffffffff00000000,&param_5,piVar29
                    ,ppvVar31,&local_d0);
      uVar24 = (undefined4)(uVar22 >> 0x20);
      lVar4 = *(longlong *)(param_1 + 0x2b0);
      iVar9 = local_cc * (local_c8 + -1 + iVar13);
      FUN_18028a8d0(lVar4 + 0x80);
      local_d8 = *(void **)(lVar4 + 0x88);
      memset(local_d8,0,(longlong)iVar9);
      iVar9 = local_cc;
      iVar10 = local_c8 + -1 + iVar13;
      uVar25 = (ulonglong)piVar29 & 0xffffffff00000000;
      uVar22 = (ulonglong)(uint)(fVar21 * fVar16);
      uVar11 = CONCAT44(uVar24,iVar10);
      FUN_1802908f0(local_b8,local_d8,(iVar10 - iVar13) + 1,(local_cc - iVar15) + 1,uVar11,fVar19,
                    uVar22,uVar25,(ulonglong)ppvVar31 & 0xffffffff00000000,local_c4);
      uVar30 = (undefined4)(uVar25 >> 0x20);
      uVar24 = (undefined4)((ulonglong)uVar11 >> 0x20);
      if (1 < iVar13) {
        uVar11 = CONCAT44(uVar24,iVar13);
        FUN_180290b70(local_d8,iVar10,iVar9,iVar10,uVar11);
        uVar24 = (undefined4)((ulonglong)uVar11 >> 0x20);
      }
      pvVar8 = local_d8;
      if (1 < iVar15) {
        FUN_180290df0(local_d8,iVar10,iVar9,iVar10,CONCAT44(uVar24,iVar15));
      }
      if (iVar13 == 0) {
        fVar16 = 0.0;
      }
      else {
        fVar16 = (float)(1 - iVar13) / (fVar20 + fVar20);
      }
      if (iVar15 == 0) {
        fVar17 = 0.0;
      }
      else {
        fVar17 = (float)(1 - iVar15) / (fVar21 + fVar21);
      }
      fVar19 = *(float *)(**(longlong **)(*(longlong *)(param_3 + 0x58) + 0x28) + 0x3c);
      fVar5 = DAT_180380bb0;
      if (fVar19 != 0.0) {
        fVar5 = *(float *)(param_3 + 0x14) / fVar19;
      }
      fVar19 = fVar5 * *(float *)(param_2 + 0x50) + DAT_180380ac0;
      iVar9 = (int)fVar19;
      if ((fVar19 < 0.0) && ((float)iVar9 != fVar19)) {
        iVar9 = iVar9 + -1;
      }
      fVar19 = fVar5 * *(float *)(param_2 + 0x54) + DAT_180380ac0;
      iVar13 = (int)fVar19;
      if ((fVar19 < 0.0) && ((float)iVar13 != fVar19)) {
        iVar13 = iVar13 + -1;
      }
      fVar19 = DAT_180380bb0 / (fVar20 * fVar18);
      fVar18 = DAT_180380bb0 / (fVar21 * fVar18);
      fVar17 = (float)(int)(*(float *)(param_3 + 0x44) + DAT_180380ac0) + fVar17 + (float)iVar13;
      puVar7[3] = (uint)((float)local_res10[0] * fVar18 + fVar17);
      puVar7[2] = (uint)((float)(int)param_5 * fVar19 + (float)iVar9 + fVar16);
      puVar7[4] = (uint)((float)(int)(*(ushort *)(local_b0 + 4) + param_5) * fVar19 +
                        (float)iVar9 + fVar16);
      uVar3 = *(ushort *)(local_b0 + 6);
      *puVar7 = *puVar7 | 2;
      puVar7[10] = local_c0;
      puVar7[5] = (uint)((float)(int)((uint)uVar3 + local_res10[0]) * fVar18 + fVar17);
      FUN_18029d7b0(param_1,param_3,param_2,puVar7,local_b0,pvVar8,uVar22,CONCAT44(uVar30,iVar10));
    }
    uVar11 = 1;
  }
  return uVar11;
}


