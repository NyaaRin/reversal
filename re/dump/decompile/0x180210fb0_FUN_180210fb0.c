// 0x180210fb0  FUN_180210fb0
// size=897 thunk=false
// signature: undefined FUN_180210fb0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180210fb0(longlong param_1,undefined8 *param_2,longlong param_3,undefined1 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  longlong local_a8;
  longlong local_a0;
  undefined8 *local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_d8;
  uVar1 = (longlong)param_2 - param_1;
  local_a8 = param_3;
  while( true ) {
    if ((longlong)(uVar1 & 0xffffffffffffffc0) < 0x801) {
      FUN_18021f510(param_1,param_2);
      return;
    }
    lVar2 = (longlong)param_2 - param_1 >> 7;
    if (param_3 < 1) break;
    lVar2 = lVar2 * 0x40 + param_1;
    lVar5 = (longlong)((longlong)param_2 + (-0x40 - param_1)) >> 6;
    local_a0 = lVar2;
    if (lVar5 < 0x29) {
      FUN_18023a4e0(param_1,lVar2,param_2 + -8);
    }
    else {
      lVar6 = lVar5 + 1 >> 3;
      lVar5 = lVar6 * 0x40 + param_1;
      FUN_18023a4e0(param_1,lVar5,lVar6 * 0x80 + param_1);
      FUN_18023a4e0(lVar2 + lVar6 * -0x40,lVar2,lVar6 * 0x40 + lVar2);
      FUN_18023a4e0(param_2 + lVar6 * -0x10 + -8,param_2 + lVar6 * -8 + -8);
      lVar2 = local_a0;
      FUN_18023a4e0(lVar5,local_a0,param_2 + lVar6 * -8 + -8);
      param_3 = local_a8;
    }
    FUN_18022f440(&local_98,param_1,lVar2,param_2);
    lVar2 = local_90;
    puVar3 = local_98;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    local_a8 = param_3;
    if ((longlong)((longlong)local_98 - param_1 & 0xffffffffffffffc0U) <
        (longlong)((longlong)param_2 - local_90 & 0xffffffffffffffc0U)) {
      FUN_180210fb0(param_1,local_98,param_3,param_4);
      param_1 = lVar2;
      puVar3 = param_2;
    }
    else {
      FUN_180210fb0(local_90,param_2,param_3,param_4);
    }
    uVar1 = (longlong)puVar3 - param_1;
    param_2 = puVar3;
  }
  lVar5 = (longlong)param_2 - param_1 >> 6;
  while (0 < lVar2) {
    lVar2 = lVar2 + -1;
    lVar6 = lVar2 * 0x40;
    local_88 = *(undefined8 *)(lVar6 + param_1);
    uStack_80 = *(undefined8 *)(lVar6 + 8 + param_1);
    local_78 = *(undefined8 *)(lVar6 + 0x10 + param_1);
    uStack_70 = *(undefined8 *)(lVar6 + 0x18 + param_1);
    *(undefined1 *)(lVar6 + param_1) = 0;
    *(undefined8 *)(lVar6 + 0x10 + param_1) = 0;
    *(undefined8 *)(lVar6 + 0x18 + param_1) = 0xf;
    local_68 = *(undefined4 *)(lVar6 + 0x20 + param_1);
    local_50 = *(undefined8 *)(lVar6 + 0x38 + param_1);
    *(undefined8 *)(lVar6 + 0x38 + param_1) = 0;
    local_58 = *(undefined8 *)(lVar6 + 0x30 + param_1);
    *(undefined8 *)(lVar6 + 0x30 + param_1) = 0;
    local_60 = *(undefined8 *)(lVar6 + 0x28 + param_1);
    *(undefined8 *)(lVar6 + 0x28 + param_1) = 0;
    local_b8 = param_4;
    FUN_18022f270(param_1,lVar2,lVar5,&local_88);
    FUN_18020d5c0(&local_60);
    FUN_18020e450(&local_88);
  }
  puVar3 = param_2;
  if (lVar5 < 2) {
    return;
  }
  do {
    puVar4 = puVar3 + -8;
    if (0x7f < (longlong)((longlong)param_2 - param_1 & 0xffffffffffffffc0U)) {
      local_88 = *puVar4;
      uStack_80 = puVar3[-7];
      local_78 = puVar3[-6];
      uStack_70 = puVar3[-5];
      *(undefined1 *)puVar4 = 0;
      puVar3[-6] = 0;
      puVar3[-5] = 0xf;
      local_68 = *(undefined4 *)(puVar3 + -4);
      local_50 = puVar3[-1];
      puVar3[-1] = 0;
      local_58 = puVar3[-2];
      puVar3[-2] = 0;
      local_60 = puVar3[-3];
      puVar3[-3] = 0;
      FUN_18020e8a0(puVar4,param_1);
      *(undefined4 *)(puVar3 + -4) = *(undefined4 *)(param_1 + 0x20);
      FUN_18020d830(puVar3 + -3,param_1 + 0x28);
      local_b8 = param_4;
      FUN_18022f270(param_1,0,(longlong)puVar4 - param_1 >> 6,&local_88);
      FUN_18020d5c0(&local_60);
      FUN_18020e450(&local_88);
    }
    param_2 = param_2 + -8;
    puVar3 = puVar4;
  } while (0x7f < (longlong)((longlong)param_2 - param_1 & 0xffffffffffffffc0U));
  return;
}


