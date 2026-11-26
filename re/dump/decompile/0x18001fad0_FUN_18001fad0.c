// 0x18001fad0  FUN_18001fad0
// size=229 thunk=false
// signature: undefined FUN_18001fad0()
// status: ok


undefined4 FUN_18001fad0(longlong param_1)

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
  FUN_18001d080(&local_b8,"DT_BasePlayer",0xd);
  uVar2 = FUN_18016d4c0(local_68,&local_b8);
  uVar2 = FUN_180018ef0(&DAT_1803fac80,uVar2);
  FUN_18020e450(&local_b8);
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  FUN_18001d080(&local_98,"m_iObserverMode",0xf);
  local_78 = &local_98;
  local_70 = local_48;
  uVar3 = FUN_18016d4c0(local_48,&local_98);
  iVar1 = FUN_180018c10(uVar2,uVar3);
  FUN_18020e450(&local_98);
  return *(undefined4 *)(iVar1 + param_1);
}


