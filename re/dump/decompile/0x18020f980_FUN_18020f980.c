// 0x18020f980  FUN_18020f980
// size=161 thunk=false
// signature: undefined FUN_18020f980()
// status: ok


basic_istream<char,std::char_traits<char>_> *
FUN_18020f980(basic_istream<char,std::char_traits<char>_> *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined **)param_1 = &DAT_18033dc58;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>
            ((basic_ios<char,std::char_traits<char>_> *)(param_1 + 0x90));
  uVar2 = 1;
  std::basic_istream<char,std::char_traits<char>_>::basic_istream<char,std::char_traits<char>_>
            (param_1,(basic_streambuf<char,std::char_traits<char>_> *)(param_1 + 0x10),false);
  *(undefined ***)(param_1 + *(int *)(*(longlong *)param_1 + 4)) =
       vftable_std_2_D_V__allocator_std_D_DU__char_traits___basic_istringstream;
  iVar1 = *(int *)(*(longlong *)param_1 + 4) + -0x90;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + -4) = iVar1;
  FUN_18021eaf0(param_1 + 0x10,param_2,1,iVar1,uVar2);
  return param_1;
}


