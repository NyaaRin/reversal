// 0x180175ad0  FUN_180175ad0
// size=1274 thunk=false
// signature: undefined FUN_180175ad0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180175ad0(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_138 [32];
  longlong local_118;
  undefined *local_110;
  undefined8 local_108;
  undefined4 local_f8;
  byte *****local_f0 [3];
  ulonglong local_d8;
  byte *****local_d0 [3];
  ulonglong local_b8;
  byte *****local_b0 [3];
  ulonglong local_98;
  byte *****local_90 [3];
  ulonglong local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStack_138;
  local_f8 = 0;
  uVar10 = (undefined4)*param_3;
  local_118 = param_2[2];
  local_70 = param_3;
  if (0x7fffffffffffffffU - local_118 < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_1800130a0();
  }
  puVar8 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar8 = (undefined8 *)*param_2;
  }
  local_108 = 2;
  local_110 = &DAT_180361cbc;
  FUN_18020e930(local_f0,local_118,param_3,puVar8);
  local_f8 = 1;
  uVar7 = 0x14650fb0739d0383;
  uVar4 = 0x14650fb0739d0383;
  if (local_d8 < 0x10) {
    local_f0[0] = (byte *****)local_f0;
    goto LAB_180175ba7;
  }
  for (; (byte ******)local_f0[0] != (byte ******)0x0;
      local_f0[0] = (byte *****)((longlong)local_f0[0] + 1)) {
LAB_180175ba7:
    if (*(byte *)local_f0[0] == 0) break;
    uVar4 = (uVar4 ^ *(byte *)local_f0[0]) * 0x100000001b3;
  }
  plVar3 = (longlong *)*param_1;
  plVar2 = (longlong *)plVar3[1];
  cVar1 = *(char *)((longlong)plVar2 + 0x19);
  plVar6 = plVar3;
  while (cVar1 == '\0') {
    plVar5 = plVar2;
    if ((ulonglong)plVar2[4] < uVar4) {
      plVar2 = plVar2 + 2;
      plVar5 = plVar6;
    }
    plVar2 = (longlong *)*plVar2;
    plVar6 = plVar5;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  if (((*(char *)((longlong)plVar6 + 0x19) == '\0') && ((ulonglong)plVar6[4] <= uVar4)) &&
     (plVar6 != plVar3)) {
    local_68 = (longlong *)0x0;
    plVar2 = plVar6 + 5;
    plVar3 = plVar2;
    if (0xf < (ulonglong)plVar6[8]) {
      plVar3 = (longlong *)*plVar2;
    }
    uVar9 = strtof(plVar3,&local_68);
    if (0xf < (ulonglong)plVar6[8]) {
      plVar2 = (longlong *)*plVar2;
    }
    if (local_68 != plVar2) {
      uVar10 = uVar9;
    }
  }
  *(undefined4 *)param_3 = uVar10;
  local_f8 = 0;
  FUN_18020e450(local_f0);
  uVar10 = *(undefined4 *)((longlong)param_3 + 4);
  if (0x7fffffffffffffff - param_2[2] < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_1800130a0();
  }
  local_108 = 2;
  local_110 = &DAT_180361cc0;
  local_118 = param_2[2];
  FUN_18020e930(local_d0);
  local_f8 = 2;
  uVar4 = 0x14650fb0739d0383;
  if (local_b8 < 0x10) {
    local_d0[0] = (byte *****)local_d0;
    goto LAB_180175cc0;
  }
  for (; (byte ******)local_d0[0] != (byte ******)0x0;
      local_d0[0] = (byte *****)((longlong)local_d0[0] + 1)) {
LAB_180175cc0:
    if (*(byte *)local_d0[0] == 0) break;
    uVar4 = (uVar4 ^ *(byte *)local_d0[0]) * 0x100000001b3;
  }
  plVar3 = (longlong *)*param_1;
  plVar2 = (longlong *)plVar3[1];
  cVar1 = *(char *)((longlong)plVar2 + 0x19);
  plVar6 = plVar3;
  while (cVar1 == '\0') {
    plVar5 = plVar2;
    if ((ulonglong)plVar2[4] < uVar4) {
      plVar2 = plVar2 + 2;
      plVar5 = plVar6;
    }
    plVar2 = (longlong *)*plVar2;
    plVar6 = plVar5;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  if (((*(char *)((longlong)plVar6 + 0x19) == '\0') && ((ulonglong)plVar6[4] <= uVar4)) &&
     (plVar6 != plVar3)) {
    local_60 = (longlong *)0x0;
    plVar2 = plVar6 + 5;
    plVar3 = plVar2;
    if (0xf < (ulonglong)plVar6[8]) {
      plVar3 = (longlong *)*plVar2;
    }
    uVar9 = strtof(plVar3,&local_60);
    if (0xf < (ulonglong)plVar6[8]) {
      plVar2 = (longlong *)*plVar2;
    }
    if (local_60 != plVar2) {
      uVar10 = uVar9;
    }
  }
  *(undefined4 *)((longlong)param_3 + 4) = uVar10;
  local_f8 = 0;
  FUN_18020e450(local_d0);
  uVar10 = (undefined4)param_3[1];
  if (0x7fffffffffffffff - param_2[2] < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_1800130a0();
  }
  local_108 = 2;
  local_110 = &DAT_180361cc4;
  local_118 = param_2[2];
  FUN_18020e930(local_b0);
  local_f8 = 4;
  uVar4 = 0x14650fb0739d0383;
  if (local_98 < 0x10) {
    local_b0[0] = (byte *****)local_b0;
    goto LAB_180175dd4;
  }
  for (; (byte ******)local_b0[0] != (byte ******)0x0;
      local_b0[0] = (byte *****)((longlong)local_b0[0] + 1)) {
LAB_180175dd4:
    param_3 = local_70;
    if (*(byte *)local_b0[0] == 0) break;
    uVar4 = (uVar4 ^ *(byte *)local_b0[0]) * 0x100000001b3;
  }
  plVar3 = (longlong *)*param_1;
  plVar2 = (longlong *)plVar3[1];
  cVar1 = *(char *)((longlong)plVar2 + 0x19);
  plVar6 = plVar3;
  while (cVar1 == '\0') {
    plVar5 = plVar2;
    if ((ulonglong)plVar2[4] < uVar4) {
      plVar2 = plVar2 + 2;
      plVar5 = plVar6;
    }
    plVar2 = (longlong *)*plVar2;
    plVar6 = plVar5;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  if (((*(char *)((longlong)plVar6 + 0x19) == '\0') && ((ulonglong)plVar6[4] <= uVar4)) &&
     (plVar6 != plVar3)) {
    local_58 = (longlong *)0x0;
    plVar2 = plVar6 + 5;
    plVar3 = plVar2;
    if (0xf < (ulonglong)plVar6[8]) {
      plVar3 = (longlong *)*plVar2;
    }
    uVar9 = strtof(plVar3,&local_58);
    if (0xf < (ulonglong)plVar6[8]) {
      plVar2 = (longlong *)*plVar2;
    }
    if (local_58 != plVar2) {
      uVar10 = uVar9;
    }
  }
  *(undefined4 *)(param_3 + 1) = uVar10;
  local_f8 = 0;
  FUN_18020e450(local_b0);
  uVar10 = *(undefined4 *)((longlong)param_3 + 0xc);
  if (0x7fffffffffffffff - param_2[2] < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_1800130a0();
  }
  local_108 = 2;
  local_110 = &DAT_180361cc8;
  local_118 = param_2[2];
  FUN_18020e930(local_90);
  local_f8 = 8;
  if (local_78 < 0x10) {
    local_90[0] = (byte *****)local_90;
  }
  else if ((byte ******)local_90[0] == (byte ******)0x0) goto LAB_180175eff;
  do {
    param_3 = local_70;
    if (*(byte *)local_90[0] == 0) break;
    uVar7 = (uVar7 ^ *(byte *)local_90[0]) * 0x100000001b3;
    local_90[0] = (byte *****)((longlong)local_90[0] + 1);
  } while ((byte ******)local_90[0] != (byte ******)0x0);
LAB_180175eff:
  param_1 = (longlong *)*param_1;
  plVar3 = (longlong *)param_1[1];
  cVar1 = *(char *)((longlong)plVar3 + 0x19);
  plVar2 = param_1;
  while (cVar1 == '\0') {
    plVar6 = plVar3;
    if ((ulonglong)plVar3[4] < uVar7) {
      plVar3 = plVar3 + 2;
      plVar6 = plVar2;
    }
    plVar3 = (longlong *)*plVar3;
    plVar2 = plVar6;
    cVar1 = *(char *)((longlong)plVar3 + 0x19);
  }
  if (((*(char *)((longlong)plVar2 + 0x19) == '\0') && ((ulonglong)plVar2[4] <= uVar7)) &&
     (plVar2 != param_1)) {
    local_70 = (longlong *)0x0;
    plVar6 = plVar2 + 5;
    plVar3 = plVar6;
    if (0xf < (ulonglong)plVar2[8]) {
      plVar3 = (longlong *)*plVar6;
    }
    uVar9 = strtof(plVar3,&local_70);
    if (0xf < (ulonglong)plVar2[8]) {
      plVar6 = (longlong *)*plVar6;
    }
    if (local_70 != plVar6) {
      uVar10 = uVar9;
    }
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar10;
  local_f8 = 0;
  FUN_18020e450(local_90);
  return;
}


