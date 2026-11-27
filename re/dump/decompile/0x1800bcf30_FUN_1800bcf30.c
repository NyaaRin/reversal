// 0x1800bcf30  FUN_1800bcf30
// size=956 thunk=false
// signature: undefined FUN_1800bcf30()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800bcf30(longlong param_1,longlong param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  BOOL BVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  char *pcVar12;
  float *pfVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_118 [32];
  char local_f8;
  int local_f4;
  float local_f0;
  int local_ec;
  int local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  float local_d8;
  int local_d0;
  int local_cc;
  int local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 *local_b8;
  undefined1 local_b0 [16];
  undefined8 local_a0;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_1803da4c0 ^ (ulonglong)auStack_118;
  local_b8 = param_3;
  iVar5 = FUN_1800bcef0();
  if ((((0 < iVar5) && (param_1 != 0)) && (DAT_1803fa360 != (longlong *)0x0)) &&
     ((DAT_1803fa608 != 0 && (DAT_1803fa668 != (longlong *)0x0)))) {
    local_e0 = 0;
    local_d8 = 0.0;
    local_f4 = 0;
    local_f8 = 0;
    local_d0 = iVar5;
    puVar10 = (undefined8 *)FUN_18001c430(param_1,&local_c4);
    local_e0 = *puVar10;
    local_d8 = *(float *)(puVar10 + 1);
    iVar6 = (**(code **)(*DAT_1803fa668 + 0x60))();
    local_cc = iVar6;
    iVar7 = FUN_18001c560(param_1);
    local_f4 = iVar7;
    uVar11 = FUN_180241610(&DAT_1803fadf0,0xf7521f28977a3033);
    uVar11 = FUN_180241610(uVar11,0x585adea58af62688);
    pcVar12 = (char *)FUN_1801fcfc0(uVar11);
    cVar1 = *pcVar12;
    local_a0 = 0;
    local_98 = 0.0;
    local_f8 = cVar1;
    local_c0 = FUN_1802d3e00(*(undefined4 *)(param_2 + 4));
    local_c4 = 0;
    local_bc = 0;
    FUN_1802d4050(&local_c4,&local_a0);
    fVar3 = DAT_180380bb0;
    local_f0 = DAT_180381308;
    local_e4 = 0;
    local_e8 = 0;
    iVar2 = *(int *)(DAT_1803fa608 + 0x1c);
    fVar16 = DAT_180381308;
    iVar9 = 1;
    local_c8 = iVar2;
    while ((iVar14 = iVar9, iVar14 <= iVar2 && (iVar14 < 0x81))) {
      if ((((iVar14 == iVar6) ||
           (local_ec = iVar14,
           puVar10 = (undefined8 *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,iVar14),
           puVar10 == (undefined8 *)0x0)) || (BVar8 = IsBadReadPtr(puVar10,8), BVar8 != 0)) ||
         ((((BVar8 = IsBadReadPtr((void *)*puVar10,8), BVar8 != 0 ||
            (cVar4 = FUN_18001c330(puVar10), cVar4 == '\0')) ||
           (iVar9 = FUN_18001c680(puVar10), iVar9 < 1)) ||
          (((cVar1 != '\0' && (0 < iVar7)) && (iVar9 = FUN_18001c560(puVar10), iVar9 == iVar7))))))
      {
LAB_1800bd2bf:
        iVar9 = iVar14 + 1;
      }
      else {
        pfVar13 = (float *)FUN_18001c430(puVar10,local_b0);
        local_90 = *pfVar13 - (float)local_e0;
        local_8c = pfVar13[1] - local_e0._4_4_;
        local_88 = pfVar13[2] - local_d8;
        fVar15 = (float)(*(code *)PTR_FUN_1803da018)
                                  (local_8c * local_8c + local_90 * local_90 + local_88 * local_88);
        if (fVar15 < fVar3) goto LAB_1800bd2bf;
        if (iVar5 == 1) {
          fVar15 = fVar3 - (local_8c * local_a0._4_4_ + local_90 * (float)local_a0 +
                           local_88 * local_98) / fVar15;
        }
        if (fVar16 <= fVar15) goto LAB_1800bd2bf;
        local_78 = 0;
        local_7c = 0;
        local_80 = 0;
        FUN_1802d4540(&local_90,&local_80);
        local_f0 = fVar15;
        local_e4 = FUN_1802d3e00(local_7c);
        fVar16 = fVar15;
        iVar9 = iVar14 + 1;
        local_e8 = iVar14;
      }
    }
    if (local_e8 != 0) {
      *local_b8 = local_e4;
      return 1;
    }
  }
  return 0;
}


