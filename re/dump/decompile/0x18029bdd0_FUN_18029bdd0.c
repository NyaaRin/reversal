// 0x18029bdd0  FUN_18029bdd0
// size=529 thunk=false
// signature: undefined FUN_18029bdd0()
// status: ok


void FUN_18029bdd0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  void *_Dst;
  void *pvVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined1 local_res8 [8];
  void *local_res10;
  undefined1 *local_res18;
  void *local_res20;
  
  if (*(longlong *)(param_1 + 0x2b8) == 0) {
    FUN_18029d430();
    FUN_1802994b0();
  }
  if ((*(longlong *)(param_1 + 0x38) == 0) ||
     (*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x28) == 0)) {
    uVar5 = *(int *)(param_1 + 0x10) - 1;
    uVar5 = (int)uVar5 >> 1 | uVar5;
    uVar5 = (int)uVar5 >> 2 | uVar5;
    uVar5 = (int)uVar5 >> 4 | uVar5;
    uVar5 = (int)uVar5 >> 8 | uVar5;
    uVar6 = *(int *)(param_1 + 0xc) - 1;
    uVar6 = (int)uVar6 >> 1 | uVar6;
    uVar6 = (int)uVar6 >> 2 | uVar6;
    uVar6 = (int)uVar6 >> 4 | uVar6;
    uVar6 = (int)uVar6 >> 8 | uVar6;
    FUN_18029b1e0(param_1,((int)uVar6 >> 0x10 | uVar6) + 1,((int)uVar5 >> 0x10 | uVar5) + 1);
  }
  _Dst = (void *)FUN_18026f580();
  local_res18 = local_res8;
  pvVar7 = (void *)0x0;
  local_res10 = _Dst;
  local_res20 = _Dst;
  if (_Dst != (void *)0x0) {
    *(undefined8 *)((longlong)_Dst + 0x50) = 0;
    *(undefined8 *)((longlong)_Dst + 0x58) = 0;
    *(undefined8 *)((longlong)_Dst + 0x60) = 0;
    *(undefined8 *)((longlong)_Dst + 0x68) = 0;
    *(undefined8 *)((longlong)_Dst + 0x70) = 0;
    *(undefined8 *)((longlong)_Dst + 0x78) = 0;
    *(undefined8 *)((longlong)_Dst + 0x80) = 0;
    *(undefined8 *)((longlong)_Dst + 0x88) = 0;
    *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
    *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
    *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
    *(undefined8 *)((longlong)_Dst + 200) = 0;
    *(undefined8 *)((longlong)_Dst + 0xd0) = 0;
    *(undefined8 *)((longlong)_Dst + 0xd8) = 0;
    *(undefined8 *)((longlong)_Dst + 0xe0) = 0;
    memset(_Dst,0,0xf8);
    *(undefined4 *)((longlong)_Dst + 0xa4) = 0xffffffff;
    *(undefined4 *)((longlong)_Dst + 0x90) = 0xffffffff;
    *(undefined8 *)((longlong)_Dst + 0xec) = 0xffffffffffffffff;
    pvVar7 = _Dst;
  }
  *(void **)(param_1 + 0x2b0) = pvVar7;
  pcVar3 = *(code **)(*(longlong *)(param_1 + 0x2b8) + 8);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(param_1);
  }
  plVar8 = *(longlong **)(param_1 + 0x2a8);
  plVar1 = plVar8 + *(int *)(param_1 + 0x2a0);
  do {
    if (plVar8 == plVar1) {
LAB_18029bf72:
      FUN_18029c170(param_1);
      FUN_180299e00(param_1);
      FUN_1802999b0(param_1);
      FUN_180299850(param_1);
      puVar9 = *(undefined8 **)(param_1 + 0x2a8);
      puVar2 = puVar9 + *(int *)(param_1 + 0x2a0);
      for (; puVar9 != puVar2; puVar9 = puVar9 + 1) {
        puVar4 = (undefined8 *)*puVar9;
        if (puVar4[2] == param_1) {
          *puVar4 = *(undefined8 *)(param_1 + 0x5c);
          puVar4[1] = param_1 + 0x88;
        }
      }
      FUN_18029dd40();
      return;
    }
    if (*(longlong *)(*plVar8 + 0x68) != 0) {
      *(byte *)(param_1 + 0x51) = (byte)(*(uint *)(*(longlong *)(*plVar8 + 0x68) + 0x2c) >> 4) & 1;
      goto LAB_18029bf72;
    }
    plVar8 = plVar8 + 1;
  } while( true );
}


