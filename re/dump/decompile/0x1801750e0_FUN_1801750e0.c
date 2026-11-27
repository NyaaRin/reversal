// 0x1801750e0  FUN_1801750e0
// size=410 thunk=false
// signature: undefined FUN_1801750e0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801750e0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  size_t sVar1;
  undefined8 uVar2;
  undefined8 ****ppppuVar3;
  ulonglong uVar4;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  undefined4 local_88;
  undefined8 ***local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulonglong uStack_68;
  byte ***local_60 [3];
  ulonglong local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined2 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_c8;
  local_88 = 0;
  local_a8 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  local_98 = 0;
  local_a0 = &DAT_18033e5ea;
  FUN_18020e930(local_60,param_2,param_3,param_2);
  local_88 = 1;
  uVar4 = 0x14650fb0739d0383;
  if (local_48 < 0x10) {
    local_60[0] = (byte ***)local_60;
  }
  else if ((byte ****)local_60[0] == (byte ****)0x0) goto LAB_180175184;
  do {
    if (*(byte *)local_60[0] == 0) break;
    uVar4 = (uVar4 ^ *(byte *)local_60[0]) * 0x100000001b3;
    local_60[0] = (byte ***)((longlong)local_60[0] + 1);
  } while ((byte ****)local_60[0] != (byte ****)0x0);
LAB_180175184:
  FUN_180012ac0(&local_40,0x11,"%016llx",uVar4);
  local_80 = (undefined8 ****)0x0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  sVar1 = strlen((char *)&local_40);
  FUN_18001d080(&local_80,&local_40,sVar1);
  local_88 = 3;
  ppppuVar3 = &local_80;
  if (0xf < uStack_68) {
    ppppuVar3 = (undefined8 ****)local_80;
  }
  uVar2 = FUN_180210c60(param_1,ppppuVar3,local_70);
  uVar2 = FUN_1801fc280(uVar2,&DAT_18034118c);
  local_40 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    local_40 = (undefined8 *)*param_3;
  }
  local_38 = param_3[2];
  local_30 = 0x5c22;
  uVar2 = FUN_1802076a0(uVar2,&local_40);
  FUN_1801fc280(uVar2,&DAT_18033e92c);
  local_88 = 1;
  FUN_18020e450(&local_80);
  local_88 = 0;
  FUN_18020e450(local_60);
  return;
}


