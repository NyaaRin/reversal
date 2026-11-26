// 0x1800b1360  Features_Autowall_HomigradAutowall_vfunc11
// size=785 thunk=false
// signature: undefined Features_Autowall_HomigradAutowall_vfunc11()
// status: ok


undefined1 *
Features_Autowall_HomigradAutowall_vfunc11(longlong *param_1,undefined1 *param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  char cVar3;
  undefined4 uVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_58 [2];
  undefined8 local_50;
  float local_48;
  float local_40 [10];
  
  *param_2 = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xbf800000;
  local_50 = param_2;
  cVar3 = (**(code **)(*param_1 + 0x20))();
  if ((cVar3 != '\0') &&
     ((*(longlong **)(param_3 + 0x58) == (longlong *)0x0 ||
      (cVar3 = (**(code **)(**(longlong **)(param_3 + 0x58) + 0x550))(), cVar3 == '\0')))) {
    uVar4 = FUN_1800aa2b0(param_3);
    fVar9 = DAT_180380bb0;
    switch(uVar4) {
    case 0x43:
    case 0x44:
    case 0x47:
    case 0x50:
    case 0x56:
      fVar8 = DAT_180380b68;
      break;
    default:
      fVar8 = DAT_180380ac0;
      break;
    case 0x48:
    case 0x4c:
      fVar8 = DAT_180380a6c;
      break;
    case 0x4a:
    case 0x4e:
      fVar8 = DAT_1803809ec;
      break;
    case 0x4d:
      fVar8 = DAT_180380bb0;
      break;
    case 0x53:
      fVar8 = DAT_1803809c4;
      break;
    case 0x54:
      fVar8 = DAT_180380b3c;
      break;
    case 0x55:
      fVar8 = DAT_180380a3c;
      break;
    case 0x59:
      fVar8 = DAT_180380ae4;
    }
    fVar7 = *(float *)(param_3 + 0x18);
    if ((((((uint)fVar7 & 0x7f800000) != 0x7f800000) &&
         (fVar1 = *(float *)(param_3 + 0x1c), ((uint)fVar1 & 0x7f800000) != 0x7f800000)) &&
        (fVar2 = *(float *)(param_3 + 0x20), ((uint)fVar2 & 0x7f800000) != 0x7f800000)) &&
       (DAT_180380938 < fVar1 * fVar1 + fVar7 * fVar7 + fVar2 * fVar2)) {
      local_40[0] = fVar1 * *(float *)(param_3 + 0x6c) + fVar7 * *(float *)(param_3 + 0x68) +
                    fVar2 * *(float *)(param_3 + 0x70);
      local_50._0_4_ = 1.0;
      local_58[0] = -1.0;
      pfVar6 = local_58;
      if (DAT_180381384 <= local_40[0]) {
        pfVar6 = local_40;
      }
      pfVar5 = (float *)&local_50;
      if (local_40[0] <= DAT_180380bb0) {
        pfVar5 = pfVar6;
      }
      fVar7 = asinf(*pfVar5);
      fVar7 = (float)((uint)fVar7 ^ DAT_1803817f0) * DAT_1803810c0;
      if (!NAN(fVar7)) {
        if (DAT_18042398c != '\0') {
          fVar9 = 0.0;
        }
        if (fVar8 * DAT_1803810c8 * fVar9 < fVar7) {
          fVar8 = ((*(float *)(param_3 + 0x78) * DAT_180380e28) / fVar8) * DAT_180380a94;
          fVar9 = DAT_180381120;
          if (fVar8 <= DAT_180381120) {
            fVar9 = fVar8;
          }
          if (DAT_180380f00 < fVar9) {
            local_58[0] = 0.0;
            cVar3 = FUN_1800acb50(param_3 + 0xc,param_3 + 0x68,DAT_180380f00,fVar9,&local_50,
                                  local_58,*(undefined8 *)(param_3 + 0x88),0x200400b);
            if ((cVar3 != '\0') &&
               (fVar9 = *(float *)(param_3 + 0x78) -
                        (local_58[0] / fVar9) * *(float *)(param_3 + 0x78), DAT_180380fa8 <= fVar9))
            {
              *(float *)(param_1 + 1) = fVar9;
              *param_2 = 1;
              fVar8 = *(float *)(param_3 + 0x6c);
              fVar7 = *(float *)(param_3 + 0x70);
              *(float *)(param_2 + 4) = (float)local_50 + *(float *)(param_3 + 0x68);
              *(float *)(param_2 + 8) = local_50._4_4_ + fVar8;
              *(float *)(param_2 + 0xc) = local_48 + fVar7;
              *(float *)(param_2 + 0x14) = fVar9;
              *(float *)(param_2 + 0x10) = *(float *)(param_3 + 0x74) * DAT_180380afc;
            }
          }
        }
      }
    }
  }
  return param_2;
}


