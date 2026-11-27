// 0x1802994b0  FUN_1802994b0
// size=524 thunk=false
// signature: undefined FUN_1802994b0()
// status: ok


void FUN_1802994b0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  code *pcVar5;
  longlong lVar6;
  undefined *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  
  if (*(undefined8 **)(param_1 + 0x2b8) != param_2) {
    puVar10 = *(undefined8 **)(param_1 + 0x70);
    puVar1 = puVar10 + *(int *)(param_1 + 0x68);
    for (; puVar10 != puVar1; puVar10 = puVar10 + 1) {
      puVar4 = (undefined8 *)*puVar10;
      if (puVar4[1] != 0) {
        FUN_18029af20(puVar4[1],puVar4);
      }
      *(undefined1 *)((longlong)puVar4 + 0x34) = 0;
      *puVar4 = 0;
      plVar8 = (longlong *)puVar4[5];
      plVar2 = plVar8 + *(int *)(puVar4 + 4);
      for (; plVar8 != plVar2; plVar8 = plVar8 + 1) {
        lVar6 = *(longlong *)(*plVar8 + 0x88);
        if (((lVar6 != 0) || (lVar6 = *(longlong *)(param_1 + 0x2b8), lVar6 != 0)) &&
           (*(code **)(lVar6 + 0x20) != (code *)0x0)) {
          (**(code **)(lVar6 + 0x20))(param_1);
        }
      }
    }
    lVar6 = *(longlong *)(param_1 + 0x2b0);
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else if ((*(longlong *)(param_1 + 0x2b8) != 0) &&
            (pcVar5 = *(code **)(*(longlong *)(param_1 + 0x2b8) + 0x10), pcVar5 != (code *)0x0)) {
      (*pcVar5)(param_1);
      lVar6 = *(longlong *)(param_1 + 0x2b0);
    }
    *(undefined8 **)(param_1 + 0x2b8) = param_2;
    if (param_2 == (undefined8 *)0x0) {
      puVar7 = &DAT_18037acb0;
    }
    else {
      puVar7 = (undefined *)*param_2;
    }
    *(undefined **)(param_1 + 0x2c0) = puVar7;
    if (((lVar6 != 0) && (param_2 != (undefined8 *)0x0)) && ((code *)param_2[1] != (code *)0x0)) {
      (*(code *)param_2[1])(param_1);
    }
    plVar8 = *(longlong **)(param_1 + 0x70);
    plVar2 = plVar8 + *(int *)(param_1 + 0x68);
    for (; plVar8 != plVar2; plVar8 = plVar8 + 1) {
      plVar9 = *(longlong **)(*plVar8 + 0x28);
      plVar3 = plVar9 + *(int *)(*plVar8 + 0x20);
      for (; plVar9 != plVar3; plVar9 = plVar9 + 1) {
        lVar6 = *(longlong *)(*plVar9 + 0x88);
        if (lVar6 == 0) {
          lVar6 = *(longlong *)(param_1 + 0x2b8);
        }
        if (*(code **)(lVar6 + 0x18) != (code *)0x0) {
          (**(code **)(lVar6 + 0x18))(param_1);
        }
      }
    }
    plVar8 = *(longlong **)(param_1 + 0x70);
    plVar2 = plVar8 + *(int *)(param_1 + 0x68);
    for (; plVar8 != plVar2; plVar8 = plVar8 + 1) {
      lVar6 = *plVar8;
      puVar10 = *(undefined8 **)(lVar6 + 0x28);
      puVar1 = puVar10 + *(int *)(lVar6 + 0x20);
      for (; puVar10 != puVar1; puVar10 = puVar10 + 1) {
        FUN_18029a110(param_1,lVar6,*puVar10);
      }
    }
  }
  return;
}


