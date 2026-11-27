// 0x1800b65c0  FUN_1800b65c0
// size=136 thunk=false
// signature: undefined FUN_1800b65c0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800b65c0(float param_1)

{
  float *pfVar1;
  float *pfVar2;
  float local_28;
  float local_24;
  float local_20 [8];
  
  local_20[0] = param_1;
  if ((DAT_1803fb240 <= param_1) || (param_1 < DAT_1803fb240 * DAT_180380ac0)) {
    local_24 = 1.0;
    local_28 = 0.0;
    pfVar2 = &local_28;
    if (0.0 <= param_1) {
      pfVar2 = local_20;
    }
    pfVar1 = &local_24;
    if (param_1 <= DAT_180380bb0) {
      pfVar1 = pfVar2;
    }
    DAT_1803fb240 = *pfVar1;
  }
  return;
}


