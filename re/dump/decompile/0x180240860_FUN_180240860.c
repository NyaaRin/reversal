// 0x180240860  FUN_180240860
// size=234 thunk=false
// signature: undefined FUN_180240860()
// status: ok


undefined8 * FUN_180240860(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1 != param_2) {
    puVar4 = param_1 + 1;
    puVar5 = param_1 + 5;
    do {
      *param_3 = *param_1;
      uVar1 = puVar4[2];
      puVar4[2] = 0;
      uVar2 = puVar4[1];
      puVar4[1] = 0;
      uVar3 = *puVar4;
      *puVar4 = 0;
      param_3[1] = uVar3;
      param_3[2] = uVar2;
      param_3[3] = uVar1;
      uVar1 = puVar4[3];
      puVar4[3] = 0;
      param_3[4] = uVar1;
      uVar1 = puVar5[2];
      puVar5[2] = 0;
      uVar2 = puVar5[1];
      puVar5[1] = 0;
      uVar3 = *puVar5;
      *puVar5 = 0;
      param_3[5] = uVar3;
      param_3[6] = uVar2;
      param_3[7] = uVar1;
      param_3 = param_3 + 8;
      param_1 = param_1 + 8;
      puVar4 = puVar4 + 8;
      puVar5 = puVar5 + 8;
    } while (param_1 != param_2);
  }
  return param_3;
}


