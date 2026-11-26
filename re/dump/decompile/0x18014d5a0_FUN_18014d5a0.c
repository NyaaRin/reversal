// 0x18014d5a0  FUN_18014d5a0
// size=2122 thunk=false
// signature: undefined FUN_18014d5a0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_18014d5a0(undefined1 *param_1,char *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  HMODULE pHVar4;
  longlong lVar5;
  byte *pbVar6;
  longlong *plVar7;
  byte *pbVar8;
  byte *pbVar9;
  char *pcVar10;
  byte *pbVar11;
  undefined8 *******pppppppuVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined **ppuVar15;
  byte **ppbVar16;
  undefined1 auStack_288 [32];
  longlong local_268;
  byte *local_260;
  longlong local_258;
  undefined4 local_248;
  byte *local_240;
  undefined8 local_238;
  undefined8 *local_230;
  undefined8 *******local_228;
  longlong lStack_220;
  longlong local_218;
  ulonglong uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined1 *local_1c8;
  undefined1 local_1b8 [32];
  char local_198 [256];
  undefined8 local_98;
  undefined8 uStack_90;
  byte *local_88;
  longlong lStack_80;
  undefined8 local_78;
  byte *local_70;
  byte *pbStack_68;
  undefined8 local_60;
  byte *local_58;
  byte *pbStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_288;
  local_248 = 1;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  local_238 = param_3;
  local_1c8 = param_1;
  FUN_18001d080(param_1 + 0x10,&DAT_18033e9cc);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0xf;
  param_1[0x30] = 0;
  local_248 = 1;
  ppuVar13 = &PTR_s_client_dll_1803e74a0;
  do {
    iVar2 = _stricmp(*ppuVar13,param_2);
    if (iVar2 == 0) {
      if (*(char *)(ppuVar13 + 3) == '\0') {
        *(undefined1 *)(ppuVar13 + 3) = 1;
        pcVar10 = *ppuVar13;
        local_98 = (byte **)0x0;
        uStack_90 = (undefined8 *)0x0;
        pHVar4 = GetModuleHandleA(pcVar10);
        if (pHVar4 != (HMODULE)0x0) {
          local_240 = (byte *)&local_1e8;
          local_1e8 = 0;
          uStack_1e0 = 0;
          local_1d8 = 0;
          local_1d0 = 0;
          FUN_18001d080(&local_1e8,
                        "48 8B 0D ? ? ? ? 48 8D 15 ? ? ? ? 45 33 C9 48 C7 44 24 20 00 00 00 00 45 33 C0 E8 ? ? ? ? 48 8B 0D ? ? ? ? 45 33 C9 BA F2 03 00 00"
                        ,0x82);
          local_230 = &local_208;
          local_208 = 0;
          uStack_200 = 0;
          local_1f8 = 0;
          local_1f0 = 0;
          strlen(pcVar10);
          FUN_18001d080(&local_208,pcVar10);
          lVar5 = FUN_180015f40(&local_208,&local_1e8);
          if ((lVar5 != 0) &&
             (ppbVar16 = (byte **)((longlong)*(int *)(lVar5 + 3) + 7 + lVar5),
             ppbVar16 == (byte **)((longlong)*(int *)(lVar5 + 0x25) + 0x29 + lVar5))) {
            local_240 = (byte *)CONCAT44(local_240._4_4_,*(undefined4 *)(lVar5 + 0x1e));
            cVar1 = FUN_18014ccc0(pcVar10,ppbVar16);
            if (cVar1 != '\0') {
              local_240 = (byte *)((longlong)(int)local_240 + 0x22 + lVar5);
              cVar1 = FUN_18014ccc0(pcVar10,local_240);
              if (cVar1 != '\0') {
                uStack_90 = (undefined8 *)local_240;
                local_268 = lVar5;
                local_98 = ppbVar16;
                FUN_180014410("[SQL] %s: g_pDB=%p sqlite3_exec=%p (sig @ %p)\n",pcVar10);
              }
            }
          }
        }
        ppuVar15 = ppuVar13 + 1;
        *(undefined4 *)ppuVar15 = (undefined4)local_98;
        *(undefined4 *)((longlong)ppuVar13 + 0xc) = local_98._4_4_;
        *(undefined4 *)(ppuVar13 + 2) = (undefined4)uStack_90;
        *(undefined4 *)((longlong)ppuVar13 + 0x14) = uStack_90._4_4_;
      }
      else {
        ppuVar15 = ppuVar13 + 1;
      }
      goto LAB_18014d7a7;
    }
    ppuVar13 = ppuVar13 + 4;
  } while (ppuVar13 != (undefined **)&DAT_1803e74e0);
  ppuVar15 = (undefined **)&DAT_180425fa0;
LAB_18014d7a7:
  if (((longlong *)*ppuVar15 == (longlong *)0x0) || (ppuVar15[1] == (undefined *)0x0)) {
    uVar14 = 0x17;
    pcVar10 = "sql interface not found";
LAB_18014dda8:
    FUN_180212700(param_1 + 0x30,pcVar10,uVar14);
    return param_1;
  }
  if (*(longlong *)*ppuVar15 == 0) {
    uVar14 = 0x10;
    pcVar10 = "no database open";
    goto LAB_18014dda8;
  }
  local_88 = (byte *)0x0;
  lStack_80 = 0;
  local_78 = 0;
  if ((((longlong *)*ppuVar15 != (longlong *)0x0) && (lVar5 = *(longlong *)*ppuVar15, lVar5 != 0))
     && ((code *)ppuVar15[1] != (code *)0x0)) {
    local_98 = &local_88;
    uStack_90 = (undefined8 *)((ulonglong)uStack_90 & 0xffffffff00000000);
    local_268 = 0;
    iVar2 = (*(code *)ppuVar15[1])(lVar5,"PRAGMA freelist_count",FUN_18014cd50,&local_98);
    if (((iVar2 == 0) && (lStack_80 - (longlong)local_88 == 0x20)) &&
       (*(longlong *)(local_88 + 0x10) != 0)) {
      lVar5 = *(longlong *)(local_88 + 0x10);
      pbVar8 = local_88;
      if (0xf < *(ulonglong *)(local_88 + 0x18)) {
        pbVar8 = *(byte **)local_88;
      }
      if (lVar5 == 0) {
LAB_18014d926:
        lVar5 = -1;
      }
      else {
        if (lVar5 + 10U < 0x10) {
          memset(local_198,0,0x100);
          pbVar9 = &DAT_18035e750;
          do {
            local_198[*pbVar9] = '\x01';
            pbVar9 = pbVar9 + 1;
            pbVar11 = pbVar8;
          } while (pbVar9 != &DAT_18035e75a);
          for (; pbVar11 < pbVar8 + lVar5; pbVar11 = pbVar11 + 1) {
            if (local_198[*pbVar11] == '\0') {
              lVar5 = (longlong)pbVar11 - (longlong)pbVar8;
              goto LAB_18014d92d;
            }
          }
          goto LAB_18014d926;
        }
        lVar5 = FUN_1802d6fd0(pbVar8,lVar5,&DAT_18035e750,10);
      }
LAB_18014d92d:
      FUN_18020d5c0(&local_88);
      if (lVar5 == -1) {
        uVar14 = FUN_18014ce60(&local_208,ppuVar15);
        FUN_18020e8a0(param_1 + 0x10,uVar14);
        FUN_18020e450(&local_208);
        local_70 = (byte *)0x0;
        pbStack_68 = (byte *)0x0;
        local_60 = 0;
        if ((((longlong *)*ppuVar15 != (longlong *)0x0) &&
            (lVar5 = *(longlong *)*ppuVar15, lVar5 != 0)) && ((code *)ppuVar15[1] != (code *)0x0)) {
          local_98 = &local_70;
          uStack_90 = (undefined8 *)((ulonglong)uStack_90 & 0xffffffff00000000);
          local_268 = 0;
          iVar2 = (*(code *)ppuVar15[1])
                            (lVar5,"SELECT name FROM sqlite_master WHERE type=\'table\'",
                             FUN_18014cd50,&local_98);
          if (iVar2 == 0) {
            local_240 = pbStack_68;
            pbVar8 = pbStack_68;
            pbVar9 = local_70;
            if (local_70 != pbStack_68) {
              do {
                pbVar11 = pbVar9;
                if (0xf < *(ulonglong *)(pbVar9 + 0x18)) {
                  pbVar11 = *(byte **)pbVar9;
                }
                if (*(ulonglong *)(pbVar9 + 0x10) == 7) {
                  iVar2 = *(int *)pbVar11 + -0x6b6f6f63;
                  if ((iVar2 == 0) &&
                     (iVar2 = *(ushort *)(pbVar11 + 4) - 0x6569, pbVar8 = local_240, iVar2 == 0)) {
                    iVar2 = pbVar11[6] - 0x73;
                  }
                  if (iVar2 != 0) goto LAB_18014da71;
                }
                else {
LAB_18014da71:
                  pbVar11 = pbVar9;
                  if (0xf < *(ulonglong *)(pbVar9 + 0x18)) {
                    pbVar11 = *(byte **)pbVar9;
                  }
                  if ((((*(ulonglong *)(pbVar9 + 0x10) < 7) ||
                       (pbVar6 = (byte *)thunk_FUN_1802d5870(pbVar11,pbVar11 + 7,"sqlite_",7),
                       pbVar6 == pbVar11 + 7)) || (pbVar8 = local_240, pbVar6 != pbVar11)) &&
                     (cVar1 = FUN_18014d0e0(pbVar9), pbVar8 = local_240, cVar1 != '\0')) {
                    if (0x7fffffffffffffffU - *(longlong *)(pbVar9 + 0x10) < 0x16) {
                    /* WARNING: Subroutine does not return */
                      FUN_1800130a0();
                    }
                    local_260 = pbVar9;
                    if (0xf < *(ulonglong *)(pbVar9 + 0x18)) {
                      local_260 = *(byte **)pbVar9;
                    }
                    local_268 = 0x16;
                    local_258 = *(longlong *)(pbVar9 + 0x10);
                    FUN_18020e930(local_1b8);
                    local_248 = 3;
                    plVar7 = (longlong *)FUN_18021aef0(local_1b8,&DAT_18035e784,1);
                    local_228 = (undefined8 *******)*plVar7;
                    lStack_220 = plVar7[1];
                    local_218 = plVar7[2];
                    uStack_210 = plVar7[3];
                    *(undefined1 *)plVar7 = 0;
                    plVar7[2] = 0;
                    plVar7[3] = 0xf;
                    local_248 = 7;
                    pppppppuVar12 = &local_228;
                    if (0xf < uStack_210) {
                      pppppppuVar12 = local_228;
                    }
                    if ((((longlong *)*ppuVar15 == (longlong *)0x0) ||
                        (lVar5 = *(longlong *)*ppuVar15, lVar5 == 0)) ||
                       ((code *)ppuVar15[1] == (code *)0x0)) {
                      iVar2 = -1;
                    }
                    else {
                      local_268 = 0;
                      iVar2 = (*(code *)ppuVar15[1])(lVar5,pppppppuVar12,0,0);
                    }
                    local_248 = 3;
                    FUN_18020e450(&local_228);
                    local_248 = 1;
                    FUN_18020e450(local_1b8);
                    pbVar8 = local_240;
                    if (iVar2 == 0) {
                      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
                    }
                  }
                }
                pbVar9 = pbVar9 + 0x20;
              } while (pbVar9 != pbVar8);
            }
            local_58 = (byte *)0x0;
            pbStack_50 = (byte *)0x0;
            local_48 = 0;
            if ((((longlong *)*ppuVar15 != (longlong *)0x0) &&
                (lVar5 = *(longlong *)*ppuVar15, lVar5 != 0)) &&
               ((code *)ppuVar15[1] != (code *)0x0)) {
              local_98 = &local_58;
              uStack_90 = (undefined8 *)((ulonglong)uStack_90 & 0xffffffff00000000);
              local_268 = 0;
              iVar2 = (*(code *)ppuVar15[1])
                                (lVar5,"SELECT COUNT(*) FROM cookies",FUN_18014cd50,&local_98);
              if ((iVar2 == 0) && (local_58 != pbStack_50)) {
                pbVar8 = local_58;
                if (0xf < *(ulonglong *)(local_58 + 0x18)) {
                  pbVar8 = *(byte **)local_58;
                }
                iVar2 = atoi((char *)pbVar8);
                *(int *)(param_1 + 8) = iVar2;
              }
            }
            if (0 < *(int *)(param_1 + 8)) {
              if ((((longlong *)*ppuVar15 != (longlong *)0x0) &&
                  (lVar5 = *(longlong *)*ppuVar15, lVar5 != 0)) &&
                 ((code *)ppuVar15[1] != (code *)0x0)) {
                local_268 = 0;
                iVar2 = (*(code *)ppuVar15[1])(lVar5,"DELETE FROM cookies",0,0);
                if (iVar2 == 0) goto LAB_18014dcf9;
              }
              *(undefined4 *)(param_1 + 8) = 0;
            }
LAB_18014dcf9:
            uVar3 = FUN_18014d1a0(ppuVar15,local_238);
            *(undefined4 *)(param_1 + 0xc) = uVar3;
            *param_1 = 1;
            local_248 = 0;
            FUN_18020d5c0(&local_58);
            FUN_18020d5c0(&local_70);
            return param_1;
          }
        }
        FUN_180212700(param_1 + 0x30,"schema query failed",0x13);
        local_248 = 0;
        FUN_18020d5c0(&local_70);
        return param_1;
      }
      goto LAB_18014dd74;
    }
  }
  FUN_18020d5c0(&local_88);
LAB_18014dd74:
  FUN_180212700(param_1 + 0x30,"self-test failed",0x10);
  return param_1;
}


