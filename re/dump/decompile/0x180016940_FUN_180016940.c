// 0x180016940  FUN_180016940
// size=1229 thunk=false
// signature: undefined FUN_180016940()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

HMODULE FUN_180016940(undefined8 param_1,char *param_2,undefined4 param_3)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  BOOL BVar6;
  int iVar7;
  HMODULE pHVar8;
  HANDLE pvVar9;
  SIZE_T SVar10;
  size_t sVar11;
  uint uVar12;
  longlong lVar13;
  HMODULE pHVar14;
  ulonglong uVar15;
  HMODULE pHVar16;
  HMODULE pHVar17;
  longlong lVar18;
  HMODULE pHVar19;
  ulonglong uVar20;
  int *lp;
  HMODULE pHVar21;
  HMODULE pHVar22;
  undefined1 auStack_308 [32];
  HMODULE local_2e8;
  HMODULE local_2e0;
  HMODULE local_2d8;
  HMODULE local_2d0;
  longlong local_2c8;
  char *local_2c0;
  uint local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0 [2];
  undefined1 local_2a8 [16];
  undefined8 local_298;
  undefined8 *puStack_290;
  undefined4 *local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  ulonglong uStack_270;
  undefined8 local_268;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  ulonglong local_1d8 [48];
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_308;
  local_2c8 = CONCAT44(local_2c8._4_4_,param_3);
  local_2c0 = param_2;
  pHVar8 = GetModuleHandleA("client.dll");
  if (pHVar8 != (HMODULE)0x0) {
    local_278 = 0;
    uStack_270 = 0;
    local_268 = 0;
    local_2e0 = pHVar8;
    pvVar9 = GetCurrentProcess();
    iVar5 = K32GetModuleInformation(pvVar9,pHVar8,&local_278,0x18);
    if (iVar5 != 0) {
      uVar15 = uStack_270 & 0xffffffff;
      BVar6 = IsBadReadPtr(pHVar8,0x40);
      if ((BVar6 == 0) && ((short)pHVar8->unused == 0x5a4d)) {
        lp = (int *)((longlong)&pHVar8->unused + (longlong)pHVar8[0xf].unused);
        BVar6 = IsBadReadPtr(lp,0x108);
        if ((BVar6 == 0) && (*lp == 0x4550)) {
          local_2e8 = (HMODULE)((longlong)&pHVar8->unused + uVar15);
          local_2d8 = (HMODULE)0x0;
          local_2d0 = (HMODULE)0x0;
          memset(local_1d8,0,0x180);
          uVar15 = 0;
          iVar5 = 0;
          local_2b8 = 0;
          uVar1 = *(ushort *)(lp + 5);
          if (*(short *)((longlong)lp + 6) != 0) {
            do {
              lVar18 = (longlong)iVar5 * 0x28;
              pHVar16 = (HMODULE)((longlong)&pHVar8->unused +
                                 (ulonglong)
                                 *(uint *)((longlong)lp + lVar18 + 0x24 + (ulonglong)uVar1));
              pHVar19 = (HMODULE)((longlong)&pHVar16->unused +
                                 (ulonglong)
                                 *(uint *)((longlong)lp + lVar18 + 0x20 + (ulonglong)uVar1));
              if ((pHVar19 <= pHVar16) || (local_2e8 < pHVar19)) goto LAB_180016b59;
              local_2a8._0_8_ = (PVOID)0x0;
              local_2a8._8_8_ = (PVOID)0x0;
              local_298._0_4_ = 0;
              local_298._4_4_ = 0;
              puStack_290 = (undefined8 *)0x0;
              local_288 = (undefined4 *)0x0;
              uStack_280._0_4_ = 0;
              uStack_280._4_4_ = 0;
              SVar10 = VirtualQuery(pHVar16,(PMEMORY_BASIC_INFORMATION)local_2a8,0x30);
              pHVar8 = local_2e0;
              if ((SVar10 == 0) ||
                 (((DWORD)local_288 != 0x1000 || (((ulonglong)local_288 & 0x10100000000) != 0)))) {
LAB_180016b45:
                uVar15 = (ulonglong)local_2b8;
              }
              else {
                uVar12 = *(uint *)((longlong)lp + lVar18 + 0x3c + (ulonglong)uVar1);
                if ((uVar12 >> 0x1d & 1) == 0) {
                  if ((uVar12 >> 0x1e & 1) == 0) goto LAB_180016b45;
                  uVar20 = (ulonglong)(int)local_2b8;
                  uVar15 = uVar20;
                  if ((int)local_2b8 < 0x18) {
                    local_2b8 = local_2b8 + 1;
                    uVar15 = (ulonglong)local_2b8;
                    local_1d8[uVar20 * 2] = (ulonglong)pHVar16;
                    local_1d8[uVar20 * 2 + 1] = (ulonglong)pHVar19;
                  }
                }
                else {
                  if (local_2d8 != (HMODULE)0x0) goto LAB_180016b45;
                  uVar15 = (ulonglong)local_2b8;
                  local_2d8 = pHVar16;
                  local_2d0 = pHVar19;
                }
              }
LAB_180016b59:
              pHVar19 = local_2d0;
              pHVar16 = local_2d8;
              iVar5 = iVar5 + 1;
            } while (iVar5 < (int)(uint)*(ushort *)((longlong)lp + 6));
            if ((local_2d8 != (HMODULE)0x0) && (iVar5 = (int)uVar15, iVar5 != 0)) {
              local_2b4 = 0;
              local_2a8._0_8_ = &local_2b8;
              local_2b0[0] = 0;
              local_2a8._8_8_ = local_1d8;
              local_298 = &local_2b4;
              puStack_290 = &local_258;
              local_288 = local_2b0;
              iVar7 = 0;
              local_2d8 = (HMODULE)((ulonglong)local_2d8 & 0xffffffff00000000);
              local_258 = 0;
              uStack_250 = 0;
              local_248 = 0;
              uStack_240 = 0;
              local_238 = 0;
              uStack_230 = 0;
              local_228 = 0;
              uStack_220 = 0;
              local_218 = 0;
              uStack_210 = 0;
              local_208 = 0;
              uStack_200 = 0;
              local_1f8 = 0;
              uStack_1f0 = 0;
              local_1e8 = 0;
              uStack_1e0 = 0;
              if (0 < iVar5) {
                iVar3 = (int)local_2c8;
                lVar18 = (longlong)(int)local_2c8;
                pHVar21 = (HMODULE)0x0;
                do {
                  pHVar22 = pHVar21;
                  if (pHVar21 != (HMODULE)0x0) goto LAB_180016d6d;
                  lVar13 = (longlong)iVar7;
                  local_2d0 = (HMODULE)(lVar18 * 8);
                  local_2c8 = lVar13 * 0x10;
                  pHVar17 = (HMODULE)(local_1d8[lVar13 * 2] + 8);
                  pHVar14 = local_2e8;
                  if ((longlong)&local_2d0[2].unused + local_1d8[lVar13 * 2] <=
                      local_1d8[lVar13 * 2 + 1]) {
                    do {
                      pHVar22 = *(HMODULE *)(pHVar17 + -2);
                      if (((((pHVar8 <= pHVar22) && (pHVar22 < pHVar14)) && (pHVar8 + 2 <= pHVar17))
                          && (((pHVar17 < pHVar14 && (pHVar22 + 6 <= pHVar14)) &&
                              ((pHVar22->unused == 1 &&
                               ((pHVar22[1].unused == 0 &&
                                (pHVar14 = local_2e8, 0 < pHVar22[3].unused)))))))) &&
                         ((HMODULE)((longlong)&pHVar8->unused + (ulonglong)(uint)pHVar22[5].unused)
                          == pHVar22)) {
                        pHVar22 = (HMODULE)((longlong)&pHVar8[4].unused +
                                           (ulonglong)(uint)pHVar22[3].unused);
                        sVar11 = strlen(local_2c0);
                        pHVar14 = local_2e8;
                        pHVar8 = local_2e0;
                        if ((((local_2e0 <= pHVar22) && (pHVar22 < local_2e8)) &&
                            (sVar11 + 1 <= (ulonglong)((longlong)local_2e8 - (longlong)pHVar22))) &&
                           (iVar7 = memcmp(pHVar22,local_2c0,sVar11 + 1), pHVar14 = local_2e8,
                           pHVar8 = local_2e0, iVar7 == 0)) {
                          uVar20 = 0;
                          bVar2 = true;
                          pHVar22 = pHVar17;
                          if (iVar3 < 1) break;
                          do {
                            if (!bVar2) goto LAB_180016d1f;
                            if ((*(HMODULE *)(pHVar17 + uVar20 * 2) < pHVar16) ||
                               (pHVar19 <= *(HMODULE *)(pHVar17 + uVar20 * 2))) {
                              bVar2 = false;
                            }
                            else {
                              bVar2 = true;
                            }
                            uVar12 = (int)uVar20 + 1;
                            uVar20 = (ulonglong)uVar12;
                          } while ((int)uVar12 < iVar3);
                          if (bVar2) break;
                        }
                      }
LAB_180016d1f:
                      pHVar17 = pHVar17 + 2;
                      pHVar22 = pHVar21;
                    } while ((ulonglong)((longlong)&pHVar17->unused + (longlong)&local_2d0->unused)
                             <= *(ulonglong *)((longlong)local_1d8 + local_2c8 + 8));
                  }
                  iVar7 = (int)local_2d8 + 1;
                  local_2d8 = (HMODULE)CONCAT44(local_2d8._4_4_,iVar7);
                  pHVar8 = local_2e0;
                  pHVar21 = pHVar22;
                } while (iVar7 < iVar5);
                if (pHVar22 != (HMODULE)0x0) {
LAB_180016d6d:
                  iVar5 = 0;
                  do {
                    iVar7 = 0;
                    if (0 < (int)uVar15) {
                      do {
                        lVar18 = (longlong)iVar7;
                        pHVar8 = (HMODULE)local_1d8[lVar18 * 2];
                        if ((HMODULE)local_1d8[lVar18 * 2] + 2 <= (HMODULE)local_1d8[lVar18 * 2 + 1]
                           ) {
                          do {
                            pHVar16 = *(HMODULE *)pHVar8;
                            pHVar19 = pHVar8;
                            if (iVar5 == 0) {
                              cVar4 = FUN_180016e10(local_2a8,pHVar16);
                              if (cVar4 != '\0') {
                                pHVar19 = pHVar16;
                                pHVar16 = *(HMODULE *)pHVar16;
                                goto joined_r0x000180016dbc;
                              }
                            }
                            else {
joined_r0x000180016dbc:
                              if (pHVar16 == pHVar22) {
                                return pHVar19;
                              }
                            }
                            pHVar16 = pHVar8 + 4;
                            pHVar8 = pHVar8 + 2;
                          } while (pHVar16 <= (HMODULE)local_1d8[lVar18 * 2 + 1]);
                          uVar15 = (ulonglong)local_2b8;
                        }
                        iVar7 = iVar7 + 1;
                      } while (iVar7 < (int)uVar15);
                    }
                    iVar5 = iVar5 + 1;
                  } while (iVar5 < 2);
                }
              }
            }
          }
        }
      }
    }
  }
  return (HMODULE)0x0;
}


