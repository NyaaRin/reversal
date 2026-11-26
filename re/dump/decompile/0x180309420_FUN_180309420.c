// 0x180309420  FUN_180309420
// size=48 thunk=false
// signature: undefined FUN_180309420()
// status: ok


void FUN_180309420(void)

{
  void *_Memory;
  
  FUN_18021d310(&DAT_18042cd38);
  _Memory = DAT_18042cd38;
  DAT_18042cd38 = (void *)0x0;
  free(_Memory);
  return;
}


