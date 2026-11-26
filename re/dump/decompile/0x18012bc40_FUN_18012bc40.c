// 0x18012bc40  FUN_18012bc40
// size=2733 thunk=false
// signature: undefined FUN_18012bc40()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18012bc40(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  basic_streambuf<char,std::char_traits<char>_> *this;
  byte bVar3;
  longlong lVar4;
  undefined2 uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  char cVar13;
  wint_t wVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  undefined8 uVar18;
  longlong lVar19;
  longlong lVar20;
  undefined8 ****ppppuVar21;
  undefined1 uVar22;
  basic_streambuf<char,std::char_traits<char>_> *pbVar23;
  longlong *plVar24;
  longlong *plVar25;
  longlong *plVar26;
  undefined1 auStack_368 [48];
  undefined4 local_338;
  int local_334;
  basic_streambuf<char,std::char_traits<char>_> *local_328;
  undefined8 uStack_320;
  basic_streambuf<char,std::char_traits<char>_> **local_318;
  basic_streambuf<char,std::char_traits<char>_> *local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  ulonglong local_2f8;
  basic_ios<char,std::char_traits<char>_> *local_2f0;
  int local_2e8 [2];
  int local_2e0;
  basic_streambuf<char,std::char_traits<char>_> *local_2d8;
  undefined8 uStack_2d0;
  longlong *local_2c8;
  ulonglong local_2c0;
  basic_streambuf<char,std::char_traits<char>_> *local_2b8;
  longlong *plStack_2b0;
  undefined8 local_2a8;
  undefined2 local_2a0;
  undefined4 local_29e;
  undefined2 local_29a;
  basic_streambuf<char,std::char_traits<char>_> *local_298;
  longlong *plStack_290;
  longlong local_288;
  longlong *plStack_280;
  basic_streambuf<char,std::char_traits<char>_> *local_278;
  longlong *plStack_270;
  longlong local_268;
  longlong *plStack_260;
  basic_streambuf<char,std::char_traits<char>_> *local_258;
  longlong *plStack_250;
  undefined1 local_248 [32];
  undefined1 local_228 [32];
  undefined8 ***local_208 [2];
  ulonglong local_1f8;
  ulonglong local_1f0;
  undefined8 ***local_1e8;
  undefined8 uStack_1e0;
  ulonglong local_1d8;
  ulonglong local_1d0;
  longlong local_1c8;
  longlong *plStack_1c0;
  longlong local_1b8;
  longlong *plStack_1b0;
  undefined1 local_1a8 [32];
  undefined1 local_188 [28];
  int iStack_16c;
  longlong local_168 [2];
  undefined1 local_158 [8];
  basic_istream<char,std::char_traits<char>_> local_150 [48];
  undefined8 auStack_120 [13];
  basic_ios<char,std::char_traits<char>_> local_b8 [96];
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_368;
  local_338 = 0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    local_334 = 0;
    local_2f0 = (basic_ios<char,std::char_traits<char>_> *)&local_310;
    local_310 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
    uStack_308 = 0;
    local_300 = 0;
    local_2f8 = 0;
    FUN_180211510(&local_310,L"materials",9);
    local_338 = 0;
    FUN_180066720(local_1a8,param_1,&local_310);
    FUN_18021e290(&local_310);
    puVar17 = (uint *)FUN_180067c80(local_2e8,local_1a8);
    if (1 < *puVar17) {
      local_258 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
      plStack_250 = (longlong *)0x0;
      iVar15 = FUN_180201e70(&local_258,local_1a8,0);
      plVar24 = plStack_250;
      local_298 = local_258;
      local_2f0 = (basic_ios<char,std::char_traits<char>_> *)CONCAT44(local_2f0._4_4_,iVar15);
      local_1c8 = 0;
      plStack_1c0 = (longlong *)0x0;
      local_318 = &local_328;
      if (plStack_250 == (longlong *)0x0) {
        plVar25 = (longlong *)0x8;
      }
      else {
        plVar25 = plStack_250 + 1;
        LOCK();
        *(int *)plVar25 = (int)*plVar25 + 1;
        UNLOCK();
      }
      local_328 = local_258;
      uStack_320 = plStack_250;
      FUN_180067810(&local_1c8,&local_328);
      local_288 = 0;
      plStack_280 = (longlong *)0x0;
      local_318 = &local_298;
      if (plVar24 != (longlong *)0x0) {
        LOCK();
        *(int *)plVar25 = (int)*plVar25 + 1;
        UNLOCK();
      }
      plStack_290 = plVar24;
      FUN_1800678f0(&local_288,&local_298);
      if (local_1c8 != local_288) {
        do {
          lVar4 = local_1c8;
          if (((iVar15 == 0) && (FUN_180067150(local_1c8,local_2e8), local_2e8[0] == 2)) &&
             (local_2e0 == 0)) {
            local_318 = &local_2d8;
            local_2d8 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
            uStack_2d0 = 0;
            local_2c8 = (longlong *)0x0;
            local_2c0 = 0;
            FUN_180211510(&local_2d8,L".vtf",4);
            local_338 = 0;
            plVar26 = (longlong *)(lVar4 + 0x20);
            uVar18 = FUN_180066000(plVar26,&local_310);
            local_2b8 = (basic_streambuf<char,std::char_traits<char>_> *)&local_2d8;
            if (7 < local_2c0) {
              local_2b8 = local_2d8;
            }
            plStack_2b0 = local_2c8;
            iVar15 = FUN_180065970(uVar18,&local_2b8);
            FUN_18021e290(&local_310);
            FUN_18021e290(&local_2d8);
            if (iVar15 == 0) {
              uVar18 = FUN_180065ec0(plVar26,local_248);
              FUN_180065930(uVar18,local_208);
              FUN_18021e290(local_248);
              if (9 < local_1f8) {
                ppppuVar21 = local_208;
                if (7 < local_1f0) {
                  ppppuVar21 = (undefined8 ****)local_208[0];
                }
                iVar15 = FUN_180012bf0(ppppuVar21,&DAT_18035897c,2);
                if (iVar15 == 0) {
                  ppppuVar21 = local_208;
                  if (7 < local_1f0) {
                    ppppuVar21 = (undefined8 ****)local_208[0];
                  }
                  wVar14 = towlower(*(wint_t *)((longlong)ppppuVar21 + 4));
                  if (((ushort)(wVar14 - 0x30) < 10) || (bVar3 = 0, (ushort)(wVar14 - 0x61) < 6)) {
                    bVar3 = 1;
                  }
                  ppppuVar21 = local_208;
                  if (7 < local_1f0) {
                    ppppuVar21 = (undefined8 ****)local_208[0];
                  }
                  wVar14 = towlower(*(wint_t *)((longlong)ppppuVar21 + 6));
                  if (((ushort)(wVar14 - 0x30) < 10) || ((ushort)(wVar14 - 0x61) < 6)) {
                    bVar6 = 1;
                  }
                  else {
                    bVar6 = 0;
                  }
                  ppppuVar21 = local_208;
                  if (7 < local_1f0) {
                    ppppuVar21 = (undefined8 ****)local_208[0];
                  }
                  wVar14 = towlower(*(wint_t *)(ppppuVar21 + 1));
                  if (((ushort)(wVar14 - 0x30) < 10) || ((ushort)(wVar14 - 0x61) < 6)) {
                    bVar7 = 1;
                  }
                  else {
                    bVar7 = 0;
                  }
                  ppppuVar21 = local_208;
                  if (7 < local_1f0) {
                    ppppuVar21 = (undefined8 ****)local_208[0];
                  }
                  wVar14 = towlower(*(wint_t *)((longlong)ppppuVar21 + 10));
                  if (((ushort)(wVar14 - 0x30) < 10) || ((ushort)(wVar14 - 0x61) < 6)) {
                    bVar8 = 1;
                  }
                  else {
                    bVar8 = 0;
                  }
                  ppppuVar21 = local_208;
                  if (7 < local_1f0) {
                    ppppuVar21 = (undefined8 ****)local_208[0];
                  }
                  wVar14 = towlower(*(wint_t *)((longlong)ppppuVar21 + 0xc));
                  if (((ushort)(wVar14 - 0x30) < 10) || ((ushort)(wVar14 - 0x61) < 6)) {
                    bVar9 = 1;
                  }
                  else {
                    bVar9 = 0;
                  }
                  ppppuVar21 = local_208;
                  if (7 < local_1f0) {
                    ppppuVar21 = (undefined8 ****)local_208[0];
                  }
                  wVar14 = towlower(*(wint_t *)((longlong)ppppuVar21 + 0xe));
                  if (((ushort)(wVar14 - 0x30) < 10) || ((ushort)(wVar14 - 0x61) < 6)) {
                    bVar10 = 1;
                  }
                  else {
                    bVar10 = 0;
                  }
                  ppppuVar21 = local_208;
                  if (7 < local_1f0) {
                    ppppuVar21 = (undefined8 ****)local_208[0];
                  }
                  wVar14 = towlower(*(wint_t *)(ppppuVar21 + 2));
                  if (((ushort)(wVar14 - 0x30) < 10) || ((ushort)(wVar14 - 0x61) < 6)) {
                    bVar11 = 1;
                  }
                  else {
                    bVar11 = 0;
                  }
                  ppppuVar21 = local_208;
                  if (7 < local_1f0) {
                    ppppuVar21 = (undefined8 ****)local_208[0];
                  }
                  wVar14 = towlower(*(wint_t *)((longlong)ppppuVar21 + 0x12));
                  if (((ushort)(wVar14 - 0x30) < 10) || ((ushort)(wVar14 - 0x61) < 6)) {
                    bVar12 = 1;
                  }
                  else {
                    bVar12 = 0;
                  }
                  if ((bool)(bVar3 & bVar6 & bVar7 & bVar8 & bVar9 & bVar10 & bVar11 & bVar12)) {
                    if (7 < *(ulonglong *)(lVar4 + 0x38)) {
                      plVar26 = (longlong *)*plVar26;
                    }
                    cVar13 = FUN_1802d7d9c(plVar26);
                    if (cVar13 != '\0') {
                      local_334 = local_334 + 1;
                    }
                  }
                }
              }
              FUN_18021e290(local_208);
            }
            iVar15 = (int)local_2f0;
          }
          FUN_180067700(&local_1c8);
        } while (local_1c8 != local_288);
      }
      plVar26 = plStack_280;
      if (plStack_280 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_280 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_280)(plStack_280);
          LOCK();
          piVar2 = (int *)((longlong)plVar26 + 0xc);
          iVar15 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*plVar26 + 8))(plVar26);
          }
        }
      }
      plVar26 = plStack_1c0;
      if (plStack_1c0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_1c0 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_1c0)(plStack_1c0);
          LOCK();
          piVar2 = (int *)((longlong)plVar26 + 0xc);
          iVar15 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*plVar26 + 8))(plVar26);
          }
        }
      }
      if (plVar24 != (longlong *)0x0) {
        LOCK();
        lVar4 = *plVar25;
        *(int *)plVar25 = (int)*plVar25 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar24)(plVar24);
          LOCK();
          piVar2 = (int *)((longlong)plVar24 + 0xc);
          iVar15 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*plVar24 + 8))(plVar24);
          }
        }
      }
    }
    plVar24 = (longlong *)0x8;
    local_318 = &local_310;
    local_310 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
    uStack_308 = 0;
    local_300 = 0;
    local_2f8 = 0;
    FUN_180211510(&local_310,L"skybox",6);
    local_338 = 0;
    FUN_180066720(local_188,local_1a8,&local_310);
    FUN_18021e290(&local_310);
    puVar17 = (uint *)FUN_180067c80(local_2e8,local_188);
    if (1 < *puVar17) {
      local_2b8 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
      plStack_2b0 = (longlong *)0x0;
      iVar15 = FUN_180201e70(&local_2b8,local_188,0);
      plVar25 = plStack_2b0;
      local_278 = local_2b8;
      local_1b8 = 0;
      plStack_1b0 = (longlong *)0x0;
      local_318 = &local_328;
      if (plStack_2b0 != (longlong *)0x0) {
        plVar24 = plStack_2b0 + 1;
        LOCK();
        *(int *)plVar24 = (int)*plVar24 + 1;
        UNLOCK();
      }
      local_328 = local_2b8;
      uStack_320 = plStack_2b0;
      FUN_180067810(&local_1b8,&local_328);
      local_268 = 0;
      plStack_260 = (longlong *)0x0;
      local_318 = &local_278;
      if (plVar25 != (longlong *)0x0) {
        LOCK();
        *(int *)plVar24 = (int)*plVar24 + 1;
        UNLOCK();
      }
      plStack_270 = plVar25;
      FUN_1800678f0(&local_268,&local_278);
      if (local_1b8 != local_268) {
        uVar5 = uStack_2d0._6_2_;
        do {
          lVar4 = local_1b8;
          if (((iVar15 == 0) && (FUN_180067150(local_1b8,local_2e8), local_2e8[0] == 2)) &&
             (local_2e0 == 0)) {
            local_318 = &local_310;
            local_310 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
            uStack_308 = 0;
            pbVar23 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
            local_300 = 0;
            local_2f8 = 0;
            FUN_180211510(&local_310,L".vmt",4);
            local_338 = 0;
            plVar24 = (longlong *)(lVar4 + 0x20);
            uVar18 = FUN_180066000(plVar24,local_228);
            local_2d8 = (basic_streambuf<char,std::char_traits<char>_> *)&local_310;
            if (7 < local_2f8) {
              local_2d8 = local_310;
            }
            uStack_2d0 = local_300;
            iVar16 = FUN_180065970(uVar18);
            FUN_18021e290(local_228);
            FUN_18021e290(&local_310);
            if (iVar16 == 0) {
              memset(local_168,0,0x110);
              FUN_180202040(local_168,plVar24,0x20);
              this = *(basic_streambuf<char,std::char_traits<char>_> **)
                      ((longlong)auStack_120 + (longlong)*(int *)(local_168[0] + 4));
              local_1e8 = (undefined8 ****)0x0;
              uStack_1e0 = 0;
              local_1d8 = 0;
              local_1d0 = 0;
              if (this == (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
LAB_18012c44b:
                local_1d8 = 0;
                local_1d0 = 0xf;
                local_1e8 = (undefined8 ***)((ulonglong)local_1e8 & 0xffffffffffffff00);
              }
              else {
                iVar16 = std::basic_streambuf<char,std::char_traits<char>_>::sgetc(this);
                uVar22 = 0;
                if (iVar16 != -1) {
                  uVar22 = (undefined1)iVar16;
                  pbVar23 = this;
                }
                if (pbVar23 == (basic_streambuf<char,std::char_traits<char>_> *)0x0)
                goto LAB_18012c44b;
                local_2a8 = 0;
                local_2a0 = 1;
                local_29e = uStack_2d0._2_4_;
                local_29a = uVar5;
                uStack_320 = (longlong *)
                             CONCAT26(uStack_2d0._6_2_,CONCAT42(uStack_2d0._2_4_,CONCAT11(uVar22,1))
                                     );
                local_328 = pbVar23;
                FUN_1802117c0(&local_1e8,&local_328,&local_2a8);
              }
              if (local_1d8 < 0x200) {
                ppppuVar21 = &local_1e8;
                if (0xf < local_1d0) {
                  ppppuVar21 = (undefined8 ****)local_1e8;
                }
                if (((4 < local_1d8) &&
                    (lVar20 = (longlong)ppppuVar21 + local_1d8,
                    lVar19 = thunk_FUN_1802d6b60(ppppuVar21,lVar20,"\"sky\"",5), lVar19 != lVar20))
                   && (lVar19 - (longlong)ppppuVar21 != -1)) {
                  ppppuVar21 = &local_1e8;
                  if (0xf < local_1d0) {
                    ppppuVar21 = (undefined8 ****)local_1e8;
                  }
                  if (((0x11 < local_1d8) &&
                      (lVar20 = local_1d8 + (longlong)ppppuVar21,
                      lVar19 = thunk_FUN_1802d6b60(ppppuVar21,lVar20,"\"$basetexture\" \"sk",0x12),
                      lVar19 != lVar20)) && (lVar19 - (longlong)ppppuVar21 != -1)) {
                    lVar20 = FUN_18021ea30(local_158);
                    if (lVar20 == 0) {
                      std::basic_ios<char,std::char_traits<char>_>::setstate
                                ((basic_ios<char,std::char_traits<char>_> *)
                                 ((longlong)local_168 + (longlong)*(int *)(local_168[0] + 4)),2,
                                 false);
                    }
                    if (7 < *(ulonglong *)(lVar4 + 0x38)) {
                      plVar24 = (longlong *)*plVar24;
                    }
                    cVar13 = FUN_1802d7d9c(plVar24);
                    if (cVar13 != '\0') {
                      local_334 = local_334 + 1;
                    }
                  }
                }
              }
              FUN_18020e450(&local_1e8);
              local_2f0 = local_b8;
              *(undefined ***)((longlong)local_168 + (longlong)*(int *)(local_168[0] + 4)) =
                   vftable_std_std_D_DU__char_traits___basic_ifstream;
              *(int *)((longlong)&iStack_16c + (longlong)*(int *)(local_168[0] + 4)) =
                   *(int *)(local_168[0] + 4) + -0xb0;
              FUN_18020f850(local_158);
              std::basic_istream<char,std::char_traits<char>_>::
              ~basic_istream<char,std::char_traits<char>_>(local_150);
              std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
                        (local_b8);
            }
          }
          FUN_180067700(&local_1b8);
          plVar25 = plStack_2b0;
        } while (local_1b8 != local_268);
      }
      plVar24 = plStack_260;
      if (plStack_260 != (longlong *)0x0) {
        LOCK();
        plVar26 = plStack_260 + 1;
        lVar4 = *plVar26;
        *(int *)plVar26 = (int)*plVar26 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_260)(plStack_260);
          LOCK();
          piVar2 = (int *)((longlong)plVar24 + 0xc);
          iVar15 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*plVar24 + 8))(plVar24);
          }
        }
      }
      plVar24 = plStack_1b0;
      if (plStack_1b0 != (longlong *)0x0) {
        LOCK();
        plVar26 = plStack_1b0 + 1;
        lVar4 = *plVar26;
        *(int *)plVar26 = (int)*plVar26 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_1b0)(plStack_1b0);
          LOCK();
          piVar2 = (int *)((longlong)plVar24 + 0xc);
          iVar15 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*plVar24 + 8))(plVar24);
          }
        }
      }
      if (plVar25 != (longlong *)0x0) {
        LOCK();
        plVar24 = plVar25 + 1;
        lVar4 = *plVar24;
        *(int *)plVar24 = (int)*plVar24 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar25)(plVar25);
          LOCK();
          piVar2 = (int *)((longlong)plVar25 + 0xc);
          iVar15 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*plVar25 + 8))(plVar25);
          }
        }
      }
    }
    if (local_334 != 0) {
      FUN_180014410("[SKY] SweepLeftovers: removed %d stale file(s)\n",local_334);
    }
    FUN_18021e290(local_188);
    FUN_18021e290(local_1a8);
  }
  return;
}


