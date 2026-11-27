// 0x1802d825a  MSVCP140.DLL::std::basic_streambuf<char,std::char_traits<char>_>::std_2_D_V?$allocator_std_D_DU?$char_traits_?$basic_stringbuf_vfunc12
// size=6 thunk=true
// signature: basic_streambuf<char,struct_std::char_traits<char>_> * __thiscall std_2_D_V?$allocator_std_D_DU?$char_traits_?$basic_stringbuf_vfunc12(char * param_1, __int64 param_2)
// status: ok


basic_streambuf<char,struct_std::char_traits<char>_> * __thiscall
std::basic_streambuf<char,std::char_traits<char>_>::
std_2_D_V__allocator_std_D_DU__char_traits___basic_stringbuf_vfunc12
          (basic_streambuf<char,std::char_traits<char>_> *this,char *param_1,__int64 param_2)

{
  basic_streambuf<char,struct_std::char_traits<char>_> *pbVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802d825a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pbVar1 = setbuf(this,param_1,param_2);
  return pbVar1;
}


