// 0x1800b3b80  FUN_1800b3b80
// size=119 thunk=false
// signature: undefined FUN_1800b3b80()
// status: ok


undefined1 FUN_1800b3b80(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined1 *puVar4;
  
  uVar2 = FUN_180241610(&DAT_1803fadf0,0x93fd561a96ab0c67);
  uVar2 = FUN_180241610(uVar2,0xe7781529f617a7b6);
  pcVar3 = (char *)FUN_1801fcfc0(uVar2);
  if (*pcVar3 == '\0') {
    uVar2 = FUN_180241610(&DAT_1803fadf0,0x2723fc3764d74742);
    uVar2 = FUN_180241610(uVar2,0x150438b5fa29716a);
    puVar4 = (undefined1 *)FUN_1801fcfc0(uVar2);
    uVar1 = *puVar4;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


