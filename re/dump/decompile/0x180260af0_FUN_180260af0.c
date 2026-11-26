// 0x180260af0  FUN_180260af0
// size=715 thunk=false
// signature: undefined FUN_180260af0()
// status: ok


void FUN_180260af0(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined1 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  lVar5 = (longlong)param_2 - (longlong)param_1;
  while( true ) {
    if (lVar5 < 0x630) {
      FUN_180263250(param_1,param_2);
      return;
    }
    lVar5 = ((longlong)param_2 - (longlong)param_1) / 6 +
            ((longlong)param_2 - (longlong)param_1 >> 0x3f);
    lVar9 = (lVar5 >> 3) - (lVar5 >> 0x3f);
    lVar5 = lVar9 >> 1;
    if (param_3 < 1) break;
    lVar9 = ((longlong)param_2 + (-0x30 - (longlong)param_1) >> 4) * -0x5555555555555555;
    puVar8 = param_1 + lVar5 * 6;
    if (lVar9 < 0x29) {
      puVar7 = param_2 + -6;
      puVar6 = param_1;
    }
    else {
      lVar5 = lVar9 + 1 >> 3;
      FUN_180266900(param_1,param_1 + lVar5 * 6,param_1 + lVar5 * 0xc);
      FUN_180266900(puVar8 + lVar5 * -6,puVar8,puVar8 + lVar5 * 6);
      puVar7 = param_2 + lVar5 * -6 + -6;
      FUN_180266900(param_2 + lVar5 * -0xc + -6,puVar7,param_2 + -6);
      puVar6 = param_1 + lVar5 * 6;
    }
    FUN_180266900(puVar6,puVar8,puVar7);
    FUN_1802650e0(&local_88,param_1,puVar8,param_2);
    puVar7 = local_80;
    puVar8 = local_88;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if (((longlong)local_88 - (longlong)param_1 >> 4) * -0x5555555555555555 <
        ((longlong)param_2 - (longlong)local_80 >> 4) * -0x5555555555555555) {
      FUN_180260af0(param_1,local_88,param_3,param_4);
      puVar8 = param_2;
      param_1 = puVar7;
    }
    else {
      FUN_180260af0(local_80,param_2,param_3,param_4);
    }
    lVar5 = (longlong)puVar8 - (longlong)param_1;
    param_2 = puVar8;
  }
  while (0 < lVar5) {
    lVar5 = lVar5 + -1;
    local_78 = param_1[lVar5 * 6];
    uStack_70 = (param_1 + lVar5 * 6)[1];
    local_68 = param_1[lVar5 * 6 + 2];
    uStack_60 = (param_1 + lVar5 * 6 + 2)[1];
    local_58 = param_1[lVar5 * 6 + 4];
    uStack_50 = (param_1 + lVar5 * 6 + 4)[1];
    FUN_180264e90(param_1,lVar5,lVar9,&local_78,param_4);
  }
  if (lVar9 < 2) {
    return;
  }
  do {
    puVar8 = param_2 + -6;
    if (1 < ((longlong)param_2 - (longlong)param_1 >> 4) * -0x5555555555555555) {
      local_78 = *puVar8;
      uStack_70 = param_2[-5];
      local_68 = param_2[-4];
      uStack_60 = param_2[-3];
      local_58 = param_2[-2];
      uStack_50 = param_2[-1];
      uVar4 = param_1[1];
      *puVar8 = *param_1;
      param_2[-5] = uVar4;
      uVar1 = *(undefined4 *)((longlong)param_1 + 0x14);
      uVar2 = *(undefined4 *)(param_1 + 3);
      uVar3 = *(undefined4 *)((longlong)param_1 + 0x1c);
      *(undefined4 *)(param_2 + -4) = *(undefined4 *)(param_1 + 2);
      *(undefined4 *)((longlong)param_2 + -0x1c) = uVar1;
      *(undefined4 *)(param_2 + -3) = uVar2;
      *(undefined4 *)((longlong)param_2 + -0x14) = uVar3;
      uVar1 = *(undefined4 *)((longlong)param_1 + 0x24);
      uVar2 = *(undefined4 *)(param_1 + 5);
      uVar3 = *(undefined4 *)((longlong)param_1 + 0x2c);
      *(undefined4 *)(param_2 + -2) = *(undefined4 *)(param_1 + 4);
      *(undefined4 *)((longlong)param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -1) = uVar2;
      *(undefined4 *)((longlong)param_2 + -4) = uVar3;
      FUN_180264e90(param_1,0,((longlong)puVar8 - (longlong)param_1 >> 4) * -0x5555555555555555,
                    &local_78,param_4);
    }
    param_2 = puVar8;
  } while (0x5f < (longlong)puVar8 - (longlong)param_1);
  return;
}


