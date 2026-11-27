// 0x1800b3420  FUN_1800b3420
// size=790 thunk=false
// signature: undefined FUN_1800b3420()
// status: ok


void FUN_1800b3420(float *param_1,float param_2,float param_3,float param_4,undefined4 param_5,
                  undefined8 param_6,longlong param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  float fVar9;
  undefined2 local_7e;
  
  fVar1 = DAT_180380bb0;
  if (*(char *)(param_1 + 0x12) != '\0') {
    if ((int)param_3 < 1) {
      return;
    }
    if ((int)param_3 < 0x19) {
      param_1[0x16] = param_3;
      fVar4 = DAT_180381414;
      fVar3 = DAT_180381188;
      fVar2 = DAT_18038110c;
      uVar8 = 0;
      *(bool *)((longlong)param_1 + 0x61) = param_7 != 0;
      *(undefined8 *)(param_1 + 0x14) = param_6;
      param_1[0x17] = param_4;
      *(bool *)(param_1 + 0x18) = fVar1 < param_4;
      do {
        uVar6 = 0;
        iVar7 = (int)uVar8;
        if (0 < (int)param_3 + -1) {
          do {
            fVar9 = param_2;
            if (iVar7 == 5) {
              if (param_7 != 0) {
                fVar9 = *(float *)(param_7 + uVar6 * 4);
              }
            }
            else if (iVar7 != 0) {
              if (iVar7 == 1) {
                fVar9 = (float)FUN_1800b1d70(param_2 + fVar3);
              }
              else if (iVar7 == 2) {
                fVar9 = (float)FUN_1800b1d70(param_2 + fVar2);
              }
              else if (iVar7 == 3) {
                fVar9 = (float)FUN_1800b1d70(param_2 - fVar2);
              }
              else if (iVar7 == 4) {
                if ((uVar6 & 1) == 0) {
                  fVar9 = (float)FUN_1800b1d70(fVar4 + param_2);
                }
                else {
                  fVar9 = (float)FUN_1800b1d70(fVar2 + param_2);
                }
              }
            }
            FUN_1800b1de0(param_1 + uVar8 * 3,fVar9,param_4,param_5);
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
          } while ((int)uVar5 < (int)param_3 + -1);
        }
        FUN_1800b1de0(param_1 + uVar8 * 3,param_2,param_4,param_5);
        uVar8 = (ulonglong)(iVar7 + 1U);
      } while ((int)(iVar7 + 1U) < 6);
      if (param_4 <= fVar1) {
        return;
      }
      *(undefined8 *)(param_1 + 3) = *(undefined8 *)param_1;
      param_1[5] = param_1[2];
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)param_1;
      param_1[8] = param_1[2];
      *(undefined8 *)(param_1 + 9) = *(undefined8 *)param_1;
      param_1[0xb] = param_1[2];
      *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)param_1;
      param_1[0xe] = param_1[2];
      *(undefined8 *)(param_1 + 0xf) = *(undefined8 *)param_1;
      param_1[0x11] = param_1[2];
      return;
    }
  }
  *(undefined2 *)(param_1 + 2) = 1;
  *(undefined2 *)((longlong)param_1 + 10) = local_7e;
  *param_1 = param_2;
  param_1[1] = param_2;
  *(undefined2 *)(param_1 + 5) = 1;
  *(undefined2 *)((longlong)param_1 + 0x16) = local_7e;
  param_1[3] = param_2;
  param_1[4] = param_2;
  *(undefined2 *)(param_1 + 8) = 1;
  *(undefined2 *)((longlong)param_1 + 0x22) = local_7e;
  param_1[6] = param_2;
  param_1[7] = param_2;
  *(undefined2 *)(param_1 + 0xb) = 1;
  *(undefined2 *)((longlong)param_1 + 0x2e) = local_7e;
  param_1[9] = param_2;
  param_1[10] = param_2;
  *(undefined2 *)(param_1 + 0xe) = 1;
  *(undefined2 *)((longlong)param_1 + 0x3a) = local_7e;
  param_1[0xc] = param_2;
  param_1[0xd] = param_2;
  *(undefined2 *)(param_1 + 0x11) = 1;
  *(undefined2 *)((longlong)param_1 + 0x46) = local_7e;
  param_1[0xf] = param_2;
  param_1[0x10] = param_2;
  *(undefined8 *)(param_1 + 0x14) = param_6;
  *(undefined1 *)(param_1 + 0x12) = 1;
  param_1[0x16] = 0.0;
  param_1[0x17] = 0.0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}


