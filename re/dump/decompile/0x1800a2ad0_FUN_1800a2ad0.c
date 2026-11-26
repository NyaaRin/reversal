// 0x1800a2ad0  FUN_1800a2ad0
// size=93 thunk=false
// signature: undefined FUN_1800a2ad0()
// status: ok


undefined1 FUN_1800a2ad0(void)

{
  undefined8 uVar1;
  char *pcVar2;
  char cVar3;
  
  uVar1 = FUN_180241610(&DAT_1803fadf0,0x93fd561a96ab0c67);
  uVar1 = FUN_180241610(uVar1,0xb180266dc2efa3d2);
  pcVar2 = (char *)FUN_1801fcfc0(uVar1);
  if ((*pcVar2 != '\0') && (cVar3 = FUN_180095440(&DAT_1803e9f78,&DAT_1803edcf8), cVar3 != '\0')) {
    return 1;
  }
  return 0;
}


