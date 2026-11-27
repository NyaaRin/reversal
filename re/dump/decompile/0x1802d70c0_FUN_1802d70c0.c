// 0x1802d70c0  FUN_1802d70c0
// size=151 thunk=false
// signature: undefined FUN_1802d70c0()
// status: ok


longlong FUN_1802d70c0(longlong param_1,longlong param_2,byte *param_3,longlong param_4)

{
  byte *pbVar1;
  longlong lVar2;
  char local_128 [264];
  
  if (((byte)DAT_1803da514 & 4) != 0) {
    lVar2 = FUN_1802d52d0();
    return lVar2;
  }
  memset(local_128,0,0x100);
  pbVar1 = param_3 + param_4;
  for (; param_3 != pbVar1; param_3 = param_3 + 1) {
    local_128[*param_3] = '\x01';
  }
  lVar2 = 0;
  if (param_2 != 0) {
    do {
      if (local_128[*(byte *)(param_1 + lVar2)] != '\0') {
        return lVar2;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 != param_2);
  }
  return -1;
}


