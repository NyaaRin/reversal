// 0x1802542a0  FUN_1802542a0
// size=188 thunk=false
// signature: undefined FUN_1802542a0()
// status: ok


void FUN_1802542a0(longlong *param_1,char param_2)

{
  void *_Src;
  ulonglong *puVar1;
  ulonglong *puVar2;
  bool bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  void *_Dst;
  bool bVar10;
  bool bVar11;
  
  _Src = (void *)*param_1;
  while (_Dst = _Src, _Dst < (void *)param_1[1]) {
    _Src = (void *)((longlong)_Dst + 0x30);
    if (*(char *)((longlong)_Dst + 0x20) == '\0') {
      memmove(_Dst,_Src,param_1[1] - (longlong)_Src);
      param_1[1] = param_1[1] + -0x30;
      _Src = _Dst;
    }
  }
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(*param_1 + 0x21) = 1;
  if (param_2 != '\0') {
    puVar2 = (ulonglong *)*param_1;
    puVar1 = puVar2 + 2;
    bVar10 = *puVar2 < puVar2[2];
    if (*puVar2 == puVar2[2]) {
      bVar3 = puVar2[3] < puVar2[1];
      bVar10 = puVar2[1] < puVar2[3];
      bVar11 = puVar2[1] == puVar2[3];
    }
    else {
      bVar3 = !bVar10;
      bVar11 = false;
    }
    puVar9 = puVar2;
    if (bVar10 || bVar11) {
      puVar9 = puVar1;
    }
    puVar8 = puVar2;
    if (!bVar3) {
      puVar8 = puVar1;
    }
    uVar4 = *puVar9;
    uVar5 = puVar9[1];
    uVar6 = *puVar8;
    uVar7 = puVar8[1];
    *(undefined1 *)((longlong)puVar2 + 0x22) = 1;
    *puVar1 = uVar4;
    puVar2[3] = uVar5;
    *puVar2 = uVar6;
    puVar2[1] = uVar7;
  }
  return;
}


