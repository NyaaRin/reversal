// 0x180233130  FUN_180233130
// size=305 thunk=false
// signature: undefined FUN_180233130()
// status: ok


void FUN_180233130(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  puVar2 = *(undefined4 **)(param_1 + 8);
  *puVar2 = *param_2;
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((longlong)puVar2 + 5) = *(undefined1 *)((longlong)param_2 + 5);
  plVar1 = (longlong *)(puVar2 + 2);
  *plVar1 = 0;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  uVar4 = (*(longlong *)(param_2 + 4) - *(longlong *)(param_2 + 2) >> 4) * -0x3333333333333333;
  if (uVar4 != 0) {
    if (0x333333333333333 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_18020cc40();
    }
    FUN_180238b60(plVar1);
    lVar5 = *plVar1;
    lVar3 = *(longlong *)(param_2 + 4);
    for (lVar6 = *(longlong *)(param_2 + 2); lVar6 != lVar3; lVar6 = lVar6 + 0x50) {
      FUN_18016d4c0(lVar5,lVar6);
      FUN_18016d4c0(lVar5 + 0x20,lVar6 + 0x20);
      *(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)(lVar6 + 0x40);
      *(undefined1 *)(lVar5 + 0x48) = *(undefined1 *)(lVar6 + 0x48);
      lVar5 = lVar5 + 0x50;
    }
    *(longlong *)(puVar2 + 4) = lVar5;
  }
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  return;
}


