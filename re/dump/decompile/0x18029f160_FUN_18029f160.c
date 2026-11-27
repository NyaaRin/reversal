// 0x18029f160  FUN_18029f160
// size=486 thunk=false
// signature: undefined FUN_18029f160()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18029f160(longlong param_1,undefined8 param_2,uint param_3,int param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_res8;
  float fStackX_c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  
  fVar1 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x20);
  fVar3 = fVar1 * DAT_180380ac0;
  fVar1 = fVar1 * DAT_180380a94 * param_5;
  fVar4 = fVar3 + (float)param_2;
  fStackX_c = (float)((ulonglong)param_2 >> 0x20);
  fStackX_c = fVar3 * param_5 + fStackX_c;
  if (param_4 == 0) {
    fVar1 = (float)((uint)fVar1 ^ DAT_1803817f0);
  }
  else if (param_4 != 1) {
    if ((param_4 == 2) || (param_4 == 3)) {
      if (param_4 == 2) {
        fVar1 = (float)((uint)fVar1 ^ DAT_1803817f0);
      }
      local_3c = fVar1 * DAT_180381368;
      fVar3 = fVar1 * DAT_180380b20;
      local_48 = fVar1 * _DAT_180381378;
      fVar2 = fVar1 * 0.0;
      local_44 = local_3c;
      local_40 = fVar1 * _DAT_180380b54;
    }
    else {
      fVar3 = 0.0;
      local_48 = 0.0;
      local_3c = 0.0;
      fVar2 = 0.0;
      local_44 = 0.0;
      local_40 = 0.0;
    }
    goto LAB_18029f280;
  }
  local_48 = fVar1 * DAT_180381368;
  fVar2 = fVar1 * DAT_180380b20;
  local_44 = fVar1 * _DAT_180380b54;
  local_3c = fVar1 * _DAT_180381378;
  fVar3 = fVar1 * 0.0;
  local_40 = local_48;
LAB_18029f280:
  local_40 = fVar4 + local_40;
  local_3c = fStackX_c + local_3c;
  local_44 = fStackX_c + local_44;
  local_48 = fVar4 + local_48;
  _local_res8 = CONCAT44(fStackX_c + fVar3,fVar4 + fVar2);
  if ((param_3 & 0xff000000) != 0) {
    FUN_18020dc30(param_1 + 0x50,&local_res8);
    FUN_18020dc30(param_1 + 0x50,&local_48);
    FUN_18020dc30(param_1 + 0x50,&local_40);
    FUN_1802938c0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_3);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}


