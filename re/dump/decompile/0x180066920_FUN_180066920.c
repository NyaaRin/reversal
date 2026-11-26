// 0x180066920  FUN_180066920
// size=321 thunk=false
// signature: undefined FUN_180066920()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_180066920(short *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  undefined4 uVar4;
  ulonglong local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong *local_20;
  undefined8 *local_18;
  
  uVar4 = 0;
  psVar2 = param_1;
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    psVar2 = *(short **)param_1;
  }
  psVar3 = psVar2 + *(longlong *)(param_1 + 8);
  local_18 = param_2;
  psVar1 = (short *)FUN_180065240(psVar2);
  if ((psVar2 == psVar1) && (psVar1 != psVar3)) {
    do {
      if ((*psVar1 != 0x5c) && (*psVar1 != 0x2f)) break;
      psVar1 = psVar1 + 1;
    } while (psVar1 != psVar3);
    if ((psVar2 == psVar1) && (psVar1 != psVar3)) {
      while (*psVar1 != 0x5c) {
        if ((*psVar1 == 0x2f) || (psVar1 = psVar1 + 1, psVar1 == psVar3)) break;
      }
    }
  }
  local_20 = &local_40;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_180211510(&local_40,psVar2,(longlong)psVar1 - (longlong)psVar2 >> 1,param_4,uVar4);
  psVar2 = param_1;
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    psVar2 = *(short **)param_1;
  }
  *param_2 = psVar2;
  local_20 = param_2 + 1;
  *local_20 = local_40;
  param_2[2] = uStack_38;
  *(undefined4 *)(param_2 + 3) = (undefined4)local_30;
  *(undefined4 *)((longlong)param_2 + 0x1c) = local_30._4_4_;
  *(undefined4 *)(param_2 + 4) = (undefined4)uStack_28;
  *(undefined4 *)((longlong)param_2 + 0x24) = uStack_28._4_4_;
  local_30 = _DAT_1803814a0;
  uStack_28 = _UNK_1803814a8;
  local_40 = local_40 & 0xffffffffffff0000;
  param_2[5] = param_1;
  FUN_18021e290(&local_40);
  return param_2;
}


