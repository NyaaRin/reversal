// 0x1801cee10  FUN_1801cee10
// size=5212 thunk=false
// signature: undefined FUN_1801cee10()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801cee10(void)

{
  undefined8 ******ppppppuVar1;
  uint *puVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 uVar8;
  longlong lVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  char cVar14;
  int iVar15;
  int iVar16;
  size_t sVar17;
  undefined8 uVar18;
  ulonglong *puVar19;
  longlong lVar20;
  undefined8 *puVar21;
  float *pfVar22;
  float *pfVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  char *pcVar26;
  undefined8 ******ppppppuVar27;
  byte bVar28;
  longlong lVar29;
  uint uVar30;
  longlong lVar31;
  longlong lVar32;
  undefined8 *puVar33;
  undefined1 *puVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  undefined8 *puVar39;
  float fVar40;
  float fVar41;
  undefined1 auStack_2b8 [32];
  undefined8 *local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  float local_278;
  char local_274;
  undefined8 local_270;
  undefined8 local_268;
  ulonglong uStack_260;
  uint local_258;
  longlong local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined *local_228;
  undefined8 *local_220;
  undefined8 *puStack_218;
  undefined8 local_210;
  undefined8 *****local_208;
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
  
  local_b8 = DAT_1803da4c0 ^ (ulonglong)auStack_2b8;
  uVar36 = 0;
  local_258 = 0;
  local_278 = 5.60519e-45;
  local_268 = local_268 & 0xffffffff00000000;
  pfVar23 = (float *)&local_268;
  if (-1 < (int)DAT_1803fb24c) {
    pfVar23 = &DAT_1803fb24c;
  }
  pfVar22 = &local_278;
  if ((int)DAT_1803fb24c < 5) {
    pfVar22 = pfVar23;
  }
  DAT_1803fb24c = *pfVar22;
  lVar29 = (longlong)(int)DAT_1803fb24c;
  if ((DAT_180427634 & 1) == 0) {
    DAT_180427634 = DAT_180427634 | 1;
    atexit((_func_5014 *)&LAB_18030b330);
  }
  uVar13 = DAT_180381384;
  cVar14 = FUN_18019fbc0("Usergroups",0xf,CONCAT44(DAT_180381384,DAT_180381384),0);
  if (cVar14 != '\0') {
    lVar29 = lVar29 * 200;
    lVar32 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    local_270 = (undefined *)lVar29;
    local_250 = lVar32;
    if (*(char *)(lVar32 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar31 = *(longlong *)(*(longlong *)(lVar32 + 0xec0) + 0x1520);
    if ((*(longlong *)(lVar31 + 0x1c8) != 0) ||
       (pfVar23 = (float *)(lVar31 + 0x280),
       *(longlong *)(*(longlong *)(lVar32 + 0xec0) + 0x2368) != 0)) {
      pfVar23 = (float *)(lVar31 + 0x250);
    }
    fVar41 = (*pfVar23 - *(float *)(lVar31 + 0x118)) * DAT_180380ab4;
    if ((DAT_1803e8910 < 0) ||
       (local_274 = '\x01', (int)(DAT_1803e9c10 - DAT_1803e9c08 >> 4) * -0x33333333 <= DAT_1803e8910
       )) {
      local_274 = '\0';
    }
    local_220 = (undefined8 *)0x0;
    puStack_218 = (undefined8 *)0x0;
    local_210 = 0;
    FUN_1800feff0(&local_220);
    FUN_18027fc30();
    if (*(char *)(lVar32 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar31 = *(longlong *)(lVar32 + 0xec0);
    puVar2 = (uint *)(lVar31 + 0x1ec0);
    *puVar2 = *puVar2 | 1;
    *(float *)(lVar31 + 0x1ed8) = fVar41;
    FUN_180012ac0(&local_1e8,0x40,"Search %d groups...",
                  ((longlong)puStack_218 - (longlong)local_220 >> 3) * -0x3333333333333333);
    local_268 = 0;
    local_280 = 0;
    local_288 = 0;
    local_290 = (undefined8 *)((ulonglong)local_290._4_4_ << 0x20);
    local_298 = &local_268;
    FUN_1802b74e0("##ug_search",&local_1e8,&DAT_1803ffd10,0x60);
    fVar12 = DAT_180380c50;
    fVar11 = DAT_180380b20;
    local_278 = 1.5;
    local_268 = CONCAT44(local_268._4_4_,0x3f400000);
    pfVar23 = (float *)&local_268;
    if (DAT_180380b20 <= DAT_1803da6a4) {
      pfVar23 = &DAT_1803da6a4;
    }
    pfVar22 = &local_278;
    if (DAT_1803da6a4 <= DAT_180380c50) {
      pfVar22 = pfVar23;
    }
    fVar40 = *pfVar22;
    if (*(char *)(lVar32 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar31 = *(longlong *)(*(longlong *)(lVar32 + 0xec0) + 0x1520);
    if ((*(longlong *)(lVar31 + 0x1c8) != 0) ||
       (pfVar23 = (float *)(lVar31 + 0x284),
       *(longlong *)(*(longlong *)(lVar32 + 0xec0) + 0x2368) != 0)) {
      pfVar23 = (float *)(lVar31 + 0x254);
    }
    fVar4 = *pfVar23;
    fVar5 = *(float *)(lVar31 + 0x11c);
    fVar40 = fVar40 * DAT_180381080;
    FUN_18026a810(3,&DAT_1803dc9a8 + lVar29);
    FUN_18026a810(5,&DAT_1803dc9b8 + lVar29);
    local_268._0_4_ = fVar41;
    local_268._4_4_ = (fVar4 - fVar5) - fVar40;
    FUN_180272fa0("##ug_list",&local_268,1,0);
    local_248 = 0;
    uStack_240 = 0;
    local_238 = 0;
    uStack_230 = 0;
    sVar17 = strlen(&DAT_1803ffd10);
    FUN_18001d080(&local_248,&DAT_1803ffd10,sVar17);
    FUN_18019a270(local_198,&local_248);
    FUN_18020e450(&local_248);
    local_278 = 0.0;
    local_268 = (ulonglong)(uint)local_268._4_4_ << 0x20;
    uVar35 = uVar36;
    uVar37 = uVar36;
    if (0 < (int)(DAT_1803e9c10 - DAT_1803e9c08 >> 4) * -0x33333333) {
      do {
        iVar15 = (int)uVar36;
        puVar39 = (undefined8 *)((longlong)iVar15 * 0x50 + DAT_1803e9c08);
        if (local_188 == 0) {
LAB_1801cf202:
          bVar10 = true;
        }
        else {
          uVar18 = FUN_18019a270(&local_248,puVar39);
          uVar35 = 2;
          local_258 = 2;
          lVar29 = FUN_18011aa70(uVar18,local_198);
          if (lVar29 != -1) goto LAB_1801cf202;
          bVar10 = false;
        }
        if (uVar35 != 0) {
          uVar35 = 0;
          local_258 = 0;
          FUN_18020e450(&local_248);
        }
        puVar33 = puStack_218;
        if (bVar10) {
          local_278 = (float)((int)uVar37 + 1);
          puVar24 = local_220;
          if (local_220 != puStack_218) {
            do {
              if (puVar24[2] == puVar39[2]) {
                uVar36 = 0;
                if (puVar24[2] == 0) {
LAB_1801cf29b:
                  local_298 = (undefined8 *)&DAT_18034e198;
                  if (*(int *)(puVar24 + 4) == 1) {
                    local_298 = (undefined8 *)&DAT_18033e5ea;
                  }
                  FUN_180012ac0(local_178,0x60,"profile  |  %d player%s");
                  uVar36 = local_268 & 0xffffffff;
                  goto LAB_1801cf2fb;
                }
                while( true ) {
                  puVar25 = puVar24;
                  if (0xf < (ulonglong)puVar24[3]) {
                    puVar25 = (undefined8 *)*puVar24;
                  }
                  puVar21 = puVar39;
                  if (0xf < (ulonglong)puVar39[3]) {
                    puVar21 = (undefined8 *)*puVar39;
                  }
                  bVar28 = *(byte *)((longlong)puVar25 + uVar36);
                  iVar15 = tolower((uint)*(byte *)((longlong)puVar21 + uVar36));
                  iVar16 = tolower((uint)bVar28);
                  if (iVar16 != iVar15) break;
                  uVar36 = uVar36 + 1;
                  if ((ulonglong)puVar24[2] <= uVar36) goto LAB_1801cf29b;
                }
              }
              puVar24 = puVar24 + 5;
            } while (puVar24 != puVar33);
            uVar36 = local_268 & 0xffffffff;
          }
          FUN_180012ac0(local_178,0x60,"profile  |  not on this server");
LAB_1801cf2fb:
          iVar15 = (int)uVar36;
          FUN_18027ae00(uVar36);
          if (*(char *)((longlong)puVar39 + 0x23) == '\0') {
            if (*(char *)((longlong)puVar39 + 0x34) == '\0') {
              puVar19 = (ulonglong *)(&DAT_1803dca28 + (longlong)local_270);
            }
            else {
              puVar19 = puVar39 + 7;
            }
          }
          else {
            puVar19 = (ulonglong *)((longlong)puVar39 + 0x24);
          }
          if ((local_274 == '\0') || (DAT_1803e8910 != iVar15)) {
            uVar18 = 0;
          }
          else {
            uVar18 = 1;
          }
          if (0xf < (ulonglong)puVar39[3]) {
            puVar39 = (undefined8 *)*puVar39;
          }
          local_268 = *puVar19;
          uStack_260 = puVar19[1];
          local_288 = CONCAT71(local_288._1_7_,1);
          local_290 = &local_268;
          local_298 = (undefined8 *)CONCAT71(local_298._1_7_,1);
          cVar14 = FUN_1801c81a0(&DAT_18037038c,puVar39,local_178,uVar18);
          lVar29 = local_250;
          if (cVar14 != '\0') {
            DAT_1803e97c8 = 0;
            puVar34 = &DAT_1803e97b8;
            if (0xf < DAT_1803e97d0) {
              puVar34 = _DAT_1803e97b8;
            }
            DAT_1803e8910 = iVar15;
            *puVar34 = 0;
          }
          if (*(char *)(local_250 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar29 = *(longlong *)(*(longlong *)(lVar29 + 0xec0) + 0x1520);
          iVar16 = *(int *)(lVar29 + 0x108);
          if (iVar16 < 2) {
            FUN_18027e9c0("Calling PopID() too many times!");
          }
          else {
            *(int *)(lVar29 + 0x108) = iVar16 + -1;
          }
          uVar37 = (ulonglong)(uint)local_278;
        }
        uVar30 = iVar15 + 1;
        uVar36 = (ulonglong)uVar30;
        local_268 = CONCAT44(local_268._4_4_,uVar30);
      } while ((int)uVar30 < (int)(DAT_1803e9c10 - DAT_1803e9c08 >> 4) * -0x33333333);
    }
    puVar33 = puStack_218;
    lVar29 = (longlong)local_270;
    for (puVar39 = local_220; local_270 = (undefined *)lVar29, puVar39 != puVar33;
        puVar39 = puVar39 + 5) {
      iVar15 = FUN_1800ff080(puVar39);
      if (iVar15 < 0) {
        if (local_188 == 0) {
LAB_1801cf483:
          bVar10 = true;
        }
        else {
          uVar18 = FUN_18019a270(&local_1e8,puVar39);
          local_258 = (uint)uVar35 | 1;
          uVar35 = (ulonglong)local_258;
          lVar29 = FUN_18011aa70(uVar18,local_198);
          if (lVar29 != -1) goto LAB_1801cf483;
          bVar10 = false;
        }
        if ((uVar35 & 1) != 0) {
          local_258 = (uint)uVar35 & 0xfffffffe;
          uVar35 = (ulonglong)local_258;
          FUN_18020e450(&local_1e8);
        }
        if (bVar10) {
          local_278 = (float)((int)uVar37 + 1);
          local_298 = (undefined8 *)&DAT_18034e198;
          if (*(int *)(puVar39 + 4) == 1) {
            local_298 = (undefined8 *)&DAT_18033e5ea;
          }
          FUN_180012ac0(local_118,0x60,"%d player%s");
          puVar24 = puVar39;
          if (0xf < (ulonglong)puVar39[3]) {
            puVar24 = (undefined8 *)*puVar39;
          }
          FUN_18027abf0(puVar24);
          uVar36 = *(ulonglong *)(&DAT_1803dca28 + (longlong)local_270);
          uVar37 = *(ulonglong *)((longlong)&DAT_1803dca30 + (longlong)local_270);
          if ((local_274 == '\0') && (DAT_1803e97c8 == puVar39[2])) {
            uVar38 = 0;
            if (DAT_1803e97c8 != 0) {
              do {
                puVar34 = &DAT_1803e97b8;
                if (0xf < DAT_1803e97d0) {
                  puVar34 = _DAT_1803e97b8;
                }
                puVar24 = puVar39;
                if (0xf < (ulonglong)puVar39[3]) {
                  puVar24 = (undefined8 *)*puVar39;
                }
                bVar28 = puVar34[uVar38];
                iVar15 = tolower((uint)*(byte *)(uVar38 + (longlong)puVar24));
                iVar16 = tolower((uint)bVar28);
                if (iVar16 != iVar15) goto LAB_1801cf57f;
                uVar38 = uVar38 + 1;
              } while (uVar38 < DAT_1803e97c8);
            }
            uVar18 = 1;
          }
          else {
LAB_1801cf57f:
            uVar18 = 0;
          }
          puVar24 = puVar39;
          if (0xf < (ulonglong)puVar39[3]) {
            puVar24 = (undefined8 *)*puVar39;
          }
          local_288 = CONCAT71(local_288._1_7_,1);
          local_290 = &local_268;
          local_298 = (undefined8 *)((ulonglong)local_298 & 0xffffffffffffff00);
          local_268 = uVar36;
          uStack_260 = uVar37;
          cVar14 = FUN_1801c81a0("ug_live",puVar24,local_118,uVar18);
          if (cVar14 != '\0') {
            if (puVar39 != (undefined8 *)&DAT_1803e97b8) {
              puVar24 = puVar39;
              if (0xf < (ulonglong)puVar39[3]) {
                puVar24 = (undefined8 *)*puVar39;
              }
              FUN_180212700(&DAT_1803e97b8,puVar24,puVar39[2]);
            }
            DAT_1803e8910 = -1;
          }
          lVar29 = local_250;
          if (*(char *)(local_250 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar29 = *(longlong *)(*(longlong *)(lVar29 + 0xec0) + 0x1520);
          iVar15 = *(int *)(lVar29 + 0x108);
          if (iVar15 < 2) {
            FUN_18027e9c0("Calling PopID() too many times!");
          }
          else {
            *(int *)(lVar29 + 0x108) = iVar15 + -1;
          }
        }
      }
      uVar37 = (ulonglong)(uint)local_278;
      lVar29 = (longlong)local_270;
    }
    if (local_278 == 0.0) {
      if ((DAT_1803fa668 == (longlong *)0x0) ||
         (cVar14 = (**(code **)(*DAT_1803fa668 + 0xd0))(), lVar29 = (longlong)local_270,
         cVar14 == '\0')) {
        lVar29 = (longlong)local_270;
        FUN_1802aabb0(&DAT_1803dca28 + (longlong)local_270,"  Not in game - no live groups.");
      }
      else {
        pcVar26 = "  No groups detected yet.";
        if (DAT_1803ffd10 != '\0') {
          pcVar26 = "  No matches.";
        }
        FUN_1802aabb0(&DAT_1803dca28 + (longlong)local_270,pcVar26);
      }
    }
    FUN_180273410();
    FUN_18026a890(2);
    fVar40 = DAT_180380f40;
    if ((DAT_1803e8910 < 0) ||
       ((int)(DAT_1803e9c10 - DAT_1803e9c08 >> 4) * -0x33333333 <= DAT_1803e8910)) {
      bVar28 = 0;
    }
    else {
      bVar28 = 1;
    }
    fVar41 = (fVar41 - DAT_180380f40) * DAT_180380ac0;
    if ((DAT_1803e97c8 == 0) || (bVar28 != 0)) {
      uVar18 = CONCAT71((uint7)(uint3)((uint)DAT_1803e8910 >> 8),1);
    }
    else {
      uVar18 = 0;
    }
    FUN_180279170(uVar18);
    local_270 = (undefined *)CONCAT44(0x41d00000,fVar41);
    local_268 = *(ulonglong *)(&DAT_1803dc9e8 + lVar29);
    uStack_260 = *(ulonglong *)(&DAT_1803dc9f0 + lVar29);
    local_290 = (undefined8 *)CONCAT71(local_290._1_7_,1);
    local_298 = (undefined8 *)CONCAT71(local_298._1_7_,1);
    cVar14 = FUN_18019cb40("Add##ug",10,&local_270,&local_268);
    uVar18 = DAT_1803813d8;
    if (((cVar14 != '\0') && (DAT_1803e97c8 != 0)) &&
       (iVar15 = FUN_1800ff080(&DAT_1803e97b8), iVar15 < 0)) {
      uStack_1e0 = 0;
      local_1d8 = _DAT_1803814b0;
      uStack_1d0 = _UNK_1803814b8;
      local_1e8 = 0;
      local_1c8 = 0;
      local_1c4 = 0x3f800000;
      local_1c0 = 0x3f1eb852;
      local_1bc = 0x3e800000;
      local_1b8 = 0x3f800000;
      local_1b4 = 0;
      local_1b0 = 0x3f800000;
      local_1ac = 0x3f1eb852;
      local_1a8 = 0x3e800000;
      local_1a4 = 0x3f800000;
      local_1a0 = 1;
      local_19c = 0;
      puVar34 = &DAT_1803e97b8;
      if (0xf < DAT_1803e97d0) {
        puVar34 = _DAT_1803e97b8;
      }
      FUN_180212700(&local_1e8,puVar34,DAT_1803e97c8);
      local_270 = &DAT_1803e8920;
      iVar15 = _Mtx_lock(&DAT_1803e8920);
      if (iVar15 != 0) {
        std::_Throw_Cpp_error(5);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (DAT_1803e896c == 0x7fffffff) {
        DAT_1803e896c = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      if (DAT_1803e9c10 == DAT_1803e9c18) {
        FUN_1802260c0(&DAT_1803e9c08,DAT_1803e9c10,&local_1e8);
      }
      else {
        FUN_18023cb00(DAT_1803e9c10,&local_1e8);
        DAT_1803e9c10 = DAT_1803e9c10 + 0x50;
      }
      iVar15 = (int)(DAT_1803e9c10 - DAT_1803e9c08 >> 4) * -0x33333333 + -1;
      _Mtx_unlock(&DAT_1803e8920);
      DAT_1803e97c8 = 0;
      puVar34 = &DAT_1803e97b8;
      if (0xf < DAT_1803e97d0) {
        puVar34 = _DAT_1803e97b8;
      }
      DAT_1803e8910 = iVar15;
      *puVar34 = 0;
      bVar28 = (byte)((uint)iVar15 >> 0x1f) ^ 1;
      _DAT_1803e8918 = uVar18;
      FUN_18020e450(&local_1e8);
    }
    FUN_180279200();
    local_278 = 1.5;
    local_268 = CONCAT44(local_268._4_4_,0x3f400000);
    pfVar23 = (float *)&local_268;
    if (fVar11 <= DAT_1803da6a4) {
      pfVar23 = &DAT_1803da6a4;
    }
    pfVar22 = &local_278;
    if (DAT_1803da6a4 <= fVar12) {
      pfVar22 = pfVar23;
    }
    FUN_18027f5b0(pfVar23,*pfVar22 * fVar40);
    FUN_180279170(bVar28 == 0);
    local_270 = (undefined *)CONCAT44(0x41d00000,fVar41);
    local_268 = *(ulonglong *)(&DAT_1803dca08 + lVar29);
    uStack_260 = *(ulonglong *)(&DAT_1803dca10 + lVar29);
    local_290 = (undefined8 *)CONCAT71(local_290._1_7_,1);
    local_298 = (undefined8 *)CONCAT71(local_298._1_7_,1);
    cVar14 = FUN_18019cb40("Remove##ug",9,&local_270,&local_268);
    if (cVar14 != '\0') {
      uStack_200 = 0;
      lVar32 = 0;
      local_1f8 = 0;
      uVar36 = 0xf;
      local_1f0 = 0xf;
      local_208 = (undefined8 ******)0x0;
      local_228 = &DAT_1803e8920;
      iVar15 = _Mtx_lock(&DAT_1803e8920);
      if (iVar15 != 0) {
        std::_Throw_Cpp_error(5);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (DAT_1803e896c == 0x7fffffff) {
        DAT_1803e896c = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      if ((-1 < DAT_1803e8910) &&
         (DAT_1803e8910 < (int)(DAT_1803e9c10 - DAT_1803e9c08 >> 4) * -0x33333333)) {
        ppppppuVar27 = (undefined8 ******)((longlong)DAT_1803e8910 * 0x50 + DAT_1803e9c08);
        if (&local_208 != ppppppuVar27) {
          ppppppuVar1 = ppppppuVar27 + 2;
          if ((undefined8 *****)0xf < ppppppuVar27[3]) {
            ppppppuVar27 = (undefined8 ******)*ppppppuVar27;
          }
          FUN_180212700(&local_208,ppppppuVar27,*ppppppuVar1);
          lVar32 = local_1f8;
          uVar36 = local_1f0;
        }
        lVar6 = DAT_1803e9c10;
        lVar31 = (longlong)DAT_1803e8910 * 0x50 + DAT_1803e9c08;
        lVar20 = lVar31;
        while (lVar9 = lVar20 + 0x50, lVar9 != lVar6) {
          FUN_18020e8a0(lVar31,lVar9);
          *(undefined1 *)(lVar31 + 0x20) = *(undefined1 *)(lVar20 + 0x70);
          *(undefined1 *)(lVar31 + 0x21) = *(undefined1 *)(lVar20 + 0x71);
          *(undefined1 *)(lVar31 + 0x22) = *(undefined1 *)(lVar20 + 0x72);
          *(undefined1 *)(lVar31 + 0x23) = *(undefined1 *)(lVar20 + 0x73);
          uVar8 = *(undefined8 *)(lVar20 + 0x7c);
          *(undefined8 *)(lVar31 + 0x24) = *(undefined8 *)(lVar20 + 0x74);
          *(undefined8 *)(lVar31 + 0x2c) = uVar8;
          *(undefined1 *)(lVar31 + 0x34) = *(undefined1 *)(lVar20 + 0x84);
          uVar8 = *(undefined8 *)(lVar20 + 0x90);
          *(undefined8 *)(lVar31 + 0x38) = *(undefined8 *)(lVar20 + 0x88);
          *(undefined8 *)(lVar31 + 0x40) = uVar8;
          *(undefined1 *)(lVar31 + 0x48) = *(undefined1 *)(lVar20 + 0x98);
          *(undefined4 *)(lVar31 + 0x4c) = *(undefined4 *)(lVar20 + 0x9c);
          lVar31 = lVar31 + 0x50;
          lVar20 = lVar9;
        }
        local_270 = (undefined *)(DAT_1803e9c10 + -0x50);
        FUN_18020e450();
        DAT_1803e9c10 = DAT_1803e9c10 + -0x50;
      }
      _Mtx_unlock(&DAT_1803e8920);
      DAT_1803e8910 = -1;
      if (lVar32 != 0) {
        ppppppuVar27 = &local_208;
        if (0xf < uVar36) {
          ppppppuVar27 = (undefined8 ******)local_208;
        }
        FUN_180212700(&DAT_1803e97b8,ppppppuVar27,lVar32);
      }
      _DAT_1803e8918 = uVar18;
      FUN_18020e450(&local_208);
    }
    FUN_180279200();
    FUN_18027fda0();
    local_278 = 1.5;
    local_268 = CONCAT44(local_268._4_4_,0x3f400000);
    pfVar23 = (float *)&local_268;
    if (fVar11 <= DAT_1803da6a4) {
      pfVar23 = &DAT_1803da6a4;
    }
    pfVar22 = &local_278;
    if (DAT_1803da6a4 <= fVar12) {
      pfVar22 = pfVar23;
    }
    FUN_18027f5b0(pfVar23,*pfVar22 * DAT_180380fcc);
    FUN_18027fc30();
    lVar32 = local_250;
    if (*(char *)(local_250 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar31 = *(longlong *)(*(longlong *)(lVar32 + 0xec0) + 0x1520);
    puVar3 = (undefined4 *)(lVar31 + 0x1f0);
    FUN_18028a630(lVar31 + 0x208,puVar3);
    *puVar3 = 0;
    if ((DAT_1803e8910 < 0) ||
       ((int)(DAT_1803e9c10 - DAT_1803e9c08 >> 4) * -0x33333333 <= DAT_1803e8910)) {
      if (DAT_1803e97c8 == 0) {
        FUN_1802aabb0(&DAT_1803dca28 + lVar29,"No usergroup selected.");
        if (*(char *)(lVar32 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar31 = *(longlong *)(lVar32 + 0xec0);
        *(undefined1 *)(*(longlong *)(lVar31 + 0x1520) + 0xce) = 1;
        if (*(char *)(*(longlong *)(lVar31 + 0x1520) + 0xd1) == '\0') {
          local_270 = (undefined *)0x0;
          FUN_18027f400(&local_270,uVar13);
        }
        FUN_1802aabb0(&DAT_1803dca28 + lVar29,
                      "Groups come from the server\'s admin mod (ULX / bAdmin / a custom netvar). Matching is by name and case-insensitive, so profiles survive map changes and reconnects."
                     );
        if (*(char *)(lVar32 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar31 = *(longlong *)(lVar32 + 0xec0);
        *(undefined1 *)(*(longlong *)(lVar31 + 0x1520) + 0xce) = 1;
        if (*(char *)(*(longlong *)(lVar31 + 0x1520) + 0xd1) == '\0') {
          local_270 = (undefined *)0x0;
          FUN_18027f400(&local_270,uVar13);
        }
        pcVar26 = 
        "Server keeps groups somewhere unusual? Point the Usergroup field at your own template in Netvars."
        ;
      }
      else {
        puVar34 = &DAT_1803e97b8;
        if (0xf < DAT_1803e97d0) {
          puVar34 = _DAT_1803e97b8;
        }
        FUN_1802aa3c0(puVar34,0,1);
        if (*(char *)(lVar32 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar31 = *(longlong *)(lVar32 + 0xec0);
        *(undefined1 *)(*(longlong *)(lVar31 + 0x1520) + 0xce) = 1;
        if (*(char *)(*(longlong *)(lVar31 + 0x1520) + 0xd1) == '\0') {
          local_270 = (undefined *)0x0;
          FUN_18027f400(&local_270,uVar13);
        }
        FUN_1802aabb0(&DAT_1803dca28 + lVar29,"Not added yet.");
        pcVar26 = "Press Add to create a profile for this group.";
      }
    }
    else {
      puVar39 = (undefined8 *)((longlong)DAT_1803e8910 * 0x50 + DAT_1803e9c08);
      cVar14 = *(char *)(lVar32 + 0x10);
      if (cVar14 == '\0') {
        __dyn_tls_on_demand_init();
        cVar14 = *(char *)(lVar32 + 0x10);
      }
      if (*(int *)(*(longlong *)(*(longlong *)(lVar32 + 0xec0) + 0x60) + 0x68) == 0) {
        lVar31 = 0;
      }
      else {
        if (cVar14 == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar31 = **(longlong **)(*(longlong *)(*(longlong *)(lVar32 + 0xec0) + 0x60) + 0x70);
        if (lVar31 != 0) {
          FUN_18027a8a0(lVar31,*(undefined4 *)(lVar31 + 0x1c));
        }
      }
      puVar33 = puVar39;
      if (0xf < (ulonglong)puVar39[3]) {
        puVar33 = (undefined8 *)*puVar39;
      }
      FUN_1802aabb0(&DAT_1803dc9c8 + lVar29,&DAT_1803431ac,puVar33);
      puVar33 = local_220;
      puVar24 = puStack_218;
      if (lVar31 != 0) {
        if (*(char *)(lVar32 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar31 = *(longlong *)(lVar32 + 0xec0);
        lVar20 = (longlong)*(int *)(lVar31 + 0x1fe8);
        if (*(int *)(lVar31 + 0x1fe8) < 1) {
          FUN_18027e9c0("Calling PopFont() too many times!");
          puVar33 = local_220;
          puVar24 = puStack_218;
        }
        else {
          lVar6 = *(longlong *)(lVar31 + 0x1ff0);
          FUN_18027a5f0(*(undefined8 *)(lVar6 + -0x10 + lVar20 * 0x10),
                        *(undefined4 *)(lVar6 + -8 + lVar20 * 0x10),
                        *(undefined4 *)(lVar6 + -4 + lVar20 * 0x10));
          *(int *)(lVar31 + 0x1fe8) = *(int *)(lVar31 + 0x1fe8) + -1;
          puVar33 = local_220;
          puVar24 = puStack_218;
        }
      }
      for (; puVar25 = puStack_218, bVar10 = puVar33 != puStack_218, puStack_218 = puVar24, bVar10;
          puVar33 = puVar33 + 5) {
        if (puVar33[2] == puVar39[2]) {
          uVar36 = 0;
          if (puVar33[2] == 0) {
LAB_1801cfdbb:
            lVar32 = local_250;
            if (puVar33 != (undefined8 *)0x0) {
              puVar34 = &DAT_18034e198;
              if (*(int *)(puVar33 + 4) == 1) {
                puVar34 = &DAT_18033e5ea;
              }
              FUN_1802aabb0(&DAT_1803dca28 + lVar29,"Live: %d player%s",*(int *)(puVar33 + 4),
                            puVar34);
              lVar32 = local_250;
              goto LAB_1801cfe3a;
            }
            break;
          }
          while( true ) {
            puVar24 = puVar33;
            if (0xf < (ulonglong)puVar33[3]) {
              puVar24 = (undefined8 *)*puVar33;
            }
            puVar21 = puVar39;
            if (0xf < (ulonglong)puVar39[3]) {
              puVar21 = (undefined8 *)*puVar39;
            }
            bVar28 = *(byte *)((longlong)puVar21 + uVar36);
            iVar15 = tolower((uint)*(byte *)((longlong)puVar24 + uVar36));
            iVar16 = tolower((uint)bVar28);
            if (iVar15 != iVar16) break;
            uVar36 = uVar36 + 1;
            if ((ulonglong)puVar33[2] <= uVar36) goto LAB_1801cfdbb;
          }
        }
        lVar32 = local_250;
        puVar24 = puStack_218;
        puStack_218 = puVar25;
      }
      FUN_1802aabb0(&DAT_1803dca28 + lVar29,"Not present on this server.");
LAB_1801cfe3a:
      FUN_1802afb40();
      FUN_1801a0b60("Ignore in aimbot##ug",puVar39 + 4);
      FUN_1801a0b60("Ignore in triggerbot##ug",(longlong)puVar39 + 0x21);
      cVar14 = FUN_1801a0b60("Ignore in visuals##ug",(longlong)puVar39 + 0x22);
      if (cVar14 != '\0') {
        _DAT_1803e8918 = uVar18;
      }
      cVar14 = FUN_18026ee60(0);
      if (cVar14 != '\0') {
        FUN_180280d00(
                     "Hide this whole group from every visual: ESP box/texts/bars,\nskeleton, chams, radar, lookbeam and the friend overlay."
                     );
      }
      FUN_1801a0b60("Highlight (recolor ESP box)##ug",(longlong)puVar39 + 0x23);
      fVar41 = DAT_180380fa8;
      local_278 = 1.5;
      local_268 = CONCAT44(local_268._4_4_,0x3f400000);
      pfVar23 = (float *)&local_268;
      if (fVar11 <= DAT_1803da6a4) {
        pfVar23 = &DAT_1803da6a4;
      }
      pfVar22 = &local_278;
      if (DAT_1803da6a4 <= fVar12) {
        pfVar22 = pfVar23;
      }
      FUN_18027f5b0(pfVar23,*pfVar22 * DAT_180380fa8);
      FUN_1802bac60("##ug_clr",(longlong)puVar39 + 0x24,0x400a0);
      FUN_1801a0b60("Recolor ESP text##ug",(longlong)puVar39 + 0x34);
      cVar14 = FUN_18026ee60(0);
      if (cVar14 != '\0') {
        FUN_180280d00(
                     "Paints this group\'s ESP text with the color on the right.\nThe gear picks which text elements; default is all of them.\nIndependent of the box color above."
                     );
      }
      local_278 = 1.5;
      local_268._0_4_ = 0.75;
      pfVar23 = (float *)&local_268;
      if (fVar11 <= DAT_1803da6a4) {
        pfVar23 = &DAT_1803da6a4;
      }
      pfVar22 = &local_278;
      if (DAT_1803da6a4 <= fVar12) {
        pfVar22 = pfVar23;
      }
      FUN_18027f5b0(pfVar23,*pfVar22 * fVar41);
      FUN_1802bac60("##ug_txtclr",puVar39 + 7,0x400a0);
      local_278 = 1.5;
      local_268 = CONCAT44(local_268._4_4_,0x3f400000);
      pfVar23 = (float *)&local_268;
      if (fVar11 <= DAT_1803da6a4) {
        pfVar23 = &DAT_1803da6a4;
      }
      pfVar22 = &local_278;
      if (DAT_1803da6a4 <= fVar12) {
        pfVar22 = pfVar23;
      }
      FUN_18027f5b0(pfVar23,*pfVar22 * fVar40);
      FUN_1801cad50("ug_txt",puVar39 + 9,(longlong)puVar39 + 0x4c,8);
      if (*(char *)(lVar32 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar31 = *(longlong *)(lVar32 + 0xec0);
      *(undefined1 *)(*(longlong *)(lVar31 + 0x1520) + 0xce) = 1;
      if (*(char *)(*(longlong *)(lVar31 + 0x1520) + 0xd1) == '\0') {
        local_270 = (undefined *)0x0;
        FUN_18027f400(&local_270,uVar13);
      }
      FUN_1802aabb0(&DAT_1803dca28 + lVar29,"Applies to every player in this group.");
      pcVar26 = "Beats a Team profile color; a friend still wins.";
    }
    FUN_1802aabb0(&DAT_1803dca28 + lVar29,pcVar26);
    if (*(char *)(lVar32 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar29 = *(longlong *)(*(longlong *)(lVar32 + 0xec0) + 0x1520);
    iVar15 = *(int *)(lVar29 + 0x208);
    if (iVar15 < 1) {
      FUN_18027e9c0("Calling PopTextWrapPos() too many times!");
    }
    else {
      *(undefined4 *)(lVar29 + 0x1f0) =
           *(undefined4 *)(*(longlong *)(lVar29 + 0x210) + -4 + (longlong)iVar15 * 4);
      *(int *)(lVar29 + 0x208) = iVar15 + -1;
    }
    FUN_18027fda0();
    FUN_18020e450(local_198);
    FUN_18020d0b0(&local_220);
  }
  FUN_180273410();
  FUN_18026abb0(2);
  FUN_18026a890(2);
  return;
}


