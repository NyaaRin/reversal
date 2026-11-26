// 0x180038a00  FUN_180038a00
// size=1920 thunk=false
// signature: undefined FUN_180038a00()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_180038a00(undefined4 param_1)

{
  undefined *puVar1;
  size_t _Size;
  int iVar2;
  ulonglong uVar3;
  char cVar4;
  char cVar5;
  DWORD DVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  size_t sVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 uVar14;
  undefined8 *_Buf1;
  undefined8 *******_Buf2;
  undefined8 *******pppppppuVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  uint uVar19;
  longlong lVar20;
  undefined1 auStack_168 [32];
  char local_148;
  uint local_144;
  int local_140;
  undefined4 local_13c;
  int local_138;
  int local_134;
  longlong local_130;
  longlong local_128;
  longlong *local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined8 *******local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  ulonglong local_90;
  undefined8 *******local_88 [2];
  size_t local_78;
  ulonglong local_70;
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStack_168;
  uVar19 = 0;
  local_144 = 0;
  local_13c = param_1;
  cVar4 = FUN_18002e100();
  if (cVar4 == '\0') {
LAB_180039159:
    puVar17 = (undefined8 *)&DAT_18033e5ea;
  }
  else {
    lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    local_110 = lVar20;
    if ((*(uint *)(lVar20 + 0x2118) & 1) == 0) {
      *(uint *)(lVar20 + 0x2118) = *(uint *)(lVar20 + 0x2118) | 1;
      FUN_1802d8910(&LAB_180308fe0);
    }
    if (DAT_1803db358 == '\0') {
LAB_180038aae:
      iVar16 = 0;
      puVar1 = PTR_s_sUserGroup_180339a60;
      while (puVar1 != (undefined *)0x0) {
        pcVar10 = (char *)FUN_180033da0(param_1,(&PTR_s_sUserGroup_180339a60)[iVar16],&DAT_18033e5ea
                                       );
        if ((pcVar10 != (char *)0x0) && (*pcVar10 != '\0')) {
          sVar11 = strlen(pcVar10);
          puVar17 = (undefined8 *)(lVar20 + 0x158);
          FUN_180212700(puVar17,pcVar10,sVar11);
          goto LAB_180038b3a;
        }
        iVar16 = iVar16 + 1;
        puVar1 = (&PTR_s_sUserGroup_180339a60)[iVar16];
      }
      DVar6 = GetTickCount();
      if ((DAT_1803fea18 == 0) || (4999 < DVar6 - DAT_1803fea18)) {
        DAT_1803fea18 = DVar6;
        DAT_1803feb48 = FUN_180038760();
      }
      if (DAT_1803feb48 != '\0') {
        iVar16 = 0;
        do {
          pcVar10 = (char *)FUN_180033da0(param_1,(&PTR_DAT_18033caa8)[iVar16],&DAT_18033e5ea);
          if ((pcVar10 != (char *)0x0) && (*pcVar10 != '\0')) {
            sVar11 = strlen(pcVar10);
            puVar17 = (undefined8 *)(lVar20 + 0x158);
            FUN_180212700(puVar17,pcVar10,sVar11);
            if (DAT_180425874 < 3) {
              DAT_180425874 = DAT_180425874 + 1;
              puVar18 = puVar17;
              if (0xf < *(ulonglong *)(lVar20 + 0x170)) {
                puVar18 = (undefined8 *)*puVar17;
              }
              FUN_180014410("[TRAMP] usergroup via ray NW key \'%s\' val=\"%s\"\n",
                            (&PTR_DAT_18033caa8)[iVar16],puVar18);
            }
            goto LAB_180038b3a;
          }
          iVar16 = iVar16 + 1;
        } while ((&PTR_DAT_18033caa8)[iVar16] != (undefined *)0x0);
        if ((DAT_1805c7b00 & 1) == 0) {
          DAT_1805c7b00 = DAT_1805c7b00 | 1;
          atexit((_func_5014 *)&LAB_180308fd0);
        }
        lVar12 = DAT_1803fcc50;
        if (DAT_1803ff2e8 < 0xc) {
          for (; lVar12 != DAT_1803fcc58; lVar12 = lVar12 + 0x98) {
            if (*(int *)(lVar12 + 0x88) == 0) {
              cVar4 = *(int *)(lVar12 + 0x7c) != -1;
            }
            else {
              cVar4 = *(char *)(lVar12 + 0x8c);
            }
            if (cVar4 != '\0') {
              if (DAT_1803fa678 == (longlong *)0x0) {
                lVar12 = 0;
                local_130 = 0;
                plVar13 = (longlong *)0x0;
              }
              else {
                lVar12 = (**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0);
                if (lVar12 == 0) {
                  lVar12 = 0;
                }
                else {
                  lVar12 = *(longlong *)(lVar12 + 8);
                }
                local_130 = lVar12;
                if (DAT_1803fa678 == (longlong *)0x0) {
                  plVar13 = (longlong *)0x0;
                }
                else {
                  plVar13 = (longlong *)(**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0);
                }
              }
              local_120 = plVar13;
              if (((lVar12 != 0) && (plVar13 != (longlong *)0x0)) && (DAT_1803fb088 != (code *)0x0))
              {
                if (plVar13[1] == 0) {
                  local_134 = (**(code **)*plVar13)(plVar13);
                }
                else {
                  local_134 = (*DAT_1803fb088)();
                }
                uStack_a0 = 0;
                local_98 = 0;
                local_90 = 0xf;
                local_a8 = (undefined8 *******)0x0;
                local_148 = '\0';
                local_140 = 1;
                do {
                  iVar16 = local_140;
                  if ((DAT_1803fb088 == (code *)0x0) || (plVar13[1] == 0)) {
                    local_138 = (**(code **)*plVar13)(plVar13);
                  }
                  else {
                    local_138 = (*DAT_1803fb088)();
                  }
                  cVar5 = FUN_180033790(lVar12,plVar13,iVar16,param_1);
                  iVar9 = local_138;
                  cVar4 = local_148;
                  if (cVar5 != '\0') {
                    local_68 = 0;
                    lStack_60 = 0;
                    local_58 = 0;
                    uVar7 = (*DAT_1803fb088)(lVar12);
                    cVar4 = FUN_180034850(lVar12,uVar7,&local_68,0x40);
                    iVar9 = local_140;
                    if (cVar4 != '\0') {
                      local_148 = '\x01';
                      local_128 = local_68;
                      local_118 = lStack_60;
                      lVar20 = lStack_60;
                      lVar12 = local_68;
                      param_1 = local_13c;
                      if (local_68 != lStack_60) {
                        do {
                          local_128 = lVar12;
                          if (iVar9 == 2) {
                            uVar14 = FUN_1801fd120(local_c8,&DAT_180341db8,lVar12);
                            uVar19 = uVar19 | 1;
                          }
                          else {
                            uVar14 = FUN_18016d4c0(local_e8,lVar12);
                            uVar19 = uVar19 | 2;
                          }
                          local_144 = uVar19;
                          FUN_18016d4c0(local_88,uVar14);
                          if ((uVar19 & 2) != 0) {
                            uVar19 = uVar19 & 0xfffffffd;
                            local_144 = uVar19;
                            FUN_18020e450(local_e8);
                          }
                          if ((uVar19 & 1) != 0) {
                            uVar19 = uVar19 & 0xfffffffe;
                            local_144 = uVar19;
                            FUN_18020e450(local_c8);
                          }
                          uVar3 = local_70;
                          sVar11 = local_78;
                          pppppppuVar15 = local_88[0];
                          puVar17 = DAT_1804258b0;
                          puVar18 = DAT_1804258a8;
                          if (DAT_1804258a8 == DAT_1804258b0) {
LAB_180038eca:
                            FUN_18020d6f0(&DAT_1804258a8,local_88);
                            FUN_18021aef0(&local_a8,&DAT_18033f56c,1);
                            pppppppuVar15 = local_88;
                            if (0xf < local_70) {
                              pppppppuVar15 = local_88[0];
                            }
                            FUN_18021aef0(&local_a8,pppppppuVar15,local_78);
                          }
                          else {
                            do {
                              _Buf2 = local_88;
                              if (0xf < uVar3) {
                                _Buf2 = pppppppuVar15;
                              }
                              _Size = puVar18[2];
                              _Buf1 = puVar18;
                              if (0xf < (ulonglong)puVar18[3]) {
                                _Buf1 = (undefined8 *)*puVar18;
                              }
                            } while (((_Size != sVar11) ||
                                     ((_Size != 0 &&
                                      (iVar16 = memcmp(_Buf1,_Buf2,_Size), iVar16 != 0)))) &&
                                    (puVar18 = puVar18 + 4, puVar18 != puVar17));
                            lVar20 = local_118;
                            lVar12 = local_128;
                            if (puVar18 == puVar17) goto LAB_180038eca;
                          }
                          FUN_18020e450(local_88);
                          local_128 = lVar12 + 0x20;
                          plVar13 = local_120;
                          lVar12 = local_128;
                          iVar16 = local_140;
                          param_1 = local_13c;
                        } while (local_128 != lVar20);
                      }
                    }
                    cVar4 = local_148;
                    FUN_18020d5c0(&local_68);
                    iVar9 = local_138;
                  }
                  while( true ) {
                    if ((DAT_1803fb088 == (code *)0x0) || (plVar13[1] == 0)) {
                      iVar8 = (**(code **)*plVar13)(plVar13);
                    }
                    else {
                      iVar8 = (*DAT_1803fb088)();
                    }
                    iVar2 = local_134;
                    if (iVar8 <= iVar9) break;
                    if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) ||
                       (plVar13[1] == 0)) {
                      (**(code **)(*plVar13 + 0x10))(plVar13);
                    }
                    else {
                      (*DAT_1803fb088)();
                      (*DAT_1803faf10)(plVar13[1]);
                    }
                  }
                  local_140 = iVar16 + 1;
                  lVar12 = local_130;
                } while (local_140 < 3);
                while( true ) {
                  if ((DAT_1803fb088 == (code *)0x0) || (plVar13[1] == 0)) {
                    iVar16 = (**(code **)*plVar13)(plVar13);
                  }
                  else {
                    iVar16 = (*DAT_1803fb088)();
                  }
                  if (iVar16 <= iVar2) break;
                  if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) ||
                     (plVar13[1] == 0)) {
                    (**(code **)(*plVar13 + 0x10))(plVar13,1);
                  }
                  else {
                    iVar9 = (*DAT_1803fb088)();
                    iVar16 = 0;
                    if (-1 < iVar9 + -1) {
                      iVar16 = iVar9 + -1;
                    }
                    (*DAT_1803faf10)(plVar13[1],iVar16);
                  }
                }
                if ((cVar4 == '\0') || (local_98 != 0)) {
                  DAT_1803ff2e8 = DAT_1803ff2e8 + 1;
                  if (cVar4 == '\0') {
                    pppppppuVar15 = (undefined8 *******)" (row unreadable)";
                  }
                  else {
                    pppppppuVar15 = &local_a8;
                    if (0xf < local_90) {
                      pppppppuVar15 = local_a8;
                    }
                  }
                  FUN_180014410(&DAT_180341de0,param_1,pppppppuVar15);
                }
                FUN_18020e450(&local_a8);
                lVar20 = local_110;
              }
              break;
            }
          }
        }
      }
      puVar17 = (undefined8 *)(lVar20 + 0x158);
      cVar4 = FUN_180038340(param_1);
      if ((cVar4 == '\0') || (*(longlong *)(lVar20 + 0x168) == 0)) {
        if ((DAT_1805c7b00 & 2) == 0) {
          DAT_1805c7b00 = DAT_1805c7b00 | 2;
          local_108 = 0;
          uStack_100 = 0;
          local_f8 = 0;
          uStack_f0 = 0;
          FUN_18001d080(&local_108,"{UserGroup=1@ba.ranks.Stored.NiceName}",0x26);
          FUN_1800275b0(&DAT_1805c7a60,&local_108);
          FUN_18020e450(&local_108);
          atexit(FUN_180308fa0);
        }
        if (((DAT_1805c7a78 != '\0') &&
            (cVar4 = FUN_180038080(param_1,&DAT_1805c7a60,puVar17), cVar4 != '\0')) &&
           (*(longlong *)(lVar20 + 0x168) != 0)) {
          if (*(ulonglong *)(lVar20 + 0x170) < 0x10) {
            return (undefined8 *)(lVar20 + 0x158);
          }
          return *(undefined8 **)(lVar20 + 0x158);
        }
        goto LAB_180039159;
      }
    }
    else {
      puVar17 = (undefined8 *)(lVar20 + 0x158);
      cVar4 = FUN_180038080(param_1,&DAT_1803db340,puVar17);
      if ((cVar4 == '\0') || (*(longlong *)(lVar20 + 0x168) == 0)) goto LAB_180038aae;
    }
LAB_180038b3a:
    if (0xf < (ulonglong)puVar17[3]) {
      puVar17 = (undefined8 *)*puVar17;
    }
  }
  return puVar17;
}


