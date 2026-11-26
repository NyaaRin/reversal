// 0x1800704d0  FUN_1800704d0
// size=2431 thunk=false
// signature: undefined FUN_1800704d0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800704d0(undefined8 param_1)

{
  code *pcVar1;
  bool bVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong ****pppplVar13;
  undefined8 ****ppppuVar14;
  undefined8 uVar15;
  uint uVar16;
  char *pcVar17;
  char *pcVar18;
  undefined4 uVar19;
  undefined1 auStack_2d8 [32];
  uint local_2b8;
  int local_2b4;
  longlong *local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 local_290;
  char *local_288;
  undefined8 local_280;
  char *local_278;
  ulonglong local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  longlong **local_248;
  undefined1 local_240 [32];
  undefined1 local_220 [32];
  undefined1 local_200 [32];
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  longlong ***local_1c0 [2];
  longlong local_1b0;
  ulonglong local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined1 local_180 [32];
  undefined8 ***local_160 [2];
  longlong local_150;
  ulonglong local_148;
  undefined1 local_138 [259];
  char local_35 [5];
  ulonglong local_30;
  
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_2d8;
  uVar16 = 0;
  local_2b8 = 0;
  if ((((DAT_1803fa678 != (longlong *)0x0) &&
       (plVar6 = (longlong *)(**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0),
       plVar6 != (longlong *)0x0)) && (DAT_1803fefd8 != 0)) && (DAT_1803ff018 != 0)) {
    local_2b0 = plVar6;
    iVar4 = (**(code **)*plVar6)(plVar6);
    local_248 = &local_2b0;
    local_2b4 = iVar4;
    memset(local_138,0,0xf0);
    FUN_18020f980(local_138,param_1);
    uStack_198 = 0;
    local_190 = 0;
    local_188 = 0xf;
    local_1a0 = 0;
    while (plVar7 = (longlong *)FUN_180202880(local_138,&local_1a0),
          (*(byte *)((longlong)*(int *)(*plVar7 + 4) + 0x10 + (longlong)plVar7) & 6) == 0) {
      lVar8 = FUN_180027030(&local_1a0,&DAT_1803469a4,0);
      if (lVar8 != -1) {
        lVar9 = FUN_180027130(&local_1a0,&DAT_1803469a4);
        FUN_18020e670(&local_1a0,local_180,lVar8,(lVar9 - lVar8) + 1);
        lVar8 = FUN_1800e0870(local_180,&DAT_1803469ac);
        if (lVar8 == 0) {
          uVar10 = FUN_180028e90(local_180,0x28);
          if (uVar10 == 0xffffffffffffffff) {
            FUN_18020e450(local_180);
          }
          else {
            FUN_18020e670(local_180,local_1c0,4,uVar10 - 4);
            uVar11 = FUN_18020e6e0(local_180,0x29);
            if ((uVar11 == 0xffffffffffffffff) || (uVar11 <= uVar10)) {
              local_268 = 0;
              uStack_260 = 0;
              local_258 = 0;
              uStack_250 = 0;
              FUN_18001d080(&local_268,&DAT_18033e5ea,0);
              puVar12 = &local_268;
              uVar16 = uVar16 | 2;
            }
            else {
              puVar12 = (undefined8 *)
                        FUN_18020e670(local_180,local_240,uVar10 + 1,(uVar11 - uVar10) + -1);
              uVar16 = uVar16 | 1;
            }
            local_1e0 = 0;
            uStack_1d8 = 0;
            local_1d0 = 0;
            uStack_1c8 = 0;
            local_1e0 = *puVar12;
            uStack_1d8 = puVar12[1];
            local_1d0 = puVar12[2];
            uStack_1c8 = puVar12[3];
            puVar12[2] = 0;
            puVar12[3] = 0xf;
            *(undefined1 *)puVar12 = 0;
            local_2b8 = uVar16;
            if ((uVar16 & 2) != 0) {
              uVar16 = uVar16 & 0xfffffffd;
              local_2b8 = uVar16;
              FUN_18020e450(&local_268);
            }
            if ((uVar16 & 1) != 0) {
              uVar16 = uVar16 & 0xfffffffe;
              local_2b8 = uVar16;
              FUN_18020e450(local_240);
            }
            bVar2 = 0xf < local_1a8;
            pppplVar13 = local_1c0;
            if (0xf < local_1a8) {
              pppplVar13 = (longlong ****)local_1c0[0];
            }
            if (((local_1b0 == 5) && (*(int *)pppplVar13 == 0x72617453)) &&
               (*(char *)((longlong)pppplVar13 + 4) == 't')) {
              uVar19 = (**(code **)(*plVar6 + 0x100))(plVar6,DAT_1803fefd8);
              pcVar1 = *(code **)(*plVar6 + 0xe8);
              puVar12 = (undefined8 *)FUN_180070e60(uVar19,local_220);
              if (0xf < (ulonglong)puVar12[3]) {
                puVar12 = (undefined8 *)*puVar12;
              }
              (*pcVar1)(plVar6,puVar12);
              FUN_18020e450(local_220);
LAB_180070d87:
              uVar15 = 1;
LAB_180070d8c:
              plVar7 = local_2b0;
              iVar5 = FUN_180023180(local_2b0[1],uVar15);
              if (iVar5 != 0) {
                (**(code **)(*plVar7 + 0x10))(plVar7,1);
              }
            }
            else {
              pppplVar13 = local_1c0;
              if (bVar2) {
                pppplVar13 = (longlong ****)local_1c0[0];
              }
              if (((local_1b0 == 0xc) && (*pppplVar13 == (longlong ***)0x65536f54646e6553)) &&
                 (*(int *)(pppplVar13 + 1) == 0x72657672)) {
                (**(code **)(*plVar6 + 0x100))(plVar6,DAT_1803ff018);
                uVar15 = 0;
                goto LAB_180070d8c;
              }
              pppplVar13 = local_1c0;
              if (bVar2) {
                pppplVar13 = (longlong ****)local_1c0[0];
              }
              if (((local_1b0 == 0xb) && (*pppplVar13 == (longlong ***)0x7274536574697257)) &&
                 ((*(short *)(pppplVar13 + 1) == 0x6e69 &&
                  (*(char *)((longlong)pppplVar13 + 10) == 'g')))) {
                uVar19 = (**(code **)(*plVar6 + 0x100))(plVar6,DAT_1803fefa0);
                pcVar1 = *(code **)(*plVar6 + 0xe8);
                puVar12 = (undefined8 *)FUN_180070e60(uVar19,local_200);
                if (0xf < (ulonglong)puVar12[3]) {
                  puVar12 = (undefined8 *)*puVar12;
                }
                (*pcVar1)(plVar6,puVar12);
                FUN_18020e450(local_200);
                goto LAB_180070d87;
              }
              pppplVar13 = local_1c0;
              if (bVar2) {
                pppplVar13 = (longlong ****)local_1c0[0];
              }
              if (((local_1b0 == 9) && (*pppplVar13 == (longlong ***)0x6e49556574697257)) &&
                 (*(char *)(pppplVar13 + 1) == 't')) {
LAB_180070974:
                pppplVar13 = local_1c0;
                if (bVar2) {
                  pppplVar13 = (longlong ****)local_1c0[0];
                }
                bVar2 = false;
                if (local_1b0 == 9) {
                  lVar8 = (longlong)*pppplVar13 + -0x6e49556574697257;
                  if (lVar8 == 0) {
                    lVar8 = (ulonglong)*(byte *)(pppplVar13 + 1) - 0x74;
                  }
                  bVar2 = lVar8 == 0;
                }
                lVar8 = DAT_1803ff020;
                if (bVar2) {
                  lVar8 = DAT_1803fefe8;
                }
                if (lVar8 != 0) {
                  uVar19 = (**(code **)(*plVar6 + 0x100))(plVar6);
                  pcVar1 = *(code **)(*plVar6 + 0xf0);
                  uVar19 = FUN_180070ff0(uVar19,&local_1e0,0);
                  uVar19 = (*pcVar1)(plVar6,uVar19);
                  pcVar1 = *(code **)(*plVar6 + 0xf0);
                  uVar19 = FUN_180070ff0(uVar19,&local_1e0);
                  (*pcVar1)(plVar6,uVar19);
                  uVar15 = 2;
                  goto LAB_180070d8c;
                }
              }
              else {
                pppplVar13 = local_1c0;
                if (bVar2) {
                  pppplVar13 = (longlong ****)local_1c0[0];
                }
                if ((local_1b0 == 8) && (*pppplVar13 == (longlong ***)0x746e496574697257))
                goto LAB_180070974;
                pppplVar13 = local_1c0;
                if (bVar2) {
                  pppplVar13 = (longlong ****)local_1c0[0];
                }
                if ((((local_1b0 == 0xb) && (*pppplVar13 == (longlong ***)0x6e49556574697257)) &&
                    (*(short *)(pppplVar13 + 1) == 0x3674)) &&
                   (*(char *)((longlong)pppplVar13 + 10) == '4')) {
                  if (DAT_1803fefd0 != 0) {
                    uVar19 = FUN_180070e60(0xb,local_160);
                    if (local_150 == 0) {
                      dVar3 = (double)FUN_180070ff0(uVar19,&local_1e0,0);
                      uVar10 = (ulonglong)dVar3;
                      pcVar18 = local_35 + 2;
                      if ((longlong)uVar10 < 0) {
                        uVar10 = -uVar10;
                        do {
                          pcVar17 = pcVar18;
                          local_288 = pcVar17 + -1;
                          uVar11 = uVar10 / 10;
                          *local_288 = (char)uVar10 + (char)uVar11 * -10 + '0';
                          uVar10 = uVar11;
                          pcVar18 = local_288;
                        } while (uVar11 != 0);
                        pcVar18 = pcVar17 + -2;
                        *pcVar18 = '-';
                        local_280 = 0;
                      }
                      else {
                        do {
                          pcVar18 = pcVar18 + -1;
                          local_270 = uVar10 / 10;
                          *pcVar18 = (char)uVar10 + (char)local_270 * -10 + '0';
                          uVar10 = local_270;
                          local_278 = pcVar18;
                        } while (local_270 != 0);
                      }
                      local_2a8 = 0;
                      uStack_2a0 = 0;
                      local_298 = 0;
                      local_290 = 0;
                      if (pcVar18 == local_35 + 2) {
                        local_298 = 0;
                        local_290 = 0xf;
                        local_2a8 = 0;
                      }
                      else {
                        FUN_18001d080(&local_2a8,pcVar18);
                      }
                      local_2b8 = uVar16 | 4;
                      FUN_18020e8a0(local_160,&local_2a8);
                      local_2b8 = uVar16;
                      FUN_18020e450(&local_2a8);
                    }
                    (**(code **)(*plVar6 + 0x100))(plVar6,DAT_1803fefd0);
                    ppppuVar14 = local_160;
                    if (0xf < local_148) {
                      ppppuVar14 = (undefined8 ****)local_160[0];
                    }
                    (**(code **)(*plVar6 + 0xe8))(plVar6,ppppuVar14);
                    plVar7 = local_2b0;
                    iVar5 = FUN_180023180(local_2b0[1],1);
                    if (iVar5 != 0) {
                      (**(code **)(*plVar7 + 0x10))(plVar7,1);
                    }
                    FUN_18020e450(local_160);
                  }
                  goto LAB_180070dae;
                }
                pppplVar13 = local_1c0;
                if (bVar2) {
                  pppplVar13 = (longlong ****)local_1c0[0];
                }
                if (((local_1b0 == 10) && (*pppplVar13 == (longlong ***)0x6f6c466574697257)) &&
                   (lVar8 = DAT_1803fefb0, *(short *)(pppplVar13 + 1) == 0x7461)) {
LAB_180070d54:
                  if (lVar8 != 0) {
                    uVar19 = (**(code **)(*plVar6 + 0x100))(plVar6);
                    pcVar1 = *(code **)(*plVar6 + 0xf0);
                    uVar19 = FUN_180070ff0(uVar19,&local_1e0);
                    (*pcVar1)(plVar6,uVar19);
                    goto LAB_180070d87;
                  }
                }
                else {
                  pppplVar13 = local_1c0;
                  if (bVar2) {
                    pppplVar13 = (longlong ****)local_1c0[0];
                  }
                  if (((local_1b0 == 0xb) && (*pppplVar13 == (longlong ***)0x756f446574697257)) &&
                     ((*(short *)(pppplVar13 + 1) == 0x6c62 &&
                      (lVar8 = DAT_1803ff008, *(char *)((longlong)pppplVar13 + 10) == 'e'))))
                  goto LAB_180070d54;
                  pppplVar13 = local_1c0;
                  if (bVar2) {
                    pppplVar13 = (longlong ****)local_1c0[0];
                  }
                  if (((local_1b0 == 9) && (*pppplVar13 == (longlong ***)0x6f6f426574697257)) &&
                     (*(char *)(pppplVar13 + 1) == 'l')) {
                    if (DAT_1803ff000 != 0) {
                      (**(code **)(*plVar6 + 0x100))(plVar6);
                      pcVar1 = *(code **)(*plVar6 + 0xf8);
                      lVar8 = FUN_180133640(&local_1e0,&DAT_18033e5dc);
                      (*pcVar1)(plVar6,lVar8 != -1);
                      goto LAB_180070d87;
                    }
                  }
                  else {
                    pppplVar13 = local_1c0;
                    if (bVar2) {
                      pppplVar13 = (longlong ****)local_1c0[0];
                    }
                    if ((local_1b0 == 8) &&
                       (lVar8 = DAT_1803ff000, *pppplVar13 == (longlong ***)0x7469426574697257))
                    goto LAB_180070d54;
                  }
                }
              }
            }
LAB_180070dae:
            FUN_18020e450(&local_1e0);
            FUN_18020e450(local_1c0);
            FUN_18020e450(local_180);
          }
        }
        else {
          FUN_18020e450(local_180);
        }
      }
    }
    FUN_18020e450(&local_1a0);
    FUN_180071340(local_138);
    iVar5 = (**(code **)*plVar6)(plVar6);
    while (iVar4 < iVar5) {
      (**(code **)(*plVar6 + 0x10))(plVar6,1);
      iVar5 = (**(code **)*plVar6)(plVar6);
    }
  }
  return;
}


