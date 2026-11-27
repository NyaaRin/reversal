// 0x1800bf0b0  FUN_1800bf0b0
// size=168 thunk=false
// signature: undefined FUN_1800bf0b0()
// status: ok


undefined1 FUN_1800bf0b0(void)

{
  undefined8 uVar1;
  char *pcVar2;
  
  uVar1 = FUN_180241610(&DAT_1803fadf0,0x2d8f695138585a77);
  uVar1 = FUN_180241610(uVar1,0xf877df6876fb9434);
  pcVar2 = (char *)FUN_1801fcfc0(uVar1);
  if (*pcVar2 != '\0') {
    uVar1 = FUN_180241610(&DAT_1803fadf0,0x2d8f695138585a77);
    uVar1 = FUN_180241610(uVar1,0xd34643a33790f520);
    pcVar2 = (char *)FUN_1801fcfc0(uVar1);
    if (*pcVar2 != '\0') {
      uVar1 = FUN_180241610(&DAT_1803fadf0,0x2d8f695138585a77);
      uVar1 = FUN_180241610(uVar1,0xaf1968f7424da736);
      pcVar2 = (char *)FUN_1801fcfc0(uVar1);
      if (*pcVar2 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}


