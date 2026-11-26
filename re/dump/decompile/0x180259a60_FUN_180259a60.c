// 0x180259a60  FUN_180259a60
// size=499 thunk=false
// signature: undefined FUN_180259a60()
// status: ok


void FUN_180259a60(longlong param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  void *_Src;
  longlong *plVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  char cVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  undefined4 *puVar11;
  ulonglong *puVar12;
  void *_Dst;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  plVar1 = (longlong *)(param_1 + 0xf0);
  local_38 = 0;
  uVar8 = (*(longlong *)(param_1 + 0xf8) - *plVar1 >> 4) * -0x5555555555555555;
  uStack_30 = 0;
  uVar2 = *(ulonglong *)(param_1 + 0x110);
  local_28 = 0;
  uStack_20 = 0;
  if (uVar8 < uVar2 || uVar8 - uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180262180();
  }
  puVar10 = (ulonglong *)(uVar2 * 0x30 + *plVar1);
  bVar13 = *puVar10 < puVar10[2];
  bVar14 = false;
  if (*puVar10 == puVar10[2]) {
    bVar13 = puVar10[1] < puVar10[3];
    bVar14 = puVar10[1] == puVar10[3];
  }
  if (bVar13 || bVar14) {
    puVar10 = puVar10 + 2;
  }
  local_18 = (undefined4)*puVar10;
  uStack_14 = *(undefined4 *)((longlong)puVar10 + 4);
  uStack_10 = (undefined4)puVar10[1];
  uStack_c = *(undefined4 *)((longlong)puVar10 + 0xc);
  cVar7 = FUN_180255a80(param_1 + 0x50,&local_18,param_2,param_3,param_4,&local_38,&local_28);
  if (cVar7 == '\0') {
    _Src = (void *)*plVar1;
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
    *(undefined1 *)(*plVar1 + 0x21) = 1;
    puVar4 = (ulonglong *)*plVar1;
    puVar10 = puVar4 + 2;
    bVar14 = *puVar4 < puVar4[2];
    if (*puVar4 == puVar4[2]) {
      bVar13 = puVar4[3] < puVar4[1];
      bVar14 = puVar4[1] < puVar4[3];
      bVar15 = puVar4[1] == puVar4[3];
    }
    else {
      bVar13 = !bVar14;
      bVar15 = false;
    }
    puVar12 = puVar4;
    if (bVar14 || bVar15) {
      puVar12 = puVar10;
    }
    puVar9 = puVar4;
    if (!bVar13) {
      puVar9 = puVar10;
    }
    uVar2 = *puVar12;
    uVar8 = puVar12[1];
    uVar5 = *puVar9;
    uVar6 = puVar9[1];
    *(undefined1 *)((longlong)puVar4 + 0x22) = 1;
    *puVar10 = uVar2;
    puVar4[3] = uVar8;
    *puVar4 = uVar5;
    puVar4[1] = uVar6;
    return;
  }
  puVar3 = (undefined4 *)*plVar1;
  puVar11 = *(undefined4 **)(param_1 + 0xf8);
  local_18 = (undefined4)local_28;
  uStack_14 = local_28._4_4_;
  uStack_10 = (undefined4)uStack_20;
  uStack_c = uStack_20._4_4_;
  if (puVar3 != puVar11) {
    *(undefined4 **)(param_1 + 0xf8) = puVar3;
    puVar11 = puVar3;
  }
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  if (puVar11 == *(undefined4 **)(param_1 + 0x100)) {
    FUN_180262ec0(plVar1,(undefined4)local_28,&local_38,&local_18);
  }
  else {
    *puVar11 = (undefined4)local_38;
    puVar11[1] = local_38._4_4_;
    puVar11[2] = (undefined4)uStack_30;
    puVar11[3] = uStack_30._4_4_;
    *(undefined2 *)(puVar11 + 8) = 0x100;
    puVar11[4] = (undefined4)local_28;
    puVar11[5] = local_28._4_4_;
    puVar11[6] = (undefined4)uStack_20;
    puVar11[7] = uStack_20._4_4_;
    *(undefined1 *)((longlong)puVar11 + 0x22) = 1;
    *(undefined8 *)(puVar11 + 10) = 0;
    *(longlong *)(param_1 + 0xf8) = *(longlong *)(param_1 + 0xf8) + 0x30;
  }
  *(undefined1 *)(*plVar1 + 0x20) = 1;
  *(undefined1 *)(*plVar1 + 0x21) = 1;
  FUN_18024f370(param_1);
  return;
}


