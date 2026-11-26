// 0x1802695b0  FUN_1802695b0
// size=324 thunk=false
// signature: undefined FUN_1802695b0()
// status: ok


void FUN_1802695b0(int *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  ulonglong *puVar3;
  void *_Dst;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  puVar3 = (ulonglong *)FUN_180012990();
  iVar1 = __stdio_common_vsprintf(*puVar3 | 1,0,0,param_2,0,param_3);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  if (0 < iVar1) {
    iVar2 = param_1[1];
    iVar5 = 1;
    if (*param_1 != 0) {
      iVar5 = *param_1;
    }
    iVar7 = iVar1 + iVar5;
    if (iVar2 <= iVar7) {
      iVar6 = iVar2 * 2;
      if (iVar2 * 2 < iVar7) {
        iVar6 = iVar7;
      }
      if (iVar2 < iVar6) {
        _Dst = (void *)FUN_18026f580((longlong)iVar6);
        if (*(void **)(param_1 + 2) != (void *)0x0) {
          memcpy(_Dst,*(void **)(param_1 + 2),(longlong)*param_1);
          FUN_18026f680(*(undefined8 *)(param_1 + 2));
        }
        *(void **)(param_1 + 2) = _Dst;
        param_1[1] = iVar6;
      }
    }
    FUN_18028a8d0(param_1,iVar7);
    lVar4 = *(longlong *)(param_1 + 2) + -1 + (longlong)iVar5;
    iVar2 = __stdio_common_vsprintf(*puVar3 | 1,lVar4,(longlong)iVar1 + 1,param_2,0,param_3);
    if (iVar2 < 0) {
      iVar2 = -1;
    }
    if (lVar4 != 0) {
      if ((iVar2 == -1) || ((int)((longlong)iVar1 + 1) <= iVar2)) {
        iVar2 = iVar1;
      }
      *(undefined1 *)(iVar2 + lVar4) = 0;
    }
  }
  return;
}


