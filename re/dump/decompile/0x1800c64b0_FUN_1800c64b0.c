// 0x1800c64b0  FUN_1800c64b0
// size=116 thunk=false
// signature: undefined FUN_1800c64b0()
// status: ok


int FUN_1800c64b0(void)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int local_res8 [2];
  int local_res10 [6];
  
  cVar1 = FUN_1800b8200();
  if (cVar1 == '\0') {
    iVar2 = 0;
  }
  else {
    local_res10[0] = 0xe;
    local_res8[0] = -0xe;
    uVar3 = FUN_180241610(&DAT_1803fadf0,0x2d8f695138585a77);
    uVar3 = FUN_180241610(uVar3,0x4fc289ac518c30d0);
    piVar4 = (int *)FUN_1802029c0(uVar3);
    piVar6 = local_res8;
    if (local_res8[0] <= *piVar4) {
      piVar6 = piVar4;
    }
    piVar5 = local_res10;
    if (*piVar4 <= local_res10[0]) {
      piVar5 = piVar6;
    }
    iVar2 = *piVar5;
  }
  return iVar2;
}


