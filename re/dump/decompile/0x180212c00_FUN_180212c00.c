// 0x180212c00  FUN_180212c00
// size=860 thunk=false
// signature: undefined FUN_180212c00()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180212c00(longlong param_1,undefined8 *param_2,longlong param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  longlong local_88;
  undefined8 *local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  lVar1 = (longlong)param_2 - param_1;
  while( true ) {
    if (lVar1 < 0x528) {
      FUN_1802209a0(param_1,param_2);
      return;
    }
    lVar1 = ((longlong)param_2 - param_1) / 0x28;
    lVar2 = lVar1 >> 1;
    if (param_3 < 1) break;
    lVar1 = param_1 + lVar2 * 0x28;
    puVar5 = param_2 + -5;
    lVar2 = ((longlong)puVar5 - param_1 >> 3) * -0x3333333333333333;
    local_88 = lVar1;
    if (lVar2 < 0x29) {
      FUN_18023abb0(param_1,lVar1,puVar5);
    }
    else {
      lVar3 = lVar2 + 1 >> 3;
      lVar2 = lVar3 * 0x28 + param_1;
      FUN_18023abb0(param_1,lVar2,lVar3 * 0x50 + param_1);
      FUN_18023abb0(local_88 + lVar3 * -0x28,local_88,lVar3 * 0x28 + local_88);
      FUN_18023abb0(param_2 + lVar3 * -10 + -5,puVar5 + lVar3 * -5);
      lVar1 = local_88;
      FUN_18023abb0(lVar2,local_88,puVar5 + lVar3 * -5);
    }
    FUN_180230800(&local_80,param_1,lVar1,param_2);
    lVar1 = local_78;
    puVar5 = local_80;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if (((longlong)local_80 - param_1 >> 3) * -0x3333333333333333 <
        ((longlong)param_2 - local_78 >> 3) * -0x3333333333333333) {
      FUN_180212c00(param_1,local_80,param_3,param_4);
      param_1 = lVar1;
      puVar5 = param_2;
    }
    else {
      FUN_180212c00(local_78,param_2,param_3,param_4);
    }
    lVar1 = (longlong)puVar5 - param_1;
    param_2 = puVar5;
  }
  while (0 < lVar2) {
    lVar2 = lVar2 + -1;
    lVar3 = lVar2 * 0x28;
    local_70 = *(undefined8 *)(lVar3 + param_1);
    uStack_68 = *(undefined8 *)(param_1 + 8 + lVar3);
    local_60 = *(undefined8 *)(param_1 + 0x10 + lVar3);
    uStack_58 = *(undefined8 *)(param_1 + 0x18 + lVar3);
    *(undefined1 *)(lVar3 + param_1) = 0;
    *(undefined8 *)(lVar3 + 0x10 + param_1) = 0;
    *(undefined8 *)(lVar3 + 0x18 + param_1) = 0xf;
    local_50 = *(undefined4 *)(lVar3 + 0x20 + param_1);
    local_98 = param_4;
    FUN_180230670(param_1,lVar2,lVar1,&local_70);
    FUN_18020e450(&local_70);
  }
  puVar5 = param_2;
  if (lVar1 < 2) {
    return;
  }
  do {
    puVar4 = puVar5 + -5;
    if (1 < ((longlong)param_2 - param_1 >> 3) * -0x3333333333333333) {
      local_70 = *puVar4;
      uStack_68 = puVar5[-4];
      local_60 = puVar5[-3];
      uStack_58 = puVar5[-2];
      *(undefined1 *)puVar4 = 0;
      puVar5[-3] = 0;
      puVar5[-2] = 0xf;
      local_50 = *(undefined4 *)(puVar5 + -1);
      FUN_18020e8a0(puVar4,param_1);
      *(undefined4 *)(puVar5 + -1) = *(undefined4 *)(param_1 + 0x20);
      local_98 = param_4;
      FUN_180230670(param_1,0,((longlong)puVar4 - param_1 >> 3) * -0x3333333333333333,&local_70);
      FUN_18020e450(&local_70);
    }
    param_2 = param_2 + -5;
    puVar5 = puVar4;
  } while (0x4f < (longlong)param_2 - param_1);
  return;
}


