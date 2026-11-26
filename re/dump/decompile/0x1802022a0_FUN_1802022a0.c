// 0x1802022a0  FUN_1802022a0
// size=296 thunk=false
// signature: undefined FUN_1802022a0()
// status: ok


basic_ostream<char,std::char_traits<char>_> *
FUN_1802022a0(basic_ostream<char,std::char_traits<char>_> *param_1,undefined8 *param_2)

{
  basic_streambuf<char,std::char_traits<char>_> *this;
  longlong lVar1;
  
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  *(undefined **)param_1 = &DAT_18033c6ac;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>
            ((basic_ios<char,std::char_traits<char>_> *)(param_1 + 0xa8));
  this = (basic_streambuf<char,std::char_traits<char>_> *)(param_1 + 8);
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            (param_1,this,false);
  *(undefined ***)(param_1 + *(int *)(*(longlong *)param_1 + 4)) =
       vftable_std_std_D_DU__char_traits___basic_ofstream;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + -4) =
       *(int *)(*(longlong *)param_1 + 4) + -0xa8;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            (this);
  *(undefined ***)this = vftable_std_std_D_DU__char_traits___basic_filebuf;
  param_1[0x84] = (basic_ostream<char,std::char_traits<char>_>)0x0;
  param_1[0x79] = (basic_ostream<char,std::char_traits<char>_>)0x0;
  std::basic_streambuf<char,std::char_traits<char>_>::_Init(this);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x7c) = DAT_180570808;
  *(undefined8 *)(param_1 + 0x70) = 0;
  lVar1 = FUN_18022ec40(this,param_2);
  if (lVar1 == 0) {
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)
               (param_1 + *(int *)(*(longlong *)param_1 + 4)),2,false);
  }
  *(undefined ***)(param_1 + *(int *)(*(longlong *)param_1 + 4)) =
       vftable_std_std_D_DU__char_traits___basic_ofstream;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + -4) =
       *(int *)(*(longlong *)param_1 + 4) + -0xa8;
  return param_1;
}


