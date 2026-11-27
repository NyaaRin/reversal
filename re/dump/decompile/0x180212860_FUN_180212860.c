// 0x180212860  FUN_180212860
// size=913 thunk=false
// signature: undefined FUN_180212860()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180212860(undefined4 *param_1,undefined4 *param_2,longlong param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined4 *local_88;
  undefined4 *local_80;
  undefined4 *local_78;
  undefined4 local_70 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  lVar1 = (longlong)param_2 - (longlong)param_1;
  while( true ) {
    if (lVar1 < 0x630) {
      FUN_1802206f0(param_1,param_2);
      return;
    }
    lVar1 = ((longlong)param_2 - (longlong)param_1) / 6 +
            ((longlong)param_2 - (longlong)param_1 >> 0x3f);
    lVar1 = (lVar1 >> 3) - (lVar1 >> 0x3f);
    lVar6 = lVar1 >> 1;
    if (param_3 < 1) break;
    puVar5 = param_1 + lVar6 * 0xc;
    puVar4 = param_2 + -0xc;
    lVar1 = ((longlong)puVar4 - (longlong)param_1 >> 4) * -0x5555555555555555;
    local_88 = puVar5;
    if (lVar1 < 0x29) {
      FUN_18023aa40(param_1,puVar5,puVar4);
    }
    else {
      lVar1 = lVar1 + 1 >> 3;
      FUN_18023aa40(param_1,param_1 + lVar1 * 0xc,param_1 + lVar1 * 0x18);
      FUN_18023aa40(local_88 + lVar1 * -0xc,local_88,local_88 + lVar1 * 0xc);
      FUN_18023aa40(param_2 + lVar1 * -0x18 + -0xc,puVar4 + lVar1 * -0xc);
      puVar5 = local_88;
      FUN_18023aa40(param_1 + lVar1 * 0xc,local_88,puVar4 + lVar1 * -0xc);
    }
    FUN_1802303c0(&local_80,param_1,puVar5,param_2);
    puVar5 = local_78;
    puVar4 = local_80;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if (((longlong)local_80 - (longlong)param_1 >> 4) * -0x5555555555555555 <
        ((longlong)param_2 - (longlong)local_78 >> 4) * -0x5555555555555555) {
      FUN_180212860(param_1,local_80,param_3,param_4);
      puVar4 = param_2;
      param_1 = puVar5;
    }
    else {
      FUN_180212860(local_78,param_2,param_3,param_4);
    }
    lVar1 = (longlong)puVar4 - (longlong)param_1;
    param_2 = puVar4;
  }
  if (0 < lVar6) {
    lVar2 = lVar6 * 0x30;
    do {
      lVar6 = lVar6 + -1;
      local_70[0] = *(undefined4 *)((longlong)param_1 + lVar2 + -0x30);
      local_68 = *(undefined8 *)(lVar2 + -0x28 + (longlong)param_1);
      uStack_60 = *(undefined8 *)((longlong)param_1 + lVar2 + -0x20);
      local_58 = *(undefined8 *)((longlong)param_1 + lVar2 + -0x18);
      uStack_50 = *(undefined8 *)((longlong)param_1 + lVar2 + -0x10);
      *(undefined1 *)((longlong)param_1 + lVar2 + -0x28) = 0;
      *(undefined8 *)((longlong)param_1 + lVar2 + -0x18) = 0;
      *(undefined8 *)((longlong)param_1 + lVar2 + -0x10) = 0xf;
      local_48 = *(undefined4 *)((longlong)param_1 + lVar2 + -8);
      local_98 = param_4;
      FUN_1802301f0(param_1,lVar6,lVar1,local_70);
      FUN_18020e450(&local_68);
      lVar2 = lVar2 + -0x30;
    } while (0 < lVar6);
  }
  if (lVar1 < 2) {
    return;
  }
  puVar3 = (undefined8 *)(param_2 + -10);
  do {
    puVar4 = param_2 + -0xc;
    if (1 < ((longlong)param_2 - (longlong)param_1 >> 4) * -0x5555555555555555) {
      local_70[0] = *puVar4;
      local_68 = *puVar3;
      uStack_60 = puVar3[1];
      local_58 = puVar3[2];
      uStack_50 = puVar3[3];
      *(undefined1 *)puVar3 = 0;
      puVar3[2] = 0;
      puVar3[3] = 0xf;
      local_48 = param_2[-2];
      *puVar4 = *param_1;
      FUN_18020e8a0(puVar3,param_1 + 2);
      param_2[-2] = param_1[10];
      local_98 = param_4;
      FUN_1802301f0(param_1,0,((longlong)puVar4 - (longlong)param_1 >> 4) * -0x5555555555555555,
                    local_70);
      FUN_18020e450(&local_68);
    }
    puVar3 = puVar3 + -6;
    param_2 = puVar4;
  } while (0x5f < (longlong)puVar4 - (longlong)param_1);
  return;
}


