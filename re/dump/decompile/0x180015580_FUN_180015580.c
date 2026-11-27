// 0x180015580  FUN_180015580
// size=169 thunk=false
// signature: undefined FUN_180015580()
// status: ok


bool FUN_180015580(float *param_1,float *param_2)

{
  short sVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *param_1;
  sVar1 = _fdclass(fVar4);
  if (sVar1 < 1) {
    fVar2 = param_1[1];
    sVar1 = _fdclass(fVar2);
    if (sVar1 < 1) {
      fVar3 = param_1[2];
      sVar1 = _fdclass(fVar3);
      if (sVar1 < 1) {
        fVar2 = fVar2 - param_2[1];
        fVar4 = fVar4 - *param_2;
        fVar3 = fVar3 - param_2[2];
        return fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3 < DAT_1803812f4;
      }
    }
  }
  return false;
}


