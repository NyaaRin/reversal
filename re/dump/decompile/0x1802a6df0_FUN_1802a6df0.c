// 0x1802a6df0  FUN_1802a6df0
// size=385 thunk=false
// signature: undefined FUN_1802a6df0()
// status: ok


void FUN_1802a6df0(longlong param_1)

{
  char cVar1;
  int iVar2;
  void *_Dst;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  cVar1 = *(char *)(param_1 + 0x23c);
  if (cVar1 != '\0') {
    FUN_1802a6c10();
    iVar4 = *(int *)(param_1 + 0x1e4);
    iVar6 = 0;
    if (1 < *(short *)(param_1 + 0x200)) {
      iVar6 = (int)*(short *)(param_1 + 0x200);
    }
    if (iVar4 < iVar6) {
      if (iVar4 == 0) {
        iVar2 = 8;
      }
      else {
        iVar2 = iVar4 / 2 + iVar4;
      }
      iVar5 = iVar6;
      if (iVar6 < iVar2) {
        iVar5 = iVar2;
      }
      if (iVar4 < iVar5) {
        _Dst = (void *)FUN_18026f580((longlong)iVar5 * 0xc);
        if (*(void **)(param_1 + 0x1e8) != (void *)0x0) {
          memcpy(_Dst,*(void **)(param_1 + 0x1e8),(longlong)*(int *)(param_1 + 0x1e0) * 0xc);
          FUN_18026f680(*(undefined8 *)(param_1 + 0x1e8));
        }
        *(void **)(param_1 + 0x1e8) = _Dst;
        *(int *)(param_1 + 0x1e4) = iVar5;
      }
    }
    *(int *)(param_1 + 0x1e0) = iVar6;
    *(undefined1 *)(param_1 + 0x1fc) = 1;
    *(undefined1 *)(param_1 + 0x23c) = 0;
  }
  if (*(short *)(param_1 + 0x200) == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + 0x1d0;
    if (*(short *)(param_1 + 0x200) != 1) {
      lVar8 = *(longlong *)(param_1 + 0x1e8);
    }
  }
  if (((cVar1 != '\0') && (lVar8 != 0)) && (iVar4 = 0, 0 < *(int *)(param_1 + 0x6c))) {
    do {
      lVar7 = (longlong)iVar4 * 0x74 + *(longlong *)(param_1 + 0x18);
      lVar3 = (longlong)*(short *)(lVar7 + 0x5e);
      if (*(short *)(lVar7 + 0x5e) != -1) {
        *(undefined4 *)(lVar8 + lVar3 * 0xc) = *(undefined4 *)(lVar7 + 0x34);
        *(short *)(lVar8 + 4 + lVar3 * 0xc) = (short)iVar4;
        *(undefined2 *)(lVar8 + 6 + lVar3 * 0xc) = *(undefined2 *)(lVar7 + 0x5e);
        *(byte *)(lVar8 + 8 + lVar3 * 0xc) = *(byte *)(lVar7 + 0x71) & 3;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x6c));
  }
  *(int *)(param_1 + 0x1f8) = (int)*(short *)(param_1 + 0x200);
  *(longlong *)(param_1 + 0x1f0) = lVar8;
  return;
}


