// 0x1800ebc90  FUN_1800ebc90
// size=608 thunk=false
// signature: undefined FUN_1800ebc90()
// status: ok


void FUN_1800ebc90(longlong param_1,int param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 local_98 [4];
  undefined8 *local_88;
  longlong local_80;
  undefined8 *local_78 [2];
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  
  iVar2 = 1;
  if (1 < param_2) {
    iVar2 = param_2;
  }
  puVar5 = (undefined8 *)((longlong)iVar2 - 1);
  FUN_18024f460(param_1 + 8);
  FUN_18024f770(param_1 + 8);
  puVar4 = param_3 + 2;
  local_80 = *puVar4;
  local_88 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    local_88 = (undefined8 *)*param_3;
  }
  puVar3 = (undefined8 *)
           ((*(longlong *)(param_1 + 0x60) - *(longlong *)(param_1 + 0x58) >> 5) *
           -0x5555555555555555);
  local_98[0] = 0x50302096;
  local_78[0] = (undefined8 *)CONCAT44(local_78[0]._4_4_,0xd2442ec4);
  local_50 = puVar5;
  local_58 = local_88;
  if ((puVar5 < puVar3) || (local_50 = (undefined8 *)((longlong)puVar3 - 1), local_50 < puVar3)) {
    local_48 = *(undefined8 **)(param_1 + 0x350);
    local_68 = local_88;
    local_60 = local_80;
    if (local_48 == *(undefined8 **)(param_1 + 0x358)) {
      FUN_180262930((longlong *)(param_1 + 0x348),local_48,local_78,local_98,&local_88,&local_68);
    }
    else {
      *(undefined4 *)local_48 = 0xd2442ec4;
      *(undefined4 *)((longlong)local_48 + 4) = 0x50302096;
      local_48[1] = 0;
      local_48[2] = 0;
      local_48[3] = 0;
      local_48[4] = 0;
      local_78[0] = local_48;
      FUN_18001d080(local_48 + 1,local_88,local_80);
      local_48[5] = 0;
      local_48[6] = 0;
      local_48[7] = 0;
      local_48[8] = 0;
      FUN_18001d080(local_48 + 5,local_58);
      *(longlong *)(param_1 + 0x350) = *(longlong *)(param_1 + 0x350) + 0x48;
    }
    *(longlong *)((longlong)local_50 * 0x60 + 0x50 + *(longlong *)(param_1 + 0x58)) =
         (*(longlong *)(param_1 + 0x350) - *(longlong *)(param_1 + 0x348) >> 3) *
         -0x71c71c71c71c71c7;
  }
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  local_80 = *puVar4;
  local_60 = 100000;
  local_40 = 0;
  local_88 = param_3;
  local_68 = puVar5;
  local_48 = puVar5;
  FUN_180015270(param_1 + 8,&local_48,&local_68);
  lVar1 = *(longlong *)(param_1 + 0x58);
  puVar4 = (undefined8 *)((*(longlong *)(param_1 + 0x60) - lVar1 >> 5) * -0x5555555555555555);
  if (puVar5 < puVar4) {
    local_80 = 0;
    local_88 = puVar5;
  }
  else {
    puVar3 = (undefined8 *)((longlong)puVar4 - 1);
    if (puVar4 < puVar3 || (longlong)puVar4 - (longlong)puVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180262180();
    }
    local_80 = *(longlong *)((longlong)puVar3 * 0x60 + 8 + lVar1) -
               *(longlong *)((longlong)puVar3 * 0x60 + lVar1) >> 4;
    local_88 = puVar3;
  }
  FUN_18024eda0(param_1 + 8,&local_88);
  FUN_1800151b0(param_1 + 8,puVar5);
  *(int *)(param_1 + 0xa80) = (int)puVar5 + 1;
  return;
}


