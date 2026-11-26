// 0x1802179b0  FUN_1802179b0
// size=461 thunk=false
// signature: undefined FUN_1802179b0()
// status: ok


void FUN_1802179b0(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar8 = (undefined8 *)*param_1;
  if ((ulonglong)((param_1[2] - (longlong)puVar8 >> 4) * -0x3333333333333333) < param_3) {
    FUN_18022c880(param_1,param_3);
    lVar5 = FUN_180226040(param_2,param_3,*param_1,param_1);
    param_1[1] = lVar5;
  }
  else {
    puVar6 = (undefined8 *)param_1[1];
    lVar5 = (longlong)puVar6 - (longlong)puVar8 >> 4;
    if ((ulonglong)(lVar5 * -0x3333333333333333) < param_3) {
      if (puVar8 != puVar6) {
        do {
          if (puVar8 != param_2) {
            puVar6 = param_2;
            if (0xf < (ulonglong)param_2[3]) {
              puVar6 = (undefined8 *)*param_2;
            }
            FUN_180212700(puVar8,puVar6,param_2[2]);
          }
          *(undefined1 *)(puVar8 + 4) = *(undefined1 *)(param_2 + 4);
          *(undefined1 *)((longlong)puVar8 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x21);
          *(undefined1 *)((longlong)puVar8 + 0x22) = *(undefined1 *)((longlong)param_2 + 0x22);
          *(undefined1 *)((longlong)puVar8 + 0x23) = *(undefined1 *)((longlong)param_2 + 0x23);
          uVar4 = *(undefined8 *)((longlong)param_2 + 0x2c);
          *(undefined8 *)((longlong)puVar8 + 0x24) = *(undefined8 *)((longlong)param_2 + 0x24);
          *(undefined8 *)((longlong)puVar8 + 0x2c) = uVar4;
          *(undefined1 *)((longlong)puVar8 + 0x34) = *(undefined1 *)((longlong)param_2 + 0x34);
          uVar1 = *(undefined4 *)((longlong)param_2 + 0x3c);
          uVar2 = *(undefined4 *)(param_2 + 8);
          uVar3 = *(undefined4 *)((longlong)param_2 + 0x44);
          *(undefined4 *)(puVar8 + 7) = *(undefined4 *)(param_2 + 7);
          *(undefined4 *)((longlong)puVar8 + 0x3c) = uVar1;
          *(undefined4 *)(puVar8 + 8) = uVar2;
          *(undefined4 *)((longlong)puVar8 + 0x44) = uVar3;
          *(undefined1 *)(puVar8 + 9) = *(undefined1 *)(param_2 + 9);
          *(undefined4 *)((longlong)puVar8 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
          puVar8 = puVar8 + 10;
          param_2 = param_2 + 10;
          puVar6 = (undefined8 *)param_1[1];
        } while (puVar8 != puVar6);
      }
      lVar5 = FUN_180226040(param_2,param_3 + lVar5 * 0x3333333333333333,puVar6,param_1);
      param_1[1] = lVar5;
    }
    else {
      puVar6 = puVar8 + param_3 * 10;
      for (; param_3 != 0; param_3 = param_3 - 1) {
        if (puVar8 != param_2) {
          puVar7 = param_2;
          if (0xf < (ulonglong)param_2[3]) {
            puVar7 = (undefined8 *)*param_2;
          }
          FUN_180212700(puVar8,puVar7,param_2[2]);
        }
        *(undefined1 *)(puVar8 + 4) = *(undefined1 *)(param_2 + 4);
        *(undefined1 *)((longlong)puVar8 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x21);
        *(undefined1 *)((longlong)puVar8 + 0x22) = *(undefined1 *)((longlong)param_2 + 0x22);
        *(undefined1 *)((longlong)puVar8 + 0x23) = *(undefined1 *)((longlong)param_2 + 0x23);
        uVar4 = *(undefined8 *)((longlong)param_2 + 0x2c);
        *(undefined8 *)((longlong)puVar8 + 0x24) = *(undefined8 *)((longlong)param_2 + 0x24);
        *(undefined8 *)((longlong)puVar8 + 0x2c) = uVar4;
        *(undefined1 *)((longlong)puVar8 + 0x34) = *(undefined1 *)((longlong)param_2 + 0x34);
        uVar1 = *(undefined4 *)((longlong)param_2 + 0x3c);
        uVar2 = *(undefined4 *)(param_2 + 8);
        uVar3 = *(undefined4 *)((longlong)param_2 + 0x44);
        *(undefined4 *)(puVar8 + 7) = *(undefined4 *)(param_2 + 7);
        *(undefined4 *)((longlong)puVar8 + 0x3c) = uVar1;
        *(undefined4 *)(puVar8 + 8) = uVar2;
        *(undefined4 *)((longlong)puVar8 + 0x44) = uVar3;
        *(undefined1 *)(puVar8 + 9) = *(undefined1 *)(param_2 + 9);
        *(undefined4 *)((longlong)puVar8 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
        puVar8 = puVar8 + 10;
        param_2 = param_2 + 10;
      }
      puVar8 = (undefined8 *)param_1[1];
      for (puVar7 = puVar6; puVar7 != puVar8; puVar7 = puVar7 + 10) {
        FUN_18020e450(puVar7);
      }
      param_1[1] = (longlong)puVar6;
    }
  }
  return;
}


