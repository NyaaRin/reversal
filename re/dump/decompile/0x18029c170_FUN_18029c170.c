// 0x18029c170  FUN_18029c170
// size=220 thunk=false
// signature: undefined FUN_18029c170()
// status: ok


void FUN_18029c170(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  void *_Dst;
  int iVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x38);
  lVar3 = *(longlong *)(param_1 + 0x2b0);
  iVar1 = *(int *)(lVar3 + 0x54);
  iVar4 = *(int *)(lVar2 + 0x1c) / 2;
  if (iVar1 < iVar4) {
    if (iVar1 == 0) {
      iVar5 = 8;
    }
    else {
      iVar5 = iVar1 / 2 + iVar1;
    }
    iVar6 = iVar4;
    if (iVar4 < iVar5) {
      iVar6 = iVar5;
    }
    if (iVar1 < iVar6) {
      _Dst = (void *)FUN_18026f580((longlong)iVar6 << 4);
      if (*(void **)(lVar3 + 0x58) != (void *)0x0) {
        memcpy(_Dst,*(void **)(lVar3 + 0x58),(longlong)*(int *)(lVar3 + 0x50) << 4);
        FUN_18026f680(*(undefined8 *)(lVar3 + 0x58));
      }
      *(void **)(lVar3 + 0x58) = _Dst;
      *(int *)(lVar3 + 0x54) = iVar6;
    }
  }
  *(int *)(lVar3 + 0x50) = iVar4;
  FUN_18028adb0(lVar3,*(undefined4 *)(lVar2 + 0x1c),*(undefined4 *)(lVar2 + 0x20),
                *(undefined8 *)(lVar3 + 0x58),iVar4);
  *(undefined8 *)(lVar3 + 0x94) = 0;
  *(undefined8 *)(lVar3 + 0xa8) = 0;
  *(undefined8 *)(lVar3 + 0xb0) = 0;
  return;
}


