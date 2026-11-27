// 0x180112e70  Features_AimPoint_AimPointFeature_vfunc06
// size=1705 thunk=false
// signature: undefined Features_AimPoint_AimPointFeature_vfunc06()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_AimPoint_AimPointFeature_vfunc06(longlong param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  float *pfVar12;
  undefined8 uVar13;
  float *pfVar14;
  longlong lVar15;
  char *pcVar16;
  undefined1 auStack_1a8 [32];
  double local_188;
  longlong *local_180;
  char *local_178;
  undefined8 local_170;
  ulonglong local_168;
  undefined4 local_160;
  undefined4 local_158;
  float local_148;
  uint local_144;
  undefined4 local_140;
  uint local_13c;
  longlong local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 local_128 [16];
  longlong local_118;
  char *local_110;
  undefined8 local_108;
  longlong local_100;
  longlong local_f8;
  undefined1 local_f0 [16];
  float local_e0 [4];
  float local_d0 [2];
  char local_c8 [80];
  ulonglong local_78;
  
  local_78 = DAT_1803da4c0 ^ (ulonglong)auStack_1a8;
  local_118 = param_1;
  cVar9 = FUN_1801122a0();
  if (cVar9 != '\0') {
    FUN_180112380(param_1);
    pcVar16 = (char *)(param_1 + 8);
    if ((*pcVar16 != '\0') || (*(char *)(param_1 + 0x14) != '\0')) {
      local_108 = 0x10;
      lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      local_110 = pcVar16;
      local_100 = lVar5;
      if (*(char *)(lVar5 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      local_138 = 0xec0;
      if (((*(longlong *)(lVar5 + 0xec0) != 0) &&
          (lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0xec0) + 0x1520), lVar6 != 0)) &&
         (lVar6 = *(longlong *)(lVar6 + 0x2c8), lVar6 != 0)) {
        local_d0[0] = -2.7634367e-25;
        local_d0[1] = -6.395108e-27;
        local_f8 = lVar6;
        plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_f0,local_d0);
        lVar15 = *plVar10 + 0x28;
        if (*(char *)(lVar5 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        fVar1 = *(float *)(*(longlong *)(lVar5 + 0xec0) + 0xc84);
        local_e0[0] = 0.0;
        local_e0[1] = 0.0;
        local_e0[2] = 0.0;
        local_e0[3] = fVar1 * DAT_180380afc;
        local_144 = FUN_180268ed0(local_e0);
        local_e0[0] = -2.688873e-18;
        local_e0[1] = 4.8967987e-37;
        plVar10 = (longlong *)FUN_180241a30(lVar15,local_128,local_e0);
        puVar11 = (undefined4 *)FUN_180202dc0(*plVar10 + 0x28);
        uVar2 = *puVar11;
        local_e0[0] = -2.6893228e-18;
        local_e0[1] = 4.8973727e-37;
        plVar10 = (longlong *)FUN_180241a30(lVar15,local_128,local_e0);
        puVar11 = (undefined4 *)FUN_180202dc0(*plVar10 + 0x28);
        uVar3 = *puVar11;
        local_e0[0] = -2.6903123e-18;
        local_e0[1] = 4.8986354e-37;
        plVar10 = (longlong *)FUN_180241a30(lVar15,local_128,local_e0);
        puVar11 = (undefined4 *)FUN_180202dc0(*plVar10 + 0x28);
        local_e0[1] = (float)uVar3;
        local_e0[0] = (float)*puVar11;
        local_e0[2] = (float)uVar2;
        local_e0[3] = fVar1;
        local_13c = FUN_180268ed0(local_e0);
        local_e0[0] = -1.509958e-32;
        local_e0[1] = 7.225207e-08;
        plVar10 = (longlong *)FUN_180241a30(lVar15,local_128,local_e0);
        puVar11 = (undefined4 *)FUN_180202dc0(*plVar10 + 0x28);
        uVar2 = *puVar11;
        local_e0[0] = -1.5097663e-32;
        local_e0[1] = 7.2246614e-08;
        plVar10 = (longlong *)FUN_180241a30(lVar15,local_128,local_e0);
        puVar11 = (undefined4 *)FUN_180202dc0(*plVar10 + 0x28);
        uVar3 = *puVar11;
        local_e0[0] = -1.5109807e-32;
        local_e0[1] = 7.2281175e-08;
        plVar10 = (longlong *)FUN_180241a30(lVar15,local_128,local_e0);
        pfVar12 = (float *)FUN_180202dc0(*plVar10 + 0x28);
        local_e0[0] = *pfVar12;
        local_e0[2] = (float)uVar2;
        local_e0[3] = fVar1;
        local_e0[1] = (float)uVar3;
        local_140 = FUN_180268ed0(local_e0);
        local_148 = 7.0;
        uVar13 = FUN_180241610(lVar15,0x37d610d6457aae0b);
        pfVar12 = (float *)FUN_180202dc0(uVar13);
        fVar1 = DAT_180380e28;
        local_148 = *pfVar12;
        local_d0[0] = 24.0;
        local_e0[0] = 2.0;
        pfVar12 = local_e0;
        if (DAT_180380d30 <= local_148) {
          pfVar12 = &local_148;
        }
        pfVar14 = local_d0;
        if (local_148 <= DAT_180381038) {
          pfVar14 = pfVar12;
        }
        fVar4 = *pfVar14;
        if ((*pcVar16 != '\0') && (*(char *)(param_1 + 0x14) != '\0')) {
          local_188._0_4_ = DAT_180380e28;
          FUN_180294c90(lVar6,param_1 + 0x18,param_1 + 0xc,local_144);
          local_188 = (double)CONCAT44(local_188._4_4_,DAT_180380bf0);
          FUN_180294c90(lVar6,param_1 + 0x18,param_1 + 0xc,local_140);
        }
        uVar7 = local_144;
        if (*(char *)(param_1 + 0x14) != '\0') {
          local_180 = (longlong *)CONCAT71(local_180._1_7_,*(undefined1 *)(param_1 + 0x20));
          local_188 = (double)CONCAT44(local_188._4_4_,local_144);
          FUN_180112ad0(lVar6,param_1 + 0x18,fVar4 * DAT_180380b3c,local_140);
        }
        uVar8 = local_13c;
        if (*pcVar16 != '\0') {
          local_180 = (longlong *)((ulonglong)local_180 & 0xffffffffffffff00);
          local_188 = (double)CONCAT44(local_188._4_4_,uVar7);
          FUN_180112ad0(lVar6,param_1 + 0xc,fVar4,local_13c);
          if ((*pcVar16 != '\0') && (0.0 <= *(float *)(param_1 + 0x24))) {
            local_188 = (double)*(float *)(param_1 + 0x28);
            pcVar16 = "%.2f deg  %.0fu";
            if (*(char *)(param_1 + 0x20) != '\0') {
              pcVar16 = "%.2f deg  %.0fu  (eye)";
            }
            FUN_180012ac0(local_c8,0x50,pcVar16,(double)*(float *)(param_1 + 0x24));
            if (*(char *)(lVar5 + 0x10) == '\0') {
              __dyn_tls_on_demand_init();
            }
            local_158 = 0;
            local_168 = 0;
            local_170 = 0;
            local_178 = (char *)0x0;
            local_180 = (longlong *)local_c8;
            local_188._0_4_ = (float)DAT_180381384;
            FUN_18029e350(&local_138,*(undefined8 *)(*(longlong *)(local_138 + lVar5) + 0x1228),
                          *(undefined4 *)(*(longlong *)(local_138 + lVar5) + 0x1238),DAT_180381308);
            local_e0[0] = *(float *)(param_1 + 0xc) -
                          (float)(int)((float)local_138 + DAT_180380ba8) * DAT_180380ac0;
            local_e0[1] = fVar4 + *(float *)(param_1 + 0x10) + fVar1;
            local_d0[1] = local_e0[1] + DAT_180380bb0;
            local_d0[0] = local_e0[0] + DAT_180380bb0;
            if (((uVar7 & 0xff000000) != 0) && (local_c8[0] != '\0')) {
              local_138 = *(longlong *)(lVar6 + 0x60);
              uStack_130 = *(undefined4 *)(lVar6 + 0x68);
              uStack_12c = *(undefined4 *)(lVar6 + 0x6c);
              local_160 = 0;
              local_168 = local_168 & 0xffffffff00000000;
              local_170 = 0;
              local_178 = local_c8;
              local_180 = &local_138;
              local_188._0_4_ = (float)uVar7;
              FUN_18029e990(*(undefined8 *)(*(longlong *)(lVar6 + 0x38) + 0x18),lVar6,
                            *(undefined4 *)(*(longlong *)(lVar6 + 0x38) + 0x20),local_d0);
            }
            if (((uVar8 & 0xff000000) != 0) && (local_c8[0] != '\0')) {
              local_138 = *(longlong *)(lVar6 + 0x60);
              uStack_130 = *(undefined4 *)(lVar6 + 0x68);
              uStack_12c = *(undefined4 *)(lVar6 + 0x6c);
              local_160 = 0;
              local_168 = local_168 & 0xffffffff00000000;
              local_170 = 0;
              local_178 = local_c8;
              local_180 = &local_138;
              local_188 = (double)CONCAT44(local_188._4_4_,uVar8);
              FUN_18029e990(*(undefined8 *)(*(longlong *)(lVar6 + 0x38) + 0x18),lVar6,
                            *(undefined4 *)(*(longlong *)(lVar6 + 0x38) + 0x20),local_e0);
            }
          }
        }
      }
    }
  }
  return;
}


