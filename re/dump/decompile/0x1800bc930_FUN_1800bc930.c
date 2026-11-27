// 0x1800bc930  FUN_1800bc930
// size=168 thunk=false
// signature: undefined FUN_1800bc930()
// status: ok


undefined8 FUN_1800bc930(void)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  char *pcVar4;
  int *piVar5;
  
  if (DAT_1803e7c84 < 0) {
    cVar2 = FUN_1800b81b0();
    if (cVar2 != '\0') {
      return 1;
    }
    uVar3 = FUN_180241610(&DAT_1803fadf0,0x2d8f695138585a77);
    uVar3 = FUN_180241610(uVar3,0xc980722e39863cca);
    pcVar4 = (char *)FUN_1801fcfc0(uVar3);
    if (*pcVar4 != '\0') {
      return 1;
    }
    uVar3 = FUN_180241610(&DAT_1803fadf0,0x2d8f695138585a77);
    uVar3 = FUN_180241610(uVar3,0x398cc31e81e2db51);
    piVar5 = (int *)FUN_1802029c0(uVar3);
    iVar1 = *piVar5;
    cVar2 = FUN_1800b8160();
    if (cVar2 != '\0') {
      if (iVar1 - 7U < 2) {
        return 1;
      }
    }
  }
  return 0;
}


