// 0x1802598d0  FUN_1802598d0
// size=396 thunk=false
// signature: undefined FUN_1802598d0()
// status: ok


void FUN_1802598d0(longlong param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  void *_Src;
  ulonglong *puVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  ulonglong *puVar4;
  bool bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  char cVar10;
  ulonglong *puVar11;
  undefined4 *puVar12;
  ulonglong *puVar13;
  void *_Dst;
  bool bVar14;
  bool bVar15;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  plVar2 = (longlong *)(param_1 + 0xf0);
  local_38 = 0;
  uStack_30 = 0;
  local_18 = 0;
  uStack_10 = 0;
  local_28 = 0;
  uStack_20 = 0;
  cVar10 = FUN_180255a80(param_1 + 0x50,&local_28,param_2,param_3,param_4,&local_38,&local_18);
  if (cVar10 == '\0') {
    _Src = (void *)*plVar2;
    while (_Dst = _Src, _Dst < *(void **)(param_1 + 0xf8)) {
      _Src = (void *)((longlong)_Dst + 0x30);
      if (*(char *)((longlong)_Dst + 0x20) == '\0') {
        memmove(_Dst,_Src,(longlong)*(void **)(param_1 + 0xf8) - (longlong)_Src);
        *(longlong *)(param_1 + 0xf8) = *(longlong *)(param_1 + 0xf8) + -0x30;
        _Src = _Dst;
      }
    }
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined1 *)(*plVar2 + 0x21) = 1;
    puVar4 = (ulonglong *)*plVar2;
    puVar1 = puVar4 + 2;
    bVar14 = *puVar4 < puVar4[2];
    if (*puVar4 == puVar4[2]) {
      bVar5 = puVar4[3] < puVar4[1];
      bVar14 = puVar4[1] < puVar4[3];
      bVar15 = puVar4[1] == puVar4[3];
    }
    else {
      bVar5 = !bVar14;
      bVar15 = false;
    }
    puVar13 = puVar4;
    if (bVar14 || bVar15) {
      puVar13 = puVar1;
    }
    puVar11 = puVar4;
    if (!bVar5) {
      puVar11 = puVar1;
    }
    uVar6 = *puVar13;
    uVar7 = puVar13[1];
    uVar8 = *puVar11;
    uVar9 = puVar11[1];
    *(undefined1 *)((longlong)puVar4 + 0x22) = 1;
    *puVar1 = uVar6;
    puVar4[3] = uVar7;
    *puVar4 = uVar8;
    puVar4[1] = uVar9;
    return;
  }
  puVar3 = (undefined4 *)*plVar2;
  puVar12 = *(undefined4 **)(param_1 + 0xf8);
  local_28 = local_18;
  uStack_20 = uStack_10;
  if (puVar3 != puVar12) {
    *(undefined4 **)(param_1 + 0xf8) = puVar3;
    puVar12 = puVar3;
  }
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  if (puVar12 == *(undefined4 **)(param_1 + 0x100)) {
    FUN_180262ec0(plVar2,(undefined4)local_18,&local_38,&local_28);
  }
  else {
    *puVar12 = (undefined4)local_38;
    puVar12[1] = local_38._4_4_;
    puVar12[2] = (undefined4)uStack_30;
    puVar12[3] = uStack_30._4_4_;
    *(undefined2 *)(puVar12 + 8) = 0x100;
    puVar12[4] = (undefined4)local_18;
    puVar12[5] = local_18._4_4_;
    puVar12[6] = (undefined4)uStack_10;
    puVar12[7] = uStack_10._4_4_;
    *(undefined1 *)((longlong)puVar12 + 0x22) = 1;
    *(undefined8 *)(puVar12 + 10) = 0;
    *(longlong *)(param_1 + 0xf8) = *(longlong *)(param_1 + 0xf8) + 0x30;
  }
  *(undefined1 *)(*plVar2 + 0x20) = 1;
  *(undefined1 *)(*plVar2 + 0x21) = 1;
  FUN_18024f370(param_1);
  return;
}


