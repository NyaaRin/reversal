// 0x180110320  FUN_180110320
// size=119 thunk=false
// signature: undefined FUN_180110320()
// status: ok


int FUN_180110320(void)

{
  undefined8 uVar1;
  int *piVar2;
  int *piVar3;
  int local_res8 [8];
  
  local_res8[0] = 0;
  uVar1 = FUN_180241610(&DAT_1803fadf0,0x93fd561a96ab0c67);
  uVar1 = FUN_180241610(uVar1,0x2ea97143df721d4c);
  piVar2 = (int *)FUN_1802029c0(uVar1);
  local_res8[0] = *piVar2;
  local_res8[4] = 1;
  local_res8[2] = 0;
  piVar2 = local_res8 + 2;
  if (-1 < local_res8[0]) {
    piVar2 = local_res8;
  }
  piVar3 = local_res8 + 4;
  if (local_res8[0] < 2) {
    piVar3 = piVar2;
  }
  return *piVar3;
}


