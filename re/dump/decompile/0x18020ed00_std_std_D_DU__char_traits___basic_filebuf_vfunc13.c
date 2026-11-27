// 0x18020ed00  std_std_D_DU?$char_traits_?$basic_filebuf_vfunc13
// size=72 thunk=false
// signature: undefined std_std_D_DU?$char_traits_?$basic_filebuf_vfunc13()
// status: ok


int std_std_D_DU__char_traits___basic_filebuf_vfunc13(longlong *param_1)

{
  int iVar1;
  
  if (param_1[0x10] != 0) {
    iVar1 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
    if (iVar1 != -1) {
      iVar1 = fflush((FILE *)param_1[0x10]);
      return (-1 < iVar1) - 1;
    }
  }
  return 0;
}


