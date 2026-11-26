// 0x18024eda0  FUN_18024eda0
// size=359 thunk=false
// signature: undefined FUN_18024eda0()
// status: ok


void FUN_18024eda0(longlong param_1,ulonglong *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  lVar8 = *(longlong *)(param_1 + 0x50);
  uVar7 = *param_2;
  uVar4 = (*(longlong *)(param_1 + 0x58) - lVar8 >> 5) * -0x5555555555555555;
  if (uVar7 < uVar4) {
    uVar4 = *(longlong *)(uVar7 * 0x60 + 8 + lVar8) - *(longlong *)(uVar7 * 0x60 + lVar8) >> 4;
    if (param_2[1] <= uVar4) {
      uVar4 = param_2[1];
    }
  }
  else {
    uVar7 = uVar4 - 1;
    if (uVar4 < uVar7 || uVar4 - uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180262180();
    }
    uVar4 = *(longlong *)(uVar7 * 0x60 + 8 + lVar8) - *(longlong *)(uVar7 * 0x60 + lVar8) >> 4;
  }
  *(ulonglong *)(param_1 + 0x578) = uVar7;
  *(ulonglong *)(param_1 + 0x580) = uVar4;
  local_28 = *(undefined4 *)(param_1 + 0x578);
  uStack_24 = *(undefined4 *)(param_1 + 0x57c);
  uStack_20 = *(undefined4 *)(param_1 + 0x580);
  uStack_1c = *(undefined4 *)(param_1 + 0x584);
  plVar1 = (longlong *)(param_1 + 0xf0);
  puVar2 = (undefined4 *)*plVar1;
  puVar6 = *(undefined4 **)(param_1 + 0xf8);
  if (puVar2 != puVar6) {
    *(undefined4 **)(param_1 + 0xf8) = puVar2;
    puVar6 = puVar2;
  }
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  if (puVar6 == *(undefined4 **)(param_1 + 0x100)) {
    local_18 = local_28;
    uStack_14 = uStack_24;
    uStack_10 = uStack_20;
    uStack_c = uStack_1c;
    FUN_180262ec0(plVar1,local_28,&local_18,&local_28);
  }
  else {
    *puVar6 = local_28;
    puVar6[1] = uStack_24;
    puVar6[2] = uStack_20;
    puVar6[3] = uStack_1c;
    *(undefined2 *)(puVar6 + 8) = 0x100;
    puVar6[4] = local_28;
    puVar6[5] = uStack_24;
    puVar6[6] = uStack_20;
    puVar6[7] = uStack_1c;
    *(undefined1 *)((longlong)puVar6 + 0x22) = 1;
    *(undefined8 *)(puVar6 + 10) = 0;
    *(longlong *)(param_1 + 0xf8) = *(longlong *)(param_1 + 0xf8) + 0x30;
  }
  *(undefined1 *)(*plVar1 + 0x20) = 1;
  *(undefined1 *)(*plVar1 + 0x21) = 1;
  if (*(char *)(param_1 + 0x23) != '\0') {
    puVar3 = *(ulonglong **)(param_1 + 0x1c0);
    uVar7 = *(ulonglong *)(param_1 + 0x578);
    for (puVar5 = *(ulonglong **)(param_1 + 0x1b8); puVar5 != puVar3; puVar5 = puVar5 + 2) {
      if ((*puVar5 < uVar7) && (uVar7 <= puVar5[1])) {
        lVar8 = *puVar5 * 0x60;
        if (*(char *)(lVar8 + 0x22 + *(longlong *)(param_1 + 0x50)) == '\x01') {
          *(undefined1 *)(lVar8 + 0x22 + *(longlong *)(param_1 + 0x50)) = 0;
          *(undefined1 *)(param_1 + 0x1d2) = 1;
        }
      }
    }
  }
  return;
}


