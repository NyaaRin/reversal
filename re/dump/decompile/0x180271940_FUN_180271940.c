// 0x180271940  FUN_180271940
// size=642 thunk=false
// signature: undefined FUN_180271940()
// status: ok


void FUN_180271940(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int iVar16;
  int *piVar17;
  int iVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  if ((param_2 & 0xff000000) != 0) {
    lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar6 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar6 = **(longlong **)(*(longlong *)(lVar6 + 0xec0) + 0x2060);
    fVar2 = *(float *)(lVar6 + 8);
    fVar3 = *(float *)(lVar6 + 0xc);
    fVar20 = fVar2 + *(float *)(lVar6 + 0x10);
    fVar21 = fVar3 + *(float *)(lVar6 + 0x14);
    piVar7 = *(int **)(*(longlong *)(param_1 + 0x3c0) + 0x2c8);
    local_b8 = fVar2;
    local_b4 = fVar3;
    local_b0 = fVar20;
    local_ac = fVar21;
    if (*piVar7 == 0) {
      FUN_1802922a0(piVar7);
    }
    local_c8 = fVar20 + DAT_180380bb0;
    local_c4 = fVar21 + DAT_180380bb0;
    local_c0 = fVar2 - DAT_180380bb0;
    local_bc = fVar3 - DAT_180380bb0;
    FUN_180292550(piVar7,&local_c0,&local_c8,0);
    FUN_180295000(piVar7,&local_b8,&local_b0,param_2,0,0);
    lVar6 = *(longlong *)(piVar7 + 2);
    iVar5 = *piVar7;
    lVar19 = (longlong)iVar5;
    puVar1 = (undefined8 *)(lVar6 + -0x48 + lVar19 * 0x48);
    uVar8 = *puVar1;
    uVar9 = puVar1[1];
    iVar18 = iVar5 + -1;
    uVar4 = *(undefined8 *)(lVar6 + -8 + lVar19 * 0x48);
    puVar1 = (undefined8 *)(lVar6 + -0x38 + lVar19 * 0x48);
    uVar10 = *puVar1;
    uVar11 = puVar1[1];
    puVar1 = (undefined8 *)(lVar6 + -0x28 + lVar19 * 0x48);
    uVar12 = *puVar1;
    uVar13 = puVar1[1];
    puVar1 = (undefined8 *)(lVar6 + -0x18 + lVar19 * 0x48);
    uVar14 = *puVar1;
    uVar15 = puVar1[1];
    *piVar7 = iVar18;
    local_a8 = uVar8;
    uStack_a0 = uVar9;
    local_98 = uVar10;
    uStack_90 = uVar11;
    local_88 = uVar12;
    uStack_80 = uVar13;
    local_78 = uVar14;
    uStack_70 = uVar15;
    local_68 = uVar4;
    if (iVar18 == 0) {
      FUN_18028acb0(piVar7,&local_a8);
    }
    else {
      iVar16 = piVar7[1];
      if (iVar18 == iVar16) {
        if (iVar16 == 0) {
          iVar16 = 8;
        }
        else {
          iVar16 = iVar16 / 2 + iVar16;
        }
        if (iVar5 < iVar16) {
          iVar5 = iVar16;
        }
        FUN_18028ad40(piVar7,iVar5);
      }
      if (0 < (longlong)*piVar7) {
        memmove((void *)((longlong)*(void **)(piVar7 + 2) + 0x48),*(void **)(piVar7 + 2),
                (longlong)*piVar7 * 0x48);
      }
      puVar1 = *(undefined8 **)(piVar7 + 2);
      *puVar1 = uVar8;
      puVar1[1] = uVar9;
      puVar1[2] = uVar10;
      puVar1[3] = uVar11;
      puVar1[4] = uVar12;
      puVar1[5] = uVar13;
      puVar1[6] = uVar14;
      puVar1[7] = uVar15;
      puVar1[8] = uVar4;
      *piVar7 = *piVar7 + 1;
    }
    FUN_1802922a0(piVar7);
    piVar17 = piVar7 + 0x28;
    *piVar17 = *piVar17 + -1;
    if (*piVar17 == 0) {
      piVar17 = (int *)(*(longlong *)(piVar7 + 0xe) + 0x38);
    }
    else {
      piVar17 = (int *)((longlong)(piVar7[0x28] + -1) * 0x10 + *(longlong *)(piVar7 + 0x2a));
    }
    iVar5 = piVar17[1];
    iVar18 = piVar17[2];
    iVar16 = piVar17[3];
    piVar7[0x18] = *piVar17;
    piVar7[0x19] = iVar5;
    piVar7[0x1a] = iVar18;
    piVar7[0x1b] = iVar16;
    FUN_180292360(piVar7);
  }
  return;
}


