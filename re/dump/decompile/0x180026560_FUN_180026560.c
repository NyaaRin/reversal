// 0x180026560  FUN_180026560
// size=85 thunk=false
// signature: undefined FUN_180026560()
// status: ok


undefined8 FUN_180026560(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_180025450();
  if ((cVar1 != '\0') && (iVar2 = FUN_180022f60(param_1), 2 < iVar2)) {
    FUN_180022f00(param_1,2);
    FUN_180022f00(param_1,3);
    (*DAT_1803fcbb8)(param_1,1);
  }
  return 0;
}


