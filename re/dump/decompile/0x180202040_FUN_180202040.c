// 0x180202040  FUN_180202040
// size=296 thunk=false
// signature: undefined FUN_180202040()
// status: ok


basic_istream<char,std::char_traits<char>_> *
FUN_180202040(basic_istream<char,std::char_traits<char>_> *param_1,undefined8 *param_2)

{
  basic_streambuf<char,std::char_traits<char>_> *this;
  longlong lVar1;
  
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  *(undefined **)param_1 = &DAT_18033d798;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>
            ((basic_ios<char,std::char_traits<char>_> *)(param_1 + 0xb0));
  this = (basic_streambuf<char,std::char_traits<char>_> *)(param_1 + 0x10);
  std::basic_istream<char,std::char_traits<char>_>::basic_istream<char,std::char_traits<char>_>
            (param_1,this,false);
  *(undefined ***)(param_1 + *(int *)(*(longlong *)param_1 + 4)) =
       vftable_std_std_D_DU__char_traits___basic_ifstream;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + -4) =
       *(int *)(*(longlong *)param_1 + 4) + -0xb0;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            (this);
  *(undefined ***)this = vftable_std_std_D_DU__char_traits___basic_filebuf;
  param_1[0x8c] = (basic_istream<char,std::char_traits<char>_>)0x0;
  param_1[0x81] = (basic_istream<char,std::char_traits<char>_>)0x0;
  std::basic_streambuf<char,std::char_traits<char>_>::_Init(this);
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x84) = DAT_180570808;
  *(undefined8 *)(param_1 + 0x78) = 0;
  lVar1 = FUN_18022ec40(this,param_2);
  if (lVar1 == 0) {
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)
               (param_1 + *(int *)(*(longlong *)param_1 + 4)),2,false);
  }
  *(undefined ***)(param_1 + *(int *)(*(longlong *)param_1 + 4)) =
       vftable_std_std_D_DU__char_traits___basic_ifstream;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + -4) =
       *(int *)(*(longlong *)param_1 + 4) + -0xb0;
  return param_1;
}


