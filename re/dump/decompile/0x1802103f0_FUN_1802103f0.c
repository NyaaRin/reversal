// 0x1802103f0  FUN_1802103f0
// size=152 thunk=false
// signature: undefined FUN_1802103f0()
// status: ok


basic_ios<char,std::char_traits<char>_> *
FUN_1802103f0(basic_ios<char,std::char_traits<char>_> *param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + (longlong)*(int *)(*(longlong *)(param_1 + -0x98) + 4) + -0x98) =
       vftable_std_2_D_V__allocator_std_D_DU__char_traits___basic_stringstream;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)(param_1 + -0x98) + 4) + -0x9c) =
       *(int *)(*(longlong *)(param_1 + -0x98) + 4) + -0x98;
  FUN_18020ffc0(param_1 + -0x80);
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)(param_1 + -0x78));
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1 + -0x98);
  }
  return param_1 + -0x98;
}


