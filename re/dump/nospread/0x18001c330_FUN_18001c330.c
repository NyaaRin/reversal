// 18001c330  FUN_18001c330
// signature: undefined FUN_18001c330()
// status: ok


bool FUN_18001c330(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined1 *local_70;
  undefined1 local_68 [32];
  undefined1 local_48 [40];
  
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  FUN_18001d080(&local_b8,"DT_BasePlayer",0xd);
  uVar2 = FUN_18016d4c0(local_68,&local_b8);
  uVar2 = FUN_180018ef0(&DAT_1803fac80,uVar2);
  FUN_18020e450(&local_b8);
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  FUN_18001d080(&local_98,"m_lifeState",0xb);
  local_78 = &local_98;
  local_70 = local_48;
  uVar3 = FUN_18016d4c0(local_48,&local_98);
  uVar1 = FUN_180018c10(uVar2,uVar3);
  uVar4 = (ulonglong)uVar1;
  FUN_18020e450(&local_98);
  if ((int)uVar1 < 1) {
    uVar4 = 0xd7;
  }
  return *(char *)(uVar4 + param_1) == '\0';
}


