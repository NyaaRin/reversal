// 0x180134a00  FUN_180134a00
// size=1291 thunk=false
// signature: undefined FUN_180134a00()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180134a00(longlong param_1,longlong param_2,BYTE *param_3)

{
  char *pcVar1;
  byte bVar2;
  size_t _Size;
  code *pcVar3;
  bool bVar4;
  byte *pbVar5;
  undefined8 ****ppppuVar6;
  size_t sVar7;
  BOOL BVar8;
  int iVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 *****pppppuVar12;
  byte *pbVar13;
  ulonglong uVar14;
  DATA_BLOB *_Buf1;
  DATA_BLOB *pDVar15;
  undefined1 *puVar16;
  DATA_BLOB *pDVar17;
  undefined1 auStackY_1f8 [8];
  undefined1 auStackY_1f0 [24];
  undefined8 ****local_1b0;
  undefined8 uStack_1a8;
  ulonglong local_1a0;
  ulonglong local_198;
  BYTE ****local_190;
  longlong lStack_188;
  longlong local_180;
  ulonglong uStack_178;
  longlong local_170;
  undefined1 local_168 [32];
  undefined1 local_148 [32];
  DATA_BLOB *local_128;
  BYTE *local_120;
  DATA_BLOB local_118;
  DATA_BLOB local_108 [2];
  DATA_BLOB *local_e8;
  DATA_BLOB *pDStack_e0;
  DATA_BLOB *local_d8;
  byte *local_d0;
  byte *pbStack_c8;
  longlong local_c0;
  undefined8 ****local_b8 [2];
  size_t local_a8;
  ulonglong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  puVar16 = auStackY_1f8;
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStackY_1f8;
  if ((*(longlong *)(param_1 + 0x10) == 0) || (*(longlong *)(param_3 + 0x10) == 0)) {
    uVar14 = local_48 & 0xffffffffffffff00;
    puVar16 = auStackY_1f8;
    goto LAB_180134ee1;
  }
  local_d0 = (byte *)0x0;
  pbStack_c8 = (byte *)0x0;
  local_c0 = 0;
  local_128 = (DATA_BLOB *)local_168;
  local_170 = param_2;
  uVar10 = FUN_18016d4c0(local_168,param_1);
  uVar10 = FUN_180133a10(local_148,uVar10);
  plVar11 = (longlong *)FUN_18022a630(uVar10);
  local_190 = (BYTE ****)*plVar11;
  lStack_188 = plVar11[1];
  local_180 = plVar11[2];
  uStack_178 = plVar11[3];
  plVar11[2] = 0;
  plVar11[3] = 0xf;
  *(undefined1 *)plVar11 = 0;
  FUN_18020e450(local_148);
  local_108[0].cbData = *(DWORD *)(param_3 + 0x10);
  if (0xf < *(ulonglong *)(param_3 + 0x18)) {
    param_3 = *(BYTE **)param_3;
  }
  local_118.cbData = (DWORD)local_180;
  local_118.pbData = (BYTE *)&local_190;
  if (0xf < uStack_178) {
    local_118.pbData = (BYTE *)local_190;
  }
  local_128 = (DATA_BLOB *)((ulonglong)local_128 & 0xffffffff00000000);
  local_120 = (BYTE *)0x0;
  pDVar17 = &local_118;
  if (local_180 == 0) {
    pDVar17 = (DATA_BLOB *)0x0;
  }
  local_108[0].pbData = param_3;
  BVar8 = CryptProtectData(local_108,L"mayrrX64 Steam token",pDVar17,(PVOID)0x0,
                           (CRYPTPROTECT_PROMPTSTRUCT *)0x0,0,(DATA_BLOB *)&local_128);
  if (BVar8 == 0) {
    bVar4 = true;
  }
  else {
    FUN_1802133e0(&local_d0,local_120,(ulonglong)local_128 & 0xffffffff);
    if (local_120 != (BYTE *)0x0) {
      LocalFree(local_120);
    }
    bVar4 = false;
  }
  FUN_18020e450(&local_190);
  if (bVar4) {
    uVar14 = 0;
  }
  else {
    local_128 = local_108;
    uVar10 = FUN_18016d4c0(local_108,param_1);
    FUN_180133a10(local_b8,uVar10);
    local_e8 = (DATA_BLOB *)0x0;
    pDStack_e0 = (DATA_BLOB *)0x0;
    local_d8 = (DATA_BLOB *)0x0;
    FUN_1801342d0(&local_e8);
    uVar14 = local_a0;
    sVar7 = local_a8;
    ppppuVar6 = local_b8[0];
    pDVar17 = pDStack_e0;
    pDVar15 = local_e8;
    if (local_e8 == pDStack_e0) {
LAB_180134c5b:
      uStack_90 = 0;
      local_88 = 0;
      local_80 = 0xf;
      local_98 = 0;
      local_78 = 0;
      uStack_68 = 0;
      local_60 = 0;
      local_58 = 0xf;
      local_70 = 0;
      pppppuVar12 = local_b8;
      if (0xf < local_a0) {
        pppppuVar12 = (undefined8 *****)local_b8[0];
      }
      FUN_180212700(&local_98,pppppuVar12,local_a8);
      pDVar17 = pDStack_e0;
      if (pDStack_e0 == local_d8) {
        FUN_180224fe0(&local_e8,pDStack_e0,&local_98);
      }
      else {
        local_128 = pDStack_e0;
        FUN_18016d4c0(pDStack_e0,&local_98);
        *(undefined8 *)(pDVar17 + 2) = local_78;
        FUN_18016d4c0(&pDVar17[2].pbData,&local_70);
        pDStack_e0 = (DATA_BLOB *)&pDStack_e0[4].pbData;
      }
      pDVar15 = (DATA_BLOB *)&pDStack_e0[-5].pbData;
      FUN_18020e450(&local_70);
      FUN_18020e450(&local_98);
    }
    else {
      do {
        pppppuVar12 = local_b8;
        if (0xf < uVar14) {
          pppppuVar12 = (undefined8 *****)ppppuVar6;
        }
        _Size = *(size_t *)(pDVar15 + 1);
        _Buf1 = pDVar15;
        if ((BYTE *)0xf < pDVar15[1].pbData) {
          _Buf1 = *(DATA_BLOB **)pDVar15;
        }
      } while (((_Size != sVar7) ||
               ((_Size != 0 && (iVar9 = memcmp(_Buf1,pppppuVar12,_Size), iVar9 != 0)))) &&
              (pDVar15 = (DATA_BLOB *)&pDVar15[4].pbData, pDVar15 != pDVar17));
      param_2 = local_170;
      if (pDVar15 == pDVar17) goto LAB_180134c5b;
    }
    if (param_2 != 0) {
      *(longlong *)(pDVar15 + 2) = param_2;
    }
    uStack_1a8 = 0;
    local_1a0 = 0;
    local_198 = 0xf;
    local_1b0 = (undefined8 *****)0x0;
    if (0xf < (ulonglong)(((longlong)pbStack_c8 - (longlong)local_d0) * 2)) {
      FUN_18021aa80(&local_1b0);
    }
    pbVar5 = pbStack_c8;
    local_1a0 = 0;
    uVar14 = local_1a0;
    for (pbVar13 = local_d0; local_1a0 = uVar14, pbVar13 != pbVar5; pbVar13 = pbVar13 + 1) {
      bVar2 = *pbVar13;
      if (uVar14 < local_198) {
        local_1a0 = uVar14 + 1;
        pppppuVar12 = &local_1b0;
        if (0xf < local_198) {
          pppppuVar12 = (undefined8 *****)local_1b0;
        }
        *(char *)((longlong)pppppuVar12 + uVar14) = "0123456789abcdef"[bVar2 >> 4];
        *(undefined1 *)((longlong)pppppuVar12 + uVar14 + 1) = 0;
      }
      else {
        FUN_18021abd0(&local_1b0);
      }
      uVar14 = local_1a0;
      if (local_1a0 < local_198) {
        pppppuVar12 = &local_1b0;
        if (0xf < local_198) {
          pppppuVar12 = (undefined8 *****)local_1b0;
        }
        pcVar1 = (char *)((longlong)pppppuVar12 + local_1a0);
        local_1a0 = local_1a0 + 1;
        *pcVar1 = "0123456789abcdef"[bVar2 & 0xf];
        *(undefined1 *)((longlong)pppppuVar12 + uVar14 + 1) = 0;
      }
      else {
        FUN_18021abd0(&local_1b0);
      }
      uVar14 = local_1a0;
    }
    FUN_18020e8a0(&pDVar15[2].pbData,&local_1b0);
    FUN_18020e450(&local_1b0);
    FUN_180134830(&local_e8);
    uVar14 = 1;
    FUN_18020ad50(&local_e8);
    FUN_18020e450(local_b8);
  }
  if (local_d0 != (byte *)0x0) {
    pbVar13 = local_d0;
    puVar16 = auStackY_1f8;
    if ((0xfff < (ulonglong)(local_c0 - (longlong)local_d0)) &&
       (pbVar13 = *(byte **)(local_d0 + -8), puVar16 = auStackY_1f8,
       (byte *)0x1f < local_d0 + (-8 - (longlong)pbVar13))) {
      pcVar3 = (code *)swi(0x29);
      pbVar13 = (byte *)(*pcVar3)(5);
      puVar16 = auStackY_1f0;
    }
    *(undefined8 *)(puVar16 + -8) = 0x180134ece;
    free(pbVar13);
  }
LAB_180134ee1:
  *(undefined8 *)(puVar16 + -8) = 0x180134ef0;
  return uVar14;
}


