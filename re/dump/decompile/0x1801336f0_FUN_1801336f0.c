// 0x1801336f0  FUN_1801336f0
// size=461 thunk=false
// signature: undefined FUN_1801336f0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1801336f0(undefined8 *param_1,longlong param_2,longlong param_3)

{
  size_t sVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_128 [32];
  longlong local_108;
  uint local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 *local_d0;
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  undefined8 uStack_50;
  char local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_128;
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_f8 = 1;
  local_d0 = param_1;
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_18020d6f0();
  }
  if (param_3 != 0) {
    local_108 = param_3;
    FUN_180012b20(local_48,0x20,0xffffffffffffffff,&DAT_18033f580);
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    sVar1 = strlen(local_48);
    FUN_18001d080(&local_68,local_48,sVar1);
    if (local_58 < 7) {
      uVar2 = FUN_18016d4c0(local_88,&local_68);
      uVar4 = 3;
    }
    else {
      uVar2 = FUN_18020e670(&local_68,local_a8,local_58 - 6,0xffffffffffffffff);
      uVar4 = 5;
    }
    local_f8 = uVar4;
    FUN_18016d4c0(local_c8,uVar2);
    uVar5 = uVar4 | 8;
    local_f8 = uVar5;
    if ((uVar4 & 4) != 0) {
      uVar5 = uVar4 & 0xfffffffb | 8;
      local_f8 = uVar5;
      FUN_18020e450(local_a8);
    }
    if ((uVar5 & 2) != 0) {
      uVar5 = uVar5 & 0xfffffffd;
      local_f8 = uVar5;
      FUN_18020e450(local_88);
    }
    FUN_18020e450(&local_68);
    puVar3 = (undefined4 *)FUN_18022a630(local_c8);
    local_f0 = *puVar3;
    uStack_ec = puVar3[1];
    uStack_e8 = puVar3[2];
    uStack_e4 = puVar3[3];
    local_e0 = *(undefined8 *)(puVar3 + 4);
    uStack_d8 = *(undefined8 *)(puVar3 + 6);
    *(undefined1 *)puVar3 = 0;
    *(undefined8 *)(puVar3 + 4) = 0;
    *(undefined8 *)(puVar3 + 6) = 0xf;
    local_f8 = uVar5 | 0x20;
    FUN_180214300(param_1,&local_f0);
    local_f8 = uVar5;
    FUN_18020e450(&local_f0);
    local_f8 = uVar5 & 0xffffffd7;
    FUN_18020e450(local_c8);
  }
  return param_1;
}


