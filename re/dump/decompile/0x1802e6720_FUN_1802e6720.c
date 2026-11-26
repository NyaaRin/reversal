// 0x1802e6720  FUN_1802e6720
// size=49 thunk=false
// signature: undefined FUN_1802e6720()
// status: ok


void FUN_1802e6720(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x28) & 4) != 0) {
    *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) & 0xfffffffb;
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              ((basic_ios<char,std::char_traits<char>_> *)(param_2 + 0x118));
  }
  return;
}


