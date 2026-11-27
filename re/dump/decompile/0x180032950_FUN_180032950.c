// 0x180032950  FUN_180032950
// size=2749 thunk=false
// signature: undefined FUN_180032950()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180032950(longlong param_1,longlong *param_2)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 ****ppppuVar5;
  undefined4 *puVar6;
  int iVar7;
  DWORD DVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 *****pppppuVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined4 *puVar20;
  ulonglong uVar21;
  char cVar22;
  undefined1 auStack_2a8 [32];
  int local_288;
  uint local_278;
  int local_274;
  undefined8 *local_270;
  undefined8 ****local_268;
  undefined8 uStack_260;
  ulonglong local_258;
  ulonglong local_250;
  int local_248;
  longlong local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined1 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  longlong *local_1f8;
  undefined *local_1f0;
  ulonglong uStack_1e8;
  undefined1 local_1d8 [32];
  undefined1 local_1b8 [32];
  undefined8 *local_198;
  undefined8 *local_190;
  undefined4 local_188 [2];
  longlong local_180;
  longlong local_178;
  undefined8 uStack_170;
  longlong local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  char local_138;
  undefined8 ****local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  ulonglong local_118;
  undefined2 local_110;
  undefined4 local_10c;
  undefined1 local_108;
  undefined8 local_104;
  undefined1 local_fc;
  undefined4 local_f8;
  undefined4 *local_e8;
  undefined4 *puStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0 [16];
  longlong local_a0;
  undefined1 local_90 [16];
  longlong local_80;
  undefined1 local_70 [16];
  longlong local_60;
  ulonglong local_50;
  
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStack_2a8;
  local_278 = 0;
  if ((((param_1 == 0) || (param_2 == (longlong *)0x0)) || (DAT_1803faef0 == (code *)0x0)) ||
     ((DAT_1803fafa0 == (code *)0x0 || (DAT_1803faff8 == (code *)0x0)))) {
    uVar21 = local_50 & 0xffffffffffffff00;
  }
  else {
    local_248 = DAT_1803e9190;
    local_240 = param_1;
    local_1f8 = param_2;
    if (DAT_1803e9190 != DAT_1803faf04) {
      uStack_1e8 = 0;
      local_1f0 = &DAT_1803e9140;
      iVar7 = _Mtx_trylock(&DAT_1803e9140);
      cVar22 = iVar7 == 0;
      uStack_1e8 = CONCAT71(uStack_1e8._1_7_,cVar22);
      if (iVar7 == 0) {
        if (DAT_180423751 == '\0') {
          FUN_180029fc0();
        }
        local_e8 = (undefined4 *)0x0;
        puStack_e0 = (undefined4 *)0x0;
        local_d8 = 0;
        FUN_180219390(&local_e8,(DAT_1803e9b10 - DAT_1803e9b08 >> 3) * 0x4ec4ec4ec4ec4ec5);
        FUN_18016d4c0(local_70,&DAT_1803ebb90);
        FUN_18016d4c0(local_90,&DAT_1803e9ae8);
        FUN_18016d4c0(local_b0,&DAT_1803ea258);
        _Mtx_unlock(&DAT_1803e9140);
        uVar3 = _UNK_1803814b8;
        uVar2 = _DAT_1803814b0;
        uStack_1e8 = uStack_1e8 & 0xffffffffffffff00;
        if (local_60 == 0) {
          local_238 = 0;
          uStack_230 = 0;
          local_228 = 0;
          local_220 = 0;
          uStack_210 = 0;
          local_208 = _DAT_1803814b0;
          uStack_200 = _UNK_1803814b8;
          local_218 = 0;
          puVar16 = &local_238;
          uVar19 = 7;
        }
        else {
          puVar16 = (undefined8 *)FUN_1800275b0(local_1d8,local_70);
          uVar19 = 8;
        }
        local_278 = uVar19;
        FUN_180033410(&DAT_1803dc880,puVar16);
        if ((uVar19 & 8) != 0) {
          uVar19 = uVar19 & 0xfffffff7;
          local_278 = uVar19;
          FUN_18020e450(local_1b8);
          FUN_18021d530(local_1d8);
        }
        if ((uVar19 & 4) != 0) {
          uVar19 = uVar19 & 0xfffffffb;
          local_278 = uVar19;
          FUN_18020e450(&local_218);
          FUN_18021d530(&local_238);
        }
        if (local_80 == 0) {
          local_238 = 0;
          uStack_230 = 0;
          local_228 = 0;
          local_220 = 0;
          uStack_210 = 0;
          local_208 = uVar2;
          uStack_200 = uVar3;
          local_218 = 0;
          puVar16 = &local_238;
          uVar19 = uVar19 | 0x70;
        }
        else {
          puVar16 = (undefined8 *)FUN_1800275b0(local_1d8,local_90);
          uVar19 = uVar19 | 0x80;
        }
        local_278 = uVar19;
        FUN_180033410(&DAT_1803db340,puVar16);
        if ((char)uVar19 < '\0') {
          uVar19 = uVar19 & 0xffffff7f;
          local_278 = uVar19;
          FUN_18020e450(local_1b8);
          FUN_18021d530(local_1d8);
        }
        if ((uVar19 & 0x40) != 0) {
          uVar19 = uVar19 & 0xffffffbf;
          local_278 = uVar19;
          FUN_18020e450(&local_218);
          FUN_18021d530(&local_238);
        }
        if (local_a0 == 0) {
          local_238 = 0;
          uStack_230 = 0;
          local_228 = 0;
          local_220 = 0;
          uStack_210 = 0;
          local_208 = uVar2;
          uStack_200 = uVar3;
          local_218 = 0;
          puVar16 = &local_238;
          uVar19 = uVar19 | 0x700;
        }
        else {
          puVar16 = (undefined8 *)FUN_1800275b0(local_1d8,local_b0);
          uVar19 = uVar19 | 0x800;
        }
        local_278 = uVar19;
        FUN_180033410(&DAT_1803daae0,puVar16);
        if (uVar19 >> 0xb != 0) {
          uVar19 = uVar19 & 0xfffff7ff;
          local_278 = uVar19;
          FUN_18020e450(local_1b8);
          FUN_18021d530(local_1d8);
        }
        if ((uVar19 >> 10 & 1) != 0) {
          uVar19 = uVar19 & 0xfffffbff;
          local_278 = uVar19;
          FUN_18020e450(&local_218);
          FUN_18021d530(&local_238);
        }
        lVar4 = DAT_1803fcc58;
        local_274 = 0;
        iVar7 = local_274;
        for (lVar17 = DAT_1803fcc50; lVar17 != lVar4; lVar17 = lVar17 + 0x98) {
          if (*(int *)(lVar17 + 0x7c) != -1) {
            FUN_18002d8c0(param_2);
            iVar7 = iVar7 + 1;
          }
        }
        local_274 = iVar7;
        if (DAT_1803fcc50 != DAT_1803fcc58) {
          FUN_180218ad0();
          DAT_1803fcc58 = DAT_1803fcc50;
        }
        puVar6 = puStack_e0;
        puVar20 = local_e8;
        cVar22 = '\0';
        local_288 = iVar7;
        if (local_e8 != puStack_e0) {
          do {
            if (7 < (int)(DAT_1803fcc58 - DAT_1803fcc50 >> 3) * 0x286bca1b) break;
            if (*(char *)(puVar20 + 0x10) != '\0') {
              uVar21 = 0;
              local_188[0] = 0;
              local_180 = 0;
              local_178 = 0;
              uStack_170 = 0;
              local_168 = 0;
              uStack_160 = 0;
              local_158 = 0;
              local_270 = &local_150;
              local_150 = 0;
              local_148 = 0;
              uStack_140 = 0;
              local_138 = '\0';
              uStack_128 = 0;
              local_120 = 0;
              local_118 = 0xf;
              local_130 = (undefined8 *****)0x0;
              local_110 = 0x100;
              local_10c = 0xffffffff;
              local_108 = 0;
              local_104 = 0;
              local_fc = 0;
              local_f8 = 0;
              uStack_c8 = 0;
              local_c0 = uVar2;
              uStack_b8 = uVar3;
              local_d0 = 0;
              plVar15 = (longlong *)(puVar20 + 2);
              cVar22 = FUN_180026bc0(plVar15,&local_180,&local_d0);
              if (cVar22 == '\0') {
                FUN_18020e450(&local_d0);
                local_198 = &local_150;
                FUN_18020e450(&local_130);
                FUN_18021d530(&local_150);
                FUN_18020d5c0(&local_168);
              }
              else {
                uStack_260 = 0;
                local_258 = 0;
                local_250 = 0xf;
                local_268 = (undefined8 *****)0x0;
                local_278 = uVar19 | 0x1000;
                if (local_178 - local_180 >> 5 != 0) {
                  do {
                    if (uVar21 != 0) {
                      if (local_258 < local_250) {
                        pppppuVar12 = &local_268;
                        if (0xf < local_250) {
                          pppppuVar12 = (undefined8 *****)local_268;
                        }
                        puVar1 = (undefined2 *)((longlong)pppppuVar12 + local_258);
                        local_258 = local_258 + 1;
                        *puVar1 = 0x2e;
                      }
                      else {
                        FUN_18021abd0(&local_268);
                      }
                    }
                    puVar14 = (undefined8 *)(uVar21 * 0x20 + local_180);
                    puVar16 = puVar14 + 2;
                    if (0xf < (ulonglong)puVar14[3]) {
                      puVar14 = (undefined8 *)*puVar14;
                    }
                    FUN_18021aef0(&local_268,puVar14,*puVar16);
                    uVar21 = uVar21 + 1;
                  } while (uVar21 < (ulonglong)(local_178 - local_180 >> 5));
                }
                uVar18 = local_250;
                uVar21 = local_258;
                ppppuVar5 = local_268;
                pppppuVar12 = &local_268;
                if (0xf < local_250) {
                  pppppuVar12 = (undefined8 *****)local_268;
                }
                if ((local_258 == 7) && (iVar7 = memcmp(pppppuVar12,"@nwvars",7), iVar7 == 0)) {
                  uVar10 = 1;
                }
                else {
                  pppppuVar12 = &local_268;
                  if (0xf < uVar18) {
                    pppppuVar12 = (undefined8 *****)ppppuVar5;
                  }
                  if ((uVar21 == 8) && (iVar7 = memcmp(pppppuVar12,"@nw2vars",8), iVar7 == 0)) {
                    uVar10 = 2;
                  }
                  else {
                    uVar10 = 0;
                  }
                }
                local_104 = CONCAT44(uVar10,(undefined4)local_104);
                local_278 = uVar19;
                uVar10 = FUN_18020e450(&local_268);
                local_188[0] = *puVar20;
                if (&local_168 != (longlong *)(puVar20 + 10)) {
                  lVar17 = *(longlong *)(puVar20 + 10);
                  uVar10 = FUN_180219bd0(&local_168,lVar17,
                                         *(longlong *)(puVar20 + 0xc) - lVar17 >> 5);
                }
                local_110 = *(undefined2 *)((longlong)puVar20 + 0x41);
                if (*(char *)((longlong)puVar20 + 0x41) != '\0') {
                  uVar13 = FUN_1800275b0(local_1d8,puVar20 + 0x12);
                  FUN_180033410(&local_150,uVar13);
                  FUN_18020e450(local_1b8);
                  uVar10 = FUN_18021d530(local_1d8);
                  if (local_138 == '\0') {
                    pppppuVar12 = &local_130;
                    if (0xf < local_118) {
                      pppppuVar12 = (undefined8 *****)local_130;
                    }
                    if (0xf < *(ulonglong *)(puVar20 + 8)) {
                      plVar15 = (longlong *)*plVar15;
                    }
                    uVar10 = FUN_180014410("[TRAMP] template for \'%s\' rejected: %s\n",plVar15,
                                           pppppuVar12);
                  }
                }
                if (DAT_1803fcc58 == DAT_1803fcc60) {
                  FUN_180228850(uVar10,DAT_1803fcc58,local_188);
                }
                else {
                  FUN_18023a210(DAT_1803fcc58,local_188);
                  DAT_1803fcc58 = DAT_1803fcc58 + 0x98;
                }
                FUN_18020e450(&local_d0);
                local_190 = &local_150;
                FUN_18020e450(&local_130);
                FUN_18021d530(&local_150);
                FUN_18020d5c0(&local_168);
              }
              FUN_18020d5c0(&local_180);
            }
            puVar20 = puVar20 + 0x1a;
          } while (puVar20 != puVar6);
          param_2 = local_1f8;
          cVar22 = (char)uStack_1e8;
          local_288 = local_274;
        }
        iVar7 = local_248;
        FUN_180014410("[TRAMP] netvar sources recompiled gen %u->%u: %d source(s), %d ref(s) freed\n"
                      ,DAT_1803faf04,local_248,
                      (DAT_1803fcc58 - DAT_1803fcc50 >> 3) * -0x79435e50d79435e5);
        DAT_1803faf04 = iVar7;
        FUN_18020e450(local_b0);
        FUN_18020e450(local_90);
        FUN_18020e450(local_70);
        FUN_18021d720(&local_e8);
        param_1 = local_240;
      }
      if (cVar22 != '\0') {
        _Mtx_unlock(&DAT_1803e9140);
      }
    }
    DVar8 = GetTickCount();
    uVar21 = 0;
    local_270 = (undefined8 *)DAT_1803fcc58;
    puVar16 = (undefined8 *)DAT_1803fcc58;
    lVar17 = DAT_1803fcc50;
    if (DAT_1803fcc50 != DAT_1803fcc58) {
      do {
        if (*(int *)(lVar17 + 0x88) == 0) {
          if (*(int *)(lVar17 + 0x7c) == -1) {
            if ((*(char *)(lVar17 + 0x80) == '\0') || (4999 < DVar8 - *(int *)(lVar17 + 0x84))) {
              *(DWORD *)(lVar17 + 0x84) = DVar8;
              if ((DAT_1803fb088 == (code *)0x0) || (param_2[1] == 0)) {
                iVar7 = (**(code **)*param_2)(param_2);
              }
              else {
                iVar7 = (*DAT_1803fb088)();
              }
              plVar15 = *(longlong **)(lVar17 + 8);
              if (0xf < (ulonglong)plVar15[3]) {
                plVar15 = (longlong *)*plVar15;
              }
              (*DAT_1803fafa0)(param_1,plVar15);
              (*DAT_1803faef0)(param_1,0xffffd8ee);
              iVar9 = (*DAT_1803faff8)(param_1,0xffffffff);
              lVar4 = local_240;
              for (uVar18 = 1;
                  (iVar9 == 5 &&
                  (param_2 = local_1f8,
                  uVar18 < (ulonglong)
                           (*(longlong *)(lVar17 + 0x10) - *(longlong *)(lVar17 + 8) >> 5)));
                  uVar18 = uVar18 + 1) {
                puVar16 = (undefined8 *)(uVar18 * 0x20 + *(longlong *)(lVar17 + 8));
                if (0xf < (ulonglong)puVar16[3]) {
                  puVar16 = (undefined8 *)*puVar16;
                }
                (*DAT_1803fafa0)(lVar4,puVar16);
                (*DAT_1803faef0)(lVar4,0xfffffffe);
                iVar9 = (*DAT_1803faff8)(lVar4,0xffffffff);
                param_2 = local_1f8;
              }
              if (iVar9 == 5) {
                uVar10 = FUN_18002d7a0(param_2);
                *(undefined4 *)(lVar17 + 0x7c) = uVar10;
                *(undefined1 *)(lVar17 + 0x80) = 0;
                uVar21 = 1;
                puVar16 = (undefined8 *)FUN_180027230(&local_238,lVar17 + 8);
                if (0xf < (ulonglong)puVar16[3]) {
                  puVar16 = (undefined8 *)*puVar16;
                }
                FUN_180014410("[TRAMP] netvar store resolved \'%s\' ref=%d\n",puVar16,uVar10);
                FUN_18020e450(&local_238);
              }
              else {
                *(undefined1 *)(lVar17 + 0x80) = 1;
              }
              do {
                plVar15 = param_2 + 1;
                while( true ) {
                  if ((DAT_1803fb088 == (code *)0x0) || (*plVar15 == 0)) {
                    iVar9 = (**(code **)*param_2)(param_2);
                  }
                  else {
                    iVar9 = (*DAT_1803fb088)();
                  }
                  puVar16 = local_270;
                  if (iVar9 <= iVar7) goto LAB_1800333be;
                  if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) ||
                     (*plVar15 == 0)) break;
                  iVar11 = (*DAT_1803fb088)();
                  iVar9 = 0;
                  if (-1 < iVar11 + -1) {
                    iVar9 = iVar11 + -1;
                  }
                  (*DAT_1803faf10)(*plVar15,iVar9);
                }
                (**(code **)(*param_2 + 0x10))(param_2,1);
              } while( true );
            }
          }
          else {
            uVar21 = 1;
          }
        }
        else if (*(char *)(lVar17 + 0x8c) != '\0') {
          uVar21 = 1;
        }
LAB_1800333be:
        lVar17 = lVar17 + 0x98;
        param_1 = local_240;
      } while ((undefined8 *)lVar17 != puVar16);
    }
  }
  return uVar21;
}


