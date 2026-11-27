// 0x180142520  FUN_180142520
// size=75 thunk=false
// signature: undefined FUN_180142520()
// status: ok


byte FUN_180142520(void)

{
  undefined8 uVar1;
  char *pcVar2;
  byte bVar3;
  
  uVar1 = FUN_180241610(&DAT_1803fadf0,0x93fd561a96ab0c67);
  uVar1 = FUN_180241610(uVar1,0x6507776eb2e9032e);
  pcVar2 = (char *)FUN_1801fcfc0(uVar1);
  if (*pcVar2 == '\0') {
    bVar3 = 0;
  }
  else {
    bVar3 = FUN_18006b0e0();
    bVar3 = bVar3 ^ 1;
  }
  return bVar3;
}


