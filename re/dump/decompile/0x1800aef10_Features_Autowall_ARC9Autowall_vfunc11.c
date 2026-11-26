// 0x1800aef10  Features_Autowall_ARC9Autowall_vfunc11
// size=637 thunk=false
// signature: undefined Features_Autowall_ARC9Autowall_vfunc11()
// status: ok


undefined1 *
Features_Autowall_ARC9Autowall_vfunc11(longlong *param_1,undefined1 *param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_a8;
  float local_a0;
  float local_98 [28];
  
  iVar8 = 0;
  *param_2 = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xbf800000;
  cVar4 = (**(code **)(*param_1 + 0x20))();
  if (cVar4 != '\0') {
    iVar5 = FUN_1800aa2b0(param_3);
    fVar3 = DAT_180380bb0;
    fVar11 = DAT_180380d30;
    if (((iVar5 != 0x4d) && (fVar11 = DAT_180380ac0, iVar5 != 0x57)) &&
       (fVar11 = DAT_180380a58, iVar5 != 0x59)) {
      fVar11 = DAT_180380bb0;
    }
    fVar10 = *(float *)(param_3 + 0x78);
    local_98[2] = 4.0;
    local_98[0] = 1.0;
    local_98[1] = fVar10 * fVar11 * DAT_180380a00;
    pfVar7 = local_98;
    if (DAT_180380bb0 <= local_98[1]) {
      pfVar7 = local_98 + 1;
    }
    pfVar6 = local_98 + 2;
    if (local_98[1] <= DAT_180380e9c) {
      pfVar6 = pfVar7;
    }
    fVar1 = *pfVar6;
    fVar11 = fVar11 * fVar1;
    if (0.0 < fVar11) {
      local_a8 = *(undefined8 *)(param_3 + 0xc);
      local_a0 = *(float *)(param_3 + 0x14);
      local_98[5] = 64.0;
      local_98[3] = 1.0;
      local_98[4] = fVar10 / fVar11 + DAT_180380d30;
      pfVar7 = local_98 + 3;
      if (DAT_180380bb0 <= local_98[4]) {
        pfVar7 = local_98 + 4;
      }
      pfVar6 = local_98 + 5;
      if (local_98[4] <= DAT_1803810d0) {
        pfVar6 = pfVar7;
      }
      fVar2 = *pfVar6;
      if (0 < (int)fVar2) {
        do {
          fVar9 = fVar1 * *(float *)(param_3 + 0x68) + (float)local_a8;
          local_a8._4_4_ = fVar1 * *(float *)(param_3 + 0x6c) + local_a8._4_4_;
          local_a0 = fVar1 * *(float *)(param_3 + 0x70) + local_a0;
          local_a8 = CONCAT44(local_a8._4_4_,fVar9);
          if (((uint)fVar9 & 0x7f800000) == 0x7f800000) {
            return param_2;
          }
          if (((uint)local_a8._4_4_ & 0x7f800000) == 0x7f800000) {
            return param_2;
          }
          if (((uint)local_a0 & 0x7f800000) == 0x7f800000) {
            return param_2;
          }
          fVar10 = fVar10 - fVar11;
          if (fVar10 <= 0.0) {
            return param_2;
          }
          cVar4 = FUN_1800abd90(&local_a8,*(undefined8 *)(param_3 + 0x88),0x46004003);
          if (cVar4 == '\0') {
            *(float *)(param_2 + 4) = (float)local_a8;
            *(float *)(param_2 + 0x14) = fVar10;
            *(float *)(param_2 + 0xc) = local_a0;
            *(float *)(param_2 + 8) = local_a8._4_4_;
            *param_2 = 1;
            *(float *)(param_2 + 0x10) =
                 ((fVar10 / *(float *)(param_1 + 1)) * (fVar3 - *(float *)((longlong)param_1 + 0xc))
                 + *(float *)((longlong)param_1 + 0xc)) * *(float *)(param_1 + 2);
            return param_2;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < (int)fVar2);
      }
    }
  }
  return param_2;
}


