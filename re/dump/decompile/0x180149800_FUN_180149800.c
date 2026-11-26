// 0x180149800  FUN_180149800
// size=998 thunk=false
// signature: undefined FUN_180149800()
// status: ok


void FUN_180149800(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 local_108 [32];
  undefined1 local_e8 [32];
  undefined8 *local_c8;
  undefined1 *local_c0;
  undefined8 *local_b8;
  undefined1 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined1 *local_98;
  undefined8 *local_90;
  undefined1 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined1 *local_70;
  undefined8 *local_68;
  undefined1 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined1 *local_48;
  
  if ((param_1 != 0) && (DAT_1803e8280 != '\0')) {
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0;
    local_130 = 0;
    FUN_18001d080(&local_148,"DT_BaseAnimating",0x10);
    uVar5 = FUN_18016d4c0(local_108,&local_148);
    uVar5 = FUN_180018ef0(&DAT_1803fac80,uVar5);
    FUN_18020e450(&local_148);
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    local_110 = 0;
    FUN_18001d080(&local_128,"m_nSequence",0xb);
    local_c8 = &local_128;
    local_c0 = local_e8;
    uVar6 = FUN_18016d4c0(local_e8,&local_128);
    iVar1 = FUN_180018c10(uVar5,uVar6);
    FUN_18020e450(&local_128);
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    local_110 = 0;
    FUN_18001d080(&local_128,"DT_BaseAnimating",0x10);
    local_b8 = &local_128;
    local_b0 = local_e8;
    uVar5 = FUN_18016d4c0(local_e8,&local_128);
    uVar5 = FUN_180018ef0(&DAT_1803fac80,uVar5);
    FUN_18020e450(&local_128);
    local_a8 = &local_148;
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0;
    local_130 = 0;
    FUN_18001d080(&local_148,"m_flCycle",9);
    local_a0 = &local_148;
    local_98 = local_108;
    uVar6 = FUN_18016d4c0(local_108,&local_148);
    iVar2 = FUN_180018c10(uVar5,uVar6);
    FUN_18020e450(&local_148);
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    local_110 = 0;
    FUN_18001d080(&local_128,"DT_BaseAnimating",0x10);
    local_90 = &local_128;
    local_88 = local_e8;
    uVar5 = FUN_18016d4c0(local_e8,&local_128);
    uVar5 = FUN_180018ef0(&DAT_1803fac80,uVar5);
    FUN_18020e450(&local_128);
    local_80 = &local_148;
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0;
    local_130 = 0;
    FUN_18001d080(&local_148,"m_flPoseParameter",0x11);
    local_78 = &local_148;
    local_70 = local_108;
    uVar6 = FUN_18016d4c0(local_108,&local_148);
    iVar3 = FUN_180018c10(uVar5,uVar6);
    FUN_18020e450(&local_148);
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    local_110 = 0;
    FUN_18001d080(&local_128,"DT_BaseAnimating",0x10);
    local_68 = &local_128;
    local_60 = local_e8;
    uVar5 = FUN_18016d4c0(local_e8,&local_128);
    uVar5 = FUN_180018ef0(&DAT_1803fac80,uVar5);
    FUN_18020e450(&local_128);
    local_58 = &local_148;
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0;
    local_130 = 0;
    FUN_18001d080(&local_148,"m_flPlaybackRate",0x10);
    local_50 = &local_148;
    local_48 = local_108;
    uVar6 = FUN_18016d4c0(local_108,&local_148);
    iVar4 = FUN_180018c10(uVar5,uVar6);
    FUN_18020e450(&local_148);
    if ((iVar1 != 0) && ((iVar2 != 0 && (iVar3 != 0)))) {
      FUN_180148a10(param_1,(longlong)iVar1,(longlong)iVar2,(longlong)iVar4,(longlong)iVar3,
                    DAT_1803e8284,DAT_1803e8288,DAT_1803e828c,DAT_1803e8290,DAT_1803e8298,
                    DAT_1803e8294,DAT_1803e829c);
    }
  }
  return;
}


