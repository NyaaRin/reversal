// 0x1803093c0  FUN_1803093c0
// size=48 thunk=false
// signature: undefined FUN_1803093c0()
// status: ok


void FUN_1803093c0(void)

{
  void *_Memory;
  
  FUN_18021d310(&DAT_18042cd10);
  _Memory = DAT_18042cd10;
  DAT_18042cd10 = (void *)0x0;
  free(_Memory);
  return;
}


