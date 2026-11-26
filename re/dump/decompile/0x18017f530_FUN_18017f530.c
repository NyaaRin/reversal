// 0x18017f530  FUN_18017f530
// size=13056 thunk=false
// signature: undefined FUN_18017f530()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18017f530(undefined8 param_1,undefined8 param_2,float param_3)

{
  longlong *plVar1;
  uint *puVar2;
  undefined4 *puVar3;
  float fVar4;
  longlong lVar5;
  size_t _Size;
  undefined4 uVar6;
  char cVar7;
  char cVar8;
  undefined2 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  size_t sVar16;
  float *pfVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  uint uVar20;
  float *pfVar21;
  longlong lVar22;
  char *pcVar23;
  int *piVar24;
  void *_Buf1;
  ulonglong uVar25;
  longlong *plVar26;
  undefined **ppuVar27;
  longlong *plVar28;
  ulonglong uVar29;
  longlong lVar30;
  bool bVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auStack_398 [32];
  float *local_378;
  float *local_370;
  char *local_368;
  ulonglong local_360;
  undefined8 local_358;
  undefined4 local_348;
  float local_338;
  float local_334;
  float local_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  undefined4 uStack_318;
  float local_308;
  undefined8 local_300;
  char local_2f8;
  float local_2f4;
  undefined4 local_2f0;
  undefined4 local_2ec;
  float local_2e8;
  float local_2e4;
  float local_2e0;
  float local_2dc;
  undefined8 local_2d8;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  float local_2b8;
  float local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  float local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  char **local_288;
  float local_280;
  float local_27c;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  float local_260;
  float local_25c;
  float local_258 [2];
  char local_250 [8];
  float local_248;
  float local_244;
  longlong local_240;
  float *pfStack_238;
  float *local_230;
  int local_228 [2];
  char *local_220;
  undefined4 local_218 [4];
  undefined8 local_208;
  undefined8 uStack_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  float local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  float local_1cc;
  float local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [128];
  ulonglong local_e8;
  
  fVar36 = DAT_1803fa54c;
  fVar35 = DAT_180380bb0;
  fVar41 = DAT_180380980;
  local_e8 = DAT_1803da4c0 ^ (ulonglong)auStack_398;
  bVar31 = DAT_1803fa52d != '\0';
  if ((DAT_1803fa46c == '\0') || (DAT_1803fa54c <= DAT_180380980)) {
    _DAT_1803fe408 = 0.0;
    return;
  }
  local_278 = param_1;
  local_270 = param_2;
  if (bVar31) {
    _DAT_1803fe408 = 1.0;
  }
  else {
    if (param_3 <= 0.0) {
      fVar38 = 0.0;
    }
    else {
      fVar38 = expf(param_3 * _DAT_1803813f0);
      fVar38 = fVar35 - fVar38;
    }
    _DAT_1803fe408 = (fVar35 - _DAT_1803fe408) * fVar38 + _DAT_1803fe408;
    if (_DAT_1803fe408 < fVar41) {
      return;
    }
  }
  FUN_18017d630(&local_208);
  local_27c = 1.5;
  local_280 = 0.75;
  pfVar21 = &local_280;
  if (DAT_180380b20 <= DAT_1803da6a4) {
    pfVar21 = &DAT_1803da6a4;
  }
  pfVar17 = &local_27c;
  if (DAT_1803da6a4 <= DAT_180380c50) {
    pfVar17 = pfVar21;
  }
  fVar41 = *pfVar17;
  fVar38 = fVar41 * DAT_180380fd8;
  uVar25 = (ulonglong)_tls_index;
  lVar22 = DAT_1803fa5d0;
  local_308 = fVar41;
  if (DAT_1803fa5d0 == 0) {
    lVar22 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar25 * 8);
    if (*(char *)(lVar22 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar22 = *(longlong *)(*(longlong *)(lVar22 + 0xec0) + 0x1228);
  }
  FUN_18027a8a0(lVar22,fVar38);
  fVar32 = DAT_180380fa8;
  fVar34 = fVar41 * DAT_180380fa8;
  local_258[0] = fVar41 * DAT_180380e9c;
  local_2d8 = CONCAT44(local_258[0],fVar34);
  local_2a0 = fVar34;
  FUN_18026aad0(0xb,&local_2d8);
  local_2e8 = fVar41 * DAT_180380f40;
  local_2d8 = CONCAT44(local_2e8,fVar34);
  FUN_18026aad0(0xe,&local_2d8);
  fVar34 = DAT_180381208;
  fVar42 = local_278._4_4_;
  fVar39 = (float)local_278;
  if (bVar31) {
    if (DAT_1803fac7d == '\0') {
      DAT_1803db400 = fVar41 * DAT_18038109c + (float)local_278;
      DAT_1803db404 = fVar41 * DAT_180381080 + local_278._4_4_;
      pfVar21 = (float *)FUN_18017f420(&local_268,CONCAT44(DAT_1803db40c,DAT_1803db408));
      fVar40 = *pfVar21;
      DAT_1803db40c = pfVar21[1];
      DAT_1803fac7d = '\x01';
      fVar37 = DAT_1803db40c;
      DAT_1803db408 = fVar40;
    }
    else {
      pfVar21 = (float *)FUN_18017f420(&local_2c8,CONCAT44(DAT_1803db40c,DAT_1803db408));
      fVar40 = *pfVar21;
      DAT_1803db40c = pfVar21[1];
      fVar37 = DAT_1803db40c;
      DAT_1803db408 = fVar40;
    }
  }
  else {
    fVar40 = fVar41 * _DAT_1803811e4 + DAT_180381208;
    fVar37 = local_270._4_4_;
  }
  fVar38 = ((float)param_2 + fVar39 + fVar38) - (fVar35 - _DAT_1803fe408) * _DAT_180381090 * fVar41;
  local_228[0] = 0;
  local_218[0] = 0;
  if ((((!bVar31) && (DAT_1803fa668 != (longlong *)0x0)) &&
      ((**(code **)(*DAT_1803fa668 + 0x28))(DAT_1803fa668,local_228,local_218), 0 < local_228[0]))
     && ((float)(local_228[0] + -8) < fVar40 + fVar38)) {
    fVar38 = ((float)local_228[0] - fVar40) - fVar32;
  }
  lVar22 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar25 * 8);
  cVar7 = *(char *)(lVar22 + 0x10);
  if (cVar7 == '\0') {
    __dyn_tls_on_demand_init();
    cVar7 = *(char *)(lVar22 + 0x10);
  }
  lVar14 = 0xec0;
  local_2d8 = 0xec0;
  lVar30 = *(longlong *)(lVar22 + 0xec0);
  if ((*(char *)(lVar30 + 0x108) == '\0') || (!bVar31)) {
    DAT_1803ffc24 = '\0';
    _DAT_1804258e8 = 0;
    if (bVar31) goto LAB_18017f950;
    if (cVar7 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar15 = *(longlong *)(lVar22 + 0xec0);
    *(uint *)(lVar15 + 0x1f48) = *(uint *)(lVar15 + 0x1f48) | 1;
    *(float *)(lVar15 + 0x1f58) = fVar38;
    *(float *)(lVar15 + 0x1f5c) = fVar42;
    *(undefined8 *)(lVar15 + 0x1f60) = 0;
    *(undefined4 *)(lVar15 + 0x1f4c) = 1;
    if (*(char *)(lVar22 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar15 = *(longlong *)(lVar22 + 0xec0);
    *(uint *)(lVar15 + 0x1f48) = *(uint *)(lVar15 + 0x1f48) | 2;
    *(float *)(lVar15 + 0x1f68) = fVar40;
    *(float *)(lVar15 + 0x1f6c) = fVar37;
    *(undefined4 *)(lVar15 + 0x1f50) = 1;
  }
  else {
    if (DAT_1803ffc24 != '\0') {
      DAT_1803db404 = *(float *)(lVar30 + 0x104) - _DAT_1804258ec;
      DAT_1803db400 = *(float *)(lVar30 + 0x100) - _DAT_1804258e8;
    }
LAB_18017f950:
    if (cVar7 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar15 = *(longlong *)(lVar22 + 0xec0);
    *(uint *)(lVar15 + 0x1f48) = *(uint *)(lVar15 + 0x1f48) | 1;
    *(float *)(lVar15 + 0x1f58) = DAT_1803db400;
    *(float *)(lVar15 + 0x1f5c) = DAT_1803db404;
    *(undefined8 *)(lVar15 + 0x1f60) = 0;
    *(undefined4 *)(lVar15 + 0x1f4c) = 1;
    if (*(char *)(lVar22 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar15 = *(longlong *)(lVar22 + 0xec0);
    *(uint *)(lVar15 + 0x1f48) = *(uint *)(lVar15 + 0x1f48) | 2;
    *(float *)(lVar15 + 0x1f68) = DAT_1803db408;
    *(float *)(lVar15 + 0x1f6c) = DAT_1803db40c;
    *(undefined4 *)(lVar15 + 0x1f50) = 1;
    local_248 = fVar41 * _DAT_180381260 + fVar34;
    local_244 = fVar41 * DAT_18038126c;
    local_338 = fVar41 * DAT_180381188 + fVar34;
    local_334 = fVar41 * _DAT_180381220;
    FUN_180279900(&local_338,&local_248);
    fVar36 = fVar35;
  }
  FUN_18026a940(0,fVar36 * _DAT_1803fe408);
  local_248 = fVar41 * DAT_180380fcc;
  FUN_18026a940(3,local_248);
  local_338 = 1.0;
  local_334 = 1.0;
  FUN_18026aad0(2,&local_338);
  if (*(char *)(lVar22 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar15 = *(longlong *)(lVar22 + 0xec0);
  local_328 = 2.8026e-45;
  fStack_324 = (float)*(undefined8 *)(lVar15 + 0xdd0);
  fStack_320 = (float)((ulonglong)*(undefined8 *)(lVar15 + 0xdd0) >> 0x20);
  fStack_31c = (float)*(undefined8 *)(lVar15 + 0xdd8);
  uStack_318 = (undefined4)((ulonglong)*(undefined8 *)(lVar15 + 0xdd8) >> 0x20);
  FUN_18028a220(lVar15 + 0x1fc8,&local_328);
  if (*(int *)(lVar15 + 0x1fc4) != 2) {
    *(undefined8 *)(lVar15 + 0xdd0) = local_208;
    *(undefined8 *)(lVar15 + 0xdd8) = uStack_200;
  }
  if (*(char *)(lVar22 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar15 = *(longlong *)(lVar22 + 0xec0);
  local_328 = 7.00649e-45;
  fStack_324 = (float)*(undefined8 *)(lVar15 + 0xe00);
  fStack_320 = (float)((ulonglong)*(undefined8 *)(lVar15 + 0xe00) >> 0x20);
  fStack_31c = (float)*(undefined8 *)(lVar15 + 0xe08);
  uStack_318 = (undefined4)((ulonglong)*(undefined8 *)(lVar15 + 0xe08) >> 0x20);
  FUN_18028a220(lVar15 + 0x1fc8,&local_328);
  local_2dc = local_1cc;
  local_2ec = local_1d0;
  local_2f0 = local_1d4;
  local_2f4 = local_1d8;
  if (*(int *)(lVar15 + 0x1fc4) != 5) {
    *(float *)(lVar15 + 0xe00) = local_1d8;
    *(undefined4 *)(lVar15 + 0xe04) = local_1d4;
    *(undefined4 *)(lVar15 + 0xe08) = local_1d0;
    *(float *)(lVar15 + 0xe0c) = local_1cc;
  }
  pcVar23 = "ESP Editor##Sidecar";
  if (bVar31) {
    pcVar23 = "ESP Editor##Detached";
  }
  cVar7 = FUN_180276630(pcVar23,0,(uint)!bVar31 * 2 + 0x125);
  if (cVar7 != '\0') {
    if (*(char *)(lVar22 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar15 = *(longlong *)(*(longlong *)(lVar22 + 0xec0) + 0x1520);
    local_2e4 = *(float *)(lVar15 + 0x30);
    fVar35 = *(float *)(lVar15 + 0x34);
    local_2b4 = fVar35;
    if (*(char *)(lVar22 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar15 = *(longlong *)(lVar22 + 0xec0);
    *(undefined1 *)(*(longlong *)(lVar15 + 0x1520) + 0xce) = 1;
    uVar19 = *(undefined8 *)(*(longlong *)(lVar15 + 0x1520) + 0x2c8);
    if (*(char *)(lVar22 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    fVar32 = local_308;
    lVar15 = *(longlong *)(lVar22 + 0xec0);
    *(undefined1 *)(*(longlong *)(lVar15 + 0x1520) + 0xce) = 1;
    lVar15 = *(longlong *)(lVar15 + 0x1520);
    fVar36 = *(float *)(lVar15 + 0x2c);
    fVar38 = *(float *)(lVar15 + 0x28);
    fVar39 = fVar38 + *(float *)(lVar15 + 0x30);
    fVar42 = fVar41 * DAT_180380fe0;
    local_288 = (char **)CONCAT44(local_288._4_4_,fVar42);
    fVar41 = fVar41 * _DAT_1803810d8;
    fVar40 = local_308 * _DAT_1803810b0;
    local_2b8 = fVar41;
    if (DAT_1803ffc24 == '\0') {
      if (bVar31) {
        if (((((*(char *)(lVar30 + 0xb30) != '\0') && (cVar7 = FUN_180279410(3), cVar7 != '\0')) &&
             ((fVar37 = *(float *)(lVar30 + 0xae0), fVar32 = local_308, fVar38 <= fVar37 &&
              (((fVar4 = *(float *)(lVar30 + 0xae4), fVar36 <= fVar4 && (fVar37 < fVar39)) &&
               (fVar33 = fVar40 + fVar36, fVar4 < fVar33)))))) &&
            (((fVar37 < fVar39 - local_308 * DAT_1803811d4 || (fVar4 < fVar36)) || (fVar33 <= fVar4)
             ))) && (((fVar37 < fVar42 + fVar38 || (fVar4 < fVar41 + fVar36)) ||
                     ((fVar42 + fVar34 + fVar38 <= fVar37 || ((fVar35 - fVar42) + fVar36 <= fVar4)))
                     ))) {
          DAT_1803ffc24 = '\x01';
          if (*(char *)(lVar22 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar30 = *(longlong *)(*(longlong *)(lVar22 + 0xec0) + 0x1520);
          _DAT_1804258e8 =
               CONCAT44(fVar4 - *(float *)(lVar30 + 0x2c),fVar37 - *(float *)(lVar30 + 0x28));
          if (*(char *)(lVar22 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          FUN_1802827b0(*(undefined8 *)(*(longlong *)(lVar22 + 0xec0) + 0x1520),0);
          fVar32 = local_308;
        }
        goto LAB_18017fe07;
      }
LAB_18018007e:
      cVar7 = FUN_180279410(0xb);
      if ((cVar7 != '\0') && (*(char *)(lVar30 + 0xb30) != '\0')) {
        lVar30 = FUN_180273780("catsuper##Main");
        if (lVar30 != 0) {
          FUN_1802827b0(lVar30,0);
        }
        lVar30 = FUN_180273780("ESP Editor##Sidecar");
        if (lVar30 != 0) {
          FUN_1802827b0(lVar30,0);
        }
      }
      if (bVar31) goto LAB_18017fe07;
    }
    else {
      if (!bVar31) goto LAB_18018007e;
LAB_18017fe07:
      if (*(char *)(lVar22 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar30 = *(longlong *)(*(longlong *)(lVar22 + 0xec0) + 0x1520);
      DAT_1803db400 = *(float *)(lVar30 + 0x28);
      DAT_1803db404 = *(float *)(lVar30 + 0x2c);
      if (*(char *)(lVar22 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      pfVar21 = (float *)FUN_18017f420(&local_268,
                                       *(undefined8 *)
                                        (*(longlong *)(*(longlong *)(lVar22 + 0xec0) + 0x1520) +
                                        0x30));
      DAT_1803db408 = *pfVar21;
      DAT_1803db40c = pfVar21[1];
    }
    fVar41 = DAT_180380bb0;
    local_2b0 = local_1f8;
    local_2ac = local_1f4;
    local_2a8 = local_1f0;
    local_2a4 = local_1ec;
    fVar40 = fVar40 + fVar36;
    local_338 = fVar39 - DAT_180380bb0;
    local_300 = (undefined **)CONCAT44(fVar36 + DAT_180380bb0,fVar38 + DAT_180380bb0);
    fVar35 = fVar32 * DAT_180380fc4;
    local_334 = fVar40;
    uVar10 = FUN_180268ed0(&local_298);
    local_370 = (float *)CONCAT44(local_370._4_4_,0x30);
    local_378._0_4_ = fVar35;
    FUN_180295000(uVar19,&local_300,&local_338,uVar10);
    local_298 = CONCAT44(local_2f0,local_2f4);
    uStack_290 = CONCAT44(local_2dc,local_2ec);
    local_338 = fVar39;
    local_334 = fVar40;
    local_300._0_4_ = fVar38;
    local_300._4_4_ = fVar40;
    uVar10 = FUN_180268ed0(&local_298);
    local_378 = (float *)CONCAT44(local_378._4_4_,fVar41);
    FUN_180294c90(uVar19,&local_300,&local_338,uVar10);
    fVar38 = fVar32 * DAT_180380fe8;
    local_300 = (undefined **)CONCAT44(local_300._4_4_,fVar38);
    local_338 = fVar38;
    local_334 = fVar42;
    FUN_18027f6a0(&local_338);
    FUN_1802aabb0(local_188,"ESP EDITOR");
    local_334 = fVar32 * DAT_180381070;
    local_338 = fVar38;
    FUN_18027f6a0(&local_338);
    fVar36 = local_2e4;
    uVar10 = DAT_180381308;
    fVar35 = DAT_180381038;
    fVar41 = DAT_180380ba8;
    fVar39 = local_2e4 - fVar32 * _DAT_1803811c0;
    fVar32 = fVar32 * DAT_180381038;
    ppuVar27 = &PTR_s_Drag_to_snap_zones__Drag_again_i_180338dd0;
    do {
      pfVar21 = (float *)*ppuVar27;
      if (*(char *)(lVar22 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      if (pfVar21 == (float *)0x0) {
        fVar40 = 0.0;
      }
      else {
        local_348 = 0;
        local_358 = 0;
        local_360 = 0;
        local_368 = (char *)0x0;
        local_378 = (float *)CONCAT44(local_378._4_4_,DAT_180381384);
        local_370 = pfVar21;
        FUN_18029e350(&local_338,*(undefined8 *)(*(longlong *)(lVar22 + 0xec0) + 0x1228),
                      *(undefined4 *)(*(longlong *)(lVar22 + 0xec0) + 0x1238),uVar10);
        fVar40 = (float)(int)(local_338 + fVar41);
        local_338 = fVar40;
      }
      if (fVar40 <= fVar39 - fVar32) {
        FUN_1802aabb0(local_178,&DAT_1803431ac,pfVar21);
        break;
      }
      ppuVar27 = ppuVar27 + 1;
    } while (ppuVar27 != &std::_Node_end_rep::vftable_meta_ptr);
    fVar41 = local_308;
    local_334 = local_308 * DAT_180381004;
    local_338 = fVar39;
    FUN_18027f6a0(&local_338);
    FUN_1801a0b60("Minimal##esp_editor_minimal",&DAT_1803da697);
    fVar39 = fVar41 * _DAT_180381168;
    local_2e4 = fVar36 - fVar39;
    local_2e0 = fVar41 * DAT_180380fdc;
    local_338 = fVar39;
    FUN_18027f6a0(&local_2e4);
    fVar32 = local_2b8;
    local_328 = local_1c8;
    fStack_324 = (float)uStack_1c4;
    fStack_320 = (float)uStack_1c0;
    fStack_31c = (float)uStack_1bc;
    local_2e4 = local_2b8;
    local_2e0 = 28.0;
    pcVar23 = "Detach##dock_esp_editor";
    if (bVar31) {
      pcVar23 = "Dock##dock_esp_editor";
    }
    cVar7 = FUN_18017d810(pcVar23,&local_2e4,&local_328,0);
    FUN_18027f5b0();
    local_298 = local_198;
    uStack_290 = uStack_190;
    local_328 = (float)local_198;
    fStack_324 = (float)((ulonglong)local_198 >> 0x20);
    fStack_320 = (float)uStack_190;
    fStack_31c = (float)((ulonglong)uStack_190 >> 0x20);
    local_2e4 = fVar41 * DAT_1803810c8;
    local_2e0 = 28.0;
    cVar8 = FUN_18017d810("Close##close_esp_editor",&local_2e4,&local_328,0);
    if (cVar7 != '\0') {
      if (!bVar31) {
        if (*(char *)(lVar22 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        uVar19 = *(undefined8 *)(*(longlong *)(*(longlong *)(lVar22 + 0xec0) + 0x1520) + 0x30);
        if (*(char *)(lVar22 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar30 = *(longlong *)(*(longlong *)(lVar22 + 0xec0) + 0x1520);
        DAT_1803db400 = *(float *)(lVar30 + 0x28);
        DAT_1803db404 = *(float *)(lVar30 + 0x2c);
        pfVar21 = (float *)FUN_18017f420(&local_268,uVar19);
        DAT_1803db408 = *pfVar21;
        DAT_1803db40c = pfVar21[1];
        DAT_1803fac7d = '\x01';
        fVar32 = local_2b8;
      }
      DAT_1803fa52d = !bVar31;
      FUN_180209ce0(&DAT_1803fa860);
      DAT_1803fac7f = 0;
    }
    if (cVar8 == '\0') {
      if (cVar7 == '\0') {
        fVar40 = (local_2b4 - fVar32) - fVar42;
        fVar34 = ((fVar36 - (fVar42 + fVar42)) - fVar42) - fVar34;
        local_2c8 = CONCAT44(fVar32,fVar42);
        local_2e4 = fVar34;
        local_2b4 = fVar40;
        FUN_18027f6a0(&local_2c8);
        if (*(char *)(lVar22 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar30 = *(longlong *)(lVar22 + 0xec0);
        local_328 = 4.2039e-45;
        fStack_324 = (float)*(undefined8 *)(lVar30 + 0xde0);
        fStack_320 = (float)((ulonglong)*(undefined8 *)(lVar30 + 0xde0) >> 0x20);
        fStack_31c = (float)*(undefined8 *)(lVar30 + 0xde8);
        uStack_318 = (undefined4)((ulonglong)*(undefined8 *)(lVar30 + 0xde8) >> 0x20);
        FUN_18028a220(lVar30 + 0x1fc8,&local_328);
        if (*(int *)(lVar30 + 0x1fc4) != 3) {
          *(undefined4 *)(lVar30 + 0xde0) = local_2b0;
          *(undefined4 *)(lVar30 + 0xde4) = local_2ac;
          *(undefined4 *)(lVar30 + 0xde8) = local_2a8;
          *(undefined4 *)(lVar30 + 0xdec) = local_2a4;
        }
        if (*(char *)(lVar22 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar30 = *(longlong *)(lVar22 + 0xec0);
        local_328 = 7.00649e-45;
        fStack_324 = (float)*(undefined8 *)(lVar30 + 0xe00);
        fStack_320 = (float)((ulonglong)*(undefined8 *)(lVar30 + 0xe00) >> 0x20);
        fStack_31c = (float)*(undefined8 *)(lVar30 + 0xe08);
        uStack_318 = (undefined4)((ulonglong)*(undefined8 *)(lVar30 + 0xe08) >> 0x20);
        FUN_18028a220(lVar30 + 0x1fc8,&local_328);
        fVar36 = local_2dc;
        if (*(int *)(lVar30 + 0x1fc4) != 5) {
          *(float *)(lVar30 + 0xe00) = local_2f4;
          *(undefined4 *)(lVar30 + 0xe04) = local_2f0;
          *(undefined4 *)(lVar30 + 0xe08) = local_2ec;
          *(float *)(lVar30 + 0xe0c) = local_2dc;
        }
        local_2c8 = 0x4160000041800000;
        FUN_18026aad0(2,&local_2c8);
        local_2c8 = CONCAT44(fVar40,0x43aa0000);
        cVar7 = FUN_180272fa0("##esp_canvas_shell",&local_2c8,1,8);
        if (cVar7 != '\0') {
          lVar30 = DAT_1803fa5d0;
          if (DAT_1803fa5d0 == 0) {
            if (*(char *)(lVar22 + 0x10) == '\0') {
              __dyn_tls_on_demand_init();
            }
            lVar30 = *(longlong *)(*(longlong *)(lVar22 + 0xec0) + 0x1228);
          }
          FUN_18027a8a0(lVar30,DAT_180380fd8);
          if (*(char *)(lVar22 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar30 = *(longlong *)(lVar22 + 0xec0);
          *(undefined1 *)(*(longlong *)(lVar30 + 0x1520) + 0xce) = 1;
          uVar19 = *(undefined8 *)(*(longlong *)(lVar30 + 0x1520) + 0x2c8);
          if (*(char *)(lVar22 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar30 = *(longlong *)(lVar22 + 0xec0);
          *(undefined1 *)(*(longlong *)(lVar30 + 0x1520) + 0xce) = 1;
          lVar30 = *(longlong *)(lVar30 + 0x1520);
          fVar41 = *(float *)(lVar30 + 0x2c);
          fVar40 = fVar41 + *(float *)(lVar30 + 0x34);
          fVar38 = *(float *)(lVar30 + 0x28);
          local_268 = *(longlong *)(lVar30 + 0x28);
          fVar37 = fVar38 + *(float *)(lVar30 + 0x30);
          local_2c8 = local_1e8;
          uStack_2c0 = uStack_1e0;
          local_2dc = fVar38;
          local_260 = fVar37;
          local_25c = fVar40;
          uVar10 = FUN_180268ed0(&local_2c8);
          local_370 = (float *)((ulonglong)local_370 & 0xffffffff00000000);
          local_378 = (float *)CONCAT44(local_378._4_4_,DAT_180380f90);
          FUN_180295000(uVar19,&local_268,&local_260,uVar10);
          fVar39 = fmodf((float)((uint)fVar38 ^ DAT_1803817f0),fVar35);
          uVar6 = local_2ec;
          uVar10 = local_2f0;
          fVar34 = local_2f4;
          fVar32 = DAT_180380a68;
          fVar39 = fVar39 + fVar38;
          if (fVar39 < fVar37) {
            do {
              local_328 = fVar34;
              fStack_324 = (float)uVar10;
              fStack_320 = (float)uVar6;
              fStack_31c = fVar36 * fVar32;
              local_2c8 = CONCAT44(fVar40,fVar39);
              local_268 = CONCAT44(fVar41,fVar39);
              uVar11 = FUN_180268ed0(&local_328);
              local_378 = (float *)CONCAT44(local_378._4_4_,DAT_180380bb0);
              FUN_180294c90(uVar19,&local_268,&local_2c8,uVar11);
              fVar39 = fVar39 + fVar35;
            } while (fVar39 < fVar37);
            fVar38 = local_2dc;
            fVar42 = local_288._0_4_;
          }
          fVar34 = fmodf((float)((uint)fVar41 ^ DAT_1803817f0),fVar35);
          uVar6 = local_2ec;
          uVar10 = local_2f0;
          fVar34 = fVar34 + fVar41;
          if (fVar34 < fVar40) {
            do {
              local_328 = local_2f4;
              fStack_324 = (float)uVar10;
              fStack_320 = (float)uVar6;
              fStack_31c = fVar36 * fVar32;
              local_268 = CONCAT44(fVar34,fVar37);
              local_2c8 = CONCAT44(fVar34,fVar38);
              uVar11 = FUN_180268ed0(&local_328);
              local_378 = (float *)CONCAT44(local_378._4_4_,DAT_180380bb0);
              FUN_180294c90(uVar19,&local_2c8,&local_268,uVar11);
              fVar34 = fVar34 + fVar35;
            } while (fVar34 < fVar40);
            fVar42 = local_288._0_4_;
          }
          FUN_18017ac80();
          if (*(char *)(lVar22 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar30 = *(longlong *)(lVar22 + 0xec0);
          lVar15 = (longlong)*(int *)(lVar30 + 0x1fe8);
          if (*(int *)(lVar30 + 0x1fe8) < 1) {
            FUN_18027e9c0("Calling PopFont() too many times!");
          }
          else {
            lVar5 = *(longlong *)(lVar30 + 0x1ff0);
            FUN_18027a5f0(*(undefined8 *)(lVar5 + -0x10 + lVar15 * 0x10),
                          *(undefined4 *)(lVar5 + -8 + lVar15 * 0x10),
                          *(undefined4 *)(lVar5 + -4 + lVar15 * 0x10));
            *(int *)(lVar30 + 0x1fe8) = *(int *)(lVar30 + 0x1fe8) + -1;
          }
          fVar32 = local_2b8;
          fVar39 = local_338;
          fVar41 = local_308;
          fVar34 = local_2e4;
          fVar38 = (float)local_300;
          fVar40 = local_2b4;
        }
        FUN_180273410();
        FUN_18026abb0(1);
        FUN_18026a890(2);
        FUN_18027f5b0();
        if (*(char *)(lVar22 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar30 = *(longlong *)(lVar22 + 0xec0);
        *(undefined1 *)(*(longlong *)(lVar30 + 0x1520) + 0xce) = 1;
        lVar30 = *(longlong *)(lVar30 + 0x1520);
        *(float *)(lVar30 + 0x11c) =
             (*(float *)(lVar30 + 0x2c) - *(float *)(lVar30 + 0x9c)) + fVar32;
        *(undefined1 *)(lVar30 + 0x159) = 1;
        if (*(char *)(lVar22 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar30 = *(longlong *)(lVar22 + 0xec0);
        local_328 = 4.2039e-45;
        fStack_324 = (float)*(undefined8 *)(lVar30 + 0xde0);
        fStack_320 = (float)((ulonglong)*(undefined8 *)(lVar30 + 0xde0) >> 0x20);
        fStack_31c = (float)*(undefined8 *)(lVar30 + 0xde8);
        uStack_318 = (undefined4)((ulonglong)*(undefined8 *)(lVar30 + 0xde8) >> 0x20);
        FUN_18028a220(lVar30 + 0x1fc8,&local_328);
        if (*(int *)(lVar30 + 0x1fc4) != 3) {
          *(undefined4 *)(lVar30 + 0xde0) = local_2b0;
          *(undefined4 *)(lVar30 + 0xde4) = local_2ac;
          *(undefined4 *)(lVar30 + 0xde8) = local_2a8;
          *(undefined4 *)(lVar30 + 0xdec) = local_2a4;
        }
        if (*(char *)(lVar22 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar30 = *(longlong *)(lVar22 + 0xec0);
        local_328 = 7.00649e-45;
        fStack_324 = (float)*(undefined8 *)(lVar30 + 0xe00);
        fStack_320 = (float)((ulonglong)*(undefined8 *)(lVar30 + 0xe00) >> 0x20);
        fStack_31c = (float)*(undefined8 *)(lVar30 + 0xe08);
        uStack_318 = (undefined4)((ulonglong)*(undefined8 *)(lVar30 + 0xe08) >> 0x20);
        FUN_18028a220(lVar30 + 0x1fc8,&local_328);
        uVar10 = local_2ec;
        if (*(int *)(lVar30 + 0x1fc4) != 5) {
          *(float *)(lVar30 + 0xe00) = local_2f4;
          *(undefined4 *)(lVar30 + 0xe04) = local_2f0;
          *(undefined4 *)(lVar30 + 0xe08) = local_2ec;
          *(float *)(lVar30 + 0xe0c) = fVar36;
        }
        local_268 = CONCAT44(fVar42,fVar38);
        FUN_18026aad0(2,&local_268);
        local_268 = CONCAT44(fVar40,fVar34);
        cVar7 = FUN_180272fa0("##esp_inspector",&local_268,1,0);
        if (cVar7 != '\0') {
          FUN_18017dac0("Add element");
          fVar35 = DAT_180380ac0;
          if (DAT_1803da697 == '\0') {
            if (*(char *)(lVar22 + 0x10) == '\0') {
              __dyn_tls_on_demand_init();
            }
            fVar38 = local_2a0;
            lVar30 = *(longlong *)(*(longlong *)(lVar22 + 0xec0) + 0x1520);
            if ((*(longlong *)(lVar30 + 0x1c8) != 0) ||
               (pfVar21 = (float *)(lVar30 + 0x280),
               *(longlong *)(*(longlong *)(lVar22 + 0xec0) + 0x2368) != 0)) {
              pfVar21 = (float *)(lVar30 + 0x250);
            }
            local_268 = CONCAT44(0x41e00000,
                                 ((*pfVar21 - *(float *)(lVar30 + 0x118)) - local_2a0) * fVar35);
            cVar7 = FUN_18017d810("+ ESP Box",&local_268,&local_328,1);
            if (cVar7 != '\0') {
              FUN_18017a2c0();
              DAT_1803fa5f8 = (longlong *)FUN_1802074f0();
            }
            FUN_18027f5b0();
            local_268 = 0x41e00000bf800000;
            cVar7 = FUN_18017d810("+ Text",&local_268,&local_328,1);
            if (cVar7 != '\0') {
              FUN_18017a2c0();
              DAT_1803fa5f8 = (longlong *)FUN_180207a60();
            }
            if (*(char *)(lVar22 + 0x10) == '\0') {
              __dyn_tls_on_demand_init();
            }
            lVar30 = *(longlong *)(*(longlong *)(lVar22 + 0xec0) + 0x1520);
            if ((*(longlong *)(lVar30 + 0x1c8) != 0) ||
               (pfVar21 = (float *)(lVar30 + 0x280),
               *(longlong *)(*(longlong *)(lVar22 + 0xec0) + 0x2368) != 0)) {
              pfVar21 = (float *)(lVar30 + 0x250);
            }
            local_268 = CONCAT44(0x41e00000,
                                 ((*pfVar21 - *(float *)(lVar30 + 0x118)) - fVar38) * fVar35);
            cVar7 = FUN_18017d810("+ Circle",&local_268,&local_328,0);
            if (cVar7 != '\0') {
              FUN_18017a2c0();
              DAT_1803fa5f8 = (longlong *)FUN_180207940();
            }
            FUN_18027f5b0();
            local_268 = 0x41e00000bf800000;
            cVar7 = FUN_18017d810("+ Dynamic",&local_268,&local_328,0);
            if (cVar7 != '\0') {
              FUN_18017a2c0();
              DAT_1803fa5f8 = (longlong *)FUN_180207580();
            }
            local_328 = (float)local_1b8;
            fVar32 = local_328;
            fStack_324 = (float)((ulonglong)local_1b8 >> 0x20);
            fVar34 = fStack_324;
            fStack_320 = (float)uStack_1b0;
            fVar42 = fStack_320;
            fStack_31c = (float)((ulonglong)uStack_1b0 >> 0x20);
            fVar40 = fStack_31c;
            if (*(char *)(lVar22 + 0x10) == '\0') {
              __dyn_tls_on_demand_init();
            }
            lVar30 = *(longlong *)(*(longlong *)(lVar22 + 0xec0) + 0x1520);
            if ((*(longlong *)(lVar30 + 0x1c8) != 0) ||
               (pfVar21 = (float *)(lVar30 + 0x280),
               *(longlong *)(*(longlong *)(lVar22 + 0xec0) + 0x2368) != 0)) {
              pfVar21 = (float *)(lVar30 + 0x250);
            }
            local_268 = CONCAT44(0x41e00000,
                                 ((*pfVar21 - *(float *)(lVar30 + 0x118)) - fVar38) * fVar35);
            cVar7 = FUN_18017d810("+ HP Bar",&local_268,&local_328,0);
            if (cVar7 != '\0') {
              FUN_18017a2c0();
              DAT_1803fa5f8 = (longlong *)FUN_180207610();
            }
            FUN_18027f5b0();
            local_268 = 0x41e00000bf800000;
            local_328 = fVar32;
            fStack_324 = fVar34;
            fStack_320 = fVar42;
            fStack_31c = fVar40;
            cVar7 = FUN_18017d810("+ Armor Bar",&local_268,&local_328,0);
            fVar34 = DAT_180380fa8;
            fVar32 = local_2e8;
            if (cVar7 != '\0') {
              FUN_18017a2c0();
              DAT_1803fa5f8 = (longlong *)FUN_1802079d0();
              fVar34 = DAT_180380fa8;
              fVar32 = local_2e8;
            }
          }
          else {
            local_268 = 0x41f00000bf800000;
            cVar7 = FUN_18017d810("+ Add element",&local_268,&local_328,1);
            if (cVar7 != '\0') {
              FUN_180280fd0("##esp_add_menu");
            }
            if (*(char *)(lVar22 + 0x10) == '\0') {
              __dyn_tls_on_demand_init();
            }
            lVar30 = *(longlong *)(lVar22 + 0xec0);
            local_328 = 5.60519e-45;
            fStack_324 = (float)*(undefined8 *)(lVar30 + 0xdf0);
            fStack_320 = (float)((ulonglong)*(undefined8 *)(lVar30 + 0xdf0) >> 0x20);
            fStack_31c = (float)*(undefined8 *)(lVar30 + 0xdf8);
            uStack_318 = (undefined4)((ulonglong)*(undefined8 *)(lVar30 + 0xdf8) >> 0x20);
            FUN_18028a220(lVar30 + 0x1fc8,&local_328);
            if (*(int *)(lVar30 + 0x1fc4) != 4) {
              *(undefined4 *)(lVar30 + 0xdf0) = local_2b0;
              *(undefined4 *)(lVar30 + 0xdf4) = local_2ac;
              *(undefined4 *)(lVar30 + 0xdf8) = local_2a8;
              *(undefined4 *)(lVar30 + 0xdfc) = local_2a4;
            }
            if (*(char *)(lVar22 + 0x10) == '\0') {
              __dyn_tls_on_demand_init();
            }
            lVar30 = *(longlong *)(lVar22 + 0xec0);
            local_328 = 7.00649e-45;
            fStack_324 = (float)*(undefined8 *)(lVar30 + 0xe00);
            fStack_320 = (float)((ulonglong)*(undefined8 *)(lVar30 + 0xe00) >> 0x20);
            fStack_31c = (float)*(undefined8 *)(lVar30 + 0xe08);
            uStack_318 = (undefined4)((ulonglong)*(undefined8 *)(lVar30 + 0xe08) >> 0x20);
            FUN_18028a220(lVar30 + 0x1fc8,&local_328);
            fVar38 = local_2a0;
            if (*(int *)(lVar30 + 0x1fc4) != 5) {
              *(float *)(lVar30 + 0xe00) = local_2f4;
              *(undefined4 *)(lVar30 + 0xe04) = local_2f0;
              *(undefined4 *)(lVar30 + 0xe08) = uVar10;
              *(float *)(lVar30 + 0xe0c) = fVar36;
            }
            local_268 = CONCAT44(local_2a0,local_2a0);
            FUN_18026aad0(2,&local_268);
            fVar32 = local_2e8;
            local_268 = CONCAT44(local_2e8,local_2e8);
            FUN_18026aad0(0xe,&local_268);
            fVar34 = DAT_180380fa8;
            FUN_18026a940(9);
            cVar7 = FUN_180281720("##esp_add_menu",0);
            if (cVar7 != '\0') {
              local_338 = fVar41 * DAT_180381190;
              local_334 = 26.0;
              cVar7 = FUN_18017d810("ESP Box##add",&local_338,&local_328,0);
              if (cVar7 != '\0') {
                FUN_18017a2c0();
                DAT_1803fa5f8 = (longlong *)FUN_1802074f0();
                FUN_180281560();
              }
              cVar7 = FUN_18017d810("Text##add",&local_338,&local_328,0);
              if (cVar7 != '\0') {
                FUN_18017a2c0();
                DAT_1803fa5f8 = (longlong *)FUN_180207a60();
                FUN_180281560();
              }
              cVar7 = FUN_18017d810("Dynamic Text##add",&local_338,&local_328,0);
              if (cVar7 != '\0') {
                FUN_18017a2c0();
                DAT_1803fa5f8 = (longlong *)FUN_180207580();
                FUN_180281560();
              }
              cVar7 = FUN_18017d810("Circle##add",&local_338,&local_328,0);
              if (cVar7 != '\0') {
                FUN_18017a2c0();
                DAT_1803fa5f8 = (longlong *)FUN_180207940();
                FUN_180281560();
              }
              local_328 = (float)local_1b8;
              fVar42 = local_328;
              fStack_324 = (float)((ulonglong)local_1b8 >> 0x20);
              fVar40 = fStack_324;
              fStack_320 = (float)uStack_1b0;
              fVar37 = fStack_320;
              fStack_31c = (float)((ulonglong)uStack_1b0 >> 0x20);
              fVar4 = fStack_31c;
              cVar7 = FUN_18017d810("HP Bar##add",&local_338,&local_328,0);
              if (cVar7 != '\0') {
                FUN_18017a2c0();
                DAT_1803fa5f8 = (longlong *)FUN_180207610();
                FUN_180281560();
              }
              local_328 = fVar42;
              fStack_324 = fVar40;
              fStack_320 = fVar37;
              fStack_31c = fVar4;
              cVar7 = FUN_18017d810("Armor Bar##add",&local_338,&local_328,0);
              if (cVar7 != '\0') {
                FUN_18017a2c0();
                DAT_1803fa5f8 = (longlong *)FUN_1802079d0();
                FUN_180281560();
              }
              FUN_180281800();
            }
            FUN_18026abb0(3);
            FUN_18026a890(2);
          }
          local_268 = (ulonglong)(uint)fVar32 << 0x20;
          if (DAT_1803da697 != '\0') {
            FUN_1802af260(&local_268);
            FUN_18017dac0("Quick elements");
            local_250[0] = '\0';
            local_220 = local_250;
            if (*(char *)(lVar22 + 0x10) == '\0') {
              __dyn_tls_on_demand_init();
            }
            plVar26 = DAT_1803fb108;
            lVar30 = *(longlong *)(*(longlong *)(lVar22 + 0xec0) + 0x1520);
            if ((*(longlong *)(lVar30 + 0x1c8) != 0) ||
               (pfVar21 = (float *)(lVar30 + 0x280),
               *(longlong *)(*(longlong *)(lVar22 + 0xec0) + 0x2368) != 0)) {
              pfVar21 = (float *)(lVar30 + 0x250);
            }
            fVar32 = ((*pfVar21 - *(float *)(lVar30 + 0x118)) - fVar38) * fVar35;
            bVar31 = fVar41 * DAT_180381118 <= fVar32;
            local_2f8 = bVar31;
            for (plVar28 = DAT_1803fb100; plVar28 != plVar26; plVar28 = plVar28 + 1) {
              iVar12 = (**(code **)(*(longlong *)*plVar28 + 8))();
              if (iVar12 == 3) {
                lVar30 = *plVar28;
                goto LAB_180181079;
              }
            }
            lVar30 = 0;
LAB_180181079:
            fVar42 = DAT_180381384;
            fVar39 = DAT_180381384;
            if (bVar31) {
              fVar39 = fVar32;
            }
            local_378 = (float *)CONCAT71(local_378._1_7_,lVar30 != 0);
            uVar9 = FUN_18017ddb0("##chip_bbox","ESP Box",lVar30 != 0,fVar39);
            if ((char)uVar9 == '\0') {
              if (((char)((ushort)uVar9 >> 8) != '\0') && (lVar30 != 0)) {
                *local_220 = '\x01';
                DAT_1803fb0f0 = lVar30;
              }
            }
            else {
              FUN_18017a2c0();
              if (lVar30 == 0) {
                DAT_1803fa5f8 = (longlong *)FUN_1802074f0();
              }
              else {
                FUN_18017dca0(lVar30);
              }
            }
            plVar26 = DAT_1803fb100;
            plVar28 = DAT_1803fb108;
            if (bVar31) {
              FUN_18027f5b0();
              plVar26 = DAT_1803fb100;
              plVar28 = DAT_1803fb108;
            }
            for (; plVar1 = DAT_1803fb108, plVar26 != DAT_1803fb108; plVar26 = plVar26 + 1) {
              DAT_1803fb108 = plVar28;
              iVar12 = (**(code **)(*(longlong *)*plVar26 + 8))();
              if (iVar12 == 4) {
                lVar30 = *plVar26;
                goto LAB_180181139;
              }
              plVar28 = DAT_1803fb108;
              DAT_1803fb108 = plVar1;
            }
            lVar30 = 0;
            DAT_1803fb108 = plVar28;
LAB_180181139:
            local_378 = (float *)CONCAT71(local_378._1_7_,lVar30 != 0);
            uVar9 = FUN_18017ddb0("##chip_hpbar","HP Bar",lVar30 != 0,fVar42);
            if ((char)uVar9 == '\0') {
              if (((char)((ushort)uVar9 >> 8) != '\0') && (lVar30 != 0)) {
                *local_220 = '\x01';
                DAT_1803fb0f0 = lVar30;
              }
            }
            else {
              FUN_18017a2c0();
              if (lVar30 == 0) {
                DAT_1803fa5f8 = (longlong *)FUN_180207610();
                *(undefined4 *)(DAT_1803fa5f8 + 1) = 2;
                *(undefined1 *)(DAT_1803fa5f8 + 0xe) = 1;
              }
              else {
                FUN_18017dca0(lVar30);
              }
            }
            plVar28 = DAT_1803fb108;
            local_288 = &local_220;
            plVar26 = DAT_1803fb100;
            if ((DAT_180426244 & 1) == 0) {
              DAT_180426244 = DAT_180426244 | 1;
              uVar25 = 0;
              iVar12 = (int)(DAT_1803fa810 - DAT_1803fa808 >> 5);
              if (0 < iVar12) {
                do {
                  DAT_1805c7bc8 = (float)uVar25;
                  piVar24 = (int *)(uVar25 * 0x20 + DAT_1803fa808);
                  plVar1 = (longlong *)(piVar24 + 4);
                  if (0xf < *(ulonglong *)(piVar24 + 6)) {
                    piVar24 = *(int **)piVar24;
                  }
                  if ((((*plVar1 == 7) && (*piVar24 == 0x6f6d7241)) && ((short)piVar24[1] == 0x2072)
                      ) && (*(char *)((longlong)piVar24 + 6) == '%')) goto joined_r0x000180181239;
                  uVar25 = (ulonglong)((int)DAT_1805c7bc8 + 1U);
                } while ((int)((int)DAT_1805c7bc8 + 1U) < iVar12);
              }
              DAT_1805c7bc8 = -NAN;
            }
joined_r0x000180181239:
            do {
              if (plVar26 == plVar28) goto LAB_180181257;
              iVar12 = (**(code **)(*(longlong *)*plVar26 + 8))();
              if (iVar12 == 7) {
                lVar30 = *plVar26;
                goto LAB_180181259;
              }
              plVar26 = plVar26 + 1;
            } while( true );
          }
          FUN_1802af260(&local_268);
          FUN_18017dac0("Elements");
          local_268 = CONCAT44(fVar39,0xbf800000);
          cVar7 = FUN_180272fa0("##esp_element_list",&local_268,1,0);
          if ((cVar7 != '\0') &&
             (iVar12 = 0, lVar14 = local_2d8,
             0 < (int)((longlong)DAT_1803fb108 - (longlong)DAT_1803fb100 >> 3))) {
            do {
              plVar26 = DAT_1803fb100;
              bVar31 = (longlong *)DAT_1803fb100[iVar12] == DAT_1803fa5f8;
              FUN_18027ae00(iVar12);
              FUN_1801a0b60("##visible",plVar26[iVar12] + 0x14);
              FUN_18027f5b0();
              pfVar21 = (float *)(&PTR_DAT_1803db390)[(int)((longlong *)plVar26[iVar12])[1]];
              uVar19 = (**(code **)(*(longlong *)plVar26[iVar12] + 0x28))();
              local_378 = pfVar21;
              FUN_180012ac0(local_168,0x80,"%s [%s]##element",uVar19);
              local_268 = 0;
              cVar7 = FUN_1802c1850(local_168,bVar31,0,&local_268);
              if (cVar7 != '\0') {
                DAT_1803fa5f8 = (longlong *)plVar26[iVar12];
              }
              if (*(char *)(lVar22 + 0x10) == '\0') {
                __dyn_tls_on_demand_init();
              }
              lVar30 = *(longlong *)(*(longlong *)(local_2d8 + lVar22) + 0x1520);
              iVar13 = *(int *)(lVar30 + 0x108);
              if (iVar13 < 2) {
                FUN_18027e9c0("Calling PopID() too many times!");
              }
              else {
                *(int *)(lVar30 + 0x108) = iVar13 + -1;
              }
              iVar12 = iVar12 + 1;
              lVar14 = local_2d8;
            } while (iVar12 < (int)((longlong)DAT_1803fb108 - (longlong)DAT_1803fb100 >> 3));
          }
          FUN_180273410();
          goto LAB_180181a7a;
        }
        goto LAB_18018275b;
      }
    }
    else {
      DAT_1803fa46c = '\0';
      _DAT_1803fe408 = 0.0;
      FUN_180209ce0(&DAT_1803fa860);
      DAT_1803fac7f = 0;
    }
    FUN_180278d40();
    FUN_18026a890(2);
    FUN_18026abb0(3);
    FUN_18026abb0(2);
    if (*(char *)(lVar22 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar22 = *(longlong *)(lVar22 + 0xec0);
    iVar12 = *(int *)(lVar22 + 0x1fe8);
    goto joined_r0x0001801827b0;
  }
  goto LAB_180182774;
LAB_180181257:
  lVar30 = 0;
LAB_180181259:
  fVar39 = fVar42;
  if (bVar31) {
    fVar39 = fVar32;
  }
  local_378 = (float *)CONCAT71(local_378._1_7_,lVar30 != 0);
  uVar9 = FUN_18017ddb0("##chip_armorbar","Armor Bar",lVar30 != 0,fVar39);
  if ((char)uVar9 == '\0') {
    if (((char)((ushort)uVar9 >> 8) != '\0') && (lVar30 != 0)) {
      *local_220 = '\x01';
      DAT_1803fb0f0 = lVar30;
    }
  }
  else {
    FUN_18017a2c0();
    plVar28 = DAT_1803fb108;
    plVar26 = DAT_1803fb100;
    if (lVar30 == 0) {
      for (; plVar26 != plVar28; plVar26 = plVar26 + 1) {
        iVar12 = (**(code **)(*(longlong *)*plVar26 + 8))();
        if (iVar12 == 4) {
          lVar30 = *plVar26;
          DAT_1803fa5f8 = (longlong *)FUN_1802079d0();
          if ((lVar30 == 0) || (uVar20 = *(uint *)(lVar30 + 8), uVar20 == 8)) goto LAB_1801812e2;
          if ((uVar20 & 0xfffffffa) == 0) {
            if (uVar20 == 1) {
LAB_18018135e:
              uVar20 = 1;
            }
            else {
              uVar20 = 0;
            }
          }
          else {
            if ((uVar20 == 1) || (uVar20 - 6 < 2)) goto LAB_18018135e;
            if ((uVar20 == 2) || (uVar20 - 9 < 2)) {
              uVar20 = 2;
            }
            else if (((uVar20 - 3 & 0xfffffff6) == 0) && (uVar20 != 4)) {
              uVar20 = 3;
            }
          }
          if (uVar20 == 0) {
            *(undefined4 *)(DAT_1803fa5f8 + 1) = 1;
            *(undefined1 *)(DAT_1803fa5f8 + 0xe) = 0;
            goto LAB_1801813e6;
          }
          if (uVar20 == 1) {
            *(undefined4 *)(DAT_1803fa5f8 + 1) = 0;
            *(undefined1 *)(DAT_1803fa5f8 + 0xe) = 0;
          }
          else {
            if (uVar20 == 2) goto LAB_1801812e2;
            if (uVar20 == 3) {
              *(undefined4 *)(DAT_1803fa5f8 + 1) = 2;
              *(undefined1 *)(DAT_1803fa5f8 + 0xe) = 1;
            }
            else {
              *(undefined4 *)(DAT_1803fa5f8 + 1) = 3;
              *(undefined1 *)(DAT_1803fa5f8 + 0xe) = 1;
            }
          }
          goto LAB_1801813e6;
        }
      }
      DAT_1803fa5f8 = (longlong *)FUN_1802079d0();
LAB_1801812e2:
      *(undefined4 *)(DAT_1803fa5f8 + 1) = 3;
      *(undefined1 *)(DAT_1803fa5f8 + 0xe) = 1;
    }
    else {
      FUN_18017dca0(lVar30);
    }
  }
LAB_1801813e6:
  if (bVar31) {
    FUN_18027f5b0();
  }
  if (-1 < (int)DAT_1805c7bc8) {
    FUN_180182850(&local_288,DAT_1805c7bc8,fVar42);
  }
  local_240 = 0;
  pfStack_238 = (float *)0x0;
  local_230 = (float *)0x0;
  local_300 = &PTR_s_Nickname_1803e98d0;
  pfVar21 = (float *)0x0;
  lVar30 = DAT_1803fa808;
  do {
    pcVar23 = *local_300;
    fVar39 = 0.0;
    iVar12 = (int)(DAT_1803fa810 - lVar30 >> 5);
    if (0 < iVar12) {
      do {
        sVar16 = strlen(pcVar23);
        lVar14 = (longlong)(int)fVar39 * 0x20;
        _Size = *(size_t *)(lVar30 + 0x10 + lVar14);
        if (*(ulonglong *)(lVar30 + 0x18 + lVar14) < 0x10) {
          _Buf1 = (void *)(lVar14 + lVar30);
        }
        else {
          _Buf1 = *(void **)(lVar30 + lVar14);
        }
        if ((_Size == sVar16) &&
           ((_Size == 0 || (iVar13 = memcmp(_Buf1,pcVar23,_Size), iVar13 == 0)))) {
          local_338 = fVar39;
          if ((-1 < (int)fVar39) && (fVar39 != DAT_1805c7bc8)) {
            if (pfVar21 == local_230) {
              FUN_180229d20(&local_240,pfVar21,&local_338);
              lVar30 = DAT_1803fa808;
              pfVar21 = pfStack_238;
            }
            else {
              *pfVar21 = fVar39;
              pfStack_238 = pfStack_238 + 1;
              lVar30 = DAT_1803fa808;
              pfVar21 = pfStack_238;
            }
          }
          goto LAB_1801814fa;
        }
        fVar39 = (float)((int)fVar39 + 1);
      } while ((int)fVar39 < iVar12);
    }
    local_338 = -NAN;
LAB_1801814fa:
    local_300 = local_300 + 1;
  } while (local_300 != (undefined **)&DAT_1803e9938);
  uVar29 = 0;
  local_338 = 0.0;
  local_300 = (undefined **)&DAT_1803e9938;
  uVar25 = uVar29;
  if (0 < (int)(DAT_1803fa810 - lVar30 >> 5)) {
    do {
      fVar39 = (float)uVar25;
      if ((fVar39 != DAT_1805c7bc8) &&
         (pfVar17 = (float *)thunk_FUN_1802d5e20(local_240,pfVar21,uVar25), lVar30 = DAT_1803fa808,
         pfVar21 = pfStack_238, pfVar17 == pfStack_238)) {
        if (pfStack_238 == local_230) {
          FUN_180229d20(&local_240,pfStack_238,&local_338);
          lVar30 = DAT_1803fa808;
          pfVar21 = pfStack_238;
        }
        else {
          *pfStack_238 = fVar39;
          pfStack_238 = pfStack_238 + 1;
          lVar30 = DAT_1803fa808;
          pfVar21 = pfStack_238;
        }
      }
      local_338 = (float)((int)fVar39 + 1);
      uVar25 = (ulonglong)(uint)local_338;
    } while ((int)local_338 < (int)(DAT_1803fa810 - lVar30 >> 5));
  }
  cVar7 = local_2f8;
  if ((longlong)pfVar21 - local_240 >> 2 != 0) {
    do {
      if ((cVar7 == '\0') || ((uVar29 & 1) != 0)) {
        FUN_180182850(&local_288,*(undefined4 *)(local_240 + uVar29 * 4),fVar42);
      }
      else {
        FUN_180182850(&local_288,*(undefined4 *)(local_240 + uVar29 * 4),fVar32);
        uVar25 = (longlong)pfStack_238 - local_240 >> 2;
        if (uVar29 + 1 < uVar25) {
          FUN_18027f5b0(uVar25,fVar38);
        }
      }
      uVar29 = uVar29 + 1;
    } while (uVar29 < (ulonglong)((longlong)pfStack_238 - local_240 >> 2));
  }
  lVar14 = local_2d8;
  if (local_250[0] != '\0') {
    if (*(char *)(lVar22 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar14 = local_2d8;
    lVar30 = *(longlong *)(local_2d8 + lVar22);
    plVar26 = *(longlong **)(lVar30 + 0x1520);
    iVar12 = FUN_180268980("##quick_settings",0,
                           *(undefined4 *)(plVar26[0x22] + -4 + (longlong)(int)plVar26[0x21] * 4));
    if (*(int *)(*plVar26 + 0x1578) == iVar12) {
      FUN_1802899e0(iVar12,0xb,"##quick_settings");
    }
    if ((*(byte *)(lVar30 + 0x28e4) & 8) != 0) {
      FUN_180289170("[popup] OpenPopup(\"%s\" -> 0x%08X)\n","##quick_settings",iVar12);
    }
    FUN_180281080(iVar12,0);
  }
  if (*(char *)(lVar22 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar30 = *(longlong *)(lVar14 + lVar22);
  local_328 = 5.60519e-45;
  fStack_324 = (float)*(undefined8 *)(lVar30 + 0xdf0);
  fStack_320 = (float)((ulonglong)*(undefined8 *)(lVar30 + 0xdf0) >> 0x20);
  fStack_31c = (float)*(undefined8 *)(lVar30 + 0xdf8);
  uStack_318 = (undefined4)((ulonglong)*(undefined8 *)(lVar30 + 0xdf8) >> 0x20);
  FUN_18028a220(lVar30 + 0x1fc8,&local_328);
  if (*(int *)(lVar30 + 0x1fc4) != 4) {
    *(undefined4 *)(lVar30 + 0xdf0) = local_2b0;
    *(undefined4 *)(lVar30 + 0xdf4) = local_2ac;
    *(undefined4 *)(lVar30 + 0xdf8) = local_2a8;
    *(undefined4 *)(lVar30 + 0xdfc) = local_2a4;
  }
  if (*(char *)(lVar22 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar30 = *(longlong *)(lVar14 + lVar22);
  local_328 = 7.00649e-45;
  fStack_324 = (float)*(undefined8 *)(lVar30 + 0xe00);
  fStack_320 = (float)((ulonglong)*(undefined8 *)(lVar30 + 0xe00) >> 0x20);
  fStack_31c = (float)*(undefined8 *)(lVar30 + 0xe08);
  uStack_318 = (undefined4)((ulonglong)*(undefined8 *)(lVar30 + 0xe08) >> 0x20);
  FUN_18028a220(lVar30 + 0x1fc8,&local_328);
  if (*(int *)(lVar30 + 0x1fc4) != 5) {
    *(float *)(lVar30 + 0xe00) = local_2f4;
    *(undefined4 *)(lVar30 + 0xe04) = local_2f0;
    *(undefined4 *)(lVar30 + 0xe08) = local_2ec;
    *(float *)(lVar30 + 0xe0c) = fVar36;
  }
  local_268 = CONCAT44(local_248,local_248);
  FUN_18026aad0(2,&local_268);
  FUN_18026a940(9,fVar34);
  fVar41 = fVar41 * _DAT_1803811a8;
  if (*(char *)(lVar22 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar30 = *(longlong *)(lVar14 + lVar22);
  *(uint *)(lVar30 + 0x1f48) = *(uint *)(lVar30 + 0x1f48) | 0x10;
  *(float *)(lVar30 + 0x1f8c) = fVar41;
  *(undefined4 *)(lVar30 + 0x1f90) = 0;
  *(float *)(lVar30 + 0x1f94) = fVar41;
  *(undefined4 *)(lVar30 + 0x1f98) = 0x7f7fffff;
  *(undefined8 *)(lVar30 + 0x1fa0) = 0;
  *(undefined8 *)(lVar30 + 0x1fa8) = 0;
  cVar7 = FUN_180281720("##quick_settings",0);
  plVar26 = DAT_1803fb100;
  if (cVar7 != '\0') {
    for (; plVar26 != DAT_1803fb108; plVar26 = plVar26 + 1) {
      if (*plVar26 == DAT_1803fb0f0) {
        FUN_18027f8a0();
        FUN_18017e8a0(DAT_1803fb0f0);
        if (*(char *)(lVar22 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar30 = *(longlong *)(*(longlong *)(lVar14 + lVar22) + 0x1520);
        iVar12 = *(int *)(lVar30 + 0x1f8);
        if (iVar12 < 1) {
          FUN_18027e9c0("Calling PopItemWidth() too many times!");
        }
        else {
          *(undefined4 *)(lVar30 + 0x1e8) =
               *(undefined4 *)(*(longlong *)(lVar30 + 0x200) + -4 + (longlong)iVar12 * 4);
          *(int *)(lVar30 + 0x1f8) = iVar12 + -1;
        }
        goto LAB_180181873;
      }
    }
    FUN_180281560();
LAB_180181873:
    FUN_180281800();
  }
  FUN_18026abb0(2);
  FUN_18026a890(2);
  FUN_18021e060(&local_240);
  fVar32 = local_2e8;
LAB_180181a7a:
  local_268 = (ulonglong)(uint)fVar32 << 0x20;
  FUN_1802af260(&local_268);
  FUN_18017dac0("Inspector");
  if (DAT_1803fa5f8 == (longlong *)0x0) {
    if (*(char *)(lVar22 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar30 = *(longlong *)(*(longlong *)(lVar14 + lVar22) + 0x1520);
    puVar3 = (undefined4 *)(lVar30 + 0x1f0);
    FUN_18028a630(lVar30 + 0x208,puVar3);
    *puVar3 = 0;
    FUN_1802aabb0(local_178,"Select an element on the canvas or in the list.");
    if (*(char *)(lVar22 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar30 = *(longlong *)(*(longlong *)(lVar14 + lVar22) + 0x1520);
    iVar12 = *(int *)(lVar30 + 0x208);
    if (iVar12 < 1) {
      FUN_18027e9c0("Calling PopTextWrapPos() too many times!");
    }
    else {
      *(undefined4 *)(lVar30 + 0x1f0) =
           *(undefined4 *)(*(longlong *)(lVar30 + 0x210) + -4 + (longlong)iVar12 * 4);
      *(int *)(lVar30 + 0x208) = iVar12 + -1;
    }
LAB_1801826f4:
    fVar41 = (float)local_298;
    fVar35 = local_298._4_4_;
    fVar36 = (float)uStack_290;
    fVar32 = uStack_290._4_4_;
  }
  else {
    if (DAT_1803da697 == '\0') {
      uVar19 = (**(code **)(*DAT_1803fa5f8 + 0x28))();
      FUN_1802aabb0(local_188,&DAT_1803431ac,uVar19);
      local_268 = (ulonglong)(uint)local_258[0] << 0x20;
      FUN_1802af260(&local_268);
      local_258[0] = *(float *)(DAT_1803fa5f8 + 1);
      FUN_1802aabb0(local_178,"Anchor");
      if (*(char *)(lVar22 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar30 = *(longlong *)(lVar14 + lVar22);
      puVar2 = (uint *)(lVar30 + 0x1ec0);
      *puVar2 = *puVar2 | 1;
      *(undefined4 *)(lVar30 + 0x1ed8) = 0xbf800000;
      local_378 = (float *)CONCAT44(local_378._4_4_,0xd);
      cVar7 = FUN_1802b1200("##esp_anchor",local_258);
      if (cVar7 != '\0') {
        FUN_18017a2c0();
        *(float *)(DAT_1803fa5f8 + 1) = local_258[0];
        fVar36 = (DAT_1803fcb58 - _DAT_1803fcb50) * fVar35;
        fVar41 = (DAT_1803fcb5c - _DAT_1803fcb54) * fVar35;
        fStack_31c = (float)FUN_180173db0();
        local_328 = (float)((uint)fVar36 ^ DAT_1803817f0) - fStack_31c;
        fStack_324 = (float)((uint)fVar41 ^ DAT_1803817f0) - fStack_31c;
        fStack_320 = fStack_31c + fVar36;
        fStack_31c = fStack_31c + fVar41;
        uVar10 = FUN_180171010(DAT_1803fa5f8,(int)DAT_1803fa5f8[1],0,&local_328);
        *(undefined4 *)(DAT_1803fa5f8 + 1) = uVar10;
        *(undefined8 *)((longlong)DAT_1803fa5f8 + 0xc) = 0;
        if ((DAT_1803fa5f8 != (longlong *)0x0) &&
           ((iVar12 = (**(code **)(*DAT_1803fa5f8 + 8))(), iVar12 == 4 || (iVar12 == 7)))) {
          *(bool *)(DAT_1803fa5f8 + 0xe) = (int)DAT_1803fa5f8[1] - 2U < 2;
        }
      }
      FUN_1802aabb0(local_178,"Offset");
      cVar7 = *(char *)(lVar22 + 0x10);
      if (cVar7 == '\0') {
        __dyn_tls_on_demand_init();
        cVar7 = *(char *)(lVar22 + 0x10);
      }
      lVar30 = *(longlong *)(*(longlong *)(lVar14 + lVar22) + 0x1520);
      if ((*(longlong *)(lVar30 + 0x1c8) != 0) ||
         (pfVar21 = (float *)(lVar30 + 0x280),
         *(longlong *)(*(longlong *)(lVar14 + lVar22) + 0x2368) != 0)) {
        pfVar21 = (float *)(lVar30 + 0x250);
      }
      fVar41 = *pfVar21;
      fVar36 = *(float *)(lVar30 + 0x118);
      if (cVar7 == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar30 = *(longlong *)(lVar14 + lVar22);
      puVar2 = (uint *)(lVar30 + 0x1ec0);
      *puVar2 = *puVar2 | 1;
      *(float *)(lVar30 + 0x1ed8) = ((fVar41 - fVar36) - fVar38) * fVar35;
      local_248 = 200.0;
      local_258[0] = -200.0;
      local_360 = local_360 & 0xffffffff00000000;
      local_368 = "X %.0f";
      local_370 = &local_248;
      local_378 = local_258;
      FUN_1802b1e50("##esp_offset_x",8,(longlong)DAT_1803fa5f8 + 0xc,fVar35);
      if (*(char *)(lVar22 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar30 = *(longlong *)(lVar14 + lVar22);
      if (((*(int *)(lVar30 + 0x1594) != 0) &&
          (*(int *)(lVar30 + 0x1594) == *(int *)(lVar30 + 0x1ef8))) &&
         (*(int *)(lVar30 + 0x15c0) != *(int *)(lVar30 + 0x1ef8))) {
        FUN_18017a2c0();
      }
      FUN_18027f5b0();
      if (*(char *)(lVar22 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar30 = *(longlong *)(lVar14 + lVar22);
      puVar2 = (uint *)(lVar30 + 0x1ec0);
      *puVar2 = *puVar2 | 1;
      *(undefined4 *)(lVar30 + 0x1ed8) = 0xbf800000;
      local_248 = 200.0;
      local_258[0] = -200.0;
      local_360 = local_360 & 0xffffffff00000000;
      local_368 = "Y %.0f";
      local_370 = &local_248;
      local_378 = local_258;
      FUN_1802b1e50("##esp_offset_y",8,DAT_1803fa5f8 + 2,fVar35);
      if (*(char *)(lVar22 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar30 = *(longlong *)(lVar14 + lVar22);
      if (((*(int *)(lVar30 + 0x1594) != 0) &&
          (*(int *)(lVar30 + 0x1594) == *(int *)(lVar30 + 0x1ef8))) &&
         (*(int *)(lVar30 + 0x15c0) != *(int *)(lVar30 + 0x1ef8))) {
        FUN_18017a2c0();
      }
      FUN_1802aabb0(local_178,"Distance");
      cVar7 = FUN_1801a0b60("Hide on distance##esp_hide_distance",(longlong)DAT_1803fa5f8 + 0x15);
      if (cVar7 != '\0') {
        FUN_18017a2c0();
      }
      if (*(char *)((longlong)DAT_1803fa5f8 + 0x15) != '\0') {
        if (*(char *)(lVar22 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar30 = *(longlong *)(lVar14 + lVar22);
        puVar2 = (uint *)(lVar30 + 0x1ec0);
        *puVar2 = *puVar2 | 1;
        *(undefined4 *)(lVar30 + 0x1ed8) = 0xbf800000;
        local_248 = 20000.0;
        local_258[0] = 100.0;
        local_368 = (char *)CONCAT71(local_368._1_7_,1);
        local_370 = (float *)&DAT_180350b28;
        local_378 = &local_248;
        FUN_1801a6c50("##esp_hide_distance_value",8,DAT_1803fa5f8 + 3,local_258);
        if (*(char *)(lVar22 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar30 = *(longlong *)(lVar14 + lVar22);
        if (((*(int *)(lVar30 + 0x1594) != 0) &&
            (*(int *)(lVar30 + 0x1594) == *(int *)(lVar30 + 0x1ef8))) &&
           (*(int *)(lVar30 + 0x15c0) != *(int *)(lVar30 + 0x1ef8))) {
          FUN_18017a2c0();
        }
      }
      FUN_1802aabb0(local_178,"Hidden");
      cVar7 = FUN_1801a0b60("Always show hidden##esp_always_show_hidden",
                            (longlong)DAT_1803fa5f8 + 0x16);
      if (cVar7 != '\0') {
        FUN_18017a2c0();
      }
      cVar7 = FUN_1801a0b60("Ignore dormant fade##esp_ignore_dormant_fade",
                            (longlong)DAT_1803fa5f8 + 0x1d);
      if (cVar7 != '\0') {
        FUN_18017a2c0();
      }
      cVar7 = FUN_18026ee60(0);
      if (cVar7 != '\0') {
        FUN_180280d00(
                     "Keep this element at full opacity on dormant players,\nwhile the rest of the layout dims (Player ESP -> Show dormant -> Own color).\n\nMostly for bars: a text element can be compensated by raising its own\nalpha, a bar has four of them (track, fill, outline, number) and no\nsingle opacity to raise."
                     );
      }
      if (*(char *)(lVar22 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      fVar41 = DAT_180380bb0;
      lVar30 = *(longlong *)(*(longlong *)(lVar14 + lVar22) + 0x1520);
      if (*(char *)(lVar30 + 0xd1) == '\0') {
        iVar12 = *(int *)(lVar30 + 0x1d4);
        iVar13 = 2 - (uint)(iVar12 != 0);
        if (*(longlong *)(lVar30 + 0x1c8) != 0) {
          bVar31 = iVar12 != 0;
          iVar12 = -iVar12;
          iVar13 = 6 - (uint)bVar31;
        }
        fVar36 = *(float *)(*(longlong *)(lVar14 + lVar22) + 0xd78);
        if (fVar36 <= DAT_180380bb0) {
          fVar36 = DAT_180380bb0;
        }
        FUN_1802af570(iVar13,fVar36,iVar12);
      }
      (**(code **)(*DAT_1803fa5f8 + 0x20))();
      if (*(char *)(lVar22 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar30 = *(longlong *)(*(longlong *)(lVar14 + lVar22) + 0x1520);
      plVar26 = DAT_1803fb100;
      if (*(char *)(lVar30 + 0xd1) == '\0') {
        iVar12 = *(int *)(lVar30 + 0x1d4);
        iVar13 = 2 - (uint)(iVar12 != 0);
        if (*(longlong *)(lVar30 + 0x1c8) != 0) {
          bVar31 = iVar12 != 0;
          iVar12 = -iVar12;
          iVar13 = 6 - (uint)bVar31;
        }
        fVar36 = *(float *)(*(longlong *)(lVar14 + lVar22) + 0xd78);
        if (fVar36 <= fVar41) {
          fVar36 = fVar41;
        }
        FUN_1802af570(iVar13,fVar36,iVar12);
        plVar26 = DAT_1803fb100;
      }
      for (; (plVar26 != DAT_1803fb108 && ((longlong *)*plVar26 != DAT_1803fa5f8));
          plVar26 = plVar26 + 1) {
      }
      if (plVar26 == DAT_1803fb108) goto LAB_1801826f4;
      lVar30 = (longlong)plVar26 - (longlong)DAT_1803fb100;
      local_328 = (float)local_1a8;
      fVar41 = local_328;
      fStack_324 = (float)((ulonglong)local_1a8 >> 0x20);
      fVar36 = fStack_324;
      fStack_320 = (float)uStack_1a0;
      fVar32 = fStack_320;
      fStack_31c = (float)((ulonglong)uStack_1a0 >> 0x20);
      fVar34 = fStack_31c;
      if (*(char *)(lVar22 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar15 = *(longlong *)(*(longlong *)(lVar14 + lVar22) + 0x1520);
      if ((*(longlong *)(lVar15 + 0x1c8) != 0) ||
         (pfVar21 = (float *)(lVar15 + 0x280),
         *(longlong *)(*(longlong *)(lVar14 + lVar22) + 0x2368) != 0)) {
        pfVar21 = (float *)(lVar15 + 0x250);
      }
      local_268 = CONCAT44(0x41e00000,((*pfVar21 - *(float *)(lVar15 + 0x118)) - fVar38) * fVar35);
      cVar7 = FUN_18017d810(&DAT_180348b68,&local_268,&local_328,0);
      iVar12 = (int)(lVar30 >> 3);
      if ((cVar7 != '\0') && (0 < iVar12)) {
        FUN_18017a2c0();
        plVar26 = DAT_1803fb100;
        lVar30 = DAT_1803fb100[iVar12];
        DAT_1803fb100[iVar12] = DAT_1803fb100[(longlong)iVar12 + -1];
        plVar26[(longlong)iVar12 + -1] = lVar30;
      }
      FUN_18027f5b0();
      local_268 = 0x41e00000bf800000;
      local_328 = fVar41;
      fStack_324 = fVar36;
      fStack_320 = fVar32;
      fStack_31c = fVar34;
      cVar7 = FUN_18017d810(&DAT_180363038,&local_268,&local_328,0);
      if ((cVar7 != '\0') &&
         (iVar12 < (int)((longlong)DAT_1803fb108 - (longlong)DAT_1803fb100 >> 3) + -1)) {
        FUN_18017a2c0();
        plVar26 = DAT_1803fb100;
        lVar30 = DAT_1803fb100[iVar12];
        DAT_1803fb100[iVar12] = DAT_1803fb100[(longlong)iVar12 + 1];
        plVar26[(longlong)iVar12 + 1] = lVar30;
      }
      fVar41 = (float)local_298;
      fVar35 = local_298._4_4_;
      fVar36 = (float)uStack_290;
      fVar32 = uStack_290._4_4_;
      local_328 = (float)local_298;
      fStack_324 = local_298._4_4_;
      fStack_320 = (float)uStack_290;
      fStack_31c = uStack_290._4_4_;
      local_268 = 0x41f00000bf800000;
      cVar7 = FUN_18017d810("Delete Element",&local_268,&local_328,1);
    }
    else {
      iVar12 = (**(code **)(*DAT_1803fa5f8 + 8))();
      if (iVar12 == 6) {
        puVar18 = (undefined8 *)(DAT_1803fa808 + (ulonglong)*(uint *)(DAT_1803fa5f8 + 0x19) * 0x20);
        if (0xf < (ulonglong)puVar18[3]) {
          puVar18 = (undefined8 *)*puVar18;
        }
      }
      else {
        puVar18 = (undefined8 *)(**(code **)(*DAT_1803fa5f8 + 0x28))();
      }
      FUN_1802aabb0(local_188,&DAT_1803431ac,puVar18);
      fVar41 = local_258[0];
      local_268 = (ulonglong)(uint)local_258[0] << 0x20;
      FUN_1802af260(&local_268);
      local_338 = *(float *)(DAT_1803fa5f8 + 1);
      FUN_1802aabb0(local_178,"Position");
      if (*(char *)(lVar22 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar30 = *(longlong *)(lVar14 + lVar22);
      puVar2 = (uint *)(lVar30 + 0x1ec0);
      *puVar2 = *puVar2 | 1;
      *(undefined4 *)(lVar30 + 0x1ed8) = 0xbf800000;
      local_378 = (float *)CONCAT44(local_378._4_4_,0xd);
      cVar7 = FUN_1802b1200("##esp_anchor_min",&local_338);
      if (cVar7 != '\0') {
        FUN_18017a2c0();
        *(float *)(DAT_1803fa5f8 + 1) = local_338;
        fVar32 = (DAT_1803fcb58 - _DAT_1803fcb50) * fVar35;
        fVar36 = (DAT_1803fcb5c - _DAT_1803fcb54) * fVar35;
        fStack_31c = (float)FUN_180173db0();
        local_328 = (float)((uint)fVar32 ^ DAT_1803817f0) - fStack_31c;
        fStack_324 = (float)((uint)fVar36 ^ DAT_1803817f0) - fStack_31c;
        fStack_320 = fStack_31c + fVar32;
        fStack_31c = fStack_31c + fVar36;
        uVar10 = FUN_180171010(DAT_1803fa5f8,(int)DAT_1803fa5f8[1],0,&local_328);
        *(undefined4 *)(DAT_1803fa5f8 + 1) = uVar10;
        *(undefined8 *)((longlong)DAT_1803fa5f8 + 0xc) = 0;
        fVar32 = local_2e8;
        if ((DAT_1803fa5f8 != (longlong *)0x0) &&
           ((iVar12 = (**(code **)(*DAT_1803fa5f8 + 8))(), fVar32 = local_2e8, iVar12 == 4 ||
            (iVar12 == 7)))) {
          *(bool *)(DAT_1803fa5f8 + 0xe) = (int)DAT_1803fa5f8[1] - 2U < 2;
        }
      }
      FUN_1802aabb0(local_178,"Offset");
      cVar7 = *(char *)(lVar22 + 0x10);
      if (cVar7 == '\0') {
        __dyn_tls_on_demand_init();
        cVar7 = *(char *)(lVar22 + 0x10);
      }
      lVar30 = *(longlong *)(*(longlong *)(lVar14 + lVar22) + 0x1520);
      if ((*(longlong *)(lVar30 + 0x1c8) != 0) ||
         (pfVar21 = (float *)(lVar30 + 0x280),
         *(longlong *)(*(longlong *)(lVar14 + lVar22) + 0x2368) != 0)) {
        pfVar21 = (float *)(lVar30 + 0x250);
      }
      fVar36 = *pfVar21;
      fVar34 = *(float *)(lVar30 + 0x118);
      if (cVar7 == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar30 = *(longlong *)(lVar14 + lVar22);
      puVar2 = (uint *)(lVar30 + 0x1ec0);
      *puVar2 = *puVar2 | 1;
      *(float *)(lVar30 + 0x1ed8) = ((fVar36 - fVar34) - fVar38) * fVar35;
      local_248 = 200.0;
      local_258[0] = -200.0;
      local_360 = local_360 & 0xffffffff00000000;
      local_368 = "X %.0f";
      local_370 = &local_248;
      local_378 = local_258;
      FUN_1802b1e50("##esp_min_offset_x",8,(longlong)DAT_1803fa5f8 + 0xc,fVar35);
      if (*(char *)(lVar22 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar30 = *(longlong *)(lVar14 + lVar22);
      if (((*(int *)(lVar30 + 0x1594) != 0) &&
          (*(int *)(lVar30 + 0x1594) == *(int *)(lVar30 + 0x1ef8))) &&
         (*(int *)(lVar30 + 0x15c0) != *(int *)(lVar30 + 0x1ef8))) {
        FUN_18017a2c0();
      }
      FUN_18027f5b0();
      if (*(char *)(lVar22 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar30 = *(longlong *)(lVar14 + lVar22);
      puVar2 = (uint *)(lVar30 + 0x1ec0);
      *puVar2 = *puVar2 | 1;
      *(undefined4 *)(lVar30 + 0x1ed8) = 0xbf800000;
      local_248 = 200.0;
      local_258[0] = -200.0;
      local_360 = local_360 & 0xffffffff00000000;
      local_368 = "Y %.0f";
      local_370 = &local_248;
      local_378 = local_258;
      FUN_1802b1e50("##esp_min_offset_y",8,DAT_1803fa5f8 + 2,fVar35);
      if (*(char *)(lVar22 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar30 = *(longlong *)(lVar14 + lVar22);
      if (((*(int *)(lVar30 + 0x1594) != 0) &&
          (*(int *)(lVar30 + 0x1594) == *(int *)(lVar30 + 0x1ef8))) &&
         (*(int *)(lVar30 + 0x15c0) != *(int *)(lVar30 + 0x1ef8))) {
        FUN_18017a2c0();
      }
      plVar26 = DAT_1803fa5f8;
      if (DAT_1803fa5f8 != (longlong *)0x0) {
        uVar10 = (**(code **)(*DAT_1803fa5f8 + 8))(DAT_1803fa5f8);
        switch(uVar10) {
        case 1:
          plVar26 = plVar26 + 9;
          break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
          plVar26 = plVar26 + 8;
          break;
        default:
          goto switchD_180181e6b_default;
        }
        if (plVar26 != (longlong *)0x0) {
          FUN_1802bac60("Color##esp_min_color",plVar26,0x40020);
          if (*(char *)(lVar22 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar30 = *(longlong *)(lVar14 + lVar22);
          if (((*(int *)(lVar30 + 0x1594) != 0) &&
              (*(int *)(lVar30 + 0x1594) == *(int *)(lVar30 + 0x1ef8))) &&
             (*(int *)(lVar30 + 0x15c0) != *(int *)(lVar30 + 0x1ef8))) {
            FUN_18017a2c0();
          }
        }
      }
switchD_180181e6b_default:
      FUN_1801a0b60("Visible##esp_min_visible",(longlong)DAT_1803fa5f8 + 0x14);
      local_268 = (ulonglong)(uint)fVar41 << 0x20;
      FUN_1802af260(&local_268);
      FUN_1801a0b60("More settings##esp_min_more",&DAT_1803fd0a0);
      if (DAT_1803fd0a0 != '\0') {
        FUN_1802afb40();
        (**(code **)(*DAT_1803fa5f8 + 0x20))();
      }
      local_268 = (ulonglong)(uint)fVar32 << 0x20;
      FUN_1802af260(&local_268);
      fVar41 = (float)local_298;
      fVar35 = local_298._4_4_;
      fVar36 = (float)uStack_290;
      fVar32 = uStack_290._4_4_;
      local_328 = (float)local_298;
      fStack_324 = local_298._4_4_;
      fStack_320 = (float)uStack_290;
      fStack_31c = uStack_290._4_4_;
      local_268 = 0x41e00000bf800000;
      cVar7 = FUN_18017d810("Delete element##esp_min_del",&local_268,&local_328,0);
    }
    if (cVar7 != '\0') {
      FUN_18017a2c0();
      FUN_18017a810();
    }
  }
  local_268 = (ulonglong)(uint)fVar38 << 0x20;
  FUN_1802af260(&local_268);
  local_268 = 0x41e00000bf800000;
  local_328 = fVar41;
  fStack_324 = fVar35;
  fStack_320 = fVar36;
  fStack_31c = fVar32;
  cVar7 = FUN_18017d810("Reset layout",&local_268,&local_328,0);
  if (cVar7 != '\0') {
    FUN_18017a2c0();
    FUN_180170f70();
    FUN_180209ce0(&DAT_1803fa860);
    DAT_1803fac7f = 0;
  }
LAB_18018275b:
  FUN_180273410();
  FUN_18026abb0(1);
  FUN_18026a890(2);
LAB_180182774:
  FUN_180278d40();
  FUN_18026a890(2);
  FUN_18026abb0(3);
  FUN_18026abb0(2);
  if (*(char *)(lVar22 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar22 = *(longlong *)(lVar14 + lVar22);
  iVar12 = *(int *)(lVar22 + 0x1fe8);
joined_r0x0001801827b0:
  if (iVar12 < 1) {
    FUN_18027e9c0("Calling PopFont() too many times!");
  }
  else {
    lVar14 = (longlong)iVar12;
    lVar30 = *(longlong *)(lVar22 + 0x1ff0);
    FUN_18027a5f0(*(undefined8 *)(lVar30 + -0x10 + lVar14 * 0x10),
                  *(undefined4 *)(lVar30 + -8 + lVar14 * 0x10),
                  *(undefined4 *)(lVar30 + -4 + lVar14 * 0x10));
    *(int *)(lVar22 + 0x1fe8) = *(int *)(lVar22 + 0x1fe8) + -1;
  }
  return;
}


