// 0x180094290  FUN_180094290
// size=345 thunk=false
// signature: undefined FUN_180094290()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_180094290(undefined8 param_1,float param_2,float *param_3,float *param_4)

{
  short sVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((((DAT_1803e9de8 != '\0') && (sVar1 = _fdclass(param_2), sVar1 < 1)) && (0.0 < param_2)) &&
     (param_2 <= _DAT_1803809b0)) {
    fVar6 = param_2 * DAT_1803e9dc4;
    fVar4 = param_2 * DAT_1803e9dc8;
    fVar5 = param_2 * DAT_1803e9dcc;
    if (((fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5 <= DAT_180380bb0) &&
        (fVar2 = param_2 * _DAT_1803e9ddc, (float)((uint)fVar2 & _DAT_1803817c0) <= DAT_180380bb0))
       && ((fVar3 = param_2 * _DAT_1803e9de0, (float)((uint)fVar3 & _DAT_1803817c0) <= DAT_180380bb0
           && (param_2 = param_2 * _DAT_1803e9de4,
              (float)((uint)param_2 & _DAT_1803817c0) <= DAT_180380bb0)))) {
      fVar5 = fVar5 + _DAT_1803e9dc0;
      fVar6 = fVar6 + _DAT_1803e9db8;
      param_3[1] = fVar4 + _DAT_1803e9dbc;
      param_3[2] = fVar5;
      *param_3 = fVar6;
      param_2 = param_2 + _DAT_1803e9dd8;
      fVar2 = fVar2 + _DAT_1803e9dd0;
      param_4[1] = fVar3 + _DAT_1803e9dd4;
      param_4[2] = param_2;
      *param_4 = fVar2;
      return 1;
    }
  }
  return 0;
}


