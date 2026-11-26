// 0x180066b90  FUN_180066b90
// size=231 thunk=false
// signature: undefined FUN_180066b90()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_180066b90(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char *_Str;
  char *local_48;
  size_t sStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_48 = (char *)*param_4;
  sStack_40 = param_4[1];
  FUN_1800133b0(param_1,&local_48,param_2);
  *param_1 = vftable_std_filesystem_filesystem_error;
  FUN_18020e540(param_1 + 5,param_3);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 7;
  *(undefined2 *)(param_1 + 9) = 0;
  uStack_30 = 0;
  local_28 = _DAT_1803814a0;
  uStack_20 = _UNK_1803814a8;
  local_38 = 0;
  _Str = "Unknown exception";
  if ((char *)param_1[1] != (char *)0x0) {
    _Str = (char *)param_1[1];
  }
  sStack_40 = strlen(_Str);
  local_48 = _Str;
  FUN_180066c90(param_1 + 0xd,&local_48,param_3,&local_38);
  FUN_18021e290(&local_38);
  return param_1;
}


