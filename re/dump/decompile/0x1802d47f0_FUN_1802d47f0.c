// 0x1802d47f0  FUN_1802d47f0
// size=1119 thunk=false
// signature: undefined FUN_1802d47f0()
// status: ok


void FUN_1802d47f0(float *param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  pfVar1 = (float *)&local_88;
  if (param_1 != param_3) {
    pfVar1 = param_1;
  }
  pfVar2 = (float *)&local_48;
  if (param_2 != param_3) {
    pfVar2 = param_2;
  }
  if ((param_1 == param_3) && (param_1 != (float *)&local_88)) {
    local_88 = *(undefined8 *)param_1;
    uStack_80 = *(undefined8 *)(param_1 + 2);
    local_78 = *(undefined8 *)(param_1 + 4);
    uStack_70 = *(undefined8 *)(param_1 + 6);
    local_68 = *(undefined8 *)(param_1 + 8);
    uStack_60 = *(undefined8 *)(param_1 + 10);
    local_58 = *(undefined8 *)(param_1 + 0xc);
    uStack_50 = *(undefined8 *)(param_1 + 0xe);
  }
  if ((param_2 == param_3) && (param_2 != (float *)&local_48)) {
    local_48 = *(undefined8 *)param_2;
    uStack_40 = *(undefined8 *)(param_2 + 2);
    local_38 = *(undefined8 *)(param_2 + 4);
    uStack_30 = *(undefined8 *)(param_2 + 6);
    local_28 = *(undefined8 *)(param_2 + 8);
    uStack_20 = *(undefined8 *)(param_2 + 10);
    local_18 = *(undefined8 *)(param_2 + 0xc);
    uStack_10 = *(undefined8 *)(param_2 + 0xe);
  }
  *param_3 = pfVar2[4] * pfVar1[1] + *pfVar2 * *pfVar1 + pfVar1[2] * pfVar2[8] +
             pfVar2[0xc] * pfVar1[3];
  param_3[1] = pfVar2[1] * *pfVar1 + pfVar2[5] * pfVar1[1] + pfVar1[2] * pfVar2[9] +
               pfVar2[0xd] * pfVar1[3];
  param_3[2] = pfVar2[6] * pfVar1[1] + pfVar2[2] * *pfVar1 + pfVar1[2] * pfVar2[10] +
               pfVar2[0xe] * pfVar1[3];
  param_3[3] = pfVar2[3] * *pfVar1 + pfVar1[1] * pfVar2[7] + pfVar1[2] * pfVar2[0xb] +
               pfVar2[0xf] * pfVar1[3];
  param_3[4] = pfVar2[4] * pfVar1[5] + pfVar1[4] * *pfVar2 + pfVar1[6] * pfVar2[8] +
               pfVar2[0xc] * pfVar1[7];
  param_3[5] = pfVar1[5] * pfVar2[5] + pfVar1[4] * pfVar2[1] + pfVar1[6] * pfVar2[9] +
               pfVar2[0xd] * pfVar1[7];
  param_3[6] = pfVar1[4] * pfVar2[2] + pfVar1[5] * pfVar2[6] + pfVar1[6] * pfVar2[10] +
               pfVar2[0xe] * pfVar1[7];
  param_3[7] = pfVar1[5] * pfVar2[7] + pfVar2[3] * pfVar1[4] + pfVar1[6] * pfVar2[0xb] +
               pfVar2[0xf] * pfVar1[7];
  param_3[8] = pfVar1[9] * pfVar2[4] + pfVar1[8] * *pfVar2 + pfVar1[10] * pfVar2[8] +
               pfVar2[0xc] * pfVar1[0xb];
  param_3[9] = pfVar1[9] * pfVar2[5] + pfVar1[8] * pfVar2[1] + pfVar1[10] * pfVar2[9] +
               pfVar2[0xd] * pfVar1[0xb];
  param_3[10] = pfVar1[8] * pfVar2[2] + pfVar1[9] * pfVar2[6] + pfVar1[10] * pfVar2[10] +
                pfVar2[0xe] * pfVar1[0xb];
  param_3[0xb] = pfVar1[9] * pfVar2[7] + pfVar2[3] * pfVar1[8] + pfVar1[10] * pfVar2[0xb] +
                 pfVar2[0xf] * pfVar1[0xb];
  param_3[0xc] = pfVar1[0xd] * pfVar2[4] + pfVar1[0xc] * *pfVar2 + pfVar1[0xe] * pfVar2[8] +
                 pfVar2[0xc] * pfVar1[0xf];
  param_3[0xd] = pfVar1[0xd] * pfVar2[5] + pfVar1[0xc] * pfVar2[1] + pfVar1[0xe] * pfVar2[9] +
                 pfVar2[0xd] * pfVar1[0xf];
  param_3[0xe] = pfVar1[0xc] * pfVar2[2] + pfVar1[0xd] * pfVar2[6] + pfVar1[0xe] * pfVar2[10] +
                 pfVar2[0xe] * pfVar1[0xf];
  param_3[0xf] = pfVar1[0xd] * pfVar2[7] + pfVar2[3] * pfVar1[0xc] + pfVar1[0xe] * pfVar2[0xb] +
                 pfVar2[0xf] * pfVar1[0xf];
  return;
}


