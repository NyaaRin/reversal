// 0x18020e3f0  std_D_?$collate_vfunc03
// size=74 thunk=false
// signature: undefined std_D_?$collate_vfunc03()
// status: ok


ulonglong std_D___collate_vfunc03
                    (longlong param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  int iVar1;
  
  iVar1 = _Strcoll(param_2,param_3,param_4,param_5,(_Collvec *)(param_1 + 0x10));
  if (iVar1 < 0) {
    return 0xffffffff;
  }
  return (ulonglong)(iVar1 != 0);
}


