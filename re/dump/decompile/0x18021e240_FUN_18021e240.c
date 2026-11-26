// 0x18021e240  FUN_18021e240
// size=66 thunk=false
// signature: undefined FUN_18021e240()
// status: ok


void FUN_18021e240(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = std::uncaught_exceptions();
  if (iVar2 == 0) {
    std::basic_ostream<char,std::char_traits<char>_>::_Osfx
              ((basic_ostream<char,std::char_traits<char>_> *)*param_1);
  }
  plVar1 = *(longlong **)((longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48 + *param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}


