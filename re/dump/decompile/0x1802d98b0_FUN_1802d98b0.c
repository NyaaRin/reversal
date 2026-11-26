// 0x1802d98b0  FUN_1802d98b0
// size=46 thunk=false
// signature: undefined FUN_1802d98b0()
// status: ok


void FUN_1802d98b0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              ((basic_ios<char,std::char_traits<char>_> *)(param_2 + 0xe8));
  }
  return;
}


