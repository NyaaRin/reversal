// 0x1802d81e8  FUN_1802d81e8
// size=60 thunk=false
// signature: undefined FUN_1802d81e8()
// status: ok


void FUN_1802d81e8(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = malloc(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = DAT_1803f8f38;
    puVar1[1] = param_1;
    DAT_1803f8f38 = puVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_alloc();
}


