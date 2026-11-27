// 0x180289f40  FUN_180289f40
// size=191 thunk=false
// signature: undefined FUN_180289f40()
// status: ok


void FUN_180289f40(int *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  void *_Dst;
  longlong lVar6;
  int iVar7;
  
  iVar2 = param_1[1];
  if (*param_1 == iVar2) {
    iVar7 = *param_1 + 1;
    if (iVar2 == 0) {
      iVar5 = 8;
    }
    else {
      iVar5 = iVar2 / 2 + iVar2;
    }
    if (iVar7 < iVar5) {
      iVar7 = iVar5;
    }
    if (iVar2 < iVar7) {
      _Dst = (void *)FUN_18026f580((longlong)iVar7 * 0x38);
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        memcpy(_Dst,*(void **)(param_1 + 2),(longlong)*param_1 * 0x38);
        FUN_18026f680(*(undefined8 *)(param_1 + 2));
      }
      *(void **)(param_1 + 2) = _Dst;
      param_1[1] = iVar7;
    }
  }
  uVar4 = param_2[1];
  lVar6 = (longlong)*param_1 * 0x38;
  lVar3 = *(longlong *)(param_1 + 2);
  *(undefined8 *)(lVar6 + lVar3) = *param_2;
  ((undefined8 *)(lVar6 + lVar3))[1] = uVar4;
  uVar4 = param_2[3];
  puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar3);
  *puVar1 = param_2[2];
  puVar1[1] = uVar4;
  uVar4 = param_2[5];
  puVar1 = (undefined8 *)(lVar6 + 0x20 + lVar3);
  *puVar1 = param_2[4];
  puVar1[1] = uVar4;
  *(undefined8 *)(lVar6 + 0x30 + lVar3) = param_2[6];
  *param_1 = *param_1 + 1;
  return;
}


