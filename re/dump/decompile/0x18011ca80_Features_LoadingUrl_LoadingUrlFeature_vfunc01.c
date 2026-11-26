// 0x18011ca80  Features_LoadingUrl_LoadingUrlFeature_vfunc01
// size=5 thunk=true
// signature: undefined Features_LoadingUrl_LoadingUrlFeature_vfunc01()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_LoadingUrl_LoadingUrlFeature_vfunc01(longlong param_1)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  char *pcVar9;
  int *piVar10;
  int *piVar11;
  char *pcVar12;
  ULONGLONG UVar13;
  undefined8 uVar14;
  size_t sVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined8 ***pppuVar19;
  undefined8 ****ppppuVar20;
  longlong lVar21;
  int *piVar22;
  undefined8 *****pppppuVar23;
  undefined8 *puVar24;
  char *pcVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  uint uVar29;
  undefined8 uStack_150;
  undefined1 auStack_148 [32];
  char *pcStack_128;
  char *pcStack_120;
  undefined8 *puStack_118;
  char cStack_108;
  undefined4 uStack_104;
  int aiStack_100 [2];
  undefined1 auStack_f8 [32];
  undefined8 **ppuStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ULONGLONG UStack_b8;
  undefined8 ***pppuStack_b0;
  undefined8 ***pppuStack_a8;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  ulonglong uStack_90;
  undefined8 ****ppppuStack_88;
  undefined8 uStack_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  undefined8 auStack_68 [2];
  ulonglong uStack_58;
  
  puVar26 = auStack_148;
  puVar27 = auStack_148;
  uStack_58 = DAT_1803da4c0 ^ (ulonglong)auStack_148;
  uStack_104 = 0;
  FUN_18011c490();
  lVar21 = DAT_180423700;
  if (*(char *)(param_1 + 0x90) == '\0') {
    *(undefined1 *)(param_1 + 0x90) = 1;
LAB_18011cfc5:
    FUN_18011afa0();
  }
  else if ((DAT_180423708 != '\0') &&
          ((UVar13 = GetTickCount64(), 4999 < UVar13 - lVar21 ||
           ((DAT_1803fa668 != (longlong *)0x0 &&
            (cVar4 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar4 != '\0')))))) goto LAB_18011cfc5;
  UStack_b8 = 0x93fd561a96ab0c67;
  plVar8 = (longlong *)FUN_180241a30(&DAT_1803fadf0,auStack_68,&UStack_b8);
  uStack_90 = 0x1477d415bd0ac6ae;
  plVar8 = (longlong *)FUN_180241a30(*plVar8 + 0x28,auStack_f8,&uStack_90);
  pcVar9 = (char *)FUN_1801fcfc0(*plVar8 + 0x28);
  cVar4 = *pcVar9;
  aiStack_100[1] = 2;
  aiStack_100[0] = 0;
  UStack_b8 = 0x93fd561a96ab0c67;
  plVar8 = (longlong *)FUN_180241a30(&DAT_1803fadf0,auStack_f8,&UStack_b8);
  uStack_90 = 0x1fba2029bab6b64c;
  plVar8 = (longlong *)FUN_180241a30(*plVar8 + 0x28,auStack_68,&uStack_90);
  piVar10 = (int *)FUN_1802029c0(*plVar8 + 0x28);
  piVar22 = aiStack_100;
  if (-1 < *piVar10) {
    piVar22 = piVar10;
  }
  piVar11 = aiStack_100 + 1;
  if (*piVar10 < 3) {
    piVar11 = piVar22;
  }
  iVar7 = *piVar11;
  uStack_90 = CONCAT44(uStack_90._4_4_,iVar7);
  UStack_b8 = 0x93fd561a96ab0c67;
  plVar8 = (longlong *)FUN_180241a30(&DAT_1803fadf0,auStack_f8,&UStack_b8);
  auStack_68[0] = 0xcf92fdbe588d8af4;
  plVar8 = (longlong *)FUN_180241a30(*plVar8 + 0x28,&pppuStack_b0,auStack_68);
  pcVar12 = (char *)FUN_1802028c0(*plVar8 + 0x28);
  auStack_68[0] = 0x93fd561a96ab0c67;
  plVar8 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&pppuStack_b0,auStack_68);
  UStack_b8 = 0xdf2349e24f8aaf7d;
  FUN_180241a30(*plVar8 + 0x28,auStack_f8,&UStack_b8);
  pcVar9 = (char *)FUN_1802028c0();
  UVar13 = GetTickCount64();
  UStack_b8 = UVar13;
  if (((*(char *)(param_1 + 8) == '\0') || (cVar4 != *(char *)(param_1 + 10))) ||
     (iVar7 != *(int *)(param_1 + 0xc))) {
LAB_18011d1be:
    cStack_108 = '\x01';
  }
  else {
    puVar24 = (undefined8 *)(param_1 + 0x10);
    if (0xf < *(ulonglong *)(param_1 + 0x28)) {
      puVar24 = (undefined8 *)*puVar24;
    }
    sVar15 = *(size_t *)(pcVar12 + 0x10);
    pcVar25 = pcVar12;
    if (0xf < *(ulonglong *)(pcVar12 + 0x18)) {
      pcVar25 = *(char **)pcVar12;
    }
    if ((sVar15 != *(size_t *)(param_1 + 0x20)) ||
       ((sVar15 != 0 && (iVar6 = memcmp(pcVar25,puVar24,sVar15), iVar6 != 0)))) goto LAB_18011d1be;
    puVar24 = (undefined8 *)(param_1 + 0x30);
    if (0xf < *(ulonglong *)(param_1 + 0x48)) {
      puVar24 = (undefined8 *)*puVar24;
    }
    sVar15 = *(size_t *)(pcVar9 + 0x10);
    pcVar25 = pcVar9;
    if (0xf < *(ulonglong *)(pcVar9 + 0x18)) {
      pcVar25 = *(char **)pcVar9;
    }
    if ((sVar15 != *(size_t *)(param_1 + 0x40)) ||
       ((sVar15 != 0 && (iVar6 = memcmp(pcVar25,puVar24,sVar15), iVar6 != 0)))) goto LAB_18011d1be;
    cStack_108 = '\0';
  }
  if ((DAT_180423738 != '\0') || (DAT_180423728 != '\0')) {
    if ((*(char *)(param_1 + 0x92) == '\0') || (UVar13 < *(ulonglong *)(param_1 + 0x98))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((cStack_108 != '\0') || (puVar28 = auStack_148, bVar2)) {
      puVar24 = (undefined8 *)(param_1 + 0x70);
      pcStack_128 = pcVar12;
      pcStack_120 = pcVar9;
      puStack_118 = puVar24;
      uVar14 = FUN_18011cb30(param_1,&pppuStack_b0,cVar4);
      puVar16 = (undefined8 *)(param_1 + 0x50);
      FUN_18020e8a0(puVar16,uVar14);
      FUN_18020e450(&pppuStack_b0);
      if (*(char *)(param_1 + 0x92) == '\0') {
        lVar21 = 0;
      }
      else {
        lVar21 = UStack_b8 + 3000;
      }
      *(longlong *)(param_1 + 0x98) = lVar21;
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_180423720);
      if (puVar16 != &DAT_1803e9b58) {
        if (0xf < *(ulonglong *)(param_1 + 0x68)) {
          puVar16 = (undefined8 *)*puVar16;
        }
        FUN_180212700(&DAT_1803e9b58,puVar16,*(undefined8 *)(param_1 + 0x60));
      }
      if (puVar24 != &DAT_1803e9b78) {
        if (0xf < *(ulonglong *)(param_1 + 0x88)) {
          puVar24 = (undefined8 *)*puVar24;
        }
        FUN_180212700(&DAT_1803e9b78,puVar24,*(undefined8 *)(param_1 + 0x80));
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180423720);
      DAT_180423709 = cVar4;
      *(undefined1 *)(param_1 + 8) = 1;
      *(char *)(param_1 + 10) = cVar4;
      *(int *)(param_1 + 0xc) = iVar7;
      if ((char *)(param_1 + 0x10) != pcVar12) {
        pcVar25 = pcVar12 + 0x10;
        if (0xf < *(ulonglong *)(pcVar12 + 0x18)) {
          pcVar12 = *(char **)pcVar12;
        }
        FUN_180212700((char *)(param_1 + 0x10),pcVar12,*(undefined8 *)pcVar25);
      }
      if ((char *)(param_1 + 0x30) != pcVar9) {
        pcVar12 = pcVar9;
        if (0xf < *(ulonglong *)(pcVar9 + 0x18)) {
          pcVar12 = *(char **)pcVar9;
        }
        FUN_180212700((char *)(param_1 + 0x30),pcVar12,*(undefined8 *)(pcVar9 + 0x10));
      }
      pcStack_120 = "native hook";
      if (DAT_180423728 != '\0') {
        pcStack_120 = "native, every connect";
      }
      pcStack_128 = pcVar9;
      FUN_18011d930(param_1,cVar4,iVar7,param_1 + 0x50);
      puVar28 = auStack_148;
      if (cStack_108 != '\0') {
        puVar24 = &DAT_1803e9b38;
        if (0xf < DAT_1803e9b50) {
          puVar24 = DAT_1803e9b38;
        }
        FUN_180014410("[LOADURL] %s\n",puVar24);
        puVar28 = auStack_148;
      }
    }
    goto LAB_18011d903;
  }
  if (cVar4 == '\0') {
    if (*(char *)(param_1 + 9) == '\0') {
      *(undefined1 *)(param_1 + 8) = 1;
      *(undefined1 *)(param_1 + 10) = 0;
      *(int *)(param_1 + 0xc) = iVar7;
      if ((char *)(param_1 + 0x10) != pcVar12) {
        pcVar25 = pcVar12 + 0x10;
        if (0xf < *(ulonglong *)(pcVar12 + 0x18)) {
          pcVar12 = *(char **)pcVar12;
        }
        FUN_180212700((char *)(param_1 + 0x10),pcVar12,*(undefined8 *)pcVar25);
      }
      puVar28 = auStack_148;
      if ((char *)(param_1 + 0x30) != pcVar9) {
        pcVar12 = pcVar9 + 0x10;
        if (0xf < *(ulonglong *)(pcVar9 + 0x18)) {
          pcVar9 = *(char **)pcVar9;
        }
        FUN_180212700((char *)(param_1 + 0x30),pcVar9,*(undefined8 *)pcVar12);
        puVar28 = auStack_148;
      }
      goto LAB_18011d903;
    }
LAB_18011d24f:
    bVar2 = false;
  }
  else {
    if ((*(char *)(param_1 + 9) == '\0') || (UVar13 < *(ulonglong *)(param_1 + 0xa0)))
    goto LAB_18011d24f;
    bVar2 = true;
  }
  if (cStack_108 == '\0') {
    puVar28 = auStack_148;
    if (!bVar2) goto LAB_18011d903;
  }
  else {
    puVar28 = auStack_148;
    if (UVar13 < *(ulonglong *)(param_1 + 0x98)) goto LAB_18011d903;
    puStack_118 = (undefined8 *)(param_1 + 0x70);
    pcStack_128 = pcVar12;
    pcStack_120 = pcVar9;
    uVar14 = FUN_18011cb30(param_1,&pppuStack_b0,cVar4);
    FUN_18020e8a0(param_1 + 0x50,uVar14);
    FUN_18020e450(&pppuStack_b0);
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_18011b680(&pppuStack_b0,param_1 + 0x70);
    uVar14 = FUN_18011ae40(auStack_f8,&pppuStack_b0);
    FUN_18020e8a0(param_1 + 0x50,uVar14);
    FUN_18020e450(auStack_f8);
    FUN_18011b190(&pppuStack_b0);
    FUN_18020e450(&pppuStack_b0);
  }
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0xf;
  ppppuStack_88 = (undefined8 *****)0x0;
  pppuStack_a8 = (undefined8 ****)0x0;
  uStack_a0 = 0;
  uStack_98 = 0xf;
  pppuStack_b0 = (undefined8 ****)0x0;
  uStack_104 = 4;
  FUN_18021aef0(&pppuStack_b0,"local K = \"",0xb);
  FUN_18021aef0(&pppuStack_b0,"__gm_loadscreen",0xf);
  FUN_18021aef0(&pppuStack_b0,&DAT_18035732c,2);
  FUN_18021aef0(&pppuStack_b0,"local ST = rawget(_G, K)\n",0x19);
  FUN_18021aef0(&pppuStack_b0,"if type(ST) ~= \"table\" then ST = {} rawset(_G, K, ST) end\n",0x3a);
  FUN_18021aef0(&pppuStack_b0,"ST.on = ",8);
  pcVar25 = "false";
  if (cVar4 != '\0') {
    pcVar25 = "true";
  }
  sVar15 = strlen(pcVar25);
  FUN_18021aef0(&pppuStack_b0,pcVar25,sVar15);
  FUN_18021aef0(&pppuStack_b0,&DAT_18033e92c,1);
  FUN_18021aef0(&pppuStack_b0,"ST.url = \"",10);
  puVar16 = (undefined8 *)FUN_18011c710(auStack_f8,param_1 + 0x50);
  puVar24 = puVar16 + 2;
  if (0xf < (ulonglong)puVar16[3]) {
    puVar16 = (undefined8 *)*puVar16;
  }
  FUN_18021aef0(&pppuStack_b0,puVar16,*puVar24);
  FUN_18020e450(auStack_f8);
  FUN_18021aef0(&pppuStack_b0,&DAT_18035732c,2);
  FUN_18021aef0(&pppuStack_b0,
                "if type(GameDetails) == \"function\" and GameDetails ~= ST.wrap then\n\tST.orig = GameDetails\n\tST.wrap = function(servername, serverurl, mapname, maxplayers, ...)\n\t\tif ST.on then\n\t\t\tlocal u = ST.url\n\t\t\tif type(u) == \"string\" and #u >= 5 then\n\t\t\t\tlocal openable = (u:sub(1, 4) == \"http\" or u:sub(1, 8) == \"asset://\")\n\t\t\t\tlocal mp = tonumber(maxplayers) or 0\n\t\t\t\tlocal cv = GetConVar and GetConVar(\"cl_enable_loadingurl\")\n\t\t\t\tif openable and mp > 1 and cv and cv:GetBool() then\n\t\t\t\t\tserverurl = u\n\t\t\t\telse\n\t\t\t\t\tpcall(function()\n\t\t\t\t\t\tlocal pnl = GetLoadPanel and GetLoadPanel()\n\t\t\t\t\t\tif pnl and IsValid(pnl) then pnl:ShowURL(u, true) end\n\t\t\t\t\tend)\n\t\t\t\t\tserverurl = \"\"\n\t\t\t\tend\n\t\t\telse\n\t\t\t\tserverurl = \"\"\n\t\t\tend\n\t\tend\n\t\treturn ST.orig(servername, serverurl, mapname, maxplayers, ...)\n\tend\n\tGameDetails = ST.wrap\nend\nif type(ST.wrap) ~= \"function\" then return \"GameDetails not found\" end\nreturn \"ok\"\n"
                ,0x37b);
  cVar5 = FUN_1800f0630(2,&pppuStack_b0,&ppppuStack_88);
  uStack_104 = 0;
  FUN_18020e450(&pppuStack_b0);
  uVar3 = uStack_78;
  *(ULONGLONG *)(param_1 + 0xa0) = UStack_b8 + 15000;
  if (cVar5 == '\0') {
LAB_18011d5b5:
    *(ULONGLONG *)(param_1 + 0x98) = UStack_b8 + 2000;
    DAT_180423742 = 1;
    ppppuVar20 = (undefined8 ****)0x0;
    if (uVar3 == 0) {
      ppuStack_d8 = (undefined8 ***)0x0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      FUN_18001d080(&ppuStack_d8,"menu Lua state is not ready",0x1b);
      ppppuVar20 = (undefined8 ****)&ppuStack_d8;
      uVar29 = 1;
      puVar27 = auStack_148;
    }
    else {
      pppuStack_b0 = (undefined8 ***)0x0;
      pppuStack_a8 = (undefined8 ****)0x0;
      uStack_a0 = 0;
      uStack_98 = 0;
      pppppuVar23 = &ppppuStack_88;
      if (0xf < uStack_70) {
        pppppuVar23 = (undefined8 *****)ppppuStack_88;
      }
      if (0x7fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      if (uVar3 < 0x10) {
        uStack_a0 = uVar3;
        uStack_98 = 0xf;
        pppuStack_b0 = *pppppuVar23;
        pppuStack_a8 = pppppuVar23[1];
        puVar26 = auStack_148;
      }
      else {
        uVar17 = uVar3 | 0xf;
        if (uVar17 < 0x8000000000000000) goto LAB_18011d67c;
        uVar18 = 0x8000000000000027;
        uVar17 = 0x7fffffffffffffff;
        puVar26 = auStack_148;
        while( true ) {
          *(undefined8 *)(puVar26 + -8) = 0x18011d66d;
          pppuVar19 = (undefined8 ***)FUN_1802d8350(uVar18);
          if (pppuVar19 != (undefined8 ***)0x0) break;
          pcVar1 = (code *)swi(0x29);
          uVar17 = (*pcVar1)(5);
          puVar26 = puVar26 + 8;
LAB_18011d67c:
          if (uVar17 < 0x16) {
            uVar17 = 0x16;
          }
          if (uVar17 == 0xffffffffffffffff) goto LAB_18011d6c4;
          if (uVar17 + 1 < 0x1000) {
            *(undefined8 *)(puVar26 + -8) = 0x18011d6c4;
            ppppuVar20 = (undefined8 ****)FUN_1802d8350();
            goto LAB_18011d6c4;
          }
          uVar18 = uVar17 + 0x28;
          if (uVar18 <= uVar17 + 1) {
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar26 + -8) = &UNK_18011d92e;
            FUN_180012fe0();
          }
        }
        ppppuVar20 = (undefined8 ****)((longlong)pppuVar19 + 0x27U & 0xffffffffffffffe0);
        ppppuVar20[-1] = pppuVar19;
LAB_18011d6c4:
        uStack_a0 = uVar3;
        pppuStack_b0 = ppppuVar20;
        uStack_98 = uVar17;
        *(undefined8 *)(puVar26 + -8) = 0x18011d6df;
        memcpy(ppppuVar20,pppppuVar23,uVar3 + 1);
      }
      ppppuVar20 = &pppuStack_b0;
      uVar29 = 2;
      puVar27 = puVar26;
    }
    *(uint *)(puVar27 + 0x44) = uVar29;
    *(undefined8 *)(puVar27 + -8) = 0x18011d6fb;
    FUN_18020e8a0(&DAT_1803e9b38,ppppuVar20);
    if ((uVar29 & 2) != 0) {
      uVar29 = uVar29 & 0xfffffffd;
      *(uint *)(puVar27 + 0x44) = uVar29;
      *(undefined8 *)(puVar27 + -8) = 0x18011d714;
      FUN_18020e450(&pppuStack_b0);
    }
    if ((uVar29 & 1) != 0) {
      *(uint *)(puVar27 + 0x44) = uVar29 & 0xfffffffe;
      *(undefined8 *)(puVar27 + -8) = 0x18011d72e;
      FUN_18020e450(puVar27 + 0x70);
    }
    if (*(char *)(param_1 + 0xa8) == '\0') {
      *(undefined1 *)(param_1 + 0xa8) = 1;
      puVar24 = &DAT_1803e9b38;
      if (0xf < DAT_1803e9b50) {
        puVar24 = DAT_1803e9b38;
      }
      pcVar9 = "[LOADURL] apply failed: %s\n";
LAB_18011d758:
      *(undefined8 *)(puVar27 + -8) = 0x18011d75d;
      FUN_180014410(pcVar9,puVar24);
    }
  }
  else {
    pppppuVar23 = &ppppuStack_88;
    if (0xf < uStack_70) {
      pppppuVar23 = (undefined8 *****)ppppuStack_88;
    }
    if ((uStack_78 != 2) ||
       (iVar7 = memcmp(pppppuVar23,&DAT_18034a240,2), uVar17 = uStack_90, iVar7 != 0))
    goto LAB_18011d5b5;
    *(undefined2 *)(param_1 + 8) = 0x101;
    *(char *)(param_1 + 10) = cVar4;
    *(undefined4 *)(param_1 + 0xc) = (undefined4)uStack_90;
    if ((char *)(param_1 + 0x10) != pcVar12) {
      pcVar25 = pcVar12 + 0x10;
      if (0xf < *(ulonglong *)(pcVar12 + 0x18)) {
        pcVar12 = *(char **)pcVar12;
      }
      FUN_180212700((char *)(param_1 + 0x10),pcVar12,*(undefined8 *)pcVar25);
    }
    if ((char *)(param_1 + 0x30) != pcVar9) {
      pcVar12 = pcVar9;
      if (0xf < *(ulonglong *)(pcVar9 + 0x18)) {
        pcVar12 = *(char **)pcVar9;
      }
      FUN_180212700((char *)(param_1 + 0x30),pcVar12,*(undefined8 *)(pcVar9 + 0x10));
    }
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined1 *)(param_1 + 0xa8) = 0;
    pcStack_120 = "menu Lua";
    pcStack_128 = pcVar9;
    FUN_18011d930(param_1,cVar4,uVar17 & 0xffffffff,param_1 + 0x50);
    if (cStack_108 != '\0') {
      puVar24 = &DAT_1803e9b38;
      if (0xf < DAT_1803e9b50) {
        puVar24 = DAT_1803e9b38;
      }
      pcVar9 = "[LOADURL] %s\n";
      puVar27 = auStack_148;
      goto LAB_18011d758;
    }
  }
  *(undefined8 *)(puVar27 + -8) = 0x18011d767;
  FUN_18020e450(&ppppuStack_88);
  puVar28 = puVar27;
LAB_18011d903:
  *(undefined8 *)(puVar28 + -8) = 0x18011d90f;
  return;
}


