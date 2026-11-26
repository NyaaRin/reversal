// 0x1800c6700  FUN_1800c6700
// size=133 thunk=false
// signature: undefined FUN_1800c6700()
// status: ok


undefined1 FUN_1800c6700(void)

{
  undefined8 uVar1;
  char *pcVar2;
  char cVar3;
  
  cVar3 = FUN_1800b8200();
  if (cVar3 == '\0') {
    uVar1 = FUN_180241610(&DAT_1803fadf0,0xf7521f28977a3033);
    uVar1 = FUN_180241610(uVar1,0x9653fa4f0c4e1755);
    pcVar2 = (char *)FUN_1801fcfc0(uVar1);
    if (*pcVar2 != '\0') {
      uVar1 = FUN_180241610(&DAT_1803fadf0,0xf7521f28977a3033);
      uVar1 = FUN_180241610(uVar1,0xe455dd426f2b5319);
      pcVar2 = (char *)FUN_1801fcfc0(uVar1);
      if (*pcVar2 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}


