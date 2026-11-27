// 0x1800c5d20  FUN_1800c5d20
// size=161 thunk=false
// signature: undefined FUN_1800c5d20()
// status: ok


int FUN_1800c5d20(void)

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
  uVar2 = FUN_180241610(uVar2,0x46af284dbd58f0c);
  pcVar3 = (char *)FUN_1801fcfc0(uVar2);
  if (*pcVar3 == '\0') {
    iVar1 = 0;
  }
  else {
    local_res10[0] = 0xf;
    local_res8[0] = 0;
    uVar2 = FUN_180241610(&DAT_1803fadf0,0x93fd561a96ab0c67);
    uVar2 = FUN_180241610(uVar2,0xb3bc1c7136473c92);
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
  return iVar1;
}


