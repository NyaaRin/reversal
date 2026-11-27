// 0x180229020  FUN_180229020
// size=170 thunk=false
// signature: undefined FUN_180229020()
// status: ok


undefined4 * FUN_180229020(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_1 != param_2) {
    puVar4 = (undefined8 *)(param_1 + 2);
    do {
      *param_3 = *param_1;
      *(undefined1 *)(param_3 + 1) = *(undefined1 *)(param_1 + 1);
      *(undefined1 *)((longlong)param_3 + 5) = *(undefined1 *)((longlong)param_1 + 5);
      uVar1 = puVar4[2];
      puVar4[2] = 0;
      uVar2 = puVar4[1];
      puVar4[1] = 0;
      uVar3 = *puVar4;
      *puVar4 = 0;
      *(undefined8 *)(param_3 + 2) = uVar3;
      *(undefined8 *)(param_3 + 4) = uVar2;
      *(undefined8 *)(param_3 + 6) = uVar1;
      param_3 = param_3 + 8;
      param_1 = param_1 + 8;
      puVar4 = puVar4 + 4;
    } while (param_1 != param_2);
  }
  return param_3;
}


