// 0x1800afb30  Features_Autowall_SWCSAutowall_vfunc10
// size=86 thunk=false
// signature: undefined Features_Autowall_SWCSAutowall_vfunc10()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float Features_Autowall_SWCSAutowall_vfunc10(longlong param_1,float param_2,float param_3)

{
  float fVar1;
  
  param_3 = param_3 - *(float *)(param_1 + 0x34);
  if (param_3 <= 0.0) {
    param_3 = 0.0;
  }
  if ((0.0 < param_3) && (*(float *)(param_1 + 0x18) < DAT_180380bb0)) {
    fVar1 = powf(*(float *)(param_1 + 0x18),param_3 / _DAT_180381248);
    return fVar1 * param_2;
  }
  return param_2;
}


