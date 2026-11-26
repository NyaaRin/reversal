// 0x1802b4dc0  FUN_1802b4dc0
// size=110 thunk=false
// signature: undefined FUN_1802b4dc0()
// status: ok


void FUN_1802b4dc0(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int local_res8 [2];
  undefined1 local_38 [12];
  undefined4 local_2c;
  
  if (*(char *)((longlong)param_2 + 0x17) != '\0') {
    FUN_1802b4230(local_38,param_1,0);
    param_4 = local_2c;
  }
  uVar1 = FUN_1802b4af0(param_1,param_3,param_4,local_res8);
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  *(undefined1 *)((longlong)param_2 + 0x16) = 0;
  *(bool *)(param_1 + 0x76) = local_res8[0] != 0;
  return;
}


