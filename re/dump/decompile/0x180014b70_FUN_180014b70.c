// 0x180014b70  FUN_180014b70
// size=140 thunk=false
// signature: undefined FUN_180014b70()
// status: ok


void FUN_180014b70(longlong *param_1)

{
  basic_ios<char,std::char_traits<char>_> *this;
  
  this = (basic_ios<char,std::char_traits<char>_> *)(param_1 + 0x11);
  *(undefined ***)(this + (longlong)*(int *)(*param_1 + 4) + -0x88) =
       vftable_std_2_D_V__allocator_std_D_DU__char_traits___basic_ostringstream;
  *(int *)(this + (longlong)*(int *)(*param_1 + 4) + -0x8c) = *(int *)(*param_1 + 4) + -0x88;
  FUN_18020ffc0(param_1 + 1);
  *(code **)(this + (longlong)*(int *)(*param_1 + 4) + -0x88) = _vftable__exref;
  *(int *)(this + (longlong)*(int *)(*param_1 + 4) + -0x8c) = *(int *)(*param_1 + 4) + -0x10;
                    /* WARNING: Could not recover jumptable at 0x000180014bf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(this);
  return;
}


