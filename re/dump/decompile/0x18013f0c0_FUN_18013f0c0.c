// 0x18013f0c0  FUN_18013f0c0
// size=105 thunk=false
// signature: undefined FUN_18013f0c0()
// status: ok


int FUN_18013f0c0(void)

{
  undefined8 uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int local_res8 [2];
  int local_res10 [6];
  
  local_res10[0] = 0xf;
  local_res8[0] = 1;
  uVar1 = FUN_180241610(&DAT_1803fadf0,0x93fd561a96ab0c67);
  uVar1 = FUN_180241610(uVar1,0xb3bc1c7136473c92);
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


