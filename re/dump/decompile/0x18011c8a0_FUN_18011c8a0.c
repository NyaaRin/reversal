// 0x18011c8a0  FUN_18011c8a0
// size=63 thunk=false
// signature: undefined FUN_18011c8a0()
// status: ok


bool FUN_18011c8a0(void)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = FUN_180016fb0("cl_enable_loadingurl");
  if (lVar1 != 0) {
    fVar2 = (float)FUN_180019700(lVar1);
    return fVar2 != 0.0;
  }
  return true;
}


