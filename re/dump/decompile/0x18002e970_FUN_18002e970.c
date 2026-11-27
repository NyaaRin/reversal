// 0x18002e970  FUN_18002e970
// size=24 thunk=false
// signature: undefined FUN_18002e970()
// status: ok


undefined8 FUN_18002e970(void)

{
  undefined8 uVar1;
  
  if (DAT_1803fa678 == (longlong *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00018002e984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0);
  return uVar1;
}


