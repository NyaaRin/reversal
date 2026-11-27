// 0x18006e3f0  FUN_18006e3f0
// size=133 thunk=false
// signature: undefined FUN_18006e3f0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18006e3f0(undefined8 *param_1)

{
  BOOL BVar1;
  
  if ((param_1 != (undefined8 *)0x0) && (BVar1 = IsBadReadPtr(param_1,0x80), BVar1 == 0)) {
    _DAT_1803fef00 = *param_1;
    uRam00000001803fef08 = param_1[1];
    _DAT_1803fef10 = param_1[2];
    uRam00000001803fef18 = param_1[3];
    _DAT_1803fef20 = param_1[4];
    uRam00000001803fef28 = param_1[5];
    _DAT_1803fef30 = param_1[6];
    uRam00000001803fef38 = param_1[7];
    _DAT_1803fef40 = param_1[8];
    uRam00000001803fef48 = param_1[9];
    _DAT_1803fef50 = param_1[10];
    uRam00000001803fef58 = param_1[0xb];
    _DAT_1803fef60 = param_1[0xc];
    uRam00000001803fef68 = param_1[0xd];
    _DAT_1803fef70 = param_1[0xe];
    uRam00000001803fef78 = param_1[0xf];
    DAT_1803fefe0 = 1;
  }
  return;
}


