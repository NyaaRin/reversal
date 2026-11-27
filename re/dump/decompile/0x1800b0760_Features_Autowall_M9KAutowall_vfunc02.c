// 0x1800b0760  Features_Autowall_M9KAutowall_vfunc02
// size=42 thunk=false
// signature: undefined Features_Autowall_M9KAutowall_vfunc02()
// status: ok


ulonglong Features_Autowall_M9KAutowall_vfunc02(undefined8 param_1,longlong param_2)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (param_2 != 0) {
    uVar1 = 0;
    while (in_RAX = uVar1 + 1, *(char *)(param_2 + uVar1) == (&DAT_180347220)[uVar1]) {
      uVar1 = in_RAX;
      if (in_RAX == 4) {
        return 1;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}


