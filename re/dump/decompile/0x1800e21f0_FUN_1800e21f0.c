// 0x1800e21f0  FUN_1800e21f0
// size=132 thunk=false
// signature: undefined FUN_1800e21f0()
// status: ok


undefined1 FUN_1800e21f0(void)

{
  undefined8 uVar1;
  char *pcVar2;
  int *piVar3;
  undefined1 uVar4;
  char cVar5;
  
  uVar1 = FUN_180241610(&DAT_1803fadf0,0x93fd561a96ab0c67);
  uVar1 = FUN_180241610(uVar1,0x574fa339fade2366);
  pcVar2 = (char *)FUN_1801fcfc0(uVar1);
  if (*pcVar2 == '\0') {
    uVar4 = 0;
  }
  else {
    uVar1 = FUN_180241610(&DAT_1803fadf0,0x93fd561a96ab0c67);
    uVar1 = FUN_180241610(uVar1,0xcef5d8b14b3154d9);
    piVar3 = (int *)FUN_1802029c0(uVar1);
    if ((0 < *piVar3) && (cVar5 = FUN_1800246e0(), cVar5 == '\0')) {
      return 0;
    }
    uVar4 = 1;
  }
  return uVar4;
}


