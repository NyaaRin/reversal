// 0x1800db0b0  FUN_1800db0b0
// size=118 thunk=false
// signature: undefined FUN_1800db0b0()
// status: ok


ulonglong FUN_1800db0b0(void)

{
  undefined8 uVar1;
  char *pcVar2;
  ulonglong uVar3;
  byte *pbVar4;
  
  uVar1 = FUN_180241610(&DAT_1803fadf0,0x93fd561a96ab0c67);
  uVar1 = FUN_180241610(uVar1,0xb180266dc2efa3d2);
  pcVar2 = (char *)FUN_1801fcfc0(uVar1);
  if (*pcVar2 == '\0') {
    uVar3 = (ulonglong)pcVar2 & 0xffffffffffffff00;
  }
  else {
    uVar1 = FUN_180241610(&DAT_1803fadf0,0x93fd561a96ab0c67);
    uVar1 = FUN_180241610(uVar1,0x24281ae302625222);
    pbVar4 = (byte *)FUN_1801fcfc0(uVar1);
    uVar3 = (ulonglong)*pbVar4;
  }
  return uVar3;
}


