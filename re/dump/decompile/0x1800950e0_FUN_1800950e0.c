// 0x1800950e0  FUN_1800950e0
// size=154 thunk=false
// signature: undefined FUN_1800950e0()
// status: ok


void FUN_1800950e0(undefined8 param_1,double param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  sVar1 = _dclass(param_2);
  if ((sVar1 < 1) && (0.0 < param_2)) {
    if (DAT_18040a200 != 0) {
      if (param_2 == (double)(&DAT_180409ff8)[DAT_18040a200]) {
        return;
      }
      if ((double)(&DAT_180409ff8)[DAT_18040a200] <= param_2) {
        if (DAT_18040a200 == 0x40) {
          iVar2 = 1;
          do {
            iVar3 = iVar2 + 1;
            (&DAT_180409ff8)[iVar2] = (&DAT_18040a000)[iVar2];
            iVar2 = iVar3;
          } while (iVar3 < DAT_18040a200);
          DAT_18040a200 = DAT_18040a200 + -1;
        }
      }
      else {
        DAT_18040a200 = 0;
      }
    }
    (&DAT_18040a000)[DAT_18040a200] = param_2;
    DAT_18040a200 = DAT_18040a200 + 1;
  }
  return;
}


