// 0x1801cd9e0  FUN_1801cd9e0
// size=5155 thunk=false
// signature: undefined FUN_1801cd9e0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801cd9e0(void)

{
  undefined8 ****ppppuVar1;
  uint *puVar2;
  undefined4 *puVar3;
  float fVar4;
  size_t sVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  int *piVar14;
  char cVar15;
  int iVar16;
  int iVar17;
  size_t sVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined1 *puVar21;
  longlong lVar22;
  float *pfVar23;
  float *pfVar24;
  int *piVar25;
  int *piVar26;
  char *pcVar27;
  undefined1 *_Buf2;
  undefined8 ****ppppuVar28;
  longlong lVar29;
  int *piVar30;
  byte bVar31;
  undefined *puVar32;
  int iVar33;
  undefined8 *puVar34;
  longlong lVar35;
  float fVar36;
  float fVar37;
  ulonglong uVar38;
  float fVar39;
  float fVar40;
  undefined1 auStack_2c8 [32];
  undefined8 *local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  float local_288;
  char local_284;
  undefined8 local_278;
  undefined8 uStack_270;
  longlong local_268;
  longlong local_260;
  float local_258;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined *local_228;
  int *local_220;
  int *piStack_218;
  undefined8 local_210;
  undefined8 ***local_208;
  undefined8 uStack_200;
  longlong local_1f8;
  ulonglong local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined1 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined1 local_1a0;
  undefined4 local_19c;
  undefined1 local_198 [16];
  longlong local_188;
  undefined1 local_178 [96];
  undefined1 local_118 [96];
  ulonglong local_b8;
  
  local_b8 = DAT_1803da4c0 ^ (ulonglong)auStack_2c8;
  fVar36 = 0.0;
  local_258 = 0.0;
  local_278 = (undefined *)CONCAT44(local_278._4_4_,4);
  local_288 = 0.0;
  pfVar24 = &local_288;
  if (-1 < (int)DAT_1803fb24c) {
    pfVar24 = &DAT_1803fb24c;
  }
  pfVar23 = (float *)&local_278;
  if ((int)DAT_1803fb24c < 5) {
    pfVar23 = pfVar24;
  }
  DAT_1803fb24c = *pfVar23;
  lVar29 = (longlong)(int)DAT_1803fb24c;
  if ((DAT_1804275fc & 1) == 0) {
    DAT_1804275fc = DAT_1804275fc | 1;
    atexit((_func_5014 *)&LAB_18030b320);
  }
  uVar13 = DAT_180381384;
  cVar15 = FUN_18019fbc0("Teams",0xe,CONCAT44(DAT_180381384,DAT_180381384),0);
  if (cVar15 != '\0') {
    lVar29 = lVar29 * 200;
    lVar35 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    local_268 = lVar35;
    local_260 = lVar29;
    if (*(char *)(lVar35 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar22 = *(longlong *)(*(longlong *)(lVar35 + 0xec0) + 0x1520);
    if ((*(longlong *)(lVar22 + 0x1c8) != 0) ||
       (pfVar24 = (float *)(lVar22 + 0x280),
       *(longlong *)(*(longlong *)(lVar35 + 0xec0) + 0x2368) != 0)) {
      pfVar24 = (float *)(lVar22 + 0x250);
    }
    fVar40 = (*pfVar24 - *(float *)(lVar22 + 0x118)) * DAT_180380ab4;
    if (((int)DAT_1803e88b0 < 0) ||
       (local_284 = '\x01',
       (int)(DAT_1803e9c28 - DAT_1803e9c20 >> 4) * -0x33333333 <= (int)DAT_1803e88b0)) {
      local_284 = '\0';
    }
    local_220 = (int *)0x0;
    piStack_218 = (int *)0x0;
    local_210 = 0;
    FUN_1800fa9a0(&local_220);
    FUN_18027fc30();
    if (*(char *)(lVar35 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar22 = *(longlong *)(lVar35 + 0xec0);
    puVar2 = (uint *)(lVar22 + 0x1ec0);
    *puVar2 = *puVar2 | 1;
    *(float *)(lVar22 + 0x1ed8) = fVar40;
    FUN_180012ac0(&local_1e8,0x40,"Search %d teams...",
                  ((longlong)piStack_218 - (longlong)local_220 >> 4) * -0x5555555555555555);
    local_278 = (undefined *)0x0;
    local_290 = 0;
    local_298 = 0;
    local_2a0 = (undefined8 *)((ulonglong)local_2a0._4_4_ << 0x20);
    local_2a8 = &local_278;
    FUN_1802b74e0("##tm_search",&local_1e8,&DAT_1803fe550,0x60);
    fVar12 = DAT_180380c50;
    fVar11 = DAT_180380b20;
    local_288 = 1.5;
    local_278 = (undefined *)CONCAT44(local_278._4_4_,0x3f400000);
    pfVar24 = (float *)&local_278;
    if (DAT_180380b20 <= DAT_1803da6a4) {
      pfVar24 = &DAT_1803da6a4;
    }
    pfVar23 = &local_288;
    if (DAT_1803da6a4 <= DAT_180380c50) {
      pfVar23 = pfVar24;
    }
    fVar39 = *pfVar23;
    if (*(char *)(lVar35 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar22 = *(longlong *)(*(longlong *)(lVar35 + 0xec0) + 0x1520);
    if ((*(longlong *)(lVar22 + 0x1c8) != 0) ||
       (pfVar24 = (float *)(lVar22 + 0x284),
       *(longlong *)(*(longlong *)(lVar35 + 0xec0) + 0x2368) != 0)) {
      pfVar24 = (float *)(lVar22 + 0x254);
    }
    fVar37 = *pfVar24;
    fVar4 = *(float *)(lVar22 + 0x11c);
    fVar39 = fVar39 * DAT_180381080;
    FUN_18026a810(3,&DAT_1803dc9a8 + lVar29);
    FUN_18026a810(5,&DAT_1803dc9b8 + lVar29);
    local_278 = (undefined *)CONCAT44((fVar37 - fVar4) - fVar39,fVar40);
    FUN_180272fa0("##tm_list",&local_278,1,0);
    local_248 = 0;
    uStack_240 = 0;
    local_238 = 0;
    uStack_230 = 0;
    sVar18 = strlen(&DAT_1803fe550);
    FUN_18001d080(&local_248,&DAT_1803fe550,sVar18);
    FUN_18019a270(local_198,&local_248);
    FUN_18020e450(&local_248);
    local_288 = 0.0;
    fVar39 = fVar36;
    fVar37 = fVar36;
    if (0 < (int)(DAT_1803e9c28 - DAT_1803e9c20 >> 4) * -0x33333333) {
      do {
        puVar34 = (undefined8 *)((longlong)(int)fVar36 * 0x50 + DAT_1803e9c20);
        if (local_188 == 0) {
LAB_1801cddd2:
          bVar9 = true;
        }
        else {
          uVar19 = FUN_18019a270(&local_248,puVar34);
          fVar37 = 2.8026e-45;
          local_258 = 2.8026e-45;
          lVar29 = FUN_18011aa70(uVar19,local_198);
          if (lVar29 != -1) goto LAB_1801cddd2;
          bVar9 = false;
        }
        if (fVar37 != 0.0) {
          fVar37 = 0.0;
          local_258 = 0.0;
          FUN_18020e450(&local_248);
        }
        piVar14 = piStack_218;
        if (bVar9) {
          local_288 = (float)((int)fVar39 + 1);
          if (local_220 != piStack_218) {
            uVar38 = puVar34[3];
            sVar18 = puVar34[2];
            piVar30 = local_220;
            do {
              piVar25 = piVar30 + 2;
              puVar20 = puVar34;
              if (0xf < uVar38) {
                puVar20 = (undefined8 *)*puVar34;
              }
              sVar5 = *(size_t *)(piVar30 + 6);
              if (0xf < *(ulonglong *)(piVar30 + 8)) {
                piVar25 = *(int **)piVar25;
              }
              if ((sVar5 == sVar18) &&
                 ((sVar5 == 0 || (iVar16 = memcmp(piVar25,puVar20,sVar5), iVar16 == 0)))) {
                local_2a8 = (undefined8 *)&DAT_18034e198;
                if (piVar30[10] == 1) {
                  local_2a8 = (undefined8 *)&DAT_18033e5ea;
                }
                FUN_180012ac0(local_178,0x60,"profile  |  %d player%s");
                goto LAB_1801cde61;
              }
              piVar30 = piVar30 + 0xc;
            } while (piVar30 != piVar14);
          }
          FUN_180012ac0(local_178,0x60,"profile  |  not on this server");
LAB_1801cde61:
          FUN_18027ae00(fVar36);
          if (*(char *)((longlong)puVar34 + 0x23) == '\0') {
            if (*(char *)((longlong)puVar34 + 0x34) == '\0') {
              puVar20 = (undefined8 *)(&DAT_1803dca28 + local_260);
            }
            else {
              puVar20 = puVar34 + 7;
            }
          }
          else {
            puVar20 = (undefined8 *)((longlong)puVar34 + 0x24);
          }
          if ((local_284 == '\0') || (DAT_1803e88b0 != fVar36)) {
            uVar19 = 0;
          }
          else {
            uVar19 = 1;
          }
          if (0xf < (ulonglong)puVar34[3]) {
            puVar34 = (undefined8 *)*puVar34;
          }
          local_278 = (undefined *)*puVar20;
          uStack_270 = puVar20[1];
          local_298 = CONCAT71(local_298._1_7_,1);
          local_2a0 = &local_278;
          local_2a8 = (undefined8 *)CONCAT71(local_2a8._1_7_,1);
          cVar15 = FUN_1801c81a0(&DAT_18036ffd8,puVar34,local_178,uVar19);
          lVar35 = local_268;
          if (cVar15 != '\0') {
            DAT_1803e7340 = 0;
            puVar21 = &DAT_1803e7330;
            if (0xf < DAT_1803e7348) {
              puVar21 = _DAT_1803e7330;
            }
            DAT_1803e88b0 = fVar36;
            *puVar21 = 0;
          }
          if (*(char *)(local_268 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar29 = *(longlong *)(*(longlong *)(lVar35 + 0xec0) + 0x1520);
          iVar16 = *(int *)(lVar29 + 0x108);
          if (iVar16 < 2) {
            FUN_18027e9c0("Calling PopID() too many times!");
            fVar39 = local_288;
          }
          else {
            *(int *)(lVar29 + 0x108) = iVar16 + -1;
            fVar39 = local_288;
          }
        }
        fVar36 = (float)((int)fVar36 + 1);
      } while ((int)fVar36 < (int)(DAT_1803e9c28 - DAT_1803e9c20 >> 4) * -0x33333333);
    }
    piVar14 = piStack_218;
    fVar36 = local_288;
    if (local_220 != piStack_218) {
      piVar30 = local_220 + 2;
      piVar25 = local_220;
      do {
        iVar16 = FUN_1800faa70(piVar30);
        if (iVar16 < 0) {
          if (local_188 == 0) {
LAB_1801ce025:
            bVar9 = true;
          }
          else {
            uVar19 = FUN_18019a270(&local_1e8,piVar30);
            fVar37 = (float)((uint)fVar37 | 1);
            local_258 = fVar37;
            lVar29 = FUN_18011aa70(uVar19,local_198);
            if (lVar29 != -1) goto LAB_1801ce025;
            bVar9 = false;
          }
          if (((uint)fVar37 & 1) != 0) {
            fVar37 = (float)((uint)fVar37 & 0xfffffffe);
            local_258 = fVar37;
            FUN_18020e450(&local_1e8);
          }
          if (bVar9) {
            fVar36 = (float)((int)fVar36 + 1);
            local_2a0 = (undefined8 *)&DAT_18034e198;
            if (piVar25[10] == 1) {
              local_2a0 = (undefined8 *)&DAT_18033e5ea;
            }
            local_2a8 = (undefined8 *)CONCAT44(local_2a8._4_4_,piVar25[10]);
            FUN_180012ac0(local_118,0x60,"id %d  |  %d player%s",*piVar25);
            FUN_18027ae00(*piVar25 + 100000);
            if (local_284 == '\0') {
              piVar26 = piVar30;
              if (0xf < *(ulonglong *)(piVar25 + 8)) {
                piVar26 = *(int **)(piVar25 + 2);
              }
              puVar21 = &DAT_1803e7330;
              if (0xf < DAT_1803e7348) {
                puVar21 = _DAT_1803e7330;
              }
              if ((DAT_1803e7340 != *(size_t *)(piVar25 + 6)) ||
                 ((DAT_1803e7340 != 0 &&
                  (iVar16 = memcmp(puVar21,piVar26,DAT_1803e7340), iVar16 != 0))))
              goto LAB_1801ce0eb;
              uVar19 = 1;
            }
            else {
LAB_1801ce0eb:
              uVar19 = 0;
            }
            piVar26 = piVar30;
            if (0xf < *(ulonglong *)(piVar25 + 8)) {
              piVar26 = *(int **)(piVar25 + 2);
            }
            local_278 = *(undefined **)(&DAT_1803dca28 + local_260);
            uStack_270 = *(undefined8 *)((longlong)&DAT_1803dca30 + local_260);
            local_298 = CONCAT71(local_298._1_7_,1);
            local_2a0 = &local_278;
            local_2a8 = (undefined8 *)((ulonglong)local_2a8 & 0xffffffffffffff00);
            cVar15 = FUN_1801c81a0("tm_live",piVar26,local_118,uVar19);
            if (cVar15 != '\0') {
              if (piVar25 + 2 != (int *)&DAT_1803e7330) {
                piVar26 = piVar30;
                if (0xf < *(ulonglong *)(piVar30 + 6)) {
                  piVar26 = *(int **)(piVar25 + 2);
                }
                FUN_180212700(&DAT_1803e7330,piVar26,*(undefined8 *)(piVar25 + 6));
              }
              DAT_1803e88b0 = -NAN;
            }
            if (*(char *)(lVar35 + 0x10) == '\0') {
              __dyn_tls_on_demand_init();
            }
            lVar29 = *(longlong *)(*(longlong *)(lVar35 + 0xec0) + 0x1520);
            iVar16 = *(int *)(lVar29 + 0x108);
            if (iVar16 < 2) {
              FUN_18027e9c0("Calling PopID() too many times!");
            }
            else {
              *(int *)(lVar29 + 0x108) = iVar16 + -1;
            }
          }
        }
        piVar25 = piVar25 + 0xc;
        piVar30 = piVar30 + 0xc;
      } while (piVar25 != piVar14);
    }
    lVar29 = local_260;
    if (fVar36 == 0.0) {
      if ((DAT_1803fa668 == (longlong *)0x0) ||
         (cVar15 = (**(code **)(*DAT_1803fa668 + 0xd0))(), lVar29 = local_260, cVar15 == '\0')) {
        lVar29 = local_260;
        FUN_1802aabb0(&DAT_1803dca28 + local_260,"  Not in game - no live teams.");
      }
      else {
        pcVar27 = "  No teams detected yet.";
        if (DAT_1803fe550 != '\0') {
          pcVar27 = "  No matches.";
        }
        FUN_1802aabb0(&DAT_1803dca28 + local_260,pcVar27);
      }
    }
    FUN_180273410();
    FUN_18026a890(2);
    fVar36 = DAT_180380f40;
    if (((int)DAT_1803e88b0 < 0) ||
       ((int)(DAT_1803e9c28 - DAT_1803e9c20 >> 4) * -0x33333333 <= (int)DAT_1803e88b0)) {
      bVar31 = 0;
    }
    else {
      bVar31 = 1;
    }
    fVar40 = (fVar40 - DAT_180380f40) * DAT_180380ac0;
    if ((DAT_1803e7340 == 0) || (bVar31 != 0)) {
      uVar19 = CONCAT71((uint7)(uint3)((uint)DAT_1803e88b0 >> 8),1);
    }
    else {
      uVar19 = 0;
    }
    FUN_180279170(uVar19);
    local_278 = (undefined *)CONCAT44(0x41d00000,fVar40);
    local_248 = *(undefined8 *)(&DAT_1803dc9e8 + lVar29);
    uStack_240 = *(undefined8 *)(&DAT_1803dc9f0 + lVar29);
    local_2a0 = (undefined8 *)CONCAT71(local_2a0._1_7_,1);
    local_2a8 = (undefined8 *)CONCAT71(local_2a8._1_7_,1);
    cVar15 = FUN_18019cb40("Add##tm",10,&local_278,&local_248);
    lVar29 = DAT_1803e9c20;
    uVar38 = DAT_1803e7348;
    sVar18 = DAT_1803e7340;
    puVar21 = _DAT_1803e7330;
    uVar19 = DAT_1803813d8;
    if ((cVar15 != '\0') && (DAT_1803e7340 != 0)) {
      iVar16 = 0;
      iVar33 = (int)(DAT_1803e9c28 - DAT_1803e9c20 >> 4) * -0x33333333;
      if (0 < iVar33) {
        do {
          puVar34 = (undefined8 *)((longlong)iVar16 * 0x50 + lVar29);
          _Buf2 = &DAT_1803e7330;
          if (0xf < uVar38) {
            _Buf2 = puVar21;
          }
          sVar5 = puVar34[2];
          if (0xf < (ulonglong)puVar34[3]) {
            puVar34 = (undefined8 *)*puVar34;
          }
          if ((sVar5 == sVar18) &&
             ((sVar5 == 0 || (iVar17 = memcmp(puVar34,_Buf2,sVar5), iVar17 == 0)))) {
            if (-1 < iVar16) goto LAB_1801ce552;
            break;
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 < iVar33);
      }
      uStack_1e0 = 0;
      local_1d8 = _DAT_1803814b0;
      uStack_1d0 = _UNK_1803814b8;
      local_1e8 = 0;
      local_1c8 = 0;
      local_1c4 = 0x3f0ccccd;
      local_1c0 = 0x3f733333;
      local_1bc = 0x3f266666;
      local_1b8 = 0x3f800000;
      local_1b4 = 0;
      local_1b0 = 0x3f0ccccd;
      local_1ac = 0x3f733333;
      local_1a8 = 0x3f266666;
      local_1a4 = 0x3f800000;
      local_1a0 = 1;
      local_19c = 0;
      puVar21 = &DAT_1803e7330;
      if (0xf < DAT_1803e7348) {
        puVar21 = _DAT_1803e7330;
      }
      FUN_180212700(&local_1e8,puVar21,DAT_1803e7340);
      local_278 = &DAT_1803e88c0;
      iVar16 = _Mtx_lock(&DAT_1803e88c0);
      if (iVar16 != 0) {
        std::_Throw_Cpp_error(5);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (DAT_1803e890c == 0x7fffffff) {
        DAT_1803e890c = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      if (DAT_1803e9c28 == DAT_1803e9c30) {
        FUN_1802260c0(&DAT_1803e9c20,DAT_1803e9c28,&local_1e8);
      }
      else {
        FUN_18023cb00(DAT_1803e9c28,&local_1e8);
        DAT_1803e9c28 = DAT_1803e9c28 + 0x50;
      }
      fVar39 = (float)((int)(DAT_1803e9c28 - DAT_1803e9c20 >> 4) * -0x33333333 - 1);
      _Mtx_unlock(&DAT_1803e88c0);
      DAT_1803e7340 = 0;
      puVar21 = &DAT_1803e7330;
      if (0xf < DAT_1803e7348) {
        puVar21 = _DAT_1803e7330;
      }
      DAT_1803e88b0 = fVar39;
      *puVar21 = 0;
      bVar31 = (byte)((uint)fVar39 >> 0x1f) ^ 1;
      _DAT_1803e88b8 = uVar19;
      FUN_18020e450(&local_1e8);
    }
LAB_1801ce552:
    FUN_180279200();
    local_288 = 1.5;
    local_278 = (undefined *)CONCAT44(local_278._4_4_,0x3f400000);
    pfVar24 = (float *)&local_278;
    if (fVar11 <= DAT_1803da6a4) {
      pfVar24 = &DAT_1803da6a4;
    }
    pfVar23 = &local_288;
    if (DAT_1803da6a4 <= fVar12) {
      pfVar23 = pfVar24;
    }
    FUN_18027f5b0(pfVar24,*pfVar23 * fVar36);
    FUN_180279170(bVar31 == 0);
    lVar29 = local_260;
    local_278 = (undefined *)CONCAT44(0x41d00000,fVar40);
    local_248 = *(undefined8 *)(&DAT_1803dca08 + local_260);
    uStack_240 = *(undefined8 *)(&DAT_1803dca10 + local_260);
    local_2a0 = (undefined8 *)CONCAT71(local_2a0._1_7_,1);
    local_2a8 = (undefined8 *)CONCAT71(local_2a8._1_7_,1);
    cVar15 = FUN_18019cb40("Remove##tm",9,&local_278,&local_248);
    if (cVar15 != '\0') {
      uStack_200 = 0;
      lVar35 = 0;
      local_1f8 = 0;
      uVar38 = 0xf;
      local_1f0 = 0xf;
      local_208 = (undefined8 ****)0x0;
      local_228 = &DAT_1803e88c0;
      iVar16 = _Mtx_lock(&DAT_1803e88c0);
      if (iVar16 != 0) {
        std::_Throw_Cpp_error(5);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (DAT_1803e890c == 0x7fffffff) {
        DAT_1803e890c = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      if ((-1 < (int)DAT_1803e88b0) &&
         (lVar29 = local_260,
         (int)DAT_1803e88b0 < (int)(DAT_1803e9c28 - DAT_1803e9c20 >> 4) * -0x33333333)) {
        ppppuVar28 = (undefined8 ****)((longlong)(int)DAT_1803e88b0 * 0x50 + DAT_1803e9c20);
        if (&local_208 != ppppuVar28) {
          ppppuVar1 = ppppuVar28 + 2;
          if ((undefined8 ***)0xf < ppppuVar28[3]) {
            ppppuVar28 = (undefined8 ****)*ppppuVar28;
          }
          FUN_180212700(&local_208,ppppuVar28,*ppppuVar1);
          lVar35 = local_1f8;
          uVar38 = local_1f0;
        }
        lVar6 = DAT_1803e9c28;
        lVar29 = (longlong)(int)DAT_1803e88b0 * 0x50 + DAT_1803e9c20;
        lVar22 = lVar29;
        while (lVar10 = lVar22 + 0x50, lVar10 != lVar6) {
          FUN_18020e8a0(lVar29,lVar10);
          *(undefined1 *)(lVar29 + 0x20) = *(undefined1 *)(lVar22 + 0x70);
          *(undefined1 *)(lVar29 + 0x21) = *(undefined1 *)(lVar22 + 0x71);
          *(undefined1 *)(lVar29 + 0x22) = *(undefined1 *)(lVar22 + 0x72);
          *(undefined1 *)(lVar29 + 0x23) = *(undefined1 *)(lVar22 + 0x73);
          uVar8 = *(undefined8 *)(lVar22 + 0x7c);
          *(undefined8 *)(lVar29 + 0x24) = *(undefined8 *)(lVar22 + 0x74);
          *(undefined8 *)(lVar29 + 0x2c) = uVar8;
          *(undefined1 *)(lVar29 + 0x34) = *(undefined1 *)(lVar22 + 0x84);
          uVar8 = *(undefined8 *)(lVar22 + 0x90);
          *(undefined8 *)(lVar29 + 0x38) = *(undefined8 *)(lVar22 + 0x88);
          *(undefined8 *)(lVar29 + 0x40) = uVar8;
          *(undefined1 *)(lVar29 + 0x48) = *(undefined1 *)(lVar22 + 0x98);
          *(undefined4 *)(lVar29 + 0x4c) = *(undefined4 *)(lVar22 + 0x9c);
          lVar29 = lVar29 + 0x50;
          lVar22 = lVar10;
        }
        local_278 = (undefined *)(DAT_1803e9c28 + -0x50);
        FUN_18020e450();
        DAT_1803e9c28 = DAT_1803e9c28 + -0x50;
        lVar29 = local_260;
      }
      _Mtx_unlock(&DAT_1803e88c0);
      DAT_1803e88b0 = -NAN;
      if (lVar35 != 0) {
        ppppuVar28 = &local_208;
        if (0xf < uVar38) {
          ppppuVar28 = (undefined8 ****)local_208;
        }
        FUN_180212700(&DAT_1803e7330,ppppuVar28,lVar35);
      }
      _DAT_1803e88b8 = uVar19;
      FUN_18020e450(&local_208);
    }
    FUN_180279200();
    FUN_18027fda0();
    local_288 = 1.5;
    local_278 = (undefined *)CONCAT44(local_278._4_4_,0x3f400000);
    pfVar24 = (float *)&local_278;
    if (fVar11 <= DAT_1803da6a4) {
      pfVar24 = &DAT_1803da6a4;
    }
    pfVar23 = &local_288;
    if (DAT_1803da6a4 <= fVar12) {
      pfVar23 = pfVar24;
    }
    FUN_18027f5b0(pfVar24,*pfVar23 * DAT_180380fcc);
    FUN_18027fc30();
    lVar35 = local_268;
    if (*(char *)(local_268 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar22 = *(longlong *)(*(longlong *)(lVar35 + 0xec0) + 0x1520);
    puVar3 = (undefined4 *)(lVar22 + 0x1f0);
    FUN_18028a630(lVar22 + 0x208,puVar3);
    *puVar3 = 0;
    if (((int)DAT_1803e88b0 < 0) ||
       ((int)(DAT_1803e9c28 - DAT_1803e9c20 >> 4) * -0x33333333 <= (int)DAT_1803e88b0)) {
      if (DAT_1803e7340 == 0) {
        puVar32 = &DAT_1803dca28 + lVar29;
        FUN_1802aabb0(puVar32,"No team selected.");
        if (*(char *)(lVar35 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar29 = *(longlong *)(lVar35 + 0xec0);
        *(undefined1 *)(*(longlong *)(lVar29 + 0x1520) + 0xce) = 1;
        if (*(char *)(*(longlong *)(lVar29 + 0x1520) + 0xd1) == '\0') {
          local_268 = 0;
          FUN_18027f400(&local_268,uVar13);
        }
        pcVar27 = 
        "Teams are matched by their Lua name (team.GetName), so profiles survive map changes and reconnects."
        ;
      }
      else {
        puVar21 = &DAT_1803e7330;
        if (0xf < DAT_1803e7348) {
          puVar21 = _DAT_1803e7330;
        }
        FUN_1802aa3c0(puVar21,0,1);
        if (*(char *)(lVar35 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar22 = *(longlong *)(lVar35 + 0xec0);
        *(undefined1 *)(*(longlong *)(lVar22 + 0x1520) + 0xce) = 1;
        if (*(char *)(*(longlong *)(lVar22 + 0x1520) + 0xd1) == '\0') {
          local_268 = 0;
          FUN_18027f400(&local_268,uVar13);
        }
        puVar32 = &DAT_1803dca28 + lVar29;
        FUN_1802aabb0(puVar32,"Not added yet.");
        pcVar27 = "Press Add to create a profile for this team.";
      }
    }
    else {
      puVar34 = (undefined8 *)((longlong)(int)DAT_1803e88b0 * 0x50 + DAT_1803e9c20);
      cVar15 = *(char *)(lVar35 + 0x10);
      if (cVar15 == '\0') {
        __dyn_tls_on_demand_init();
        cVar15 = *(char *)(lVar35 + 0x10);
      }
      if (*(int *)(*(longlong *)(*(longlong *)(lVar35 + 0xec0) + 0x60) + 0x68) == 0) {
        lVar22 = 0;
      }
      else {
        if (cVar15 == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar22 = **(longlong **)(*(longlong *)(*(longlong *)(lVar35 + 0xec0) + 0x60) + 0x70);
        if (lVar22 != 0) {
          FUN_18027a8a0(lVar22,*(undefined4 *)(lVar22 + 0x1c));
        }
      }
      puVar20 = puVar34;
      if (0xf < (ulonglong)puVar34[3]) {
        puVar20 = (undefined8 *)*puVar34;
      }
      FUN_1802aabb0(&DAT_1803dc9c8 + lVar29,&DAT_1803431ac,puVar20);
      if (lVar22 != 0) {
        if (*(char *)(lVar35 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar29 = *(longlong *)(lVar35 + 0xec0);
        lVar22 = (longlong)*(int *)(lVar29 + 0x1fe8);
        if (*(int *)(lVar29 + 0x1fe8) < 1) {
          FUN_18027e9c0("Calling PopFont() too many times!");
        }
        else {
          lVar6 = *(longlong *)(lVar29 + 0x1ff0);
          FUN_18027a5f0(*(undefined8 *)(lVar6 + -0x10 + lVar22 * 0x10),
                        *(undefined4 *)(lVar6 + -8 + lVar22 * 0x10),
                        *(undefined4 *)(lVar6 + -4 + lVar22 * 0x10));
          *(int *)(lVar29 + 0x1fe8) = *(int *)(lVar29 + 0x1fe8) + -1;
        }
      }
      piVar14 = piStack_218;
      if (local_220 != piStack_218) {
        uVar38 = puVar34[3];
        sVar18 = puVar34[2];
        piVar30 = local_220;
        do {
          piVar25 = piVar30 + 2;
          puVar20 = puVar34;
          if (0xf < uVar38) {
            puVar20 = (undefined8 *)*puVar34;
          }
          sVar5 = *(size_t *)(piVar30 + 6);
          if (0xf < *(ulonglong *)(piVar30 + 8)) {
            piVar25 = *(int **)piVar25;
          }
          if ((sVar5 == sVar18) &&
             ((sVar5 == 0 || (iVar16 = memcmp(piVar25,puVar20,sVar5), iVar16 == 0)))) {
            puVar32 = &DAT_1803dca28 + local_260;
            if (piVar30 == (int *)0x0) goto LAB_1801ce9d9;
            local_2a8 = (undefined8 *)&DAT_18034e198;
            if (piVar30[10] == 1) {
              local_2a8 = (undefined8 *)&DAT_18033e5ea;
            }
            FUN_1802aabb0(puVar32,"Live: id %d, %d player%s",*piVar30);
            goto LAB_1801ce9e8;
          }
          piVar30 = piVar30 + 0xc;
        } while (piVar30 != piVar14);
      }
      puVar32 = &DAT_1803dca28 + local_260;
LAB_1801ce9d9:
      FUN_1802aabb0(puVar32,"Not present on this server.");
LAB_1801ce9e8:
      FUN_1802afb40();
      FUN_1801a0b60("Ignore in aimbot##tm",puVar34 + 4);
      FUN_1801a0b60("Ignore in triggerbot##tm",(longlong)puVar34 + 0x21);
      cVar15 = FUN_1801a0b60("Ignore in visuals##tm",(longlong)puVar34 + 0x22);
      if (cVar15 != '\0') {
        _DAT_1803e88b8 = uVar19;
      }
      cVar15 = FUN_18026ee60(0);
      if (cVar15 != '\0') {
        FUN_180280d00(
                     "Hide this whole team from every visual: ESP box/texts/bars,\nskeleton, chams, radar, lookbeam and the friend overlay."
                     );
      }
      FUN_1801a0b60("Highlight (recolor ESP box)##tm",(longlong)puVar34 + 0x23);
      fVar40 = DAT_180380fa8;
      local_288 = 1.5;
      local_278 = (undefined *)CONCAT44(local_278._4_4_,0x3f400000);
      pfVar24 = (float *)&local_278;
      if (fVar11 <= DAT_1803da6a4) {
        pfVar24 = &DAT_1803da6a4;
      }
      pfVar23 = &local_288;
      if (DAT_1803da6a4 <= fVar12) {
        pfVar23 = pfVar24;
      }
      FUN_18027f5b0(pfVar24,*pfVar23 * DAT_180380fa8);
      FUN_1802bac60("##tm_clr",(longlong)puVar34 + 0x24,0x400a0);
      FUN_1801a0b60("Recolor ESP text##tm",(longlong)puVar34 + 0x34);
      cVar15 = FUN_18026ee60(0);
      if (cVar15 != '\0') {
        FUN_180280d00(
                     "Paints this team\'s ESP text with the color on the right.\nThe gear picks which text elements; default is all of them.\nIndependent of the box color above."
                     );
      }
      local_288 = 1.5;
      local_278._0_4_ = 0.75;
      pfVar24 = (float *)&local_278;
      if (fVar11 <= DAT_1803da6a4) {
        pfVar24 = &DAT_1803da6a4;
      }
      pfVar23 = &local_288;
      if (DAT_1803da6a4 <= fVar12) {
        pfVar23 = pfVar24;
      }
      FUN_18027f5b0(pfVar24,*pfVar23 * fVar40);
      FUN_1802bac60("##tm_txtclr",puVar34 + 7,0x400a0);
      local_288 = 1.5;
      local_278 = (undefined *)CONCAT44(local_278._4_4_,0x3f400000);
      pfVar24 = (float *)&local_278;
      if (fVar11 <= DAT_1803da6a4) {
        pfVar24 = &DAT_1803da6a4;
      }
      pfVar23 = &local_288;
      if (DAT_1803da6a4 <= fVar12) {
        pfVar23 = pfVar24;
      }
      FUN_18027f5b0(pfVar24,*pfVar23 * fVar36);
      FUN_1801cad50("tm_txt",puVar34 + 9,(longlong)puVar34 + 0x4c,0x10);
      if (*(char *)(lVar35 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar29 = *(longlong *)(lVar35 + 0xec0);
      *(undefined1 *)(*(longlong *)(lVar29 + 0x1520) + 0xce) = 1;
      if (*(char *)(*(longlong *)(lVar29 + 0x1520) + 0xd1) == '\0') {
        local_268 = 0;
        FUN_18027f400(&local_268,uVar13);
      }
      pcVar27 = "Applies to every player on this team.";
    }
    FUN_1802aabb0(puVar32,pcVar27);
    if (*(char *)(lVar35 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar29 = *(longlong *)(*(longlong *)(lVar35 + 0xec0) + 0x1520);
    iVar16 = *(int *)(lVar29 + 0x208);
    if (iVar16 < 1) {
      FUN_18027e9c0("Calling PopTextWrapPos() too many times!");
    }
    else {
      *(undefined4 *)(lVar29 + 0x1f0) =
           *(undefined4 *)(*(longlong *)(lVar29 + 0x210) + -4 + (longlong)iVar16 * 4);
      *(int *)(lVar29 + 0x208) = iVar16 + -1;
    }
    FUN_18027fda0();
    FUN_18020e450(local_198);
    FUN_18020baa0(&local_220);
  }
  FUN_180273410();
  FUN_18026abb0(2);
  FUN_18026a890(2);
  return;
}


