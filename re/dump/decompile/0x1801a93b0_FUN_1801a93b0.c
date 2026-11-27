// 0x1801a93b0  FUN_1801a93b0
// size=453 thunk=false
// signature: undefined FUN_1801a93b0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1801a93b0(undefined8 *param_1,byte *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 *local_40;
  byte *local_38;
  ulonglong local_30;
  
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  local_48 = 0;
  pbVar7 = param_2;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    pbVar7 = *(byte **)param_2;
  }
  pbVar6 = pbVar7 + *(longlong *)(param_2 + 0x10);
  local_38 = param_2;
  local_40 = param_1;
  for (; pbVar7 != pbVar6; pbVar7 = pbVar7 + 1) {
    if (((*pbVar7 < 0x80) && (iVar5 = isalnum((uint)*pbVar7), iVar5 == 0)) &&
       ((0x3f < (byte)(*pbVar7 - 0x20) ||
        ((0x8000000000002001U >> ((ulonglong)(byte)(*pbVar7 - 0x20) & 0x3f) & 1) == 0)))) {
      *pbVar7 = 0x5f;
    }
  }
  lVar8 = *(longlong *)(param_2 + 0x10);
  while (lVar8 != 0) {
    pbVar7 = param_2;
    if (0xf < *(ulonglong *)(param_2 + 0x18)) {
      pbVar7 = *(byte **)param_2;
    }
    if (*pbVar7 != 0x20) {
      if (lVar8 != 0) goto LAB_1801a94b0;
      break;
    }
    pbVar7 = param_2;
    if (0xf < *(ulonglong *)(param_2 + 0x18)) {
      pbVar7 = *(byte **)param_2;
    }
    bVar9 = lVar8 != 0;
    lVar8 = lVar8 - (ulonglong)bVar9;
    memmove(pbVar7,pbVar7 + bVar9,lVar8 + 1);
    *(longlong *)(param_2 + 0x10) = lVar8;
  }
  goto LAB_1801a94f2;
  while( true ) {
    *(longlong *)(param_2 + 0x10) = lVar1;
    pbVar7 = param_2;
    if (0xf < *(ulonglong *)(param_2 + 0x18)) {
      pbVar7 = *(byte **)param_2;
    }
    pbVar7[lVar1] = 0;
    lVar8 = *(longlong *)(param_2 + 0x10);
    if (lVar8 == 0) break;
LAB_1801a94b0:
    pbVar7 = param_2;
    if (0xf < *(ulonglong *)(param_2 + 0x18)) {
      pbVar7 = *(byte **)param_2;
    }
    lVar1 = lVar8 + -1;
    if (pbVar7[lVar1] != 0x20) {
      if (lVar8 != 0) goto LAB_1801a9507;
      break;
    }
  }
LAB_1801a94f2:
  FUN_180212700(param_2,"default",7);
LAB_1801a9507:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar2 = *(undefined4 *)(param_2 + 4);
  uVar3 = *(undefined4 *)(param_2 + 8);
  uVar4 = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  *(undefined4 *)((longlong)param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 1) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  uVar4 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
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
  local_48 = 1;
  FUN_18020e450(param_2);
  return param_1;
}


