// 0x1802ffb01  FUN_1802ffb01
// size=39 thunk=false
// signature: undefined FUN_1802ffb01()
// status: ok


void FUN_1802ffb01(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    std::_Locinfo::~_Locinfo((_Locinfo *)(param_2 + 0x60));
  }
  return;
}


