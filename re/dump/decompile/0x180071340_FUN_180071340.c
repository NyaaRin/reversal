// 0x180071340  FUN_180071340
// size=140 thunk=false
// signature: undefined FUN_180071340()
// status: ok


void FUN_180071340(longlong *param_1)

{
  basic_ios<char,std::char_traits<char>_> *this;
  
  this = (basic_ios<char,std::char_traits<char>_> *)(param_1 + 0x12);
  *(undefined ***)(this + (longlong)*(int *)(*param_1 + 4) + -0x90) =
       vftable_std_2_D_V__allocator_std_D_DU__char_traits___basic_istringstream;
  *(int *)(this + (longlong)*(int *)(*param_1 + 4) + -0x94) = *(int *)(*param_1 + 4) + -0x90;
  FUN_18020ffc0(param_1 + 2);
  *(code **)(this + (longlong)*(int *)(*param_1 + 4) + -0x90) = _vftable__exref;
  *(int *)(this + (longlong)*(int *)(*param_1 + 4) + -0x94) = *(int *)(*param_1 + 4) + -0x18;
                    /* WARNING: Could not recover jumptable at 0x0001800713c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(this);
  return;
}


