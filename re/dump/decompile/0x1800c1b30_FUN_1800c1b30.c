// 0x1800c1b30  FUN_1800c1b30
// size=114 thunk=false
// signature: undefined FUN_1800c1b30()
// status: ok


undefined4 FUN_1800c1b30(void)

{
  undefined8 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 local_res8 [2];
  undefined4 local_res10 [6];
  
  local_res8[0] = 3;
  uVar1 = FUN_180241610(&DAT_1803fadf0,0x2d8f695138585a77);
  uVar1 = FUN_180241610(uVar1,0xf4577e7766fe48a2);
  piVar2 = (int *)FUN_1802029c0(uVar1);
  local_res10[0] = 2;
  puVar3 = local_res10;
  if (1 < *piVar2) {
    puVar3 = local_res8;
  }
  if (6 < *piVar2) {
    puVar3 = &DAT_1803310b4;
  }
  return *puVar3;
}


