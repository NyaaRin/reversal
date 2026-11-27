// 0x1800d2c00  FUN_1800d2c00
// size=175 thunk=false
// signature: undefined FUN_1800d2c00()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1800d2c00(undefined8 *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = DAT_180380974;
  if ((DAT_1805c7a50 & 1) == 0) {
    DAT_1805c7a50 = DAT_1805c7a50 | 1;
    _DAT_1805bee98 = 0;
  }
  if (DAT_180423adc != '\0') {
    fVar3 = (float)((uint)(*param_2 - DAT_1805bee98) & _DAT_1803817c0);
    fVar2 = (float)((uint)(param_2[1] - DAT_1805bee9c) & _DAT_1803817c0);
    if ((0.0 < fVar3) && (fVar3 < DAT_180380974)) {
      *param_2 = DAT_1805bee98;
    }
    if ((0.0 < fVar2) && (fVar2 < fVar1)) {
      param_2[1] = DAT_1805bee9c;
    }
  }
  _DAT_1805bee98 = *(undefined8 *)param_2;
  fVar1 = param_2[2];
  DAT_180423adc = 1;
  _DAT_1805beea0 = fVar1;
  *param_1 = _DAT_1805bee98;
  *(float *)(param_1 + 1) = fVar1;
  return param_1;
}


