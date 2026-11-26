// 0x18012b620  FUN_18012b620
// size=1560 thunk=false
// signature: undefined FUN_18012b620()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18012b620(undefined8 param_1,int param_2,int param_3,undefined1 *param_4)

{
  basic_streambuf<char,std::char_traits<char>_> bVar1;
  basic_streambuf<char,std::char_traits<char>_> *pbVar2;
  code *pcVar3;
  undefined1 *puVar4;
  int iVar5;
  uint *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  basic_streambuf<char,std::char_traits<char>_> *pbVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  basic_streambuf<char,std::char_traits<char>_> *pbVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined8 ****ppppuVar17;
  undefined1 uVar18;
  size_t _Size;
  undefined8 uStack_240;
  undefined1 auStack_238 [48];
  undefined4 local_208;
  basic_streambuf<char,std::char_traits<char>_> **local_1f8;
  undefined2 local_1f0;
  undefined4 local_1ee;
  undefined2 local_1ea;
  longlong local_1e8 [2];
  byte local_1d8 [56];
  undefined8 auStack_1a0 [13];
  basic_ios<char,std::char_traits<char>_> local_138 [96];
  undefined8 ***local_d8;
  undefined8 uStack_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  basic_streambuf<char,std::char_traits<char>_> *local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  ulonglong local_a0;
  basic_streambuf<char,std::char_traits<char>_> *local_98;
  undefined8 **ppuStack_90;
  ulonglong local_88;
  ulonglong local_80;
  undefined1 local_78 [32];
  ulonglong local_58;
  
  puVar15 = auStack_238;
  puVar16 = auStack_238;
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_238;
  pbVar14 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
  local_208 = 0;
  *param_4 = 0;
  FUN_18020e540(local_78,param_1);
  local_1f8 = &local_b8;
  local_b8 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  FUN_180211510(&local_b8,L".vmt",4);
  local_208 = 0;
  FUN_180065680(local_78,&local_b8);
  FUN_18021e290(&local_b8);
  puVar6 = (uint *)FUN_180067c80(&local_1f8);
  puVar4 = auStack_238;
  if (1 < *puVar6) {
    memset(local_1e8,0,0x110);
    FUN_180202040(local_1e8,local_78,0x20);
    if ((local_1d8[*(int *)(local_1e8[0] + 4)] & 6) == 0) {
      pbVar2 = *(basic_streambuf<char,std::char_traits<char>_> **)
                ((longlong)auStack_1a0 + (longlong)*(int *)(local_1e8[0] + 4));
      local_d8 = (undefined8 ****)0x0;
      uStack_d0 = 0;
      local_c8 = 0;
      local_c0 = 0;
      uVar18 = 0;
      if (pbVar2 == (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
LAB_18012b783:
        local_c8 = 0;
        local_c0 = 0xf;
        local_d8 = (undefined8 ***)((ulonglong)local_d8 & 0xffffffffffffff00);
      }
      else {
        iVar5 = std::basic_streambuf<char,std::char_traits<char>_>::sgetc(pbVar2);
        pbVar9 = pbVar14;
        if (iVar5 != -1) {
          uVar18 = (undefined1)iVar5;
          pbVar9 = pbVar2;
        }
        if (pbVar9 == (basic_streambuf<char,std::char_traits<char>_> *)0x0) goto LAB_18012b783;
        local_1f8 = (basic_streambuf<char,std::char_traits<char>_> **)0x0;
        local_1f0 = 1;
        local_1ee = uStack_b0._2_4_;
        local_1ea = uStack_b0._6_2_;
        uStack_b0._0_2_ = CONCAT11(uVar18,1);
        local_b8 = pbVar9;
        FUN_1802117c0(&local_d8,&local_b8,&local_1f8);
      }
      uVar10 = local_c8;
      local_98 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
      ppuStack_90 = (undefined8 ***)0x0;
      local_88 = 0;
      local_80 = 0;
      ppppuVar17 = &local_d8;
      if (0xf < local_c0) {
        ppppuVar17 = (undefined8 ****)local_d8;
      }
      if (0x7fffffffffffffff < local_c8) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      if (local_c8 < 0x10) {
        local_88 = local_c8;
        local_80 = 0xf;
        local_98 = (basic_streambuf<char,std::char_traits<char>_> *)*ppppuVar17;
        ppuStack_90 = ppppuVar17[1];
        puVar16 = auStack_238;
      }
      else {
        uVar13 = local_c8 | 0xf;
        if (uVar13 < 0x8000000000000000) goto LAB_18012b88c;
        uVar7 = 0x8000000000000027;
        uVar13 = 0x7fffffffffffffff;
        puVar15 = auStack_238;
        while( true ) {
          *(undefined8 *)(puVar15 + -8) = 0x18012b87d;
          lVar8 = FUN_1802d8350(uVar7);
          if (lVar8 != 0) break;
          pcVar3 = (code *)swi(0x29);
          uVar13 = (*pcVar3)(5);
          puVar15 = puVar15 + 8;
LAB_18012b88c:
          if (uVar13 < 0x16) {
            uVar13 = 0x16;
          }
          if (uVar13 == 0xffffffffffffffff) goto LAB_18012b8d4;
          if (uVar13 + 1 < 0x1000) {
            *(undefined8 *)(puVar15 + -8) = 0x18012b8d4;
            pbVar14 = (basic_streambuf<char,std::char_traits<char>_> *)FUN_1802d8350();
            goto LAB_18012b8d4;
          }
          uVar7 = uVar13 + 0x28;
          if (uVar7 <= uVar13 + 1) {
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar15 + -8) = &UNK_18012bc39;
            FUN_180012fe0();
          }
        }
        pbVar14 = (basic_streambuf<char,std::char_traits<char>_> *)
                  (lVar8 + 0x27U & 0xffffffffffffffe0);
        *(longlong *)(pbVar14 + -8) = lVar8;
LAB_18012b8d4:
        local_88 = uVar10;
        local_98 = pbVar14;
        local_80 = uVar13;
        *(undefined8 *)(puVar15 + -8) = 0x18012b8f8;
        memcpy(pbVar14,ppppuVar17,uVar10 + 1);
        puVar16 = puVar15;
      }
      pbVar14 = local_98;
      if (local_80 < 0x10) {
        pbVar14 = (basic_streambuf<char,std::char_traits<char>_> *)&local_98;
      }
      pbVar2 = pbVar14 + local_88;
      for (; pbVar14 != pbVar2; pbVar14 = pbVar14 + 1) {
        bVar1 = *pbVar14;
        *(undefined8 *)(puVar16 + -8) = 0x18012b949;
        iVar5 = tolower((uint)(byte)bVar1);
        *pbVar14 = SUB41(iVar5,0);
      }
      pbVar14 = (basic_streambuf<char,std::char_traits<char>_> *)&local_98;
      if (0xf < local_80) {
        pbVar14 = local_98;
      }
      if (0x13 < local_88) {
        pbVar2 = pbVar14 + local_88;
        *(undefined8 *)(puVar16 + -8) = 0x18012b99d;
        pbVar9 = (basic_streambuf<char,std::char_traits<char>_> *)
                 thunk_FUN_1802d6b60(pbVar14,pbVar2,"basetexturetransform",0x14);
        if ((pbVar9 != pbVar2) &&
           (uVar10 = (longlong)pbVar9 - (longlong)pbVar14, uVar10 != 0xffffffffffffffff)) {
          ppppuVar17 = &local_d8;
          if (0xf < local_c0) {
            ppppuVar17 = (undefined8 ****)local_d8;
          }
          if (uVar10 < local_c8) {
            lVar8 = local_c8 + (longlong)ppppuVar17;
            *(undefined8 *)(puVar16 + -8) = 0x18012b9e1;
            lVar11 = thunk_FUN_1802d5c20((longlong)ppppuVar17 + uVar10,lVar8,0x22);
            if ((lVar11 != lVar8) && (lVar11 - (longlong)ppppuVar17 != -1)) {
              uVar10 = (lVar11 - (longlong)ppppuVar17) + 1;
              ppppuVar17 = &local_d8;
              if (0xf < local_c0) {
                ppppuVar17 = (undefined8 ****)local_d8;
              }
              if (uVar10 < local_c8) {
                lVar8 = (longlong)ppppuVar17 + local_c8;
                *(undefined8 *)(puVar16 + -8) = 0x18012ba28;
                lVar11 = thunk_FUN_1802d5c20((longlong)ppppuVar17 + uVar10,lVar8,0x22);
                if ((lVar11 != lVar8) && (lVar11 = lVar11 - (longlong)ppppuVar17, lVar11 != -1)) {
                  uVar10 = lVar11 + 1;
                  ppppuVar17 = &local_d8;
                  if (0xf < local_c0) {
                    ppppuVar17 = (undefined8 ****)local_d8;
                  }
                  if (uVar10 < local_c8) {
                    lVar8 = local_c8 + (longlong)ppppuVar17;
                    *(undefined8 *)(puVar16 + -8) = 0x18012ba73;
                    lVar12 = thunk_FUN_1802d5c20((longlong)ppppuVar17 + uVar10,lVar8,0x22);
                    if (((lVar12 != lVar8) &&
                        (uVar13 = lVar12 - (longlong)ppppuVar17, uVar13 != 0xffffffffffffffff)) &&
                       (uVar10 < uVar13)) {
                      *(undefined8 *)(puVar16 + -8) = 0x18012baac;
                      FUN_18020e670(&local_d8,&local_b8,uVar10,(uVar13 - lVar11) + -1);
                      if (local_a8 - 1U < 0x9f) {
                        pbVar14 = (basic_streambuf<char,std::char_traits<char>_> *)&local_b8;
                        if (0xf < local_a0) {
                          pbVar14 = local_b8;
                        }
                        _Size = local_a8 + 1;
                        *(undefined8 *)(puVar16 + -8) = 0x18012bae6;
                        memcpy(param_4,pbVar14,_Size);
                        *(undefined8 *)(puVar16 + -8) = 0x18012baf3;
                        FUN_18020e450(&local_b8);
                        *(undefined8 *)(puVar16 + -8) = 0x18012bb00;
                        FUN_18020e450(&local_98);
                        *(undefined8 *)(puVar16 + -8) = 0x18012bb0a;
                        FUN_18020e450(&local_d8);
                        *(basic_ios<char,std::char_traits<char>_> **)(puVar16 + 0x40) = local_138;
                        *(undefined ***)
                         (puVar16 + (longlong)*(int *)(*(longlong *)(puVar16 + 0x50) + 4) + 0x50) =
                             vftable_std_std_D_DU__char_traits___basic_ifstream;
                        *(int *)(puVar16 +
                                (longlong)*(int *)(*(longlong *)(puVar16 + 0x50) + 4) + 0x4c) =
                             *(int *)(*(longlong *)(puVar16 + 0x50) + 4) + -0xb0;
                        *(undefined8 *)(puVar16 + -8) = 0x18012bb46;
                        FUN_18020f850(puVar16 + 0x60);
                        *(undefined8 *)(puVar16 + -8) = 0x18012bb52;
                        std::basic_istream<char,std::char_traits<char>_>::
                        ~basic_istream<char,std::char_traits<char>_>
                                  ((basic_istream<char,std::char_traits<char>_> *)(puVar16 + 0x68));
                        *(undefined8 *)(puVar16 + -8) = 0x18012bb5c;
                        std::basic_ios<char,std::char_traits<char>_>::
                        ~basic_ios<char,std::char_traits<char>_>(local_138);
                        goto LAB_18012bbff;
                      }
                      *(undefined8 *)(puVar16 + -8) = 0x18012bb6d;
                      FUN_18020e450(&local_b8);
                    }
                  }
                }
              }
            }
          }
        }
      }
      *(undefined8 *)(puVar16 + -8) = 0x18012bb7a;
      FUN_18020e450(&local_98);
      *(undefined8 *)(puVar16 + -8) = 0x18012bb84;
      FUN_18020e450(&local_d8);
    }
    *(basic_ios<char,std::char_traits<char>_> **)(puVar16 + 0x40) = local_138;
    *(undefined ***)(puVar16 + (longlong)*(int *)(*(longlong *)(puVar16 + 0x50) + 4) + 0x50) =
         vftable_std_std_D_DU__char_traits___basic_ifstream;
    *(int *)(puVar16 + (longlong)*(int *)(*(longlong *)(puVar16 + 0x50) + 4) + 0x4c) =
         *(int *)(*(longlong *)(puVar16 + 0x50) + 4) + -0xb0;
    *(undefined8 *)(puVar16 + -8) = 0x18012bbc0;
    FUN_18020f850(puVar16 + 0x60);
    *(undefined8 *)(puVar16 + -8) = 0x18012bbcc;
    std::basic_istream<char,std::char_traits<char>_>::~basic_istream<char,std::char_traits<char>_>
              ((basic_istream<char,std::char_traits<char>_> *)(puVar16 + 0x68));
    *(undefined8 *)(puVar16 + -8) = 0x18012bbd6;
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              (local_138);
    puVar4 = puVar16;
  }
  puVar16 = puVar4;
  if ((0 < param_3) && (param_3 < param_2)) {
    *(undefined8 *)(puVar16 + -8) = 0x18012bbfe;
    FUN_180012a60(param_4,0xa0,"center 0 0 scale 1 %d rotate 0 translate 0 0",
                  (longlong)param_2 / (longlong)param_3 & 0xffffffff);
  }
LAB_18012bbff:
  *(undefined8 *)(puVar16 + -8) = 0x18012bc0b;
  FUN_18021e290(local_78);
  *(undefined8 *)(puVar16 + -8) = 0x18012bc1a;
  return;
}


