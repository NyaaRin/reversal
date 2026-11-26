// 0x180131390  FUN_180131390
// size=65 thunk=false
// signature: undefined FUN_180131390()
// status: ok


bool FUN_180131390(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_1801311e0();
  if (cVar1 == '\0') {
    return false;
  }
  iVar2 = strcmp(param_1,param_2);
  return iVar2 == 0;
}


