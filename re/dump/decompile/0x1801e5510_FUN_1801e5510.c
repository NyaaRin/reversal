// 0x1801e5510  FUN_1801e5510
// size=2814 thunk=false
// signature: undefined FUN_1801e5510()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801e5510(void)

{
  char cVar1;
  longlong lVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  size_t sVar7;
  longlong lVar8;
  longlong lVar10;
  longlong *plVar11;
  undefined *puVar12;
  float *pfVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  char *pcVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_188 [32];
  uint local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  ulonglong local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  float local_118;
  float local_114;
  undefined1 local_110 [16];
  undefined8 local_100;
  float local_f8;
  float local_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  float local_e4;
  ulonglong local_e0;
  float *pfVar9;
  
  local_e0 = DAT_1803da4c0 ^ (ulonglong)auStack_188;
  if ((DAT_1803da695 != '\0') && (DAT_1803fa46f == '\0')) {
    if ((DAT_1804275f8 & 1) == 0) {
      DAT_1804275f8 = DAT_1804275f8 | 1;
      atexit((_func_5014 *)&LAB_18030b470);
    }
    pcVar17 = s_Screen_capture_1803e9658;
    uVar15 = (ulonglong)_tls_index;
    if (DAT_1804236ac != DAT_180425774) {
      DAT_180425774 = DAT_1804236ac;
      lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8);
      if (*(char *)(lVar2 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      _DAT_1803e6ec8 = *(double *)(*(longlong *)(lVar2 + 0xec0) + 0x10);
      sVar7 = strlen(PTR_s_Screen_capture_1803e90c8);
      FUN_180212700(s_Screen_capture_1803e9658,PTR_s_Screen_capture_1803e90c8,sVar7);
    }
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8);
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    fVar21 = DAT_180380e28;
    fVar3 = DAT_180380bb0;
    dVar20 = *(double *)(*(longlong *)(lVar2 + 0xec0) + 0x10) - _DAT_1803e6ec8;
    if ((0.0 <= dVar20) && (dVar20 < _DAT_180380d78)) {
      local_f0 = (ulonglong)local_f0._4_4_ << 0x20;
      pfVar13 = (float *)&local_f0;
      if (-1 < (int)DAT_1803fb24c) {
        pfVar13 = &DAT_1803fb24c;
      }
      pfVar9 = &local_118;
      if ((int)DAT_1803fb24c < 5) {
        pfVar9 = pfVar13;
      }
      DAT_1803fb24c = *pfVar9;
      lVar8 = (longlong)(int)DAT_1803fb24c;
      lVar14 = lVar8 * 200;
      local_118 = (float)dVar20;
      fVar18 = local_118 / _DAT_180380a5c;
      if (0.0 <= fVar18) {
        fVar23 = DAT_180380bb0;
        if (fVar18 <= DAT_180380bb0) {
          fVar23 = fVar18;
        }
      }
      else {
        fVar23 = 0.0;
      }
      fVar18 = (DAT_180380eb8 - local_118) / _DAT_180380a90;
      if (0.0 <= fVar18) {
        fVar19 = DAT_180380bb0;
        if (fVar18 <= DAT_180380bb0) {
          fVar19 = fVar18;
        }
      }
      else {
        fVar19 = 0.0;
      }
      if (fVar19 <= fVar23) {
        fVar23 = fVar19;
      }
      fVar18 = (DAT_180380e28 - (fVar23 + fVar23)) * fVar23 * fVar23;
      if (*(char *)(lVar2 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      fVar23 = *(float *)(*(longlong *)(lVar2 + 0xec0) + 0x30);
      fVar19 = fVar23 + DAT_180381004;
      fVar19 = (((fVar23 - _DAT_1803811f8) - DAT_180381004) - fVar19) * fVar18 + fVar19;
      fVar23 = (*(float *)(*(longlong *)(lVar2 + 0xec0) + 0x34) - DAT_1803810e8) - DAT_180381004;
      fVar24 = fVar19 + _DAT_1803811f8;
      fVar25 = fVar23 + DAT_1803810e8;
      local_128 = CONCAT44(fVar23,fVar19);
      uStack_120 = CONCAT44(fVar25,fVar24);
      if (*(char *)(lVar2 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar10 = FUN_18026f7d0(**(undefined8 **)(*(longlong *)(lVar2 + 0xec0) + 0x2060),1,
                             "##Foreground");
      local_f0 = CONCAT44(fVar25 + DAT_180380f40,fVar24 + 0.0);
      local_100 = CONCAT44(fVar23 + DAT_180380f40,fVar19 + 0.0);
      local_160._0_4_ = 0.0;
      local_168 = DAT_180380fcc;
      FUN_180295000(lVar10,&local_100,&local_f0,(int)(fVar18 * _DAT_1803810f4) << 0x18);
      local_100 = CONCAT44((*(float *)(&DAT_1803dc99c + lVar14) -
                           *(float *)(&DAT_1803dc97c + lVar14)) * DAT_180380a68 +
                           *(float *)(&DAT_1803dc97c + lVar14),
                           (*(float *)(&DAT_1803dc998 + lVar14) -
                           *(float *)(&DAT_1803dc978 + lVar14)) * DAT_180380a68 +
                           *(float *)(&DAT_1803dc978 + lVar14));
      local_f8 = (*(float *)(&DAT_1803dc9a0 + lVar14) - *(float *)(&DAT_1803dc980 + lVar14)) *
                 DAT_180380a68 + *(float *)(&DAT_1803dc980 + lVar14);
      local_f4 = ((*(float *)(&DAT_1803dc9a4 + lVar14) - *(float *)(&DAT_1803dc984 + lVar14)) *
                  DAT_180380a68 + *(float *)(&DAT_1803dc984 + lVar14)) * fVar18 * DAT_180380b98;
      uVar4 = FUN_180268ed0(&local_100);
      uVar5 = DAT_180380fc4;
      local_160._0_4_ = 0.0;
      local_168 = DAT_180380fc4;
      FUN_180295000(lVar10,&local_128,&uStack_120,uVar4);
      local_100 = CONCAT44((*(float *)(&DAT_1803dc9fc + lVar14) -
                           *(float *)(&DAT_1803dc9bc + lVar14)) * DAT_180380a40 +
                           *(float *)(&DAT_1803dc9bc + lVar14),
                           (*(float *)(&DAT_1803dc9f8 + lVar14) -
                           *(float *)(&DAT_1803dc9b8 + lVar14)) * DAT_180380a40 +
                           *(float *)(&DAT_1803dc9b8 + lVar14));
      local_f8 = (*(float *)(&DAT_1803dca00 + lVar14) - *(float *)(&DAT_1803dc9c0 + lVar14)) *
                 DAT_180380a40 + *(float *)(&DAT_1803dc9c0 + lVar14);
      local_f4 = ((*(float *)(&DAT_1803dca04 + lVar14) - *(float *)(&DAT_1803dc9c4 + lVar14)) *
                  DAT_180380a40 + *(float *)(&DAT_1803dc9c4 + lVar14)) * fVar18;
      uVar4 = FUN_180268ed0(&local_100);
      local_158 = (char *)((ulonglong)local_158._4_4_ << 0x20);
      local_160._0_4_ = fVar3;
      local_168 = uVar5;
      FUN_180294f00(lVar10,&local_128,&uStack_120,uVar4);
      local_f0 = *(longlong *)(&DAT_1803dc9f8 + lVar14);
      local_e8 = *(undefined4 *)(&DAT_1803dca00 + lVar14);
      local_e4 = fVar18 * *(float *)(&DAT_1803dca04 + lVar14);
      local_100 = CONCAT44(fVar25,fVar19 + fVar21);
      uVar4 = FUN_180268ed0(&local_f0);
      local_160._0_4_ = 1.12104e-43;
      local_168 = uVar5;
      FUN_180295000(lVar10,&local_128,&local_100,uVar4);
      fVar22 = fVar19 + DAT_180380fe0;
      fVar21 = fVar23 + DAT_180380fe8;
      local_f0 = CONCAT44(fVar21,fVar22);
      local_128 = *(undefined8 *)(&DAT_1803dc9f8 + lVar14);
      uStack_120 = CONCAT44(fVar18 * _DAT_1803809f4 * *(float *)(&DAT_1803dca04 + lVar14),
                            *(undefined4 *)(&DAT_1803dca00 + lVar14));
      local_100 = CONCAT44(fVar21 + DAT_180381088,fVar22 + DAT_180381088);
      uVar5 = FUN_180268ed0(&local_128);
      local_160 = (char *)((ulonglong)local_160._4_4_ << 0x20);
      local_168 = DAT_180380fa8;
      FUN_180295000(lVar10,&local_f0,&local_100,uVar5);
      local_128 = *(undefined8 *)(&DAT_1803dc9f8 + lVar14);
      uStack_120 = CONCAT44(fVar18 * *(float *)(&DAT_1803dca04 + lVar14),
                            *(undefined4 *)(&DAT_1803dca00 + lVar14));
      fVar22 = fVar22 + DAT_180381024;
      fVar21 = fVar21 + DAT_180381024;
      uVar5 = FUN_180268ed0(&local_128);
      local_168 = DAT_180380fc8;
      FUN_18019ab20(lVar10,0xf,CONCAT44(fVar21,fVar22),uVar5);
      local_128 = *(undefined8 *)(&DAT_1803dca18 + lVar14);
      uStack_120 = CONCAT44(fVar18 * *(float *)(&DAT_1803dca24 + lVar14),
                            *(undefined4 *)(&DAT_1803dca20 + lVar14));
      uVar6 = FUN_180268ed0(&local_128);
      fVar21 = fVar19 + DAT_1803810d4;
      local_100 = CONCAT44(fVar23 + DAT_180380fe0,fVar21);
      lVar16 = *(longlong *)(lVar10 + 0x38);
      if ((uVar6 & 0xff000000) != 0) {
        local_128 = *(undefined8 *)(lVar10 + 0x60);
        uStack_120 = *(undefined8 *)(lVar10 + 0x68);
        local_140 = 0;
        local_148 = local_148 & 0xffffffff00000000;
        local_150 = 0;
        local_158 = "SCREEN CAPTURE";
        local_160 = (char *)&local_128;
        local_168 = uVar6;
        FUN_18029e990(*(undefined8 *)(lVar16 + 0x18),lVar10,*(undefined4 *)(lVar16 + 0x20),
                      &local_100);
        lVar16 = *(longlong *)(lVar10 + 0x38);
      }
      if (0xf < DAT_1803e9670) {
        pcVar17 = (char *)s_Screen_capture_1803e9658._0_8_;
      }
      local_128 = *(undefined8 *)(&DAT_1803dca28 + lVar14);
      uStack_120 = CONCAT44(fVar18 * *(float *)((longlong)&DAT_1803dca30 + lVar14 + 4),
                            *(undefined4 *)(&DAT_1803dca30 + lVar8 * 0x19));
      uVar6 = FUN_180268ed0(&local_128);
      local_100 = CONCAT44(fVar23 + DAT_180381078,fVar21);
      if ((((uVar6 & 0xff000000) != 0) && (pcVar17 != (char *)0x0)) && (*pcVar17 != '\0')) {
        local_128 = *(undefined8 *)(lVar10 + 0x60);
        uStack_120 = *(undefined8 *)(lVar10 + 0x68);
        local_140 = 0;
        local_148 = local_148 & 0xffffffff00000000;
        local_150 = 0;
        local_160 = (char *)&local_128;
        local_168 = uVar6;
        local_158 = pcVar17;
        FUN_18029e990(*(undefined8 *)(lVar16 + 0x18),lVar10,*(undefined4 *)(lVar16 + 0x20),
                      &local_100);
      }
      local_100 = 0x93fd561a96ab0c67;
      local_f0 = 0x6c96c33ad11a014c;
      plVar11 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_128,&local_100);
      plVar11 = (longlong *)FUN_180241a30(*plVar11 + 0x28,local_110,&local_f0);
      pcVar17 = (char *)FUN_1801fcfc0(*plVar11 + 0x28);
      cVar1 = *pcVar17;
      pcVar17 = "PROTECTION OFF";
      if (cVar1 != '\0') {
        pcVar17 = "CLEAN FRAME SENT";
      }
      if (*(char *)(lVar2 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      local_138 = 0;
      local_148 = 0;
      local_150 = 0;
      local_158 = (char *)0x0;
      local_168 = DAT_180381384;
      local_160 = pcVar17;
      FUN_18029e350(&local_100,*(undefined8 *)(*(longlong *)(lVar2 + 0xec0) + 0x1228),
                    *(undefined4 *)(*(longlong *)(lVar2 + 0xec0) + 0x1238),DAT_180381308);
      local_100 = CONCAT44(fVar23 + _DAT_1803810b0,
                           (fVar24 - (float)(int)((float)local_100 + DAT_180380ba8)) - DAT_180380fe8
                          );
      puVar12 = &DAT_1803dc9e8;
      if (cVar1 == '\0') {
        puVar12 = &DAT_1803dc9f8;
      }
      local_128 = CONCAT44(*(undefined4 *)(puVar12 + lVar14 + 4),*(undefined4 *)(puVar12 + lVar14));
      uStack_120 = CONCAT44(fVar18 * *(float *)(puVar12 + lVar14 + 0xc),
                            *(undefined4 *)(puVar12 + lVar14 + 8));
      uVar6 = FUN_180268ed0(&local_128);
      if (((uVar6 & 0xff000000) != 0) && (*pcVar17 != '\0')) {
        local_128 = *(undefined8 *)(lVar10 + 0x60);
        uStack_120 = *(undefined8 *)(lVar10 + 0x68);
        local_140 = 0;
        local_148 = local_148 & 0xffffffff00000000;
        local_150 = 0;
        local_160 = (char *)&local_128;
        local_168 = uVar6;
        local_158 = pcVar17;
        FUN_18029e990(*(undefined8 *)(*(longlong *)(lVar10 + 0x38) + 0x18),lVar10,
                      *(undefined4 *)(*(longlong *)(lVar10 + 0x38) + 0x20),&local_100);
      }
      local_118 = local_118 / DAT_180380eb8;
      fVar21 = 0.0;
      if ((0.0 <= local_118) && (fVar21 = fVar3, local_118 <= fVar3)) {
        fVar21 = local_118;
      }
      local_128 = *(undefined8 *)(&DAT_1803dc9f8 + lVar14);
      uStack_120 = CONCAT44(fVar18 * *(float *)(&DAT_1803dca04 + lVar14),
                            *(undefined4 *)(&DAT_1803dca00 + lVar14));
      local_118 = fVar19 + DAT_180380e9c;
      local_100 = CONCAT44(fVar25,(fVar3 - fVar21) * DAT_1803811f4 + local_118);
      local_114 = fVar25 - DAT_180380e28;
      uVar5 = FUN_180268ed0(&local_128);
      local_160 = (char *)((ulonglong)local_160 & 0xffffffff00000000);
      local_168 = DAT_180380d30;
      FUN_180295000(lVar10,&local_118,&local_100,uVar5);
    }
  }
  return;
}


