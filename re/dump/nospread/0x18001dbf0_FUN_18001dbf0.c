// 18001dbf0  FUN_18001dbf0
// signature: undefined FUN_18001dbf0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18001dbf0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined1 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined1 *local_88;
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  undefined4 local_40 [2];
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_108;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  FUN_18001d080(&local_e8,"DT_BaseCombatCharacter",0x16);
  local_a8 = &local_e8;
  local_a0 = local_80;
  uVar2 = FUN_18016d4c0(local_80,&local_e8);
  uVar2 = FUN_180018ef0(&DAT_1803fac80,uVar2);
  FUN_18020e450(&local_e8);
  local_98 = &local_c8;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  FUN_18001d080(&local_c8,"m_hActiveWeapon",0xf);
  local_90 = &local_c8;
  local_88 = local_60;
  uVar3 = FUN_18016d4c0(local_60,&local_c8);
  iVar1 = FUN_180018c10(uVar2,uVar3);
  FUN_18020e450(&local_c8);
  local_40[0] = *(undefined4 *)(iVar1 + param_1);
  (**(code **)(*DAT_1803fa360 + 0x20))(DAT_1803fa360,local_40);
  return;
}


