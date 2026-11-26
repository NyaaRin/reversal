// 0x1800f90b0  FUN_1800f90b0
// size=2170 thunk=false
// signature: undefined FUN_1800f90b0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800f90b0(longlong param_1,float param_2)

{
  size_t *psVar1;
  size_t sVar2;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  int *piVar11;
  int *_Buf1;
  int *piVar12;
  undefined8 ****ppppuVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined4 *puVar16;
  uint uVar17;
  undefined1 *puVar18;
  undefined4 *puVar19;
  longlong lVar20;
  undefined4 *puVar21;
  undefined8 *puVar22;
  longlong lVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_288 [32];
  uint local_268;
  undefined4 *local_260;
  int local_258;
  int local_254 [3];
  undefined4 local_248;
  undefined1 local_244;
  undefined8 **local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  longlong local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8;
  undefined4 local_1e4;
  undefined1 local_1e0;
  undefined1 *local_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8 [32];
  undefined1 local_1a8 [32];
  undefined1 local_188 [32];
  undefined1 local_168 [32];
  undefined8 ***local_148 [2];
  longlong local_138;
  ulonglong local_130;
  undefined8 *local_128;
  undefined1 local_120 [8];
  undefined1 local_118 [32];
  undefined1 local_f8 [80];
  ulonglong local_a8;
  
  local_a8 = DAT_1803da4c0 ^ (ulonglong)auStack_288;
  puVar18 = (undefined1 *)0x0;
  local_268 = 0;
  local_260 = (undefined4 *)&DAT_1803e9600;
  iVar8 = _Mtx_lock(&DAT_1803e9600);
  if (iVar8 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (DAT_1803e964c == 0x7fffffff) {
    DAT_1803e964c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  if (DAT_18042cd58 == 0) {
    _Mtx_unlock(&DAT_1803e9600);
  }
  else {
    local_1d8 = puVar18;
    if (DAT_18042cd38 != (longlong *)0x0) {
      local_1d8 = (undefined1 *)*DAT_18042cd38;
    }
    local_1d0 = DAT_18042cd50;
    FUN_180211a40(param_1 + 0x20,*(undefined8 *)(param_1 + 0x28),&local_1d8);
    FUN_18021d310(&DAT_18042cd38);
    _Mtx_unlock(&DAT_1803e9600);
  }
  fVar7 = DAT_180380db8;
  fVar6 = DAT_180380b3c;
  fVar5 = DAT_180380ac0;
  lVar23 = *(longlong *)(param_1 + 0x20);
  local_260 = *(undefined4 **)(param_1 + 0x28);
  if ((undefined4 *)lVar23 != local_260) {
    do {
      puVar22 = (undefined8 *)(param_1 + 8);
      if (*(char *)(lVar23 + 0x94) != '\0') {
        piVar12 = *(int **)(param_1 + 0x10);
        for (piVar11 = (int *)*puVar22; piVar11 != piVar12; piVar11 = piVar11 + 0x1c) {
          if ((((char)piVar11[1] == '\0') ||
              (fVar7 < (float)piVar11[0x14] || fVar7 == (float)piVar11[0x14])) ||
             (*piVar11 != *(int *)(lVar23 + 4))) {
LAB_1800f9275:
            bVar4 = false;
          }
          else {
            puVar9 = (undefined8 *)FUN_1800f7d30(local_1c8,lVar23);
            local_268 = (uint)puVar18 | 1;
            puVar18 = (undefined1 *)(ulonglong)local_268;
            _Buf1 = piVar11 + 2;
            psVar1 = puVar9 + 2;
            if (0xf < (ulonglong)puVar9[3]) {
              puVar9 = (undefined8 *)*puVar9;
            }
            sVar2 = *(size_t *)(piVar11 + 6);
            if (0xf < *(ulonglong *)(piVar11 + 8)) {
              _Buf1 = *(int **)_Buf1;
            }
            if ((sVar2 != *psVar1) ||
               ((sVar2 != 0 && (iVar8 = memcmp(_Buf1,puVar9,sVar2), iVar8 != 0))))
            goto LAB_1800f9275;
            bVar4 = true;
          }
          if (((ulonglong)puVar18 & 1) != 0) {
            local_268 = (uint)puVar18 & 0xfffffffe;
            puVar18 = (undefined1 *)(ulonglong)local_268;
            FUN_18020e450(local_1c8);
          }
          if (bVar4) goto LAB_1800f9603;
        }
      }
      uVar17 = (uint)puVar18;
      if (((DAT_1803e7bb8 == '\0') || (*(char *)(lVar23 + 0x94) != '\0')) ||
         (piVar11 = (int *)*puVar22, piVar11 == *(int **)(param_1 + 0x10))) {
LAB_1800f93f0:
        uStack_238 = 0;
        local_230 = 0;
        local_228 = 0xf;
        local_240 = (undefined8 ***)0x0;
        uStack_218 = 0;
        local_210 = 0;
        local_208 = 0xf;
        local_220 = 0;
        local_1fc = 1;
        uStack_1f0 = 0;
        local_1e8 = 0;
        local_1e4 = 0;
        local_1e0 = 0;
        local_268 = uVar17 | 4;
        local_248 = *(undefined4 *)(lVar23 + 4);
        local_244 = *(undefined1 *)(lVar23 + 0x94);
        local_200 = *(undefined4 *)(lVar23 + 0x48);
        fVar26 = fVar5;
        if (fVar5 <= DAT_1803e7ba8) {
          fVar26 = DAT_1803e7ba8;
        }
        local_1f8 = (ulonglong)(uint)fVar26 << 0x20;
        uVar10 = FUN_1800f7d30(local_188,lVar23);
        FUN_18020e8a0(&local_240,uVar10);
        FUN_18020e450(local_188);
        uVar10 = FUN_1800f7e40(local_168,lVar23);
        FUN_18020e8a0(&local_220,uVar10);
        FUN_18020e450(local_168);
        puVar21 = (undefined4 *)*puVar22;
        puVar16 = *(undefined4 **)(param_1 + 0x10);
        if (puVar16 == *(undefined4 **)(param_1 + 0x18)) {
          FUN_180226660(puVar22,puVar21,&local_248);
        }
        else if (puVar21 == puVar16) {
          FUN_1800fa860(puVar16,&local_248);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x70;
        }
        else {
          local_128 = puVar22;
          FUN_1800fa860(local_120,&local_248);
          FUN_1800fa860(puVar16,puVar16 + -0x1c);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x70;
          puVar19 = puVar16 + -0x1c;
          while (puVar19 != puVar21) {
            puVar16[-0x1c] = puVar19[-0x1c];
            *(undefined1 *)(puVar16 + -0x1b) = *(undefined1 *)(puVar19 + -0x1b);
            FUN_18020e8a0(puVar16 + -0x1a,puVar19 + -0x1a);
            FUN_18020e8a0(puVar16 + -0x12,puVar19 + -0x12);
            puVar16[-10] = puVar19[-10];
            puVar16[-9] = puVar19[-9];
            puVar16[-8] = puVar19[-8];
            puVar16[-7] = puVar19[-7];
            puVar16[-6] = puVar19[-6];
            puVar16[-5] = puVar19[-5];
            *(undefined1 *)(puVar16 + -4) = *(undefined1 *)(puVar19 + -4);
            puVar16[-3] = puVar19[-3];
            *(undefined1 *)(puVar16 + -2) = *(undefined1 *)(puVar19 + -2);
            puVar16 = puVar16 + -0x1c;
            puVar19 = puVar19 + -0x1c;
          }
          FUN_180203e30(puVar21,local_120);
          local_1d8 = local_120;
          FUN_18020e450(local_f8);
          FUN_18020e450(local_118);
        }
        puVar18 = (undefined1 *)(ulonglong)uVar17;
        local_268 = uVar17;
        FUN_18020e450(&local_220);
        ppppuVar13 = (undefined8 ****)&local_240;
      }
      else {
        if (((((char)piVar11[1] != '\0') || (*piVar11 != *(int *)(lVar23 + 4))) ||
            (0.0 < (float)piVar11[0x17])) || ((char)piVar11[0x18] != '\0')) {
LAB_1800f9366:
          bVar4 = false;
        }
        else {
          fVar26 = fVar5;
          if (fVar5 <= DAT_1803e7ba8) {
            fVar26 = DAT_1803e7ba8;
          }
          if ((float)piVar11[0x15] <= fVar26 - fVar6) goto LAB_1800f9366;
          puVar9 = (undefined8 *)FUN_1800f7d30(local_1a8,lVar23);
          local_268 = uVar17 | 2;
          puVar18 = (undefined1 *)(ulonglong)local_268;
          piVar12 = piVar11 + 2;
          psVar1 = puVar9 + 2;
          if (0xf < (ulonglong)puVar9[3]) {
            puVar9 = (undefined8 *)*puVar9;
          }
          sVar2 = *(size_t *)(piVar11 + 6);
          if (0xf < *(ulonglong *)(piVar11 + 8)) {
            piVar12 = *(int **)piVar12;
          }
          if ((sVar2 != *psVar1) ||
             ((sVar2 != 0 && (iVar8 = memcmp(piVar12,puVar9,sVar2), iVar8 != 0))))
          goto LAB_1800f9366;
          bVar4 = true;
        }
        if (((ulonglong)puVar18 & 2) != 0) {
          local_268 = (uint)puVar18 & 0xfffffffd;
          puVar18 = (undefined1 *)(ulonglong)local_268;
          FUN_18020e450(local_1a8);
        }
        uVar17 = (uint)puVar18;
        if (!bVar4) goto LAB_1800f93f0;
        if (-1 < *(int *)(lVar23 + 0x48)) {
          iVar8 = 0;
          if (-1 < piVar11[0x12]) {
            iVar8 = piVar11[0x12];
          }
          piVar11[0x12] = iVar8 + *(int *)(lVar23 + 0x48);
        }
        piVar11[0x13] = piVar11[0x13] + 1;
        fVar26 = fVar5;
        if (fVar5 <= DAT_1803e7ba8) {
          fVar26 = DAT_1803e7ba8;
        }
        piVar11[0x15] = (int)fVar26;
        FUN_1800f7e40(local_148,lVar23);
        if ((local_138 != 0) && ((undefined8 ****)(piVar11 + 10) != local_148)) {
          ppppuVar13 = local_148;
          if (0xf < local_130) {
            ppppuVar13 = (undefined8 ****)local_148[0];
          }
          FUN_180212700(piVar11 + 10,ppppuVar13);
        }
        ppppuVar13 = local_148;
      }
      FUN_18020e450(ppppuVar13);
LAB_1800f9603:
      lVar23 = lVar23 + 0x98;
    } while ((undefined4 *)lVar23 != local_260);
  }
  uVar15 = 0;
  if (*(longlong *)(param_1 + 0x20) != *(longlong *)(param_1 + 0x28)) {
    FUN_180217fc0();
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x20);
  }
  local_254[0] = 9;
  local_258 = 3;
  piVar11 = &local_258;
  if (2 < DAT_1803e7bac) {
    piVar11 = &DAT_1803e7bac;
  }
  piVar12 = local_254;
  if (DAT_1803e7bac < 10) {
    piVar12 = piVar11;
  }
  lVar23 = *(longlong *)(param_1 + 0x10);
  lVar14 = *(longlong *)(param_1 + 8);
  if ((lVar23 - lVar14 >> 4) * 0x6db6db6db6db6db7 != 0) {
    iVar8 = *piVar12;
    do {
      if ((iVar8 <= (int)uVar15) &&
         (lVar23 = uVar15 * 0x70, *(float *)(lVar14 + 0x5c + lVar23) <= 0.0)) {
        *(undefined4 *)(lVar14 + 0x54 + lVar23) = 0;
        *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x60 + lVar23) = 1;
      }
      uVar15 = uVar15 + 1;
      lVar23 = *(longlong *)(param_1 + 0x10);
      lVar14 = *(longlong *)(param_1 + 8);
    } while (uVar15 < (ulonglong)((lVar23 - lVar14 >> 4) * 0x6db6db6db6db6db7));
  }
  fVar7 = DAT_180380bb0;
  fVar6 = DAT_180380a94;
  fVar5 = DAT_180380a14;
  if (lVar14 != lVar23) {
    fVar26 = param_2 / DAT_180380a14;
    do {
      *(float *)(lVar14 + 0x50) = param_2 + *(float *)(lVar14 + 0x50);
      fVar25 = fVar26 + *(float *)(lVar14 + 0x58);
      fVar24 = fVar7;
      if (fVar25 <= fVar7) {
        fVar24 = fVar25;
      }
      *(float *)(lVar14 + 0x58) = fVar24;
      if (*(float *)(lVar14 + 0x54) <= 0.0) {
        fVar24 = fVar6;
        if (*(char *)(lVar14 + 0x60) != '\0') {
          fVar24 = fVar5;
        }
        fVar25 = param_2 / fVar24 + *(float *)(lVar14 + 0x5c);
        fVar24 = fVar7;
        if (fVar25 <= fVar7) {
          fVar24 = fVar25;
        }
        *(float *)(lVar14 + 0x5c) = fVar24;
      }
      else {
        *(float *)(lVar14 + 0x54) = *(float *)(lVar14 + 0x54) - param_2;
      }
      lVar14 = lVar14 + 0x70;
    } while (lVar14 != lVar23);
  }
  puVar21 = *(undefined4 **)(param_1 + 0x10);
  puVar16 = *(undefined4 **)(param_1 + 8);
  if (puVar16 != puVar21) {
    do {
      if (fVar7 <= (float)puVar16[0x17]) break;
      puVar16 = puVar16 + 0x1c;
    } while (puVar16 != puVar21);
    if (puVar16 != puVar21) {
      puVar19 = puVar16 + 0x1c;
      if (puVar19 != puVar21) {
        do {
          if ((float)puVar19[0x17] < fVar7) {
            FUN_180203e30(puVar16,puVar19);
            puVar16 = puVar16 + 0x1c;
          }
          puVar19 = puVar19 + 0x1c;
        } while (puVar19 != puVar21);
        if (puVar16 == puVar21) goto LAB_1800f9895;
      }
      puVar19 = *(undefined4 **)(param_1 + 0x10);
      for (; puVar21 != puVar19; puVar21 = puVar21 + 0x1c) {
        *puVar16 = *puVar21;
        *(undefined1 *)(puVar16 + 1) = *(undefined1 *)(puVar21 + 1);
        FUN_18020e8a0(puVar16 + 2,puVar21 + 2);
        FUN_18020e8a0(puVar16 + 10,puVar21 + 10);
        puVar16[0x12] = puVar21[0x12];
        puVar16[0x13] = puVar21[0x13];
        puVar16[0x14] = puVar21[0x14];
        puVar16[0x15] = puVar21[0x15];
        puVar16[0x16] = puVar21[0x16];
        puVar16[0x17] = puVar21[0x17];
        *(undefined1 *)(puVar16 + 0x18) = *(undefined1 *)(puVar21 + 0x18);
        puVar16[0x19] = puVar21[0x19];
        *(undefined1 *)(puVar16 + 0x1a) = *(undefined1 *)(puVar21 + 0x1a);
        puVar16 = puVar16 + 0x1c;
      }
      puVar21 = *(undefined4 **)(param_1 + 0x10);
      for (puVar19 = puVar16; puVar19 != puVar21; puVar19 = puVar19 + 0x1c) {
        local_260 = puVar19;
        FUN_18020e450(puVar19 + 10);
        FUN_18020e450(puVar19 + 2);
      }
      *(undefined4 **)(param_1 + 0x10) = puVar16;
    }
  }
LAB_1800f9895:
  lVar23 = *(longlong *)(param_1 + 0x10);
  if (0x20 < (ulonglong)((lVar23 - *(longlong *)(param_1 + 8) >> 4) * 0x6db6db6db6db6db7)) {
    lVar20 = *(longlong *)(param_1 + 8) + 0xe00;
    for (lVar14 = lVar20; lVar14 != lVar23; lVar14 = lVar14 + 0x70) {
      local_260 = (undefined4 *)lVar14;
      FUN_18020e450(lVar14 + 0x28);
      FUN_18020e450(lVar14 + 8);
    }
    *(longlong *)(param_1 + 0x10) = lVar20;
  }
  return;
}


