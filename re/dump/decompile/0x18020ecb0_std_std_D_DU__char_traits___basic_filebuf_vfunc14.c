// 0x18020ecb0  std_std_D_DU?$char_traits_?$basic_filebuf_vfunc14
// size=80 thunk=false
// signature: undefined std_std_D_DU?$char_traits_?$basic_filebuf_vfunc14()
// status: ok


void std_std_D_DU__char_traits___basic_filebuf_vfunc14
               (basic_streambuf<char,std::char_traits<char>_> *param_1,undefined8 param_2)

{
  bool bVar1;
  codecvt_base *this;
  
  this = (codecvt_base *)FUN_18021af80(param_2);
  bVar1 = std::codecvt_base::always_noconv(this);
  if (bVar1) {
    *(undefined8 *)(param_1 + 0x68) = 0;
    return;
  }
  *(codecvt_base **)(param_1 + 0x68) = this;
                    /* WARNING: Could not recover jumptable at 0x00018020ecf9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,std::char_traits<char>_>::_Init(param_1);
  return;
}


