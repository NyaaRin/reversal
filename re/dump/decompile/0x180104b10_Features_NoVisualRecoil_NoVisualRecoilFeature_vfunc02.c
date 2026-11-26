// 0x180104b10  Features_NoVisualRecoil_NoVisualRecoilFeature_vfunc02
// size=1127 thunk=false
// signature: undefined Features_NoVisualRecoil_NoVisualRecoilFeature_vfunc02()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Features_NoVisualRecoil_NoVisualRecoilFeature_vfunc02
               (undefined8 param_1,undefined8 param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  char cVar11;
  int iVar12;
  undefined4 uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  float **ppfVar17;
  float **ppfVar18;
  uint uVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  float local_c0;
  float local_bc;
  float *local_b0;
  float local_a8 [2];
  float *local_a0;
  float *local_98;
  
  _DAT_1803db4b4 = 0;
  DAT_1803db4bc = 0;
  if (param_3 == (float *)0x0) {
    DAT_1803db4c0 = -NAN;
  }
  else {
    DAT_1803db4c0 = *param_3;
  }
  local_a0 = param_3;
  cVar11 = FUN_1800da140();
  if (cVar11 == '\0') {
    return;
  }
  iVar12 = FUN_180103f20();
  if (iVar12 != 1) {
    return;
  }
  if (*param_3 == 0.0) {
    return;
  }
  pcVar8 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar13 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar14 = (*pcVar8)(DAT_1803fa360,uVar13);
  if (lVar14 == 0) {
    return;
  }
  cVar11 = FUN_18001c330(lVar14);
  if (cVar11 == '\0') {
    return;
  }
  pfVar1 = param_3 + 2;
  if (((uint)*pfVar1 & 0x7f800000) == 0x7f800000) {
    return;
  }
  pfVar2 = param_3 + 3;
  if (((uint)*pfVar2 & 0x7f800000) == 0x7f800000) {
    return;
  }
  if (((uint)param_3[4] & 0x7f800000) == 0x7f800000) {
    return;
  }
  if (((uint)param_3[8] & 1) == 0) {
    return;
  }
  cVar11 = FUN_1800da0f0();
  if ((cVar11 != '\0') && (cVar11 = FUN_180103f90(), cVar11 == '\0')) {
    return;
  }
  lVar15 = FUN_18001dbf0(lVar14);
  if (lVar15 == 0) {
    plVar16 = (longlong *)0x0;
  }
  else {
    plVar16 = (longlong *)FUN_180076750(lVar15);
    if ((plVar16 != (longlong *)0x0) &&
       (cVar11 = (**(code **)(*plVar16 + 0xa0))(plVar16), cVar11 == '\0')) {
      cVar11 = (**(code **)(*plVar16 + 0x98))(plVar16);
      goto LAB_180104cba;
    }
  }
  iVar12 = FUN_180076a40();
  if (iVar12 == 0) {
    if (plVar16 == (longlong *)0x0) {
      return;
    }
    cVar11 = (**(code **)(*plVar16 + 0x98))(plVar16);
  }
  else {
    cVar11 = iVar12 == 1;
  }
LAB_180104cba:
  if ((cVar11 != '\0') &&
     ((cVar11 = FUN_180103f90(), cVar11 != '\0' || (cVar11 = FUN_180076400(lVar15), cVar11 == '\0'))
     )) {
    FUN_18001f9d0(lVar14,&local_c0);
    fVar21 = DAT_180380bb0;
    fVar9 = DAT_180380980;
    if ((float)((uint)local_c0 & _DAT_1803817c0) < DAT_180380980) {
      local_c0 = 0.0;
    }
    fVar6 = local_c0;
    if ((float)((uint)local_bc & _DAT_1803817c0) < DAT_180380980) {
      local_bc = 0.0;
    }
    fVar10 = local_bc;
    if ((local_c0 != 0.0) || (local_bc != 0.0)) {
      fVar22 = DAT_180380bb0;
      local_b0 = pfVar2;
      local_98 = pfVar1;
      cVar11 = FUN_180103f90();
      iVar12 = DAT_1803feb78;
      if ((cVar11 != '\0') &&
         ((lVar14 = FUN_18001dbf0(lVar14), iVar12 = DAT_1803feb78, lVar14 != 0 &&
          (DAT_1803fa608 != 0)))) {
        dVar7 = *(double *)(DAT_1803fa608 + 0x10);
        dVar20 = (double)FUN_18001eff0(lVar14);
        dVar20 = dVar20 - dVar7;
        if (dVar20 <= *(double *)(DAT_1803fa608 + 0x28) * DAT_180380cb0) {
          do {
            iVar12 = rand();
            DAT_1803e7090 =
                 iVar12 + (iVar12 / 3 + (iVar12 >> 0x1f) +
                          (int)(((longlong)iVar12 / 3 + ((longlong)iVar12 >> 0x3f) & 0xffffffffU) >>
                               0x1f)) * -3 + 1;
            iVar12 = DAT_1803e7090;
          } while (DAT_1803e7090 == DAT_1803feb78);
        }
        else {
          iVar12 = DAT_1803feb78;
          if (dVar20 <= ((double)DAT_1803e7090 + DAT_180380cb0) * *(double *)(DAT_1803fa608 + 0x28))
          {
            param_3[8] = (float)((uint)param_3[8] & 0xfffffffe);
            fVar21 = DAT_180380d30;
            iVar12 = DAT_1803feb78;
            fVar22 = DAT_180380d30;
          }
        }
      }
      DAT_1803feb78 = iVar12;
      fVar3 = param_3[3];
      fVar4 = *pfVar1;
      fVar5 = *pfVar2;
      local_a0 = (float *)CONCAT44(local_a0._4_4_,0x42b20000);
      local_b0 = (float *)CONCAT44(local_b0._4_4_,0xc2b20000);
      local_a8[0] = fVar4 - fVar21 * fVar6;
      ppfVar18 = &local_b0;
      if (DAT_180381410 <= local_a8[0]) {
        ppfVar18 = (float **)local_a8;
      }
      ppfVar17 = &local_a0;
      if (local_a8[0] <= DAT_180381108) {
        ppfVar17 = ppfVar18;
      }
      fVar6 = *(float *)ppfVar17;
      *pfVar1 = fVar6;
      fVar21 = fVar3 - fVar21 * fVar10;
      param_3[3] = fVar21;
      DAT_1803db4b4 = fVar4 - fVar6;
      DAT_1803db4b8 = fVar5 - fVar21;
      DAT_1803db4bc = 0;
      uVar13 = FUN_1802d3e00(DAT_1803db4b4,local_a8[0],fVar6,fVar21,fVar22);
      _DAT_1803db4b4 = CONCAT44(DAT_1803db4b8,uVar13);
      uVar13 = FUN_1802d3e00(DAT_1803db4b8);
      _DAT_1803db4b4 = CONCAT44(uVar13,DAT_1803db4b4);
      uVar19 = FUN_180022110(fVar3);
      if ((float)(uVar19 & _DAT_1803817c0) < fVar9) {
        DAT_18042356c = param_3[3];
        DAT_1803e90a4 = *param_3;
      }
    }
  }
  return;
}


