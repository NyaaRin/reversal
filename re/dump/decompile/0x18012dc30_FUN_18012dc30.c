// 0x18012dc30  FUN_18012dc30
// size=2873 thunk=false
// signature: undefined FUN_18012dc30()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00018012e2b2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18012dc30(void)

{
  wint_t *******pppppppwVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  wint_t wVar10;
  int iVar11;
  undefined4 uVar12;
  size_t sVar13;
  undefined8 uVar14;
  undefined8 *******pppppppuVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  uint *puVar18;
  longlong *plVar19;
  ulonglong uVar20;
  wint_t *******pppppppwVar21;
  undefined2 uVar22;
  char *pcVar23;
  uint uVar24;
  longlong lVar25;
  ulonglong uVar26;
  wint_t *******pppppppwVar27;
  undefined1 auStackY_8a8 [32];
  longlong local_868;
  undefined1 local_860;
  undefined1 local_85f;
  undefined4 local_85e;
  undefined4 local_858;
  undefined8 local_848;
  undefined2 local_840;
  undefined4 local_83e;
  undefined8 ******local_838 [2];
  ulonglong local_828;
  ulonglong local_820;
  ulonglong local_818;
  undefined8 uStack_810;
  undefined8 local_808;
  undefined8 uStack_800;
  basic_ios<char,std::char_traits<char>_> *local_7f8 [2];
  undefined8 local_7e8;
  undefined8 uStack_7e0;
  undefined8 local_7d8;
  undefined8 uStack_7d0;
  undefined8 local_7c8;
  undefined8 uStack_7c0;
  undefined8 local_7b8;
  undefined8 uStack_7b0;
  undefined1 local_7a8 [32];
  undefined1 local_788 [16];
  undefined1 local_778 [32];
  undefined1 local_758 [32];
  undefined1 local_738 [32];
  undefined1 local_718 [32];
  undefined1 local_6f8 [32];
  undefined1 local_6d8 [32];
  undefined1 local_6b8 [32];
  undefined1 local_698 [32];
  undefined1 local_678 [28];
  int iStack_65c;
  longlong local_658 [2];
  byte local_648 [8];
  basic_istream<char,std::char_traits<char>_> local_640 [48];
  longlong alStack_610 [13];
  basic_ios<char,std::char_traits<char>_> local_5a8 [96];
  undefined8 local_548;
  undefined8 local_540;
  wint_t ******local_538;
  undefined8 uStack_530;
  longlong local_528;
  ulonglong local_520;
  undefined8 ******local_518 [2];
  undefined8 local_508;
  ulonglong local_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  ulonglong local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined1 local_4b8 [32];
  undefined1 local_498 [32];
  undefined1 local_478 [16];
  longlong local_468;
  WCHAR local_458 [512];
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStackY_8a8;
  uVar26 = 0;
  FUN_18012da80(0);
  if (DAT_180400ec0 == '\0') {
    FUN_18012ab30("Enter a path to a .vtf file first.");
    return;
  }
  FUN_18012ae90(local_478);
  if (local_468 == 0) {
    FUN_18012ab30("Couldn\'t locate the garrysmod folder.");
    goto LAB_18012e735;
  }
  FUN_18012bc40(local_478);
  memset(local_458,0,0x400);
  MultiByteToWideChar(0xfde9,0,&DAT_180400ec0,-1,local_458,0x1ff);
  local_818 = 0;
  uStack_810 = 0;
  local_808 = 0;
  uStack_800 = 0;
  sVar13 = wcslen(local_458);
  FUN_180211510(&local_818,local_458,sVar13);
  local_4d8 = local_818;
  uStack_4d0 = uStack_810;
  local_4c8 = local_808;
  uStack_4c0 = uStack_800;
  local_808 = _DAT_1803814a0;
  uStack_800 = _UNK_1803814a8;
  local_818 = local_818 & 0xffffffffffff0000;
  FUN_18021e290(&local_818);
  bVar8 = false;
  bVar9 = false;
  FUN_180065cd0(&local_4d8,local_498);
  uStack_4f0 = 0;
  local_4e8 = _DAT_1803814a0;
  uStack_4e0 = _UNK_1803814a8;
  local_4f8 = 0;
  uVar14 = FUN_180065ec0(&local_4d8,local_7a8);
  FUN_18020e540(local_838,uVar14);
  FUN_18021e290(local_7a8);
  if (2 < local_828) {
    uVar20 = local_828 - 2;
    local_538 = (wint_t ******)0x0;
    uStack_530 = 0;
    local_528 = 0;
    local_520 = 0;
    if (local_828 < uVar20) {
                    /* WARNING: Subroutine does not return */
      FUN_18022ec00();
    }
    lVar25 = -1;
    if (local_828 - uVar20 != -1) {
      lVar25 = local_828 - uVar20;
    }
    pppppppuVar15 = local_838;
    if (7 < local_820) {
      pppppppuVar15 = (undefined8 *******)local_838[0];
    }
    FUN_180211510(&local_538,(longlong)pppppppuVar15 + uVar20 * 2,lVar25);
    pppppppwVar21 = (wint_t *******)local_538;
    if (local_520 < 8) {
      pppppppwVar21 = &local_538;
    }
    pppppppwVar1 = (wint_t *******)((longlong)pppppppwVar21 + local_528 * 2);
    pppppppwVar27 = (wint_t *******)local_538;
    for (; uVar20 = uVar26, local_538 = (wint_t ******)pppppppwVar27, pppppppwVar21 != pppppppwVar1;
        pppppppwVar21 = (wint_t *******)((longlong)pppppppwVar21 + 2)) {
      wVar10 = towlower(*(wint_t *)pppppppwVar21);
      *(wint_t *)pppppppwVar21 = wVar10;
      pppppppwVar27 = (wint_t *******)local_538;
    }
    do {
      puVar16 = (undefined8 *)
                FUN_180205110(local_778,(&PTR_DAT_18033bf38)[uVar20],
                              (&PTR_DAT_18033bf38)[uVar20] + 2);
      plVar19 = puVar16 + 2;
      if (7 < (ulonglong)puVar16[3]) {
        puVar16 = (undefined8 *)*puVar16;
      }
      pppppppwVar21 = &local_538;
      if (7 < local_520) {
        pppppppwVar21 = pppppppwVar27;
      }
      if (local_528 == *plVar19) {
        bVar2 = false;
        if (local_528 != 0) {
          iVar11 = FUN_180012bf0(pppppppwVar21,puVar16);
          pppppppwVar27 = (wint_t *******)local_538;
          bVar2 = iVar11 != 0;
        }
      }
      else {
        bVar2 = true;
      }
      FUN_18021e290(local_778);
      if (!bVar2) {
        FUN_18020e4c0(local_838,local_518,0,local_828 - 2);
        bVar2 = true;
        uVar20 = uVar26;
        goto LAB_18012df81;
      }
      uVar24 = (int)uVar20 + 1;
      uVar20 = (ulonglong)uVar24;
    } while ((int)uVar24 < 6);
    goto LAB_18012e10d;
  }
  goto LAB_18012e128;
  while( true ) {
    uVar14 = FUN_180205110(local_6f8,(&PTR_DAT_18033bf38)[uVar20],(&PTR_DAT_18033bf38)[uVar20] + 2);
    uVar14 = FUN_180205260(local_718,local_518,uVar14);
    puVar16 = (undefined8 *)FUN_180204f70(local_738,uVar14,L".vtf");
    local_7c8 = *puVar16;
    uStack_7c0 = puVar16[1];
    local_7b8 = puVar16[2];
    uStack_7b0 = puVar16[3];
    *(undefined2 *)puVar16 = 0;
    puVar16[2] = 0;
    puVar16[3] = 7;
    uVar14 = FUN_180066720(local_758,local_498,&local_7c8);
    puVar18 = (uint *)FUN_180067c80(local_7f8,uVar14);
    bVar2 = 1 < *puVar18;
    FUN_18021e290(local_758);
    FUN_18021e290(&local_7c8);
    FUN_18021e290(local_738);
    FUN_18021e290(local_718);
    FUN_18021e290(local_6f8);
    uVar24 = (int)uVar20 + 1;
    uVar20 = (ulonglong)uVar24;
    if (5 < (int)uVar24) break;
LAB_18012df81:
    if (!bVar2) goto LAB_18012e101;
  }
  if (bVar2) {
    bVar8 = true;
    bVar9 = true;
    pppppppuVar15 = local_518;
    if (7 < local_500) {
      pppppppuVar15 = (undefined8 *******)local_518[0];
    }
    FUN_18021a7b0(&local_4f8,pppppppuVar15,local_508);
  }
LAB_18012e101:
  FUN_18021e290(local_518);
LAB_18012e10d:
  FUN_18021e290(&local_538);
LAB_18012e128:
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  bVar2 = false;
  FUN_18021e290(local_838);
  uVar12 = 1;
  if (bVar8) {
    uVar12 = 6;
  }
  local_540 = CONCAT44(local_540._4_4_,uVar12);
  local_858 = local_85e;
  local_548 = CONCAT44(local_548._4_4_,local_85e);
  do {
    iVar11 = (int)uVar26;
    if (bVar8) {
      uVar14 = FUN_180205110(local_678,(&PTR_DAT_18033bf38)[iVar11],(&PTR_DAT_18033bf38)[iVar11] + 2
                            );
      uVar14 = FUN_180205260(local_698,&local_4f8,uVar14);
      puVar16 = (undefined8 *)FUN_180204f70(local_6b8,uVar14,L".vtf");
      local_7e8 = *puVar16;
      uStack_7e0 = puVar16[1];
      local_7d8 = puVar16[2];
      uStack_7d0 = puVar16[3];
      *(undefined2 *)puVar16 = 0;
      puVar16[2] = 0;
      puVar16[3] = 7;
      puVar17 = (undefined1 *)FUN_180066720(local_6d8,local_498,&local_7e8);
      bVar7 = true;
      bVar6 = true;
      bVar5 = true;
      bVar4 = true;
    }
    else {
      FUN_18020e540(local_7a8,&local_4d8);
      bVar2 = true;
      puVar17 = local_7a8;
    }
    FUN_18020e540(local_4b8,puVar17);
    if (bVar2) {
      bVar2 = false;
      FUN_18021e290(local_7a8);
    }
    if (bVar4) {
      bVar4 = false;
      FUN_18021e290(local_6d8);
    }
    if (bVar5) {
      bVar5 = false;
      FUN_18021e290(&local_7e8);
    }
    if (bVar6) {
      bVar6 = false;
      FUN_18021e290(local_698);
    }
    if (bVar7) {
      bVar7 = false;
      FUN_18021e290(local_678);
    }
    lVar25 = (longlong)iVar11;
    puVar18 = (uint *)FUN_180067c80(local_788);
    if (*puVar18 < 2) {
LAB_18012e6d0:
      pcVar23 = "Failed to read the file (not a VTF?).";
      if (bVar8) {
        pcVar23 = "Failed to read the \'%s\' face (not a VTF?).";
      }
      FUN_18012ab30(pcVar23,(&PTR_DAT_18033bf38)[lVar25]);
      FUN_18012da80(0);
      FUN_18021e290(local_4b8);
      goto LAB_18012e70e;
    }
    memset(local_658,0,0x110);
    FUN_180202040(local_658,local_4b8,0x20);
    if ((local_648[*(int *)(local_658[0] + 4)] & 6) != 0) {
      local_7f8[0] = local_5a8;
      *(undefined ***)((longlong)local_658 + (longlong)*(int *)(local_658[0] + 4)) =
           vftable_std_std_D_DU__char_traits___basic_ifstream;
      *(int *)((longlong)&iStack_65c + (longlong)*(int *)(local_658[0] + 4)) =
           *(int *)(local_658[0] + 4) + -0xb0;
      FUN_18020f850(local_648);
      std::basic_istream<char,std::char_traits<char>_>::~basic_istream<char,std::char_traits<char>_>
                (local_640);
      std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
                (local_5a8);
      goto LAB_18012e6d0;
    }
    plVar19 = &DAT_1803ea170 + lVar25 * 3;
    local_868 = *(longlong *)((longlong)alStack_610 + (longlong)*(int *)(local_658[0] + 4));
    local_848 = 0;
    local_840 = 1;
    local_83e = local_858;
    local_860 = local_868 == 0;
    local_85f = 0;
    local_85e = (undefined4)local_548;
    FUN_1802131e0(plVar19,&local_868);
    if (((ulonglong)((&DAT_1803ea178)[lVar25 * 3] - *plVar19) < 0x51) ||
       (*(int *)*plVar19 != 0x465456)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    local_7f8[0] = local_5a8;
    *(undefined ***)((longlong)local_658 + (longlong)*(int *)(local_658[0] + 4)) =
         vftable_std_std_D_DU__char_traits___basic_ifstream;
    *(int *)((longlong)&iStack_65c + (longlong)*(int *)(local_658[0] + 4)) =
         *(int *)(local_658[0] + 4) + -0xb0;
    FUN_18020f850(local_648);
    std::basic_istream<char,std::char_traits<char>_>::~basic_istream<char,std::char_traits<char>_>
              (local_640);
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              (local_5a8);
    bVar8 = bVar9;
    if (!bVar3) goto LAB_18012e6d0;
    if ((ulonglong)((&DAT_1803ea178)[lVar25 * 3] - *plVar19) < 0x1c) {
      uVar22 = 0;
    }
    else {
      uVar22 = *(undefined2 *)(*plVar19 + 0x10);
    }
    FUN_18012b620(local_4b8,uVar22);
    FUN_18021e290(local_4b8);
    uVar26 = (ulonglong)(iVar11 + 1U);
  } while ((int)(iVar11 + 1U) < (int)local_540);
  DAT_180400b74 = (int)local_540;
  DAT_180400eb4 = 0;
  DAT_180400eac = 0;
  DAT_180400c04 = 1;
  if (0x1b < (ulonglong)(DAT_1803ea178 - DAT_1803ea170)) {
    DAT_180400eac = (uint)*(ushort *)(DAT_1803ea170 + 0x10);
    DAT_180400eb4 = (uint)*(ushort *)(DAT_1803ea170 + 0x12);
    DAT_180400c04 = 1;
    if (*(ushort *)(DAT_1803ea170 + 0x18) != 0) {
      DAT_180400c04 = (uint)*(ushort *)(DAT_1803ea170 + 0x18);
    }
  }
  DAT_180400b70 = 1;
  pcVar23 = "Loaded";
  if (DAT_180400c04 < 2) {
    if (bVar9) {
      pcVar23 = "Loaded 6-face set";
    }
    FUN_18012ab30("%s %dx%d.",pcVar23);
  }
  else {
    if (bVar9) {
      pcVar23 = "Loaded 6-face set";
    }
    FUN_18012ab30("%s %dx%d, %d frames (animated).",pcVar23);
  }
  pcVar23 = "single";
  if (bVar9) {
    pcVar23 = "6-face set";
  }
  FUN_180014410("[SKY] DoLoad: %s %dx%d frames=%d (%zu bytes)\n",pcVar23,DAT_180400eac,DAT_180400eb4
               );
  local_540 = 0x93fd561a96ab0c67;
  local_548 = 0x4f0efc17f02b64be;
  plVar19 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_868,&local_540);
  plVar19 = (longlong *)FUN_180241a30(*plVar19 + 0x28,&local_848,&local_548);
  puVar17 = (undefined1 *)FUN_1801fcfc0(*plVar19 + 0x28);
  *puVar17 = 1;
LAB_18012e70e:
  FUN_18021e290(&local_4f8);
  FUN_18021e290(local_498);
  FUN_18021e290(&local_4d8);
LAB_18012e735:
  FUN_18021e290(local_478);
  return;
}


