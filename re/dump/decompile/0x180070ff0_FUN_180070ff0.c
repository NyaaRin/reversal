// 0x180070ff0  FUN_180070ff0
// size=658 thunk=false
// signature: undefined FUN_180070ff0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180070ff0(undefined8 param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  basic_ios<char,std::char_traits<char>_> *_Str;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  basic_ios<char,std::char_traits<char>_> *local_170;
  basic_ios<char,std::char_traits<char>_> *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined *local_148 [3];
  undefined **local_130;
  basic_iostream<char,std::char_traits<char>_> local_128 [120];
  basic_ios<char,std::char_traits<char>_> local_b0 [104];
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_198;
  local_178 = 0;
  memset(local_148,0,0xf8);
  local_148[0] = &DAT_18030fce4;
  local_148[2] = &DAT_18033b3dc;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(local_b0);
  local_178 = 1;
  std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)local_148,
             (basic_streambuf<char,std::char_traits<char>_> *)&local_130);
  *(undefined ***)((longlong)local_148 + (longlong)*(int *)(local_148[0] + 4)) =
       vftable_std_2_D_V__allocator_std_D_DU__char_traits___basic_stringstream;
  *(int *)((longlong)local_148 + (longlong)*(int *)(local_148[0] + 4) + -4) =
       *(int *)(local_148[0] + 4) + -0x98;
  local_170 = (basic_ios<char,std::char_traits<char>_> *)&local_130;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)&local_130);
  local_130 = vftable_std_2_D_V__allocator_std_D_DU__char_traits___basic_stringbuf;
  puVar1 = param_2 + 2;
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  FUN_18022ed80(&local_130,param_2,*puVar1,0);
  uStack_160 = 0;
  local_158 = _DAT_1803814b0;
  uStack_150 = _UNK_1803814b8;
  local_168 = (basic_ios<char,std::char_traits<char>_> *)0x0;
  iVar4 = 0;
  while( true ) {
    plVar2 = (longlong *)FUN_180210550(local_148,&local_168,0x2c);
    if ((*(byte *)((longlong)*(int *)(*plVar2 + 4) + 0x10 + (longlong)plVar2) & 6) != 0) {
      FUN_18020e450(&local_168);
      local_170 = local_b0;
      *(undefined ***)((longlong)local_148 + (longlong)*(int *)(local_148[0] + 4)) =
           vftable_std_2_D_V__allocator_std_D_DU__char_traits___basic_stringstream;
      *(int *)((longlong)local_148 + (longlong)*(int *)(local_148[0] + 4) + -4) =
           *(int *)(local_148[0] + 4) + -0x98;
      FUN_18020ffc0(&local_130);
      std::basic_iostream<char,std::char_traits<char>_>::
      ~basic_iostream<char,std::char_traits<char>_>(local_128);
      std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
                (local_b0);
      return;
    }
    if (iVar4 == param_3) break;
    iVar4 = iVar4 + 1;
  }
  piVar3 = _errno();
  _Str = (basic_ios<char,std::char_traits<char>_> *)&local_168;
  if (0xf < uStack_150) {
    _Str = local_168;
  }
  *piVar3 = 0;
  strtod((char *)_Str,(char **)&local_170);
  if (_Str == local_170) {
    std::_Xinvalid_argument("invalid stod argument");
  }
  if (*piVar3 == 0x22) {
    std::_Xout_of_range("stod argument out of range");
  }
  FUN_18020e450(&local_168);
  local_170 = local_b0;
  *(undefined ***)((longlong)local_148 + (longlong)*(int *)(local_148[0] + 4)) =
       vftable_std_2_D_V__allocator_std_D_DU__char_traits___basic_stringstream;
  *(int *)((longlong)local_148 + (longlong)*(int *)(local_148[0] + 4) + -4) =
       *(int *)(local_148[0] + 4) + -0x98;
  FUN_18020ffc0(&local_130);
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
            (local_128);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_b0);
  return;
}


