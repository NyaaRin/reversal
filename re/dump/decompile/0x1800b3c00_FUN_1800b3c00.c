// 0x1800b3c00  FUN_1800b3c00
// size=1104 thunk=false
// signature: undefined FUN_1800b3c00()
// status: ok


undefined4 * FUN_1800b3c00(void)

{
  undefined8 *local_res8;
  char *local_1e8;
  char *local_1e0;
  char *local_1d8;
  char *local_1d0;
  char **local_1c8;
  char **ppcStack_1c0;
  char **local_1b8;
  char **ppcStack_1b0;
  char **local_1a8;
  char **ppcStack_1a0;
  char **local_198;
  char **ppcStack_190;
  char **local_188;
  char **ppcStack_180;
  char **local_178;
  char **ppcStack_170;
  char **local_168;
  undefined8 **ppuStack_160;
  char **local_158;
  undefined8 **ppuStack_150;
  char *local_148;
  char *local_140;
  char *local_138;
  char *local_130;
  char *local_128;
  char *local_120;
  char *local_118;
  char *local_110;
  char *local_108;
  char *local_100;
  char *local_f8;
  char *local_f0;
  char *local_e8;
  char *local_e0;
  char *local_d8;
  char *local_d0;
  char *local_c8;
  char *local_c0;
  char *local_b8;
  char *local_b0;
  char *local_a8;
  char *local_a0;
  char *local_98;
  char *local_90;
  char **local_88;
  char **ppcStack_80;
  char **local_78;
  char **ppcStack_70;
  char **local_68;
  char **ppcStack_60;
  char **local_58;
  char **ppcStack_50;
  char **local_48;
  char **ppcStack_40;
  char **local_38;
  char **ppcStack_30;
  char **local_28;
  undefined8 **ppuStack_20;
  char **local_18;
  undefined8 **ppuStack_10;
  
  if (DAT_1804009ec == '\0') {
    DAT_1804009ec = '\x01';
    local_res8 = &DAT_1803fac80;
    local_148 = "DT_BaseEntity";
    local_140 = "m_vecOrigin[0]";
    local_138 = "DT_BaseAnimating";
    local_130 = "m_vecOrigin";
    local_1c8 = &local_148;
    ppcStack_1c0 = &local_128;
    local_88 = local_1c8;
    ppcStack_80 = ppcStack_1c0;
    DAT_1803e6f80 = FUN_1800b4050(&local_res8,&local_88);
    local_128 = "DT_BaseEntity";
    local_120 = "m_vecVelocity[0]";
    local_118 = "DT_BaseAnimating";
    local_110 = "m_vecVelocity";
    local_1b8 = &local_128;
    ppcStack_1b0 = &local_108;
    local_78 = local_1b8;
    ppcStack_70 = ppcStack_1b0;
    DAT_1803e6f84 = FUN_1800b4050(&local_res8,&local_78);
    local_1e8 = "DT_BasePlayer";
    local_1e0 = "m_fFlags";
    local_1a8 = &local_1e8;
    ppcStack_1a0 = &local_1d8;
    local_68 = local_1a8;
    ppcStack_60 = ppcStack_1a0;
    DAT_1803e6f8c = FUN_1800b4050(&local_res8,&local_68);
    local_108 = "DT_BaseFlex";
    local_100 = "m_vecViewOffset[0]";
    local_f8 = "DT_BasePlayer";
    local_f0 = "m_vecViewOffset[0]";
    local_198 = &local_108;
    ppcStack_190 = &local_e8;
    local_58 = local_198;
    ppcStack_50 = ppcStack_190;
    DAT_1803e6f90 = FUN_1800b4050(&local_res8,&local_58);
    local_e8 = "DT_BasePlayer";
    local_e0 = "m_vecBaseVelocity";
    local_d8 = "DT_BaseEntity";
    local_d0 = "m_vecBaseVelocity[0]";
    local_188 = &local_e8;
    ppcStack_180 = &local_c8;
    local_48 = local_188;
    ppcStack_40 = ppcStack_180;
    DAT_1803e6f88 = FUN_1800b4050(&local_res8,&local_48);
    local_c8 = "DT_BasePlayer";
    local_c0 = "m_hGroundEntity";
    local_b8 = "DT_BaseEntity";
    local_b0 = "m_hGroundEntity";
    local_178 = &local_c8;
    ppcStack_170 = &local_a8;
    local_38 = local_178;
    ppcStack_30 = ppcStack_170;
    DAT_1803e6f94 = FUN_1800b4050(&local_res8,&local_38);
    local_1d8 = "DT_BasePlayer";
    local_1d0 = "m_flFallVelocity";
    local_168 = &local_1d8;
    ppuStack_160 = &local_1c8;
    local_28 = local_168;
    ppuStack_20 = ppuStack_160;
    DAT_1803e6f98 = FUN_1800b4050(&local_res8,&local_28);
    local_a8 = "DT_BaseEntity";
    local_a0 = "m_nWaterLevel";
    local_98 = "DT_BasePlayer";
    local_90 = "m_nWaterLevel";
    local_158 = &local_a8;
    ppuStack_150 = &local_88;
    local_18 = local_158;
    ppuStack_10 = ppuStack_150;
    DAT_1803e6f9c = FUN_1800b4050(&local_res8,&local_18);
    if ((((DAT_1803e6f80 < 1) || (DAT_1803e6f84 < 1)) || (DAT_1803e6f8c < 1)) || (DAT_1803e6f90 < 1)
       ) {
      DAT_1803e6fa0 = 0;
    }
    else {
      DAT_1803e6fa0 = 1;
    }
    FUN_180014410("[EXTRAP] fields origin=+0x%X vel=+0x%X flags=+0x%X view=+0x%X base=+0x%X ground=+0x%X fall=+0x%X water=+0x%X valid=%d\n"
                  ,DAT_1803e6f80,DAT_1803e6f84,DAT_1803e6f8c,DAT_1803e6f90,DAT_1803e6f88,
                  DAT_1803e6f94,DAT_1803e6f98,DAT_1803e6f9c,DAT_1803e6fa0);
  }
  return &DAT_1803e6f80;
}


