// 0x1800b5200  FUN_1800b5200
// size=1082 thunk=false
// signature: undefined FUN_1800b5200()
// status: ok


char FUN_1800b5200(void)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  undefined8 *local_50;
  
  cVar1 = DAT_18040a630;
  if ((DAT_18040a630 == '\0') && (DAT_18040a600 == '\0')) {
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    local_100 = 0;
    FUN_18001d080(&local_118,
                  "48 83 EC 38 83 3D ? ? ? ? 06 75 ? 83 3D ? ? ? ? 00 7C ? 48 8B 0D ? ? ? ? 48 8B 01 FF 50 48"
                  ,0x5a);
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    local_e0 = 0;
    FUN_18001d080(&local_f8,"engine.dll",10);
    lVar3 = FUN_180015f40(&local_f8,&local_118);
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    local_e0 = 0;
    FUN_18001d080(&local_f8,
                  "48 83 EC 48 48 89 5C 24 50 48 8D 0D ? ? ? ? 0F 29 74 24 30 0F 29 7C 24 20 E8",
                  0x4c);
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    local_100 = 0;
    FUN_18001d080(&local_118,"engine.dll",10);
    lVar4 = FUN_180015f40(&local_118,&local_f8);
    local_58 = &local_f8;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    local_e0 = 0;
    FUN_18001d080(&local_f8,
                  "48 83 EC 38 48 8B 0D ? ? ? ? 48 89 74 24 48 48 89 7C 24 30 8B B1 0C 10 00 00",
                  0x4c);
    local_50 = &local_118;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    local_100 = 0;
    FUN_18001d080(&local_118,"client.dll",10);
    lVar5 = FUN_180015f40(&local_118,&local_f8);
    if ((lVar3 == 0) || ((lVar4 == 0 || (lVar5 == 0)))) {
      pcVar10 = 
      "[TICKANIM] signature miss (runPred=%p fireEvents=%p updateAnims=%p) -- feature disabled\n";
    }
    else {
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      FUN_18001d080(&local_d8,
                    "48 83 EC 38 83 3D ? ? ? ? 06 75 ? 83 3D ? ? ? ? 00 7C ? 48 8B 0D ? ? ? ? 48 8B 01 FF 50 48"
                    ,0x5a);
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      FUN_18001d080(&local_98,"engine.dll",10);
      lVar6 = FUN_1800160e0(&local_98,&local_d8);
      FUN_18020e450(&local_98);
      FUN_18020e450(&local_d8);
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      FUN_18001d080(&local_b8,
                    "48 83 EC 48 48 89 5C 24 50 48 8D 0D ? ? ? ? 0F 29 74 24 30 0F 29 7C 24 20 E8",
                    0x4c);
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      FUN_18001d080(&local_d8,"engine.dll",10);
      lVar7 = FUN_1800160e0(&local_d8,&local_b8);
      FUN_18020e450(&local_d8);
      FUN_18020e450(&local_b8);
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      FUN_18001d080(&local_78,
                    "48 83 EC 38 48 8B 0D ? ? ? ? 48 89 74 24 48 48 89 7C 24 30 8B B1 0C 10 00 00",
                    0x4c);
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      FUN_18001d080(&local_b8,"client.dll",10);
      lVar8 = FUN_1800160e0(&local_b8,&local_78);
      FUN_18020e450(&local_b8);
      FUN_18020e450(&local_78);
      if (((lVar6 == 1) && (lVar7 == 1)) && (lVar8 == 1)) {
        DAT_18040a5e8 = lVar5;
        DAT_18040a610 = lVar3;
        DAT_18040a620 = lVar4;
        FUN_1800b5050(lVar5);
        if ((DAT_18040a5f8 == 0) || (pcVar10 = "on", DAT_18040a5f0 == 0)) {
          pcVar10 = "OFF -- walker layout changed";
        }
        FUN_180014410("[TICKANIM] anim list count=%p base=%p (anim-time pin %s)\n",DAT_18040a5f8,
                      DAT_18040a5f0,pcVar10);
        iVar2 = FUN_180242fc0(DAT_18040a5e8,FUN_1800b5170,&DAT_18040a608);
        if (iVar2 == 0) {
          FUN_180243560(DAT_18040a5e8,1);
        }
        uVar9 = FUN_1802436b0(iVar2);
        FUN_180014410("[TICKANIM] RunPrediction=%p FireEvents=%p UpdateClientSideAnimations=%p hook=%s\n"
                      ,lVar3,lVar4,DAT_18040a5e8,uVar9);
        DAT_18040a630 = iVar2 == 0;
        if (iVar2 == 0) {
          return true;
        }
        DAT_18040a5e8 = 0;
        DAT_18040a600 = 1;
        DAT_18040a608 = 0;
        return (bool)DAT_18040a630;
      }
      pcVar10 = 
      "[TICKANIM] AMBIGUOUS signatures (runPred=%zu fireEvents=%zu updateAnims=%zu) -- feature disabled\n"
      ;
      lVar3 = lVar6;
      lVar4 = lVar7;
      lVar5 = lVar8;
    }
    DAT_18040a600 = '\x01';
    FUN_180014410(pcVar10,lVar3,lVar4,lVar5);
    cVar1 = '\0';
  }
  return cVar1;
}


