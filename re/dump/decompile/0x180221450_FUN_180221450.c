// 0x180221450  FUN_180221450
// size=379 thunk=false
// signature: undefined FUN_180221450()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180221450(longlong param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
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
  lVar3 = (param_2 - param_1 >> 4) * -0x3333333333333333;
  lVar4 = lVar3 >> 1;
  if (0 < lVar4) {
    lVar2 = lVar4 * 0x50;
    do {
      lVar1 = lVar2 + -0x50;
      lVar4 = lVar4 + -1;
      local_88[0] = *(undefined4 *)(param_1 + lVar1);
      local_80 = *(undefined8 *)(param_1 + 8 + lVar1);
      uStack_78 = *(undefined8 *)(param_1 + 0x10 + lVar1);
      local_70 = *(undefined8 *)(param_1 + 0x18 + lVar1);
      local_68 = *(undefined8 *)(param_1 + 0x20 + lVar1);
      *(undefined8 *)(param_1 + -0x30 + lVar2) = 0xf;
      *(undefined1 *)(param_1 + -0x48 + lVar2) = 0;
      *(undefined8 *)(param_1 + -0x38 + lVar2) = 0;
      local_60 = *(undefined8 *)(param_1 + 0x28 + lVar1);
      uStack_58 = *(undefined8 *)(param_1 + 0x30 + lVar1);
      local_50 = *(undefined8 *)(param_1 + 0x38 + lVar1);
      local_48 = *(undefined8 *)(param_1 + 0x40 + lVar1);
      *(undefined1 *)(param_1 + -0x28 + lVar2) = 0;
      *(undefined8 *)(param_1 + -0x18 + lVar2) = 0;
      *(undefined8 *)(param_1 + -0x10 + lVar2) = 0xf;
      local_40 = *(undefined4 *)(param_1 + 0x48 + lVar1);
      local_3c = *(undefined1 *)(param_1 + 0x4c + lVar1);
      local_98 = param_3;
      FUN_180230a50(param_1,lVar4,lVar3,local_88);
      FUN_18020e450(&local_60);
      FUN_18020e450(&local_80);
      lVar2 = lVar1;
    } while (0 < lVar4);
  }
  return;
}


