// 0x1802b32c0  FUN_1802b32c0
// size=92 thunk=false
// signature: undefined FUN_1802b32c0()
// status: ok


char * FUN_1802b32c0(char *param_1)

{
  char cVar1;
  
  if (*param_1 != '%') {
    return param_1;
  }
  cVar1 = '%';
  while (((0x19 < (byte)(cVar1 + 0xbfU) || ((1 << (cVar1 + 0xbfU & 0x1f) & 0x900U) != 0)) &&
         ((0x19 < (byte)(cVar1 + 0x9fU) || ((1 << (cVar1 + 0x9fU & 0x1f) & 0x2480a80U) != 0))))) {
    cVar1 = param_1[1];
    param_1 = param_1 + 1;
    if (cVar1 == '\0') {
      return param_1;
    }
  }
  return param_1 + 1;
}


