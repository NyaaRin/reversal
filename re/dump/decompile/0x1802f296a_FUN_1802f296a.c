// 0x1802f296a  FUN_1802f296a
// size=43 thunk=false
// signature: undefined FUN_1802f296a()
// status: ok


void FUN_1802f296a(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x8000000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xf7ffffff;
    FUN_18021b0b0(param_2 + 0x78);
  }
  return;
}


