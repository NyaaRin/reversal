// 0x180205f00  FUN_180205f00
// size=302 thunk=false
// signature: undefined FUN_180205f00()
// status: ok


void FUN_180205f00(void)

{
  undefined8 *_Dst;
  undefined8 in_R9;
  undefined8 *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  
  _Dst = (undefined8 *)FUN_1802d8350(0xb0);
  local_res18 = _Dst;
  memset(_Dst,0,0xb0);
  *_Dst = vftable_Features_LoadingUrl_LoadingUrlFeature;
  *(undefined2 *)(_Dst + 1) = 0;
  *(undefined1 *)((longlong)_Dst + 10) = 0;
  *(undefined4 *)((longlong)_Dst + 0xc) = 0xffffffff;
  _Dst[2] = 0;
  _Dst[3] = 0;
  _Dst[4] = 0;
  _Dst[5] = 0xf;
  *(undefined1 *)(_Dst + 2) = 0;
  _Dst[6] = 0;
  _Dst[7] = 0;
  _Dst[8] = 0;
  _Dst[9] = 0xf;
  *(undefined1 *)(_Dst + 6) = 0;
  _Dst[10] = 0;
  _Dst[0xb] = 0;
  _Dst[0xc] = 0;
  _Dst[0xd] = 0xf;
  *(undefined1 *)(_Dst + 10) = 0;
  _Dst[0xe] = 0;
  _Dst[0xf] = 0;
  _Dst[0x10] = 0;
  _Dst[0x11] = 0xf;
  *(undefined1 *)(_Dst + 0xe) = 0;
  *(undefined2 *)(_Dst + 0x12) = 0;
  *(undefined1 *)((longlong)_Dst + 0x92) = 0;
  _Dst[0x13] = 0;
  _Dst[0x14] = 0;
  *(undefined1 *)(_Dst + 0x15) = 0;
  local_res10 = 0;
  if (DAT_1803fcc70 == DAT_1803fcc78) {
    local_res8 = _Dst;
    FUN_180233a50(0,DAT_1803fcc70,&local_res8,in_R9,1);
  }
  else {
    local_res8 = (undefined8 *)0x0;
    *DAT_1803fcc70 = _Dst;
    DAT_1803fcc70 = DAT_1803fcc70 + 1;
  }
  if (local_res8 != (undefined8 *)0x0) {
    free(local_res8);
  }
  return;
}


