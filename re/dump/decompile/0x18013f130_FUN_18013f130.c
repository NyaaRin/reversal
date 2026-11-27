// 0x18013f130  FUN_18013f130
// size=105 thunk=false
// signature: undefined FUN_18013f130()
// status: ok


int FUN_18013f130(void)

{
  undefined8 uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int local_res8 [2];
  int local_res10 [6];
  
  local_res10[0] = 100;
  local_res8[0] = 0;
  uVar1 = FUN_180241610(&DAT_1803fadf0,0x93fd561a96ab0c67);
  uVar1 = FUN_180241610(uVar1,0x8161971dee9d0cf8);
  piVar2 = (int *)FUN_1802029c0(uVar1);
  piVar4 = local_res8;
  if (local_res8[0] <= *piVar2) {
    piVar4 = piVar2;
  }
  piVar3 = local_res10;
  if (*piVar2 <= local_res10[0]) {
    piVar3 = piVar4;
  }
  return *piVar3;
}


