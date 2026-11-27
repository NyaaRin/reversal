// 0x1800ad020  FUN_1800ad020
// size=106 thunk=false
// signature: undefined FUN_1800ad020()
// status: ok


int FUN_1800ad020(void)

{
  undefined8 uVar1;
  int *piVar2;
  int local_res8 [2];
  int local_res10 [6];
  
  uVar1 = FUN_180241610(&DAT_1803fadf0,0xf7521f28977a3033);
  uVar1 = FUN_180241610(uVar1,0xe7e1311753777c16);
  piVar2 = (int *)FUN_1802029c0(uVar1);
  local_res10[0] = *piVar2;
  local_res8[0] = 1;
  piVar2 = local_res8;
  if (0 < local_res10[0]) {
    piVar2 = local_res10;
  }
  if (4 < local_res10[0]) {
    piVar2 = &DAT_18033c6a0;
  }
  return *piVar2;
}


