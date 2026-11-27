// 0x1800c6170  FUN_1800c6170
// size=120 thunk=false
// signature: undefined FUN_1800c6170()
// status: ok


int FUN_1800c6170(void)

{
  undefined8 uVar1;
  int *piVar2;
  int *piVar3;
  int local_res8 [8];
  
  local_res8[0] = 0x18;
  uVar1 = FUN_180241610(&DAT_1803fadf0,0x13806d9e35de0023);
  uVar1 = FUN_180241610(uVar1,0xfc3bf28ed4bc2e57);
  piVar2 = (int *)FUN_1802029c0(uVar1);
  local_res8[0] = *piVar2;
  local_res8[4] = 0x40;
  local_res8[2] = 1;
  piVar2 = local_res8 + 2;
  if (0 < local_res8[0]) {
    piVar2 = local_res8;
  }
  piVar3 = local_res8 + 4;
  if (local_res8[0] < 0x41) {
    piVar3 = piVar2;
  }
  return *piVar3;
}


