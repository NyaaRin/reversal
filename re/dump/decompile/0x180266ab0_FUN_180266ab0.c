// 0x180266ab0  FUN_180266ab0
// size=253 thunk=false
// signature: undefined FUN_180266ab0()
// status: ok


void FUN_180266ab0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  
  bVar10 = (ulonglong)param_2[1] < (ulonglong)param_1[1];
  if (param_2[1] == param_1[1]) {
    bVar10 = (ulonglong)param_2[2] < (ulonglong)param_1[2];
  }
  if (bVar10) {
    uVar1 = param_1[1];
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    uVar6 = param_2[4];
    uVar7 = param_2[5];
    uVar8 = param_2[6];
    uVar9 = param_2[7];
    *param_2 = *param_1;
    param_2[1] = uVar1;
    uVar1 = param_1[3];
    param_2[2] = param_1[2];
    param_2[3] = uVar1;
    uVar1 = param_1[5];
    param_2[4] = param_1[4];
    param_2[5] = uVar1;
    uVar1 = param_1[7];
    param_2[6] = param_1[6];
    param_2[7] = uVar1;
    *param_1 = uVar2;
    param_1[1] = uVar3;
    param_1[2] = uVar4;
    param_1[3] = uVar5;
    param_1[4] = uVar6;
    param_1[5] = uVar7;
    param_1[6] = uVar8;
    param_1[7] = uVar9;
  }
  bVar10 = (ulonglong)param_3[1] < (ulonglong)param_2[1];
  if (param_3[1] == param_2[1]) {
    bVar10 = (ulonglong)param_3[2] < (ulonglong)param_2[2];
  }
  if (bVar10) {
    uVar1 = param_2[1];
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = param_3[4];
    uVar7 = param_3[5];
    uVar8 = param_3[6];
    uVar9 = param_3[7];
    *param_3 = *param_2;
    param_3[1] = uVar1;
    uVar1 = param_2[3];
    param_3[2] = param_2[2];
    param_3[3] = uVar1;
    uVar1 = param_2[5];
    param_3[4] = param_2[4];
    param_3[5] = uVar1;
    uVar1 = param_2[7];
    param_3[6] = param_2[6];
    param_3[7] = uVar1;
    *param_2 = uVar2;
    param_2[1] = uVar3;
    param_2[2] = uVar4;
    param_2[3] = uVar5;
    param_2[4] = uVar6;
    param_2[5] = uVar7;
    param_2[6] = uVar8;
    param_2[7] = uVar9;
    bVar10 = (ulonglong)param_2[1] < (ulonglong)param_1[1];
    if (param_2[1] == param_1[1]) {
      bVar10 = (ulonglong)param_2[2] < (ulonglong)param_1[2];
    }
    if (bVar10) {
      uVar1 = param_1[1];
      *param_2 = *param_1;
      param_2[1] = uVar1;
      uVar1 = param_1[3];
      param_2[2] = param_1[2];
      param_2[3] = uVar1;
      uVar1 = param_1[5];
      param_2[4] = param_1[4];
      param_2[5] = uVar1;
      uVar1 = param_1[7];
      param_2[6] = param_1[6];
      param_2[7] = uVar1;
      *param_1 = uVar2;
      param_1[1] = uVar3;
      param_1[2] = uVar4;
      param_1[3] = uVar5;
      param_1[4] = uVar6;
      param_1[5] = uVar7;
      param_1[6] = uVar8;
      param_1[7] = uVar9;
    }
  }
  return;
}


