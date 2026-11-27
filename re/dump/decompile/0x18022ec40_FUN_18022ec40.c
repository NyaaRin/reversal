// 0x18022ec40  FUN_18022ec40
// size=317 thunk=false
// signature: undefined FUN_18022ec40()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

basic_streambuf<char,std::char_traits<char>_> *
FUN_18022ec40(basic_streambuf<char,std::char_traits<char>_> *param_1,wchar_t *param_2,int param_3)

{
  bool bVar1;
  _iobuf *p_Var2;
  undefined8 uVar3;
  codecvt_base *this;
  undefined8 *puVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  if ((*(longlong *)(param_1 + 0x80) == 0) &&
     (p_Var2 = std::_Fiopen(param_2,param_3,0x40), p_Var2 != (_iobuf *)0x0)) {
    param_1[0x7c] = (basic_streambuf<char,std::char_traits<char>_>)0x1;
    param_1[0x71] = (basic_streambuf<char,std::char_traits<char>_>)0x0;
    std::basic_streambuf<char,std::char_traits<char>_>::_Init(param_1);
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    _get_stream_buffer_pointers(p_Var2,&local_48,&local_40,&local_38);
    *(undefined8 *)(param_1 + 0x18) = local_48;
    *(undefined8 *)(param_1 + 0x20) = local_48;
    *(undefined8 *)(param_1 + 0x38) = local_40;
    *(undefined8 *)(param_1 + 0x40) = local_40;
    *(undefined8 *)(param_1 + 0x50) = local_38;
    *(undefined8 *)(param_1 + 0x58) = local_38;
    *(_iobuf **)(param_1 + 0x80) = p_Var2;
    *(undefined8 *)(param_1 + 0x74) = DAT_180570808;
    *(undefined8 *)(param_1 + 0x68) = 0;
    uVar3 = std::basic_streambuf<char,std::char_traits<char>_>::getloc(param_1);
    this = (codecvt_base *)FUN_18021af80(uVar3);
    bVar1 = std::codecvt_base::always_noconv(this);
    if (bVar1) {
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    else {
      *(codecvt_base **)(param_1 + 0x68) = this;
      std::basic_streambuf<char,std::char_traits<char>_>::_Init(param_1);
    }
    if ((local_30 != (longlong *)0x0) &&
       (puVar4 = (undefined8 *)(**(code **)(*local_30 + 0x10))(), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  else {
    param_1 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
  }
  return param_1;
}


