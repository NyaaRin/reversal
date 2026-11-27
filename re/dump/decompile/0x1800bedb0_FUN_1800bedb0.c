// 0x1800bedb0  FUN_1800bedb0
// size=79 thunk=false
// signature: undefined FUN_1800bedb0()
// status: ok


undefined1 FUN_1800bedb0(void)

{
  undefined8 uVar1;
  char *pcVar2;
  char cVar3;
  
  cVar3 = FUN_1800bed60();
  if (cVar3 != '\0') {
    uVar1 = FUN_180241610(&DAT_1803fadf0,0x2d8f695138585a77);
    uVar1 = FUN_180241610(uVar1,0x1cb083bf379fe263);
    pcVar2 = (char *)FUN_1801fcfc0(uVar1);
    if (*pcVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}


