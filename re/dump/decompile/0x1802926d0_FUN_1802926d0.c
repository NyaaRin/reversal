// 0x1802926d0  FUN_1802926d0
// size=207 thunk=false
// signature: undefined FUN_1802926d0()
// status: ok


void FUN_1802926d0(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  void *_Dst;
  int iVar8;
  
  iVar2 = *(int *)(param_1 + 0xb4);
  if (*(int *)(param_1 + 0xb0) == iVar2) {
    iVar8 = *(int *)(param_1 + 0xb0) + 1;
    if (iVar2 == 0) {
      iVar7 = 8;
    }
    else {
      iVar7 = iVar2 / 2 + iVar2;
    }
    if (iVar8 < iVar7) {
      iVar8 = iVar7;
    }
    if (iVar2 < iVar8) {
      _Dst = (void *)FUN_18026f580((longlong)iVar8 << 4);
      if (*(void **)(param_1 + 0xb8) != (void *)0x0) {
        memcpy(_Dst,*(void **)(param_1 + 0xb8),(longlong)*(int *)(param_1 + 0xb0) << 4);
        FUN_18026f680(*(undefined8 *)(param_1 + 0xb8));
      }
      *(void **)(param_1 + 0xb8) = _Dst;
      *(int *)(param_1 + 0xb4) = iVar8;
    }
  }
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0xb8) + (longlong)*(int *)(param_1 + 0xb0) * 0x10)
  ;
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
  *(undefined4 *)(param_1 + 0x70) = uVar3;
  *(undefined4 *)(param_1 + 0x74) = uVar4;
  *(undefined4 *)(param_1 + 0x78) = uVar5;
  *(undefined4 *)(param_1 + 0x7c) = uVar6;
  FUN_180292400(param_1);
  return;
}


