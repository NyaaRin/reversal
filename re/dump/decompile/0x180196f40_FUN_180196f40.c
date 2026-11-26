// 0x180196f40  FUN_180196f40
// size=34 thunk=false
// signature: undefined FUN_180196f40()
// status: ok


undefined8 FUN_180196f40(void *param_1,void *param_2,size_t param_3)

{
  if ((param_1 != (void *)0x0) && (param_2 != (void *)0x0)) {
    memcpy(param_1,param_2,param_3);
    return 1;
  }
  return 0;
}


