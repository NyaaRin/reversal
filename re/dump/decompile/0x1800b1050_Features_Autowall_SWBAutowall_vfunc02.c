// 0x1800b1050  Features_Autowall_SWBAutowall_vfunc02
// size=74 thunk=false
// signature: undefined Features_Autowall_SWBAutowall_vfunc02()
// status: ok


ulonglong Features_Autowall_SWBAutowall_vfunc02(undefined8 param_1,longlong param_2)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar2 = 0;
    while (lVar3 = lVar2 + 1, *(char *)(param_2 + lVar2) == (&DAT_180346f94)[lVar2]) {
      lVar2 = lVar3;
      if (lVar3 == 4) {
        return 1;
      }
    }
    uVar1 = 0;
    while (in_RAX = uVar1 + 1, *(char *)(param_2 + uVar1) == (&DAT_180346fb0)[uVar1]) {
      uVar1 = in_RAX;
      if (in_RAX == 6) {
        return 1;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}


