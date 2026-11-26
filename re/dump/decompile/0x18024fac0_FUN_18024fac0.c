// 0x18024fac0  FUN_18024fac0
// size=376 thunk=false
// signature: undefined FUN_18024fac0()
// status: ok


void FUN_18024fac0(longlong param_1,ulonglong param_2,char param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [16];
  
  puVar11 = *(undefined4 **)(param_1 + 0xf0);
  puVar2 = *(undefined4 **)(param_1 + 0xf8);
  if (puVar11 != puVar2) {
    plVar1 = (longlong *)(param_1 + 0x1d8);
    do {
      local_58 = puVar11[4];
      uStack_54 = puVar11[5];
      uStack_50 = puVar11[6];
      uStack_4c = puVar11[7];
      FUN_18025dda0(plVar1,&local_68,param_1 + 0x50,&local_58);
      if (*(char *)(param_1 + 0x7fa) == '\0') {
        *(ulonglong *)(puVar11 + 10) = uStack_60;
        uVar9 = uStack_60;
      }
      else {
        uVar9 = *(ulonglong *)(puVar11 + 10);
      }
      if (local_68 < param_2) {
        uVar7 = 0;
      }
      else {
        uVar7 = local_68 - param_2;
      }
      uVar10 = *(ulonglong *)(param_1 + 0x210);
      if (uVar10 == 0) {
        uVar7 = 0;
        uVar10 = 0;
      }
      else if (uVar7 < uVar10) {
        uVar10 = (*(longlong *)(param_1 + 0x1e0) - *plVar1 >> 3) * -0x5555555555555555;
        if (uVar10 < uVar7 || uVar10 - uVar7 == 0) goto LAB_18024fc33;
        uVar10 = *(ulonglong *)(*plVar1 + 0x10 + uVar7 * 0x18);
        if (uVar9 <= uVar10) {
          uVar10 = uVar9;
        }
      }
      else {
        uVar7 = uVar10 - 1;
        uVar9 = (*(longlong *)(param_1 + 0x1e0) - *plVar1 >> 3) * -0x5555555555555555;
        if (uVar9 < uVar7 || uVar9 - uVar7 == 0) {
LAB_18024fc33:
                    /* WARNING: Subroutine does not return */
          FUN_180262180();
        }
        uVar10 = *(ulonglong *)(*plVar1 + 0x10 + uVar7 * 0x18);
      }
      local_68._0_4_ = (undefined4)uVar7;
      local_68._4_4_ = (undefined4)(uVar7 >> 0x20);
      uStack_60._0_4_ = (undefined4)uVar10;
      uStack_60._4_4_ = (undefined4)(uVar10 >> 0x20);
      local_58 = (undefined4)local_68;
      uStack_54 = local_68._4_4_;
      uStack_50 = (undefined4)uStack_60;
      uStack_4c = uStack_60._4_4_;
      local_68 = uVar7;
      uStack_60 = uVar10;
      puVar8 = (undefined4 *)FUN_180243970(param_1,local_48,&local_58);
      uVar3 = *puVar8;
      uVar4 = puVar8[1];
      uVar5 = puVar8[2];
      uVar6 = puVar8[3];
      puVar11[4] = uVar3;
      puVar11[5] = uVar4;
      puVar11[6] = uVar5;
      puVar11[7] = uVar6;
      if (param_3 == '\0') {
        *puVar11 = uVar3;
        puVar11[1] = uVar4;
        puVar11[2] = uVar5;
        puVar11[3] = uVar6;
      }
      *(undefined1 *)((longlong)puVar11 + 0x22) = 1;
      puVar11 = puVar11 + 0xc;
    } while (puVar11 != puVar2);
  }
  FUN_18024f370(param_1);
  *(undefined1 *)(param_1 + 0x7fa) = 1;
  return;
}


