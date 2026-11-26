// 0x1800af2c0  Features_Autowall_TacRPAutowall_vfunc11
// size=1034 thunk=false
// signature: undefined Features_Autowall_TacRPAutowall_vfunc11()
// status: ok


undefined1 *
Features_Autowall_TacRPAutowall_vfunc11(longlong *param_1,undefined1 *param_2,longlong param_3)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  longlong *plVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_158;
  char local_154;
  undefined8 local_150;
  float local_148;
  float local_140;
  float local_13c;
  float local_138 [4];
  undefined1 *local_128;
  longlong *local_120;
  longlong local_118;
  undefined1 *local_110;
  longlong *local_100;
  undefined1 *local_f8;
  undefined4 *local_e8;
  undefined4 *local_e0;
  float *local_d8;
  float *local_d0;
  float *local_c8;
  
  *param_2 = 0;
  puVar1 = (undefined4 *)(param_2 + 4);
  iVar12 = 0;
  *puVar1 = 0;
  local_e0 = (undefined4 *)(param_2 + 8);
  *local_e0 = 0;
  local_d8 = (float *)(param_2 + 0xc);
  *local_d8 = 0.0;
  local_c8 = (float *)(param_2 + 0x10);
  *local_c8 = 0.0;
  local_d0 = (float *)(param_2 + 0x14);
  *local_d0 = 0.0;
  *(undefined4 *)(param_2 + 0x18) = 0xbf800000;
  local_128 = param_2;
  local_120 = param_1;
  local_118 = param_3;
  local_110 = param_2;
  local_100 = param_1;
  local_f8 = param_2;
  local_e8 = puVar1;
  cVar6 = (**(code **)(*param_1 + 0x20))();
  if (cVar6 != '\0') {
    uVar7 = FUN_1800aa2b0(param_3);
    fVar2 = DAT_180380d30;
    fVar5 = DAT_180380bb0;
    fVar4 = DAT_180380ac0;
    fVar3 = DAT_180380a58;
    switch(uVar7) {
    case 0x41:
    case 0x42:
    case 0x46:
    case 0x4a:
    case 0x56:
    case 0x59:
      fVar15 = DAT_1803809ec;
      break;
    case 0x43:
    case 0x4e:
    case 0x54:
      fVar15 = DAT_180380ac0;
      break;
    case 0x44:
    case 0x45:
    case 0x47:
    case 0x48:
    case 0x4c:
    case 0x4f:
    case 0x50:
    case 0x53:
    case 0x55:
    case 0x57:
    case 0x58:
      fVar15 = DAT_180380a58;
      break;
    case 0x49:
      goto switchD_1800af3b6_caseD_49;
    default:
      fVar15 = DAT_180380bb0;
    }
    local_158 = fVar15;
    pfVar11 = (float *)(param_3 + 0x78);
    fVar13 = fVar15 * *pfVar11 * DAT_180380ac0;
    fVar16 = DAT_180380d30;
    if (DAT_180380d30 <= fVar13) {
      fVar16 = fVar13;
    }
    local_140 = fVar16;
    local_13c = fVar15;
    local_154 = 1;
    if (((*(longlong **)(param_3 + 0x58) == (longlong *)0x0) ||
        (local_150 = pfVar11,
        plVar9 = (longlong *)(**(code **)(**(longlong **)(param_3 + 0x58) + 0x20))(),
        plVar9 == (longlong *)0x0)) || (iVar8 = (**(code **)(*plVar9 + 0x48))(plVar9), iVar8 < 1)) {
      local_154 = '\x01';
    }
    else {
      local_154 = '\0';
    }
    if (local_154 == '\0') {
      fVar15 = fVar15 * fVar4;
    }
    fVar15 = fVar15 * fVar16;
    if (0.0 < fVar15) {
      fVar13 = *pfVar11;
      local_150 = (float *)*(undefined8 *)(param_3 + 0xc);
      local_148 = *(float *)(param_3 + 0x14);
      local_138[2] = 32.0;
      local_138[0] = 1.0;
      local_138[1] = fVar13 / fVar15 + fVar2;
      pfVar11 = local_138;
      if (fVar5 <= local_138[1]) {
        pfVar11 = local_138 + 1;
      }
      pfVar10 = local_138 + 2;
      if (local_138[1] <= DAT_180381070) {
        pfVar10 = pfVar11;
      }
      fVar2 = *pfVar10;
      if (0 < (int)fVar2) {
        do {
          fVar14 = fVar16 * *(float *)(param_3 + 0x68) + (float)local_150;
          local_150._4_4_ = fVar16 * *(float *)(param_3 + 0x6c) + local_150._4_4_;
          local_148 = fVar16 * *(float *)(param_3 + 0x70) + local_148;
          local_150 = (float *)CONCAT44(local_150._4_4_,fVar14);
          if (((uint)fVar14 & 0x7f800000) == 0x7f800000) {
            return param_2;
          }
          if (((uint)local_150._4_4_ & 0x7f800000) == 0x7f800000) {
            return param_2;
          }
          if (((uint)local_148 & 0x7f800000) == 0x7f800000) {
            return param_2;
          }
          fVar13 = fVar13 - fVar15;
          if (fVar13 <= 0.0) {
            return param_2;
          }
          cVar6 = FUN_1800abd90(&local_150,*(undefined8 *)(param_3 + 0x88),0x46004003);
          if (cVar6 == '\0') {
            *local_128 = 1;
            *puVar1 = (float)local_150;
            *local_e0 = local_150._4_4_;
            *local_d8 = local_148;
            *local_d0 = fVar13;
            local_158 = 0.5;
            local_13c = 0.25;
            local_140 = *(float *)(local_120 + 1) * DAT_1803809a0;
            pfVar11 = &local_13c;
            if (fVar3 <= local_140) {
              pfVar11 = &local_140;
            }
            pfVar10 = &local_158;
            if (local_140 <= fVar4) {
              pfVar10 = pfVar11;
            }
            *local_c8 = ((fVar13 / *(float *)(local_120 + 1)) * (fVar5 - *pfVar10) + *pfVar10) *
                        *(float *)((longlong)local_120 + 0xc);
            return param_2;
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < (int)fVar2);
      }
    }
  }
switchD_1800af3b6_caseD_49:
  return param_2;
}


