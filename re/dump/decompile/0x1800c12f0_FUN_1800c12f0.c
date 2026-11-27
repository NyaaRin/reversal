// 0x1800c12f0  FUN_1800c12f0
// size=122 thunk=false
// signature: undefined FUN_1800c12f0()
// status: ok


undefined1 FUN_1800c12f0(void)

{
  undefined8 uVar1;
  char *pcVar2;
  
  uVar1 = FUN_180241610(&DAT_1803fadf0,0x2d8f695138585a77);
  uVar1 = FUN_180241610(uVar1,0x72114d0ef27e6e77);
  pcVar2 = (char *)FUN_1801fcfc0(uVar1);
  if (*pcVar2 != '\0') {
    uVar1 = FUN_180241610(&DAT_1803fadf0,0x2d8f695138585a77);
    uVar1 = FUN_180241610(uVar1,0xd4036f972fdb6911);
    pcVar2 = (char *)FUN_1801fcfc0(uVar1);
    if (*pcVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}


