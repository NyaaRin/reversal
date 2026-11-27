// 0x1801f8810  FUN_1801f8810
// size=979 thunk=false
// signature: undefined FUN_1801f8810()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801f8810(void)

{
  void *lp;
  BOOL BVar1;
  int iVar2;
  undefined8 *lp_00;
  uint uVar3;
  ulonglong uVar4;
  undefined **ppuVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  undefined1 local_88 [32];
  void *local_68;
  undefined8 uStack_60;
  longlong local_58 [2];
  longlong *local_48;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_1803da4c0 ^ (ulonglong)local_88;
  if (((((DAT_1803ff231 == '\0') && (DAT_1803fa668 != (longlong *)0x0)) &&
       (lp_00 = (undefined8 *)(**(code **)(*DAT_1803fa668 + 0x240))(), lp_00 != (undefined8 *)0x0))
      && ((BVar1 = IsBadReadPtr(lp_00,8), BVar1 == 0 && (lp = (void *)*lp_00, lp != (void *)0x0))))
     && (BVar1 = IsBadReadPtr(lp,0x148), BVar1 == 0)) {
    DAT_1803ff231 = '\x01';
    local_68 = (void *)0x0;
    uStack_60 = 0;
    local_38 = local_58;
    local_58[0] = 0;
    local_58[1] = 0;
    local_58[0] = FUN_1802d8350(0x30);
    *(longlong *)local_58[0] = local_58[0];
    *(longlong *)(local_58[0] + 8) = local_58[0];
    *(longlong *)(local_58[0] + 0x10) = local_58[0];
    *(undefined2 *)(local_58[0] + 0x18) = 0x101;
    local_68 = lp;
    FUN_1801ecdc0(&DAT_1803facd8,&local_68);
    local_48 = local_58;
    FUN_1802095f0(local_58);
    local_48 = (longlong *)CONCAT44(local_48._4_4_,0x28);
    local_40 = *(undefined8 *)(DAT_1803facd8 + 0x140);
    FUN_180208e00(&DAT_1803face8,&local_68,&local_48);
    DAT_1803fa408 = *(undefined8 *)((longlong)local_68 + 0x28);
    LOCK();
    UNLOCK();
    VirtualProtect((LPVOID)(DAT_1803facd8 + 0x140),8,0x40,(PDWORD)&local_38);
    *(code **)(DAT_1803facd8 + 0x140) = FUN_1801f84d0;
    VirtualProtect((LPVOID)(DAT_1803facd8 + 0x140),8,(DWORD)local_38,(PDWORD)0x0);
    FUN_180014410("[CLCMOVE] SendNetMsg(%d) hooked, org=%p\n",0x28,DAT_1803fa408);
    iVar6 = DAT_1803ff708;
    DAT_1803ff940 = &LAB_1801f8bf0;
    DAT_1803ff938 = &LAB_1801f8c00;
    DAT_1803ff8c8 = FUN_1801f8c20;
    DAT_180409bb0 = &LAB_1801f8c60;
    DAT_180409b98 = &LAB_1801f8c70;
    iVar8 = 0;
    lVar7 = (longlong)DAT_1803ff708;
    if (0 < DAT_1803ff708) {
      do {
        if (((char *)(&DAT_1803eb898)[(longlong)iVar8 * 0xb] != (char *)0x0) &&
           (iVar2 = strcmp((char *)(&DAT_1803eb898)[(longlong)iVar8 * 0xb],"player_connect"),
           iVar2 == 0)) {
          ppuVar5 = &PTR_vftable_Core_GameEvents_Sink_1803eb890 + (longlong)iVar8 * 0xb;
          if (ppuVar5 != (undefined **)0x0) goto LAB_1801f8a87;
          break;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar6);
    }
    if (iVar6 < 8) {
      ppuVar5 = &PTR_vftable_Core_GameEvents_Sink_1803eb890 + lVar7 * 0xb;
      iVar6 = iVar6 + 1;
      DAT_1803ff708 = iVar6;
      (&DAT_1803eb898)[lVar7 * 0xb] = "player_connect";
LAB_1801f8a87:
      uVar4 = 0;
      iVar8 = *(int *)(ppuVar5 + 10);
      if (0 < iVar8) {
        do {
          if ((code *)ppuVar5[(uVar4 + 1) * 2] == FUN_1801f8c80) goto LAB_1801f8ae5;
          uVar3 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar3;
        } while ((int)uVar3 < iVar8);
      }
      if (iVar8 < 4) {
        ppuVar5[((longlong)iVar8 + 1) * 2] = FUN_1801f8c80;
        ppuVar5[((longlong)iVar8 + 1) * 2 + 1] = &LAB_1801f8e00;
        *(int *)(ppuVar5 + 10) = *(int *)(ppuVar5 + 10) + 1;
        DAT_1803e7538 = 0xbf800000;
        iVar6 = DAT_1803ff708;
      }
    }
    else {
      FUN_180014410("[GAMEEVENT] sink table full, \'%s\' dropped\n","player_connect");
      iVar6 = DAT_1803ff708;
    }
LAB_1801f8ae5:
    iVar8 = 0;
    if (0 < iVar6) {
      do {
        if (((char *)(&DAT_1803eb898)[(longlong)iVar8 * 0xb] != (char *)0x0) &&
           (iVar2 = strcmp((char *)(&DAT_1803eb898)[(longlong)iVar8 * 0xb],"player_disconnect"),
           iVar2 == 0)) {
          ppuVar5 = &PTR_vftable_Core_GameEvents_Sink_1803eb890 + (longlong)iVar8 * 0xb;
          if (ppuVar5 != (undefined **)0x0) goto LAB_1801f8b5a;
          break;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar6);
    }
    if (iVar6 < 8) {
      ppuVar5 = &PTR_vftable_Core_GameEvents_Sink_1803eb890 + (longlong)iVar6 * 0xb;
      DAT_1803ff708 = iVar6 + 1;
      (&DAT_1803eb898)[(longlong)iVar6 * 0xb] = "player_disconnect";
LAB_1801f8b5a:
      uVar4 = 0;
      iVar6 = *(int *)(ppuVar5 + 10);
      if (0 < iVar6) {
        do {
          if (ppuVar5[(uVar4 + 1) * 2] == &LAB_1801f8ff0) goto LAB_1801f8baf;
          uVar3 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar3;
        } while ((int)uVar3 < iVar6);
      }
      if (iVar6 < 4) {
        ppuVar5[((longlong)iVar6 + 1) * 2] = &LAB_1801f8ff0;
        ppuVar5[((longlong)iVar6 + 1) * 2 + 1] = &LAB_1801f9000;
        *(int *)(ppuVar5 + 10) = *(int *)(ppuVar5 + 10) + 1;
        DAT_1803e7538 = 0xbf800000;
      }
    }
    else {
      FUN_180014410("[GAMEEVENT] sink table full, \'%s\' dropped\n","player_disconnect");
    }
LAB_1801f8baf:
    DAT_1803ff7c0 = FUN_1801f9010;
    DAT_180409ba0 = FUN_1801f9150;
  }
  return;
}


