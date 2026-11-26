// 0x1801117e0  Features_BulletPath_BulletPathFeature_vfunc06
// size=2745 thunk=false
// signature: undefined Features_BulletPath_BulletPathFeature_vfunc06()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Features_BulletPath_BulletPathFeature_vfunc06(longlong param_1)

{
  float *pfVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  char cVar6;
  short sVar7;
  uint uVar8;
  uint uVar9;
  longlong *plVar10;
  char *pcVar11;
  undefined4 *puVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  uint uVar16;
  longlong lVar17;
  undefined8 *puVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_228 [32];
  float local_208;
  longlong *local_200;
  char *local_1f8;
  undefined8 local_1f0;
  ulonglong local_1e8;
  undefined4 local_1e0;
  undefined4 local_1d8;
  float local_1c8;
  float local_1c4;
  uint local_1c0;
  uint local_1bc;
  uint local_1b8;
  float local_1b4;
  float local_1b0;
  longlong local_1a8;
  undefined8 uStack_1a0;
  float local_198;
  float local_194;
  float local_190;
  longlong local_188 [2];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168 [16];
  float local_158 [4];
  undefined8 local_148;
  undefined4 local_140;
  float local_13c;
  undefined8 local_138;
  undefined8 local_128 [2];
  char local_118 [64];
  ulonglong local_d8;
  
  local_d8 = DAT_1803da4c0 ^ (ulonglong)auStack_228;
  cVar6 = FUN_180110cc0();
  if ((cVar6 != '\0') && (*(char *)(param_1 + 0x2d0) != '\0')) {
    local_138 = 0xf0a1c0c34f189d8b;
    local_148 = 0x93fd561a96ab0c67;
    plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_1a8,&local_148);
    plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_188,&local_138);
    pcVar11 = (char *)FUN_1801fcfc0(*plVar10 + 0x28);
    if ((*pcVar11 != '\0') &&
       ((((*(uint *)(param_1 + 0x2b4) & 0x7f800000) != 0x7f800000 &&
         ((*(uint *)(param_1 + 0x2b8) & 0x7f800000) != 0x7f800000)) &&
        ((*(uint *)(param_1 + 700) & 0x7f800000) != 0x7f800000)))) {
      local_1a8 = *(longlong *)(param_1 + 0x2b4);
      uStack_1a0 = CONCAT44(uStack_1a0._4_4_,*(undefined4 *)(param_1 + 700));
      cVar6 = FUN_180021ac0(&local_1a8,&local_1c8);
      fVar19 = local_1c8;
      if (((cVar6 != '\0') && (sVar7 = _fdclass(), fVar22 = local_1c4, sVar7 < 1)) &&
         (sVar7 = _fdclass(), sVar7 < 1)) {
        lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        pfVar1 = (float *)(param_1 + 0x2dc);
        *pfVar1 = fVar19;
        *(float *)(param_1 + 0x2e0) = fVar22;
        *(undefined1 *)(param_1 + 0x2d8) = 1;
        local_1a8 = lVar3;
        if (*(char *)(lVar3 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        if (((*(longlong *)(lVar3 + 0xec0) != 0) &&
            (lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0xec0) + 0x1520), lVar4 != 0)) &&
           (lVar4 = *(longlong *)(lVar4 + 0x2c8), lVar4 != 0)) {
          local_128[0] = 0x93fd561a96ab0c67;
          plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_158,local_128);
          lVar17 = *plVar10 + 0x28;
          local_188[0] = lVar17;
          if (*(char *)(lVar3 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          fVar19 = *(float *)(*(longlong *)(lVar3 + 0xec0) + 0xc84);
          if (*(char *)(param_1 + 0x2e8) == '\0') {
            local_148 = 0x52ba9275b0deb4d3;
            plVar10 = (longlong *)FUN_180241a30(lVar17,&local_138,&local_148);
            puVar12 = (undefined4 *)FUN_180202dc0(*plVar10 + 0x28);
            uVar21 = *puVar12;
            local_148 = 0x52ba9575b0deb9ec;
            plVar10 = (longlong *)FUN_180241a30(lVar17,&local_138,&local_148);
            puVar12 = (undefined4 *)FUN_180202dc0(*plVar10 + 0x28);
            uVar20 = *puVar12;
            local_148 = 0x52baa275b0ded003;
          }
          else {
            local_148 = 0x275456d884c64b09;
            plVar10 = (longlong *)FUN_180241a30(lVar17,&local_138,&local_148);
            puVar12 = (undefined4 *)FUN_180202dc0(*plVar10 + 0x28);
            uVar21 = *puVar12;
            local_148 = 0x275459d884c65022;
            plVar10 = (longlong *)FUN_180241a30(lVar17,&local_138,&local_148);
            puVar12 = (undefined4 *)FUN_180202dc0(*plVar10 + 0x28);
            uVar20 = *puVar12;
            local_148 = 0x275446d884c62fd9;
          }
          plVar10 = (longlong *)FUN_180241a30(lVar17,&local_138,&local_148);
          puVar12 = (undefined4 *)FUN_180202dc0(*plVar10 + 0x28);
          local_148 = CONCAT44(uVar20,*puVar12);
          local_140 = uVar21;
          local_13c = fVar19;
          uVar8 = FUN_180268ed0(&local_148);
          local_13c = fVar19 * DAT_180380afc;
          local_148 = 0;
          local_140 = 0;
          local_1bc = uVar8;
          uVar9 = FUN_180268ed0(&local_148);
          fVar23 = DAT_180380d30;
          local_194 = 24.0;
          local_148 = 0x8d4e2b57d73bf615;
          local_198 = 2.0;
          local_1c0 = uVar9;
          plVar10 = (longlong *)FUN_180241a30(lVar17,&local_138,&local_148);
          pfVar13 = (float *)FUN_180202dc0(*plVar10 + 0x28);
          fVar22 = DAT_180380bb0;
          fVar19 = DAT_180380ac0;
          pfVar15 = &local_198;
          if (fVar23 <= *pfVar13) {
            pfVar15 = pfVar13;
          }
          pfVar14 = &local_194;
          if (*pfVar13 <= DAT_180381038) {
            pfVar14 = pfVar15;
          }
          uVar16 = uVar9 & 0xff000000;
          fVar23 = *pfVar14;
          local_190 = fVar23;
          local_1b8 = uVar16;
          if ((uVar16 != 0) && (DAT_180380ac0 <= fVar23 + DAT_180380bb0)) {
            local_208 = 6.72623e-44;
            FUN_180293e00(lVar4,pfVar1,(fVar23 + DAT_180380bb0) - DAT_180380ac0,0);
            local_208 = DAT_180380e28;
            *(int *)(lVar4 + 0x50) = *(int *)(lVar4 + 0x50) + -1;
            local_200 = (longlong *)CONCAT44(local_200._4_4_,0x200);
            FUN_1802929d0(lVar4,*(undefined8 *)(lVar4 + 0x58),*(undefined4 *)(lVar4 + 0x50),uVar9);
            *(undefined4 *)(lVar4 + 0x50) = 0;
          }
          uVar9 = uVar8 & 0xff000000;
          if ((uVar9 != 0) && (fVar19 <= fVar23)) {
            local_208 = 6.72623e-44;
            FUN_180293e00(lVar4,pfVar1,fVar23 - fVar19,0);
            local_208 = DAT_180380c88;
            *(int *)(lVar4 + 0x50) = *(int *)(lVar4 + 0x50) + -1;
            local_200 = (longlong *)CONCAT44(local_200._4_4_,0x200);
            FUN_1802929d0(lVar4,*(undefined8 *)(lVar4 + 0x58),*(undefined4 *)(lVar4 + 0x50),uVar8);
            *(undefined4 *)(lVar4 + 0x50) = 0;
          }
          if (uVar16 != 0) {
            local_208 = 6.72623e-44;
            FUN_180293e00(lVar4,pfVar1,DAT_180380cd0,0);
            *(int *)(lVar4 + 0x50) = *(int *)(lVar4 + 0x50) + -1;
            FUN_1802938c0(lVar4,*(undefined8 *)(lVar4 + 0x58),*(undefined4 *)(lVar4 + 0x50),
                          local_1c0);
            *(undefined4 *)(lVar4 + 0x50) = 0;
          }
          puVar18 = (undefined8 *)(lVar4 + 0x58);
          if (uVar9 != 0) {
            local_208 = 6.72623e-44;
            FUN_180293e00(lVar4,pfVar1,DAT_180380bf0,0);
            *(int *)(lVar4 + 0x50) = *(int *)(lVar4 + 0x50) + -1;
            FUN_1802938c0(lVar4,*puVar18,*(undefined4 *)(lVar4 + 0x50),uVar8);
            *(undefined4 *)(lVar4 + 0x50) = 0;
          }
          fVar5 = DAT_180380c34;
          puVar12 = (undefined4 *)(lVar4 + 0x50);
          pfVar15 = (float *)&local_178;
          fVar27 = fVar23 * DAT_180380ad4;
          fVar28 = fVar23 * DAT_180380b74;
          local_178 = _DAT_180381600;
          uStack_170 = _UNK_180381608;
          local_168 = _DAT_180381800;
          if (local_1b8 == 0) {
            do {
              if (uVar9 != 0) {
                fVar24 = *pfVar1;
                fVar2 = *(float *)(param_1 + 0x2e0);
                fVar25 = *pfVar15;
                fVar26 = pfVar15[1];
                local_1b4 = fVar25 * fVar27 + fVar24 + fVar19;
                local_1b0 = fVar26 * fVar27 + fVar2 + fVar19;
                FUN_18020dc30(puVar12,&local_1b4);
                local_1c8 = fVar25 * fVar28 + fVar24 + fVar19;
                local_1c4 = fVar26 * fVar28 + fVar2 + fVar19;
                FUN_18020dc30(puVar12,&local_1c8);
                local_200 = (longlong *)((ulonglong)local_200 & 0xffffffff00000000);
                local_208 = fVar5;
                FUN_1802929d0(lVar4,*puVar18,*puVar12,local_1bc);
                *puVar12 = 0;
              }
              pfVar15 = pfVar15 + 2;
              fVar24 = DAT_180380e28;
            } while (pfVar15 != local_158);
          }
          else {
            do {
              fVar22 = *pfVar1;
              fVar23 = *(float *)(param_1 + 0x2e0);
              fVar24 = *pfVar15;
              fVar2 = pfVar15[1];
              fVar25 = fVar24 * fVar27 + fVar22 + fVar19;
              fVar26 = fVar2 * fVar27 + fVar23 + fVar19;
              local_138 = CONCAT44(fVar26,fVar25);
              FUN_18020dc30(puVar12,&local_138);
              fVar22 = fVar24 * fVar28 + fVar22 + fVar19;
              fVar23 = fVar2 * fVar28 + fVar23 + fVar19;
              local_148 = CONCAT44(fVar23,fVar22);
              FUN_18020dc30(puVar12,&local_148);
              fVar24 = DAT_180380e28;
              local_200 = (longlong *)((ulonglong)local_200 & 0xffffffff00000000);
              local_208 = DAT_180380e28;
              FUN_1802929d0(lVar4,*puVar18,*puVar12,local_1c0);
              *puVar12 = 0;
              if (uVar9 != 0) {
                local_1b4 = fVar25;
                local_1b0 = fVar26;
                FUN_18020dc30(puVar12,&local_1b4);
                local_1c8 = fVar22;
                local_1c4 = fVar23;
                FUN_18020dc30(puVar12,&local_1c8);
                local_200 = (longlong *)((ulonglong)local_200 & 0xffffffff00000000);
                local_208 = fVar5;
                FUN_1802929d0(lVar4,*puVar18,*puVar12,local_1bc);
                *puVar12 = 0;
              }
              pfVar15 = pfVar15 + 2;
              fVar23 = local_190;
              fVar22 = DAT_180380bb0;
            } while (pfVar15 != local_158);
          }
          local_148 = 0x41733ddd14766b92;
          plVar10 = (longlong *)FUN_180241a30(local_188[0],&local_138,&local_148);
          pcVar11 = (char *)FUN_1801fcfc0(*plVar10 + 0x28);
          if (*pcVar11 != '\0') {
            if (((int)*(float *)(param_1 + 0x2c4) < 1) && (*(int *)(param_1 + 0x2c8) < 1)) {
              FUN_180012ac0(local_118,0x40,&DAT_180350b28,(double)*(float *)(param_1 + 0x2e4));
            }
            else {
              local_200 = (longlong *)CONCAT44(local_200._4_4_,*(undefined4 *)(param_1 + 0x2c8));
              local_208 = *(float *)(param_1 + 0x2c4);
              FUN_180012ac0(local_118,0x40,"%.0f  %dp %dr",(double)*(float *)(param_1 + 0x2e4));
            }
            lVar3 = local_1a8;
            if (*(char *)(local_1a8 + 0x10) == '\0') {
              __dyn_tls_on_demand_init();
            }
            local_200 = (longlong *)local_118;
            local_1d8 = 0;
            local_1e8 = 0;
            local_1f0 = 0;
            local_1f8 = (char *)0x0;
            local_208 = (float)DAT_180381384;
            FUN_18029e350(&local_1a8,*(undefined8 *)(*(longlong *)(lVar3 + 0xec0) + 0x1228),
                          *(undefined4 *)(*(longlong *)(lVar3 + 0xec0) + 0x1238),DAT_180381308);
            fVar24 = fVar23 + *(float *)(param_1 + 0x2e0) + fVar24;
            fVar19 = *pfVar1 - (float)(int)((float)local_1a8 + DAT_180380ba8) * fVar19;
            local_138 = CONCAT44(fVar24,fVar19);
            local_148 = CONCAT44(fVar24 + fVar22,fVar19 + fVar22);
            if ((local_1b8 != 0) && (local_118[0] != '\0')) {
              local_1f8 = local_118;
              local_1a8 = *(longlong *)(lVar4 + 0x60);
              uStack_1a0 = *(undefined8 *)(lVar4 + 0x68);
              local_1e0 = 0;
              local_1e8 = local_1e8 & 0xffffffff00000000;
              local_1f0 = 0;
              local_200 = &local_1a8;
              local_208 = (float)local_1c0;
              FUN_18029e990(*(undefined8 *)(*(longlong *)(lVar4 + 0x38) + 0x18),lVar4,
                            *(undefined4 *)(*(longlong *)(lVar4 + 0x38) + 0x20),&local_148);
            }
            if ((uVar9 != 0) && (local_118[0] != '\0')) {
              local_1f8 = local_118;
              local_1a8 = *(longlong *)(lVar4 + 0x60);
              uStack_1a0 = *(undefined8 *)(lVar4 + 0x68);
              local_1e0 = 0;
              local_1e8 = local_1e8 & 0xffffffff00000000;
              local_1f0 = 0;
              local_200 = &local_1a8;
              local_208 = (float)local_1bc;
              FUN_18029e990(*(undefined8 *)(*(longlong *)(lVar4 + 0x38) + 0x18),lVar4,
                            *(undefined4 *)(*(longlong *)(lVar4 + 0x38) + 0x20),&local_138);
            }
          }
        }
      }
    }
  }
  return;
}


