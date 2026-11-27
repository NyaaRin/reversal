// 0x1800a3650  FUN_1800a3650
// size=1149 thunk=false
// signature: undefined FUN_1800a3650()
// status: ok


void FUN_1800a3650(undefined8 param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  int iVar6;
  char cVar7;
  longlong lVar8;
  undefined8 uVar9;
  int *piVar10;
  int *piVar11;
  longlong lVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int local_res18 [2];
  int local_148 [4];
  undefined4 local_138;
  undefined4 local_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined1 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a8;
  float local_a0;
  float local_98;
  float local_90;
  undefined8 *local_88;
  float local_80;
  float local_7c;
  float local_78;
  undefined1 local_70 [88];
  
  local_res18[0] = param_3;
  cVar7 = FUN_1800a2ad0();
  if ((((cVar7 != '\0') && (param_2 != 0)) && (cVar7 = FUN_1800a2b30(param_1), cVar7 == '\0')) &&
     (lVar8 = FUN_1800a3520(param_1,1), uVar5 = DAT_1803813b0, lVar8 != 0)) {
    if (DAT_1803de065 == '\0') {
      if (DAT_1803fa608 == 0) {
        uVar14 = 0;
        uVar15 = 0;
      }
      else {
        uVar14 = (undefined4)*(undefined8 *)(DAT_1803fa608 + 0x10);
        uVar15 = (undefined4)((ulonglong)*(undefined8 *)(DAT_1803fa608 + 0x10) >> 0x20);
      }
    }
    else {
      uVar14 = (undefined4)DAT_1803ddea0;
      uVar15 = (undefined4)((ulonglong)DAT_1803ddea0 >> 0x20);
    }
    dVar2 = *(double *)(lVar8 + 0x18);
    if (((double)CONCAT44(uVar15,uVar14) <= dVar2 && dVar2 != (double)CONCAT44(uVar15,uVar14)) ||
       (DAT_180380cb0 < (double)CONCAT44(uVar15,uVar14) - dVar2)) {
      local_130 = 0;
      local_128 = DAT_1803813b0;
      local_120 = 0;
      uStack_118 = 0;
      local_110 = 0;
      local_10c = 0;
      local_108 = 0;
      *(undefined8 *)(lVar8 + 0x20) = 0;
      *(undefined8 *)(lVar8 + 0x28) = uVar5;
      *(undefined4 *)(lVar8 + 0x30) = 0;
      *(undefined4 *)(lVar8 + 0x34) = 0;
      *(undefined4 *)(lVar8 + 0x38) = 0;
      *(undefined4 *)(lVar8 + 0x3c) = 0;
      *(undefined4 *)(lVar8 + 0x40) = 0;
      *(undefined4 *)(lVar8 + 0x44) = 0;
      *(undefined1 *)(lVar8 + 0x48) = 0;
      for (local_88 = (undefined8 *)(lVar8 + 0x50); local_88 != (undefined8 *)(lVar8 + 0x1850);
          local_88 = local_88 + 6) {
        local_100 = 0;
        local_f0 = 0;
        uStack_e8 = 0;
        local_e0 = 0;
        local_dc = 0;
        local_d8 = 0;
        *local_88 = 0;
        local_88[1] = uVar5;
        *(undefined4 *)(local_88 + 2) = 0;
        *(undefined4 *)((longlong)local_88 + 0x14) = 0;
        *(undefined4 *)(local_88 + 3) = 0;
        *(undefined4 *)((longlong)local_88 + 0x1c) = 0;
        *(undefined4 *)(local_88 + 4) = 0;
        *(undefined4 *)((longlong)local_88 + 0x24) = 0;
        *(undefined1 *)(local_88 + 5) = 0;
        local_f8 = local_128;
      }
    }
    uVar9 = FUN_18001daf0(param_1,local_70);
    FUN_1800a25b0(lVar8 + 0x20,param_1,uVar14,uVar9);
    local_148[1] = 0x80;
    local_148[0] = 0;
    piVar11 = local_148;
    if (-1 < local_res18[0]) {
      piVar11 = local_res18;
    }
    piVar10 = local_148 + 1;
    if (local_res18[0] < 0x81) {
      piVar10 = piVar11;
    }
    *(int *)(lVar8 + 0x14) = *piVar10;
    fVar4 = DAT_180381120;
    fVar3 = DAT_180380964;
    local_148[2] = 0;
    while (iVar6 = local_148[2], local_148[2] < *(int *)(lVar8 + 0x14)) {
      lVar12 = (longlong)local_148[2] * 0x30;
      local_90 = *(float *)(lVar12 + 0x20 + param_2);
      local_98 = *(float *)(lVar12 + 0x10 + param_2);
      local_a0 = *(float *)(lVar12 + param_2);
      if (((((uint)local_a0 & 0x7f800000) == 0x7f800000) ||
          (((uint)local_98 & 0x7f800000) == 0x7f800000)) ||
         ((((uint)local_90 & 0x7f800000) == 0x7f800000 ||
          ((fVar13 = local_a0 * local_a0 + local_98 * local_98 + local_90 * local_90, fVar13 < fVar3
           || (fVar4 < fVar13)))))) {
        local_d0 = 0;
        local_c8 = uVar5;
        local_c0 = 0;
        uStack_b8 = 0;
        local_b0 = 0;
        local_ac = 0;
        local_a8 = 0;
        *(undefined8 *)(lVar12 + 0x50 + lVar8) = 0;
        *(undefined8 *)(lVar12 + 0x58 + lVar8) = uVar5;
        lVar1 = (longlong)local_148[2] + 2;
        *(undefined4 *)(lVar8 + lVar1 * 0x30) = 0;
        *(undefined4 *)(lVar8 + 4 + lVar1 * 0x30) = 0;
        *(undefined4 *)(lVar8 + 8 + lVar1 * 0x30) = 0;
        *(undefined4 *)(lVar12 + 0x6c + lVar8) = 0;
        *(undefined4 *)(lVar12 + 0x70 + lVar8) = 0;
        *(undefined4 *)(lVar12 + 0x74 + lVar8) = 0;
        *(undefined1 *)(lVar12 + 0x78 + lVar8) = 0;
        local_148[2] = local_148[2] + 1;
      }
      else {
        local_134 = *(undefined4 *)(lVar12 + 0x2c + param_2);
        local_138 = *(undefined4 *)(lVar12 + 0x1c + param_2);
        local_148[3] = *(undefined4 *)(lVar12 + 0xc + param_2);
        local_80 = local_a0;
        local_7c = local_98;
        local_78 = local_90;
        FUN_1800a25b0(lVar12 + 0x50 + lVar8,param_1,uVar14,local_148 + 3);
        local_148[2] = iVar6 + 1;
      }
    }
    *(ulonglong *)(lVar8 + 0x18) = CONCAT44(uVar15,uVar14);
  }
  return;
}


