// 0x180205720  FUN_180205720
// size=397 thunk=false
// signature: undefined FUN_180205720()
// status: ok


void FUN_180205720(void)

{
  int iVar1;
  int iVar2;
  undefined8 *_Memory;
  uint uVar3;
  ulonglong uVar4;
  undefined **ppuVar5;
  int iVar6;
  longlong lVar7;
  
  _Memory = (undefined8 *)FUN_1802d8350();
  *_Memory = vftable_Features_HVH_Resolver_ResolverFeature;
  iVar1 = DAT_1803ff708;
  if (s_player_hurt_18034b8c8[0] != '\0') {
    iVar6 = 0;
    lVar7 = (longlong)DAT_1803ff708;
    if (0 < DAT_1803ff708) {
      do {
        if (((char *)(&DAT_1803eb898)[(longlong)iVar6 * 0xb] != (char *)0x0) &&
           (iVar2 = strcmp((char *)(&DAT_1803eb898)[(longlong)iVar6 * 0xb],"player_hurt"),
           iVar2 == 0)) {
          ppuVar5 = &PTR_vftable_Core_GameEvents_Sink_1803eb890 + (longlong)iVar6 * 0xb;
          if (ppuVar5 != (undefined **)0x0) goto LAB_1802057d7;
          break;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar1);
    }
    if (iVar1 < 8) {
      ppuVar5 = &PTR_vftable_Core_GameEvents_Sink_1803eb890 + lVar7 * 0xb;
      DAT_1803ff708 = iVar1 + 1;
      (&DAT_1803eb898)[lVar7 * 0xb] = "player_hurt";
LAB_1802057d7:
      uVar4 = 0;
      iVar1 = *(int *)(ppuVar5 + 10);
      if (0 < iVar1) {
        do {
          if ((code *)ppuVar5[(uVar4 + 1) * 2] == FUN_1800bc110) goto LAB_18020582f;
          uVar3 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar3;
        } while ((int)uVar3 < iVar1);
      }
      if (iVar1 < 4) {
        ppuVar5[((longlong)iVar1 + 1) * 2] = FUN_1800bc110;
        ppuVar5[((longlong)iVar1 + 1) * 2 + 1] = FUN_1800b8370;
        *(int *)(ppuVar5 + 10) = *(int *)(ppuVar5 + 10) + 1;
        DAT_1803e7538 = 0xbf800000;
      }
    }
    else {
      FUN_180014410("[GAMEEVENT] sink table full, \'%s\' dropped\n","player_hurt");
    }
  }
LAB_18020582f:
  if (DAT_1803fcc70 == DAT_1803fcc78) {
    FUN_180233a50();
  }
  else {
    *DAT_1803fcc70 = _Memory;
    DAT_1803fcc70 = DAT_1803fcc70 + 1;
    _Memory = (undefined8 *)0x0;
  }
  if (_Memory != (undefined8 *)0x0) {
    free(_Memory);
  }
  return;
}


