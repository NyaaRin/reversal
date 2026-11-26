// 0x18012b500  FUN_18012b500
// size=277 thunk=false
// signature: undefined FUN_18012b500()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_18012b500(undefined8 param_1,char *param_2,__int64 param_3)

{
  bool bVar1;
  undefined1 auStack_178 [48];
  basic_ios<char,std::char_traits<char>_> *local_148;
  int iStack_13c;
  longlong local_138;
  undefined1 local_130 [8];
  byte abStack_128 [152];
  basic_ios<char,std::char_traits<char>_> local_90 [104];
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_178;
  memset(&local_138,0,0x108);
  FUN_1802022a0(&local_138,param_1,0x30);
  if ((abStack_128[*(int *)(local_138 + 4)] & 6) == 0) {
    std::basic_ostream<char,std::char_traits<char>_>::write
              ((basic_ostream<char,std::char_traits<char>_> *)&local_138,param_2,param_3);
    bVar1 = *(int *)(abStack_128 + *(int *)(local_138 + 4)) == 0;
  }
  else {
    bVar1 = false;
  }
  local_148 = local_90;
  *(undefined ***)(local_130 + (longlong)*(int *)(local_138 + 4) + -8) =
       vftable_std_std_D_DU__char_traits___basic_ofstream;
  *(int *)((longlong)&iStack_13c + (longlong)*(int *)(local_138 + 4)) =
       *(int *)(local_138 + 4) + -0xa8;
  FUN_18020f850(local_130);
  *(code **)(local_130 + (longlong)*(int *)(local_138 + 4) + -8) = _vftable__exref;
  *(int *)((longlong)&iStack_13c + (longlong)*(int *)(local_138 + 4)) =
       *(int *)(local_138 + 4) + -0x10;
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_90);
  return bVar1;
}


