// 0x18030a420  FUN_18030a420
// size=48 thunk=false
// signature: undefined FUN_18030a420()
// status: ok


void FUN_18030a420(void)

{
  void *_Memory;
  
  FUN_18021d430(&DAT_18056dea0);
  _Memory = DAT_18056dea0;
  DAT_18056dea0 = (void *)0x0;
  free(_Memory);
  return;
}


