// 0x1800bee10  FUN_1800bee10
// size=146 thunk=false
// signature: undefined FUN_1800bee10()
// status: ok


undefined1 FUN_1800bee10(void)

{
  undefined8 uVar1;
  char *pcVar2;
  char cVar3;
  
  cVar3 = FUN_1800bed60();
  if (cVar3 != '\0') {
    uVar1 = FUN_180241610(&DAT_1803fadf0,0x2d8f695138585a77);
    uVar1 = FUN_180241610(uVar1,0xd4036f972fdb6911);
    pcVar2 = (char *)FUN_1801fcfc0(uVar1);
    if (*pcVar2 != '\0') {
      return 0;
    }
  }
  cVar3 = FUN_1800bed60();
  if (cVar3 != '\0') {
    uVar1 = FUN_180241610(&DAT_1803fadf0,0x2d8f695138585a77);
    uVar1 = FUN_180241610(uVar1,0x1c0fbb64b84b566e);
    pcVar2 = (char *)FUN_1801fcfc0(uVar1);
    if (*pcVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}


