// 0x1800c62d0  FUN_1800c62d0
// size=119 thunk=false
// signature: undefined FUN_1800c62d0()
// status: ok


int FUN_1800c62d0(void)

{
  undefined8 uVar1;
  int *piVar2;
  int *piVar3;
  int local_res8 [8];
  
  local_res8[0] = 1;
  uVar1 = FUN_180241610(&DAT_1803fadf0,0x13806d9e35de0023);
  uVar1 = FUN_180241610(uVar1,0x28d1724205c8b8ad);
  piVar2 = (int *)FUN_1802029c0(uVar1);
  local_res8[0] = *piVar2;
  local_res8[4] = 2;
  local_res8[2] = 0;
  piVar2 = local_res8 + 2;
  if (-1 < local_res8[0]) {
    piVar2 = local_res8;
  }
  piVar3 = local_res8 + 4;
  if (local_res8[0] < 3) {
    piVar3 = piVar2;
  }
  return *piVar3;
}


