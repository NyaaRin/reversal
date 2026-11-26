// 0x1800af7b0  FUN_1800af7b0
// size=169 thunk=false
// signature: undefined FUN_1800af7b0()
// status: ok


ulonglong FUN_1800af7b0(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  size_t _Size;
  char *_Str;
  int iVar3;
  ulonglong uVar4;
  undefined4 extraout_var;
  undefined8 *_Buf1;
  undefined **ppuVar5;
  
  uVar2 = param_1[3];
  ppuVar5 = &PTR_s_default_18033a590;
  _Size = param_1[2];
  do {
    _Str = *ppuVar5;
    uVar4 = strlen(_Str);
    _Buf1 = param_1;
    if (0xf < uVar2) {
      _Buf1 = (undefined8 *)*param_1;
    }
    if (_Size == uVar4) {
      if (_Size == 0) {
LAB_1800af83b:
        *param_2 = *(undefined4 *)(ppuVar5 + 1);
        uVar1 = *(undefined4 *)((longlong)ppuVar5 + 0xc);
        param_2[1] = uVar1;
        return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
      }
      iVar3 = memcmp(_Buf1,_Str,_Size);
      uVar4 = CONCAT44(extraout_var,iVar3);
      if (iVar3 == 0) goto LAB_1800af83b;
    }
    ppuVar5 = ppuVar5 + 2;
    if (ppuVar5 == &Features::Warp::WarpFeature::vftable_meta_ptr) {
      *param_2 = 0x3f800000;
      param_2[1] = 0x3f000000;
      return uVar4 & 0xffffffffffffff00;
    }
  } while( true );
}


