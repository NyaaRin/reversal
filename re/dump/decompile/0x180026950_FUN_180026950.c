// 0x180026950  FUN_180026950
// size=111 thunk=false
// signature: undefined FUN_180026950()
// status: ok


byte FUN_180026950(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar1 = param_1 + 2;
  plVar3 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    plVar3 = (longlong *)*param_1;
  }
  if (*plVar1 == 7) {
    iVar2 = (int)*plVar3 + -0x76776e40;
    if ((iVar2 == 0) && (iVar2 = *(ushort *)((longlong)plVar3 + 4) - 0x7261, iVar2 == 0)) {
      iVar2 = *(byte *)((longlong)plVar3 + 6) - 0x73;
    }
    if (iVar2 == 0) {
      return 1;
    }
  }
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (longlong *)*param_1;
  }
  if (*plVar1 == 8) {
    return -(*param_1 == 0x7372617632776e40) & 2;
  }
  return 0;
}


