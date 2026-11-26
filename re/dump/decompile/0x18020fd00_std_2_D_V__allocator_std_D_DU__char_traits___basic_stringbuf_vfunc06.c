// 0x18020fd00  std_2_D_V?$allocator_std_D_DU?$char_traits_?$basic_stringbuf_vfunc06
// size=92 thunk=false
// signature: undefined std_2_D_V?$allocator_std_D_DU?$char_traits_?$basic_stringbuf_vfunc06()
// status: ok


ulonglong std_2_D_V__allocator_std_D_DU__char_traits___basic_stringbuf_vfunc06(longlong param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar1 = *(byte **)*(int **)(param_1 + 0x38);
  if (pbVar1 != (byte *)0x0) {
    if (pbVar1 < pbVar1 + **(int **)(param_1 + 0x50)) {
      return (ulonglong)*pbVar1;
    }
    pbVar2 = (byte *)**(undefined8 **)(param_1 + 0x40);
    if ((pbVar2 != (byte *)0x0) && ((*(byte *)(param_1 + 0x70) & 4) == 0)) {
      pbVar3 = *(byte **)(param_1 + 0x68);
      if (*(byte **)(param_1 + 0x68) < pbVar2) {
        pbVar3 = pbVar2;
      }
      if (pbVar1 < pbVar3) {
        *(byte **)(param_1 + 0x68) = pbVar3;
        **(int **)(param_1 + 0x50) = (int)pbVar3 - **(int **)(param_1 + 0x38);
        return (ulonglong)*(byte *)**(undefined8 **)(param_1 + 0x38);
      }
    }
  }
  return 0xffffffff;
}


