// 0x18021eaf0  FUN_18021eaf0
// size=137 thunk=false
// signature: undefined FUN_18021eaf0()
// status: ok


basic_streambuf<char,std::char_traits<char>_> *
FUN_18021eaf0(basic_streambuf<char,std::char_traits<char>_> *param_1,undefined8 *param_2,
             uint param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            (param_1);
  *(undefined ***)param_1 = vftable_std_2_D_V__allocator_std_D_DU__char_traits___basic_stringbuf;
  uVar3 = (~param_3 & 1) << 2;
  uVar2 = uVar3 | 2;
  if ((param_3 & 2) != 0) {
    uVar2 = uVar3;
  }
  uVar3 = uVar2 | 8;
  if ((param_3 & 8) == 0) {
    uVar3 = uVar2;
  }
  uVar2 = uVar3 | 0x10;
  if ((param_3 & 4) == 0) {
    uVar2 = uVar3;
  }
  puVar1 = param_2 + 2;
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  FUN_18022ed80(param_1,param_2,*puVar1,uVar2);
  return param_1;
}


