// 0x1800b16e0  FUN_1800b16e0
// size=122 thunk=false
// signature: undefined FUN_1800b16e0()
// status: ok


undefined1 FUN_1800b16e0(void)

{
  undefined8 uVar1;
  char *pcVar2;
  
  uVar1 = FUN_180241610(&DAT_1803fadf0,0x93fd561a96ab0c67);
  uVar1 = FUN_180241610(uVar1,0xb180266dc2efa3d2);
  pcVar2 = (char *)FUN_1801fcfc0(uVar1);
  if (*pcVar2 != '\0') {
    uVar1 = FUN_180241610(&DAT_1803fadf0,0x93fd561a96ab0c67);
    uVar1 = FUN_180241610(uVar1,0x1a096a9307a0dc72);
    pcVar2 = (char *)FUN_1801fcfc0(uVar1);
    if (*pcVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}


