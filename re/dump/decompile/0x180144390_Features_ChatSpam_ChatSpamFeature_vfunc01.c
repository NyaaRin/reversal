// 0x180144390  Features_ChatSpam_ChatSpamFeature_vfunc01
// size=2205 thunk=false
// signature: undefined Features_ChatSpam_ChatSpamFeature_vfunc01()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_ChatSpam_ChatSpamFeature_vfunc01(longlong param_1)

{
  float *pfVar1;
  undefined8 ****ppppuVar2;
  float fVar3;
  longlong lVar4;
  void *pvVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  int iVar11;
  longlong *plVar12;
  char *pcVar13;
  float *pfVar14;
  ulonglong uVar15;
  undefined8 **ppuVar16;
  undefined1 *puVar17;
  undefined4 *puVar18;
  undefined8 uVar19;
  float *pfVar20;
  ulonglong uVar21;
  undefined8 ***_Memory;
  void *_Memory_00;
  float *pfVar22;
  undefined8 ****ppppuVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined8 ***pppuVar26;
  ulonglong uVar27;
  float fVar28;
  undefined8 uStack_3e0;
  undefined1 auStack_3d8 [64];
  undefined4 local_398;
  undefined1 local_390 [32];
  undefined1 local_370 [144];
  float local_2e0 [2];
  undefined8 **local_2d8;
  undefined8 **ppuStack_2d0;
  ulonglong local_2c8;
  undefined8 uStack_2c0;
  float local_2b8 [2];
  undefined8 ***local_2b0;
  undefined8 uStack_2a8;
  ulonglong local_2a0;
  ulonglong local_298;
  float *local_290 [2];
  undefined *local_280 [69];
  ulonglong local_58;
  
  puVar24 = auStack_3d8;
  puVar25 = auStack_3d8;
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_3d8;
  pppuVar26 = (undefined8 ***)0x0;
  local_398 = 0;
  local_2e0[0] = -2.7634367e-25;
  local_2e0[1] = -6.395108e-27;
  plVar12 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_290,local_2e0);
  local_2b8[0] = 4.1613102e-11;
  local_2b8[1] = -0.00017231477;
  plVar12 = (longlong *)FUN_180241a30(*plVar12 + 0x28,local_280,local_2b8);
  pcVar13 = (char *)FUN_1801fcfc0(*plVar12 + 0x28);
  if (((*pcVar13 == '\0') || (DAT_1803fa608 == (float *)0x0)) || (DAT_1803fa668 == 0)) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  else {
    fVar3 = *DAT_1803fa608;
    local_2e0[0] = fVar3;
    pfVar1 = (float *)(param_1 + 8);
    fVar28 = *pfVar1;
    if (fVar3 + DAT_180381138 < fVar28) {
      *pfVar1 = 0.0;
      fVar28 = 0.0;
    }
    fVar10 = DAT_180380ac0;
    if (fVar28 <= 0.0) {
      local_2e0[0] = 60.0;
      local_2b8[0] = 0.5;
      local_280[0] = (undefined *)0x93fd561a96ab0c67;
      local_290[0] = (float *)0xd2ed0559eaf6a240;
      plVar12 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_370,local_280);
      plVar12 = (longlong *)FUN_180241a30(*plVar12 + 0x28,local_390,local_290);
      pfVar14 = (float *)FUN_180202dc0(*plVar12 + 0x28);
      pfVar22 = local_2b8;
      if (fVar10 <= *pfVar14) {
        pfVar22 = pfVar14;
      }
      pfVar20 = local_2e0;
      if (*pfVar14 <= DAT_1803810c8) {
        pfVar20 = pfVar22;
      }
      *pfVar1 = fVar3 + *pfVar20;
      puVar25 = auStack_3d8;
    }
    else {
      puVar25 = auStack_3d8;
      if (fVar28 <= fVar3) {
        uStack_2a8 = 0;
        local_2a0 = 0;
        local_298 = 0xf;
        local_2b0 = (undefined8 ****)0x0;
        local_280[0] = &DAT_1803e87e0;
        local_290[0] = pfVar1;
        iVar11 = _Mtx_lock(&DAT_1803e87e0);
        if (iVar11 != 0) {
          std::_Throw_Cpp_error(5);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (DAT_1803e882c == 0x7fffffff) {
          DAT_1803e882c = 0x7ffffffe;
          std::_Throw_Cpp_error(6);
        }
        if (DAT_1803e9d08 == DAT_1803e9d10) {
          *pfVar1 = fVar3 + DAT_180380bb0;
          _Mtx_unlock(&DAT_1803e87e0);
          FUN_18020e450(&local_2b0);
          puVar25 = auStack_3d8;
        }
        else {
          iVar11 = FUN_180022680(0,DAT_1803e9d10 - DAT_1803e9d08 >> 5);
          uVar21 = DAT_1803e9d10 - DAT_1803e9d08 >> 5;
          if ((1 < uVar21) && (iVar11 == *(int *)(param_1 + 0xc))) {
            iVar11 = (iVar11 + 1) % (int)uVar21;
          }
          *(int *)(param_1 + 0xc) = iVar11;
          ppppuVar23 = (undefined8 ****)((longlong)iVar11 * 0x20 + DAT_1803e9d08);
          if (&local_2b0 != ppppuVar23) {
            ppppuVar2 = ppppuVar23 + 2;
            if ((undefined8 ***)0xf < ppppuVar23[3]) {
              ppppuVar23 = (undefined8 ****)*ppppuVar23;
            }
            FUN_180212700(&local_2b0,ppppuVar23,*ppppuVar2);
          }
          _Mtx_unlock(&DAT_1803e87e0);
          uVar21 = local_2a0;
          local_2d8 = (undefined8 ***)0x0;
          ppuStack_2d0 = (undefined8 ***)0x0;
          local_2c8 = 0;
          uStack_2c0 = 0;
          ppppuVar23 = &local_2b0;
          if (0xf < local_298) {
            ppppuVar23 = (undefined8 ****)local_2b0;
          }
          if (0x7fffffffffffffff < local_2a0) {
                    /* WARNING: Subroutine does not return */
            FUN_1800130a0();
          }
          if (local_2a0 < 0x10) {
            local_2c8 = local_2a0;
            uVar27 = 0xf;
            uStack_2c0 = 0xf;
            pppuVar26 = *ppppuVar23;
            local_2d8 = pppuVar26;
            ppuStack_2d0 = ppppuVar23[1];
            puVar25 = auStack_3d8;
          }
          else {
            uVar27 = local_2a0 | 0xf;
            if (uVar27 < 0x8000000000000000) goto LAB_180144731;
            uVar27 = 0x7fffffffffffffff;
            uVar15 = 0x8000000000000027;
            puVar24 = auStack_3d8;
            while( true ) {
              *(undefined8 *)(puVar24 + -8) = 0x180144725;
              ppuVar16 = (undefined8 **)FUN_1802d8350(uVar15);
              if (ppuVar16 != (undefined8 **)0x0) break;
              pcVar6 = (code *)swi(0x29);
              (*pcVar6)(5);
              puVar24 = puVar24 + 8;
LAB_180144731:
              if (uVar27 < 0x16) {
                uVar27 = 0x16;
              }
              if (uVar27 == 0xffffffffffffffff) goto LAB_180144779;
              if (uVar27 + 1 < 0x1000) {
                *(undefined8 *)(puVar24 + -8) = 0x180144776;
                pppuVar26 = (undefined8 ***)FUN_1802d8350();
                goto LAB_180144779;
              }
              uVar15 = uVar27 + 0x28;
              if (uVar15 <= uVar27 + 1) {
                    /* WARNING: Subroutine does not return */
                *(undefined8 *)(puVar24 + -8) = 0x180144c57;
                FUN_180012fe0();
              }
            }
            pppuVar26 = (undefined8 ***)((longlong)ppuVar16 + 0x27U & 0xffffffffffffffe0);
            pppuVar26[-1] = ppuVar16;
LAB_180144779:
            *(undefined8 ****)(puVar24 + 0x100) = pppuVar26;
            *(ulonglong *)(puVar24 + 0x110) = uVar21;
            *(ulonglong *)(puVar24 + 0x118) = uVar27;
            *(undefined8 *)(puVar24 + -8) = 0x1801447a0;
            memcpy(pppuVar26,ppppuVar23,uVar21 + 1);
            puVar25 = puVar24;
          }
          lVar4 = *(longlong *)(puVar25 + 0x138);
          puVar24 = puVar25 + 0x128;
          if (0xf < *(ulonglong *)(puVar25 + 0x140)) {
            puVar24 = *(undefined1 **)(puVar25 + 0x128);
          }
          if (lVar4 != 0) {
            *(undefined8 *)(puVar25 + -8) = 0x1801447de;
            puVar17 = (undefined1 *)thunk_FUN_1802d5c20(puVar24,puVar24 + lVar4,0x7b);
            if ((puVar17 != puVar24 + lVar4) && ((longlong)puVar17 - (longlong)puVar24 != -1)) {
              *(undefined8 *)(puVar25 + -8) = 0x180144801;
              FUN_180142db0(puVar25 + 400);
              *(undefined8 *)(puVar25 + 0x48) = 0;
              *(undefined8 *)(puVar25 + 0x50) = 0;
              *(undefined8 *)(puVar25 + 0x58) = 0;
              *(undefined8 *)(puVar25 + 0x60) = 0;
              *(undefined8 *)(puVar25 + -8) = 0x180144828;
              FUN_18001d080(puVar25 + 0x48,&DAT_18033e5ea,0);
              *(undefined8 *)(puVar25 + -8) = 0x180144844;
              FUN_1801410a0(puVar25 + 400,puVar25 + 0x48,0xffffffff);
              *(undefined8 *)(puVar25 + -8) = 0x18014484f;
              FUN_18020e450(puVar25 + 0x48);
              *(undefined8 *)(puVar25 + -8) = 0x1801448a7;
              puVar18 = (undefined4 *)FUN_180142220(puVar25 + 0x98,puVar25 + 0x128,puVar25 + 400);
              if ((undefined4 *)(puVar25 + 0x100) != puVar18) {
                if (0xf < uVar27) {
                  _Memory = pppuVar26;
                  if (0xfff < uVar27 + 1) {
                    _Memory = (undefined8 ***)pppuVar26[-1];
                    pppuVar26 = (undefined8 ***)((longlong)pppuVar26 + (-8 - (longlong)_Memory));
                    if ((undefined8 ***)0x1f < pppuVar26) {
                      pcVar6 = (code *)swi(0x29);
                      (*pcVar6)(5);
                      puVar25 = puVar25 + 8;
                      _Memory = pppuVar26;
                    }
                  }
                  *(undefined8 *)(puVar25 + -8) = 0x1801448f0;
                  free(_Memory);
                }
                *(undefined8 *)(puVar25 + 0x110) = 0;
                *(undefined8 *)(puVar25 + 0x118) = 0xf;
                puVar25[0x100] = 0;
                uVar7 = puVar18[1];
                uVar8 = puVar18[2];
                uVar9 = puVar18[3];
                *(undefined4 *)(puVar25 + 0x100) = *puVar18;
                *(undefined4 *)(puVar25 + 0x104) = uVar7;
                *(undefined4 *)(puVar25 + 0x108) = uVar8;
                *(undefined4 *)(puVar25 + 0x10c) = uVar9;
                uVar19 = *(undefined8 *)(puVar18 + 6);
                *(undefined8 *)(puVar25 + 0x110) = *(undefined8 *)(puVar18 + 4);
                *(undefined8 *)(puVar25 + 0x118) = uVar19;
                *(undefined8 *)(puVar18 + 4) = 0;
                *(undefined8 *)(puVar18 + 6) = 0xf;
                *(undefined1 *)puVar18 = 0;
              }
              *(undefined8 *)(puVar25 + -8) = 0x18014493f;
              FUN_18020e450(puVar25 + 0x98);
              *(undefined8 *)(puVar25 + -8) = 0x18014494d;
              FUN_180142f70(puVar25 + 400);
            }
          }
          *(undefined1 **)(puVar25 + 0x148) = puVar25 + 0xb8;
          *(undefined8 *)(puVar25 + -8) = 0x18014497e;
          uVar19 = FUN_18016d4c0(puVar25 + 0xb8,puVar25 + 0x100);
          *(undefined8 *)(puVar25 + -8) = 0x18014498f;
          puVar18 = (undefined4 *)FUN_180140b70(puVar25 + 0xd8,uVar19);
          if ((undefined4 *)(puVar25 + 0x100) != puVar18) {
            if (0xf < *(ulonglong *)(puVar25 + 0x118)) {
              pvVar5 = *(void **)(puVar25 + 0x100);
              _Memory_00 = pvVar5;
              if ((0xfff < *(ulonglong *)(puVar25 + 0x118) + 1) &&
                 (_Memory_00 = *(void **)((longlong)pvVar5 + -8),
                 0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)_Memory_00)))) {
                _Memory_00 = (void *)0x5;
                pcVar6 = (code *)swi(0x29);
                (*pcVar6)();
                puVar25 = puVar25 + 8;
              }
              *(undefined8 *)(puVar25 + -8) = 0x1801449ee;
              free(_Memory_00);
            }
            *(undefined8 *)(puVar25 + 0x110) = 0;
            *(undefined8 *)(puVar25 + 0x118) = 0xf;
            puVar25[0x100] = 0;
            uVar7 = puVar18[1];
            uVar8 = puVar18[2];
            uVar9 = puVar18[3];
            *(undefined4 *)(puVar25 + 0x100) = *puVar18;
            *(undefined4 *)(puVar25 + 0x104) = uVar7;
            *(undefined4 *)(puVar25 + 0x108) = uVar8;
            *(undefined4 *)(puVar25 + 0x10c) = uVar9;
            uVar19 = *(undefined8 *)(puVar18 + 6);
            *(undefined8 *)(puVar25 + 0x110) = *(undefined8 *)(puVar18 + 4);
            *(undefined8 *)(puVar25 + 0x118) = uVar19;
            *(undefined8 *)(puVar18 + 4) = 0;
            *(undefined8 *)(puVar18 + 6) = 0xf;
            *(undefined1 *)puVar18 = 0;
          }
          *(undefined8 *)(puVar25 + -8) = 0x180144a3d;
          FUN_18020e450(puVar25 + 0xd8);
          fVar28 = DAT_180380ac0;
          *(undefined4 *)(puVar25 + 0x120) = 0x42700000;
          *(undefined4 *)(puVar25 + 0xf8) = 0x3f000000;
          *(undefined8 *)(puVar25 + 0x148) = 0x93fd561a96ab0c67;
          *(undefined8 *)(puVar25 + -8) = 0x180144a7c;
          plVar12 = (longlong *)FUN_180241a30(&DAT_1803fadf0,puVar25 + 0x48,puVar25 + 0x148);
          *(undefined8 *)(puVar25 + 0x158) = 0xd2ed0559eaf6a240;
          lVar4 = *plVar12;
          *(undefined8 *)(puVar25 + -8) = 0x180144aa7;
          plVar12 = (longlong *)FUN_180241a30(lVar4 + 0x28,puVar25 + 0x68,puVar25 + 0x158);
          lVar4 = *plVar12;
          *(undefined8 *)(puVar25 + -8) = 0x180144ab3;
          pfVar14 = (float *)FUN_180202dc0(lVar4 + 0x28);
          pfVar22 = (float *)(puVar25 + 0xf8);
          if (fVar28 <= *pfVar14) {
            pfVar22 = pfVar14;
          }
          pfVar20 = (float *)(puVar25 + 0x120);
          if (*pfVar14 <= DAT_1803810c8) {
            pfVar20 = pfVar22;
          }
          *pfVar1 = fVar3 + *pfVar20;
          lVar4 = *(longlong *)(puVar25 + 0x110);
          if (lVar4 != 0) {
            if (0x7fffffffffffffffU - lVar4 < 5) {
                    /* WARNING: Subroutine does not return */
              *(undefined **)(puVar25 + -8) = &UNK_180144c5d;
              FUN_1800130a0();
            }
            puVar24 = puVar25 + 0x100;
            if (0xf < *(ulonglong *)(puVar25 + 0x118)) {
              puVar24 = *(undefined1 **)(puVar25 + 0x100);
            }
            *(longlong *)(puVar25 + 0x30) = lVar4;
            *(undefined1 **)(puVar25 + 0x28) = puVar24;
            *(undefined8 *)(puVar25 + 0x20) = 5;
            *(undefined8 *)(puVar25 + -8) = 0x180144b3f;
            FUN_18020e930(puVar25 + 0x78);
            *(undefined4 *)(puVar25 + 0x40) = 1;
            *(undefined8 *)(puVar25 + -8) = 0x180144b5e;
            puVar18 = (undefined4 *)FUN_18021aef0(puVar25 + 0x78,&DAT_18033f5a8,1);
            *(undefined8 *)(puVar25 + 0x168) = 0;
            *(undefined8 *)(puVar25 + 0x170) = 0;
            *(undefined8 *)(puVar25 + 0x178) = 0;
            *(undefined8 *)(puVar25 + 0x180) = 0;
            uVar7 = puVar18[1];
            uVar8 = puVar18[2];
            uVar9 = puVar18[3];
            *(undefined4 *)(puVar25 + 0x168) = *puVar18;
            *(undefined4 *)(puVar25 + 0x16c) = uVar7;
            *(undefined4 *)(puVar25 + 0x170) = uVar8;
            *(undefined4 *)(puVar25 + 0x174) = uVar9;
            uVar7 = puVar18[5];
            uVar8 = puVar18[6];
            uVar9 = puVar18[7];
            *(undefined4 *)(puVar25 + 0x178) = puVar18[4];
            *(undefined4 *)(puVar25 + 0x17c) = uVar7;
            *(undefined4 *)(puVar25 + 0x180) = uVar8;
            *(undefined4 *)(puVar25 + 0x184) = uVar9;
            *(undefined8 *)(puVar18 + 4) = 0;
            *(undefined8 *)(puVar18 + 6) = 0xf;
            *(undefined1 *)puVar18 = 0;
            *(undefined4 *)(puVar25 + 0x40) = 3;
            *(undefined4 *)(puVar25 + 0x40) = 2;
            *(undefined8 *)(puVar25 + -8) = 0x180144bb9;
            FUN_18020e450(puVar25 + 0x78);
            puVar24 = puVar25 + 0x168;
            if (0xf < *(ulonglong *)(puVar25 + 0x180)) {
              puVar24 = *(undefined1 **)(puVar25 + 0x168);
            }
            *(undefined8 *)(puVar25 + -8) = 0x180144bdf;
            FUN_1801424f0(DAT_1803fa668,puVar24);
            *(undefined4 *)(puVar25 + 0x40) = 0;
            *(undefined8 *)(puVar25 + -8) = 0x180144bf3;
            FUN_18020e450(puVar25 + 0x168);
          }
          *(undefined8 *)(puVar25 + -8) = 0x180144c01;
          FUN_18020e450(puVar25 + 0x100);
          *(undefined8 *)(puVar25 + -8) = 0x180144c0f;
          FUN_18020e450(puVar25 + 0x128);
        }
      }
    }
  }
  *(undefined8 *)(puVar25 + -8) = 0x180144c25;
  return;
}


