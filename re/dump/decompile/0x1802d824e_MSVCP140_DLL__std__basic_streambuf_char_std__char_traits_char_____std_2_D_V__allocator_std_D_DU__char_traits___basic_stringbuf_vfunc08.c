// 0x1802d824e  MSVCP140.DLL::std::basic_streambuf<char,std::char_traits<char>_>::std_2_D_V?$allocator_std_D_DU?$char_traits_?$basic_stringbuf_vfunc08
// size=6 thunk=true
// signature: __int64 __thiscall std_2_D_V?$allocator_std_D_DU?$char_traits_?$basic_stringbuf_vfunc08(char * param_1, __int64 param_2)
// status: ok


__int64 __thiscall
std::basic_streambuf<char,std::char_traits<char>_>::
std_2_D_V__allocator_std_D_DU__char_traits___basic_stringbuf_vfunc08
          (basic_streambuf<char,std::char_traits<char>_> *this,char *param_1,__int64 param_2)

{
  __int64 _Var1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d824e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var1 = xsgetn(this,param_1,param_2);
  return _Var1;
}


