// 0x1800ae8c0  Features_Autowall_ArcCWAutowall_vfunc11
// size=842 thunk=false
// signature: undefined Features_Autowall_ArcCWAutowall_vfunc11()
// status: ok


undefined1 *
Features_Autowall_ArcCWAutowall_vfunc11
          (longlong *param_1,undefined1 *param_2,longlong param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_100;
  float local_f8;
  float local_f0;
  longlong local_e8;
  undefined1 *local_e0;
  longlong *local_d8;
  undefined4 *local_c0;
  float *local_b8;
  float *local_b0;
  float *local_a8;
  
  *param_2 = 0;
  puVar1 = (undefined4 *)(param_2 + 4);
  iVar9 = 0;
  *puVar1 = 0;
  local_c0 = (undefined4 *)(param_2 + 8);
  *local_c0 = 0;
  local_b8 = (float *)(param_2 + 0xc);
  *local_b8 = 0.0;
  local_a8 = (float *)(param_2 + 0x10);
  *local_a8 = 0.0;
  local_b0 = (float *)(param_2 + 0x14);
  *local_b0 = 0.0;
  *(undefined4 *)(param_2 + 0x18) = 0xbf800000;
  local_100 = puVar1;
  local_e8 = param_3;
  local_e0 = param_2;
  local_d8 = param_1;
  cVar5 = (**(code **)(*param_1 + 0x20))();
  if (cVar5 != '\0') {
    uVar6 = FUN_1800aa2b0(param_3);
    fVar11 = DAT_180380c50;
    fVar12 = DAT_180380bb0;
    switch(uVar6) {
    default:
      fVar13 = DAT_180380bb0;
      break;
    case 0x43:
    case 0x56:
    case 0x58:
      fVar13 = DAT_180380b20;
      break;
    case 0x44:
    case 0x4c:
    case 0x4f:
    case 0x54:
    case 0x55:
    case 0x57:
      fVar13 = DAT_180380ac0;
      break;
    case 0x46:
      fVar13 = DAT_1803809ec;
      break;
    case 0x48:
    case 0x4a:
    case 0x4e:
    case 0x50:
      fVar13 = DAT_180380a58;
      break;
    case 0x49:
      fVar13 = DAT_180381278;
      break;
    case 0x4d:
      fVar13 = DAT_180380c50;
      break;
    case 0x59:
      fVar13 = DAT_1803809a8;
    }
    fVar14 = fVar13;
    local_f0 = fVar13;
    if (((*(longlong **)(param_3 + 0x58) == (longlong *)0x0) ||
        (plVar8 = (longlong *)(**(code **)(**(longlong **)(param_3 + 0x58) + 0x20))(),
        plVar8 == (longlong *)0x0)) || (iVar7 = (**(code **)(*plVar8 + 0x48))(plVar8), iVar7 < 1)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    fVar4 = DAT_180380e9c;
    fVar3 = DAT_180380bc0;
    if (!bVar2) {
      fVar13 = fVar13 * fVar11;
    }
    if ((0.0 < fVar13) && (fVar13 < DAT_180381120)) {
      fVar11 = *(float *)(param_3 + 0x78);
      local_100 = *(undefined4 **)(param_3 + 0xc);
      local_f8 = *(float *)(param_3 + 0x14);
      while( true ) {
        fVar10 = *(float *)(param_3 + 0x68) * fVar4 + (float)local_100;
        local_100._4_4_ = *(float *)(param_3 + 0x6c) * fVar4 + local_100._4_4_;
        local_f8 = *(float *)(param_3 + 0x70) * fVar4 + local_f8;
        local_100 = (undefined4 *)CONCAT44(local_100._4_4_,fVar10);
        if (((uint)fVar10 & 0x7f800000) == 0x7f800000) {
          return param_2;
        }
        if (((uint)local_100._4_4_ & 0x7f800000) == 0x7f800000) {
          return param_2;
        }
        if (((uint)local_f8 & 0x7f800000) == 0x7f800000) {
          return param_2;
        }
        fVar11 = fVar11 - fVar13 * fVar4 * fVar12;
        if (fVar11 <= 0.0) {
          return param_2;
        }
        cVar5 = FUN_1800abd90(&local_100,*(undefined8 *)(param_3 + 0x88),0x46004003,param_4,fVar14);
        if (cVar5 == '\0') break;
        iVar9 = iVar9 + 1;
        if (0x18 < iVar9) {
          return param_2;
        }
        fVar12 = fVar12 * fVar3;
      }
      *param_2 = 1;
      *puVar1 = (float)local_100;
      *local_c0 = local_100._4_4_;
      *local_b8 = local_f8;
      *local_b0 = fVar11;
      *local_a8 = (fVar11 / *(float *)(param_1 + 1)) * *(float *)((longlong)param_1 + 0xc);
    }
  }
  return param_2;
}


