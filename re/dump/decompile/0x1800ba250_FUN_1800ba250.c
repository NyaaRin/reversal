// 0x1800ba250  FUN_1800ba250
// size=308 thunk=false
// signature: undefined FUN_1800ba250()
// status: ok


int FUN_1800ba250(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28 [32];
  
  if (DAT_1803e9654 < 0) {
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0;
    FUN_18001d080(&local_68,"DT_BaseAnimating",0x10);
    uVar2 = FUN_18016d4c0(local_28,&local_68);
    uVar2 = FUN_180018ef0(&DAT_1803fac80,uVar2);
    FUN_18020e450(&local_68);
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    FUN_18001d080(&local_48,"m_flPoseParameter",0x11);
    uVar3 = FUN_18016d4c0(local_28,&local_48);
    iVar1 = FUN_180018c10(uVar2,uVar3);
    FUN_18020e450(&local_48);
    DAT_1803e9654 = iVar1;
    return iVar1;
  }
  return DAT_1803e9654;
}


