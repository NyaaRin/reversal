// 0x1800da280  FUN_1800da280
// size=164 thunk=false
// signature: undefined FUN_1800da280()
// status: ok


int FUN_1800da280(void)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int local_res8 [2];
  int local_res10 [6];
  
  uVar2 = FUN_180241610(&DAT_1803fadf0,0x93fd561a96ab0c67);
  uVar2 = FUN_180241610(uVar2,0xc81ef1c43455b3be);
  pcVar3 = (char *)FUN_1801fcfc0(uVar2);
  if (*pcVar3 == '\0') {
    local_res10[0] = 2;
    local_res8[0] = 0;
    uVar2 = FUN_180241610(&DAT_1803fadf0,0x93fd561a96ab0c67);
    uVar2 = FUN_180241610(uVar2,0x36e83df20bb4f44e);
    piVar4 = (int *)FUN_1802029c0(uVar2);
    piVar6 = local_res8;
    if (local_res8[0] <= *piVar4) {
      piVar6 = piVar4;
    }
    piVar5 = local_res10;
    if (*piVar4 <= local_res10[0]) {
      piVar5 = piVar6;
    }
    iVar1 = *piVar5;
  }
  else {
    iVar1 = 2;
  }
  return iVar1;
}


