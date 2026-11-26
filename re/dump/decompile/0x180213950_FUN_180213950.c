// 0x180213950  FUN_180213950
// size=196 thunk=false
// signature: undefined FUN_180213950()
// status: ok


undefined8 *
FUN_180213950(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *_Dst;
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = 0;
  puVar2 = param_1;
  _Dst = (undefined8 *)FUN_1802d8350(0xc0);
  puVar3 = _Dst;
  memset(_Dst,0,0xc0);
  FUN_18016ad80(_Dst);
  *_Dst = vftable_Features_Visual_ESP_Editor_Elements_ArmorBarElement;
  *(undefined1 *)(_Dst + 0x17) = 0;
  FUN_180212700(_Dst + 4,"Armor Bar",9,param_4,uVar1,puVar2,puVar3);
  *(undefined4 *)(_Dst + 1) = 2;
  *(undefined4 *)(_Dst + 8) = 0x3e99999a;
  *(undefined4 *)((longlong)_Dst + 0x44) = 0x3f1eb852;
  *(undefined4 *)(_Dst + 9) = 0x3f800000;
  *(undefined4 *)((longlong)_Dst + 0x4c) = 0x3f800000;
  *(undefined4 *)(_Dst + 10) = 0x3dcccccd;
  *(undefined4 *)((longlong)_Dst + 0x54) = 0x3e6147ae;
  *(undefined4 *)(_Dst + 0xb) = 0x3ef5c28f;
  *(undefined4 *)((longlong)_Dst + 0x5c) = 0x3f800000;
  *param_1 = _Dst;
  return param_1;
}


