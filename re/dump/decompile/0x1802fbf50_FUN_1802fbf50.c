// 0x1802fbf50  FUN_1802fbf50
// size=46 thunk=false
// signature: undefined FUN_1802fbf50()
// status: ok


void FUN_1802fbf50(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              ((basic_ios<char,std::char_traits<char>_> *)(*(longlong *)(param_2 + 0x30) + 0xa8));
  }
  return;
}


