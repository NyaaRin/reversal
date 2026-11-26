// 0x1800136f0  std__Generic_error_category_vfunc02
// size=105 thunk=false
// signature: undefined std__Generic_error_category_vfunc02()
// status: ok


undefined8 *
std__Generic_error_category_vfunc02
          (undefined8 param_1,undefined8 *param_2,int param_3,undefined8 param_4)

{
  char *_Str;
  size_t sVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  _Str = std::_Syserror_map(param_3);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  sVar1 = strlen(_Str);
  FUN_18001d080(param_2,_Str,sVar1,param_4,uVar2);
  return param_2;
}


