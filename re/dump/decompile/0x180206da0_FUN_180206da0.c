// 0x180206da0  FUN_180206da0
// size=182 thunk=false
// signature: undefined FUN_180206da0()
// status: ok


void FUN_180206da0(void)

{
  undefined8 *_Memory;
  
  _Memory = (undefined8 *)FUN_1802d8350();
  *_Memory = vftable_Features_AccountSwitcher_AccountSwitcherFeature;
  LOCK();
  DAT_180409ca0 = 0;
  UNLOCK();
  FUN_180135f40();
  FUN_180139540();
  FUN_18013a560();
  if (DAT_1803fcc70 == DAT_1803fcc78) {
    FUN_180233a50();
  }
  else {
    *DAT_1803fcc70 = _Memory;
    DAT_1803fcc70 = DAT_1803fcc70 + 1;
    _Memory = (undefined8 *)0x0;
  }
  if (_Memory != (undefined8 *)0x0) {
    free(_Memory);
  }
  return;
}


