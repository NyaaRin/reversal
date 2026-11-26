// 0x180146a00  FUN_180146a00
// size=1823 thunk=false
// signature: undefined FUN_180146a00()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_180146a00(void)

{
  code *pcVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  void *_Dst;
  undefined8 *puVar9;
  size_t sVar10;
  longlong *plVar11;
  undefined8 *******pppppppuVar12;
  undefined8 **ppuVar13;
  undefined8 *puVar14;
  char *pcVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  ulonglong uVar18;
  undefined1 *puVar19;
  void *pvVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  longlong lVar23;
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [64];
  undefined4 local_178;
  undefined8 ******local_170;
  undefined8 ******ppppppuStack_168;
  ulonglong local_160;
  undefined8 local_158;
  undefined8 **local_138;
  undefined *local_130;
  undefined1 local_128 [32];
  undefined8 local_108;
  undefined8 *local_100;
  undefined8 *puStack_f8;
  undefined8 local_f0;
  undefined8 *local_e8;
  undefined8 *puStack_e0;
  undefined8 *local_d8;
  undefined8 *******local_d0;
  undefined8 uStack_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  undefined8 *******local_b0;
  longlong lStack_a8;
  ulonglong local_a0;
  ulonglong uStack_98;
  undefined1 local_90 [16];
  longlong local_80;
  undefined8 *******local_70 [3];
  ulonglong local_58;
  ulonglong local_50;
  
  puVar17 = auStack_1b8;
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStack_1b8;
  pvVar20 = (void *)0x0;
  local_178 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  local_b8 = 0xf;
  local_d0 = (undefined8 *******)0x0;
  local_130 = &DAT_1803e8400;
  iVar7 = _Mtx_lock(&DAT_1803e8400);
  if (iVar7 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_1803e844c == 0x7fffffff) {
    DAT_1803e844c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  pcVar15 = s_models_player_1803ea2d8;
  if (0xf < DAT_1803ea2f0) {
    pcVar15 = (char *)s_models_player_1803ea2d8._0_8_;
  }
  FUN_180212700(&local_d0,pcVar15,DAT_1803ea2e8);
  _Mtx_unlock(&DAT_1803e8400);
  uVar2 = local_c0;
  while (uVar2 != 0) {
    pppppppuVar12 = &local_d0;
    if (0xf < local_b8) {
      pppppppuVar12 = local_d0;
    }
    local_c0 = uVar2 - 1;
    if (*(char *)(local_c0 + (longlong)pppppppuVar12) != '/') {
      pppppppuVar12 = &local_d0;
      if (0xf < local_b8) {
        pppppppuVar12 = local_d0;
      }
      if (*(char *)(local_c0 + (longlong)pppppppuVar12) != '\\') break;
    }
    pppppppuVar12 = &local_d0;
    if (0xf < local_b8) {
      pppppppuVar12 = local_d0;
    }
    *(undefined1 *)(local_c0 + (longlong)pppppppuVar12) = 0;
    uVar2 = local_c0;
  }
  local_100 = (undefined8 *)0x0;
  puStack_f8 = (undefined8 *)0x0;
  local_f0 = 0;
  local_e8 = (undefined8 *)0x0;
  puStack_e0 = (undefined8 *)0x0;
  local_d8 = (undefined8 *)0x0;
  local_170 = (undefined8 ******)0x0;
  ppppppuStack_168 = (undefined8 ******)0x0;
  local_160 = 0;
  local_158 = 0;
  pppppppuVar12 = &local_d0;
  if (0xf < local_b8) {
    pppppppuVar12 = local_d0;
  }
  local_c0 = uVar2;
  if (0x7fffffffffffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_1800130a0();
  }
  if (uVar2 < 0x10) {
    local_158 = 0xf;
    local_170 = *pppppppuVar12;
    ppppppuStack_168 = pppppppuVar12[1];
    puVar17 = auStack_1b8;
    local_160 = uVar2;
  }
  else {
    uVar18 = uVar2 | 0xf;
    if (uVar18 < 0x8000000000000000) goto LAB_180146bc6;
    uVar18 = 0x7fffffffffffffff;
    uVar8 = 0x8000000000000027;
    puVar17 = auStack_1b8;
    while( true ) {
      *(undefined8 *)(puVar17 + -8) = 0x180146bb7;
      lVar23 = FUN_1802d8350(uVar8);
      if (lVar23 != 0) break;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar17 = puVar17 + 8;
LAB_180146bc6:
      if (uVar18 < 0x16) {
        uVar18 = 0x16;
      }
      _Dst = pvVar20;
      if (uVar18 == 0xffffffffffffffff) goto LAB_180146c0b;
      if (uVar18 + 1 < 0x1000) {
        *(undefined8 *)(puVar17 + -8) = 0x180146c0b;
        _Dst = (void *)FUN_1802d8350();
        goto LAB_180146c0b;
      }
      uVar8 = uVar18 + 0x28;
      if (uVar8 <= uVar18 + 1) {
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar17 + -8) = &UNK_18014711b;
        FUN_180012fe0();
      }
    }
    _Dst = (void *)(lVar23 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)_Dst - 8) = lVar23;
LAB_180146c0b:
    *(void **)(puVar17 + 0x48) = _Dst;
    *(ulonglong *)(puVar17 + 0x58) = uVar2;
    *(ulonglong *)(puVar17 + 0x60) = uVar18;
    *(undefined8 *)(puVar17 + -8) = 0x180146c29;
    memcpy(_Dst,pppppppuVar12,uVar2 + 1);
  }
  local_e8 = (undefined8 *)0x0;
  puStack_e0 = (undefined8 *)0x0;
  local_d8 = (undefined8 *)0x0;
  *(undefined8 *)(puVar17 + -8) = 0x180146c40;
  puVar9 = (undefined8 *)FUN_18020dbc0(0,1);
  local_d8 = puVar9 + 4;
  local_138 = &local_e8;
  puVar19 = puVar17 + 0x48;
  local_e8 = puVar9;
  puStack_e0 = puVar9;
  *(undefined8 *)(puVar17 + 0x68) = 0;
  *(undefined8 *)(puVar17 + 0x70) = 0;
  *(undefined8 *)(puVar17 + 0x78) = 0;
  *(undefined8 **)(puVar17 + 0x68) = puVar9;
  *(undefined8 **)(puVar17 + 0x70) = puVar9;
  *(undefined8 ***)(puVar17 + 0x78) = &local_e8;
  do {
    *(undefined8 *)(puVar17 + -8) = 0x180146c8e;
    FUN_18016d4c0(puVar9,puVar19);
    puVar9 = puVar9 + 4;
    *(undefined8 **)(puVar17 + 0x70) = puVar9;
    puVar19 = puVar19 + 0x20;
  } while (puVar19 != puVar17 + 0x68);
  *(undefined8 **)(puVar17 + 0x68) = puVar9;
  local_138 = (undefined8 **)0x0;
  puStack_e0 = puVar9;
  *(undefined8 *)(puVar17 + -8) = 0x180146cce;
  _eh_vector_destructor_iterator_
            (puVar17 + 0x48,0x20,1,Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09);
  if ((longlong)puStack_e0 - (longlong)local_e8 >> 5 != 0) {
    do {
      if ((0x1fff < (ulonglong)((longlong)puStack_f8 - (longlong)local_100 >> 5)) ||
         (0x3ff < (ulonglong)((longlong)puStack_e0 - (longlong)local_e8 >> 5))) break;
      puVar9 = local_e8 + (longlong)pvVar20 * 4;
      *(undefined8 *)(puVar17 + -8) = 0x180146d45;
      FUN_18016d4c0(local_90,puVar9);
      *(undefined8 *)(puVar17 + -8) = 0x180146d5a;
      FUN_18002cfb0(local_70,local_90,&DAT_18035d8b0);
      local_108 = 0;
      pppppppuVar12 = local_70;
      if (0xf < local_58) {
        pppppppuVar12 = local_70[0];
      }
      *(undefined8 *)(puVar17 + -8) = 0x180146d76;
      pcVar15 = (char *)FUN_180146930(pppppppuVar12,&local_108);
      uVar3 = local_108;
      lVar23 = local_80;
      while ((local_108 = uVar3, local_80 = lVar23, pcVar15 != (char *)0x0 &&
             ((ulonglong)((longlong)puStack_f8 - (longlong)local_100 >> 5) < 0x2000))) {
        if ((*pcVar15 != '\0') && (*pcVar15 != '.')) {
          if (lVar23 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)(puVar17 + -8) = 0x180147115;
            FUN_1800130a0();
          }
          *(undefined8 *)(puVar17 + 0x30) = 1;
          *(undefined **)(puVar17 + 0x28) = &DAT_18034f6d4;
          *(longlong *)(puVar17 + 0x20) = lVar23;
          *(undefined8 *)(puVar17 + -8) = 0x180146dec;
          FUN_18020e930(local_128);
          *(undefined4 *)(puVar17 + 0x40) = 1;
          *(undefined8 *)(puVar17 + -8) = 0x180146dfb;
          sVar10 = strlen(pcVar15);
          *(undefined8 *)(puVar17 + -8) = 0x180146e0a;
          plVar11 = (longlong *)FUN_18021aef0(local_128,pcVar15,sVar10);
          local_b0 = (undefined8 *******)*plVar11;
          lStack_a8 = plVar11[1];
          local_a0 = plVar11[2];
          uStack_98 = plVar11[3];
          plVar11[2] = 0;
          plVar11[3] = 0xf;
          *(undefined1 *)plVar11 = 0;
          *(undefined4 *)(puVar17 + 0x40) = 3;
          *(undefined4 *)(puVar17 + 0x40) = 2;
          *(undefined8 *)(puVar17 + -8) = 0x180146e4e;
          FUN_18020e450(local_128);
          uVar3 = local_108;
          *(undefined8 *)(puVar17 + -8) = 0x180146e57;
          cVar6 = FUN_1801469a0(uVar3);
          if (cVar6 == '\0') {
            if (4 < local_a0) {
              pppppppuVar12 = &local_b0;
              if (0xf < uStack_98) {
                pppppppuVar12 = local_b0;
              }
              lVar23 = local_a0 - 4;
              *(undefined8 *)(puVar17 + -8) = 0x180146ea1;
              iVar7 = _stricmp((char *)(lVar23 + (longlong)pppppppuVar12),".mdl");
              if (iVar7 == 0) {
                ppuVar13 = &local_100;
                goto LAB_180146ea9;
              }
            }
          }
          else if ((ulonglong)((longlong)puStack_e0 - (longlong)local_e8 >> 5) < 0x400) {
            ppuVar13 = &local_e8;
LAB_180146ea9:
            *(undefined8 *)(puVar17 + -8) = 0x180146eb2;
            FUN_180214300(ppuVar13,&local_b0);
          }
          *(undefined4 *)(puVar17 + 0x40) = 0;
          *(undefined8 *)(puVar17 + -8) = 0x180146ec2;
          FUN_18020e450(&local_b0);
        }
        uVar3 = local_108;
        *(undefined8 *)(puVar17 + -8) = 0x180146ecb;
        pcVar15 = (char *)FUN_180146970(uVar3);
        uVar3 = local_108;
        lVar23 = local_80;
      }
      pvVar20 = (void *)((longlong)pvVar20 + 1);
      *(undefined8 *)(puVar17 + -8) = 0x180146ee3;
      FUN_1801469d0(uVar3);
      *(undefined8 *)(puVar17 + -8) = 0x180146eed;
      FUN_18020e450(local_70);
      *(undefined8 *)(puVar17 + -8) = 0x180146ef7;
      FUN_18020e450(local_90);
    } while (pvVar20 < (void *)((longlong)puStack_e0 - (longlong)local_e8 >> 5));
  }
  puVar21 = puStack_f8;
  puVar9 = local_100;
  lVar23 = (longlong)puStack_f8 - (longlong)local_100;
  *(undefined8 *)(puVar17 + -8) = 0x180146f2f;
  FUN_180220450(puVar9,puVar21,lVar23 >> 5,0);
  puVar21 = puStack_f8;
  puVar16 = puStack_f8;
  puVar9 = local_100;
  if (local_100 != puStack_f8) {
    do {
      do {
        puVar22 = puVar9;
        puVar9 = puVar22 + 4;
        puVar16 = puStack_f8;
        if (puVar9 == puVar21) goto LAB_18014703c;
        puVar16 = puVar9;
        if (0xf < (ulonglong)puVar9[3]) {
          puVar16 = (undefined8 *)*puVar9;
        }
        sVar10 = puVar22[2];
        puVar14 = puVar22;
        if (0xf < (ulonglong)puVar22[3]) {
          puVar14 = (undefined8 *)*puVar22;
        }
      } while (sVar10 != puVar9[2]);
      puVar4 = puVar21;
      if (sVar10 == 0) break;
      *(undefined8 *)(puVar17 + -8) = 0x180146f85;
      iVar7 = memcmp(puVar14,puVar16,sVar10);
    } while (iVar7 != 0);
joined_r0x000180146fa1:
    puVar9 = (undefined8 *)((longlong)puVar9 + 0x20);
    if (puVar9 != puVar21) {
      puVar16 = puVar9;
      if (0xf < (ulonglong)puVar9[3]) {
        puVar16 = (undefined8 *)*puVar9;
      }
      sVar10 = puVar22[2];
      puVar14 = puVar22;
      if (0xf < (ulonglong)puVar22[3]) {
        puVar14 = (undefined8 *)*puVar22;
      }
      if (sVar10 == puVar9[2]) goto code_r0x000180146fcb;
      goto LAB_180146fd9;
    }
    puVar22 = puVar22 + 4;
    puVar16 = puStack_f8;
    puVar9 = puVar4;
    if (puVar22 != puVar21) {
      for (; puVar14 = puVar22, puVar21 != puVar4; puVar21 = puVar21 + 4) {
        *(undefined8 *)(puVar17 + -8) = 0x18014700e;
        FUN_18020e8a0(puVar22,puVar21);
        puVar22 = puVar22 + 4;
        puVar9 = puStack_f8;
      }
      for (; puVar16 = puVar22, puVar14 != puVar9; puVar14 = puVar14 + 4) {
        *(undefined8 *)(puVar17 + -8) = 0x18014702f;
        FUN_18020e450(puVar14);
      }
    }
  }
LAB_18014703c:
  puStack_f8 = puVar16;
  local_130 = &DAT_1803e8400;
  *(undefined8 *)(puVar17 + -8) = 0x180147049;
  iVar7 = _Mtx_lock(&DAT_1803e8400);
  if (iVar7 != 0) {
    *(undefined8 *)(puVar17 + -8) = 0x180147058;
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_1803e844c == 0x7fffffff) {
    DAT_1803e844c = 0x7ffffffe;
    *(undefined8 *)(puVar17 + -8) = 0x180147079;
    std::_Throw_Cpp_error(6);
  }
  uVar5 = DAT_1803e9f00;
  uVar3 = DAT_1803e9ef8;
  puVar9 = DAT_1803e9ef0;
  DAT_1803e9ef0 = local_100;
  local_100 = puVar9;
  DAT_1803e9ef8 = puStack_f8;
  puStack_f8 = (undefined8 *)uVar3;
  DAT_1803e9f00 = local_f0;
  local_f0 = uVar5;
  *(undefined8 *)(puVar17 + -8) = 0x1801470c5;
  _Mtx_unlock(&DAT_1803e8400);
  LOCK();
  DAT_180409a6c = DAT_180409a6c + 1;
  UNLOCK();
  DAT_180409b80 = 0;
  *(undefined8 *)(puVar17 + -8) = 0x1801470dc;
  FUN_18020d5c0(&local_e8);
  *(undefined8 *)(puVar17 + -8) = 0x1801470e6;
  FUN_18020d5c0(&local_100);
  *(undefined8 *)(puVar17 + -8) = 0x1801470f0;
  FUN_18020e450(&local_d0);
  *(undefined8 *)(puVar17 + -8) = 0x1801470fc;
  return;
code_r0x000180146fcb:
  puVar4 = puStack_f8;
  if (sVar10 != 0) {
    *(undefined8 *)(puVar17 + -8) = 0x180146fd5;
    iVar7 = memcmp(puVar14,puVar16,sVar10);
    puVar4 = puStack_f8;
    if (iVar7 != 0) {
LAB_180146fd9:
      puVar22 = puVar22 + 4;
      *(undefined8 *)(puVar17 + -8) = 0x180146fe8;
      FUN_18020e8a0(puVar22,puVar9);
      puVar4 = puStack_f8;
    }
  }
  goto joined_r0x000180146fa1;
}


