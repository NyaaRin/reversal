// 0x180113550  FUN_180113550
// size=344 thunk=false
// signature: undefined FUN_180113550()
// status: ok


void FUN_180113550(longlong param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float local_28 [8];
  
  fVar5 = *param_2;
  if (((((uint)fVar5 & 0x7f800000) != 0x7f800000) && (((uint)param_2[1] & 0x7f800000) != 0x7f800000)
      ) && (((uint)param_2[2] & 0x7f800000) != 0x7f800000)) {
    if (*(char *)(param_1 + 0x48) == '\0') {
      *(float *)(param_1 + 0x3c) = fVar5;
      *(float *)(param_1 + 0x40) = param_2[1];
      *(float *)(param_1 + 0x44) = param_2[2];
      *(undefined1 *)(param_1 + 0x48) = 1;
      return;
    }
    if (*(char *)(param_1 + 0x49) != '\0') {
      *(undefined1 *)(param_1 + 0x49) = 0;
      *(float *)(param_1 + 0x3c) = *param_2;
      *(float *)(param_1 + 0x40) = param_2[1];
      *(float *)(param_1 + 0x44) = param_2[2];
      return;
    }
    fVar5 = fVar5 - *(float *)(param_1 + 0x3c);
    fVar3 = (float)FUN_1802d3e00(param_2[1] - *(float *)(param_1 + 0x40));
    if ((fVar5 != 0.0) || (fVar3 != 0.0)) {
      local_28[1] = fVar5 + *(float *)(param_1 + 0x20);
      local_28[2] = 89.0;
      local_28[0] = -89.0;
      pfVar2 = local_28;
      if (DAT_180381410 <= local_28[1]) {
        pfVar2 = local_28 + 1;
      }
      pfVar1 = local_28 + 2;
      if (local_28[1] <= DAT_180381108) {
        pfVar1 = pfVar2;
      }
      *(float *)(param_1 + 0x20) = *pfVar1;
      uVar4 = FUN_1802d3e00(fVar3 + *(float *)(param_1 + 0x24));
      *(undefined4 *)(param_1 + 0x24) = uVar4;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(float *)(param_1 + 0x3c) = *param_2;
      *(float *)(param_1 + 0x40) = param_2[1];
      *(float *)(param_1 + 0x44) = param_2[2];
    }
  }
  return;
}


