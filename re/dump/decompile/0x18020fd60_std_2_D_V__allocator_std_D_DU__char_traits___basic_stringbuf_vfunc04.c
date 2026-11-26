// 0x18020fd60  std_2_D_V?$allocator_std_D_DU?$char_traits_?$basic_stringbuf_vfunc04
// size=82 thunk=false
// signature: undefined std_2_D_V?$allocator_std_D_DU?$char_traits_?$basic_stringbuf_vfunc04()
// status: ok


int std_2_D_V__allocator_std_D_DU__char_traits___basic_stringbuf_vfunc04
              (longlong param_1,int param_2)

{
  ulonglong uVar1;
  
  uVar1 = **(ulonglong **)(param_1 + 0x38);
  if (((uVar1 != 0) && (**(ulonglong **)(param_1 + 0x18) < uVar1)) &&
     ((param_2 == -1 ||
      (((char)param_2 == *(char *)(uVar1 - 1) || ((*(byte *)(param_1 + 0x70) & 2) == 0)))))) {
    **(int **)(param_1 + 0x50) = **(int **)(param_1 + 0x50) + 1;
    **(longlong **)(param_1 + 0x38) = **(longlong **)(param_1 + 0x38) + -1;
    if (param_2 == -1) {
      param_2 = 0;
    }
    else {
      *(char *)**(undefined8 **)(param_1 + 0x38) = (char)param_2;
    }
    return param_2;
  }
  return -1;
}


