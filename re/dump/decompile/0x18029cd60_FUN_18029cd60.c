// 0x18029cd60  FUN_18029cd60
// size=60 thunk=false
// signature: undefined FUN_18029cd60()
// status: ok


void FUN_18029cd60(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x90) != 0) {
    FUN_18026f680();
    *(undefined8 *)(param_2 + 0x90) = 0;
    return;
  }
  *(undefined8 *)(param_2 + 0x90) = 0;
  return;
}


