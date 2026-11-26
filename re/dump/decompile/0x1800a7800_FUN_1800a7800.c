// 0x1800a7800  FUN_1800a7800
// size=129 thunk=false
// signature: undefined FUN_1800a7800()
// status: ok


undefined8 FUN_1800a7800(void)

{
  undefined8 uVar1;
  char *pcVar2;
  int *piVar3;
  
  uVar1 = FUN_180241610(&DAT_1803fadf0,0x93fd561a96ab0c67);
  uVar1 = FUN_180241610(uVar1,0xba33a12acf3fe1c3);
  pcVar2 = (char *)FUN_1801fcfc0(uVar1);
  if (*pcVar2 == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_180241610(&DAT_1803fadf0,0x93fd561a96ab0c67);
    FUN_180241610(uVar1,0x147e6eb3aac54b6a);
    piVar3 = (int *)FUN_1802029c0();
    uVar1 = 0;
    if (0 < *piVar3) {
      uVar1 = 2;
    }
  }
  return uVar1;
}


