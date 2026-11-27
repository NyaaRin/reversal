// 0x18012e770  FUN_18012e770
// size=2842 thunk=false
// signature: undefined FUN_18012e770()
// status: ok


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18012e770(void)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  undefined4 extraout_var;
  undefined8 uVar7;
  size_t sVar8;
  uint *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 *******pppppppuVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined *puVar17;
  char *pcVar18;
  bool bVar19;
  undefined1 auStackY_1198 [32];
  undefined8 local_1160;
  undefined **local_1158;
  undefined8 local_1150;
  undefined8 uStack_1148;
  undefined8 local_1140;
  undefined8 local_1138;
  undefined8 local_1130;
  undefined8 uStack_1128;
  undefined8 local_1120;
  undefined8 uStack_1118;
  undefined8 local_1110;
  undefined8 uStack_1108;
  undefined8 local_1100;
  undefined8 local_10f8;
  undefined8 local_10f0;
  undefined8 uStack_10e8;
  undefined8 local_10e0;
  undefined8 local_10d8;
  uint local_10d0;
  uint uStack_10cc;
  uint uStack_10c8;
  uint uStack_10c4;
  undefined8 local_10c0;
  undefined8 uStack_10b8;
  uint local_10b0;
  uint uStack_10ac;
  uint uStack_10a8;
  uint uStack_10a4;
  undefined8 local_10a0;
  undefined8 uStack_1098;
  undefined8 local_1090;
  undefined8 uStack_1088;
  undefined8 local_1080;
  undefined8 uStack_1078;
  undefined4 local_1070;
  undefined4 uStack_106c;
  undefined4 uStack_1068;
  undefined4 uStack_1064;
  undefined8 local_1060;
  undefined8 uStack_1058;
  undefined1 local_1050 [32];
  undefined1 local_1030 [32];
  undefined1 local_1010 [32];
  undefined8 *local_ff0;
  undefined8 *local_fe8;
  undefined8 ******local_fe0 [2];
  undefined8 local_fd0;
  ulonglong local_fc8;
  undefined8 ******local_fc0 [2];
  undefined8 local_fb0;
  ulonglong local_fa8;
  undefined1 local_fa0 [16];
  longlong local_f90;
  char local_f78 [64];
  CHAR local_f38 [64];
  undefined1 local_ef8 [64];
  undefined1 local_eb8 [64];
  undefined1 local_e78 [64];
  undefined1 local_e38 [64];
  undefined1 local_df8 [64];
  undefined1 local_db8 [224];
  CHAR local_cd8 [192];
  undefined1 local_c18 [896];
  WCHAR local_898 [512];
  WCHAR local_498 [512];
  ulonglong local_98;
  undefined8 local_48;
  
  local_48 = 0x18012e78f;
  local_98 = DAT_1803da4c0 ^ (ulonglong)auStackY_1198;
  uVar15 = 0;
  if (DAT_180400b70 == '\0') {
    return;
  }
  FUN_18012ae90(local_fa0);
  if (local_f90 == 0) {
    FUN_18012ab30("Couldn\'t locate the garrysmod folder.");
  }
  else {
    bVar19 = DAT_180400b74 != 6;
    local_fe8 = (undefined8 *)0x93fd561a96ab0c67;
    local_ff0 = (undefined8 *)0xaeca5b24c521e60;
    plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_1160,&local_fe8);
    plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,&local_1150,&local_ff0);
    FUN_180202dc0(*plVar6 + 0x28);
    local_1160 = 0;
    DAT_180400e51 = 1;
    uVar12 = uVar15;
    if (0 < DAT_180400ea8) {
      do {
        local_1158 = &PTR_vftable_std__System_error_category_1803e9500;
        iVar5 = (int)uVar12;
        puVar11 = &DAT_1803e9ff0 + (longlong)iVar5 * 4;
        if (7 < (ulonglong)(&DAT_1803ea008)[(longlong)iVar5 * 4]) {
          puVar11 = (undefined8 *)*puVar11;
        }
        FUN_1802d7d9c(puVar11);
        local_1160 = CONCAT44(local_1150._4_4_,extraout_var);
        uVar12 = (ulonglong)(iVar5 + 1U);
      } while ((int)(iVar5 + 1U) < DAT_180400ea8);
    }
    local_1158 = &PTR_vftable_std__System_error_category_1803e9500;
    DAT_180400ea8 = 0;
    if ((DAT_18042f174 & 1) == 0) {
      DAT_18042f174 = DAT_18042f174 | 1;
      _DAT_1805bdb14 = std::_Random_device();
      _DAT_1805bee94 = 0xffffffff;
      uVar12 = 1;
      uVar3 = _DAT_1805bdb14;
      do {
        uVar3 = (uVar3 >> 0x1e ^ uVar3) * 0x6c078965 + (int)uVar12;
        *(uint *)(&DAT_1805bdb14 + uVar12 * 4) = uVar3;
        uVar12 = uVar12 + 1;
      } while (uVar12 < 0x270);
      _DAT_1805bdb10 = 0x270;
    }
    uVar4 = FUN_18021dbf0(&DAT_1805bdb10);
    FUN_180204f10(local_f78,"sky_%08x",uVar4);
    local_ff0 = &local_1110;
    local_1110 = 0;
    uStack_1108 = 0;
    local_1100 = 0;
    local_10f8 = 0;
    FUN_180211510(&local_1110,L"skybox",6);
    local_fe8 = &local_1150;
    local_1150 = 0;
    uStack_1148 = 0;
    local_1140 = 0;
    local_1138 = 0;
    FUN_180211510(&local_1150,L"materials",9);
    uVar7 = FUN_180066720(local_1030,local_fa0,&local_1150);
    uVar7 = FUN_180066720(local_1050,uVar7,&local_1110);
    FUN_180067d80(uVar7,&local_1160);
    FUN_18021e290(local_1050);
    FUN_18021e290(local_1030);
    FUN_18021e290(&local_1150);
    FUN_18021e290(&local_1110);
    pcVar18 = "";
    if (bVar19) {
      FUN_180204f10(local_f38,"sk%08x%s",uVar4,&DAT_18033e5ea);
      FUN_180204f10(local_ef8,"sk%08x%s",uVar4,&DAT_18033e5ea);
      FUN_180204f10(local_eb8,"sk%08x%s",uVar4,&DAT_18033e5ea);
      FUN_180204f10(local_e78,"sk%08x%s",uVar4,&DAT_18033e5ea);
      FUN_180204f10(local_e38,"sk%08x%s",uVar4,&DAT_18033e5ea);
      puVar17 = &DAT_18033e5ea;
    }
    else {
      FUN_180204f10(local_f38,"sk%08x%s",uVar4,PTR_DAT_18033bf38);
      FUN_180204f10(local_ef8,"sk%08x%s",uVar4,PTR_DAT_18033bf40);
      FUN_180204f10(local_eb8,"sk%08x%s",uVar4,PTR_DAT_18033bf48);
      FUN_180204f10(local_e78,"sk%08x%s",uVar4,PTR_DAT_18033bf50);
      FUN_180204f10(local_e38,"sk%08x%s",uVar4,PTR_DAT_18033bf58);
      puVar17 = PTR_DAT_18033bf60;
    }
    FUN_180204f10(local_df8,"sk%08x%s",uVar4,puVar17);
    uVar1 = _UNK_1803814a8;
    uVar7 = _DAT_1803814a0;
    uVar12 = uVar15;
    do {
      memset(local_898,0,0x400);
      lVar14 = (longlong)(int)uVar12;
      MultiByteToWideChar(0xfde9,0,local_f38 + lVar14 * 0x40,-1,local_898,0x1ff);
      local_1090 = 0;
      uStack_1088 = 0;
      local_1080 = 0;
      uStack_1078 = 0;
      sVar8 = wcslen(local_898);
      FUN_180211510(&local_1090,local_898,sVar8);
      puVar9 = (uint *)FUN_180211740(&local_1090,L".vtf",4);
      local_10b0 = *puVar9;
      uStack_10cc = puVar9[1];
      uStack_10c8 = puVar9[2];
      uStack_10c4 = puVar9[3];
      local_10a0 = *(undefined8 *)(puVar9 + 4);
      uStack_1098 = *(undefined8 *)(puVar9 + 6);
      *(undefined2 *)puVar9 = 0;
      puVar9[4] = 0;
      puVar9[5] = 0;
      puVar9[6] = 7;
      puVar9[7] = 0;
      local_10c0 = uVar7;
      uStack_10b8 = uVar1;
      local_10d0 = local_10b0 & 0xffff0000;
      local_ff0 = &local_10f0;
      local_10f0 = 0;
      uStack_10e8 = 0;
      local_10e0 = 0;
      local_10d8 = 0;
      uStack_10ac = uStack_10cc;
      uStack_10a8 = uStack_10c8;
      uStack_10a4 = uStack_10c4;
      FUN_180211510(&local_10f0,L"materials",9);
      uVar10 = FUN_180066720(local_1010,local_fa0,&local_10f0);
      FUN_180066720(local_fc0,uVar10,&local_10b0);
      FUN_18021e290(local_1010);
      FUN_18021e290(&local_10f0);
      FUN_18021e290(&local_10b0);
      FUN_18021e290(&local_10d0);
      FUN_18021e290(&local_1090);
      cVar2 = FUN_18012b500(local_fc0,(&DAT_1803ea170)[lVar14 * 3],
                            (&DAT_1803ea178)[lVar14 * 3] - (&DAT_1803ea170)[lVar14 * 3]);
      if (cVar2 == '\0') {
        FUN_18012ab30("Failed to write into garrysmod/materials.");
        if (0 < DAT_180400ea8) {
          do {
            iVar5 = (int)uVar15;
            puVar11 = &DAT_1803e9ff0 + (longlong)iVar5 * 4;
            if (7 < (ulonglong)(&DAT_1803ea008)[(longlong)iVar5 * 4]) {
              puVar11 = (undefined8 *)*puVar11;
            }
            FUN_1802d7d9c(puVar11);
            uVar15 = (ulonglong)(iVar5 + 1U);
          } while ((int)(iVar5 + 1U) < DAT_180400ea8);
        }
        DAT_180400ea8 = 0;
        FUN_18021e290(local_fc0);
        goto LAB_18012f243;
      }
      lVar14 = (longlong)DAT_180400ea8;
      DAT_180400ea8 = DAT_180400ea8 + 1;
      if ((undefined8 *******)(&DAT_1803e9ff0 + lVar14 * 4) != local_fc0) {
        pppppppuVar13 = local_fc0;
        if (7 < local_fa8) {
          pppppppuVar13 = (undefined8 *******)local_fc0[0];
        }
        FUN_18021a7b0(&DAT_1803e9ff0 + lVar14 * 4,pppppppuVar13,local_fb0);
      }
      FUN_18021e290(local_fc0);
      uVar3 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar3;
      iVar5 = 1;
      if (!bVar19) {
        iVar5 = 6;
      }
      uVar16 = uVar15;
    } while ((int)uVar3 < iVar5);
    do {
      FUN_180204ff0(local_cd8,"materials/skybox/%s%s.vmt",local_f78,(&PTR_DAT_18033bf38)[uVar16]);
      memset(local_498,0,0x400);
      MultiByteToWideChar(0xfde9,0,local_cd8,-1,local_498,0x1ff);
      local_1130 = 0;
      uStack_1128 = 0;
      local_1120 = 0;
      uStack_1118 = 0;
      sVar8 = wcslen(local_498);
      FUN_180211510(&local_1130,local_498,sVar8);
      local_1070 = (undefined4)local_1130;
      uStack_106c = local_1130._4_4_;
      uStack_1068 = (undefined4)uStack_1128;
      uStack_1064 = uStack_1128._4_4_;
      local_1060 = local_1120;
      uStack_1058 = uStack_1118;
      local_1120 = uVar7;
      uStack_1118 = uVar1;
      local_1130 = local_1130 & 0xffffffffffff0000;
      FUN_180066720(local_fe0,local_fa0,&local_1070);
      FUN_18021e290(&local_1070);
      FUN_18021e290(&local_1130);
      uVar12 = uVar15;
      if (!bVar19) {
        uVar12 = uVar16;
      }
      local_db8[0] = 0;
      if ((&DAT_1804011d0 + uVar12 * 0xa0 != (char *)0x0) &&
         ((&DAT_1804011d0)[uVar12 * 0xa0] != '\0')) {
        FUN_180205050(local_db8,"\t\"$basetexturetransform\" \"%s\"\n");
      }
      if (DAT_180400c04 < 2) {
        iVar5 = FUN_1802050b0(local_c18,
                              "\"sky\"\n{\n\t\"$basetexture\" \"%s\"\n%s\t\"$nofog\" \"1\"\n\t\"$ignorez\" \"1\"\n}\n"
                              ,local_f38 + uVar16 * 0x40,local_db8);
      }
      else {
        iVar5 = FUN_1802050b0(local_c18,
                              "\"sky\"\n{\n\t\"$basetexture\" \"%s\"\n%s\t\"$nofog\" \"1\"\n\t\"$ignorez\" \"1\"\n\t\"Proxies\"\n\t{\n\t\t\"AnimatedTexture\"\n\t\t{\n\t\t\t\"animatedTextureVar\" \"$basetexture\"\n\t\t\t\"animatedTextureFrameNumVar\" \"$frame\"\n\t\t\t\"animatedTextureFrameRate\" \"%.2f\"\n\t\t}\n\t}\n}\n"
                              ,local_f38 + uVar16 * 0x40,local_db8);
      }
      if ((iVar5 < 1) || (cVar2 = FUN_18012b500(local_fe0,local_c18,(longlong)iVar5), cVar2 == '\0')
         ) {
        FUN_18012ab30("Failed to write the VMT into materials/skybox.");
        if (0 < DAT_180400ea8) {
          do {
            iVar5 = (int)uVar15;
            puVar11 = &DAT_1803e9ff0 + (longlong)iVar5 * 4;
            if (7 < (ulonglong)(&DAT_1803ea008)[(longlong)iVar5 * 4]) {
              puVar11 = (undefined8 *)*puVar11;
            }
            FUN_1802d7d9c(puVar11);
            uVar15 = (ulonglong)(iVar5 + 1U);
          } while ((int)(iVar5 + 1U) < DAT_180400ea8);
        }
        DAT_180400ea8 = 0;
        FUN_18021e290(local_fe0);
        goto LAB_18012f243;
      }
      lVar14 = (longlong)DAT_180400ea8;
      DAT_180400ea8 = DAT_180400ea8 + 1;
      if ((undefined8 *******)(&DAT_1803e9ff0 + lVar14 * 4) != local_fe0) {
        pppppppuVar13 = local_fe0;
        if (7 < local_fc8) {
          pppppppuVar13 = (undefined8 *******)local_fe0[0];
        }
        FUN_18021a7b0(&DAT_1803e9ff0 + lVar14 * 4,pppppppuVar13,local_fd0);
      }
      FUN_18021e290(local_fe0);
      uVar3 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar3;
    } while ((int)uVar3 < 6);
    strncpy_s(&DAT_180400b80,0x50,local_f78,0xffffffffffffffff);
    FUN_18012ab00(local_f78);
    FUN_18012f810(local_f78);
    plVar6 = &DAT_180400bd0;
    uVar12 = uVar15;
    do {
      uVar3 = (uint)uVar12 + 1;
      if (*plVar6 == 0) {
        uVar3 = (uint)uVar12;
      }
      uVar12 = (ulonglong)uVar3;
      plVar6 = plVar6 + 1;
    } while (plVar6 != (longlong *)&DAT_180400c00);
    if (((int)uVar3 < 4) || (FUN_18012aa50(), DAT_180400ea0 == 0)) {
      DAT_180401111 = 0;
      if (0 < DAT_180400ea8) {
        do {
          iVar5 = (int)uVar15;
          puVar11 = &DAT_1803e9ff0 + (longlong)iVar5 * 4;
          if (7 < (ulonglong)(&DAT_1803ea008)[(longlong)iVar5 * 4]) {
            puVar11 = (undefined8 *)*puVar11;
          }
          FUN_1802d7d9c(puVar11);
          uVar15 = (ulonglong)(iVar5 + 1U);
        } while ((int)(iVar5 + 1U) < DAT_180400ea8);
      }
      DAT_180400ea8 = 0;
      DAT_180400b80 = 0;
      DAT_180400e60 = 0;
      FUN_18012ab30("Engine import didn\'t load (%d/6). Switch Loader to Override.",uVar12);
      FUN_180014410("[SKY] WriteEngineImport: \'%s\' FAILED verify %d/6\n",local_f78,uVar3);
    }
    else {
      DAT_180401111 = 1;
      if (1 < DAT_180400c04) {
        pcVar18 = ", animated";
      }
      FUN_18012ab30("Custom sky ready (engine): %s (%d/6)%s.",local_f78,uVar3,pcVar18);
      FUN_180014410("[SKY] WriteEngineImport: \'%s\' verified %d/6 files=%d\n",local_f78,uVar3,
                    DAT_180400ea8);
    }
  }
LAB_18012f243:
  FUN_18021e290(local_fa0);
  return;
}


