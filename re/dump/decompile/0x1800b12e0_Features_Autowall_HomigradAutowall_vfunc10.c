// 0x1800b12e0  Features_Autowall_HomigradAutowall_vfunc10
// size=102 thunk=false
// signature: undefined Features_Autowall_HomigradAutowall_vfunc10()
// status: ok


float Features_Autowall_HomigradAutowall_vfunc10(longlong param_1,float param_2)

{
  float *pfVar1;
  float *pfVar2;
  float local_res20 [2];
  float local_18;
  float local_14 [5];
  
  if (DAT_1803e9230 <= 0.0) {
    return 0.0;
  }
  local_18 = *(float *)(param_1 + 8) / DAT_1803e9230;
  local_14[0] = 1.0;
  pfVar2 = local_res20;
  if (0.0 <= local_18) {
    pfVar2 = &local_18;
  }
  pfVar1 = local_14;
  if (local_18 <= DAT_180380bb0) {
    pfVar1 = pfVar2;
  }
  return param_2 * *pfVar1;
}


