// 0x18020f040  std_std_D_DU?$char_traits_?$basic_filebuf_vfunc09
// size=197 thunk=false
// signature: undefined std_std_D_DU?$char_traits_?$basic_filebuf_vfunc09()
// status: ok


longlong std_std_D_DU__char_traits___basic_filebuf_vfunc09
                   (basic_streambuf<char,std::char_traits<char>_> *param_1,char *param_2,
                   size_t param_3)

{
  longlong lVar1;
  size_t sVar2;
  int iVar3;
  size_t _Count;
  
  if (*(longlong *)(param_1 + 0x68) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00018020f05f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar1 = std::basic_streambuf<char,std::char_traits<char>_>::xsputn(param_1,param_2,param_3);
    return lVar1;
  }
  if ((void *)**(undefined8 **)(param_1 + 0x40) == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int **)(param_1 + 0x58);
  }
  _Count = param_3;
  if (0 < (longlong)param_3) {
    if (0 < iVar3) {
      sVar2 = (longlong)iVar3;
      if ((longlong)param_3 < (longlong)iVar3) {
        sVar2 = param_3;
      }
      memcpy((void *)**(undefined8 **)(param_1 + 0x40),param_2,sVar2);
      _Count = param_3 - sVar2;
      **(int **)(param_1 + 0x58) = **(int **)(param_1 + 0x58) - (int)sVar2;
      **(longlong **)(param_1 + 0x40) = **(longlong **)(param_1 + 0x40) + (longlong)(int)sVar2;
      if ((longlong)_Count < 1) goto LAB_18020f0ed;
      param_2 = param_2 + sVar2;
    }
    if (*(FILE **)(param_1 + 0x80) != (FILE *)0x0) {
      sVar2 = fwrite(param_2,1,_Count,*(FILE **)(param_1 + 0x80));
      _Count = _Count - sVar2;
    }
  }
LAB_18020f0ed:
  return param_3 - _Count;
}


