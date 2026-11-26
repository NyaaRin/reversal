// 0x1800eabc0  FUN_1800eabc0
// size=624 thunk=false
// signature: undefined FUN_1800eabc0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1800eabc0(undefined8 *param_1,byte *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  byte *pbVar8;
  longlong lVar9;
  byte *pbVar10;
  bool bVar11;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  byte *local_78;
  undefined8 local_70;
  undefined8 *local_58;
  undefined1 *local_50;
  byte *local_48;
  undefined1 local_40 [32];
  ulonglong local_20;
  
  local_20 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  pbVar8 = param_2;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    pbVar8 = *(byte **)param_2;
  }
  pbVar10 = pbVar8 + *(longlong *)(param_2 + 0x10);
  for (; pbVar8 != pbVar10; pbVar8 = pbVar8 + 1) {
    uVar6 = *pbVar8 - 0x22;
    if ((((byte)uVar6 < 0x3b) && ((0x400000035002101U >> ((ulonglong)uVar6 & 0x3f) & 1) != 0)) ||
       (*pbVar8 == 0x7c)) {
      *pbVar8 = 0x5f;
    }
  }
  lVar9 = *(longlong *)(param_2 + 0x10);
  local_48 = param_2;
  local_58 = param_1;
  while (lVar9 != 0) {
    uVar2 = *(ulonglong *)(param_2 + 0x18);
    pbVar8 = param_2;
    if (0xf < uVar2) {
      pbVar8 = *(byte **)param_2;
    }
    if (*pbVar8 != 0x20) {
      pbVar8 = param_2;
      if (0xf < uVar2) {
        pbVar8 = *(byte **)param_2;
      }
      if (*pbVar8 != 0x2e) {
        if (lVar9 != 0) goto LAB_1800eacd0;
        break;
      }
    }
    pbVar8 = param_2;
    if (0xf < uVar2) {
      pbVar8 = *(byte **)param_2;
    }
    bVar11 = lVar9 != 0;
    lVar9 = lVar9 - (ulonglong)bVar11;
    memmove(pbVar8,pbVar8 + bVar11,lVar9 + 1);
    *(longlong *)(param_2 + 0x10) = lVar9;
  }
  goto LAB_1800ead12;
  while( true ) {
    *(longlong *)(param_2 + 0x10) = lVar1;
    pbVar8 = param_2;
    if (0xf < *(ulonglong *)(param_2 + 0x18)) {
      pbVar8 = *(byte **)param_2;
    }
    pbVar8[lVar1] = 0;
    lVar9 = *(longlong *)(param_2 + 0x10);
    if (lVar9 == 0) break;
LAB_1800eacd0:
    pbVar8 = param_2;
    if (0xf < *(ulonglong *)(param_2 + 0x18)) {
      pbVar8 = *(byte **)param_2;
    }
    lVar1 = lVar9 + -1;
    if (pbVar8[lVar1] != 0x20) {
      if (lVar9 != 0) goto LAB_1800ead27;
      break;
    }
  }
LAB_1800ead12:
  FUN_180212700(param_2,"script.lua",10);
LAB_1800ead27:
  local_50 = local_40;
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  pbVar8 = param_2;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    pbVar8 = *(byte **)param_2;
  }
  uVar7 = FUN_1802d75e4();
  local_78 = pbVar8;
  local_70 = uVar3;
  FUN_1800650e0(local_40,uVar7,&local_78);
  local_88 = 0;
  lVar9 = FUN_180066000(local_40,&local_78);
  lVar9 = *(longlong *)(lVar9 + 0x10);
  FUN_18021e290(&local_78);
  if (lVar9 == 0) {
    FUN_18021aef0(param_2,&DAT_180340d34,4);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar7 = *(undefined4 *)(param_2 + 4);
  uVar4 = *(undefined4 *)(param_2 + 8);
  uVar5 = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  *(undefined4 *)((longlong)param_1 + 4) = uVar7;
  *(undefined4 *)(param_1 + 1) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar5;
  uVar7 = *(undefined4 *)(param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 0x18);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar7;
  *(undefined4 *)(param_1 + 3) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
  *param_2 = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0xf;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  local_88 = 1;
  FUN_18021e290(local_40);
  FUN_18020e450(param_2);
  return param_1;
}


