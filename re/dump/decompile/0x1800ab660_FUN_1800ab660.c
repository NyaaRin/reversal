// 0x1800ab660  FUN_1800ab660
// size=194 thunk=false
// signature: undefined FUN_1800ab660()
// status: ok


undefined8 FUN_1800ab660(void)

{
  undefined8 uVar1;
  char *pcVar2;
  
  if ((((0.0 <= DAT_1803e9200) && (DAT_1803fa608 != (float *)0x0)) &&
      (0.0 <= (double)*DAT_1803fa608 - DAT_1803e9200)) &&
     ((double)*DAT_1803fa608 - DAT_1803e9200 <= DAT_180380c90)) {
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
  }
  return 0;
}


