// 0x180262410  std_TextEditor_VTransaction_?$_Ref_count_obj2_vfunc02
// size=43 thunk=false
// signature: undefined std_TextEditor_VTransaction_?$_Ref_count_obj2_vfunc02()
// status: ok


undefined8 *
std_TextEditor_VTransaction____Ref_count_obj2_vfunc02(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = vftable_std_TextEditor_VTransaction____Ref_count_obj2;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


