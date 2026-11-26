// 0x1800b02f0  Features_Autowall_TFAAutowall_vfunc11
// size=494 thunk=false
// signature: undefined Features_Autowall_TFAAutowall_vfunc11()
// status: ok


undefined1 *
Features_Autowall_TFAAutowall_vfunc11(longlong *param_1,undefined1 *param_2,longlong param_3)

{
  float *pfVar1;
  float fVar2;
  char cVar3;
  undefined4 uVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float local_58;
  float local_54;
  float local_50 [2];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  
  *param_2 = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0xbf800000;
  cVar3 = (**(code **)(*param_1 + 0x20))();
  if (cVar3 != '\0') {
    uVar4 = FUN_1800aa2b0(param_3);
    switch(uVar4) {
    case 0x43:
      fVar7 = DAT_180380b60;
      break;
    case 0x44:
      fVar7 = DAT_180380b74;
      break;
    default:
      fVar7 = DAT_180380bb0;
      break;
    case 0x46:
      fVar7 = DAT_180380ab8;
      break;
    case 0x4c:
      fVar7 = DAT_180380a44;
      break;
    case 0x4d:
      fVar7 = DAT_180380ae4;
      break;
    case 0x4f:
      fVar7 = DAT_180380b68;
      break;
    case 0x56:
      fVar7 = DAT_180380a94;
      break;
    case 0x57:
      fVar7 = DAT_180380a3c;
      break;
    case 0x59:
      fVar7 = DAT_180380a20;
    }
    fVar7 = fVar7 * *(float *)(param_1 + 3);
    if (0.0 < fVar7) {
      pfVar1 = (float *)((longlong)param_1 + 0x1c);
      local_50[0] = *(float *)(param_3 + 0x78) / fVar7;
      local_54 = 0.0;
      pfVar5 = &local_54;
      if (0.0 <= local_50[0]) {
        pfVar5 = local_50;
      }
      if (*pfVar1 <= local_50[0] && local_50[0] != *pfVar1) {
        pfVar5 = pfVar1;
      }
      fVar2 = *pfVar5;
      if (0.0 < fVar2) {
        fVar6 = DAT_1803812a4;
        if (fVar2 <= DAT_1803812a4) {
          fVar6 = fVar2;
        }
        local_58 = 0.0;
        cVar3 = FUN_1800acb50(param_3 + 0xc,param_3 + 0x68,DAT_180380e9c,fVar6,&local_48,&local_58,
                              *(undefined8 *)(param_3 + 0x88),0x46004003);
        if ((cVar3 != '\0') &&
           (fVar7 = *(float *)(param_3 + 0x78) - (local_58 + DAT_180380d30) * fVar7, 0.0 < fVar7)) {
          *(undefined4 *)(param_2 + 4) = local_48;
          *(undefined4 *)(param_2 + 0xc) = local_40;
          *(undefined4 *)(param_2 + 8) = local_44;
          *(float *)(param_2 + 0x14) = fVar7;
          *param_2 = 1;
          if (*(float *)((longlong)param_1 + 0xc) <= 0.0) {
            fVar7 = 0.0;
          }
          else {
            fVar7 = (fVar7 / *(float *)((longlong)param_1 + 0xc)) * *(float *)(param_1 + 2);
          }
          *(float *)(param_2 + 0x10) = fVar7;
        }
      }
    }
  }
  return param_2;
}


