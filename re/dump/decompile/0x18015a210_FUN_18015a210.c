// 0x18015a210  FUN_18015a210
// size=393 thunk=false
// signature: undefined FUN_18015a210()
// status: ok


undefined8 * FUN_18015a210(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined **ppuVar8;
  int iVar9;
  ulonglong uVar7;
  ulonglong uVar10;
  
  *param_1 = vftable_Features_DamageLogger_DamageLoggerFeature;
  puVar1 = param_1 + 1;
  uVar7 = 0;
  *puVar1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar4 = (undefined8 *)FUN_1802d8350(0x10);
  puVar4[1] = 0;
  *puVar1 = puVar4;
  *puVar4 = puVar1;
  param_1[6] = 0;
  param_1[7] = 0;
  lVar5 = FUN_1802d8350(0x80);
  *(longlong *)lVar5 = lVar5;
  *(longlong *)(lVar5 + 8) = lVar5;
  *(longlong *)(lVar5 + 0x10) = lVar5;
  *(undefined2 *)(lVar5 + 0x18) = 0x101;
  param_1[6] = lVar5;
  iVar2 = DAT_1803ff708;
  DAT_1804099d8 = param_1;
  if (s_player_hurt_18034b8c8[0] != '\0') {
    lVar5 = (longlong)DAT_1803ff708;
    uVar10 = uVar7;
    if (0 < DAT_1803ff708) {
      do {
        iVar9 = (int)uVar10;
        if (((char *)(&DAT_1803eb898)[(longlong)iVar9 * 0xb] != (char *)0x0) &&
           (iVar3 = strcmp((char *)(&DAT_1803eb898)[(longlong)iVar9 * 0xb],"player_hurt"),
           iVar3 == 0)) {
          ppuVar8 = &PTR_vftable_Core_GameEvents_Sink_1803eb890 + (longlong)iVar9 * 0xb;
          if (ppuVar8 != (undefined **)0x0) goto LAB_18015a327;
          break;
        }
        uVar10 = (ulonglong)(iVar9 + 1U);
      } while ((int)(iVar9 + 1U) < iVar2);
    }
    if (iVar2 < 8) {
      ppuVar8 = &PTR_vftable_Core_GameEvents_Sink_1803eb890 + lVar5 * 0xb;
      DAT_1803ff708 = iVar2 + 1;
      (&DAT_1803eb898)[lVar5 * 0xb] = "player_hurt";
LAB_18015a327:
      iVar2 = *(int *)(ppuVar8 + 10);
      if (0 < iVar2) {
        do {
          if (ppuVar8[(uVar7 + 1) * 2] == &LAB_18015c4e0) {
            return param_1;
          }
          uVar6 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar6;
        } while ((int)uVar6 < iVar2);
      }
      if (iVar2 < 4) {
        ppuVar8[((longlong)iVar2 + 1) * 2] = &LAB_18015c4e0;
        ppuVar8[((longlong)iVar2 + 1) * 2 + 1] = FUN_180159710;
        *(int *)(ppuVar8 + 10) = *(int *)(ppuVar8 + 10) + 1;
        DAT_1803e7538 = 0xbf800000;
      }
    }
    else {
      FUN_180014410("[GAMEEVENT] sink table full, \'%s\' dropped\n","player_hurt");
    }
  }
  return param_1;
}


