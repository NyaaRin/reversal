// 0x18020ed50  std_std_D_DU?$char_traits_?$basic_filebuf_vfunc12
// size=245 thunk=false
// signature: undefined std_std_D_DU?$char_traits_?$basic_filebuf_vfunc12()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

basic_streambuf<char,std::char_traits<char>_> *
std_std_D_DU__char_traits___basic_filebuf_vfunc12
          (basic_streambuf<char,std::char_traits<char>_> *param_1,char *param_2,size_t param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  if ((param_2 != (char *)0x0) || (iVar3 = 4, param_3 != 0)) {
    iVar3 = 0;
  }
  if ((*(FILE **)(param_1 + 0x80) != (FILE *)0x0) &&
     (iVar3 = setvbuf(*(FILE **)(param_1 + 0x80),param_2,iVar3,param_3), iVar3 == 0)) {
    lVar1 = *(longlong *)(param_1 + 0x80);
    param_1[0x7c] = (basic_streambuf<char,std::char_traits<char>_>)0x1;
    param_1[0x71] = (basic_streambuf<char,std::char_traits<char>_>)0x0;
    std::basic_streambuf<char,std::char_traits<char>_>::_Init(param_1);
    if (lVar1 != 0) {
      local_38 = 0;
      local_30 = 0;
      local_28 = 0;
      _get_stream_buffer_pointers(lVar1,&local_38,&local_30,&local_28);
      *(undefined8 *)(param_1 + 0x18) = local_38;
      *(undefined8 *)(param_1 + 0x20) = local_38;
      *(undefined8 *)(param_1 + 0x38) = local_30;
      *(undefined8 *)(param_1 + 0x40) = local_30;
      *(undefined8 *)(param_1 + 0x50) = local_28;
      *(undefined8 *)(param_1 + 0x58) = local_28;
    }
    uVar2 = DAT_180570808;
    *(longlong *)(param_1 + 0x80) = lVar1;
    *(undefined8 *)(param_1 + 0x74) = uVar2;
    *(undefined8 *)(param_1 + 0x68) = 0;
    return param_1;
  }
  return (basic_streambuf<char,std::char_traits<char>_> *)0x0;
}


