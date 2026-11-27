// 0x180066ad0  FUN_180066ad0
// size=178 thunk=false
// signature: undefined FUN_180066ad0()
// status: ok


undefined8 * FUN_180066ad0(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  size_t sVar1;
  char *_Str;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  FUN_1800133b0(local_28,&local_28);
  *param_1 = vftable_std_filesystem_filesystem_error;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 7;
  *(undefined2 *)(param_1 + 5) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 7;
  *(undefined2 *)(param_1 + 9) = 0;
  _Str = "Unknown exception";
  if ((char *)param_1[1] != (char *)0x0) {
    _Str = (char *)param_1[1];
  }
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  sVar1 = strlen(_Str);
  FUN_18001d080(param_1 + 0xd,_Str,sVar1);
  return param_1;
}


