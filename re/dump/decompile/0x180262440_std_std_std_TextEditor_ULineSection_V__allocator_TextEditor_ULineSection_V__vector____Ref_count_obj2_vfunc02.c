// 0x180262440  std_std_std_TextEditor_ULineSection_V?$allocator_TextEditor_ULineSection_V?$vector_?$_Ref_count_obj2_vfunc02
// size=43 thunk=false
// signature: undefined std_std_std_TextEditor_ULineSection_V?$allocator_TextEditor_ULineSection_V?$vector_?$_Ref_count_obj2_vfunc02()
// status: ok


undefined8 *
std_std_std_TextEditor_ULineSection_V__allocator_TextEditor_ULineSection_V__vector____Ref_count_obj2_vfunc02
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = 
  vftable_std_std_std_TextEditor_ULineSection_V__allocator_TextEditor_ULineSection_V__vector____Ref_count_obj2
  ;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


