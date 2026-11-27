// 0x1800d1750  FUN_1800d1750
// size=4570 thunk=false
// signature: undefined FUN_1800d1750()
// status: ok


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1800d1750(undefined8 param_1,undefined1 *param_2,float ******param_3,undefined4 param_4,
             undefined4 param_5)

{
  code *pcVar1;
  float fVar2;
  undefined1 *puVar3;
  char cVar4;
  char cVar5;
  short sVar6;
  undefined4 uVar7;
  int iVar8;
  BOOL BVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  int *piVar14;
  float *pfVar15;
  char *pcVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  float ******ppppppfVar19;
  float ******ppppppfVar20;
  longlong **pplVar21;
  bool bVar22;
  bool bVar23;
  undefined4 extraout_XMM0_Da;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auStack_3298 [32];
  longlong *local_3278;
  undefined1 local_3270;
  char local_3268;
  bool local_3258;
  char local_3257;
  char local_3256;
  char local_3255;
  float local_3254;
  undefined4 local_3250;
  undefined1 *local_3248;
  undefined1 local_3240 [16];
  float *****local_3230;
  float local_3228;
  float *****local_3220;
  undefined1 *local_3218;
  longlong *local_31f8;
  undefined8 uStack_31f0;
  undefined4 local_31c4;
  undefined4 local_31c0;
  undefined4 local_31bc;
  undefined1 local_31b8;
  undefined1 local_19b4;
  undefined1 local_19a8;
  undefined4 local_19a4;
  undefined1 local_1994;
  longlong *local_1988;
  longlong *plStack_1980;
  float local_196c;
  float fStack_1968;
  float local_1964;
  float local_1960;
  uint local_195c;
  uint local_1958;
  undefined4 local_1954;
  undefined4 local_1950;
  undefined4 local_194c;
  undefined1 local_1948;
  undefined1 local_144;
  char local_138;
  undefined4 local_134;
  undefined1 local_124;
  undefined8 local_118;
  float local_110;
  undefined8 local_108;
  float local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  float local_e8;
  float fStack_e4;
  undefined4 uStack_e0;
  undefined8 local_d8;
  float local_d0;
  tagCURSORINFO local_c8;
  ulonglong local_b0;
  
  local_b0 = DAT_1803da4c0 ^ (ulonglong)auStack_3298;
  pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
  local_3248 = param_2;
  local_3230 = (float *****)param_3;
  local_3220 = (float *****)param_3;
  local_3218 = param_2;
  uVar7 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar12 = (*pcVar1)(DAT_1803fa360,uVar7);
  uVar7 = 0;
  if (lVar12 == 0) {
    *param_2 = 0;
  }
  else {
    local_1988 = (longlong *)0x0;
    plStack_1980 = (longlong *)0x0;
    local_1954 = 0xffffffff;
    local_1950 = 0;
    local_194c = 0xffffffff;
    local_1948 = 0;
    local_134 = 0;
    local_124 = 0;
    local_144 = 0;
    local_138 = '\0';
    fStack_e4 = 0.0;
    uStack_e0 = 0;
    local_e8 = 0.0;
    local_108 = (float *)0xf7521f28977a3033;
    local_118 = (float *****)0x4064f70bc33de70a;
    plVar13 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_f8,&local_108);
    plVar13 = (longlong *)FUN_180241a30(*plVar13 + 0x28,local_3240,&local_118);
    piVar14 = (int *)FUN_1802029c0(*plVar13 + 0x28);
    if (*piVar14 == 0) {
      local_108 = (float *)0xf7521f28977a3033;
      local_118 = (float *****)0xdc8f15f640c36b21;
      plVar13 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_3240,&local_108);
      plVar13 = (longlong *)FUN_180241a30(*plVar13 + 0x28,&local_f8,&local_118);
      pfVar15 = (float *)FUN_180202dc0(*plVar13 + 0x28);
      fVar30 = *pfVar15;
    }
    else {
      fVar30 = 0.0;
    }
    if ((DAT_1804277a8 & 1) == 0) {
      DAT_1804277a8 = DAT_1804277a8 | 1;
      DAT_180427830 = (longlong *)0x0;
      uRam0000000180427838 = 0;
      _DAT_180427864 = 0xffffffff;
      _DAT_180427868 = 0;
      _DAT_18042786c = 0xffffffff;
      DAT_180427870 = 0;
      _DAT_180429084 = 0;
      DAT_180429094 = 0;
      DAT_180429074 = 0;
      DAT_180429080 = 0;
    }
    local_3254 = fVar30;
    if (DAT_1803fa545 == '\0') {
      local_108 = (float *)0xf7521f28977a3033;
      local_118 = (float *****)0x98b61f50425db001;
      plVar13 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_3240,&local_108);
      plVar13 = (longlong *)FUN_180241a30(*plVar13 + 0x28,&local_f8,&local_118);
      pcVar16 = (char *)FUN_1801fcfc0(*plVar13 + 0x28);
      local_3258 = (bool)*pcVar16;
      local_108 = (float *)0xf7521f28977a3033;
      local_118 = (float *****)0x549a0576bfe235e1;
      plVar13 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_3240,&local_108);
      plVar13 = (longlong *)FUN_180241a30(*plVar13 + 0x28,&local_f8,&local_118);
      piVar14 = (int *)FUN_1802029c0(*plVar13 + 0x28);
      iVar8 = *piVar14;
      if (((iVar8 - 1U < 0xfe) && (cVar4 = FUN_180024540(), cVar4 != '\0')) &&
         (DAT_1803fa545 == '\0')) {
        cVar4 = FUN_1800245f0(iVar8);
      }
      else {
        cVar4 = '\0';
      }
      local_108 = (float *)0xf7521f28977a3033;
      local_118 = (float *****)0x6c034efd213a832;
      plVar13 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_3240,&local_108);
      plVar13 = (longlong *)FUN_180241a30(*plVar13 + 0x28,&local_f8,&local_118);
      pcVar16 = (char *)FUN_1801fcfc0(*plVar13 + 0x28);
      if (*pcVar16 == '\0') {
        DAT_18040a4c8 = (longlong *)0x0;
LAB_1800d1be0:
        DAT_18040a4b1 = '\0';
      }
      else {
        if ((DAT_18040a4c8 != (longlong *)0x0) && (cVar5 = FUN_1800d30d0(), cVar5 == '\0')) {
          DAT_18040a4b1 = '\x01';
          DAT_18040a4c8 = (longlong *)0x0;
          iVar8 = rand();
          plVar13 = (longlong *)FUN_180014300(&local_f8);
          DAT_18040a4a8 = *plVar13 + (longlong)(iVar8 % 200 + 0x15e) * 1000000;
        }
        if (local_3258 == false) {
          if (cVar4 == '\0') goto LAB_1800d1be0;
        }
        else if (DAT_18040a4b1 != '\0') {
          plVar13 = (longlong *)FUN_180014300(&local_f8);
          if ((*plVar13 == DAT_18040a4a8) || (DAT_18040a4a8 <= *plVar13)) goto LAB_1800d1be0;
        }
      }
      local_108 = (float *)0xf7521f28977a3033;
      local_118 = (float *****)0xf7e7f1435da8388f;
      plVar13 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_3240,&local_108);
      plVar13 = (longlong *)FUN_180241a30(*plVar13 + 0x28,&local_f8,&local_118);
      pcVar16 = (char *)FUN_1801fcfc0(*plVar13 + 0x28);
      if (*pcVar16 != '\0') {
        local_c8.cbSize = 0x18;
        local_c8._4_8_ = 0;
        local_c8._12_8_ = 0;
        local_c8.ptScreenPos.y = 0;
        BVar9 = GetCursorInfo(&local_c8);
        if ((BVar9 != 0) && ((local_c8._4_8_ & 1) != 0)) goto LAB_1800d28f4;
      }
      local_108 = (float *)0xf7521f28977a3033;
      local_118 = (float *****)0x402819404e703058;
      plVar13 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_3240,&local_108);
      plVar13 = (longlong *)FUN_180241a30(*plVar13 + 0x28,&local_f8,&local_118);
      pcVar16 = (char *)FUN_1801fcfc0(*plVar13 + 0x28);
      if ((*pcVar16 == '\0') ||
         (cVar5 = FUN_1800cfb30(param_3,&local_1988,&local_e8,param_5), cVar5 == '\0')) {
        DAT_1803ff220 = 0;
      }
      else {
        if ((local_1988 != (longlong *)0x0) &&
           (lVar12 = (**(code **)(*local_1988 + 0x20))(), lVar12 != 0)) {
          plVar13 = (longlong *)(**(code **)(*local_1988 + 0x20))();
          uVar7 = (**(code **)(*plVar13 + 0x48))(plVar13);
        }
        DAT_1803ff220 = uVar7;
        if (((cVar4 != '\0') || (local_3258 != false)) && (DAT_18040a4b1 == '\0')) {
          uStack_e0 = 0;
          iVar10 = 0;
          iVar8 = iVar10;
          if (local_1988 == DAT_180427830) {
            iVar8 = DAT_1804260bc;
          }
          DAT_1804260bc = iVar8 + 1;
          local_108 = (float *)0xf7521f28977a3033;
          local_118 = (float *****)0x4064f70bc33de70a;
          DAT_1803fea00 = uVar7;
          DAT_18040a4c8 = local_1988;
          plVar13 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_3240,&local_108);
          plVar13 = (longlong *)FUN_180241a30(*plVar13 + 0x28,&local_f8,&local_118);
          piVar14 = (int *)FUN_1802029c0(*plVar13 + 0x28);
          if (*piVar14 == 0) {
            local_108 = (float *)0x93fd561a96ab0c67;
            local_118 = (float *****)0xca4e752e29553884;
            plVar13 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_3240,&local_108);
            plVar13 = (longlong *)FUN_180241a30(*plVar13 + 0x28,&local_f8,&local_118);
            pcVar16 = (char *)FUN_1801fcfc0(*plVar13 + 0x28);
            if (*pcVar16 != '\0') {
              if (((((uint)local_1960 & 0x7f800000) == 0x7f800000) ||
                  ((local_195c & 0x7f800000) == 0x7f800000)) ||
                 (iVar11 = 1, (local_1958 & 0x7f800000) == 0x7f800000)) {
                iVar11 = iVar10;
              }
              pfVar15 = &local_1960;
              if (iVar11 == 0) {
                pfVar15 = &local_196c;
              }
              fVar29 = *pfVar15;
              if (((((uint)fVar29 & 0x7f800000) != 0x7f800000) &&
                  (fVar28 = pfVar15[1], ((uint)fVar28 & 0x7f800000) != 0x7f800000)) &&
                 (fVar24 = pfVar15[2], ((uint)fVar24 & 0x7f800000) != 0x7f800000)) {
                FUN_180073aa0(&local_108,param_3);
                uStack_f4 = 0;
                uStack_f0 = 0;
                local_f8 = 0;
                local_118 = (float *****)
                            CONCAT44(fVar28 - local_108._4_4_,fVar29 - (float)local_108);
                local_110 = fVar24 - local_100;
                FUN_1802d4540(&local_118,&local_f8);
                FUN_1800221c0(&local_f8);
                local_3278 = local_1988;
                puVar17 = (undefined8 *)
                          FUN_180075fa0(&local_108,&local_f8,&local_e8,0.0 <= DAT_1803e907c);
                local_e8 = (float)*puVar17;
                fStack_e4 = (float)((ulonglong)*puVar17 >> 0x20);
                uStack_e0 = *(undefined4 *)(puVar17 + 1);
              }
            }
          }
          for (; fVar28 = DAT_180381410, fVar29 = DAT_180381108, DAT_180381108 < local_e8;
              local_e8 = local_e8 + DAT_180381420) {
          }
          for (; local_e8 < DAT_180381410; local_e8 = local_e8 + DAT_180381188) {
          }
          for (; DAT_180381188 < fStack_e4; fStack_e4 = fStack_e4 + DAT_180381424) {
          }
          for (; fStack_e4 < DAT_180381420; fStack_e4 = fStack_e4 + DAT_18038120c) {
          }
          if (fVar30 <= 0.0) {
            local_3250 = 0x3f800000;
            *(float *)param_3 = local_e8;
            *(float *)((longlong)param_3 + 4) = fStack_e4;
          }
          else {
            local_3278 = (longlong *)CONCAT71(local_3278._1_7_,iVar8 == 0);
            local_3250 = FUN_1800d0b60(param_3,&local_e8,fVar30,param_4);
          }
          pfVar15 = (float *)((longlong)param_3 + 4);
          local_118 = (float *****)0xf7521f28977a3033;
          local_f8 = 0xc4e1755;
          uStack_f4 = 0x9653fa4f;
          local_108 = pfVar15;
          plVar13 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_3240,&local_118);
          plVar13 = (longlong *)FUN_180241a30(*plVar13 + 0x28,&local_c8,&local_f8);
          pcVar16 = (char *)FUN_1801fcfc0(*plVar13 + 0x28);
          if (*pcVar16 != '\0') {
            local_f8 = 0x977a3033;
            uStack_f4 = 0xf7521f28;
            local_118 = (float *****)0x1ff3938001ecac80;
            plVar13 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_c8,&local_f8);
            plVar13 = (longlong *)FUN_180241a30(*plVar13 + 0x28,local_3240,&local_118);
            pcVar16 = (char *)FUN_1801fcfc0(*plVar13 + 0x28);
            if (*pcVar16 != '\0') {
              fVar24 = (float)FUN_1800d29b0(extraout_XMM0_Da,*(float *)param_3,local_e8);
              *(float *)param_3 = fVar24;
              fVar24 = (float)FUN_1800d29b0(fVar24,*pfVar15,fStack_e4);
              *pfVar15 = fVar24;
            }
          }
          FUN_1800c7dd0(&DAT_180427830,&local_1988);
          pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
          uVar7 = (**(code **)(*DAT_1803fa668 + 0x60))();
          lVar12 = (*pcVar1)(DAT_1803fa360,uVar7);
          if (lVar12 == 0) {
            lVar12 = 0;
            local_3256 = '\x01';
            local_3255 = '\0';
            local_3257 = '\x01';
          }
          else {
            pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
            uVar7 = (**(code **)(*DAT_1803fa668 + 0x60))();
            uVar18 = (*pcVar1)(DAT_1803fa360,uVar7);
            lVar12 = FUN_18001dbf0(uVar18);
            local_f8 = (undefined4)lVar12;
            uStack_f4 = (undefined4)((ulonglong)lVar12 >> 0x20);
            local_3256 = '\x01';
            local_3255 = '\0';
            local_3257 = '\x01';
            if (lVar12 != 0) {
              iVar8 = FUN_18001e5b0(lVar12);
              local_3256 = iVar8 != 0;
              plVar13 = (longlong *)FUN_180076750(lVar12);
              if (plVar13 != (longlong *)0x0) {
                local_3255 = (**(code **)(*plVar13 + 0x38))(plVar13,lVar12);
              }
              local_3257 = FUN_1800768c0(lVar12);
            }
          }
          cVar4 = local_3257;
          FUN_180073aa0(&local_d8,param_3);
          fVar25 = (float)(*(code *)PTR_FUN_1803da018)
                                    ((fStack_1968 - local_d8._4_4_) * (fStack_1968 - local_d8._4_4_)
                                     + (local_196c - (float)local_d8) *
                                       (local_196c - (float)local_d8) +
                                     (local_1964 - local_d0) * (local_1964 - local_d0));
          local_108 = (float *)CONCAT44(local_108._4_4_,fVar25);
          fVar24 = *(float *)local_3230;
          fVar26 = (float)FUN_180022110(local_e8,fVar24);
          local_3230 = (float *****)CONCAT44(local_3230._4_4_,0x42b20000);
          local_118 = (float *****)CONCAT44(local_118._4_4_,0xc2b20000);
          fVar27 = (float)FUN_180022110(fStack_e4,*pfVar15);
          fVar2 = DAT_180380994;
          ppppppfVar20 = (float ******)&local_118;
          if (fVar28 <= fVar24) {
            ppppppfVar20 = param_3;
          }
          ppppppfVar19 = &local_3230;
          if (fVar24 <= fVar29) {
            ppppppfVar19 = ppppppfVar20;
          }
          fVar28 = cosf(*(float *)ppppppfVar19 * DAT_180380994);
          fVar28 = fVar27 * fVar28 * fVar27 * fVar28 + fVar26 * fVar26;
          if (fVar28 < 0.0) {
            fVar28 = sqrtf(fVar28);
          }
          else {
            fVar28 = SQRT(fVar28);
          }
          sVar6 = _fdclass(fVar28);
          if (sVar6 < 1) {
            if (DAT_180380a1c < fVar28) {
              if (((fVar29 <= fVar28) || (sVar6 = _fdclass(fVar25), 0 < sVar6)) || (fVar25 <= 0.0))
              goto LAB_1800d2617;
              fVar29 = tanf(fVar28 * fVar2);
              bVar22 = fVar29 * fVar25 <= DAT_180380fcc;
              fVar29 = DAT_180380fcc;
              local_3258 = bVar22;
              if (bVar22) goto LAB_1800d24c5;
            }
            else {
              local_3258 = true;
LAB_1800d24c5:
              bVar22 = local_3258;
              fVar29 = DAT_180380fcc;
              local_3258 = bVar22;
              if (local_138 == '\0') {
                if (((((uint)local_1960 & 0x7f800000) == 0x7f800000) ||
                    ((local_195c & 0x7f800000) == 0x7f800000)) ||
                   (iVar8 = 1, (local_1958 & 0x7f800000) == 0x7f800000)) {
                  iVar8 = iVar10;
                }
                pfVar15 = &local_1960;
                if (iVar8 == 0) {
                  pfVar15 = &local_196c;
                }
                local_d8 = *(undefined8 *)pfVar15;
                local_d0 = pfVar15[2];
                plVar13 = local_1988;
                if (plStack_1980 != (longlong *)0x0) {
                  plVar13 = plStack_1980;
                }
                cVar5 = FUN_1800741c0(param_3,plVar13,&local_d8);
                if (cVar5 == '\0') {
                  plVar13 = local_1988;
                  if (plStack_1980 != (longlong *)0x0) {
                    plVar13 = plStack_1980;
                  }
                  cVar5 = FUN_1800ab9e0(param_3,plVar13);
                  if (cVar5 == '\0') {
                    plVar13 = local_1988;
                    if (plStack_1980 != (longlong *)0x0) {
                      plVar13 = plStack_1980;
                    }
                    uVar18 = FUN_180073aa0(&local_f8,param_3);
                    cVar5 = FUN_1800ab790(uVar18,&local_d8,plVar13);
                    if (cVar5 == '\0') {
                      plVar13 = local_1988;
                      if (plStack_1980 != (longlong *)0x0) {
                        plVar13 = plStack_1980;
                      }
                      uVar18 = FUN_180073aa0(&local_f8,param_3);
                      cVar5 = FUN_1800ae2d0(uVar18,plVar13,&local_d8,0);
                      local_3258 = bVar22;
                      if (cVar5 == '\0') {
                        bVar22 = false;
                        local_3258 = bVar22;
                      }
                    }
                  }
                }
              }
            }
          }
          else {
LAB_1800d2617:
            bVar22 = false;
            fVar29 = DAT_180380fcc;
            local_3258 = bVar22;
          }
          if (((((uint)local_1960 & 0x7f800000) == 0x7f800000) ||
              ((local_195c & 0x7f800000) == 0x7f800000)) ||
             (iVar8 = 1, (local_1958 & 0x7f800000) == 0x7f800000)) {
            iVar8 = iVar10;
          }
          pfVar15 = &local_1960;
          if (iVar8 == 0) {
            pfVar15 = &local_196c;
          }
          local_d8 = *(undefined8 *)pfVar15;
          local_d0 = pfVar15[2];
          DAT_1803e9088 = FUN_180075970(param_3,&local_d8);
          if ((bVar22 != false) &&
             (cVar5 = FUN_180075ea0(DAT_1803e9088,fVar25,fVar29), local_3258 = bVar22, cVar5 == '\0'
             )) {
            bVar22 = false;
            local_3258 = false;
          }
          fVar29 = DAT_180381384;
          if ((lVar12 != 0) &&
             (plVar13 = (longlong *)FUN_180076750(lVar12), plVar13 != (longlong *)0x0)) {
            fVar29 = (float)(**(code **)(*plVar13 + 0x68))(plVar13,lVar12);
            local_3228 = fVar29;
          }
          if ((0.0 < fVar29) && (fVar29 < fVar25)) {
            bVar22 = false;
            iVar8 = DAT_1803fd0a4 + 1;
            bVar23 = DAT_1803fd0a4 == (DAT_1803fd0a4 / 0x78) * 0x78;
            DAT_1803fd0a4 = iVar8;
            if (bVar23) {
              FUN_180014410(&DAT_18034d420,(double)fVar25,(double)fVar29);
            }
          }
          puVar3 = local_3248;
          DAT_1803db45d = 1;
          if ((((local_3256 == '\0') || (local_3255 != '\0')) || (cVar4 == '\0')) ||
             (bVar22 == false)) {
LAB_1800d27f6:
            DAT_1803db438 = 0;
          }
          else {
            local_d8 = 0xf7521f28977a3033;
            local_f8 = 0x998fa2e7;
            uStack_f4 = 0xef1c37d3;
            plVar13 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_c8,&local_d8);
            plVar13 = (longlong *)FUN_180241a30(*plVar13 + 0x28,local_3240,&local_f8);
            pcVar16 = (char *)FUN_1801fcfc0(*plVar13 + 0x28);
            DAT_1803db438 = 1;
            if (*pcVar16 == '\0') goto LAB_1800d27f6;
          }
          local_3278 = (longlong *)CONCAT44(local_3278._4_4_,local_3250);
          local_3270 = bVar22;
          local_3268 = cVar4;
          FUN_1800d1180(param_3,&local_e8,fVar25,fVar30);
          *puVar3 = 1;
          pplVar21 = &local_1988;
          goto LAB_1800d294c;
        }
      }
      DAT_1803fea00 = 0;
      local_31f8 = (longlong *)0x0;
      uStack_31f0 = 0;
      local_31c4 = 0xffffffff;
      local_31c0 = 0;
      local_31bc = 0xffffffff;
      local_31b8 = 0;
      local_19a4 = 0;
      local_1994 = 0;
      local_19b4 = 0;
      local_19a8 = 0;
      FUN_1800c7dd0(&DAT_180427830,&local_31f8);
      DAT_1804260bc = 0;
      DAT_1803db438 = 0;
      DAT_1803db45d = 0;
    }
LAB_1800d28f4:
    *param_2 = 0;
  }
  local_1994 = 0;
  local_19a8 = 0;
  local_31b8 = 0;
  local_31f8 = (longlong *)0x0;
  uStack_31f0 = 0;
  local_31c4 = 0xffffffff;
  local_31c0 = 0;
  local_31bc = 0xffffffff;
  local_19a4 = 0;
  pplVar21 = &local_31f8;
LAB_1800d294c:
  FUN_1800c4c90(param_2 + 8,pplVar21);
  return param_2;
}


