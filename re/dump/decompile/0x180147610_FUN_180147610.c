// 0x180147610  FUN_180147610
// size=45 thunk=false
// signature: undefined FUN_180147610()
// status: ok


int FUN_180147610(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_180147130();
  if ((param_1 == 0) || ((char)plVar2[5] == '\0')) {
    iVar1 = -1;
  }
  else {
    iVar1 = (int)*(short *)(param_1 + *plVar2);
  }
  return iVar1;
}


