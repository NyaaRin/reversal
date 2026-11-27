// 0x18023ad10  FUN_18023ad10
// size=234 thunk=false
// signature: undefined FUN_18023ad10()
// status: ok


void FUN_18023ad10(int *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *_Str1;
  int *_Str2;
  
  _Str2 = param_1 + 2;
  piVar4 = _Str2;
  if (0xf < *(ulonglong *)(param_1 + 8)) {
    piVar4 = *(int **)_Str2;
  }
  _Str1 = param_2 + 2;
  piVar3 = _Str1;
  if (0xf < *(ulonglong *)(param_2 + 8)) {
    piVar3 = *(int **)_Str1;
  }
  iVar2 = _stricmp((char *)piVar3,(char *)piVar4);
  if (iVar2 == 0) {
    bVar1 = *param_2 < *param_1;
  }
  else {
    bVar1 = SUB41((uint)iVar2 >> 0x1f,0);
  }
  if (bVar1 != false) {
    FUN_18023ae00(param_2,param_1);
  }
  piVar4 = _Str1;
  if (0xf < *(ulonglong *)(param_2 + 8)) {
    piVar4 = *(int **)_Str1;
  }
  piVar3 = param_3 + 2;
  if (0xf < *(ulonglong *)(param_3 + 8)) {
    piVar3 = *(int **)piVar3;
  }
  iVar2 = _stricmp((char *)piVar3,(char *)piVar4);
  if (iVar2 == 0) {
    bVar1 = *param_3 < *param_2;
  }
  else {
    bVar1 = SUB41((uint)iVar2 >> 0x1f,0);
  }
  if (bVar1 != false) {
    FUN_18023ae00(param_3,param_2);
    if (0xf < *(ulonglong *)(param_1 + 8)) {
      _Str2 = *(int **)_Str2;
    }
    if (0xf < *(ulonglong *)(param_2 + 8)) {
      _Str1 = *(int **)_Str1;
    }
    iVar2 = _stricmp((char *)_Str1,(char *)_Str2);
    if (iVar2 == 0) {
      bVar1 = *param_2 < *param_1;
    }
    else {
      bVar1 = SUB41((uint)iVar2 >> 0x1f,0);
    }
    if (bVar1 != false) {
      FUN_18023ae00(param_2,param_1);
    }
  }
  return;
}


