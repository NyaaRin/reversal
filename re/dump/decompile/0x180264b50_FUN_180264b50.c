// 0x180264b50  FUN_180264b50
// size=238 thunk=false
// signature: undefined FUN_180264b50()
// status: ok


undefined8 * FUN_180264b50(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 0xc) {
    uVar1 = param_1[2];
    param_1[2] = 0;
    uVar2 = param_1[1];
    param_1[1] = 0;
    uVar3 = *param_1;
    *param_1 = 0;
    *param_3 = uVar3;
    param_3[1] = uVar2;
    param_3[2] = uVar1;
    param_3[3] = param_1[3];
    *(undefined1 *)(param_3 + 4) = *(undefined1 *)(param_1 + 4);
    *(undefined1 *)((longlong)param_3 + 0x21) = *(undefined1 *)((longlong)param_1 + 0x21);
    *(undefined1 *)((longlong)param_3 + 0x22) = *(undefined1 *)((longlong)param_1 + 0x22);
    *(undefined1 *)((longlong)param_3 + 0x23) = *(undefined1 *)((longlong)param_1 + 0x23);
    param_3[5] = param_1[5];
    param_3[6] = param_1[6];
    param_3[7] = param_1[7];
    param_3[8] = 0;
    param_3[9] = 0;
    param_3[8] = param_1[8];
    param_3[9] = param_1[9];
    param_1[8] = 0;
    param_1[9] = 0;
    param_3[10] = param_1[10];
    param_3[0xb] = param_1[0xb];
    param_3 = param_3 + 0xc;
  }
  return param_3;
}


