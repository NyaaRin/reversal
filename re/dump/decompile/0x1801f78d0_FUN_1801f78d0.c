// 0x1801f78d0  FUN_1801f78d0
// size=202 thunk=false
// signature: undefined FUN_1801f78d0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801f78d0(double param_1,double *param_2)

{
  float *pfVar1;
  float local_res18 [4];
  
  if (((((DAT_180423572 != '\0') && (DAT_180423573 != '\0')) &&
       ((DAT_1803e90b8 < DAT_180380ba0 || (_DAT_180380bb4 < DAT_1803e90b8)))) &&
      (((*(char *)(param_2 + 1) != '\0' && (DAT_1803fa398 != (double *)0x0)) &&
       (param_1 = param_1 - *param_2, 0.0 < param_1)))) && (param_1 <= DAT_180380d08)) {
    local_res18[0] = DAT_1803e90b8;
    pfVar1 = local_res18;
    if (DAT_1803e90b8 < DAT_1803809c4) {
      pfVar1 = (float *)&DAT_1803310e4;
    }
    if (DAT_180380e28 < DAT_1803e90b8) {
      pfVar1 = (float *)&DAT_1803310e0;
    }
    *DAT_1803fa398 = ((double)*pfVar1 - DAT_180380d08) * param_1 + *DAT_1803fa398;
  }
  return;
}


