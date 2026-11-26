// 0x1801639d0  FUN_1801639d0
// size=3888 thunk=false
// signature: undefined FUN_1801639d0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801639d0(undefined8 param_1,int param_2)

{
  byte ******ppppppbVar1;
  byte bVar2;
  code *pcVar3;
  byte ******ppppppbVar4;
  float fVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  char ******ppppppcVar12;
  float *pfVar13;
  size_t sVar14;
  void *_Memory;
  undefined8 *_Buf1;
  undefined8 ******ppppppuVar15;
  byte *pbVar16;
  float *pfVar17;
  undefined8 *puVar18;
  byte ******ppppppbVar19;
  ulonglong uVar20;
  undefined1 *puVar21;
  uint uVar22;
  char *pcVar23;
  ulonglong _Size;
  double dVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_438 [8];
  undefined1 auStack_430 [24];
  uint local_418;
  uint local_410;
  uint local_408;
  uint local_400;
  double local_3f8;
  double local_3f0;
  int local_3e8;
  undefined4 local_3e0;
  uint local_3d8;
  float local_3d4;
  longlong local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined4 local_388;
  undefined2 local_384;
  undefined1 local_382;
  undefined4 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined4 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [32];
  char local_2c8 [256];
  byte *****local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b8;
  ulonglong local_1b0;
  char *****local_1a8;
  longlong lStack_1a0;
  ulonglong local_198;
  ulonglong uStack_190;
  longlong local_188;
  int local_180 [2];
  undefined8 local_178;
  void *local_170;
  longlong lStack_168;
  longlong local_160;
  undefined8 *****local_158 [2];
  size_t local_148;
  ulonglong local_140;
  undefined8 *****local_138;
  longlong lStack_130;
  longlong local_128;
  ulonglong uStack_120;
  char local_118 [160];
  ulonglong local_78;
  
  local_78 = DAT_1803da4c0 ^ (ulonglong)auStack_438;
  uVar20 = 0;
  local_3d8 = 0;
  local_188 = -0x6c02a9e56954f399;
  plVar9 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_308,&local_188);
  local_178 = 0xf50e5e909d50b4e9;
  plVar9 = (longlong *)FUN_180241a30(*plVar9 + 0x28,local_2f8,&local_178);
  puVar10 = (undefined8 *)FUN_1802028c0(*plVar9 + 0x28);
  if (param_2 == DAT_1803e9334) {
    puVar21 = auStack_438;
    if (param_2 != 0xc) goto LAB_1801648c7;
    puVar18 = &DAT_1803eb390;
    if (0xf < DAT_1803eb3a8) {
      puVar18 = DAT_1803eb390;
    }
    sVar14 = puVar10[2];
    _Buf1 = puVar10;
    if (0xf < (ulonglong)puVar10[3]) {
      _Buf1 = (undefined8 *)*puVar10;
    }
    if ((sVar14 == DAT_1803eb3a0) &&
       ((puVar21 = auStack_438, sVar14 == 0 ||
        (iVar7 = memcmp(_Buf1,puVar18,sVar14), puVar21 = auStack_438, iVar7 == 0))))
    goto LAB_1801648c7;
  }
  DAT_1803e9334 = param_2;
  if ((undefined8 **)puVar10 != &DAT_1803eb390) {
    puVar18 = puVar10 + 2;
    if (0xf < (ulonglong)puVar10[3]) {
      puVar10 = (undefined8 *)*puVar10;
    }
    FUN_180212700(&DAT_1803eb390,puVar10,*puVar18);
  }
  local_170 = (void *)0x0;
  lStack_168 = 0;
  local_160 = 0;
  FUN_180163690(local_158,param_2,&local_170);
  puVar10 = &DAT_1803e99f0;
  if (0xf < DAT_1803e9a08) {
    puVar10 = DAT_1803e99f0;
  }
  ppppppuVar15 = local_158;
  if (0xf < local_140) {
    ppppppuVar15 = (undefined8 ******)local_158[0];
  }
  if ((local_148 != DAT_1803e9a00) ||
     (((local_148 != 0 && (iVar7 = memcmp(ppppppuVar15,puVar10,local_148), iVar7 != 0)) ||
      (DAT_1803e9a10 == '\0')))) {
    if (DAT_180423a78 != (longlong *)0x0) {
      (**(code **)(*DAT_180423a78 + 0x10))();
      DAT_180423a78 = (longlong *)0x0;
    }
    FUN_180163600();
    fVar5 = DAT_180380bb0;
    uStack_3a0 = 0;
    local_398 = 0;
    local_390 = 0xf;
    local_3a8 = 0;
    local_388 = 0;
    local_384 = 0;
    local_382 = 0;
    local_380 = 0x3f800000;
    local_378 = 0;
    local_370 = 0;
    local_368 = 0;
    local_360 = 0;
    local_358 = 0;
    uStack_350 = 0;
    FUN_180164900(&DAT_1803e99f0,&local_3a8);
    FUN_180209700(&local_360);
    FUN_18020e450(&local_3a8);
    ppppppuVar15 = local_158;
    if (0xf < local_140) {
      ppppppuVar15 = (undefined8 ******)local_158[0];
    }
    FUN_180212700(&DAT_1803e99f0,ppppppuVar15,local_148);
    if (local_148 != 0) {
      local_1c8 = (byte *****)0x0;
      uStack_1c0 = 0;
      local_1b8 = 0;
      local_1b0 = 0;
      FUN_18001d080(&local_1c8,local_170,lStack_168 - (longlong)local_170);
      DAT_1803e9a10 = '\x01';
      ppppppbVar19 = &local_1c8;
      if (0xf < local_1b0) {
        ppppppbVar19 = (byte ******)local_1c8;
      }
      if (*(byte *)ppppppbVar19 != 0) {
LAB_180163cd0:
        iVar7 = _strnicmp((char *)ppppppbVar19,"$additive",9);
        if (iVar7 != 0) goto code_r0x000180163cee;
        pbVar16 = (byte *)((longlong)ppppppbVar19 + 9);
        while( true ) {
          bVar2 = *pbVar16;
          if ((0x22 < bVar2) || ((0x500000200U >> ((longlong)(char)bVar2 & 0x3fU) & 1) == 0)) break;
          pbVar16 = pbVar16 + 1;
        }
        DAT_1803e9a14 = bVar2 == 0x31;
        goto LAB_180163cf8;
      }
LAB_180163cf6:
      DAT_1803e9a14 = false;
LAB_180163cf8:
      ppppppbVar19 = &local_1c8;
      if (0xf < local_1b0) {
        ppppppbVar19 = (byte ******)local_1c8;
      }
      if (*(byte *)ppppppbVar19 != 0) {
LAB_180163d20:
        iVar7 = _strnicmp((char *)ppppppbVar19,"$translucent",0xc);
        if (iVar7 != 0) goto code_r0x000180163d3e;
        pbVar16 = (byte *)((longlong)ppppppbVar19 + 0xc);
        while( true ) {
          bVar2 = *pbVar16;
          if ((0x22 < bVar2) || ((0x500000200U >> ((longlong)(char)bVar2 & 0x3fU) & 1) == 0)) break;
          pbVar16 = pbVar16 + 1;
        }
        DAT_1803e9a15 = bVar2 == 0x31;
        goto LAB_180163d48;
      }
LAB_180163d46:
      DAT_1803e9a15 = false;
LAB_180163d48:
      ppppppbVar19 = &local_1c8;
      if (0xf < local_1b0) {
        ppppppbVar19 = (byte ******)local_1c8;
      }
      bVar2 = *(byte *)ppppppbVar19;
      while (bVar2 != 0) {
        iVar7 = _strnicmp((char *)ppppppbVar19,"$envmap",7);
        if (iVar7 == 0) {
          DAT_1803e9a16 = '\x01';
          goto LAB_180163d98;
        }
        ppppppbVar19 = (byte ******)((longlong)ppppppbVar19 + 1);
        bVar2 = *(byte *)ppppppbVar19;
      }
      DAT_1803e9a16 = '\0';
LAB_180163d98:
      fVar26 = DAT_1803809c4;
      local_188 = CONCAT44(local_188._4_4_,0x3f800000);
      local_3d4 = 0.05;
      ppppppbVar19 = &local_1c8;
      if (0xf < local_1b0) {
        ppppppbVar19 = (byte ******)local_1c8;
      }
      if (*(byte *)ppppppbVar19 != 0) {
LAB_180163de0:
        iVar7 = _strnicmp((char *)ppppppbVar19,"$alpha",6);
        if (iVar7 != 0) goto code_r0x000180163dfa;
        pbVar16 = (byte *)((longlong)ppppppbVar19 + 6);
        while ((*pbVar16 < 0x23 && ((0x500000200U >> ((longlong)(char)*pbVar16 & 0x3fU) & 1) != 0)))
        {
          pbVar16 = pbVar16 + 1;
        }
        dVar24 = atof((char *)pbVar16);
        fVar25 = (float)dVar24;
        if (fVar25 <= 0.0) goto LAB_180163e85;
        goto LAB_180163e89;
      }
LAB_180163e85:
      fVar25 = fVar5;
LAB_180163e89:
      local_178 = CONCAT44(local_178._4_4_,fVar25);
      pfVar17 = &local_3d4;
      if (fVar26 <= fVar25) {
        pfVar17 = (float *)&local_178;
      }
      pfVar13 = (float *)&local_188;
      if (fVar25 <= fVar5) {
        pfVar13 = pfVar17;
      }
      DAT_1803e9a18 = *pfVar13;
      ppppppbVar19 = &local_1c8;
      if (0xf < local_1b0) {
        ppppppbVar19 = (byte ******)local_1c8;
      }
      if (local_1b8 == 0) {
LAB_180163f63:
        lVar11 = -1;
      }
      else {
        if (local_1b8 + 5U < 0x10) {
          ppppppbVar1 = (byte ******)((longlong)ppppppbVar19 + local_1b8);
          memset(local_2c8,0,0x100);
          pbVar16 = &DAT_1803604b8;
          do {
            local_2c8[*pbVar16] = '\x01';
            pbVar16 = pbVar16 + 1;
            ppppppbVar4 = ppppppbVar19;
          } while (pbVar16 != &DAT_1803604bd);
          for (; ppppppbVar4 < ppppppbVar1; ppppppbVar4 = (byte ******)((longlong)ppppppbVar4 + 1))
          {
            if (local_2c8[*(byte *)ppppppbVar4] == '\0') {
              lVar11 = (longlong)ppppppbVar4 - (longlong)ppppppbVar19;
              goto LAB_180163f6a;
            }
          }
          goto LAB_180163f63;
        }
        lVar11 = FUN_1802d6fd0(ppppppbVar19,local_1b8,&DAT_1803604b8,5);
      }
LAB_180163f6a:
      iVar7 = 1;
      if (lVar11 == -1) {
        uStack_3c8 = 0;
        local_3c0 = 0;
        uStack_3b8 = 0xf;
        local_3d0 = 0;
        plVar9 = &local_3d0;
        uVar22 = 1;
        local_3d8 = 1;
      }
      else {
        plVar9 = (longlong *)FUN_18020e670(&local_1c8,local_2e8,lVar11,0x20);
        uVar22 = 2;
        local_3d8 = 2;
      }
      local_1a8 = (char *****)0x0;
      lStack_1a0 = 0;
      local_198 = 0;
      uStack_190 = 0;
      local_1a8 = (char *****)*plVar9;
      lStack_1a0 = plVar9[1];
      local_198 = plVar9[2];
      uStack_190 = plVar9[3];
      plVar9[2] = 0;
      plVar9[3] = 0xf;
      *(undefined1 *)plVar9 = 0;
      if ((uVar22 & 2) != 0) {
        uVar22 = uVar22 & 0xfffffffd;
        local_3d8 = uVar22;
        FUN_18020e450(local_2e8);
      }
      if ((uVar22 & 1) != 0) {
        uVar22 = uVar22 & 0xfffffffe;
        local_3d8 = uVar22;
        FUN_18020e450(&local_3d0);
      }
      if (local_198 != 0) {
        do {
          ppppppcVar12 = &local_1a8;
          if (0xf < uStack_190) {
            ppppppcVar12 = (char ******)local_1a8;
          }
          iVar8 = isalnum((uint)*(byte *)((longlong)ppppppcVar12 + uVar20));
          if (iVar8 == 0) {
            ppppppcVar12 = &local_1a8;
            if (0xf < uStack_190) {
              ppppppcVar12 = (char ******)local_1a8;
            }
            if (*(char *)((longlong)ppppppcVar12 + uVar20) != '_') break;
          }
          uVar20 = uVar20 + 1;
        } while (uVar20 < local_198);
      }
      if (local_198 < uVar20) {
        _Size = uVar20 - local_198;
        if (uStack_190 - local_198 < _Size) {
          local_418 = local_418 & 0xffffff00;
          FUN_18022a720(&local_1a8,_Size,local_1a8,_Size);
        }
        else {
          ppppppcVar12 = &local_1a8;
          if (0xf < uStack_190) {
            ppppppcVar12 = (char ******)local_1a8;
          }
          pcVar23 = (char *)((longlong)ppppppcVar12 + local_198);
          local_198 = uVar20;
          memset(pcVar23,0,_Size);
          pcVar23[_Size] = '\0';
        }
      }
      else {
        ppppppcVar12 = &local_1a8;
        if (0xf < uStack_190) {
          ppppppcVar12 = (char ******)local_1a8;
        }
        local_198 = uVar20;
        *(char *)((longlong)ppppppcVar12 + uVar20) = '\0';
      }
      ppppppcVar12 = &local_1a8;
      if (0xf < uStack_190) {
        ppppppcVar12 = (char ******)local_1a8;
      }
      iVar8 = _strnicmp((char *)ppppppcVar12,"Refract",7);
      if (iVar8 == 0) {
LAB_180164182:
        DAT_1803e9a12 = '\x01';
      }
      else {
        ppppppcVar12 = &local_1a8;
        if (0xf < uStack_190) {
          ppppppcVar12 = (char ******)local_1a8;
        }
        iVar8 = _strnicmp((char *)ppppppcVar12,"Water",5);
        DAT_1803e9a12 = '\0';
        if (iVar8 == 0) goto LAB_180164182;
      }
      ppppppcVar12 = &local_1a8;
      if (0xf < uStack_190) {
        ppppppcVar12 = (char ******)local_1a8;
      }
      iVar8 = _strnicmp((char *)ppppppcVar12,"Unlit",5);
      if ((iVar8 == 0) || (DAT_1803e9a11 = 0, DAT_1803e9a14 != '\0')) {
        DAT_1803e9a11 = 1;
      }
      ppppppcVar12 = &local_1a8;
      if (0xf < uStack_190) {
        ppppppcVar12 = (char ******)local_1a8;
      }
      iVar8 = _strnicmp((char *)ppppppcVar12,"Wireframe",9);
      if (iVar8 == 0) {
LAB_180164272:
        DAT_1803e9a13 = 1;
      }
      else {
        ppppppbVar19 = &local_1c8;
        if (0xf < local_1b0) {
          ppppppbVar19 = (byte ******)local_1c8;
        }
        if (*(byte *)ppppppbVar19 == 0) {
LAB_180164269:
          DAT_1803e9a13 = 0;
        }
        else {
          do {
            iVar8 = _strnicmp((char *)ppppppbVar19,"$wireframe",10);
            if (iVar8 == 0) {
              pbVar16 = (byte *)((longlong)ppppppbVar19 + 10);
              while( true ) {
                bVar2 = *pbVar16;
                if ((0x22 < bVar2) || ((0x500000200U >> ((longlong)(char)bVar2 & 0x3fU) & 1) == 0))
                break;
                pbVar16 = pbVar16 + 1;
              }
              if (bVar2 == 0x31) goto LAB_180164272;
              goto LAB_180164269;
            }
            ppppppbVar19 = (byte ******)((longlong)ppppppbVar19 + 1);
          } while (*(byte *)ppppppbVar19 != 0);
          DAT_1803e9a13 = 0;
        }
      }
      ppppppbVar19 = &local_1c8;
      if (0xf < local_1b0) {
        ppppppbVar19 = (byte ******)local_1c8;
      }
      bVar2 = *(byte *)ppppppbVar19;
      while (bVar2 != 0) {
        iVar8 = _strnicmp((char *)ppppppbVar19,"TextureScroll",0xd);
        if (iVar8 == 0) {
          ppppppbVar19 = &local_1c8;
          if (0xf < local_1b0) {
            ppppppbVar19 = (byte ******)local_1c8;
          }
          bVar2 = *(byte *)ppppppbVar19;
          goto joined_r0x0001801642e1;
        }
        ppppppbVar19 = (byte ******)((longlong)ppppppbVar19 + 1);
        bVar2 = *(byte *)ppppppbVar19;
      }
LAB_18016439d:
      ppppppbVar19 = &local_1c8;
      if (0xf < local_1b0) {
        ppppppbVar19 = (byte ******)local_1c8;
      }
      bVar2 = *(byte *)ppppppbVar19;
      while (bVar2 != 0) {
        iVar8 = _strnicmp((char *)ppppppbVar19,"AnimatedTexture",0xf);
        if (iVar8 == 0) {
          local_3d4 = 60.0;
          local_188 = CONCAT44(local_188._4_4_,0x3f800000);
          ppppppbVar19 = &local_1c8;
          if (0xf < local_1b0) {
            ppppppbVar19 = (byte ******)local_1c8;
          }
          bVar2 = *(byte *)ppppppbVar19;
          goto joined_r0x000180164445;
        }
        ppppppbVar19 = (byte ******)((longlong)ppppppbVar19 + 1);
        bVar2 = *(byte *)ppppppbVar19;
      }
LAB_1801644dd:
      local_118[0] = '\0';
      local_118[1] = '\0';
      local_118[2] = '\0';
      local_118[3] = '\0';
      local_118[4] = '\0';
      local_118[5] = '\0';
      local_118[6] = '\0';
      local_118[7] = '\0';
      local_118[8] = '\0';
      local_118[9] = '\0';
      local_118[10] = '\0';
      local_118[0xb] = '\0';
      local_118[0xc] = '\0';
      local_118[0xd] = '\0';
      local_118[0xe] = '\0';
      local_118[0xf] = '\0';
      local_118[0x10] = '\0';
      local_118[0x11] = '\0';
      local_118[0x12] = '\0';
      local_118[0x13] = '\0';
      local_118[0x14] = '\0';
      local_118[0x15] = '\0';
      local_118[0x16] = '\0';
      local_118[0x17] = '\0';
      local_118[0x18] = '\0';
      local_118[0x19] = '\0';
      local_118[0x1a] = '\0';
      local_118[0x1b] = '\0';
      local_118[0x1c] = '\0';
      local_118[0x1d] = '\0';
      local_118[0x1e] = '\0';
      local_118[0x1f] = '\0';
      local_118[0x20] = '\0';
      local_118[0x21] = '\0';
      local_118[0x22] = '\0';
      local_118[0x23] = '\0';
      local_118[0x24] = '\0';
      local_118[0x25] = '\0';
      local_118[0x26] = '\0';
      local_118[0x27] = '\0';
      local_118[0x28] = '\0';
      local_118[0x29] = '\0';
      local_118[0x2a] = '\0';
      local_118[0x2b] = '\0';
      local_118[0x2c] = '\0';
      local_118[0x2d] = '\0';
      local_118[0x2e] = '\0';
      local_118[0x2f] = '\0';
      local_118[0x30] = '\0';
      local_118[0x31] = '\0';
      local_118[0x32] = '\0';
      local_118[0x33] = '\0';
      local_118[0x34] = '\0';
      local_118[0x35] = '\0';
      local_118[0x36] = '\0';
      local_118[0x37] = '\0';
      local_118[0x38] = '\0';
      local_118[0x39] = '\0';
      local_118[0x3a] = '\0';
      local_118[0x3b] = '\0';
      local_118[0x3c] = '\0';
      local_118[0x3d] = '\0';
      local_118[0x3e] = '\0';
      local_118[0x3f] = '\0';
      local_118[0x40] = '\0';
      local_118[0x41] = '\0';
      local_118[0x42] = '\0';
      local_118[0x43] = '\0';
      local_118[0x44] = '\0';
      local_118[0x45] = '\0';
      local_118[0x46] = '\0';
      local_118[0x47] = '\0';
      local_118[0x48] = '\0';
      local_118[0x49] = '\0';
      local_118[0x4a] = '\0';
      local_118[0x4b] = '\0';
      local_118[0x4c] = '\0';
      local_118[0x4d] = '\0';
      local_118[0x4e] = '\0';
      local_118[0x4f] = '\0';
      local_118[0x50] = '\0';
      local_118[0x51] = '\0';
      local_118[0x52] = '\0';
      local_118[0x53] = '\0';
      local_118[0x54] = '\0';
      local_118[0x55] = '\0';
      local_118[0x56] = '\0';
      local_118[0x57] = '\0';
      local_118[0x58] = '\0';
      local_118[0x59] = '\0';
      local_118[0x5a] = '\0';
      local_118[0x5b] = '\0';
      local_118[0x5c] = '\0';
      local_118[0x5d] = '\0';
      local_118[0x5e] = '\0';
      local_118[0x5f] = '\0';
      local_118[0x60] = '\0';
      local_118[0x61] = '\0';
      local_118[0x62] = '\0';
      local_118[99] = '\0';
      local_118[100] = '\0';
      local_118[0x65] = '\0';
      local_118[0x66] = '\0';
      local_118[0x67] = '\0';
      local_118[0x68] = '\0';
      local_118[0x69] = '\0';
      local_118[0x6a] = '\0';
      local_118[0x6b] = '\0';
      local_118[0x6c] = '\0';
      local_118[0x6d] = '\0';
      local_118[0x6e] = '\0';
      local_118[0x6f] = '\0';
      local_118[0x70] = '\0';
      local_118[0x71] = '\0';
      local_118[0x72] = '\0';
      local_118[0x73] = '\0';
      local_118[0x74] = '\0';
      local_118[0x75] = '\0';
      local_118[0x76] = '\0';
      local_118[0x77] = '\0';
      local_118[0x78] = '\0';
      local_118[0x79] = '\0';
      local_118[0x7a] = '\0';
      local_118[0x7b] = '\0';
      local_118[0x7c] = '\0';
      local_118[0x7d] = '\0';
      local_118[0x7e] = '\0';
      local_118[0x7f] = '\0';
      local_118[0x80] = '\0';
      local_118[0x81] = '\0';
      local_118[0x82] = '\0';
      local_118[0x83] = '\0';
      local_118[0x84] = '\0';
      local_118[0x85] = '\0';
      local_118[0x86] = '\0';
      local_118[0x87] = '\0';
      local_118[0x88] = '\0';
      local_118[0x89] = '\0';
      local_118[0x8a] = '\0';
      local_118[0x8b] = '\0';
      local_118[0x8c] = '\0';
      local_118[0x8d] = '\0';
      local_118[0x8e] = '\0';
      local_118[0x8f] = '\0';
      local_118[0x90] = 0;
      local_118[0x91] = '\0';
      local_118[0x92] = '\0';
      local_118[0x93] = '\0';
      local_118[0x94] = '\0';
      local_118[0x95] = '\0';
      local_118[0x96] = '\0';
      local_118[0x97] = '\0';
      local_118[0x98] = '\0';
      local_118[0x99] = '\0';
      local_118[0x9a] = '\0';
      local_118[0x9b] = '\0';
      local_118[0x9c] = '\0';
      local_118[0x9d] = '\0';
      local_118[0x9e] = '\0';
      local_118[0x9f] = '\0';
      local_180[0] = 0;
      if (((DAT_1803e9a12 == '\0') &&
          (cVar6 = FUN_180161370(&local_170,local_118,0xa0), cVar6 != '\0')) &&
         (local_118[0] != '\0')) {
        local_328 = 0;
        uStack_320 = 0;
        local_318 = 0;
        local_310 = 0;
        FUN_18001d080(&local_328,"materials/",10);
        sVar14 = strlen(local_118);
        puVar10 = (undefined8 *)FUN_18021aef0(&local_328,local_118,sVar14);
        local_348 = *puVar10;
        uStack_340 = puVar10[1];
        local_338 = puVar10[2];
        uStack_330 = puVar10[3];
        puVar10[2] = 0;
        puVar10[3] = 0xf;
        *(undefined1 *)puVar10 = 0;
        local_3d8 = uVar22 | 8;
        plVar9 = (longlong *)FUN_18021aef0(&local_348,&DAT_180360554,4);
        local_138 = (undefined8 *****)*plVar9;
        lStack_130 = plVar9[1];
        local_128 = plVar9[2];
        uStack_120 = plVar9[3];
        plVar9[2] = 0;
        plVar9[3] = 0xf;
        *(undefined1 *)plVar9 = 0;
        local_3d8 = uVar22 | 0x10;
        FUN_18020e450(&local_348);
        FUN_18020e450(&local_328);
        ppppppuVar15 = &local_138;
        if (0xf < uStack_120) {
          ppppppuVar15 = (undefined8 ******)local_138;
        }
        DAT_1803e9a20 = FUN_180165310(param_1,ppppppuVar15,0,local_180);
        if (((DAT_1803e9a20 != 0) && (0 < DAT_1803e9a30)) && (1 < local_180[0])) {
          iVar8 = 0x10;
          if (local_180[0] < 0x10) {
            iVar8 = local_180[0];
          }
          if (DAT_1803e9a40 == DAT_1803e9a48) {
            FUN_180221c00(&DAT_1803e9a38,DAT_1803e9a40,&DAT_1803e9a20);
          }
          else {
            *DAT_1803e9a40 = DAT_1803e9a20;
            DAT_1803e9a40 = DAT_1803e9a40 + 1;
          }
          if (1 < iVar8) {
            do {
              ppppppuVar15 = &local_138;
              if (0xf < uStack_120) {
                ppppppuVar15 = (undefined8 ******)local_138;
              }
              local_188 = FUN_180165310(param_1,ppppppuVar15,iVar7,0);
              if (local_188 != 0) {
                if (DAT_1803e9a40 == DAT_1803e9a48) {
                  FUN_180221c00(&DAT_1803e9a38,DAT_1803e9a40,&local_188);
                }
                else {
                  *DAT_1803e9a40 = local_188;
                  DAT_1803e9a40 = DAT_1803e9a40 + 1;
                }
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 < iVar8);
          }
        }
        local_3d8 = uVar22;
        FUN_18020e450(&local_138);
      }
      local_3f0 = (double)DAT_1803e9a2c;
      local_3f8 = (double)DAT_1803e9a28;
      pcVar23 = local_118;
      if (DAT_1803e9a20 == 0) {
        pcVar23 = "none";
      }
      ppppppcVar12 = &local_1a8;
      if (0xf < uStack_190) {
        ppppppcVar12 = (char ******)local_1a8;
      }
      ppppppuVar15 = local_158;
      if (0xf < local_140) {
        ppppppuVar15 = (undefined8 ******)local_158[0];
      }
      local_3e0 = (undefined4)((longlong)DAT_1803e9a40 - DAT_1803e9a38 >> 3);
      local_3e8 = DAT_1803e9a30;
      local_400 = (uint)(DAT_1803e9a12 != '\0');
      local_408 = (uint)(DAT_1803e9a16 != '\0');
      local_410 = (uint)(DAT_1803e9a15 != '\0');
      local_418 = (uint)(DAT_1803e9a14 != '\0');
      FUN_180014410("[MP] chams material \'%s\': shader %.16s tex=%s add=%d trans=%d env=%d refract=%d scroll=%.2f@%.0f anim=%dfps/%d frames\n"
                    ,ppppppuVar15,ppppppcVar12,pcVar23);
      FUN_18020e450(&local_1a8);
      FUN_18020e450(&local_1c8);
    }
  }
  FUN_18020e450(local_158);
  puVar21 = auStack_438;
  if (local_170 != (void *)0x0) {
    _Memory = local_170;
    puVar21 = auStack_438;
    if ((0xfff < (ulonglong)(local_160 - (longlong)local_170)) &&
       (_Memory = *(void **)((longlong)local_170 + -8), puVar21 = auStack_438,
       0x1f < (ulonglong)((longlong)local_170 + (-8 - (longlong)_Memory)))) {
      pcVar3 = (code *)swi(0x29);
      _Memory = (void *)(*pcVar3)(5);
      puVar21 = auStack_430;
    }
    *(undefined8 *)(puVar21 + -8) = 0x1801648b5;
    free(_Memory);
  }
LAB_1801648c7:
  *(undefined8 *)(puVar21 + -8) = 0x1801648d6;
  return;
code_r0x000180163cee:
  ppppppbVar19 = (byte ******)((longlong)ppppppbVar19 + 1);
  if (*(byte *)ppppppbVar19 == 0) goto LAB_180163cf6;
  goto LAB_180163cd0;
code_r0x000180163d3e:
  ppppppbVar19 = (byte ******)((longlong)ppppppbVar19 + 1);
  if (*(byte *)ppppppbVar19 == 0) goto LAB_180163d46;
  goto LAB_180163d20;
code_r0x000180163dfa:
  ppppppbVar19 = (byte ******)((longlong)ppppppbVar19 + 1);
  if (*(byte *)ppppppbVar19 == 0) goto LAB_180163e85;
  goto LAB_180163de0;
joined_r0x0001801642e1:
  if (bVar2 == 0) goto LAB_18016433d;
  iVar8 = _strnicmp((char *)ppppppbVar19,"textureScrollRate",0x11);
  if (iVar8 != 0) goto code_r0x00018016430a;
  pbVar16 = (byte *)((longlong)ppppppbVar19 + 0x11);
  while ((*pbVar16 < 0x23 && ((0x500000200U >> ((longlong)(char)*pbVar16 & 0x3fU) & 1) != 0))) {
    pbVar16 = pbVar16 + 1;
  }
  dVar24 = atof((char *)pbVar16);
  DAT_1803e9a28 = (float)dVar24;
  if (DAT_1803e9a28 <= 0.0) {
LAB_18016433d:
    DAT_1803e9a28 = DAT_180380a88;
  }
  ppppppbVar19 = &local_1c8;
  if (0xf < local_1b0) {
    ppppppbVar19 = (byte ******)local_1c8;
  }
  if (*(byte *)ppppppbVar19 == 0) {
LAB_180164392:
    DAT_1803e9a2c = 0.0;
  }
  else {
    while (iVar8 = _strnicmp((char *)ppppppbVar19,"textureScrollAngle",0x12), iVar8 != 0) {
      ppppppbVar19 = (byte ******)((longlong)ppppppbVar19 + 1);
      if (*(byte *)ppppppbVar19 == 0) goto LAB_180164392;
    }
    pbVar16 = (byte *)((longlong)ppppppbVar19 + 0x12);
    while ((*pbVar16 < 0x23 && ((0x500000200U >> ((longlong)(char)*pbVar16 & 0x3fU) & 1) != 0))) {
      pbVar16 = pbVar16 + 1;
    }
    dVar24 = atof((char *)pbVar16);
    DAT_1803e9a2c = (float)dVar24;
    if (DAT_1803e9a2c <= 0.0) {
      DAT_1803e9a2c = 0.0;
    }
  }
  goto LAB_18016439d;
code_r0x00018016430a:
  ppppppbVar19 = (byte ******)((longlong)ppppppbVar19 + 1);
  bVar2 = *(byte *)ppppppbVar19;
  goto joined_r0x0001801642e1;
joined_r0x000180164445:
  if (bVar2 == 0) goto LAB_18016449d;
  iVar8 = _strnicmp((char *)ppppppbVar19,"animatedTextureFrameRate",0x18);
  if (iVar8 != 0) goto code_r0x00018016446a;
  ppppppbVar19 = ppppppbVar19 + 3;
  while ((*(byte *)ppppppbVar19 < 0x23 &&
         ((0x500000200U >> ((longlong)(char)*(byte *)ppppppbVar19 & 0x3fU) & 1) != 0))) {
    ppppppbVar19 = (byte ******)((longlong)ppppppbVar19 + 1);
  }
  dVar24 = atof((char *)ppppppbVar19);
  fVar26 = (float)dVar24;
  if (fVar26 <= 0.0) {
LAB_18016449d:
    fVar26 = DAT_180380fe4;
  }
  local_178 = CONCAT44(local_178._4_4_,fVar26);
  pfVar17 = (float *)&local_188;
  if (fVar5 <= fVar26) {
    pfVar17 = (float *)&local_178;
  }
  pfVar13 = &local_3d4;
  if (fVar26 <= DAT_1803810c8) {
    pfVar13 = pfVar17;
  }
  DAT_1803e9a30 = (int)*pfVar13;
  goto LAB_1801644dd;
code_r0x00018016446a:
  ppppppbVar19 = (byte ******)((longlong)ppppppbVar19 + 1);
  bVar2 = *(byte *)ppppppbVar19;
  goto joined_r0x000180164445;
}


