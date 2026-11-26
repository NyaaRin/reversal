// 0x1801fd120  FUN_1801fd120
// size=136 thunk=false
// signature: undefined FUN_1801fd120()
// status: ok


undefined8 FUN_1801fd120(undefined8 param_1,char *param_2,longlong param_3)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
  if (sVar1 <= 0x7fffffffffffffffU - *(longlong *)(param_3 + 0x10)) {
    FUN_18020e930(param_1);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800130a0();
}


