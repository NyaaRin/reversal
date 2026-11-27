// 0x18021f2b0  FUN_18021f2b0
// size=597 thunk=false
// signature: undefined FUN_18021f2b0()
// status: ok


undefined1 FUN_18021f2b0(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  
  if (param_2 != (undefined8 *)0x0) {
    *(undefined1 *)(param_2 + 1) = 1;
    FUN_180239ad0(param_2,0);
  }
  *param_1 = param_1[0x17];
  if (1 < *(uint *)((longlong)param_1 + 0xdc)) {
    FUN_180239dc0(param_1 + 1,*(uint *)((longlong)param_1 + 0xdc));
    puVar4 = (undefined8 *)param_1[6];
    lVar6 = param_1[5];
    uVar5 = (ulonglong)*(uint *)((longlong)param_1 + 0xdc);
    uVar9 = (longlong)puVar4 - lVar6 >> 4;
    if (uVar5 < uVar9) {
      param_1[6] = uVar5 * 0x10 + lVar6;
    }
    else if (uVar9 < uVar5) {
      if ((ulonglong)(param_1[7] - lVar6 >> 4) < uVar5) {
        FUN_18023cf10(param_1 + 5);
      }
      else {
        for (lVar6 = uVar5 - uVar9; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4 = puVar4 + 2;
        }
        param_1[6] = puVar4;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 10000000;
  *(undefined4 *)(param_1 + 0x1f) = 600;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  cVar2 = FUN_180234420(param_1,param_1[0x19]);
  if (cVar2 == '\0') {
    return 0;
  }
  if (param_2 != (undefined8 *)0x0) {
    FUN_180239ad0(param_2,*(undefined4 *)((longlong)param_1 + 0xdc));
    puVar4 = (undefined8 *)param_2[2];
    uVar8 = 1;
    puVar7 = param_1 + 8;
    if (*(char *)(param_1 + 0x1c) == '\0') {
      puVar7 = param_1;
    }
    *(undefined1 *)(puVar4 + 2) = 1;
    *puVar4 = param_1[0x17];
    puVar4[1] = *puVar7;
    if (1 < *(uint *)((longlong)param_1 + 0xdc)) {
      do {
        uVar5 = (ulonglong)uVar8;
        lVar6 = uVar5 * 0x18;
        if ((*(uint *)(puVar7[1] + (ulonglong)(uVar8 >> 5) * 4) >> ((byte)uVar8 & 0x1f) & 1) == 0) {
          *(undefined1 *)(param_2[2] + 0x10 + lVar6) = 0;
          *(undefined8 *)(lVar6 + param_2[2]) = param_1[0x18];
          uVar3 = param_1[0x18];
        }
        else {
          *(undefined1 *)(param_2[2] + 0x10 + lVar6) = 1;
          *(undefined8 *)(lVar6 + param_2[2]) = *(undefined8 *)(puVar7[5] + uVar5 * 0x10);
          uVar3 = *(undefined8 *)(puVar7[5] + 8 + uVar5 * 0x10);
        }
        uVar8 = uVar8 + 1;
        *(undefined8 *)(lVar6 + 8 + param_2[2]) = uVar3;
      } while (uVar8 < *(uint *)((longlong)param_1 + 0xdc));
    }
    *param_2 = param_1[0x17];
    lVar6 = param_1[0x17];
    param_2[5] = lVar6;
    lVar1 = *(longlong *)param_2[2];
    param_2[6] = lVar1;
    *(bool *)(param_2 + 7) = lVar6 != lVar1;
    lVar6 = ((longlong *)param_2[2])[1];
    param_2[8] = lVar6;
    lVar1 = param_1[0x18];
    param_2[9] = lVar1;
    *(bool *)(param_2 + 10) = lVar6 != lVar1;
    param_2[0xb] = param_1[0x18];
    param_2[0xc] = param_1[0x18];
  }
  return 1;
}


