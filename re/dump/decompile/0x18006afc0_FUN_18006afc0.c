// 0x18006afc0  FUN_18006afc0
// size=143 thunk=false
// signature: undefined FUN_18006afc0()
// status: ok


void FUN_18006afc0(longlong *param_1)

{
  basic_ios<char,std::char_traits<char>_> *this;
  
  this = (basic_ios<char,std::char_traits<char>_> *)(param_1 + 0x16);
  *(undefined ***)(this + (longlong)*(int *)(*param_1 + 4) + -0xb0) =
       vftable_std_std_D_DU__char_traits___basic_ifstream;
  *(int *)(this + (longlong)*(int *)(*param_1 + 4) + -0xb4) = *(int *)(*param_1 + 4) + -0xb0;
  FUN_18020f850(param_1 + 2);
  *(code **)(this + (longlong)*(int *)(*param_1 + 4) + -0xb0) = _vftable__exref;
  *(int *)(this + (longlong)*(int *)(*param_1 + 4) + -0xb4) = *(int *)(*param_1 + 4) + -0x18;
                    /* WARNING: Could not recover jumptable at 0x00018006b048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(this);
  return;
}


