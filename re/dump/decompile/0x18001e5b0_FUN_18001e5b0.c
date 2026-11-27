// 0x18001e5b0  FUN_18001e5b0
// size=317 thunk=false
// signature: undefined FUN_18001e5b0()
// status: ok


undefined4 FUN_18001e5b0(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28 [32];
  
  bVar5 = false;
  if (DAT_1803fd334 == 0) {
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0;
    FUN_18001d080(&local_68,"DT_BaseCombatWeapon",0x13);
    uVar3 = FUN_18016d4c0(local_28,&local_68);
    uVar3 = FUN_180018ef0(&DAT_1803fac80,uVar3);
    FUN_18020e450(&local_68);
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    FUN_18001d080(&local_48,"m_iClip1",8);
    uVar4 = FUN_18016d4c0(local_28,&local_48);
    iVar1 = FUN_180018c10(uVar3,uVar4);
    FUN_18020e450(&local_48);
    bVar5 = iVar1 == 0;
    DAT_1803fd334 = iVar1;
  }
  if (bVar5 || DAT_1803fd334 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined4 *)(DAT_1803fd334 + param_1);
  }
  return uVar2;
}


