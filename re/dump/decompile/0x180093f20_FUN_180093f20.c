// 0x180093f20  FUN_180093f20
// size=879 thunk=false
// signature: undefined FUN_180093f20()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180093f20(undefined8 param_1,double param_2,float *param_3,float *param_4)

{
  double dVar1;
  short sVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  sVar2 = _dclass(SUB84(param_2,0));
  if ((((sVar2 < 1) && (((uint)*param_3 & 0x7f800000) != 0x7f800000)) &&
      (((uint)param_3[1] & 0x7f800000) != 0x7f800000)) &&
     (((((uint)param_3[2] & 0x7f800000) != 0x7f800000 &&
       (((uint)*param_4 & 0x7f800000) != 0x7f800000)) &&
      ((((uint)param_4[1] & 0x7f800000) != 0x7f800000 &&
       (((uint)param_4[2] & 0x7f800000) != 0x7f800000)))))) {
    if (param_2 != DAT_1803e9db0) {
      if (((DAT_1803e9db0 < 0.0) || (dVar1 = param_2 - DAT_1803e9db0, dVar1 < DAT_180380b40)) ||
         (DAT_180380c90 < dVar1)) {
        DAT_1803e9de8 = 0;
      }
      else {
        DAT_1803e9de8 = 1;
        fVar6 = (float)(DAT_180380d08 / dVar1);
        _DAT_1803e9dc0 = CONCAT44((*param_3 - _DAT_1803e9db8) * fVar6,_DAT_1803e9dc0);
        _DAT_1803e9dc8 =
             CONCAT44((param_3[2] - _DAT_1803e9dc0) * fVar6,(param_3[1] - _DAT_1803e9dbc) * fVar6);
        fVar3 = (float)remainderf(param_4[2] - _DAT_1803e9dd8,DAT_18038120c);
        fVar4 = (float)remainderf(param_4[1] - _DAT_1803e9dd4,DAT_18038120c);
        fVar5 = (float)remainderf(*param_4 - _DAT_1803e9dd0,DAT_18038120c);
        _DAT_1803e9dd8 = (ulonglong)(uint)(fVar5 * fVar6) << 0x20;
        _DAT_1803e9de0 = CONCAT44(fVar3 * fVar6,fVar4 * fVar6);
        if ((((((DAT_1803e9dc4 & 0x7f800000) != 0x7f800000) &&
              ((DAT_1803e9dc8 & 0x7f800000) != 0x7f800000)) &&
             ((DAT_1803e9dcc & 0x7f800000) != 0x7f800000)) &&
            ((((uint)(fVar5 * fVar6) & 0x7f800000) != 0x7f800000 &&
             (((uint)(fVar4 * fVar6) & 0x7f800000) != 0x7f800000)))) &&
           (((uint)(fVar3 * fVar6) & 0x7f800000) != 0x7f800000)) {
          if ((param_3[1] - _DAT_1803e9dbc) * (param_3[1] - _DAT_1803e9dbc) +
              (*param_3 - _DAT_1803e9db8) * (*param_3 - _DAT_1803e9db8) +
              (param_3[2] - _DAT_1803e9dc0) * (param_3[2] - _DAT_1803e9dc0) <= DAT_180380fe8) {
            DAT_1803e9de8 = 1;
            goto LAB_1800941d7;
          }
        }
        DAT_1803e9de8 = 0;
      }
LAB_1800941d7:
      DAT_1803e9db0 = param_2;
      _DAT_1803e9db8 = *(undefined8 *)param_3;
      _DAT_1803e9dc0 = CONCAT44(DAT_1803e9dc4,param_3[2]);
      _DAT_1803e9dd0 = *(undefined8 *)param_4;
      _DAT_1803e9dd8 = CONCAT44(_DAT_1803e9ddc,param_4[2]);
      return;
    }
  }
  else {
    DAT_1803e9db0 = DAT_1803813b0;
    _DAT_1803e9dd0 = 0;
    _DAT_1803e9dd8 = 0;
    _DAT_1803e9db8 = 0;
    _DAT_1803e9dc0 = 0;
    _DAT_1803e9dc8 = 0;
    _DAT_1803e9de0 = 0;
    DAT_1803e9de8 = 0;
  }
  return;
}


