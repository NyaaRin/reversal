// 0x18006b0e0  FUN_18006b0e0
// size=122 thunk=false
// signature: undefined FUN_18006b0e0()
// status: ok


undefined1 FUN_18006b0e0(void)

{
  undefined8 uVar1;
  char *pcVar2;
  
  uVar1 = FUN_180241610(&DAT_1803fadf0,0xf7521f28977a3033);
  uVar1 = FUN_180241610(uVar1,0x9653fa4f0c4e1755);
  pcVar2 = (char *)FUN_1801fcfc0(uVar1);
  if (*pcVar2 != '\0') {
    uVar1 = FUN_180241610(&DAT_1803fadf0,0xf7521f28977a3033);
    uVar1 = FUN_180241610(uVar1,0x527acabecbc8e53b);
    pcVar2 = (char *)FUN_1801fcfc0(uVar1);
    if (*pcVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}


