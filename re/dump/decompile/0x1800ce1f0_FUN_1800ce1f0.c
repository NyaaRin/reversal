// 0x1800ce1f0  FUN_1800ce1f0
// size=204 thunk=false
// signature: undefined FUN_1800ce1f0()
// status: ok


undefined1 FUN_1800ce1f0(void)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_180241610(&DAT_1803fadf0,0xf7521f28977a3033);
  uVar1 = FUN_180241610(uVar3,0x13c84f53e7f68d8c);
  pcVar2 = (char *)FUN_1801fcfc0(uVar1);
  if (*pcVar2 != '\0') {
    uVar1 = FUN_180241610(uVar3,0xd250cd42f963fefb);
    pcVar2 = (char *)FUN_1801fcfc0(uVar1);
    if (*pcVar2 == '\0') {
      uVar1 = FUN_180241610(uVar3,0x510e3af75e01d7bb);
      pcVar2 = (char *)FUN_1801fcfc0(uVar1);
      if (*pcVar2 == '\0') {
        uVar1 = FUN_180241610(uVar3,0x27e309181a7f6085);
        pcVar2 = (char *)FUN_1801fcfc0(uVar1);
        if (*pcVar2 == '\0') {
          uVar1 = FUN_180241610(uVar3,0x574f5671b7de6287);
          pcVar2 = (char *)FUN_1801fcfc0(uVar1);
          if (*pcVar2 == '\0') {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}


