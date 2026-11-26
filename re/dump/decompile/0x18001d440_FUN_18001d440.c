// 0x18001d440  FUN_18001d440
// size=230 thunk=false
// signature: undefined FUN_18001d440()
// status: ok


longlong FUN_18001d440(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  FUN_18001d080(&local_b8,"DT_BaseEntity",0xd);
  uVar2 = FUN_18016d4c0(local_68,&local_b8);
  uVar2 = FUN_180018ef0(&DAT_1803fac80,uVar2);
  FUN_18020e450(&local_b8);
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  FUN_18001d080(&local_98,"m_vecOrigin[0]",0xe);
  local_78 = &local_98;
  local_70 = local_48;
  uVar3 = FUN_18016d4c0(local_48,&local_98);
  iVar1 = FUN_180018c10(uVar2,uVar3);
  FUN_18020e450(&local_98);
  return param_1 + iVar1;
}


