// 0x180183470  FUN_180183470
// size=2537 thunk=false
// signature: undefined FUN_180183470()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_180183470(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  code *pcVar1;
  void *pvVar2;
  longlong lVar3;
  char cVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  size_t sVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float *pfVar16;
  void *pvVar17;
  uint uVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  int iVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_3c8 [32];
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined8 *local_3a0;
  undefined4 local_398;
  undefined4 local_394;
  undefined4 local_390;
  longlong *local_380;
  ulonglong local_38;
  
  puVar19 = auStack_3c8;
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_3c8;
  uVar22 = 1;
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar21 = 1;
  local_3a8 = 1;
  puVar20 = auStack_3c8;
  if ((((DAT_1803fa668 != (longlong *)0x0) &&
       (local_3a0 = param_1, cVar4 = (**(code **)(*DAT_1803fa668 + 0xd0))(), puVar20 = auStack_3c8,
       cVar4 != '\0')) && (puVar20 = auStack_3c8, DAT_1803fa360 != (longlong *)0x0)) &&
     (puVar20 = auStack_3c8, DAT_1803fa608 != 0)) {
    pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar6 = (**(code **)(*DAT_1803fa668 + 0x60))();
    local_380 = (longlong *)(*pcVar1)(DAT_1803fa360,uVar6);
    if (local_380 == (longlong *)0x0) {
      local_398 = 0;
      local_394 = 0;
      local_390 = 0;
    }
    else {
      puVar8 = (undefined4 *)(**(code **)(*local_380 + 0x48))(local_380);
      local_398 = *puVar8;
      local_394 = puVar8[1];
      local_390 = puVar8[2];
    }
    local_3a4 = 1;
    while (iVar21 <= *(int *)(DAT_1803fa608 + 0x1c)) {
      pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
      *(undefined8 *)(puVar19 + -8) = 0x1801835a1;
      plVar9 = (longlong *)(*pcVar1)();
      *(longlong **)(puVar19 + 0x40) = plVar9;
      if (plVar9 != (longlong *)0x0) {
        *(undefined8 *)(puVar19 + 0x150) = 0;
        puVar19[0x158] = 0;
        *(undefined8 *)(puVar19 + 0x160) = 0;
        *(undefined4 *)(puVar19 + 0x168) = 0;
        *(undefined8 *)(puVar19 + 0x170) = 0;
        *(undefined8 *)(puVar19 + 0x178) = 0;
        *(undefined8 *)(puVar19 + 0x180) = 0;
        *(undefined8 *)(puVar19 + 0x188) = 0;
        *(undefined8 *)(puVar19 + 0x180) = 0;
        *(undefined8 *)(puVar19 + 0x188) = 0xf;
        puVar19[0x170] = 0;
        *(undefined8 *)(puVar19 + 400) = 0;
        *(undefined8 *)(puVar19 + 0x198) = 0;
        *(undefined8 *)(puVar19 + 0x1a0) = 0;
        *(undefined8 *)(puVar19 + 0x1a8) = 0;
        *(undefined8 *)(puVar19 + 0x1a0) = 0;
        *(undefined8 *)(puVar19 + 0x1a8) = 0xf;
        puVar19[400] = 0;
        *(undefined8 *)(puVar19 + 0x1b0) = 0;
        *(undefined8 *)(puVar19 + 0x1b8) = 0;
        *(undefined8 *)(puVar19 + 0x1c0) = 0;
        *(undefined8 *)(puVar19 + 0x1c8) = 0;
        *(undefined8 *)(puVar19 + 0x1c0) = 0;
        *(undefined8 *)(puVar19 + 0x1c8) = 0xf;
        puVar19[0x1b0] = 0;
        *(undefined8 *)(puVar19 + 0x1d0) = 0;
        *(undefined8 *)(puVar19 + 0x1d8) = 0;
        *(undefined8 *)(puVar19 + 0x1e0) = 0;
        *(undefined8 *)(puVar19 + 0x1e8) = 0;
        *(undefined8 *)(puVar19 + 0x1e0) = 0;
        *(undefined8 *)(puVar19 + 0x1e8) = 0xf;
        puVar19[0x1d0] = 0;
        *(undefined8 *)(puVar19 + 0x1f0) = 0;
        *(undefined2 *)(puVar19 + 0x1f8) = 0;
        puVar19[0x1fa] = 0;
        *(int *)(puVar19 + 0x150) = iVar21;
        puVar19[0x157] = plVar9 == *(longlong **)(puVar19 + 0x48);
        *(undefined8 *)(puVar19 + -8) = 0x1801836f0;
        memset(puVar19 + 0x240,0,0x144);
        pcVar1 = *(code **)(*DAT_1803fa668 + 0x40);
        *(undefined8 *)(puVar19 + -8) = 0x180183708;
        cVar4 = (*pcVar1)(DAT_1803fa668,iVar21,puVar19 + 0x240);
        if (cVar4 == '\0') {
LAB_1801838f2:
          if (puVar19[0x154] != '\0') goto LAB_180183932;
          *(undefined8 *)(puVar19 + -8) = 0x180183909;
          FUN_18020e450(puVar19 + 0x1d0);
          *(undefined8 *)(puVar19 + -8) = 0x180183917;
          FUN_18020e450(puVar19 + 0x1b0);
          *(undefined8 *)(puVar19 + -8) = 0x180183925;
          FUN_18020e450(puVar19 + 400);
        }
        else {
          puVar19[0x154] = 1;
          *(undefined8 *)(puVar19 + -8) = 0x180183725;
          sVar10 = strlen(puVar19 + 0x240);
          *(undefined8 *)(puVar19 + -8) = 0x18018373d;
          FUN_180212700(puVar19 + 400,puVar19 + 0x240,sVar10);
          puVar19[0x156] = puVar19[0x36c];
          if (puVar19[0x36c] != '\0') {
            *(undefined4 *)(puVar19 + 0x168) = 0;
            *(undefined8 *)(puVar19 + 0x160) = 0;
            *(undefined8 *)(puVar19 + -8) = 0x180183779;
            FUN_180212700(puVar19 + 0x170,&DAT_1803631f0,3);
            goto LAB_1801838f2;
          }
          uVar18 = *(uint *)(puVar19 + 0x2e8);
          *(uint *)(puVar19 + 0x168) = uVar18;
          uVar11 = (ulonglong)uVar18 + 0x110000100000000;
          if (uVar18 == 0) {
            uVar11 = 0;
          }
          *(ulonglong *)(puVar19 + 0x160) = uVar11;
          if (uVar18 != 0) {
            *(undefined8 *)(puVar19 + -8) = 0x1801837b0;
            puVar12 = (undefined8 *)FUN_180182cd0(puVar19 + 0xe8);
            uVar22 = uVar22 | 2;
            *(uint *)(puVar19 + 0x20) = uVar22;
            if ((undefined8 *)(puVar19 + 0x170) != puVar12) goto LAB_180183812;
LAB_1801838af:
            if ((uVar22 & 4) != 0) {
              uVar22 = uVar22 & 0xfffffffb;
              *(uint *)(puVar19 + 0x20) = uVar22;
              *(undefined8 *)(puVar19 + -8) = 0x1801838cb;
              FUN_18020e450(puVar19 + 0xa0);
            }
            if ((uVar22 & 2) != 0) {
              uVar22 = uVar22 & 0xfffffffd;
              *(uint *)(puVar19 + 0x20) = uVar22;
              *(undefined8 *)(puVar19 + -8) = 0x1801838e8;
              FUN_18020e450(puVar19 + 0xe8);
            }
            goto LAB_1801838f2;
          }
          *(undefined8 *)(puVar19 + 0xa0) = 0;
          *(undefined8 *)(puVar19 + 0xa8) = 0;
          *(undefined8 *)(puVar19 + 0xb0) = 0;
          *(undefined8 *)(puVar19 + 0xb8) = 0;
          *(undefined8 *)(puVar19 + -8) = 0x180183801;
          FUN_18001d080(puVar19 + 0xa0,&DAT_1803410ec,1);
          puVar12 = (undefined8 *)(puVar19 + 0xa0);
          uVar22 = uVar22 | 4;
          *(uint *)(puVar19 + 0x20) = uVar22;
LAB_180183812:
          if (*(ulonglong *)(puVar19 + 0x188) < 0x10) {
LAB_180183855:
            *(undefined8 *)(puVar19 + 0x180) = 0;
            *(undefined8 *)(puVar19 + 0x188) = 0xf;
            puVar19[0x170] = 0;
            *(undefined8 *)(puVar19 + 0x170) = *puVar12;
            *(undefined8 *)(puVar19 + 0x178) = puVar12[1];
            *(undefined8 *)(puVar19 + 0x180) = puVar12[2];
            *(undefined8 *)(puVar19 + 0x188) = puVar12[3];
            puVar12[2] = 0;
            puVar12[3] = 0xf;
            *(undefined1 *)puVar12 = 0;
            goto LAB_1801838af;
          }
          pvVar2 = *(void **)(puVar19 + 0x170);
          pvVar17 = pvVar2;
          if ((*(ulonglong *)(puVar19 + 0x188) + 1 < 0x1000) ||
             (pvVar17 = *(void **)((longlong)pvVar2 + -8),
             (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar17)) < 0x20)) {
            *(undefined8 *)(puVar19 + -8) = 0x180183855;
            free(pvVar17);
            goto LAB_180183855;
          }
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar19 = puVar19 + 8;
LAB_180183932:
          *(undefined8 *)(puVar19 + -8) = 0x18018393a;
          uVar5 = FUN_18001c330(plVar9);
          puVar19[0x155] = uVar5;
          pcVar1 = *(code **)(*plVar9 + 0x20);
          *(undefined8 *)(puVar19 + -8) = 0x180183968;
          plVar13 = (longlong *)(*pcVar1)(plVar9);
          if (plVar13 == (longlong *)0x0) {
            uVar5 = 1;
          }
          else {
            pcVar1 = *(code **)(*plVar13 + 0x40);
            *(undefined8 *)(puVar19 + -8) = 0x18018397a;
            uVar5 = (*pcVar1)(plVar13);
          }
          puVar19[0x158] = uVar5;
          if ((DAT_180427800 & 1) == 0) {
            DAT_180427800 = DAT_180427800 | 1;
            *(undefined1 **)(puVar19 + 0x50) = puVar19 + 0x60;
            *(undefined8 *)(puVar19 + 0x60) = 0;
            *(undefined8 *)(puVar19 + 0x68) = 0;
            *(undefined8 *)(puVar19 + 0x70) = 0;
            *(undefined8 *)(puVar19 + 0x78) = 0;
            *(undefined8 *)(puVar19 + -8) = 0x1801839e9;
            FUN_18001d080(puVar19 + 0x60,"DT_BaseEntity",0xd);
            *(undefined1 **)(puVar19 + 0xc0) = puVar19 + 0x60;
            *(undefined1 **)(puVar19 + 200) = puVar19 + 0x108;
            *(undefined8 *)(puVar19 + -8) = 0x180183a18;
            uVar14 = FUN_18016d4c0(puVar19 + 0x108,puVar19 + 0x60);
            *(undefined8 *)(puVar19 + -8) = 0x180183a28;
            uVar14 = FUN_180018ef0(&DAT_1803fac80,uVar14);
            *(undefined8 *)(puVar19 + -8) = 0x180183a35;
            FUN_18020e450(puVar19 + 0x60);
            *(undefined1 **)(puVar19 + 0xd0) = puVar19 + 0x80;
            *(undefined8 *)(puVar19 + 0x80) = 0;
            *(undefined8 *)(puVar19 + 0x88) = 0;
            *(undefined8 *)(puVar19 + 0x90) = 0;
            *(undefined8 *)(puVar19 + 0x98) = 0;
            *(undefined8 *)(puVar19 + -8) = 0x180183a7a;
            FUN_18001d080(puVar19 + 0x80,"m_iTeamNum",10);
            *(undefined1 **)(puVar19 + 0xd8) = puVar19 + 0x80;
            *(undefined1 **)(puVar19 + 0xe0) = puVar19 + 0x128;
            *(undefined8 *)(puVar19 + -8) = 0x180183aaf;
            uVar15 = FUN_18016d4c0(puVar19 + 0x128,puVar19 + 0x80);
            *(undefined8 *)(puVar19 + -8) = 0x180183abb;
            iVar7 = FUN_180018c10(uVar14,uVar15);
            *(undefined8 *)(puVar19 + -8) = 0x180183aca;
            FUN_18020e450(puVar19 + 0x80);
            DAT_1805c7c24 = iVar7;
          }
          if (0 < DAT_1805c7c24) {
            *(undefined4 *)(puVar19 + 0x1f0) =
                 *(undefined4 *)((longlong)DAT_1805c7c24 + (longlong)plVar9);
          }
          if ((*(longlong *)(puVar19 + 0x48) != 0) && (puVar19[0x157] == '\0')) {
            pcVar1 = *(code **)(*plVar9 + 0x48);
            *(undefined8 *)(puVar19 + -8) = 0x180183b2c;
            pfVar16 = (float *)(*pcVar1)(plVar9);
            fVar24 = *(float *)(puVar19 + 0x30) - *pfVar16;
            *(float *)(puVar19 + 0x50) = fVar24;
            fVar23 = *(float *)(puVar19 + 0x34) - pfVar16[1];
            *(float *)(puVar19 + 0x54) = fVar23;
            fVar25 = *(float *)(puVar19 + 0x38) - pfVar16[2];
            *(float *)(puVar19 + 0x58) = fVar25;
            *(undefined8 *)(puVar19 + -8) = 0x180183b7b;
            uVar6 = (*(code *)PTR_FUN_1803da018)
                              (fVar23 * fVar23 + fVar24 * fVar24 + fVar25 * fVar25);
            *(undefined4 *)(puVar19 + 500) = uVar6;
          }
          *(undefined8 *)(puVar19 + -8) = 0x180183bc1;
          FUN_180020a60(puVar19 + 0x200,iVar21);
          if (*(ulonglong *)(puVar19 + 0x1c8) < 0x10) {
LAB_180183c05:
            *(undefined8 *)(puVar19 + 0x1c0) = 0;
            *(undefined8 *)(puVar19 + 0x1c8) = 0xf;
            puVar19[0x1b0] = 0;
            *(undefined8 *)(puVar19 + 0x1b0) = *(undefined8 *)(puVar19 + 0x220);
            *(undefined8 *)(puVar19 + 0x1b8) = *(undefined8 *)(puVar19 + 0x228);
            *(undefined8 *)(puVar19 + 0x1c0) = *(undefined8 *)(puVar19 + 0x230);
            *(undefined8 *)(puVar19 + 0x1c8) = *(undefined8 *)(puVar19 + 0x238);
            *(undefined8 *)(puVar19 + 0x230) = 0;
            *(undefined8 *)(puVar19 + 0x238) = 0xf;
            puVar19[0x220] = 0;
            if (puVar19 + 0x1d0 != puVar19 + 0x200) {
              if (0xf < *(ulonglong *)(puVar19 + 0x1e8)) {
                pvVar2 = *(void **)(puVar19 + 0x1d0);
                pvVar17 = pvVar2;
                if ((0xfff < *(ulonglong *)(puVar19 + 0x1e8) + 1) &&
                   (pvVar17 = *(void **)((longlong)pvVar2 + -8),
                   0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar17))))
                goto LAB_180183de1;
                *(undefined8 *)(puVar19 + -8) = 0x180183cd9;
                free(pvVar17);
              }
              *(undefined8 *)(puVar19 + 0x1e0) = 0;
              *(undefined8 *)(puVar19 + 0x1e8) = 0xf;
              puVar19[0x1d0] = 0;
              *(undefined8 *)(puVar19 + 0x1d0) = *(undefined8 *)(puVar19 + 0x200);
              *(undefined8 *)(puVar19 + 0x1d8) = *(undefined8 *)(puVar19 + 0x208);
              *(undefined8 *)(puVar19 + 0x1e0) = *(undefined8 *)(puVar19 + 0x210);
              *(undefined8 *)(puVar19 + 0x1e8) = *(undefined8 *)(puVar19 + 0x218);
              *(undefined8 *)(puVar19 + 0x210) = 0;
              *(undefined8 *)(puVar19 + 0x218) = 0xf;
              puVar19[0x200] = 0;
            }
            *(undefined8 *)(puVar19 + -8) = 0x180183d5e;
            FUN_18020e450(puVar19 + 0x220);
            *(undefined8 *)(puVar19 + -8) = 0x180183d6c;
            FUN_18020e450(puVar19 + 0x200);
            param_4 = *(longlong *)(puVar19 + 0x160);
            if ((param_4 != 0) &&
               (iVar7 = (int)(DAT_1803edce8 - DAT_1803edce0 >> 3) * -0x49249249, uVar11 = 0,
               0 < iVar7)) {
              do {
                if (*(longlong *)(uVar11 * 0x38 + DAT_1803edce0) == param_4) goto LAB_180183de8;
                uVar18 = (int)uVar11 + 1;
                uVar11 = (ulonglong)uVar18;
              } while ((int)uVar18 < iVar7);
            }
            uVar5 = 0;
          }
          else {
            pvVar2 = *(void **)(puVar19 + 0x1b0);
            pvVar17 = pvVar2;
            if ((*(ulonglong *)(puVar19 + 0x1c8) + 1 < 0x1000) ||
               (pvVar17 = *(void **)((longlong)pvVar2 + -8),
               (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar17)) < 0x20)) {
              *(undefined8 *)(puVar19 + -8) = 0x180183c05;
              free(pvVar17);
              goto LAB_180183c05;
            }
LAB_180183de1:
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            puVar19 = puVar19 + 8;
LAB_180183de8:
            uVar5 = 1;
          }
          puVar19[0x1f8] = uVar5;
          if (((param_4 == 0) || (param_4 != DAT_18040a3f0)) &&
             ((DAT_18040a3f8 < 1 || (*(int *)(puVar19 + 0x150) != DAT_18040a3f8)))) {
            uVar5 = 0;
          }
          else {
            uVar5 = 1;
          }
          puVar19[0x1f9] = uVar5;
          if ((DAT_18040a3d4 == '\0') || (param_4 == 0)) {
LAB_180183e13:
            uVar5 = 0;
          }
          else {
            *(undefined8 *)(puVar19 + -8) = 0x180183e0b;
            cVar4 = FUN_180182bd0(param_4);
            if (cVar4 == '\0') goto LAB_180183e13;
            uVar5 = 1;
          }
          puVar19[0x1fa] = uVar5;
          lVar3 = param_1[1];
          if (lVar3 == param_1[2]) {
            *(undefined8 *)(puVar19 + -8) = 0x180183e45;
            FUN_1802222e0(param_1,lVar3,puVar19 + 0x150);
          }
          else {
            *(undefined8 *)(puVar19 + -8) = 0x180183e33;
            FUN_180231d50();
            param_1[1] = param_1[1] + 0xb0;
          }
          *(undefined8 *)(puVar19 + -8) = 0x180183e53;
          FUN_18020e450(puVar19 + 0x1d0);
          *(undefined8 *)(puVar19 + -8) = 0x180183e61;
          FUN_18020e450(puVar19 + 0x1b0);
          *(undefined8 *)(puVar19 + -8) = 0x180183e6f;
          FUN_18020e450(puVar19 + 400);
        }
        *(undefined8 *)(puVar19 + -8) = 0x180183e7d;
        FUN_18020e450(puVar19 + 0x170);
      }
      iVar21 = iVar21 + 1;
      *(int *)(puVar19 + 0x24) = iVar21;
    }
    *(uint *)(puVar19 + 0x20) = uVar22 & 0xfffffffe;
    puVar20 = puVar19;
  }
  *(undefined8 *)(puVar20 + -8) = 0x180183eb1;
  return param_1;
}


