// 0x1802fcd70  FUN_1802fcd70
// size=46 thunk=false
// signature: undefined FUN_1802fcd70()
// status: ok


void FUN_1802fcd70(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              ((basic_ios<char,std::char_traits<char>_> *)(*(longlong *)(param_2 + 0x40) + 0x90));
  }
  return;
}


