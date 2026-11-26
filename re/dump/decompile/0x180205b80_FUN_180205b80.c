// 0x180205b80  FUN_180205b80
// size=273 thunk=false
// signature: undefined FUN_180205b80()
// status: ok


void FUN_180205b80(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_1802d8350(0x2f0);
  memset(_Dst,0,0x2f0);
  *_Dst = vftable_Features_BulletPath_BulletPathFeature;
  memset(_Dst + 1,0,0x2a0);
  FUN_180202e70(_Dst + 1);
  *(undefined4 *)(_Dst + 0x55) = 0;
  *(undefined1 *)((longlong)_Dst + 0x2ac) = 0;
  _Dst[0x56] = 0;
  _Dst[0x57] = 0;
  _Dst[0x58] = 0;
  *(undefined4 *)(_Dst + 0x59) = 0;
  *(undefined1 *)(_Dst + 0x5a) = 0;
  *(undefined4 *)((longlong)_Dst + 0x2d4) = 0xffffffff;
  *(undefined1 *)(_Dst + 0x5b) = 0;
  *(undefined8 *)((longlong)_Dst + 0x2dc) = 0;
  *(undefined4 *)((longlong)_Dst + 0x2e4) = 0;
  *(undefined1 *)(_Dst + 0x5d) = 0;
  if (DAT_1803fcc70 == DAT_1803fcc78) {
    FUN_180233a50();
  }
  else {
    *DAT_1803fcc70 = _Dst;
    DAT_1803fcc70 = DAT_1803fcc70 + 1;
    _Dst = (undefined8 *)0x0;
  }
  if (_Dst != (undefined8 *)0x0) {
    free(_Dst);
  }
  return;
}


