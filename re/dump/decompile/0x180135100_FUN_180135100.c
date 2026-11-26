// 0x180135100  FUN_180135100
// size=1171 thunk=false
// signature: undefined FUN_180135100()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180135100(undefined8 *param_1,undefined8 param_2)

{
  byte *****pppppbVar1;
  byte bVar2;
  undefined8 *puVar3;
  size_t _Size;
  code *pcVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  void *pvVar12;
  undefined8 *_Buf1;
  undefined8 *****_Buf2;
  byte *****pppppbVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  void *pvVar18;
  undefined8 uStack_190;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  byte ***local_160;
  byte ***pppbStack_158;
  ulonglong local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 *local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 *local_f8;
  undefined8 local_f0 [4];
  undefined1 local_d0 [32];
  void *local_b0;
  longlong lStack_a8;
  longlong local_a0;
  byte ****local_98 [2];
  ulonglong local_88;
  ulonglong local_80;
  undefined8 ****local_78 [2];
  size_t local_68;
  ulonglong local_60;
  undefined1 local_58 [24];
  ulonglong local_40;
  
  puVar16 = auStack_188;
  puVar17 = auStack_188;
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_188;
  local_168 = 0;
  local_120 = &local_140;
  local_f8 = param_1;
  uVar7 = FUN_18016d4c0(&local_140);
  FUN_180133a10(local_78,uVar7);
  puVar8 = (undefined8 *)FUN_1801342d0(local_58);
  puVar3 = (undefined8 *)puVar8[1];
  for (puVar8 = (undefined8 *)*puVar8; puVar8 != puVar3; puVar8 = puVar8 + 9) {
    _Buf2 = local_78;
    if (0xf < local_60) {
      _Buf2 = (undefined8 *****)local_78[0];
    }
    _Size = puVar8[2];
    _Buf1 = puVar8;
    if (0xf < (ulonglong)puVar8[3]) {
      _Buf1 = (undefined8 *)*puVar8;
    }
    if ((_Size == local_68) && ((_Size == 0 || (iVar6 = memcmp(_Buf1,_Buf2,_Size), iVar6 == 0)))) {
      local_b0 = (void *)0x0;
      lStack_a8 = 0;
      pvVar12 = (void *)0x0;
      local_a0 = 0;
      cVar5 = FUN_180133af0(puVar8 + 5,&local_b0);
      if (cVar5 == '\0') {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0xf;
        *(undefined1 *)param_1 = 0;
        local_168 = 1;
        puVar17 = auStack_188;
        goto LAB_180135530;
      }
      local_120 = local_f0;
      uVar7 = FUN_18016d4c0(local_f0,param_2);
      uVar7 = FUN_180133a10(local_d0,uVar7);
      puVar8 = (undefined8 *)FUN_18022a630(uVar7);
      local_118 = *puVar8;
      uStack_110 = puVar8[1];
      local_108 = puVar8[2];
      uStack_100 = puVar8[3];
      puVar8[2] = 0;
      puVar8[3] = 0xf;
      *(undefined1 *)puVar8 = 0;
      local_168 = 8;
      FUN_18020e450(local_d0);
      FUN_180132610(local_98,local_b0,lStack_a8 - (longlong)local_b0,&local_118);
      local_168 = 0;
      FUN_18020e450(&local_118);
      if (local_88 < 0x28) goto LAB_1801354b8;
      pppppbVar13 = local_98;
      if (0xf < local_80) {
        pppppbVar13 = (byte *****)local_98[0];
      }
      if (*(byte *)pppppbVar13 != 0x65) goto LAB_1801354b8;
      pppppbVar13 = local_98;
      if (0xf < local_80) {
        pppppbVar13 = (byte *****)local_98[0];
      }
      if (*(byte *)((longlong)pppppbVar13 + 1) != 0x79) goto LAB_1801354b8;
      pppppbVar13 = (byte *****)local_98[0];
      if (local_80 < 0x10) {
        pppppbVar13 = local_98;
      }
      pppppbVar1 = (byte *****)((longlong)pppppbVar13 + local_88);
      pvVar18 = pvVar12;
      if (pppppbVar13 == pppppbVar1) goto LAB_1801353be;
      goto LAB_180135390;
    }
  }
  FUN_18020ad50(local_58);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  local_168 = 1;
  puVar17 = auStack_188;
  goto LAB_1801351e5;
LAB_180135390:
  do {
    bVar2 = *(byte *)pppppbVar13;
    if (bVar2 == 0x2e) {
      pvVar18 = (void *)(ulonglong)((int)pvVar18 + 1);
    }
    else if (((0x32 < (byte)(bVar2 - 0x2d)) ||
             ((0x43ffffff01ff9U >> ((ulonglong)(bVar2 - 0x2d) & 0x3f) & 1) == 0)) &&
            (0x19 < (byte)(bVar2 + 0x9f))) goto LAB_1801354b8;
    pppppbVar13 = (byte *****)((longlong)pppppbVar13 + 1);
  } while (pppppbVar13 != pppppbVar1);
LAB_1801353be:
  if ((int)pvVar18 < 2) {
LAB_1801354b8:
    uStack_138 = 0;
    local_130 = 0;
    local_128 = 0xf;
    local_140 = 0;
    puVar8 = &local_140;
    uVar14 = 4;
  }
  else {
    local_160 = (byte ***)0x0;
    pppbStack_158 = (byte ***)0x0;
    local_150 = 0;
    local_148 = 0;
    pppppbVar13 = local_98;
    if (0xf < local_80) {
      pppppbVar13 = (byte *****)local_98[0];
    }
    if (0x7fffffffffffffff < local_88) {
                    /* WARNING: Subroutine does not return */
      FUN_1800130a0();
    }
    if (local_88 < 0x10) {
      local_150 = local_88;
      local_148 = 0xf;
      local_160 = (byte ***)*pppppbVar13;
      pppbStack_158 = (byte ***)pppppbVar13[1];
      puVar16 = auStack_188;
    }
    else {
      uVar9 = local_88 | 0xf;
      if (uVar9 < 0x8000000000000000) goto LAB_180135448;
      uVar10 = 0x8000000000000027;
      puVar16 = auStack_188;
      uVar9 = 0x7fffffffffffffff;
      while( true ) {
        *(undefined8 *)(puVar16 + -8) = 0x180135439;
        lVar11 = FUN_1802d8350(uVar10);
        if (lVar11 != 0) break;
        pcVar4 = (code *)swi(0x29);
        uVar9 = (*pcVar4)(5);
        puVar16 = puVar16 + 8;
LAB_180135448:
        if (uVar9 < 0x16) {
          uVar9 = 0x16;
        }
        if (uVar9 == 0xffffffffffffffff) goto LAB_180135490;
        if (uVar9 + 1 < 0x1000) {
          *(undefined8 *)(puVar16 + -8) = 0x180135490;
          pvVar12 = (void *)FUN_1802d8350();
          goto LAB_180135490;
        }
        uVar10 = uVar9 + 0x28;
        if (uVar10 <= uVar9 + 1) {
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar16 + -8) = &UNK_180135594;
          FUN_180012fe0();
        }
      }
      pvVar12 = (void *)(lVar11 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)pvVar12 - 8) = lVar11;
LAB_180135490:
      *(void **)(puVar16 + 0x28) = pvVar12;
      *(ulonglong *)(puVar16 + 0x38) = local_88;
      *(ulonglong *)(puVar16 + 0x40) = uVar9;
      *(undefined8 *)(puVar16 + -8) = 0x1801354ae;
      memcpy(pvVar12,pppppbVar13,local_88 + 1);
    }
    puVar8 = (undefined8 *)(puVar16 + 0x28);
    uVar14 = 2;
    puVar17 = puVar16;
  }
  *(uint *)(puVar17 + 0x20) = uVar14;
  *(undefined8 *)(puVar17 + -8) = 0x1801354f1;
  FUN_18016d4c0(param_1,puVar8);
  uVar15 = uVar14 | 1;
  *(uint *)(puVar17 + 0x20) = uVar15;
  if ((uVar14 & 4) != 0) {
    uVar15 = uVar14 & 0xfffffffb | 1;
    *(uint *)(puVar17 + 0x20) = uVar15;
    *(undefined8 *)(puVar17 + -8) = 0x18013550e;
    FUN_18020e450(puVar17 + 0x48);
  }
  if ((uVar15 & 2) != 0) {
    *(uint *)(puVar17 + 0x20) = uVar15 & 0xfffffffd;
    *(undefined8 *)(puVar17 + -8) = 0x180135525;
    FUN_18020e450(puVar17 + 0x28);
  }
  *(undefined8 *)(puVar17 + -8) = 0x18013552f;
  FUN_18020e450(local_98);
LAB_180135530:
  if (local_b0 != (void *)0x0) {
    pvVar12 = local_b0;
    if ((0xfff < (ulonglong)(local_a0 - (longlong)local_b0)) &&
       (pvVar12 = *(void **)((longlong)local_b0 + -8),
       0x1f < (ulonglong)((longlong)local_b0 + (-8 - (longlong)pvVar12)))) {
      pcVar4 = (code *)swi(0x29);
      pvVar12 = (void *)(*pcVar4)(5);
      puVar17 = puVar17 + 8;
    }
    *(undefined8 *)(puVar17 + -8) = 0x18013556f;
    free(pvVar12);
    local_a0 = 0;
    local_b0 = (void *)0x0;
    lStack_a8 = 0;
  }
  *(undefined8 *)(puVar17 + -8) = 0x180135584;
  FUN_18020ad50(local_58);
LAB_1801351e5:
  *(undefined8 *)(puVar17 + -8) = 0x1801351ee;
  FUN_18020e450(local_78);
  *(undefined8 *)(puVar17 + -8) = 0x1801351fd;
  return param_1;
}


