// 0x1800a0d60  FUN_1800a0d60
// size=99 thunk=false
// signature: undefined FUN_1800a0d60()
// status: ok


bool FUN_1800a0d60(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = param_1 + 2;
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (longlong *)*param_1;
  }
  if ((*plVar1 == 8) && (*param_1 == 0x657361625f70726f)) {
    return true;
  }
  plVar1 = (longlong *)*param_2;
  while( true ) {
    if (plVar1 == (longlong *)param_2[1]) {
      return false;
    }
    plVar2 = plVar1;
    if (0xf < (ulonglong)plVar1[3]) {
      plVar2 = (longlong *)*plVar1;
    }
    if ((plVar1[2] == 8) && (*plVar2 == 0x657361625f70726f)) break;
    plVar1 = plVar1 + 4;
  }
  return plVar1 != (longlong *)param_2[1];
}


