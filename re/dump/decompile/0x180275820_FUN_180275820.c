// 0x180275820  FUN_180275820
// size=1790 thunk=false
// signature: undefined FUN_180275820()
// status: ok


void FUN_180275820(longlong param_1,undefined8 *param_2,byte param_3,char param_4,int param_5,
                  longlong param_6,float param_7)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  float fVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  float *pfVar8;
  undefined8 uVar9;
  uint uVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 local_118;
  undefined2 uStack_117;
  undefined1 uStack_115;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  undefined1 local_100;
  undefined2 local_ff;
  undefined1 local_fd;
  undefined1 local_fc;
  undefined2 local_fb;
  undefined1 local_f9;
  undefined1 local_f8;
  undefined2 local_f7;
  undefined1 local_f5;
  undefined1 local_f4;
  undefined2 uStack_f3;
  undefined1 uStack_f1;
  undefined1 local_f0;
  undefined2 local_ef;
  undefined1 local_ed;
  undefined1 local_ec;
  undefined2 local_eb;
  undefined1 local_e9;
  undefined1 local_e8;
  undefined2 local_e7;
  undefined1 local_e5;
  undefined1 local_e4;
  undefined2 uStack_e3;
  undefined1 uStack_e1;
  uint local_e0;
  uint local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  
  lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar11 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar1 = *(float *)(param_1 + 0x60);
  fVar2 = *(float *)(param_1 + 100);
  lVar11 = *(longlong *)(lVar11 + 0xec0);
  *(undefined1 *)(param_1 + 0xd1) = 0;
  *(undefined4 *)(param_1 + 0x170) = 1;
  fVar15 = DAT_180380bb0;
  fVar4 = DAT_180380ac0;
  if (*(char *)(param_1 + 0xcf) == '\0') {
    uVar10 = *(uint *)(param_1 + 0x14);
    if (-1 < (char)uVar10) {
      uVar6 = (uVar10 & 0x1000000 | 0x2000000) >> 0x18;
      if ((uVar10 & 0x6000000) != 0) {
        uVar6 = 4;
      }
      uVar6 = FUN_18026a6a0(uVar6,DAT_180380bb0);
      if ((*(byte *)(lVar11 + 0x1f48) & 0x40) != 0) {
        fVar17 = *(float *)(lVar11 + 0x1fb0);
        if (0.0 <= fVar17) {
          fVar12 = fVar15;
          if (fVar17 <= fVar15) {
            fVar12 = fVar17;
          }
        }
        else {
          fVar12 = 0.0;
        }
        uVar6 = (int)(fVar12 * DAT_1803811c8 + fVar4) << 0x18 | uVar6 & 0xffffff;
      }
      if ((uVar6 & 0xff000000) != 0) {
        local_108 = *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x30);
        local_110 = *(float *)(param_1 + 0x28) + 0.0;
        uVar7 = 0xc0;
        if ((uVar10 & 1) != 0) {
          uVar7 = 0xf0;
        }
        local_10c = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x68);
        local_104 = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x34);
        FUN_180295000(*(undefined8 *)(param_1 + 0x2c8),&local_110,&local_108,uVar6,fVar1,uVar7);
      }
    }
    if ((uVar10 & 1) == 0) {
      uVar7 = FUN_18026a6a0(param_3 + 10,fVar15);
      FUN_180295000(*(undefined8 *)(param_1 + 0x2c8),param_2,param_2 + 1,uVar7,fVar1,0x30);
    }
    if ((uVar10 >> 10 & 1) != 0) {
      fVar17 = *(float *)(param_1 + 0x28);
      fVar12 = *(float *)(param_1 + 0x2c);
      uVar9 = *(undefined8 *)(param_1 + 0x2c8);
      fVar14 = fVar12 + *(float *)(param_1 + 0x68);
      fVar16 = fVar17 + *(float *)(param_1 + 0x38);
      fVar13 = fVar17 + *(float *)(param_1 + 0x30);
      local_10c = fVar14;
      if (fVar14 <= fVar12) {
        local_10c = fVar12;
      }
      if (fVar13 <= fVar16) {
        fVar16 = fVar13;
      }
      fVar12 = fVar12 + *(float *)(param_1 + 0x34);
      fVar14 = fVar14 + *(float *)(param_1 + 0x6c);
      if (fVar12 <= fVar14) {
        fVar14 = fVar12;
      }
      fVar12 = fVar1;
      if ((uVar10 & 1) == 0) {
        fVar12 = 0.0;
      }
      local_110 = fVar17;
      local_108 = fVar16;
      local_104 = fVar14;
      uVar7 = FUN_18026a6a0(0xd,fVar15);
      FUN_180295000(uVar9,&local_110,&local_108,uVar7,fVar12,0x30);
      fVar12 = *(float *)(lVar11 + 0xcd0);
      if ((0.0 < fVar12) && (fVar14 < *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x2c))) {
        uVar9 = *(undefined8 *)(param_1 + 0x2c8);
        uVar7 = FUN_18026a6a0(5,fVar15);
        FUN_180294d60(uVar9,fVar17 + fVar2 * fVar4,fVar16 - fVar2 * fVar4,fVar14,uVar7,fVar12);
      }
    }
    if (*(char *)(param_1 + 200) != '\0') {
      FUN_1802acd50(0);
    }
    if (*(char *)(param_1 + 0xc9) != '\0') {
      FUN_1802acd50(1);
    }
    if (param_4 != '\0') {
      if (((uVar10 & 2) == 0) && (uVar10 = 0, 0 < param_5)) {
        lVar11 = 0;
        do {
          local_dc = *(uint *)(param_6 + lVar11 * 4);
          if ((local_dc & 0xff000000) != 0) {
            fVar15 = *(float *)(param_1 + 0x28);
            fVar17 = *(float *)(param_1 + 0x2c);
            local_e0 = uVar10 & 1;
            fVar15 = ((fVar15 + *(float *)(param_1 + 0x30)) - fVar15) *
                     (float)(&DAT_180331320)[lVar11 * 6] + fVar15;
            fVar17 = ((fVar17 + *(float *)(param_1 + 0x34)) - fVar17) *
                     (float)(&DAT_180331324)[lVar11 * 6] + fVar17;
            fVar12 = (float)(int)(fVar2 * fVar4 + fVar4);
            local_118 = SUB41(fVar12,0);
            uStack_117 = (undefined2)((uint)fVar12 >> 8);
            uStack_115 = (undefined1)((uint)fVar12 >> 0x18);
            if (local_e0 == 0) {
              local_100 = param_7._0_1_;
              local_ff = param_7._1_2_;
              local_fd = param_7._3_1_;
              local_fc = local_118;
              local_fb = uStack_117;
              local_f9 = uStack_115;
              fVar14 = param_7;
            }
            else {
              local_f4 = param_7._0_1_;
              uStack_f3 = param_7._1_2_;
              uStack_f1 = param_7._3_1_;
              local_f8 = local_118;
              local_f7 = uStack_117;
              local_f5 = uStack_115;
              fVar14 = fVar12;
            }
            pfVar8 = (float *)&local_fc;
            if (local_e0 != 0) {
              pfVar8 = (float *)&local_f4;
            }
            local_d0 = fVar14 * (float)(&DAT_180331328)[lVar11 * 6] + fVar15;
            local_cc = *pfVar8 * (float)(&DAT_18033132c)[lVar11 * 6] + fVar17;
            FUN_18020dc30(*(longlong *)(param_1 + 0x2c8) + 0x50,&local_d0);
            if (local_e0 == 0) {
              local_ec = param_7._0_1_;
              local_eb = param_7._1_2_;
              local_e9 = param_7._3_1_;
              local_f0 = local_118;
              local_ef = uStack_117;
              local_ed = uStack_115;
              fVar14 = fVar12;
            }
            else {
              local_e8 = param_7._0_1_;
              local_e7 = param_7._1_2_;
              local_e5 = param_7._3_1_;
              local_e4 = local_118;
              uStack_e3 = uStack_117;
              uStack_e1 = uStack_115;
              fVar14 = param_7;
            }
            pfVar8 = (float *)&local_ec;
            if (local_e0 != 0) {
              pfVar8 = (float *)&local_e4;
            }
            local_110 = fVar14 * (float)(&DAT_180331328)[lVar11 * 6] + fVar15;
            local_10c = *pfVar8 * (float)(&DAT_18033132c)[lVar11 * 6] + fVar17;
            FUN_18020dc30(*(longlong *)(param_1 + 0x2c8) + 0x50,&local_110);
            local_d4 = (fVar1 + fVar12) * (float)(&DAT_18033132c)[lVar11 * 6] + fVar17;
            local_d8 = (fVar1 + fVar12) * (float)(&DAT_180331328)[lVar11 * 6] + fVar15;
            if (fVar4 <= fVar1) {
              FUN_180293e00(*(longlong *)(param_1 + 0x2c8),&local_d8,fVar1,
                            (&DAT_180331330)[lVar11 * 6] << 2,(&DAT_180331334)[lVar11 * 6] << 2);
            }
            else {
              FUN_18020dc30(*(longlong *)(param_1 + 0x2c8) + 0x50);
            }
            lVar3 = *(longlong *)(param_1 + 0x2c8);
            FUN_1802938c0(lVar3,*(undefined8 *)(lVar3 + 0x58),*(undefined4 *)(lVar3 + 0x50),local_dc
                         );
            *(undefined4 *)(lVar3 + 0x50) = 0;
          }
          uVar10 = uVar10 + 1;
          lVar11 = lVar11 + 1;
        } while ((int)uVar10 < param_5);
      }
      FUN_180275650(param_1);
    }
  }
  else {
    uVar7 = *(undefined4 *)(lVar11 + 0xcd0);
    *(float *)(lVar11 + 0xcd0) = fVar2;
    if ((param_3 == 0) || (uVar9 = 0xb, *(char *)(lVar11 + 0x2068) == '\0')) {
      uVar9 = 0xc;
    }
    uVar5 = FUN_18026a6a0(uVar9,DAT_180380bb0);
    FUN_18026c020(*param_2,param_2[1],uVar5,1,fVar1);
    *(undefined4 *)(lVar11 + 0xcd0) = uVar7;
  }
  *(undefined4 *)(param_1 + 0x170) = 0;
  return;
}


