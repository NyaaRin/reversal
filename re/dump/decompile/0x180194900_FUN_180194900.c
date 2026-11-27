// 0x180194900  FUN_180194900
// size=1442 thunk=false
// signature: undefined FUN_180194900()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180194900(longlong *param_1)

{
  size_t _Size;
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  size_t sVar4;
  undefined8 *******pppppppuVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *******pppppppuVar8;
  undefined8 *_Buf1;
  int iVar9;
  char *pcVar10;
  undefined1 *puVar11;
  char *_Str;
  ulonglong uVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  ulonglong _Size_00;
  ulonglong uVar15;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [56];
  undefined4 local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  char *local_a8;
  undefined8 ******local_80;
  undefined8 uStack_78;
  ulonglong local_70;
  ulonglong uStack_68;
  ulonglong local_60;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  puVar11 = auStack_138;
  local_60 = DAT_1803da4c0 ^ (ulonglong)auStack_138;
  pcVar10 = (char *)0x0;
  local_f8 = 0;
  iVar2 = FUN_1801947a0();
  if (iVar2 != 0) {
    local_f0 = &local_e8;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    local_d0 = 0;
    FUN_18001d080(&local_e8,"Player ignored - use Players friend bind",0x28);
    FUN_180121e90(&local_e8);
    puVar13 = auStack_138;
    goto LAB_180194e6c;
  }
  local_a8 = (char *)FUN_18001e410(param_1);
  if ((((local_a8 == (char *)0x0) || (*local_a8 == '\0')) ||
      (_Str = local_a8, local_a8 < (char *)0x10000)) &&
     ((lVar3 = (**(code **)(*param_1 + 0x78))(param_1), lVar3 == 0 ||
      (_Str = *(char **)(lVar3 + 0x10), *(char **)(lVar3 + 0x10) < (char *)0x10001)))) {
    _Str = pcVar10;
  }
  puVar13 = auStack_138;
  if ((_Str == (char *)0x0) || (puVar13 = auStack_138, *_Str == '\0')) goto LAB_180194e6c;
  local_80 = (undefined8 *******)0x0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_a8 = _Str;
  sVar4 = strlen(_Str);
  FUN_18001d080(&local_80,_Str,sVar4);
  uVar14 = uStack_68;
  uVar12 = local_70;
  pppppppuVar5 = (undefined8 *******)local_80;
  puVar13 = auStack_138;
  if (6 < local_70) {
    uVar15 = 6;
    if (local_70 < 6) {
      uVar15 = local_70;
    }
    pppppppuVar8 = &local_80;
    if (0xf < uStack_68) {
      pppppppuVar8 = (undefined8 *******)local_80;
    }
    _Size_00 = uVar15;
    if (6 < uVar15) {
      _Size_00 = 6;
    }
    iVar2 = memcmp(pppppppuVar8,"class ",_Size_00);
    puVar13 = auStack_138;
    if ((iVar2 == 0) && (puVar13 = auStack_138, uVar15 == 6)) {
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      lVar3 = -1;
      if (uVar12 - 6 != -1) {
        lVar3 = uVar12 - 6;
      }
      pppppppuVar8 = &local_80;
      if (0xf < uVar14) {
        pppppppuVar8 = pppppppuVar5;
      }
      FUN_18001d080(&local_c8,(undefined1 *)((longlong)pppppppuVar8 + 6),lVar3);
      local_f8 = 1;
      if (0xf < uStack_68) {
        pppppppuVar5 = (undefined8 *******)local_80;
        puVar11 = auStack_138;
        if ((0xfff < uStack_68 + 1) &&
           (pppppppuVar5 = (undefined8 *******)local_80[-1], puVar11 = auStack_138,
           (undefined1 *)0x1f < (undefined1 *)((longlong)local_80 + (-8 - (longlong)pppppppuVar5))))
        {
          pcVar1 = (code *)swi(0x29);
          pppppppuVar5 = (undefined8 *******)(*pcVar1)(5);
          puVar11 = auStack_130;
        }
        *(undefined8 *)(puVar11 + -8) = 0x180194b24;
        free(pppppppuVar5);
      }
      *(undefined8 *)(puVar11 + 200) = 0;
      *(undefined8 *)(puVar11 + 0xd0) = 0xf;
      puVar11[0xb8] = 0;
      pppppppuVar5 = *(undefined8 ********)(puVar11 + 0x70);
      *(undefined8 ********)(puVar11 + 0xb8) = pppppppuVar5;
      *(undefined8 *)(puVar11 + 0xc0) = *(undefined8 *)(puVar11 + 0x78);
      uVar12 = *(ulonglong *)(puVar11 + 0x80);
      uVar14 = *(ulonglong *)(puVar11 + 0x88);
      *(ulonglong *)(puVar11 + 200) = uVar12;
      *(ulonglong *)(puVar11 + 0xd0) = uVar14;
      *(undefined8 *)(puVar11 + 0x80) = 0;
      *(undefined8 *)(puVar11 + 0x88) = 0xf;
      puVar11[0x70] = 0;
      *(undefined4 *)(puVar11 + 0x40) = 0;
      *(undefined8 *)(puVar11 + -8) = 0x180194b89;
      FUN_18020e450(puVar11 + 0x70);
      puVar13 = puVar11;
    }
  }
  if (uVar12 == 0) {
LAB_180194e1e:
    *(undefined1 **)(puVar13 + 0x48) = puVar13 + 0x50;
    *(undefined8 *)(puVar13 + 0x50) = 0;
    *(undefined8 *)(puVar13 + 0x58) = 0;
    *(undefined8 *)(puVar13 + 0x60) = 0;
    *(undefined8 *)(puVar13 + 0x68) = 0;
    *(undefined8 *)(puVar13 + -8) = 0x180194e51;
    FUN_18001d080(puVar13 + 0x50,"Nothing to add (world)",0x16);
    *(undefined8 *)(puVar13 + -8) = 0x180194e5c;
    FUN_180121e90(puVar13 + 0x50);
    *(undefined8 *)(puVar13 + -8) = 0x180194e6a;
    FUN_18020e450(puVar13 + 0xb8);
    goto LAB_180194e6c;
  }
  pppppppuVar8 = (undefined8 *******)(puVar13 + 0xb8);
  if (0xf < uVar14) {
    pppppppuVar8 = pppppppuVar5;
  }
  if (uVar12 == 0xb) {
    *(undefined8 *)(puVar13 + -8) = 0x180194bcf;
    iVar2 = memcmp(pppppppuVar8,"CBaseEntity",0xb);
    if (iVar2 == 0) goto LAB_180194e1e;
  }
  pppppppuVar8 = (undefined8 *******)(puVar13 + 0xb8);
  if (0xf < uVar14) {
    pppppppuVar8 = pppppppuVar5;
  }
  if (uVar12 == 10) {
    *(undefined8 *)(puVar13 + -8) = 0x180194bfc;
    iVar2 = memcmp(pppppppuVar8,"worldspawn",10);
    if (iVar2 == 0) goto LAB_180194e1e;
  }
  pppppppuVar8 = (undefined8 *******)(puVar13 + 0xb8);
  if (0xf < uVar14) {
    pppppppuVar8 = pppppppuVar5;
  }
  if (uVar12 == 6) {
    *(undefined8 *)(puVar13 + -8) = 0x180194c29;
    iVar2 = memcmp(pppppppuVar8,"CWorld",6);
    if (iVar2 == 0) goto LAB_180194e1e;
  }
  *(undefined8 *)(puVar13 + -8) = 0x180194c3e;
  puVar6 = (undefined8 *)FUN_180122350(puVar13 + 0xb8);
  if (puVar6 == (undefined8 *)0x0) {
    *(undefined8 *)(puVar13 + -8) = 0x180194ddc;
    FUN_180122440(puVar13 + 0xb8);
    *(undefined1 **)(puVar13 + 0x48) = puVar13 + 0x98;
    *(undefined8 *)(puVar13 + -8) = 0x180194e05;
    uVar7 = FUN_1801fd120(puVar13 + 0x98,"Added ",puVar13 + 0xb8);
    *(undefined8 *)(puVar13 + -8) = 0x180194e0e;
    FUN_180121e90(uVar7);
    *(undefined8 *)(puVar13 + -8) = 0x180194e1c;
    FUN_18020e450(puVar13 + 0xb8);
    goto LAB_180194e6c;
  }
  iVar2 = DAT_1803e8978;
  if (0 < (int)(DAT_1803eb380 - DAT_1803eb378 >> 4) * -0x49249249) {
    do {
      iVar9 = (int)pcVar10;
      iVar2 = iVar9;
      if ((undefined8 *)((longlong)iVar9 * 0x70 + DAT_1803eb378) == puVar6) break;
      pcVar10 = (char *)(ulonglong)(iVar9 + 1U);
      iVar2 = DAT_1803e8978;
    } while ((int)(iVar9 + 1U) < (int)(DAT_1803eb380 - DAT_1803eb378 >> 4) * -0x49249249);
  }
  DAT_1803e8978 = iVar2;
  sVar4 = *(size_t *)(puVar13 + 200);
  puVar11 = puVar13 + 0xb8;
  if (0xf < *(ulonglong *)(puVar13 + 0xd0)) {
    puVar11 = *(undefined1 **)(puVar13 + 0xb8);
  }
  _Size = puVar6[2];
  _Buf1 = puVar6;
  if (0xf < (ulonglong)puVar6[3]) {
    _Buf1 = (undefined8 *)*puVar6;
  }
  if (_Size == sVar4) {
    if (_Size != 0) {
      *(undefined8 *)(puVar13 + -8) = 0x180194cf5;
      iVar2 = memcmp(_Buf1,puVar11,_Size);
      if (iVar2 != 0) goto LAB_180194d2a;
    }
    *(undefined1 **)(puVar13 + 0x48) = puVar13 + 0x50;
    *(undefined8 *)(puVar13 + -8) = 0x180194d1c;
    uVar7 = FUN_18002cfb0(puVar13 + 0x50,puVar13 + 0xb8," - already in list");
    *(undefined8 *)(puVar13 + -8) = 0x180194d25;
    FUN_180121e90(uVar7);
  }
  else {
LAB_180194d2a:
    *(undefined1 **)(puVar13 + 0x48) = puVar13 + 0x98;
    if (0x7fffffffffffffff - sVar4 < 0xe) {
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar13 + -8) = &UNK_180194ea2;
      FUN_1800130a0();
    }
    *(undefined8 *)(puVar13 + 0x30) = 0xe;
    *(char **)(puVar13 + 0x28) = " - covered by ";
    *(size_t *)(puVar13 + 0x20) = sVar4;
    *(undefined8 *)(puVar13 + -8) = 0x180194d82;
    FUN_18020e930(puVar13 + 0x50);
    *(undefined4 *)(puVar13 + 0x40) = 2;
    *(undefined8 *)(puVar13 + -8) = 0x180194da0;
    uVar7 = FUN_1801fc800(puVar13 + 0x98,puVar13 + 0x50,puVar6);
    *(undefined8 *)(puVar13 + -8) = 0x180194da9;
    FUN_180121e90(uVar7);
    *(undefined4 *)(puVar13 + 0x40) = 0;
    *(undefined8 *)(puVar13 + -8) = 0x180194dbc;
    FUN_18020e450(puVar13 + 0x50);
  }
  *(undefined8 *)(puVar13 + -8) = 0x180194dca;
  FUN_18020e450(puVar13 + 0xb8);
LAB_180194e6c:
  *(undefined8 *)(puVar13 + -8) = 0x180194e7c;
  return;
}


