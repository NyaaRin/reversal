// 0x1802058b0  FUN_1802058b0
// size=511 thunk=false
// signature: undefined FUN_1802058b0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802058b0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *_Dst;
  undefined8 uVar4;
  undefined8 in_R9;
  undefined8 *local_res8;
  undefined8 local_res10;
  undefined4 uVar5;
  
  uVar5 = 0;
  _Dst = (undefined8 *)FUN_1802d8350(0xa88);
  local_res8 = _Dst;
  memset(_Dst,0,0xa88);
  *_Dst = vftable_Features_LuaLoader_LuaLoaderFeature;
  FUN_180243bd0(_Dst + 1);
  _Dst[0x13b] = 0;
  _Dst[0x13c] = 0;
  _Dst[0x13d] = 0;
  *(undefined4 *)(_Dst + 0x13e) = 0xffffffff;
  *(ulonglong *)((longlong)_Dst + 0x9f4) =
       CONCAT17(s_script_lua_18034f248[7],s_script_lua_18034f248._0_7_);
  *(undefined4 *)((longlong)_Dst + 0x9fb) = s_script_lua_18034f248._7_4_;
  *(undefined8 *)((longlong)_Dst + 0x9ff) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa07) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0f) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa17) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa1f) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa27) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa2f) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa37) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa3f) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa47) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa4c) = 0;
  _Dst[0x14b] = 0;
  _Dst[0x14c] = 0;
  _Dst[0x14d] = 0;
  _Dst[0x14e] = 0;
  FUN_18001d080(_Dst + 0x14b,"Scripts folder: Documents/mayrrX64/scripts",0x2a,in_R9,uVar5);
  *(undefined1 *)(_Dst + 0x14f) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa7c) = 0;
  uVar4 = FUN_180260220();
  _Dst[9] = uVar4;
  if (_Dst[0x118] != 0) {
    if ((longlong *)_Dst[0x118] == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::_Xbad_function_call();
    }
    (**(code **)(*(longlong *)_Dst[0x118] + 0x10))();
  }
  uVar4 = _UNK_18037d498;
  _Dst[0x119] = _DAT_18037d490;
  _Dst[0x11a] = uVar4;
  uVar4 = _UNK_18037d4a8;
  _Dst[0x11b] = _DAT_18037d4a0;
  _Dst[0x11c] = uVar4;
  uVar4 = _UNK_18037d4b8;
  _Dst[0x11d] = _DAT_18037d4b0;
  _Dst[0x11e] = uVar4;
  uVar4 = _UNK_18037d4c8;
  _Dst[0x11f] = _DAT_18037d4c0;
  _Dst[0x120] = uVar4;
  uVar3 = _UNK_18037d4dc;
  uVar2 = _UNK_18037d4d8;
  uVar1 = _UNK_18037d4d4;
  uVar5 = _DAT_18037d4d0;
  *(undefined4 *)(_Dst + 0x121) = _DAT_18037d4d0;
  *(undefined4 *)((longlong)_Dst + 0x90c) = uVar1;
  *(undefined4 *)(_Dst + 0x122) = uVar2;
  *(undefined4 *)((longlong)_Dst + 0x914) = uVar3;
  _Dst[0x123] = DAT_18037d4e0;
  *(undefined4 *)(_Dst + 0x13a) = 0xbf800000;
  _Dst[1] = 4;
  *(undefined1 *)(_Dst + 2) = 0;
  *(undefined1 *)((longlong)_Dst + 0x1b) = 1;
  *(undefined4 *)(_Dst + 5) = 0x1010101;
  *(undefined1 *)((longlong)_Dst + 0x1e) = 1;
  local_res10 = 0;
  if (DAT_1803fcc70 == DAT_1803fcc78) {
    local_res8 = _Dst;
    FUN_180233a50(uVar5,DAT_1803fcc70,&local_res8,in_R9,1);
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


