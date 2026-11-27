// 0x18006b050  FUN_18006b050
// size=143 thunk=false
// signature: undefined FUN_18006b050()
// status: ok


void FUN_18006b050(longlong *param_1)

{
  basic_ios<char,std::char_traits<char>_> *this;
  
  this = (basic_ios<char,std::char_traits<char>_> *)(param_1 + 0x15);
  *(undefined ***)(this + (longlong)*(int *)(*param_1 + 4) + -0xa8) =
       vftable_std_std_D_DU__char_traits___basic_ofstream;
  *(int *)(this + (longlong)*(int *)(*param_1 + 4) + -0xac) = *(int *)(*param_1 + 4) + -0xa8;
  FUN_18020f850(param_1 + 1);
  *(code **)(this + (longlong)*(int *)(*param_1 + 4) + -0xa8) = _vftable__exref;
  *(int *)(this + (longlong)*(int *)(*param_1 + 4) + -0xac) = *(int *)(*param_1 + 4) + -0x10;
                    /* WARNING: Could not recover jumptable at 0x00018006b0d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(this);
  return;
}


