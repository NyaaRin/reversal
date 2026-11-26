// 0x18021e730  FUN_18021e730
// size=516 thunk=false
// signature: undefined FUN_18021e730()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

basic_istream<char,std::char_traits<char>_> *
FUN_18021e730(basic_istream<char,std::char_traits<char>_> *param_1,char *param_2)

{
  basic_streambuf<char,std::char_traits<char>_> *this;
  bool bVar1;
  _iobuf *p_Var2;
  undefined8 uVar3;
  codecvt_base *this_00;
  undefined8 *puVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  basic_istream<char,std::char_traits<char>_> *local_58;
  undefined8 local_48;
  undefined8 local_40;
  basic_streambuf<char,std::char_traits<char>_> *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  local_68 = 0;
  *(undefined **)param_1 = &DAT_18033d798;
  local_58 = param_1;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>
            ((basic_ios<char,std::char_traits<char>_> *)(param_1 + 0xb0));
  local_68 = 1;
  this = (basic_streambuf<char,std::char_traits<char>_> *)(param_1 + 0x10);
  std::basic_istream<char,std::char_traits<char>_>::basic_istream<char,std::char_traits<char>_>
            (param_1,this,false);
  *(undefined ***)(param_1 + *(int *)(*(longlong *)param_1 + 4)) =
       vftable_std_std_D_DU__char_traits___basic_ifstream;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + -4) =
       *(int *)(*(longlong *)param_1 + 4) + -0xb0;
  local_38 = this;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            (this);
  *(undefined ***)this = vftable_std_std_D_DU__char_traits___basic_filebuf;
  param_1[0x8c] = (basic_istream<char,std::char_traits<char>_>)0x0;
  param_1[0x81] = (basic_istream<char,std::char_traits<char>_>)0x0;
  std::basic_streambuf<char,std::char_traits<char>_>::_Init(this);
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x84) = DAT_180570808;
  *(undefined8 *)(param_1 + 0x78) = 0;
  if ((*(longlong *)(param_1 + 0x90) == 0) &&
     (p_Var2 = std::_Fiopen(param_2,0x21,0x40), p_Var2 != (_iobuf *)0x0)) {
    param_1[0x8c] = (basic_istream<char,std::char_traits<char>_>)0x1;
    param_1[0x81] = (basic_istream<char,std::char_traits<char>_>)0x0;
    std::basic_streambuf<char,std::char_traits<char>_>::_Init(this);
    local_48 = 0;
    local_40 = 0;
    local_38 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
    _get_stream_buffer_pointers(p_Var2,&local_48,&local_40,&local_38);
    *(undefined8 *)(param_1 + 0x28) = local_48;
    *(undefined8 *)(param_1 + 0x30) = local_48;
    *(undefined8 *)(param_1 + 0x48) = local_40;
    *(undefined8 *)(param_1 + 0x50) = local_40;
    *(basic_streambuf<char,std::char_traits<char>_> **)(param_1 + 0x60) = local_38;
    *(basic_streambuf<char,std::char_traits<char>_> **)(param_1 + 0x68) = local_38;
    *(_iobuf **)(param_1 + 0x90) = p_Var2;
    *(undefined8 *)(param_1 + 0x84) = DAT_180570808;
    *(undefined8 *)(param_1 + 0x78) = 0;
    uVar3 = std::basic_streambuf<char,std::char_traits<char>_>::getloc(this);
    this_00 = (codecvt_base *)FUN_18021af80(uVar3);
    bVar1 = std::codecvt_base::always_noconv(this_00);
    if (bVar1) {
      *(undefined8 *)(param_1 + 0x78) = 0;
    }
    else {
      *(codecvt_base **)(param_1 + 0x78) = this_00;
      std::basic_streambuf<char,std::char_traits<char>_>::_Init(this);
    }
    if ((local_30 != (longlong *)0x0) &&
       (puVar4 = (undefined8 *)(**(code **)(*local_30 + 0x10))(), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)(puVar4,1);
    }
    if (this != (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
      return param_1;
    }
  }
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)
             (param_1 + *(int *)(*(longlong *)param_1 + 4)),2,false);
  return param_1;
}


