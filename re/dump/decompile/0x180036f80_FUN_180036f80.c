// 0x180036f80  FUN_180036f80
// size=2308 thunk=false
// signature: undefined FUN_180036f80()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180036f80(undefined8 param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  size_t _Size;
  char *_Str;
  double dVar2;
  double dVar3;
  double dVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  char cVar7;
  DWORD DVar8;
  int iVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong lVar12;
  size_t sVar13;
  ulonglong *puVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  ulonglong *puVar17;
  undefined8 *puVar18;
  int iVar19;
  undefined *puVar20;
  uint uVar21;
  undefined1 auStack_208 [32];
  undefined1 local_1e8;
  undefined *local_1e0;
  undefined *local_1d8;
  uint local_1c8;
  int local_1c4;
  int local_1c0;
  int local_1bc;
  undefined8 *local_1b8;
  undefined8 local_1b0;
  undefined8 *local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  ulonglong local_188;
  ulonglong uStack_180;
  int local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  ulonglong *local_158;
  longlong local_150;
  ulonglong *local_148;
  undefined1 local_140 [8];
  char local_138;
  undefined1 local_130 [32];
  undefined1 local_110 [32];
  undefined1 local_f0 [32];
  LARGE_INTEGER local_d0;
  ulonglong local_c8;
  ulonglong uStack_c0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  int local_a8;
  undefined8 *local_a0;
  undefined8 *puStack_98;
  undefined8 local_90;
  LARGE_INTEGER local_88;
  LARGE_INTEGER local_80;
  ulonglong local_78;
  
  local_78 = DAT_1803da4c0 ^ (ulonglong)auStack_208;
  uVar21 = 0;
  local_1c8 = 0;
  if (DAT_1803fab40 == 0) {
    return;
  }
  local_1b0 = param_1;
  local_1a8 = param_2;
  if (((((DAT_1803faef0 != 0) && (DAT_1803fafa0 != 0)) && (DAT_1803faed8 != 0)) &&
      ((DAT_1803faff8 != 0 && (DAT_1803fb088 != (code *)0x0)))) &&
     ((DAT_1803faf10 != (code *)0x0 && (DAT_1803fb030 != (code *)0x0)))) {
    if (DAT_1803fe670 == 0) {
      QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_1803fe670);
    }
    QueryPerformanceCounter(&local_d0);
    dVar4 = DAT_180380ec0;
    dVar3 = 0.0;
    if (DAT_1803fe670 != 0) {
      dVar3 = ((double)CONCAT44(local_d0.s.HighPart,local_d0.s.LowPart) * DAT_180380ec0) /
              (double)DAT_1803fe670;
    }
    dVar3 = dVar3 + DAT_180380d08;
    iVar19 = 0;
    local_1c0 = 0;
    if (DAT_1803fa668 == (longlong *)0x0) {
      local_1bc = -1;
    }
    else {
      local_1bc = (**(code **)(*DAT_1803fa668 + 0x60))();
    }
    uVar6 = _UNK_1803814b8;
    uVar5 = _DAT_1803814b0;
    if ((DAT_1803fa608 == 0) || (local_1c4 = *(int *)(DAT_1803fa608 + 0x1c), local_1c4 < 1)) {
      local_1c4 = 0;
    }
    else if (0x80 < local_1c4) {
      local_1c4 = 0x80;
    }
    while( true ) {
      if (DAT_1803fe670 == 0) {
        QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_1803fe670);
      }
      QueryPerformanceCounter(&local_88);
      puVar14 = DAT_1803fab50;
      dVar2 = 0.0;
      if (DAT_1803fe670 != 0) {
        dVar2 = ((double)local_88.QuadPart * dVar4) / (double)DAT_1803fe670;
      }
      if (dVar3 <= dVar2) {
        return;
      }
      if (0x27 < iVar19) {
        return;
      }
      if (DAT_1803fab40 == 1) {
        if ((DAT_1803fab48 == DAT_1803fab50) || (3999 < DAT_1803fac30)) goto LAB_180037832;
        puVar17 = DAT_1803fab50 + -5;
        if ((undefined8 **)puVar17 != &DAT_1803fab60) {
          if (0xf < DAT_1803fab50[-2]) {
            puVar17 = (ulonglong *)*puVar17;
          }
          FUN_180212700(&DAT_1803fab60,puVar17,DAT_1803fab50[-3]);
        }
        DAT_1803fab80 = (int)puVar14[-1];
        local_158 = DAT_1803fab50 + -5;
        FUN_18020e450();
        DAT_1803fab50 = DAT_1803fab50 + -5;
        DAT_1803fac30 = DAT_1803fac30 + 1;
        DAT_1803fab88 = '\0';
        DAT_1803fab8c = 1;
        DAT_1803fabd0 = 0;
        uStack_190 = 0;
        local_188 = uVar5;
        uStack_180 = uVar6;
        local_198 = 0;
        local_178 = 0;
        local_170 = 0;
        local_168 = 0;
        uStack_160 = 0;
        DAT_180423748 = DAT_1803fac30;
        FUN_18020e8a0(&DAT_1803fab90,&local_198);
        DAT_1803fabb0 = local_178;
        FUN_18020d830(&DAT_1803fabb8,&local_170);
        FUN_18020d5c0(&local_170);
        FUN_18020e450(&local_198);
        puVar18 = &DAT_1803fab60;
        if (0xf < DAT_1803fab78) {
          puVar18 = DAT_1803fab60;
        }
        FUN_180212700(&DAT_1803fab90,puVar18,DAT_1803fab70);
        DAT_1803fab40 = 2;
      }
      if (param_2 == (undefined8 *)0x0) {
        DVar8 = 0;
      }
      else if ((DAT_1803fb088 == (code *)0x0) || (param_2[1] == 0)) {
        DVar8 = (**(code **)*param_2)(param_2);
      }
      else {
        DVar8 = (*DAT_1803fb088)();
      }
      local_d0.s.LowPart = DVar8;
      if ((DAT_1803fb038 != (code *)0x0) && (iVar9 = (*DAT_1803fb038)(param_1,8), iVar9 == 0))
      break;
      cVar7 = FUN_180036280(param_1,&DAT_1803fab60);
      if (cVar7 == '\0') {
        (*DAT_1803faf10)(param_1,DVar8);
        DAT_1803fab40 = 1;
        local_1c0 = iVar19 + 1;
        iVar19 = local_1c0;
      }
      else {
        if (param_2 == (undefined8 *)0x0) {
          uVar10 = 0;
        }
        else if ((DAT_1803fb088 == (code *)0x0) || (param_2[1] == 0)) {
          uVar10 = (**(code **)*param_2)(param_2);
        }
        else {
          uVar10 = (*DAT_1803fb088)();
        }
        if (DAT_1803fab88 == '\0') {
          DAT_1803fab88 = '\x01';
          local_1b8 = (undefined8 *)(*DAT_1803fb030)(param_1,uVar10);
          if ((local_1b8 == (undefined8 *)0x0) ||
             (FUN_180218810(&DAT_1803fabd8,local_140,&local_1b8), local_138 != '\0'))
          goto LAB_1800373af;
          (*DAT_1803faf10)(param_1,DVar8);
          DAT_1803fab40 = 1;
          local_1c0 = iVar19 + 1;
          iVar19 = local_1c0;
        }
        else {
LAB_1800373af:
          if (DAT_1803fab40 == 2) {
            iVar9 = DAT_1803fab8c;
            if (DAT_1803fab8c <= local_1c4) {
              do {
                if (DAT_1803fe670 == 0) {
                  QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_1803fe670);
                }
                QueryPerformanceCounter(&local_80);
                dVar2 = 0.0;
                if (DAT_1803fe670 != 0) {
                  dVar2 = ((double)local_80.QuadPart * dVar4) / (double)DAT_1803fe670;
                }
                if (dVar3 <= dVar2) {
                  DAT_1803fab8c = iVar9;
                  (*DAT_1803faf10)(param_1,DVar8);
                  return;
                }
                if ((DAT_1803fa360 != (longlong *)0x0) &&
                   (lVar11 = (**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,iVar9), lVar11 != 0)
                   ) {
                  local_1e8 = iVar9 == local_1bc;
                  local_1d8 = &DAT_1803fabd0;
                  local_1e0 = &DAT_1803fab90;
                  cVar7 = FUN_180036430(param_1,param_2,uVar10,iVar9);
                  if (cVar7 != '\0') {
                    DAT_1803fabb0 = DAT_1803fabb0 + 1;
                  }
                }
                iVar9 = iVar9 + 1;
              } while (iVar9 <= local_1c4);
            }
            (*DAT_1803faf10)(param_1,DVar8);
            lVar11 = DAT_1803fac20;
            if (0 < DAT_1803fabb0) {
              if (DAT_1803fac20 == DAT_1803fac28) {
                FUN_180228de0(&DAT_1803fac18,DAT_1803fac20,&DAT_1803fab90);
              }
              else {
                local_150 = DAT_1803fac20;
                FUN_18016d4c0(DAT_1803fac20,&DAT_1803fab90);
                *(int *)(lVar11 + 0x20) = DAT_1803fabb0;
                FUN_18020d910(lVar11 + 0x28,&DAT_1803fabb8);
                DAT_1803fac20 = DAT_1803fac20 + 0x40;
              }
            }
            DAT_1803fab40 = 3;
          }
          else if (DAT_1803fab40 == 3) {
            if (DAT_1803fab80 < 3) {
              local_a0 = (undefined8 *)0x0;
              puStack_98 = (undefined8 *)0x0;
              local_90 = 0;
              FUN_180034850(param_1,uVar10,&local_a0,0x200);
              local_1b8 = puStack_98;
              puVar18 = local_a0;
              puVar20 = PTR_DAT_180339330;
              if (local_a0 != puStack_98) {
                do {
                  lVar11 = puVar18[2];
                  if (lVar11 != 0) {
                    puVar16 = puVar18;
                    if (0xf < (ulonglong)puVar18[3]) {
                      puVar16 = (undefined8 *)*puVar18;
                    }
                    if (((lVar11 == 0) ||
                        (lVar12 = thunk_FUN_1802d5c20(puVar16,(longlong)puVar16 + lVar11,0x2e),
                        puVar20 = PTR_DAT_180339330, lVar12 == (longlong)puVar16 + lVar11)) ||
                       (lVar12 - (longlong)puVar16 == -1)) {
                      if ((DAT_1803fab80 == 0) && (puVar20 != (undefined *)0x0)) {
                        iVar19 = 0;
                        uVar1 = puVar18[3];
                        _Size = puVar18[2];
                        do {
                          _Str = (&PTR_DAT_180339330)[iVar19];
                          sVar13 = strlen(_Str);
                          puVar16 = puVar18;
                          if (0xf < uVar1) {
                            puVar16 = (undefined8 *)*puVar18;
                          }
                          if ((_Size == sVar13) &&
                             ((_Size == 0 || (iVar9 = memcmp(puVar16,_Str,_Size), iVar9 == 0))))
                          goto LAB_1800377b5;
                          iVar19 = iVar19 + 1;
                        } while ((&PTR_DAT_180339330)[iVar19] != (undefined *)0x0);
                      }
                      param_1 = local_1b0;
                      param_2 = local_1a8;
                      iVar19 = local_1c0;
                      if (4000 < (int)((longlong)DAT_1803fab50 - (longlong)DAT_1803fab48 >> 3) *
                                 -0x33333333) break;
                      uStack_c0 = 0;
                      local_b8 = uVar5;
                      uStack_b0 = uVar6;
                      local_c8 = 0;
                      local_a8 = 0;
                      if (DAT_1803fab70 == 0) {
                        puVar14 = (ulonglong *)FUN_18016d4c0(local_f0,puVar18);
                        uVar21 = uVar21 | 1;
                      }
                      else {
                        uVar15 = FUN_18002cfb0(local_110,&DAT_1803fab60,&DAT_18033ea54);
                        local_1c8 = uVar21 | 2;
                        puVar14 = (ulonglong *)FUN_1801fc800(local_130,uVar15,puVar18);
                        uVar21 = uVar21 | 6;
                      }
                      local_1c8 = uVar21;
                      if (&local_c8 != puVar14) {
                        puVar17 = puVar14 + 2;
                        if (0xf < puVar14[3]) {
                          puVar14 = (ulonglong *)*puVar14;
                        }
                        FUN_180212700(&local_c8,puVar14,*puVar17);
                      }
                      if ((uVar21 & 4) != 0) {
                        uVar21 = uVar21 & 0xfffffffb;
                        local_1c8 = uVar21;
                        FUN_18020e450(local_130);
                      }
                      if ((uVar21 & 2) != 0) {
                        uVar21 = uVar21 & 0xfffffffd;
                        local_1c8 = uVar21;
                        FUN_18020e450(local_110);
                      }
                      if ((uVar21 & 1) != 0) {
                        uVar21 = uVar21 & 0xfffffffe;
                        local_1c8 = uVar21;
                        FUN_18020e450(local_f0);
                      }
                      puVar14 = DAT_1803fab50;
                      local_a8 = DAT_1803fab80 + 1;
                      if (DAT_1803fab50 == DAT_1803fab58) {
                        FUN_1802285d0(&DAT_1803fab48,DAT_1803fab50,&local_c8);
                      }
                      else {
                        local_148 = DAT_1803fab50;
                        *DAT_1803fab50 = local_c8;
                        puVar14[1] = uStack_c0;
                        puVar14[2] = local_b8;
                        puVar14[3] = uStack_b0;
                        local_b8 = uVar5;
                        uStack_b0 = uVar6;
                        local_c8 = local_c8 & 0xffffffffffffff00;
                        *(int *)(puVar14 + 4) = local_a8;
                        DAT_1803fab50 = DAT_1803fab50 + 5;
                      }
                      FUN_18020e450(&local_c8);
                      puVar20 = PTR_DAT_180339330;
                    }
                  }
LAB_1800377b5:
                  puVar18 = puVar18 + 4;
                  param_1 = local_1b0;
                  param_2 = local_1a8;
                  iVar19 = local_1c0;
                } while (puVar18 != local_1b8);
              }
              FUN_18020d5c0(&local_a0);
            }
            (*DAT_1803faf10)(param_1,local_d0.s.LowPart);
            local_1c0 = iVar19 + 1;
            DAT_1803fab40 = 1;
            iVar19 = local_1c0;
          }
          else {
            (*DAT_1803faf10)(param_1,DVar8);
            DAT_1803fab40 = 1;
          }
        }
      }
    }
    (*DAT_1803faf10)(param_1,DVar8);
    FUN_180014410("[TRAMP] _G scan aborted: lua_checkstack refused\n");
  }
LAB_180037832:
  FUN_180036640();
  return;
}


