// 0x1800712d0  FUN_1800712d0
// size=97 thunk=false
// signature: undefined FUN_1800712d0()
// status: ok


void FUN_1800712d0(longlong *param_1)

{
  basic_ios<char,std::char_traits<char>_> *this;
  
  this = (basic_ios<char,std::char_traits<char>_> *)(param_1 + 0x13);
  *(undefined ***)(this + (longlong)*(int *)(*param_1 + 4) + -0x98) =
       vftable_std_2_D_V__allocator_std_D_DU__char_traits___basic_stringstream;
  *(int *)(this + (longlong)*(int *)(*param_1 + 4) + -0x9c) = *(int *)(*param_1 + 4) + -0x98;
  FUN_18020ffc0(param_1 + 3);
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)(param_1 + 4));
                    /* WARNING: Could not recover jumptable at 0x00018007132a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(this);
  return;
}


