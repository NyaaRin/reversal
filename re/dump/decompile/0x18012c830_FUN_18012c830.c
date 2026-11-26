// 0x18012c830  FUN_18012c830
// size=4678 thunk=false
// signature: undefined FUN_18012c830()
// status: ok


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18012c830(char *param_1,char *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  bool bVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  size_t sVar13;
  ulonglong uVar14;
  uint *puVar15;
  byte *pbVar16;
  byte *pbVar17;
  char *pcVar18;
  char *pcVar19;
  char *pcVar20;
  longlong lVar21;
  undefined1 *puVar22;
  undefined8 *puVar23;
  ulonglong uVar24;
  undefined8 ****ppppuVar25;
  longlong lVar26;
  char *pcVar27;
  byte *pbVar28;
  undefined1 *puVar29;
  int iVar30;
  byte *pbVar31;
  undefined1 *puVar32;
  byte *pbVar33;
  char cVar34;
  undefined1 auStackY_1d78 [8];
  undefined1 auStackY_1d70 [24];
  undefined8 local_1d38;
  undefined **local_1d30;
  undefined8 local_1d28;
  undefined8 uStack_1d20;
  undefined8 local_1d18;
  undefined8 uStack_1d10;
  char *local_1d08;
  uint local_1d00;
  uint uStack_1cfc;
  uint uStack_1cf8;
  uint uStack_1cf4;
  undefined8 local_1cf0;
  undefined8 uStack_1ce8;
  undefined8 local_1ce0;
  undefined8 uStack_1cd8;
  undefined8 local_1cd0;
  undefined8 local_1cc8;
  undefined8 local_1cc0;
  undefined8 uStack_1cb8;
  undefined8 local_1cb0;
  undefined8 local_1ca8;
  undefined8 local_1ca0;
  undefined8 uStack_1c98;
  undefined8 local_1c90;
  undefined8 local_1c88;
  undefined8 *local_1c80 [2];
  uint local_1c70;
  uint uStack_1c6c;
  uint uStack_1c68;
  uint uStack_1c64;
  undefined8 local_1c60;
  undefined8 uStack_1c58;
  undefined8 local_1c50;
  undefined8 uStack_1c48;
  undefined8 local_1c40;
  undefined8 local_1c38;
  undefined4 local_1c30;
  undefined4 uStack_1c2c;
  undefined4 uStack_1c28;
  undefined4 uStack_1c24;
  undefined8 local_1c20;
  undefined8 uStack_1c18;
  undefined8 *local_1c10;
  undefined1 local_1c08 [32];
  undefined1 local_1be8 [32];
  undefined1 local_1bc8 [32];
  byte *local_1ba8;
  byte *pbStack_1ba0;
  longlong local_1b98;
  ulonglong local_1b90;
  undefined8 local_1b88;
  undefined8 ***local_1b80 [2];
  undefined8 local_1b70;
  ulonglong local_1b68;
  undefined8 ***local_1b60 [2];
  undefined8 local_1b50;
  ulonglong local_1b48;
  undefined1 local_1b40 [16];
  longlong local_1b30;
  undefined1 local_1b18 [128];
  CHAR local_1a98 [64];
  undefined1 local_1a58 [224];
  char local_1978 [192];
  CHAR local_18b8 [192];
  undefined1 local_17f8 [896];
  WCHAR local_1478 [512];
  WCHAR local_1078 [2048];
  ulonglong local_78;
  
  puVar32 = auStackY_1d78;
  puVar22 = auStackY_1d78;
  puVar29 = auStackY_1d78;
  local_78 = DAT_1803da4c0 ^ (ulonglong)auStackY_1d78;
  iVar30 = 0;
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    bVar3 = false;
    bVar5 = false;
    if (DAT_180400b70 == '\0') goto LAB_18012da3d;
  }
  else {
    bVar3 = true;
    bVar5 = true;
  }
  puVar32 = auStackY_1d78;
  if ((param_1 == (char *)0x0) || (puVar32 = auStackY_1d78, *param_1 == '\0')) goto LAB_18012da3d;
  local_1d08 = param_2;
  if ((bVar3) && (iVar7 = _stricmp(param_2,param_1), iVar7 == 0)) {
    strncpy_s(&DAT_180401180,0x40,param_1,0xffffffffffffffff);
    strncpy_s(&DAT_180400b20,0x50,param_2,0xffffffffffffffff);
    DAT_180400eb8 = 1;
    DAT_180401110 = 0;
    FUN_18012ab30("\'%s\' is already the map\'s sky.",param_2);
    puVar32 = auStackY_1d78;
    goto LAB_18012da3d;
  }
  FUN_18012ae90(local_1b40);
  if (local_1b30 != 0) {
    local_1b88 = 0x93fd561a96ab0c67;
    plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_1d38,&local_1b88);
    local_1b90 = 0xaeca5b24c521e60;
    plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_1c80,&local_1b90);
    puVar11 = (undefined4 *)FUN_180202dc0(*plVar10 + 0x28);
    uVar1 = *puVar11;
    if ((bVar3) || (DAT_180400b74 != 6)) {
      cVar34 = '\0';
    }
    else {
      cVar34 = '\x01';
    }
    uVar9 = DAT_180400c04;
    if (bVar3) {
      uVar9 = 1;
    }
    local_1b88 = CONCAT44(local_1b88._4_4_,uVar9);
    pcVar27 = "<imported vtf>";
    if (bVar3) {
      pcVar27 = param_2;
    }
    FUN_180014410("[SKY] ApplyOverride: sky=\'%s\' src=\'%s\' set=%d frames=%d fps=%.1f\n",param_1,
                  pcVar27,cVar34);
    if ((DAT_18056ff80 & 1) == 0) {
      DAT_18056ff80 = DAT_18056ff80 | 1;
      _DAT_1805ba384 = std::_Random_device();
      _DAT_1805bb704 = 0xffffffff;
      uVar24 = 1;
      uVar8 = _DAT_1805ba384;
      do {
        uVar8 = (uVar8 >> 0x1e ^ uVar8) * 0x6c078965 + (int)uVar24;
        *(uint *)(&DAT_1805ba384 + uVar24 * 4) = uVar8;
        uVar24 = uVar24 + 1;
      } while (uVar24 < 0x270);
      _DAT_1805ba380 = 0x270;
    }
    uVar9 = FUN_18021dbf0(&DAT_1805ba380);
    local_1b90 = CONCAT44(local_1b90._4_4_,uVar9);
    local_1d38 = 0;
    local_1d30 = &PTR_vftable_std__System_error_category_1803e9500;
    local_1c10 = &local_1cc0;
    local_1cc0 = 0;
    uStack_1cb8 = 0;
    local_1cb0 = 0;
    local_1ca8 = 0;
    FUN_180211510(&local_1cc0,L"skybox",6);
    local_1c80[0] = &local_1ce0;
    local_1ce0 = 0;
    uStack_1cd8 = 0;
    local_1cd0 = 0;
    local_1cc8 = 0;
    FUN_180211510(&local_1ce0,L"materials",9);
    uVar12 = FUN_180066720(local_1be8,local_1b40,&local_1ce0);
    uVar12 = FUN_180066720(local_1c08,uVar12,&local_1cc0);
    FUN_180067d80(uVar12,&local_1d38);
    FUN_18021e290(local_1c08);
    FUN_18021e290(local_1be8);
    FUN_18021e290(&local_1ce0);
    FUN_18021e290(&local_1cc0);
    if (0 < DAT_180400ea8) {
      do {
        puVar23 = &DAT_1803e9ff0 + (longlong)iVar30 * 4;
        if (7 < (ulonglong)(&DAT_1803ea008)[(longlong)iVar30 * 4]) {
          puVar23 = (undefined8 *)*puVar23;
        }
        FUN_1802d7d9c(puVar23);
        iVar30 = iVar30 + 1;
      } while (iVar30 < DAT_180400ea8);
    }
    DAT_180400ea8 = 0;
    if (!bVar3) {
      FUN_180012b20(&DAT_180400c10,0x60,0xffffffffffffffff,"sk%08x%s");
      FUN_180012b20(&DAT_180400c70,0x60,0xffffffffffffffff,"sk%08x%s");
      FUN_180012b20(&DAT_180400cd0,0x60,0xffffffffffffffff,"sk%08x%s");
      FUN_180012b20(&DAT_180400d30,0x60,0xffffffffffffffff,"sk%08x%s");
      FUN_180012b20(&DAT_180400d90,0x60,0xffffffffffffffff,"sk%08x%s");
      FUN_180012b20(&DAT_180400df0,0x60,0xffffffffffffffff,"sk%08x%s");
      iVar30 = 1;
      if (cVar34 != '\0') {
        iVar30 = 6;
      }
      iVar7 = 0;
LAB_18012cff0:
      if (iVar7 < iVar30) {
        lVar26 = (longlong)iVar7;
        if (cVar34 == '\0') {
          puVar32 = &DAT_18033e5ea;
        }
        else {
          puVar32 = (&PTR_DAT_18033bf38)[lVar26];
        }
        FUN_180204f10(local_1a98,"sk%08x%s",local_1b90 & 0xffffffff,puVar32);
        memset(local_1078,0,0x400);
        MultiByteToWideChar(0xfde9,0,local_1a98,-1,local_1078,0x1ff);
        local_1c50 = 0;
        uStack_1c48 = 0;
        local_1c40 = 0;
        local_1c38 = 0;
        sVar13 = wcslen(local_1078);
        FUN_180211510(&local_1c50,local_1078,sVar13);
        puVar15 = (uint *)FUN_180211740(&local_1c50,L".vtf",4);
        local_1c70 = *puVar15;
        uStack_1cfc = puVar15[1];
        uStack_1cf8 = puVar15[2];
        uStack_1cf4 = puVar15[3];
        local_1c60 = *(undefined8 *)(puVar15 + 4);
        uStack_1c58 = *(undefined8 *)(puVar15 + 6);
        puVar15[4] = 0;
        puVar15[5] = 0;
        puVar15[6] = 7;
        puVar15[7] = 0;
        *(undefined2 *)puVar15 = 0;
        local_1cf0 = 0;
        uStack_1ce8 = 7;
        local_1d00 = local_1c70 & 0xffff0000;
        local_1c80[0] = &local_1ca0;
        local_1ca0 = 0;
        uStack_1c98 = 0;
        local_1c90 = 0;
        local_1c88 = 0;
        uStack_1c6c = uStack_1cfc;
        uStack_1c68 = uStack_1cf8;
        uStack_1c64 = uStack_1cf4;
        FUN_180211510(&local_1ca0,L"materials",9);
        uVar12 = FUN_180066720(local_1bc8,local_1b40,&local_1ca0);
        FUN_180066720(local_1b80,uVar12,&local_1c70);
        FUN_18021e290(local_1bc8);
        FUN_18021e290(&local_1ca0);
        FUN_18021e290(&local_1c70);
        FUN_18021e290(&local_1d00);
        FUN_18021e290(&local_1c50);
        cVar6 = FUN_18012b500(local_1b80,(&DAT_1803ea170)[lVar26 * 3],
                              (&DAT_1803ea178)[lVar26 * 3] - (&DAT_1803ea170)[lVar26 * 3]);
        if (cVar6 != '\0') goto code_r0x00018012d1f8;
        FUN_18012ab30("Failed to write into garrysmod/materials.");
        iVar30 = 0;
        if (0 < DAT_180400ea8) {
          do {
            puVar23 = &DAT_1803e9ff0 + (longlong)iVar30 * 4;
            if (7 < (ulonglong)(&DAT_1803ea008)[(longlong)iVar30 * 4]) {
              puVar23 = (undefined8 *)*puVar23;
            }
            FUN_1802d7d9c(puVar23);
            iVar30 = iVar30 + 1;
          } while (iVar30 < DAT_180400ea8);
        }
        DAT_180400ea8 = 0;
        FUN_18021e290(local_1b80);
        goto LAB_18012da31;
      }
      goto LAB_18012cd2c;
    }
    FUN_180012b20(&DAT_180400c10,0x60,0xffffffffffffffff,"skybox/%s%s");
    FUN_180012b20(&DAT_180400c70,0x60,0xffffffffffffffff,"skybox/%s%s");
    FUN_180012b20(&DAT_180400cd0,0x60,0xffffffffffffffff,"skybox/%s%s");
    FUN_180012b20(&DAT_180400d30,0x60,0xffffffffffffffff,"skybox/%s%s");
    FUN_180012b20(&DAT_180400d90,0x60,0xffffffffffffffff,"skybox/%s%s");
    FUN_180012b20(&DAT_180400df0,0x60,0xffffffffffffffff,"skybox/%s%s");
LAB_18012cd2c:
    uVar24 = 0;
LAB_18012cd40:
    FUN_180204ff0(local_18b8,"materials/skybox/%s%s.vmt",param_1,(&PTR_DAT_18033bf38)[uVar24]);
    memset(local_1478,0,0x400);
    MultiByteToWideChar(0xfde9,0,local_18b8,-1,local_1478,0x1ff);
    local_1d28 = 0;
    uStack_1d20 = 0;
    local_1d18 = 0;
    uStack_1d10 = 0;
    sVar13 = wcslen(local_1478);
    FUN_180211510(&local_1d28,local_1478,sVar13);
    local_1c30 = (undefined4)local_1d28;
    uStack_1c2c = local_1d28._4_4_;
    uStack_1c28 = (undefined4)uStack_1d20;
    uStack_1c24 = uStack_1d20._4_4_;
    local_1c20 = local_1d18;
    uStack_1c18 = uStack_1d10;
    local_1d18 = 0;
    uStack_1d10 = 7;
    local_1d28 = local_1d28 & 0xffffffffffff0000;
    FUN_180066720(local_1b60,local_1b40,&local_1c30);
    FUN_18021e290(&local_1c30);
    FUN_18021e290(&local_1d28);
    local_1a58[0] = 0;
    if (!bVar5) {
      uVar14 = 0;
      if (cVar34 != '\0') {
        uVar14 = uVar24;
      }
      if ((&DAT_1804011d0 + uVar14 * 0xa0 != (char *)0x0) &&
         ((&DAT_1804011d0)[uVar14 * 0xa0] != '\0')) {
        FUN_180205050(local_1a58,"\t\"$basetexturetransform\" \"%s\"\n");
      }
    }
    if ((int)local_1b88 < 2) {
      iVar30 = FUN_1802050b0(local_17f8,
                             "\"sky\"\n{\n\t\"$basetexture\" \"%s\"\n%s\t\"$nofog\" \"1\"\n\t\"$ignorez\" \"1\"\n}\n"
                             ,&DAT_180400c10 + uVar24 * 0x60,local_1a58);
    }
    else {
      iVar30 = FUN_1802050b0(local_17f8,
                             "\"sky\"\n{\n\t\"$basetexture\" \"%s\"\n%s\t\"$nofog\" \"1\"\n\t\"$ignorez\" \"1\"\n\t\"Proxies\"\n\t{\n\t\t\"AnimatedTexture\"\n\t\t{\n\t\t\t\"animatedTextureVar\" \"$basetexture\"\n\t\t\t\"animatedTextureFrameNumVar\" \"$frame\"\n\t\t\t\"animatedTextureFrameRate\" \"%.2f\"\n\t\t}\n\t}\n}\n"
                             ,&DAT_180400c10 + uVar24 * 0x60,local_1a58);
    }
    if ((0 < iVar30) &&
       (cVar6 = FUN_18012b500(local_1b60,local_17f8,(longlong)iVar30), cVar6 != '\0'))
    goto code_r0x00018012d336;
    FUN_18012ab30("Failed to write the VMT override into materials/skybox.");
    iVar30 = 0;
    if (0 < DAT_180400ea8) {
      do {
        puVar23 = &DAT_1803e9ff0 + (longlong)iVar30 * 4;
        if (7 < (ulonglong)(&DAT_1803ea008)[(longlong)iVar30 * 4]) {
          puVar23 = (undefined8 *)*puVar23;
        }
        FUN_1802d7d9c(puVar23);
        iVar30 = iVar30 + 1;
      } while (iVar30 < DAT_180400ea8);
    }
    DAT_180400ea8 = 0;
    FUN_18021e290(local_1b60);
    puVar22 = auStackY_1d78;
    goto LAB_18012da31;
  }
  FUN_18012ab30("Couldn\'t locate the garrysmod folder.");
  FUN_180014410("[SKY] ApplyOverride: no gamedir\n");
  puVar22 = auStackY_1d78;
  goto LAB_18012da31;
code_r0x00018012d1f8:
  lVar26 = (longlong)DAT_180400ea8;
  DAT_180400ea8 = DAT_180400ea8 + 1;
  if ((undefined8 ****)(&DAT_1803e9ff0 + lVar26 * 4) != local_1b80) {
    ppppuVar25 = local_1b80;
    if (7 < local_1b68) {
      ppppuVar25 = (undefined8 ****)local_1b80[0];
    }
    FUN_18021a7b0(&DAT_1803e9ff0 + lVar26 * 4,ppppuVar25,local_1b70);
  }
  FUN_18021e290(local_1b80);
  iVar7 = iVar7 + 1;
  goto LAB_18012cff0;
code_r0x00018012d336:
  lVar26 = (longlong)DAT_180400ea8;
  DAT_180400ea8 = DAT_180400ea8 + 1;
  if ((undefined8 ****)(&DAT_1803e9ff0 + lVar26 * 4) != local_1b60) {
    ppppuVar25 = local_1b60;
    if (7 < local_1b48) {
      ppppuVar25 = (undefined8 ****)local_1b60[0];
    }
    FUN_18021a7b0(&DAT_1803e9ff0 + lVar26 * 4,ppppuVar25,local_1b50);
  }
  FUN_18021e290(local_1b60);
  uVar8 = (int)uVar24 + 1;
  uVar24 = (ulonglong)uVar8;
  if (5 < (int)uVar8) goto code_r0x00018012d3a4;
  goto LAB_18012cd40;
code_r0x00018012d3a4:
  local_1ba8 = (byte *)0x0;
  pbStack_1ba0 = (byte *)0x0;
  local_1b98 = 0;
  FUN_180204ff0(local_1978,"materials/skybox/%s%s.vmt",param_1,&DAT_18035871c);
  if ((DAT_1803f9248 == (longlong *)0x0) || (local_1978[0] == '\0')) {
LAB_18012d5a8:
    bVar3 = false;
    pbVar28 = pbStack_1ba0;
    pbVar17 = local_1ba8;
LAB_18012d5b9:
    lVar26 = (longlong)pbVar28 - (longlong)pbVar17;
    bVar5 = false;
    if (bVar3) goto LAB_18012d547;
    pcVar27 = "MISSING";
  }
  else {
    puVar23 = (undefined8 *)*DAT_1803f9248;
    lVar26 = (*(code *)puVar23[2])(DAT_1803f9248,local_1978,&DAT_1803589f0,&DAT_1803589e8);
    if (lVar26 == 0) goto LAB_18012d5a8;
    if (local_1ba8 != pbStack_1ba0) {
      pbStack_1ba0 = local_1ba8;
    }
    do {
      iVar30 = (*(code *)*puVar23)(DAT_1803f9248,local_1078,0x1000,lVar26);
      if (0 < iVar30) {
        FUN_180212f60(&local_1ba8,pbStack_1ba0,local_1078,(longlong)iVar30);
      }
    } while ((0xfff < iVar30) &&
            ((ulonglong)((longlong)pbStack_1ba0 - (longlong)local_1ba8) < 0x100001));
    (*(code *)puVar23[3])(DAT_1803f9248,lVar26);
    pbVar28 = pbStack_1ba0;
    pbVar17 = local_1ba8;
    bVar3 = local_1ba8 != pbStack_1ba0;
    if ((local_1ba8 == pbStack_1ba0) ||
       (0xfff < (ulonglong)((longlong)pbStack_1ba0 - (longlong)local_1ba8))) goto LAB_18012d5b9;
    sVar13 = strlen(&DAT_180400c10);
    pbVar16 = pbVar28;
    if ((longlong)sVar13 <= (longlong)pbVar28 - (longlong)pbVar17) {
      pbVar33 = pbVar17;
      while (pcVar27 = &DAT_180400c10, pbVar16 = pbVar33, pbVar31 = pbVar33,
            &DAT_180400c10 + sVar13 != &DAT_180400c10) {
        for (; (uint)*pbVar31 == (int)*pcVar27; pbVar31 = pbVar31 + 1) {
          pcVar27 = pcVar27 + 1;
          if (pcVar27 == &DAT_180400c10 + sVar13) goto LAB_18012d53d;
        }
        pbVar16 = pbVar28;
        if (pbVar33 == pbVar28 + -sVar13) break;
        pbVar33 = pbVar33 + 1;
      }
    }
LAB_18012d53d:
    if (pbVar16 == pbVar28) goto LAB_18012d5b9;
    bVar5 = true;
    lVar26 = (longlong)pbVar28 - (longlong)pbVar17;
LAB_18012d547:
    pcVar27 = &DAT_180358d08;
    if (bVar5) {
      pcVar27 = "OURS";
    }
  }
  FUN_180014410("[SKY] fs readback \'%s\': %s (%zu bytes)\n",local_1978,pcVar27,lVar26);
  if (local_1ba8 != (byte *)0x0) {
    pbVar17 = local_1ba8;
    puVar29 = auStackY_1d78;
    if ((0xfff < (ulonglong)(local_1b98 - (longlong)local_1ba8)) &&
       (pbVar17 = *(byte **)(local_1ba8 + -8), puVar29 = auStackY_1d78,
       (byte *)0x1f < local_1ba8 + (-8 - (longlong)pbVar17))) {
      pcVar4 = (code *)swi(0x29);
      pbVar17 = (byte *)(*pcVar4)(5);
      puVar29 = auStackY_1d70;
    }
    *(undefined8 *)(puVar29 + -8) = 0x18012d5db;
    free(pbVar17);
    local_1ba8 = (byte *)0x0;
    pbStack_1ba0 = (byte *)0x0;
    local_1b98 = 0;
  }
  *(undefined8 *)(puVar29 + -8) = 0x18012d60e;
  FUN_180203ab0(local_1b18,"skybox/%s%s",param_1,&DAT_18035871c);
  *(undefined8 *)(puVar29 + -8) = 0x18012d61a;
  DAT_180401118 = FUN_18012abb0(local_1b18);
  *(undefined8 *)(puVar29 + -8) = 0x18012d63e;
  FUN_180203ab0(local_1b18,"skybox/%s%s",param_1,PTR_DAT_18033bf40);
  *(undefined8 *)(puVar29 + -8) = 0x18012d64a;
  DAT_180401120 = FUN_18012abb0(local_1b18);
  *(undefined8 *)(puVar29 + -8) = 0x18012d66e;
  FUN_180203ab0(local_1b18,"skybox/%s%s",param_1,PTR_DAT_18033bf48);
  *(undefined8 *)(puVar29 + -8) = 0x18012d67a;
  _DAT_180401128 = FUN_18012abb0(local_1b18);
  *(undefined8 *)(puVar29 + -8) = 0x18012d69e;
  FUN_180203ab0(local_1b18,"skybox/%s%s",param_1,PTR_DAT_18033bf50);
  *(undefined8 *)(puVar29 + -8) = 0x18012d6aa;
  _DAT_180401130 = FUN_18012abb0(local_1b18);
  *(undefined8 *)(puVar29 + -8) = 0x18012d6ce;
  FUN_180203ab0(local_1b18,"skybox/%s%s",param_1,PTR_DAT_18033bf58);
  *(undefined8 *)(puVar29 + -8) = 0x18012d6da;
  _DAT_180401138 = FUN_18012abb0(local_1b18);
  *(undefined8 *)(puVar29 + -8) = 0x18012d6fe;
  FUN_180203ab0(local_1b18,"skybox/%s%s",param_1,PTR_DAT_18033bf60);
  *(undefined8 *)(puVar29 + -8) = 0x18012d70a;
  _DAT_180401140 = FUN_18012abb0(local_1b18);
  *(undefined8 *)(puVar29 + -8) = 0x18012d719;
  FUN_18012acc0(param_1);
  *(undefined8 *)(puVar29 + -8) = 0x18012d728;
  FUN_180014410("[SKY] ReloadMaterials(\'skybox/%s\') done\n",param_1);
  *(undefined8 *)(puVar29 + -8) = 0x18012d730;
  FUN_18012f810(param_1);
  iVar30 = 0;
  lVar26 = 0;
  do {
    pcVar27 = &DAT_180400c10 + lVar26 * 0x60;
    *(undefined8 *)(puVar29 + -8) = 0x18012d763;
    uVar12 = FUN_18012abb0(pcVar27);
    (&DAT_180401150)[lVar26] = uVar12;
    *(undefined8 *)(puVar29 + -8) = 0x18012d778;
    pcVar18 = (char *)FUN_18012ac40();
    if (pcVar18 == (char *)0x0) {
LAB_18012d80b:
      iVar7 = 0;
    }
    else {
      *(undefined8 *)(puVar29 + -8) = 0x18012d790;
      iVar7 = _stricmp(pcVar18,pcVar27);
      if (iVar7 != 0) {
        if (pcVar27 != (char *)0x0) {
          *(undefined8 *)(puVar29 + -8) = 0x18012d7a7;
          pcVar19 = strrchr(pcVar27,0x2f);
          *(undefined8 *)(puVar29 + -8) = 0x18012d7b8;
          pcVar20 = strrchr(pcVar27,0x5c);
          if (pcVar20 < pcVar19) {
            pcVar20 = pcVar19;
          }
          if (pcVar20 != (char *)0x0) {
            pcVar27 = pcVar20 + 1;
          }
        }
        *(undefined8 *)(puVar29 + -8) = 0x18012d7d6;
        pcVar19 = strrchr(pcVar18,0x2f);
        *(undefined8 *)(puVar29 + -8) = 0x18012d7e7;
        pcVar20 = strrchr(pcVar18,0x5c);
        if (pcVar20 < pcVar19) {
          pcVar20 = pcVar19;
        }
        pcVar19 = pcVar20 + 1;
        if (pcVar20 == (char *)0x0) {
          pcVar19 = pcVar18;
        }
        *(undefined8 *)(puVar29 + -8) = 0x18012d803;
        iVar7 = _stricmp(pcVar19,pcVar27);
        if (iVar7 != 0) goto LAB_18012d80b;
      }
      iVar7 = 1;
    }
    iVar30 = iVar30 + iVar7;
    pcVar27 = "";
    if ((char)iVar7 != '\0') {
      pcVar27 = "<- OURS";
    }
    pcVar20 = "?";
    if (pcVar18 != (char *)0x0) {
      pcVar20 = pcVar18;
    }
    uVar12 = (&DAT_180400bd0)[lVar26];
    *(undefined8 *)(puVar29 + -8) = 0x18012d845;
    lVar21 = FUN_18012ac20(uVar12);
    if (lVar21 == 0) {
      puVar22 = &DAT_18033e9cc;
    }
    else {
      uVar12 = (&DAT_180400bd0)[lVar26];
      *(undefined8 *)(puVar29 + -8) = 0x18012d857;
      puVar22 = (undefined1 *)FUN_18012ac20(uVar12);
    }
    pcVar18 = "MISSING";
    if ((&DAT_180400bd0)[lVar26] != 0) {
      pcVar18 = "ok";
    }
    *(char **)(puVar29 + 0x28) = pcVar27;
    *(char **)(puVar29 + 0x20) = pcVar20;
    puVar2 = (&PTR_DAT_18033bf38)[lVar26];
    *(undefined8 *)(puVar29 + -8) = 0x18012d89c;
    FUN_180014410("[SKY] face %s: mat=%s shader=%s basetex=%s %s\n",puVar2,pcVar18,puVar22);
    lVar26 = lVar26 + 1;
  } while (lVar26 != 6);
  pcVar27 = *(char **)(puVar29 + 0x38);
  *(undefined8 *)(puVar29 + -8) = 0x18012d8ca;
  strncpy_s(&DAT_180401180,0x40,pcVar27,0xffffffffffffffff);
  pcVar19 = "";
  cVar34 = puVar29[0x34];
  pcVar18 = *(char **)(puVar29 + 0x70);
  pcVar20 = "";
  if (cVar34 != '\0') {
    pcVar20 = pcVar18;
  }
  *(undefined8 *)(puVar29 + -8) = 0x18012d8fe;
  strncpy_s(&DAT_180400b20,0x50,pcVar20,0xffffffffffffffff);
  DAT_180400eb8 = 1;
  DAT_180401110 = 0 < iVar30;
  DAT_180400c00 = uVar1;
  if (iVar30 < 1) {
    iVar7 = 0;
    if (0 < DAT_180400ea8) {
      do {
        puVar23 = &DAT_1803e9ff0 + (longlong)iVar7 * 4;
        if (7 < (ulonglong)(&DAT_1803ea008)[(longlong)iVar7 * 4]) {
          puVar23 = (undefined8 *)*puVar23;
        }
        *(undefined8 *)(puVar29 + -8) = 0x18012d990;
        FUN_1802d7d9c(puVar23);
        iVar7 = iVar7 + 1;
      } while (iVar7 < DAT_180400ea8);
    }
    DAT_180400ea8 = 0;
    *(undefined8 *)(puVar29 + -8) = 0x18012d9b3;
    FUN_18012ab30("This sky (\'%s\') is packed in a VPK that beats loose files - can\'t override it."
                  ,pcVar27);
  }
  else if (cVar34 == '\0') {
    if (1 < (int)local_1b88) {
      pcVar19 = ", animated";
    }
    *(undefined8 *)(puVar29 + -8) = 0x18012d963;
    FUN_18012ab30("Custom sky on \'%s\': %d/6 faces%s.",pcVar27,iVar30,pcVar19);
  }
  else {
    *(undefined8 *)(puVar29 + -8) = 0x18012d937;
    FUN_18012ab30("\'%s\' on \'%s\': %d/6 faces.",pcVar18,pcVar27,iVar30);
  }
  *(undefined8 *)(puVar29 + -8) = 0x18012d9c9;
  FUN_180014410("[SKY] ApplyOverride: %d/6 faces verified, files kept=%d\n",iVar30,DAT_180400ea8);
  puVar22 = puVar29;
LAB_18012da31:
  *(undefined8 *)(puVar22 + -8) = 0x18012da3d;
  FUN_18021e290(local_1b40);
  puVar32 = puVar22;
LAB_18012da3d:
  *(undefined8 *)(puVar32 + -8) = 0x18012da4c;
  return;
}


