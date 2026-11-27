// 0x18029bff0  FUN_18029bff0
// size=378 thunk=false
// signature: undefined FUN_18029bff0()
// status: ok


void FUN_18029bff0(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  code *pcVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  
  puVar7 = *(undefined8 **)(param_1 + 0x70);
  puVar1 = puVar7 + *(int *)(param_1 + 0x68);
  for (; puVar7 != puVar1; puVar7 = puVar7 + 1) {
    puVar3 = (undefined8 *)*puVar7;
    if (puVar3[1] != 0) {
      FUN_18029af20(puVar3[1],puVar3);
    }
    *(undefined1 *)((longlong)puVar3 + 0x34) = 0;
    *puVar3 = 0;
    plVar6 = (longlong *)puVar3[5];
    plVar2 = plVar6 + *(int *)(puVar3 + 4);
    for (; plVar6 != plVar2; plVar6 = plVar6 + 1) {
      lVar5 = *(longlong *)(*plVar6 + 0x88);
      if (((lVar5 != 0) || (lVar5 = *(longlong *)(param_1 + 0x2b8), lVar5 != 0)) &&
         (*(code **)(lVar5 + 0x20) != (code *)0x0)) {
        (**(code **)(lVar5 + 0x20))(param_1);
      }
    }
  }
  if (((*(longlong *)(param_1 + 0x2b0) != 0) && (*(longlong *)(param_1 + 0x2b8) != 0)) &&
     (pcVar4 = *(code **)(*(longlong *)(param_1 + 0x2b8) + 0x10), pcVar4 != (code *)0x0)) {
    (*pcVar4)(param_1);
  }
  lVar5 = *(longlong *)(param_1 + 0x2b0);
  if (lVar5 != 0) {
    if (*(longlong *)(lVar5 + 0xe0) != 0) {
      FUN_18026f680();
    }
    puVar7 = *(undefined8 **)(lVar5 + 0xd0);
    puVar1 = puVar7 + *(int *)(lVar5 + 200);
    for (; puVar7 != puVar1; puVar7 = puVar7 + 1) {
      FUN_18026f680(*puVar7);
    }
    if (*(longlong *)(lVar5 + 0xd0) != 0) {
      FUN_18026f680();
    }
    if (*(longlong *)(lVar5 + 0x88) != 0) {
      FUN_18026f680();
    }
    if (*(longlong *)(lVar5 + 0x78) != 0) {
      FUN_18026f680();
    }
    if (*(longlong *)(lVar5 + 0x68) != 0) {
      FUN_18026f680();
    }
    if (*(longlong *)(lVar5 + 0x58) != 0) {
      FUN_18026f680();
    }
    FUN_18026f680(lVar5);
  }
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  return;
}


