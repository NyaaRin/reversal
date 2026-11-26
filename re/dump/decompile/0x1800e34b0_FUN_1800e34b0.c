// 0x1800e34b0  FUN_1800e34b0
// size=313 thunk=false
// signature: undefined FUN_1800e34b0()
// status: ok


undefined8 FUN_1800e34b0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  
  if (param_1 != 0) {
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    local_68 = 0;
    FUN_18001d080(&local_80,"DT_BaseEntity",0xd);
    uVar2 = FUN_18016d4c0(local_40,&local_80);
    uVar2 = FUN_180018ef0(&DAT_1803fac80,uVar2);
    FUN_18020e450(&local_80);
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    local_48 = 0;
    FUN_18001d080(&local_60,"m_flSimulationTime",0x12);
    uVar3 = FUN_18016d4c0(local_40,&local_60);
    iVar1 = FUN_180018c10(uVar2,uVar3);
    FUN_18020e450(&local_60);
    if (0 < iVar1) {
      *param_2 = *(undefined8 *)(iVar1 + param_1);
      return 1;
    }
  }
  return 0;
}


