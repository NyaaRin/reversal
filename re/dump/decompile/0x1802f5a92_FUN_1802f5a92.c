// 0x1802f5a92  FUN_1802f5a92
// size=49 thunk=false
// signature: undefined FUN_1802f5a92()
// status: ok


void FUN_1802f5a92(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              ((basic_ios<char,std::char_traits<char>_> *)(param_2 + 0x130));
  }
  return;
}


