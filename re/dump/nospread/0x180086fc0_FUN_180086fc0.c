// 180086fc0  FUN_180086fc0
// signature: undefined FUN_180086fc0()
// status: ok


undefined8 FUN_180086fc0(longlong param_1,longlong param_2)

{
  char *_Str;
  size_t sVar1;
  undefined4 uVar2;
  char *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (*(int *)(param_1 + 0x48) != 1) {
    if (*(int *)(param_1 + 0x48) == 0) {
      return 0;
    }
    if (((param_2 != 0) && (_Str = (char *)FUN_18001e4e0(param_2), _Str != (char *)0x0)) &&
       ((char *)0x10000 < _Str)) {
      local_38 = (char *)0x0;
      local_30 = 0;
      uStack_28 = 0;
      local_20 = 0;
      local_18 = 0;
      sVar1 = strlen(_Str);
      uVar2 = FUN_18001d080(&local_30,_Str,sVar1);
      FUN_18020c000(uVar2,&local_38,&local_30);
      FUN_18020e450(&local_30);
      if ((local_38 != DAT_1803fa8b0) &&
         ((*(float *)(local_38 + 0x40) != 0.0 || (*(float *)(local_38 + 0x44) != 0.0)))) {
        return 0;
      }
    }
  }
  return 1;
}


