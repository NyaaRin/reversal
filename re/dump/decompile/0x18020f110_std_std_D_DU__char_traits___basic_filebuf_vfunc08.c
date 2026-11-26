// 0x18020f110  std_std_D_DU?$char_traits_?$basic_filebuf_vfunc08
// size=322 thunk=false
// signature: undefined std_std_D_DU?$char_traits_?$basic_filebuf_vfunc08()
// status: ok


longlong std_std_D_DU__char_traits___basic_filebuf_vfunc08
                   (basic_streambuf<char,std::char_traits<char>_> *param_1,char *param_2,
                   ulonglong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  size_t sVar3;
  int iVar4;
  ulonglong _Size;
  ulonglong _Count;
  
  if ((longlong)param_3 < 1) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00018020f141. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar2 = std::basic_streambuf<char,std::char_traits<char>_>::xsgetn(param_1,param_2,param_3);
    return lVar2;
  }
  if ((void *)**(undefined8 **)(param_1 + 0x38) == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = **(int **)(param_1 + 0x50);
  }
  _Count = param_3;
  if (iVar4 != 0) {
    _Size = param_3;
    if ((ulonglong)(longlong)iVar4 < param_3) {
      _Size = (longlong)iVar4;
    }
    memcpy(param_2,(void *)**(undefined8 **)(param_1 + 0x38),_Size);
    param_2 = param_2 + _Size;
    _Count = param_3 - _Size;
    **(int **)(param_1 + 0x50) = **(int **)(param_1 + 0x50) - (int)_Size;
    **(longlong **)(param_1 + 0x38) = **(longlong **)(param_1 + 0x38) + (longlong)(int)_Size;
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    if ((basic_streambuf<char,std::char_traits<char>_> *)**(longlong **)(param_1 + 0x18) ==
        param_1 + 0x70) {
      lVar2 = *(longlong *)(param_1 + 0x88);
      uVar1 = *(undefined8 *)(param_1 + 0x90);
      **(longlong **)(param_1 + 0x18) = lVar2;
      **(longlong **)(param_1 + 0x38) = lVar2;
      **(int **)(param_1 + 0x50) = (int)uVar1 - (int)lVar2;
    }
    while (0xfff < _Count) {
      sVar3 = fread(param_2,1,0xfff,*(FILE **)(param_1 + 0x80));
      _Count = _Count - sVar3;
      if (sVar3 != 0xfff) goto LAB_18020f23e;
      param_2 = param_2 + 0xfff;
    }
    if (_Count != 0) {
      sVar3 = fread(param_2,1,_Count,*(FILE **)(param_1 + 0x80));
      _Count = _Count - sVar3;
    }
  }
LAB_18020f23e:
  return param_3 - _Count;
}


