// 0x18022b910  FUN_18022b910
// size=594 thunk=false
// signature: undefined FUN_18022b910()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_18022b910(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5,undefined4 param_6,undefined4 param_7)

{
  longlong *plVar1;
  undefined2 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  undefined1 local_18;
  undefined1 local_17 [7];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  local_30 = param_1 + 1;
  *local_30 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  local_28 = param_1 + 8;
  *local_28 = 0;
  local_20 = param_1 + 9;
  *local_20 = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  plVar1 = param_1 + 0x10;
  *plVar1 = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = param_2;
  param_1[0x18] = param_3;
  param_1[0x19] = param_5;
  *(undefined4 *)(param_1 + 0x1a) = param_7;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = param_6;
  *(byte *)(param_1 + 0x1c) = (byte)(*(uint *)(param_5 + 0xc) >> 3) & 1;
  param_1[0x1d] = param_4;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined2 *)(param_1 + 0x20) = 0;
  uVar4 = (ulonglong)*(uint *)(param_5 + 0x24);
  lVar5 = *plVar1;
  puVar3 = (undefined8 *)param_1[0x11];
  uVar6 = (longlong)puVar3 - lVar5 >> 4;
  local_48 = param_1;
  local_38 = param_1;
  if (uVar4 < uVar6) {
    param_1[0x11] = uVar4 * 0x10 + lVar5;
  }
  else if (uVar6 < uVar4) {
    if ((ulonglong)(param_1[0x12] - lVar5 >> 4) < uVar4) {
      FUN_18023cf10(plVar1,uVar4);
    }
    else {
      for (lVar5 = uVar4 - uVar6; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3 = puVar3 + 2;
      }
      param_1[0x11] = puVar3;
    }
  }
  if ((*(uint *)(param_5 + 0xc) & 0x100) != 0) {
    local_18 = 0x57;
    uVar2 = FUN_18023b640(param_1[0x1d],&local_18,local_17,
                          *(uint *)(param_1 + 0x1a) >> 8 & 0xffffff01);
    *(undefined2 *)((longlong)param_1 + 0xfc) = uVar2;
  }
  if ((*(uint *)(param_5 + 0xc) & 0x200) != 0) {
    local_18 = 0x53;
    uVar2 = FUN_18023b640(param_1[0x1d],&local_18,local_17,
                          *(uint *)(param_1 + 0x1a) >> 8 & 0xffffff01);
    *(undefined2 *)((longlong)param_1 + 0xfe) = uVar2;
  }
  if ((*(uint *)(param_5 + 0xc) & 0x400) != 0) {
    local_18 = 0x44;
    uVar2 = FUN_18023b640(param_1[0x1d],&local_18,local_17,
                          *(uint *)(param_1 + 0x1a) >> 8 & 0xffffff01);
    *(undefined2 *)(param_1 + 0x20) = uVar2;
  }
  if ((*(uint *)(param_1 + 0x1a) & 0x3e) != 0) {
    *(uint *)(param_1 + 0x1a) = *(uint *)(param_1 + 0x1a) & 0xffffefff;
  }
  return param_1;
}


