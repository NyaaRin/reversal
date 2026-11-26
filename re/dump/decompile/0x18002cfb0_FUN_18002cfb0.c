// 0x18002cfb0  FUN_18002cfb0
// size=122 thunk=false
// signature: undefined FUN_18002cfb0()
// status: ok


undefined8 FUN_18002cfb0(undefined8 param_1,longlong param_2,char *param_3)

{
  longlong lVar1;
  size_t sVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  sVar2 = strlen(param_3);
  if (sVar2 <= 0x7fffffffffffffffU - lVar1) {
    FUN_18020e930(param_1);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800130a0();
}


