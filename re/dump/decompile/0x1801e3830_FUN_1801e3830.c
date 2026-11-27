// 0x1801e3830  FUN_1801e3830
// size=6865 thunk=false
// signature: undefined FUN_1801e3830()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001801e460b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801e3830(void)

{
  longlong *plVar1;
  uint *puVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  undefined8 uVar10;
  uintptr_t uVar11;
  void *pvVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  char cVar21;
  size_t sVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong *****ppppplVar25;
  longlong ******_Dst;
  float *pfVar26;
  undefined1 *puVar27;
  undefined8 uVar28;
  LPCWSTR lpFile;
  uint uVar29;
  float *pfVar30;
  undefined8 *puVar31;
  void *pvVar32;
  uint uVar33;
  int iVar34;
  undefined1 *puVar35;
  uintptr_t *puVar36;
  uint uVar37;
  char *pcVar38;
  undefined8 **ppuVar39;
  longlong lVar40;
  ulonglong uVar41;
  undefined *puVar42;
  longlong *******_Src;
  uint uVar43;
  float fVar44;
  undefined4 uVar45;
  float fVar46;
  undefined8 uStack_310;
  undefined1 auStack_308 [32];
  float *local_2e8;
  undefined4 local_2e0 [2];
  undefined8 local_2d8;
  undefined8 local_2d0;
  float local_2c8;
  uint local_2c4;
  float local_2c0 [2];
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined *local_298;
  undefined1 local_288 [32];
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 local_250;
  longlong ****local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined1 local_228 [32];
  undefined1 local_208 [32];
  undefined1 local_1e8 [32];
  undefined1 local_1c8 [32];
  undefined1 local_1a8 [32];
  undefined1 local_188 [32];
  undefined8 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  ulonglong local_148;
  ulonglong local_140;
  longlong ******local_138;
  undefined8 uStack_130;
  ulonglong local_128;
  ulonglong uStack_120;
  undefined1 local_118 [32];
  ulonglong local_f8;
  
  puVar35 = auStack_308;
  puVar27 = auStack_308;
  local_f8 = DAT_1803da4c0 ^ (ulonglong)auStack_308;
  uVar37 = 0;
  local_2c4 = 0;
  local_2c0[0] = 5.60519e-45;
  local_2c8 = 0.0;
  pfVar30 = &local_2c8;
  if (-1 < (int)DAT_1803fb24c) {
    pfVar30 = &DAT_1803fb24c;
  }
  pfVar26 = local_2c0;
  if ((int)DAT_1803fb24c < 5) {
    pfVar26 = pfVar30;
  }
  DAT_1803fb24c = *pfVar26;
  lVar40 = (longlong)(int)DAT_1803fb24c * 200;
  if (DAT_1803facfe == '\0') {
    FUN_1801a9730();
  }
  uVar41 = (ulonglong)_tls_index;
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar41 * 8);
  if (*(char *)(lVar7 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar19 = DAT_180380fe0;
  fVar44 = DAT_180380ac0;
  lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0xec0) + 0x1520);
  if ((*(longlong *)(lVar8 + 0x1c8) != 0) ||
     (pfVar30 = (float *)(lVar8 + 0x280), *(longlong *)(*(longlong *)(lVar7 + 0xec0) + 0x2368) != 0)
     ) {
    pfVar30 = (float *)(lVar8 + 0x250);
  }
  fVar46 = ((*pfVar30 - *(float *)(lVar8 + 0x118)) - DAT_180380fe0) * DAT_180380ac0;
  local_2c0[0] = 0.0;
  local_2c0[1] = 0.0;
  FUN_18026aad0(2,local_2c0);
  local_2c0[1] = -1.0;
  local_2c0[0] = fVar46;
  FUN_180272fa0("##settings_left",local_2c0,0,0x18);
  FUN_18026abb0(1);
  uVar45 = DAT_180381384;
  cVar21 = FUN_18019fbc0("Configs",6,CONCAT44(DAT_180381384,fVar46),0);
  fVar18 = DAT_180380fa8;
  fVar17 = DAT_180380f40;
  fVar16 = DAT_180380e9c;
  fVar15 = DAT_180380c50;
  fVar14 = DAT_180380b20;
  if (cVar21 == '\0') goto LAB_1801e4707;
  puVar42 = &DAT_1803dca28 + lVar40;
  local_298 = puVar42;
  FUN_1802aabb0(puVar42,&DAT_180341140);
  if (*(char *)(lVar7 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar8 = *(longlong *)(lVar7 + 0xec0);
  puVar2 = (uint *)(lVar8 + 0x1ec0);
  *puVar2 = *puVar2 | 1;
  *(undefined4 *)(lVar8 + 0x1ed8) = 0xbf800000;
  local_2c0[0] = 0.0;
  local_2c0[1] = 0.0;
  local_2d0 = 0;
  local_2d8 = 0;
  local_2e0[0] = 0;
  local_2e8 = local_2c0;
  FUN_1802b74e0("##new_config_name",0,s_default_1803dc920,0x40);
  local_2c8 = 1.5;
  local_2c0[0] = 0.75;
  local_168 = (void *)((ulonglong)local_168._4_4_ << 0x20);
  pfVar30 = local_2c0;
  if (fVar14 <= DAT_1803da6a4) {
    pfVar30 = &DAT_1803da6a4;
  }
  pfVar26 = &local_2c8;
  if (DAT_1803da6a4 <= fVar15) {
    pfVar26 = pfVar30;
  }
  local_168 = (void *)((ulonglong)(uint)(*pfVar26 * fVar16) << 0x20);
  FUN_1802af260(&local_168);
  FUN_18026a810(3,&DAT_1803dc9a8 + lVar40);
  FUN_18026a810(5,&DAT_1803dc9b8 + lVar40);
  local_168 = (void *)CONCAT44(DAT_1803da6a4 * DAT_18038115c,0xbf800000);
  cVar21 = FUN_180272fa0("##config_list",&local_168,1,8);
  if (cVar21 != '\0') {
    if (DAT_1803fcc98 == DAT_1803fcca0) {
      if (*(char *)(lVar7 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0xec0) + 0x1520);
      fVar4 = *(float *)(lVar8 + 0x11c);
      fVar5 = *(float *)(lVar8 + 0x2c);
      fVar6 = *(float *)(lVar8 + 0x9c);
      if (*(char *)(lVar7 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar8 = *(longlong *)(lVar7 + 0xec0);
      *(undefined1 *)(*(longlong *)(lVar8 + 0x1520) + 0xce) = 1;
      lVar8 = *(longlong *)(lVar8 + 0x1520);
      *(float *)(lVar8 + 0x11c) =
           (*(float *)(lVar8 + 0x2c) - *(float *)(lVar8 + 0x9c)) +
           (fVar4 - fVar5) + fVar6 + _DAT_1803810b0;
      *(undefined1 *)(lVar8 + 0x159) = 1;
      FUN_1802aabb0(puVar42,"No saved configs yet.");
    }
    iVar34 = 0;
    if (0 < (int)(DAT_1803fcca0 - DAT_1803fcc98 >> 5)) {
      do {
        local_168 = (void *)0x0;
        puVar31 = (undefined8 *)(DAT_1803fcc98 + (longlong)iVar34 * 0x20);
        if (0xf < (ulonglong)puVar31[3]) {
          puVar31 = (undefined8 *)*puVar31;
        }
        cVar21 = FUN_1802c1850(puVar31,DAT_1803dc960 == iVar34,0,&local_168);
        if (cVar21 != '\0') {
          pcVar38 = (char *)(DAT_1803fcc98 + (longlong)iVar34 * 0x20);
          if (0xf < *(ulonglong *)(pcVar38 + 0x18)) {
            pcVar38 = *(char **)pcVar38;
          }
          DAT_1803dc960 = iVar34;
          strncpy_s(s_default_1803dc920,0x40,pcVar38,0xffffffffffffffff);
        }
        iVar34 = iVar34 + 1;
      } while (iVar34 < (int)(DAT_1803fcca0 - DAT_1803fcc98 >> 5));
    }
  }
  FUN_180273410();
  FUN_18026a890(2);
  local_2c8 = 1.5;
  local_2c0[0] = 0.75;
  local_168 = (void *)((ulonglong)local_168 & 0xffffffff00000000);
  pfVar30 = local_2c0;
  if (fVar14 <= DAT_1803da6a4) {
    pfVar30 = &DAT_1803da6a4;
  }
  pfVar26 = &local_2c8;
  if (DAT_1803da6a4 <= fVar15) {
    pfVar26 = pfVar30;
  }
  local_168 = (void *)((ulonglong)(uint)(*pfVar26 * fVar16) << 0x20);
  FUN_1802af260(&local_168);
  local_158 = (longlong ******)&local_2b8;
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_2a8 = 0;
  local_2a0 = 0;
  sVar22 = strlen(s_default_1803dc920);
  FUN_18001d080(&local_2b8,s_default_1803dc920,sVar22);
  puVar31 = (undefined8 *)FUN_1801a93b0(local_288,&local_2b8);
  local_2c4 = 1;
  plVar1 = puVar31 + 2;
  if (0xf < (ulonglong)puVar31[3]) {
    puVar31 = (undefined8 *)*puVar31;
  }
  if (((*plVar1 == 7) && (iVar34 = memcmp(puVar31,"default",7), iVar34 == 0)) &&
     (s_default_1803dc920[0] == '\0')) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  local_2c4 = 0;
  FUN_18020e450(local_288);
  if ((DAT_1803dc960 < 0) || ((int)(DAT_1803fcca0 - DAT_1803fcc98 >> 5) <= DAT_1803dc960)) {
    local_158 = (longlong ******)&local_268;
    local_268 = 0;
    uStack_260 = 0;
    local_258 = 0;
    local_250 = 0;
    sVar22 = strlen(s_default_1803dc920);
    FUN_18001d080(&local_268,s_default_1803dc920,sVar22);
    puVar31 = (undefined8 *)FUN_1801a93b0(local_208,&local_268);
    uVar37 = 4;
  }
  else {
    puVar31 = (undefined8 *)FUN_18016d4c0(local_1e8,(longlong)DAT_1803dc960 * 0x20 + DAT_1803fcc98);
    uVar37 = 2;
  }
  local_2c4 = uVar37;
  local_138 = (longlong ******)*puVar31;
  uStack_130 = puVar31[1];
  local_128 = puVar31[2];
  uStack_120 = puVar31[3];
  puVar31[2] = 0;
  puVar31[3] = 0xf;
  *(undefined1 *)puVar31 = 0;
  if ((uVar37 & 4) != 0) {
    uVar37 = uVar37 & 0xfffffffb;
    local_2c4 = uVar37;
    FUN_18020e450(local_208);
  }
  if ((uVar37 & 2) != 0) {
    uVar37 = uVar37 & 0xfffffffd;
    local_2c4 = uVar37;
    FUN_18020e450(local_1e8);
  }
  uVar41 = local_128;
  if (bVar13) {
    local_158 = (longlong ******)&local_248;
    local_248 = (longlong ****)0x0;
    uStack_240 = 0;
    local_238 = 0;
    local_230 = 0;
    sVar22 = strlen(s_default_1803dc920);
    FUN_18001d080(&local_248,s_default_1803dc920,sVar22);
    puVar31 = (undefined8 *)FUN_1801a93b0(local_1c8,&local_248);
    uVar37 = uVar37 | 8;
    puVar35 = auStack_308;
    local_2c4 = uVar37;
  }
  else {
    local_158 = (longlong ******)0x0;
    uStack_150 = (undefined **)0x0;
    local_148 = 0;
    local_140 = 0;
    _Src = &local_138;
    if (0xf < uStack_120) {
      _Src = (longlong *******)local_138;
    }
    if (0x7fffffffffffffff < local_128) {
                    /* WARNING: Subroutine does not return */
      FUN_1800130a0();
    }
    if (local_128 < 0x10) {
      local_148 = local_128;
      local_140 = 0xf;
      local_158 = *_Src;
      uStack_150 = (undefined **)_Src[1];
      puVar27 = auStack_308;
    }
    else {
      uVar23 = local_128 | 0xf;
      if (uVar23 < 0x8000000000000000) goto LAB_1801e3fc4;
      uVar24 = 0x8000000000000027;
      uVar23 = 0x7fffffffffffffff;
      puVar27 = auStack_308;
      while( true ) {
        *(undefined8 *)(puVar27 + -8) = 0x1801e3fb5;
        ppppplVar25 = (longlong *****)FUN_1802d8350(uVar24);
        if (ppppplVar25 != (longlong *****)0x0) break;
        pcVar9 = (code *)swi(0x29);
        uVar23 = (*pcVar9)(5);
        puVar27 = puVar27 + 8;
LAB_1801e3fc4:
        if (uVar23 < 0x16) {
          uVar23 = 0x16;
        }
        if (uVar23 == 0xffffffffffffffff) {
          _Dst = (longlong ******)0x0;
          goto LAB_1801e400b;
        }
        if (uVar23 + 1 < 0x1000) {
          *(undefined8 *)(puVar27 + -8) = 0x1801e400b;
          _Dst = (longlong ******)FUN_1802d8350();
          goto LAB_1801e400b;
        }
        uVar24 = uVar23 + 0x28;
        if (uVar24 <= uVar23 + 1) {
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar27 + -8) = &UNK_1801e5302;
          FUN_180012fe0();
        }
      }
      _Dst = (longlong ******)((longlong)ppppplVar25 + 0x27U & 0xffffffffffffffe0);
      _Dst[-1] = ppppplVar25;
LAB_1801e400b:
      local_148 = uVar41;
      local_158 = _Dst;
      local_140 = uVar23;
      *(undefined8 *)(puVar27 + -8) = 0x1801e402f;
      memcpy(_Dst,_Src,uVar41 + 1);
    }
    puVar31 = &local_158;
    uVar37 = uVar37 | 0x10;
    *(uint *)(puVar27 + 0x44) = uVar37;
    puVar42 = *(undefined **)(puVar27 + 0x70);
    puVar35 = puVar27;
  }
  *(undefined8 *)(puVar35 + -8) = 0x1801e4051;
  FUN_18016d4c0(local_118,puVar31);
  if ((uVar37 & 0x10) != 0) {
    uVar37 = uVar37 & 0xffffffef;
    *(uint *)(puVar35 + 0x44) = uVar37;
    *(undefined8 *)(puVar35 + -8) = 0x1801e406b;
    FUN_18020e450(&local_158);
  }
  if ((uVar37 & 8) != 0) {
    uVar37 = uVar37 & 0xfffffff7;
    *(uint *)(puVar35 + 0x44) = uVar37;
    *(undefined8 *)(puVar35 + -8) = 0x1801e4082;
    FUN_18020e450(local_1c8);
  }
  uVar28 = *(undefined8 *)(&DAT_1803dc9c8 + lVar40);
  uVar10 = *(undefined8 *)(&DAT_1803dc9d0 + lVar40);
  if (*(char *)(lVar7 + 0x10) == '\0') {
    *(undefined8 *)(puVar35 + -8) = 0x1801e409e;
    __dyn_tls_on_demand_init();
  }
  lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0xec0) + 0x1520);
  if ((*(longlong *)(lVar8 + 0x1c8) != 0) ||
     (pfVar30 = (float *)(lVar8 + 0x280), *(longlong *)(*(longlong *)(lVar7 + 0xec0) + 0x2368) != 0)
     ) {
    pfVar30 = (float *)(lVar8 + 0x250);
  }
  local_168 = (void *)CONCAT44(0x42080000,((*pfVar30 - *(float *)(lVar8 + 0x118)) - fVar18) * fVar44
                              );
  local_158 = (longlong ******)uVar28;
  uStack_150 = (undefined **)uVar10;
  puVar35[0x28] = 1;
  puVar35[0x20] = 1;
  *(undefined8 *)(puVar35 + -8) = 0x1801e412a;
  cVar21 = FUN_18019cb40("Save##cfg_save",7,&local_168,&local_158);
  if (cVar21 != '\0') {
    *(undefined8 *)(puVar35 + -8) = 0x1801e413a;
    FUN_1801aaa70(local_118);
  }
  *(undefined4 *)(puVar35 + 0x40) = 0x3fc00000;
  *(undefined4 *)(puVar35 + 0x48) = 0x3f400000;
  pfVar30 = (float *)(puVar35 + 0x48);
  if (fVar14 <= DAT_1803da6a4) {
    pfVar30 = &DAT_1803da6a4;
  }
  pfVar26 = (float *)(puVar35 + 0x40);
  if (DAT_1803da6a4 <= fVar15) {
    pfVar26 = pfVar30;
  }
  fVar4 = *pfVar26;
  *(undefined8 *)(puVar35 + -8) = 0x1801e4185;
  FUN_18027f5b0(0,fVar4 * fVar18);
  local_168 = (void *)0x42080000bf800000;
  local_158 = *(longlong *******)(&DAT_1803dc9e8 + lVar40);
  uStack_150 = *(undefined ***)(&DAT_1803dc9f0 + lVar40);
  puVar35[0x28] = 1;
  puVar35[0x20] = 0;
  *(undefined8 *)(puVar35 + -8) = 0x1801e41d2;
  cVar21 = FUN_18019cb40("Load##cfg_load",8,&local_168,&local_158);
  if (cVar21 != '\0') {
    *(undefined8 *)(puVar35 + -8) = 0x1801e41e2;
    FUN_1801b2830(&local_138);
  }
  puVar36 = (uintptr_t *)(&DAT_1803dca08 + lVar40);
  uVar11 = *puVar36;
  uVar28 = *(undefined8 *)(&DAT_1803dca10 + lVar40);
  if (*(char *)(lVar7 + 0x10) == '\0') {
    *(undefined8 *)(puVar35 + -8) = 0x1801e41fb;
    __dyn_tls_on_demand_init();
  }
  lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0xec0) + 0x1520);
  if ((*(longlong *)(lVar8 + 0x1c8) != 0) ||
     (pfVar30 = (float *)(lVar8 + 0x280), *(longlong *)(*(longlong *)(lVar7 + 0xec0) + 0x2368) != 0)
     ) {
    pfVar30 = (float *)(lVar8 + 0x250);
  }
  local_168 = (void *)CONCAT44(0x42080000,((*pfVar30 - *(float *)(lVar8 + 0x118)) - fVar18) * fVar44
                              );
  local_158 = (longlong ******)uVar11;
  uStack_150 = (undefined **)uVar28;
  puVar35[0x28] = 1;
  puVar35[0x20] = 0;
  *(undefined8 *)(puVar35 + -8) = 0x1801e4280;
  cVar21 = FUN_18019cb40("Delete##cfg_delete",9,&local_168,&local_158);
  if (cVar21 != '\0') {
    *(undefined8 *)(puVar35 + -8) = 0x1801e4290;
    FUN_1801bb580(&local_138);
  }
  *(undefined4 *)(puVar35 + 0x40) = 0x3fc00000;
  *(undefined4 *)(puVar35 + 0x48) = 0x3f400000;
  pfVar30 = (float *)(puVar35 + 0x48);
  if (fVar14 <= DAT_1803da6a4) {
    pfVar30 = &DAT_1803da6a4;
  }
  pfVar26 = (float *)(puVar35 + 0x40);
  if (DAT_1803da6a4 <= fVar15) {
    pfVar26 = pfVar30;
  }
  fVar4 = *pfVar26;
  *(undefined8 *)(puVar35 + -8) = 0x1801e42db;
  FUN_18027f5b0(0,fVar4 * fVar18);
  local_168 = (void *)0x42080000bf800000;
  local_158 = *(longlong *******)(&DAT_1803dc9c8 + lVar40);
  uStack_150 = *(undefined ***)(&DAT_1803dc9d0 + lVar40);
  puVar35[0x28] = 1;
  puVar35[0x20] = 0;
  *(undefined8 *)(puVar35 + -8) = 0x1801e432f;
  cVar21 = FUN_18019cb40("Refresh##cfg_refresh",0xb,&local_168,&local_158);
  if (cVar21 != '\0') {
    *(undefined8 *)(puVar35 + -8) = 0x1801e4338;
    FUN_1801a9730();
  }
  if (*(char *)(lVar7 + 0x10) == '\0') {
    *(undefined8 *)(puVar35 + -8) = 0x1801e4344;
    __dyn_tls_on_demand_init();
  }
  lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0xec0) + 0x1520);
  puVar3 = (undefined4 *)(lVar8 + 0x1f0);
  *(undefined8 *)(puVar35 + -8) = 0x1801e4365;
  FUN_18028a630(lVar8 + 0x208,puVar3);
  *puVar3 = 0;
  ppuVar39 = &DAT_1803fa8c0;
  if (0xf < DAT_1803fa8d8) {
    ppuVar39 = (undefined8 **)DAT_1803fa8c0;
  }
  *(undefined8 *)(puVar35 + -8) = 0x1801e4391;
  FUN_1802aabb0(puVar42,&DAT_1803431ac,ppuVar39);
  if (*(char *)(lVar7 + 0x10) == '\0') {
    *(undefined8 *)(puVar35 + -8) = 0x1801e439d;
    __dyn_tls_on_demand_init();
  }
  lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0xec0) + 0x1520);
  iVar34 = *(int *)(lVar8 + 0x208);
  if (iVar34 < 1) {
    *(undefined8 *)(puVar35 + -8) = 0x1801e43c7;
    FUN_18027e9c0("Calling PopTextWrapPos() too many times!");
  }
  else {
    *(undefined4 *)(lVar8 + 0x1f0) =
         *(undefined4 *)(*(longlong *)(lVar8 + 0x210) + -4 + (longlong)iVar34 * 4);
    *(int *)(lVar8 + 0x208) = iVar34 + -1;
  }
  *(undefined8 *)(puVar35 + -8) = 0x1801e43ea;
  FUN_1802afb40();
  if (DAT_180423571 == '\0') {
    if (DAT_1803ff0e9 == '\0') {
      local_168 = (void *)0x41d00000bf800000;
      local_158 = (longlong ******)*puVar36;
      uStack_150 = *(undefined ***)(&DAT_1803dca10 + lVar40);
      puVar35[0x28] = 1;
      puVar35[0x20] = 1;
      *(undefined8 *)(puVar35 + -8) = 0x1801e4468;
      cVar21 = FUN_18019cb40("Unload cheat##unload_arm",9,&local_168,&local_158);
      if (cVar21 != '\0') {
        DAT_1803ff0e9 = '\x01';
      }
      *(undefined8 *)(puVar35 + -8) = 0x1801e447a;
      cVar21 = FUN_18026ee60(0);
      if (cVar21 != '\0') {
        *(undefined8 *)(puVar35 + -8) = 0x1801e448e;
        FUN_180280d00(
                     "Restores every hook, patch and callback, shuts the overlay down\nand frees the module if the injector used LoadLibrary.\nThe game keeps running. Re-inject to come back."
                     );
      }
    }
    else {
      *(undefined8 *)(puVar35 + -8) = 0x1801e44a2;
      FUN_1802aabb0(puVar36,"Unload now? This closes the cheat.");
      if (*(char *)(lVar7 + 0x10) == '\0') {
        *(undefined8 *)(puVar35 + -8) = 0x1801e44ae;
        __dyn_tls_on_demand_init();
      }
      lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0xec0) + 0x1520);
      if ((*(longlong *)(lVar8 + 0x1c8) != 0) ||
         (pfVar30 = (float *)(lVar8 + 0x280),
         *(longlong *)(*(longlong *)(lVar7 + 0xec0) + 0x2368) != 0)) {
        pfVar30 = (float *)(lVar8 + 0x250);
      }
      local_168 = (void *)CONCAT44(0x41d00000,
                                   ((*pfVar30 - *(float *)(lVar8 + 0x118)) - fVar17) * fVar44);
      local_158 = (longlong ******)*puVar36;
      uStack_150 = *(undefined ***)(&DAT_1803dca10 + lVar40);
      puVar35[0x28] = 1;
      puVar35[0x20] = 1;
      *(undefined8 *)(puVar35 + -8) = 0x1801e4535;
      cVar21 = FUN_18019cb40("Confirm##unload_go",9,&local_168,&local_158);
      if (cVar21 != '\0') {
        DAT_1803ff0e9 = '\0';
        DAT_1803fa545 = 0;
        if (DAT_1803fa5a8 != (longlong *)0x0) {
          pcVar9 = *(code **)(*DAT_1803fa5a8 + 0x58);
          *(undefined8 *)(puVar35 + -8) = 0x1801e455f;
          (*pcVar9)();
        }
        *(undefined8 *)(puVar35 + -8) = 0x1801e4564;
        FUN_180024860();
        if (DAT_180423571 == '\0') {
          local_168 = (void *)0x0;
          *(undefined8 *)(puVar35 + -8) = 0x1801e4586;
          pvVar32 = (void *)FUN_1802d8350(1);
          local_168 = pvVar32;
          *(uint *)(puVar35 + 0x44) = uVar37 | 0x100;
          *(undefined8 **)(puVar35 + 0x28) = &uStack_150;
          *(undefined4 *)(puVar35 + 0x20) = 0;
          *(undefined8 *)(puVar35 + -8) = 0x1801e45b9;
          local_158 = (longlong ******)
                      _beginthreadex((void *)0x0,0,FUN_180221bc0,pvVar32,*(uint *)(puVar35 + 0x20),
                                     *(uint **)(puVar35 + 0x28));
          uVar29 = uVar37 | 0x100;
          if (local_158 != (longlong ******)0x0) {
            local_168 = (void *)0x0;
            *(uint *)(puVar35 + 0x44) = uVar37;
            iVar34 = (int)uStack_150;
            if ((int)uStack_150 != 0) {
              uVar45 = local_158._4_4_;
              uVar20 = uStack_150._4_4_;
              *(undefined4 *)(puVar35 + 0x70) = (undefined4)local_158;
              *(undefined4 *)(puVar35 + 0x74) = uVar45;
              *(int *)(puVar35 + 0x78) = iVar34;
              *(undefined4 *)(puVar35 + 0x7c) = uVar20;
              *(undefined8 *)(puVar35 + -8) = 0x1801e45f4;
              iVar34 = _Thrd_detach(puVar35 + 0x70);
              if (iVar34 == 0) {
                local_158 = (longlong ******)0x0;
                uStack_150 = (undefined **)0x0;
                goto LAB_1801e4630;
              }
            }
            *(undefined8 *)(puVar35 + -8) = 0x1801e461d;
            std::_Throw_Cpp_error(1);
            uVar29 = uVar37;
          }
          uVar37 = uVar29;
          uStack_150 = (undefined **)((ulonglong)uStack_150 & 0xffffffff00000000);
          *(undefined8 *)(puVar35 + -8) = 0x1801e462f;
          std::_Throw_Cpp_error(6);
        }
      }
LAB_1801e4630:
      *(undefined4 *)(puVar35 + 0x40) = 0x3fc00000;
      *(undefined4 *)(puVar35 + 0x48) = 0x3f400000;
      pfVar30 = (float *)(puVar35 + 0x48);
      if (fVar14 <= DAT_1803da6a4) {
        pfVar30 = &DAT_1803da6a4;
      }
      pfVar26 = (float *)(puVar35 + 0x40);
      if (DAT_1803da6a4 <= fVar15) {
        pfVar26 = pfVar30;
      }
      fVar44 = *pfVar26;
      *(undefined8 *)(puVar35 + -8) = 0x1801e467b;
      FUN_18027f5b0(0,fVar44 * fVar17);
      local_168 = (void *)0x41d00000bf800000;
      local_158 = *(longlong *******)(&DAT_1803dc9c8 + lVar40);
      uStack_150 = *(undefined ***)(&DAT_1803dc9d0 + lVar40);
      puVar35[0x28] = 1;
      puVar35[0x20] = 1;
      *(undefined8 *)(puVar35 + -8) = 0x1801e46cf;
      cVar21 = FUN_18019cb40("Cancel##unload_no",0xb,&local_168,&local_158);
      if (cVar21 != '\0') {
        DAT_1803ff0e9 = '\0';
      }
    }
  }
  else {
    *(undefined8 *)(puVar35 + -8) = 0x1801e4404;
    FUN_1802aabb0(puVar36,"Unloading...");
    *(undefined8 *)(puVar35 + -8) = 0x1801e4413;
    FUN_1802aabb0(puVar42,"Restoring hooks, then freeing the module.");
  }
  *(undefined8 *)(puVar35 + -8) = 0x1801e46e6;
  FUN_18020e450(local_118);
  *(undefined8 *)(puVar35 + -8) = 0x1801e46f3;
  FUN_18020e450(&local_138);
  uVar41 = (ulonglong)_tls_index;
  uVar45 = DAT_180381384;
LAB_1801e4707:
  uVar23 = 3;
  *(undefined8 *)(puVar35 + -8) = 0x1801e470c;
  FUN_180273410();
  *(undefined8 *)(puVar35 + -8) = 0x1801e4716;
  FUN_18026abb0(2);
  *(undefined8 *)(puVar35 + -8) = 0x1801e4720;
  FUN_18026a890(2);
  *(undefined8 *)(puVar35 + -8) = 0x1801e4725;
  FUN_180273410();
  *(undefined4 *)(puVar35 + 0x40) = 0x3fc00000;
  *(undefined4 *)(puVar35 + 0x48) = 0x3f400000;
  pfVar30 = (float *)(puVar35 + 0x48);
  if (fVar14 <= DAT_1803da6a4) {
    pfVar30 = &DAT_1803da6a4;
  }
  pfVar26 = (float *)(puVar35 + 0x40);
  if (DAT_1803da6a4 <= fVar15) {
    pfVar26 = pfVar30;
  }
  fVar44 = *pfVar26;
  *(undefined8 *)(puVar35 + -8) = 0x1801e4770;
  FUN_18027f5b0(0,fVar44 * fVar19);
  local_168 = (void *)0x0;
  *(undefined8 *)(puVar35 + -8) = 0x1801e478c;
  FUN_18026aad0(2,&local_168);
  local_168 = (void *)0xbf80000000000000;
  *(undefined8 *)(puVar35 + -8) = 0x1801e47bc;
  FUN_180272fa0("##settings_right",&local_168,0);
  *(undefined8 *)(puVar35 + -8) = 0x1801e47c6;
  FUN_18026abb0(1);
  *(undefined8 *)(puVar35 + -8) = 0x1801e47ee;
  cVar21 = FUN_18019fbc0(&DAT_18034f378,4,CONCAT44(DAT_1803811dc,fVar46));
  if (cVar21 != '\0') {
    local_168 = (void *)0x43020000;
    *(undefined8 *)(puVar35 + -8) = 0x1801e481e;
    FUN_1802d31a0("Hotkey##menu_hotkey",&DAT_1803da6a8,&local_168,0);
    *(undefined4 *)(puVar35 + 0x20) = 5;
    *(undefined8 *)(puVar35 + -8) = 0x1801e4840;
    cVar21 = FUN_1802b1200("Theme",&DAT_1803fb24c);
    if (cVar21 != '\0') {
      if (DAT_1803fb24c != 5.60519e-45) {
        DAT_1803fa547 = '\0';
      }
      *(undefined8 *)(puVar35 + -8) = 0x1801e4859;
      FUN_180199890();
    }
    uVar29 = 2;
    uVar43 = (uint)_DAT_1803817c0;
    fVar44 = (float)((uint)(DAT_1803da6a4 - DAT_180380bb0) & uVar43);
    uVar33 = 2;
    if ((float)((uint)(DAT_1803da6a4 - fVar14) & uVar43) < fVar44) {
      uVar29 = 0;
      uVar33 = 0;
    }
    if ((float)((uint)(DAT_1803da6a4 - DAT_180380b68) & uVar43) <
        (float)((uint)(DAT_1803da6a4 - (float)(&DAT_18033c8e0)[uVar33]) & uVar43)) {
      uVar33 = 1;
      uVar29 = uVar33;
    }
    if (fVar44 < (float)((uint)(DAT_1803da6a4 - (float)(&DAT_18033c8e0)[uVar33]) & uVar43)) {
      uVar33 = 2;
      uVar29 = uVar33;
    }
    if ((float)((uint)(DAT_1803da6a4 - (float)(&DAT_18033c8e0)[uVar33]) & uVar43) <=
        (float)((uint)(DAT_1803da6a4 - DAT_180380bc4) & uVar43)) {
      uVar23 = (ulonglong)uVar33;
    }
    else {
      uVar29 = 3;
    }
    iVar34 = (int)uVar23;
    if ((float)((uint)(DAT_1803da6a4 - DAT_180380c00) & uVar43) <
        (float)((uint)(DAT_1803da6a4 - (float)(&DAT_18033c8e0)[uVar23]) & uVar43)) {
      uVar29 = 4;
      iVar34 = 4;
    }
    if ((float)((uint)(DAT_1803da6a4 - fVar15) & uVar43) <
        (float)((uint)(DAT_1803da6a4 - (float)(&DAT_18033c8e0)[iVar34]) & uVar43)) {
      uVar29 = 5;
    }
    *(uint *)(puVar35 + 0x40) = uVar29;
    *(undefined4 *)(puVar35 + 0x20) = 6;
    *(undefined8 *)(puVar35 + -8) = 0x1801e4984;
    cVar21 = FUN_1802b1200("DPI scale",puVar35 + 0x40);
    if (cVar21 != '\0') {
      DAT_1803da6a4 = (float)(&DAT_18033c8e0)[*(int *)(puVar35 + 0x40)];
    }
    if (DAT_1803fb24c == 5.60519e-45) {
      *(undefined4 *)(puVar35 + 0x40) = 0x3fc00000;
      *(undefined4 *)(puVar35 + 0x48) = 0x3f400000;
      local_168 = (void *)((ulonglong)local_168._4_4_ << 0x20);
      pfVar30 = (float *)(puVar35 + 0x48);
      if (fVar14 <= DAT_1803da6a4) {
        pfVar30 = &DAT_1803da6a4;
      }
      pfVar26 = (float *)(puVar35 + 0x40);
      if (DAT_1803da6a4 <= fVar15) {
        pfVar26 = pfVar30;
      }
      local_168 = (void *)((ulonglong)(uint)(*pfVar26 * fVar16) << 0x20);
      *(undefined8 *)(puVar35 + -8) = 0x1801e4a14;
      FUN_1802af260(&local_168);
      local_168 = (void *)0x42080000bf800000;
      local_158 = *(longlong *******)(&DAT_1803dc9c8 + lVar40);
      uStack_150 = *(undefined ***)(&DAT_1803dc9d0 + lVar40);
      pcVar38 = "Edit colors##custom_theme";
      if (DAT_1803fa547 != '\0') {
        pcVar38 = "Close colors##custom_theme";
      }
      puVar35[0x28] = 1;
      puVar35[0x20] = DAT_1803fa547;
      *(undefined8 *)(puVar35 + -8) = 0x1801e4a74;
      cVar21 = FUN_18019cb40(pcVar38,0xc,&local_168);
      if (cVar21 != '\0') {
        DAT_1803fa547 = DAT_1803fa547 == '\0';
      }
    }
    *(undefined8 *)(puVar35 + -8) = 0x1801e4a8b;
    FUN_1802afb40();
    *(undefined8 *)(puVar35 + -8) = 0x1801e4a9e;
    cVar21 = FUN_1801a0b60("Auto-load last config",&DAT_1803db385);
    if (cVar21 != '\0') {
      if ((DAT_1803dc960 < 0) || ((int)(DAT_1803fcca0 - DAT_1803fcc98 >> 5) <= DAT_1803dc960)) {
        *(undefined8 *)(puVar35 + 0x50) = 0;
        *(undefined8 *)(puVar35 + 0x58) = 0;
        *(undefined8 *)(puVar35 + 0x60) = 0;
        *(undefined8 *)(puVar35 + 0x68) = 0;
        *(undefined8 *)(puVar35 + -8) = 0x1801e4b0e;
        FUN_18001d080(puVar35 + 0x50,"default",7);
        puVar27 = puVar35 + 0x50;
        uVar37 = uVar37 | 0x40;
      }
      else {
        *(undefined8 *)(puVar35 + -8) = 0x1801e4add;
        puVar27 = (undefined1 *)
                  FUN_18016d4c0(local_288,(longlong)DAT_1803dc960 * 0x20 + DAT_1803fcc98);
        uVar37 = uVar37 | 0x20;
      }
      *(uint *)(puVar35 + 0x44) = uVar37;
      *(undefined8 *)(puVar35 + -8) = 0x1801e4b22;
      FUN_1801a8c20(puVar27);
      if ((uVar37 & 0x40) != 0) {
        uVar37 = uVar37 & 0xffffffbf;
        *(uint *)(puVar35 + 0x44) = uVar37;
        *(undefined8 *)(puVar35 + -8) = 0x1801e4b3a;
        FUN_18020e450(puVar35 + 0x50);
      }
      if ((uVar37 & 0x20) != 0) {
        uVar37 = uVar37 & 0xffffffdf;
        *(uint *)(puVar35 + 0x44) = uVar37;
        *(undefined8 *)(puVar35 + -8) = 0x1801e4b51;
        FUN_18020e450(local_288);
      }
    }
    *(undefined8 *)(puVar35 + -8) = 0x1801e4b64;
    FUN_1801a0b60("Dim background",&DAT_1803da696);
    *(undefined8 *)(puVar35 + -8) = 0x1801e4b77;
    FUN_1801a0b60("Capture notifications",&DAT_1803da695);
    *(undefined8 *)(puVar35 + -8) = 0x1801e4b8a;
    FUN_1801a0b60("Watermark",&DAT_1803e90ac);
    *(undefined8 *)(puVar35 + -8) = 0x1801e4b91;
    cVar21 = FUN_18026ee60(0);
    if (cVar21 != '\0') {
      *(undefined8 *)(puVar35 + -8) = 0x1801e4ba1;
      FUN_180280d00(
                   "Server / tickrate / ping / FPS / clock bar.\nDrag it with the menu open to reposition;\nby default it sits in the top-right corner."
                   );
    }
    if (DAT_180423570 != '\0') {
      *(undefined8 *)(puVar35 + -8) = 0x1801e4bb6;
      FUN_18027f5b0(0,uVar45);
      if (*(char *)(lVar7 + 0x10) == '\0') {
        *(undefined8 *)(puVar35 + -8) = 0x1801e4bc2;
        __dyn_tls_on_demand_init();
      }
      lVar7 = *(longlong *)(lVar7 + 0xec0);
      uVar45 = *(undefined4 *)(lVar7 + 0xcc8);
      *(undefined4 *)(lVar7 + 0xcc8) = 0;
      local_168 = (void *)0x0;
      *(undefined8 *)(puVar35 + -8) = 0x1801e4bf6;
      cVar21 = FUN_1802abf60("Reset##wm_pos",&local_168,0x8000);
      *(undefined4 *)(lVar7 + 0xcc8) = uVar45;
      if (cVar21 != '\0') {
        DAT_180423570 = '\0';
      }
      *(undefined8 *)(puVar35 + -8) = 0x1801e4c10;
      cVar21 = FUN_18026ee60(0);
      if (cVar21 != '\0') {
        *(undefined8 *)(puVar35 + -8) = 0x1801e4c20;
        FUN_180280d00("Snap back to the top-right corner");
      }
    }
    *(undefined8 *)(puVar35 + -8) = 0x1801e4c29;
    FUN_1802af4c0();
    *(undefined8 *)(puVar35 + -8) = 0x1801e4c35;
    FUN_1802aaae0("Panic");
    *(undefined4 *)(puVar35 + 0x40) = 0x3fc00000;
    *(undefined4 *)(puVar35 + 0x48) = 0x3f400000;
    pfVar30 = (float *)(puVar35 + 0x48);
    if (fVar14 <= DAT_1803da6a4) {
      pfVar30 = &DAT_1803da6a4;
    }
    pfVar26 = (float *)(puVar35 + 0x40);
    if (DAT_1803da6a4 <= fVar15) {
      pfVar26 = pfVar30;
    }
    fVar44 = *pfVar26;
    *(undefined8 *)(puVar35 + -8) = 0x1801e4c80;
    FUN_18027f5b0(0,fVar44 * fVar18);
    *(undefined8 *)(puVar35 + -8) = 0x1801e4c9e;
    cVar21 = FUN_18019dc00("##panic_cfg",4,0);
    if (cVar21 != '\0') {
      *(undefined8 *)(puVar35 + -8) = 0x1801e4cae;
      FUN_180280fd0("panic_popup");
    }
    *(undefined4 *)(puVar35 + 0x40) = 0x3fc00000;
    *(undefined4 *)(puVar35 + 0x48) = 0x3f400000;
    pfVar30 = (float *)(puVar35 + 0x48);
    if (fVar14 <= DAT_1803da6a4) {
      pfVar30 = &DAT_1803da6a4;
    }
    pfVar26 = (float *)(puVar35 + 0x40);
    if (DAT_1803da6a4 <= fVar15) {
      pfVar26 = pfVar30;
    }
    fVar44 = *pfVar26;
    *(undefined8 *)(puVar35 + -8) = 0x1801e4cf2;
    FUN_18027f5b0(0,fVar44 * fVar18);
    if (DAT_1803fa46f == '\0') {
      if (((DAT_1803fa520 == 0) && (DAT_1803fa524 == 0)) && (DAT_1803fa528 == 0)) {
        pcVar38 = "set combo";
        puVar42 = &DAT_1803dca28;
      }
      else {
        pcVar38 = "armed";
        puVar42 = &DAT_1803dc9e8;
      }
    }
    else {
      pcVar38 = "active";
      puVar42 = &DAT_1803dca08;
    }
    *(undefined8 *)(puVar35 + -8) = 0x1801e4d61;
    FUN_1802aabb0(puVar42 + lVar40,pcVar38);
    *(undefined8 *)(puVar35 + -8) = 0x1801e4d6d;
    cVar21 = FUN_18019a680("panic_popup");
    if (cVar21 != '\0') {
      *(undefined8 *)(puVar35 + -8) = 0x1801e4d8c;
      FUN_1802aabb0(&DAT_1803dca28 + lVar40,"Restore combo - hold all 3 (no mouse)");
      *(undefined4 *)(puVar35 + 0x40) = 0x3fc00000;
      *(undefined4 *)(puVar35 + 0x48) = 0x3f400000;
      pfVar30 = (float *)(puVar35 + 0x48);
      if (fVar14 <= DAT_1803da6a4) {
        pfVar30 = &DAT_1803da6a4;
      }
      pfVar26 = (float *)(puVar35 + 0x40);
      if (DAT_1803da6a4 <= fVar15) {
        pfVar26 = pfVar30;
      }
      local_168 = (void *)((ulonglong)(uint)(*pfVar26 + *pfVar26) << 0x20);
      *(undefined8 *)(puVar35 + -8) = 0x1801e4de4;
      FUN_1802af260(&local_168);
      local_168 = (void *)0x42dc0000;
      *(undefined8 *)(puVar35 + -8) = 0x1801e4e0c;
      cVar21 = FUN_1802d31a0("##pk1",&DAT_1803fa520,&local_168);
      if (cVar21 != '\0') {
        DAT_1803ff29c = 1;
      }
      if (((DAT_1803fa520 == 1) || (DAT_1803fa520 == 2)) ||
         ((DAT_1803fa520 == 4 || ((DAT_1803fa520 == 5 || (DAT_1803fa520 == 6)))))) {
        DAT_1803fa520 = 0;
      }
      *(undefined4 *)(puVar35 + 0x40) = 0x3fc00000;
      *(undefined4 *)(puVar35 + 0x48) = 0x3f400000;
      pfVar30 = (float *)(puVar35 + 0x48);
      if (fVar14 <= DAT_1803da6a4) {
        pfVar30 = &DAT_1803da6a4;
      }
      pfVar26 = (float *)(puVar35 + 0x40);
      if (DAT_1803da6a4 <= fVar15) {
        pfVar26 = pfVar30;
      }
      fVar44 = *pfVar26;
      *(undefined8 *)(puVar35 + -8) = 0x1801e4e80;
      FUN_18027f5b0(0,fVar44 * fVar17);
      local_168 = (void *)0x42dc0000;
      *(undefined8 *)(puVar35 + -8) = 0x1801e4ea8;
      cVar21 = FUN_1802d31a0("##pk2",&DAT_1803fa524,&local_168);
      if (cVar21 != '\0') {
        DAT_1803ff29c = 1;
      }
      if ((((DAT_1803fa524 == 1) || (DAT_1803fa524 == 2)) || (DAT_1803fa524 == 4)) ||
         ((DAT_1803fa524 == 5 || (DAT_1803fa524 == 6)))) {
        DAT_1803fa524 = 0;
      }
      *(undefined4 *)(puVar35 + 0x40) = 0x3fc00000;
      *(undefined4 *)(puVar35 + 0x48) = 0x3f400000;
      pfVar30 = (float *)(puVar35 + 0x48);
      if (fVar14 <= DAT_1803da6a4) {
        pfVar30 = &DAT_1803da6a4;
      }
      pfVar26 = (float *)(puVar35 + 0x40);
      if (DAT_1803da6a4 <= fVar15) {
        pfVar26 = pfVar30;
      }
      fVar44 = *pfVar26;
      *(undefined8 *)(puVar35 + -8) = 0x1801e4f1c;
      FUN_18027f5b0(0,fVar44 * fVar17);
      local_168 = (void *)0x42dc0000;
      *(undefined8 *)(puVar35 + -8) = 0x1801e4f44;
      cVar21 = FUN_1802d31a0("##pk3",&DAT_1803fa528,&local_168);
      if (cVar21 != '\0') {
        DAT_1803ff29c = 1;
      }
      if (((DAT_1803fa528 == 1) || (DAT_1803fa528 == 2)) ||
         ((DAT_1803fa528 == 4 || ((DAT_1803fa528 == 5 || (DAT_1803fa528 == 6)))))) {
        DAT_1803fa528 = 0;
      }
      if (DAT_1803facfd == '\0') {
        *(undefined8 *)(puVar35 + -8) = 0x1801e4f9f;
        FUN_180281800();
      }
      else if (DAT_1803fcbf0 != DAT_1803fcbf8) {
        DAT_1803fcbf8 = DAT_1803fcbf8 + -8;
      }
    }
  }
  *(undefined8 *)(puVar35 + -8) = 0x1801e4fa4;
  FUN_180273410();
  *(undefined8 *)(puVar35 + -8) = 0x1801e4fae;
  FUN_18026abb0(2);
  *(undefined8 *)(puVar35 + -8) = 0x1801e4fb8;
  FUN_18026a890(2);
  uVar45 = DAT_180381384;
  *(undefined8 *)(puVar35 + -8) = 0x1801e4fdd;
  cVar21 = FUN_18019fbc0("Storage",6,CONCAT44(DAT_180381384,fVar46));
  if (cVar21 != '\0') {
    *(undefined8 *)(puVar35 + -8) = 0x1801e4ff1;
    FUN_1802aaae0(&DAT_18034f9b8);
    *(undefined8 *)(puVar35 + -8) = 0x1801e500e;
    FUN_1802aabb0(&DAT_1803dca28 + lVar40,"Gmod update 2026.09");
    *(undefined8 *)(puVar35 + -8) = 0x1801e5013;
    FUN_1802afb40();
    if ((DAT_180426238 & 1) == 0) {
      DAT_180426238 = DAT_180426238 | 1;
      *(undefined8 *)(puVar35 + -8) = 0x1801e5032;
      atexit((_func_5014 *)&LAB_18030b460);
    }
    if (DAT_1803e7410 == 0) {
      *(undefined8 *)(puVar35 + -8) = 0x1801e5054;
      uVar28 = FUN_1801a8aa0(local_188);
      *(undefined8 *)(puVar35 + -8) = 0x1801e5061;
      FUN_18020e540(local_228,uVar28);
      *(uint *)(puVar35 + 0x44) = uVar37 | 0x80;
      *(undefined8 *)(puVar35 + -8) = 0x1801e5076;
      puVar31 = (undefined8 *)FUN_1801a90e0(local_1a8,local_228);
      if (puVar31 != &DAT_1803e7400) {
        if (0xf < DAT_1803e7418) {
          pvVar12 = (void *)CONCAT44(DAT_1803e7400._4_4_,(undefined4)DAT_1803e7400);
          pvVar32 = pvVar12;
          if ((0xfff < DAT_1803e7418 + 1) &&
             (pvVar32 = *(void **)((longlong)pvVar12 + -8),
             0x1f < (ulonglong)((longlong)pvVar12 + (-8 - (longlong)pvVar32)))) {
            pvVar32 = (void *)0x5;
            pcVar9 = (code *)swi(0x29);
            (*pcVar9)();
            puVar35 = puVar35 + 8;
          }
          *(undefined8 *)(puVar35 + -8) = 0x1801e50cb;
          free(pvVar32);
        }
        DAT_1803e7400._0_4_ = *(undefined4 *)puVar31;
        DAT_1803e7400._4_4_ = *(undefined4 *)((longlong)puVar31 + 4);
        uRam00000001803e7408 = *(undefined4 *)(puVar31 + 1);
        uRam00000001803e740c = *(undefined4 *)((longlong)puVar31 + 0xc);
        DAT_1803e7410 = puVar31[2];
        DAT_1803e7418 = puVar31[3];
        puVar31[2] = 0;
        puVar31[3] = 0xf;
        *(undefined1 *)puVar31 = 0;
      }
      *(undefined8 *)(puVar35 + -8) = 0x1801e5111;
      FUN_18020e450(local_1a8);
      *(uint *)(puVar35 + 0x44) = uVar37;
      *(undefined8 *)(puVar35 + -8) = 0x1801e5122;
      FUN_18021e290(local_228);
      *(undefined8 *)(puVar35 + -8) = 0x1801e512f;
      FUN_18021e290(local_188);
    }
    *(undefined8 *)(puVar35 + -8) = 0x1801e5134;
    FUN_1802af4c0();
    *(undefined8 *)(puVar35 + -8) = 0x1801e514a;
    FUN_1802aabb0(&DAT_1803dca28 + lVar40,"Folder:");
    *(undefined8 *)(puVar35 + -8) = 0x1801e5156;
    FUN_18027f5b0(0,uVar45);
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar41 * 8) + 0x10) == '\0') {
      *(undefined8 *)(puVar35 + -8) = 0x1801e5176;
      __dyn_tls_on_demand_init();
    }
    *(undefined8 *)(puVar35 + -8) = 0x1801e51b9;
    cVar21 = FUN_18019f1f0();
    if (cVar21 != '\0') {
      local_158 = (longlong ******)0x0;
      uStack_150 = &PTR_vftable_std__System_error_category_1803e9500;
      *(undefined8 *)(puVar35 + -8) = 0x1801e51dd;
      uVar28 = FUN_1801a8aa0(local_288);
      *(undefined8 *)(puVar35 + -8) = 0x1801e51ed;
      FUN_180067d80(uVar28,&local_158);
      *(undefined8 *)(puVar35 + -8) = 0x1801e51f7;
      FUN_18021e290(local_288);
      *(undefined8 *)(puVar35 + -8) = 0x1801e5200;
      lpFile = (LPCWSTR)FUN_1801a8aa0();
      if (7 < *(ulonglong *)(lpFile + 0xc)) {
        lpFile = *(LPCWSTR *)lpFile;
      }
      *(undefined4 *)(puVar35 + 0x28) = 1;
      *(undefined8 *)(puVar35 + 0x20) = 0;
      *(undefined8 *)(puVar35 + -8) = 0x1801e522d;
      ShellExecuteW((HWND)0x0,L"open",lpFile,(LPCWSTR)0x0,*(LPCWSTR *)(puVar35 + 0x20),
                    *(INT *)(puVar35 + 0x28));
      *(undefined8 *)(puVar35 + -8) = 0x1801e5237;
      FUN_18021e290(local_288);
    }
    *(undefined8 *)(puVar35 + -8) = 0x1801e523e;
    cVar21 = FUN_18026ee60(0);
    if (cVar21 != '\0') {
      puVar31 = &DAT_1803e7400;
      if (0xf < DAT_1803e7418) {
        puVar31 = (undefined8 *)CONCAT44(DAT_1803e7400._4_4_,(undefined4)DAT_1803e7400);
      }
      *(undefined8 *)(puVar35 + -8) = 0x1801e5261;
      FUN_180280d00("Click to open the folder in Explorer\n%s",puVar31);
    }
    *(undefined8 *)(puVar35 + -8) = 0x1801e5277;
    FUN_1802aabb0(&DAT_1803dca28 + lVar40,"Created by Somik | mayrcheat");
  }
  *(undefined8 *)(puVar35 + -8) = 0x1801e527c;
  FUN_180273410();
  *(undefined8 *)(puVar35 + -8) = 0x1801e5286;
  FUN_18026abb0(2);
  *(undefined8 *)(puVar35 + -8) = 0x1801e5290;
  FUN_18026a890(2);
  *(undefined8 *)(puVar35 + -8) = 0x1801e5295;
  FUN_180273410();
  *(undefined8 *)(puVar35 + -8) = 0x1801e52a4;
  return;
}


