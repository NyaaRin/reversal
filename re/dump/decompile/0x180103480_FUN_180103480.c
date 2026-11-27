// 0x180103480  FUN_180103480
// size=1907 thunk=false
// signature: undefined FUN_180103480()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180103480(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  size_t sVar3;
  size_t _Size;
  code *pcVar4;
  undefined8 *puVar5;
  int iVar6;
  DWORD DVar7;
  undefined8 uVar8;
  char *pcVar9;
  longlong lVar10;
  undefined8 *_Buf1;
  undefined8 *puVar11;
  undefined8 **ppuVar12;
  undefined8 *puVar13;
  uint uVar14;
  int iVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  int iVar18;
  ulonglong uVar19;
  undefined8 *unaff_RDI;
  undefined8 *puVar20;
  longlong *plVar21;
  undefined8 *puVar22;
  undefined1 auStack_218 [32];
  int local_1f8;
  undefined8 local_1f0;
  char *local_1e8;
  undefined8 *local_1e0;
  undefined8 *local_1d8;
  char local_1c8;
  int local_1c4;
  uint local_1c0;
  int local_1bc;
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  undefined *local_1a0;
  undefined *local_198;
  undefined8 *local_190;
  undefined8 *puStack_188;
  undefined8 local_180;
  undefined1 local_178 [320];
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_218;
  local_1c8 = 0;
  local_1b8 = param_1;
  local_1b0 = param_1;
  local_1a8 = param_1;
  uVar8 = FUN_180241610(&DAT_1803fadf0,0x93fd561a96ab0c67);
  uVar8 = FUN_180241610(uVar8,0xf25e6b861d4180c9);
  pcVar9 = (char *)FUN_1801fcfc0(uVar8);
  local_1c8 = *pcVar9;
  if (local_1c8 == *(char *)(param_1 + 0x1944)) {
    if (local_1c8 == '\0') {
      return;
    }
LAB_180103705:
    unaff_RDI = &DAT_1803fd370;
    DVar7 = GetTickCount();
    if (DVar7 < *(uint *)(param_1 + 0x193c)) {
      return;
    }
    *(DWORD *)(param_1 + 0x193c) = DVar7 + 0xfa;
    if ((DVar7 < *(uint *)(param_1 + 0x1940)) ||
       (*(DWORD *)(param_1 + 0x1940) = DVar7 + 15000, DAT_1803fe378 < 1)) goto LAB_1801038b2;
    local_198 = &DAT_1803da640;
    iVar6 = _Mtx_lock(&DAT_1803da640);
    if (iVar6 != 0) {
LAB_180103761:
      std::_Throw_Cpp_error(5);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (DAT_1803da68c == 0x7fffffff) goto LAB_18010377a;
  }
  else {
    *(char *)(param_1 + 0x1944) = local_1c8;
    DAT_1803fd35c = local_1c8;
    if (local_1c8 == '\0') {
      FUN_180014410("[NWCAP] wire probe OFF\n");
      return;
    }
    local_1a0 = &DAT_1803da640;
    iVar6 = _Mtx_lock(&DAT_1803da640);
    if (iVar6 != 0) goto LAB_180103761;
    if (DAT_1803da68c != 0x7fffffff) {
      FUN_18021d150();
      lVar10 = 0;
      do {
        (&DAT_1803fd370)[lVar10 * 2] = 0;
        *(undefined8 *)(&DAT_1803fd378 + lVar10 * 4) = 0;
        plVar16 = DAT_1805c7c50;
        lVar10 = lVar10 + 1;
      } while (lVar10 != 0x100);
      cVar1 = *(char *)(DAT_1805c7c50[1] + 0x19);
      plVar21 = (longlong *)DAT_1805c7c50[1];
      while (cVar1 == '\0') {
        FUN_180217f70(&DAT_1805c7c50,&DAT_1805c7c50,plVar21[2]);
        plVar2 = (longlong *)*plVar21;
        free(plVar21);
        plVar21 = plVar2;
        cVar1 = *(char *)((longlong)plVar2 + 0x19);
      }
      plVar16[1] = (longlong)plVar16;
      *plVar16 = (longlong)plVar16;
      plVar16[2] = (longlong)plVar16;
      DAT_1805c7c58 = 0;
      DAT_1803fe390 = 0;
      DAT_1803fe380 = 0;
      DAT_1803fe388 = 0;
      DAT_1803fe38c = 0;
      DAT_1803fd360 = 0;
      DAT_1803fe378 = 0;
      _Mtx_unlock(&DAT_1803da640);
      *(undefined8 *)(param_1 + 0x1838) = 0;
      *(undefined8 *)(param_1 + 0x1840) = 0;
      *(undefined8 *)(param_1 + 0x1848) = 0;
      *(undefined8 *)(param_1 + 0x1850) = 0;
      *(undefined8 *)(param_1 + 0x1858) = 0;
      *(undefined8 *)(param_1 + 0x1860) = 0;
      *(undefined8 *)(param_1 + 0x1868) = 0;
      *(undefined8 *)(param_1 + 0x1870) = 0;
      *(undefined8 *)(param_1 + 0x1878) = 0;
      *(undefined8 *)(param_1 + 0x1880) = 0;
      *(undefined8 *)(param_1 + 0x1888) = 0;
      *(undefined8 *)(param_1 + 0x1890) = 0;
      *(undefined8 *)(param_1 + 0x1898) = 0;
      *(undefined8 *)(param_1 + 0x18a0) = 0;
      *(undefined8 *)(param_1 + 0x18a8) = 0;
      *(undefined8 *)(param_1 + 0x18b0) = 0;
      *(undefined1 *)(param_1 + 0x18b8) = 0;
      *(undefined8 *)(param_1 + 0x18b9) = 0;
      *(undefined8 *)(param_1 + 0x18c1) = 0;
      *(undefined8 *)(param_1 + 0x18c9) = 0;
      *(undefined8 *)(param_1 + 0x18d1) = 0;
      *(undefined8 *)(param_1 + 0x18d9) = 0;
      *(undefined8 *)(param_1 + 0x18e1) = 0;
      *(undefined8 *)(param_1 + 0x18e9) = 0;
      *(undefined8 *)(param_1 + 0x18f1) = 0;
      *(undefined8 *)(param_1 + 0x18f9) = 0;
      *(undefined8 *)(param_1 + 0x1901) = 0;
      *(undefined8 *)(param_1 + 0x1909) = 0;
      *(undefined8 *)(param_1 + 0x1911) = 0;
      *(undefined8 *)(param_1 + 0x1919) = 0;
      *(undefined8 *)(param_1 + 0x1921) = 0;
      *(undefined8 *)(param_1 + 0x1929) = 0;
      *(undefined8 *)(param_1 + 0x1931) = 0;
      *(undefined1 *)(param_1 + 0x1939) = 0;
      FUN_180014410(&DAT_18034fbd8);
      goto LAB_180103705;
    }
LAB_18010377a:
    DAT_1803da68c = DAT_1803da68c + -1;
    std::_Throw_Cpp_error(6);
  }
  FUN_180014410("[NWCAP] census: %llu message(s)\n",DAT_1803fe380);
  uVar19 = 0;
  do {
    if (unaff_RDI[uVar19 * 2] != 0) {
      local_1f0 = (undefined8 *)
                  CONCAT44(local_1f0._4_4_,
                           *(undefined4 *)((longlong)unaff_RDI + uVar19 * 0x10 + 0xc));
      local_1f8 = *(int *)(unaff_RDI + uVar19 * 2 + 1);
      FUN_180014410("[NWCAP]   subtype %3d (0x%02X): %8llu msg, bits %d..%d\n",uVar19,uVar19);
    }
    uVar14 = (int)uVar19 + 1;
    uVar19 = (ulonglong)uVar14;
  } while ((int)uVar14 < 0x100);
  if (DAT_1805c7c58 != 0) {
    FUN_180014410("[NWCAP]   --- subtype 0 by message name (%d distinct) ---\n");
    plVar16 = (longlong *)*DAT_1805c7c50;
    cVar1 = *(char *)((longlong)plVar16 + 0x19);
    while (cVar1 == '\0') {
      local_1f8 = (int)plVar16[6];
      plVar21 = (longlong *)"(unresolved)";
      if ((char)plVar16[7] != '\0') {
        plVar21 = plVar16 + 7;
      }
      local_1f0._4_4_ = (undefined4)((ulonglong)local_1f0 >> 0x20);
      local_1f0 = (undefined8 *)CONCAT44(local_1f0._4_4_,*(undefined4 *)((longlong)plVar16 + 0x34));
      FUN_180014410("[NWCAP]   tag %5d %-32s %8llu msg, bits %d..%d\n",(int)plVar16[4],plVar21,
                    plVar16[5]);
      plVar21 = (longlong *)plVar16[2];
      if (*(char *)((longlong)plVar21 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar21 + 0x19);
        plVar16 = plVar21;
        plVar21 = (longlong *)*plVar21;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar21 + 0x19);
          plVar16 = plVar21;
          plVar21 = (longlong *)*plVar21;
        }
      }
      else {
        cVar1 = *(char *)(plVar16[1] + 0x19);
        plVar2 = (longlong *)plVar16[1];
        plVar21 = plVar16;
        while ((plVar16 = plVar2, cVar1 == '\0' && (plVar21 == (longlong *)plVar16[2]))) {
          cVar1 = *(char *)(plVar16[1] + 0x19);
          plVar2 = (longlong *)plVar16[1];
          plVar21 = plVar16;
        }
      }
      cVar1 = *(char *)((longlong)plVar16 + 0x19);
    }
  }
  _Mtx_unlock(&DAT_1803da640);
LAB_1801038b2:
  if (0 < DAT_1803fe378) {
    if ((DAT_1803fa608 == 0) || (iVar6 = *(int *)(DAT_1803fa608 + 0x1c), iVar6 < 1)) {
      iVar6 = 0;
    }
    else if (0x80 < iVar6) {
      iVar6 = 0x80;
    }
    local_190 = (undefined8 *)0x0;
    puStack_188 = (undefined8 *)0x0;
    local_180 = 0;
    uVar19 = 1;
    local_1c0 = 1;
    local_1bc = iVar6;
    do {
      iVar18 = (int)uVar19;
      local_1c4 = 1;
      if (0 < iVar6) {
        do {
          iVar15 = local_1c4;
          if (((DAT_1803fa360 != (longlong *)0x0) &&
              (lVar10 = (**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,local_1c4), lVar10 != 0))
             && (FUN_180035bb0(uVar19,iVar15,&local_190), puVar5 = puStack_188,
                local_190 != puStack_188)) {
            lVar10 = (longlong)iVar15 + uVar19 * 0x81 + -0x81;
            local_1b8 = lVar10 * 0x18;
            if (*(char *)(local_1b0 + 0x1838 + lVar10) == '\0') {
              *(undefined1 *)(local_1b0 + 0x1838 + lVar10) = 1;
            }
            else if (local_190 != puStack_188) {
              puVar22 = local_190 + 4;
              puVar20 = local_190;
              do {
                puVar17 = *(undefined8 **)(local_1b0 + 8 + local_1b8);
                puVar11 = *(undefined8 **)(local_1b0 + 0x10 + local_1b8);
                if (puVar17 != puVar11) {
                  uVar19 = puVar20[3];
                  sVar3 = puVar20[2];
                  do {
                    puVar13 = puVar20;
                    if (0xf < uVar19) {
                      puVar13 = (undefined8 *)*puVar20;
                    }
                    _Size = puVar17[2];
                    _Buf1 = puVar17;
                    if (0xf < (ulonglong)puVar17[3]) {
                      _Buf1 = (undefined8 *)*puVar17;
                    }
                    if ((_Size == sVar3) &&
                       ((_Size == 0 || (iVar6 = memcmp(_Buf1,puVar13,_Size), iVar6 == 0)))) {
                      if (puVar17 == (undefined8 *)0x0) goto LAB_180103a46;
                      puVar11 = puVar17 + 4;
                      puVar13 = puVar22;
                      if (0xf < (ulonglong)puVar22[3]) {
                        puVar13 = (undefined8 *)*puVar22;
                      }
                      sVar3 = puVar17[6];
                      if (0xf < (ulonglong)puVar17[7]) {
                        puVar11 = (undefined8 *)*puVar11;
                      }
                      if ((sVar3 != puVar22[2]) ||
                         ((iVar15 = local_1c4, uVar14 = local_1c0, sVar3 != 0 &&
                          (iVar6 = memcmp(puVar11,puVar13,sVar3), iVar15 = local_1c4,
                          uVar14 = local_1c0, iVar6 != 0)))) goto LAB_180103a46;
                      goto LAB_180103a9e;
                    }
                    puVar17 = puVar17 + 10;
                  } while (puVar17 != puVar11);
                }
                puVar17 = (undefined8 *)0x0;
LAB_180103a46:
                uVar14 = local_1c0;
                iVar15 = local_1c4;
                local_1d8 = puVar22;
                if (0xf < (ulonglong)puVar22[3]) {
                  local_1d8 = (undefined8 *)*puVar22;
                }
                if (puVar17 == (undefined8 *)0x0) {
                  local_1e0 = (undefined8 *)&DAT_18033e5ea;
                }
                else {
                  local_1e0 = puVar17 + 4;
                  if (0xf < (ulonglong)puVar17[7]) {
                    local_1e0 = (undefined8 *)*local_1e0;
                  }
                }
                local_1f0 = puVar20;
                if (0xf < (ulonglong)puVar20[3]) {
                  local_1f0 = (undefined8 *)*puVar20;
                }
                local_1e8 = "(new) ";
                if (puVar17 != (undefined8 *)0x0) {
                  local_1e8 = "";
                }
                pcVar9 = "@nwvars";
                if (local_1c0 == 2) {
                  pcVar9 = "@nw2vars";
                }
                local_1f8 = local_1c4;
                FUN_180012ac0(local_178,0x140,"%s ent=%d key=\'%s\' %s\'%s\' -> \'%s\'",pcVar9);
                FUN_18006c720(local_178);
LAB_180103a9e:
                uVar19 = (ulonglong)uVar14;
                puVar20 = puVar20 + 10;
                puVar22 = puVar22 + 10;
                param_1 = local_1a8;
                iVar6 = local_1bc;
              } while (puVar20 != puVar5);
            }
            ppuVar12 = (undefined8 **)(local_1b8 + 8 + param_1);
            if (ppuVar12 != &local_190) {
              FUN_180219100(ppuVar12,local_190,
                            ((longlong)puStack_188 - (longlong)local_190 >> 4) * -0x3333333333333333
                           );
            }
          }
          iVar18 = (int)uVar19;
          local_1c4 = iVar15 + 1;
        } while (local_1c4 <= iVar6);
      }
      local_1c0 = iVar18 + 1;
      uVar19 = (ulonglong)local_1c0;
    } while ((int)local_1c0 < 3);
    FUN_18020c270(&local_190);
  }
  return;
}


