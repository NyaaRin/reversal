// 0x1802215d0  FUN_1802215d0
// size=451 thunk=false
// signature: undefined FUN_1802215d0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802215d0(undefined4 *param_1,undefined4 *param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  if (0x9f < (longlong)param_2 - (longlong)param_1) {
    puVar2 = (undefined8 *)(param_2 + -0x12);
    do {
      puVar1 = param_2 + -0x14;
      if (1 < ((longlong)param_2 - (longlong)param_1 >> 4) * -0x3333333333333333) {
        local_88[0] = *puVar1;
        local_80 = *puVar2;
        uStack_78 = puVar2[1];
        local_70 = puVar2[2];
        local_68 = puVar2[3];
        puVar2[3] = 0xf;
        *(undefined1 *)puVar2 = 0;
        puVar2[2] = 0;
        local_60 = *(undefined8 *)(param_2 + -10);
        uStack_58 = *(undefined8 *)(param_2 + -8);
        local_50 = *(undefined8 *)(param_2 + -6);
        local_48 = *(undefined8 *)(param_2 + -4);
        *(undefined1 *)(param_2 + -10) = 0;
        *(undefined8 *)(param_2 + -6) = 0;
        *(undefined8 *)(param_2 + -4) = 0xf;
        local_40 = param_2[-2];
        local_3c = *(undefined1 *)(param_2 + -1);
        *puVar1 = *param_1;
        FUN_18020e8a0(puVar2,param_1 + 2);
        FUN_18020e8a0(param_2 + -10,param_1 + 10);
        param_2[-2] = param_1[0x12];
        *(undefined1 *)(param_2 + -1) = *(undefined1 *)(param_1 + 0x13);
        local_98 = param_3;
        FUN_180230a50(param_1,0,((longlong)puVar1 - (longlong)param_1 >> 4) * -0x3333333333333333,
                      local_88);
        FUN_18020e450(&local_60);
        FUN_18020e450(&local_80);
      }
      puVar2 = puVar2 + -10;
      param_2 = puVar1;
    } while (0x9f < (longlong)puVar1 - (longlong)param_1);
  }
  return;
}


