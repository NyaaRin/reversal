// 0x18028a430  FUN_18028a430
// size=172 thunk=false
// signature: undefined FUN_18028a430()
// status: ok


void FUN_18028a430(int *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  void *_Dst;
  int iVar6;
  
  iVar2 = param_1[1];
  if (*param_1 == iVar2) {
    iVar6 = *param_1 + 1;
    if (iVar2 == 0) {
      iVar5 = 8;
    }
    else {
      iVar5 = iVar2 / 2 + iVar2;
    }
    if (iVar6 < iVar5) {
      iVar6 = iVar5;
    }
    if (iVar2 < iVar6) {
      _Dst = (void *)FUN_18026f580((longlong)iVar6 * 0x1c);
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        memcpy(_Dst,*(void **)(param_1 + 2),(longlong)*param_1 * 0x1c);
        FUN_18026f680(*(undefined8 *)(param_1 + 2));
      }
      *(void **)(param_1 + 2) = _Dst;
      param_1[1] = iVar6;
    }
  }
  iVar2 = *param_1;
  uVar4 = param_2[1];
  lVar3 = *(longlong *)(param_1 + 2);
  puVar1 = (undefined8 *)((longlong)iVar2 * 0x1c + lVar3);
  *puVar1 = *param_2;
  puVar1[1] = uVar4;
  uVar4 = *(undefined8 *)((longlong)param_2 + 0x14);
  puVar1 = (undefined8 *)((longlong)iVar2 * 0x1c + 0xc + lVar3);
  *puVar1 = *(undefined8 *)((longlong)param_2 + 0xc);
  puVar1[1] = uVar4;
  *param_1 = *param_1 + 1;
  return;
}


