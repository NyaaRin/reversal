// 0x1800b1d70  FUN_1800b1d70
// size=99 thunk=false
// signature: undefined FUN_1800b1d70()
// status: ok


undefined8 FUN_1800b1d70(float param_1)

{
  short sVar1;
  float fVar2;
  undefined4 extraout_XMM0_Db;
  
  sVar1 = _fdclass();
  if (0 < sVar1) {
    return 0;
  }
  fVar2 = fmodf(param_1,DAT_18038120c);
  if (DAT_180381188 < fVar2) {
    fVar2 = fVar2 - DAT_18038120c;
  }
  if (fVar2 < DAT_180381420) {
    fVar2 = fVar2 + DAT_18038120c;
  }
  return CONCAT44(extraout_XMM0_Db,fVar2);
}


