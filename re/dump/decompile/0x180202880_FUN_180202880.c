// 0x180202880  FUN_180202880
// size=59 thunk=false
// signature: undefined FUN_180202880()
// status: ok


void FUN_180202880(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = std::basic_ios<char,std::char_traits<char>_>::widen
                    ((basic_ios<char,std::char_traits<char>_> *)
                     ((longlong)*(int *)(*param_1 + 4) + (longlong)param_1),'\n');
  FUN_180210550(param_1,param_2,cVar1);
  return;
}


