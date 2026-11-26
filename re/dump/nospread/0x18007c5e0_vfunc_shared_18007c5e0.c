// 18007c5e0  vfunc_shared_18007c5e0
// signature: undefined vfunc_shared_18007c5e0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void vfunc_shared_18007c5e0(longlong param_1,longlong param_2)

{
  code *pcVar1;
  longlong *plVar2;
  double *pdVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 **ppuVar8;
  longlong lVar9;
  double *pdVar10;
  char *pcVar11;
  bool bVar12;
  double dVar13;
  double dVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 local_af;
  undefined2 local_ab;
  undefined1 local_a9;
  float local_a4;
  float local_a0;
  int local_9c;
  undefined8 local_98;
  longlong local_90;
  double local_88;
  undefined8 *local_80;
  undefined4 uStack_78;
  double *local_70;
  longlong *local_68;
  undefined8 *puStack_60;
  double *local_58;
  undefined8 *local_50 [2];
  double *local_40;
  
  local_90 = param_1;
  if (*(char *)(param_1 + 0x30) == '\0') {
    if (DAT_1803fe3e8 == 0) {
      DAT_1803fe3e8 = FUN_180016fb0("sv_ut_swb_bullet_debug");
    }
    FUN_180014410("[UTSWB-DIAG] NOT CONFIRMED (convar=%d) -- stock CW20 fallback active\n",
                  DAT_1803fe3e8 != 0);
  }
  else {
    dVar14 = DAT_180380d08;
    if (DAT_1803fa608 == 0) {
      uVar17 = 0;
      uVar18 = 0;
      local_98 = 0;
    }
    else {
      local_98 = *(undefined8 *)(DAT_1803fa608 + 0x10);
      uVar17 = (undefined4)local_98;
      uVar18 = (undefined4)((ulonglong)local_98 >> 0x20);
      if (0.0 < *(double *)(DAT_1803fa608 + 0x28)) {
        dVar14 = *(double *)(DAT_1803fa608 + 0x28);
      }
    }
    pdVar10 = (double *)(param_1 + 0x60);
    dVar14 = ((double)CONCAT44(uVar18,uVar17) - *pdVar10) / dVar14;
    local_88 = dVar14;
    iVar5 = llround();
    dVar13 = DAT_180380c28;
    dVar14 = dVar14 - (double)iVar5;
    uVar15 = SUB84(dVar14,0) & _DAT_1803817d0;
    uVar16 = (uint)((ulonglong)dVar14 >> 0x20) & _UNK_1803817d4;
    if (((double)CONCAT44(uVar16,uVar15) <= DAT_180380c28 &&
         DAT_180380c28 != (double)CONCAT44(uVar16,uVar15)) && (iVar5 != 0)) {
      if (iVar5 == *(int *)(param_1 + 0x58)) {
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
        if (1 < *(int *)(param_1 + 0x5c)) {
          *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
          *(undefined8 *)(param_1 + 0x58) = 0;
          dVar13 = (double)FUN_180014410("[UTSWB] seed calibrated: offset now %d ticks\n",
                                         *(undefined4 *)(param_1 + 0x54));
        }
      }
      else {
        *(int *)(param_1 + 0x58) = iVar5;
        *(undefined4 *)(param_1 + 0x5c) = 1;
      }
    }
    local_a0 = -1.0;
    local_a4 = -1.0;
    bVar12 = DAT_1803fa678 == 0;
    if (bVar12) {
      local_80 = (undefined8 *)0x0;
      uStack_78 = 0;
      local_70 = (double *)0x0;
      ppuVar8 = &local_80;
    }
    else {
      ppuVar8 = (undefined8 **)FUN_18001bcd0(dVar13,local_50);
    }
    pdVar3 = local_70;
    plVar2 = *ppuVar8;
    local_68 = plVar2;
    puStack_60 = ppuVar8[1];
    local_58 = (double *)ppuVar8[2];
    if ((bVar12) && (local_80 != (undefined8 *)0x0)) {
      (**(code **)*local_80)();
      DAT_1803fa338 = pdVar3 != (double *)0x0;
      DAT_1803fa330 = pdVar10;
      if ((bool)DAT_1803fa338) {
        DAT_1803fa330 = pdVar3;
      }
      DAT_1803fa339 = local_af;
      DAT_1803fa33d = local_ab;
      DAT_1803fa33f = local_a9;
    }
    if ((!bVar12) && (local_50[0] != (undefined8 *)0x0)) {
      (**(code **)*local_50[0])();
      DAT_1803fa338 = local_40 != (double *)0x0;
      DAT_1803fa330 = pdVar10;
      if ((bool)DAT_1803fa338) {
        DAT_1803fa330 = local_40;
      }
      DAT_1803fa339 = local_af;
      DAT_1803fa33d = local_ab;
      DAT_1803fa33f = local_a9;
    }
    if (plVar2 != (longlong *)0x0) {
      iVar5 = (**(code **)*plVar2)(plVar2);
      local_9c = iVar5;
      if ((param_2 != 0) && (cVar4 = FUN_18001e2b0(param_2,plVar2), cVar4 != '\0')) {
        FUN_18007ae30(plVar2,"_curSpreadCone","CurCone",&local_a0);
      }
      pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
      uVar6 = (**(code **)(*DAT_1803fa668 + 0x60))();
      lVar9 = (*pcVar1)(DAT_1803fa360,uVar6);
      if ((lVar9 != 0) && (cVar4 = FUN_18001e2b0(lVar9,plVar2), cVar4 != '\0')) {
        FUN_18007ae30(plVar2,"swb_ViewAff","ViewAff",&local_a4);
      }
      while (iVar7 = (**(code **)*plVar2)(plVar2), iVar5 < iVar7) {
        (**(code **)(*plVar2 + 0x10))(plVar2,1);
      }
    }
    pcVar11 = "legacy";
    if (*(char *)(param_1 + 0x32) != '\0') {
      pcVar11 = "2026";
    }
    FUN_180014410("[UTSWB-DIAG] layout=%s m9k=%d predCT=%.17g actualCT=%.17g dTicks=%.3f cone(cached=%.4f proj=%.4f live=%.4f basemul=%.3f) viewaff(proj=%.4f live=%.4f)\n"
                  ,pcVar11,*(undefined1 *)(param_1 + 0x31),*pdVar10,CONCAT44(uVar18,uVar17),local_88
                  ,(double)*(float *)(param_1 + 0x6c),(double)*(float *)(param_1 + 0x68),
                  (double)local_a0,(double)*(float *)(param_1 + 0x34),
                  (double)*(float *)(param_1 + 0x70),(double)local_a4);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)*plVar2)(plVar2);
      DAT_1803fa338 = local_58 != (double *)0x0;
      if ((bool)DAT_1803fa338) {
        pdVar10 = local_58;
      }
      DAT_1803fa339 = local_af;
      DAT_1803fa33d = local_ab;
      DAT_1803fa33f = local_a9;
      DAT_1803fa330 = pdVar10;
    }
  }
  return;
}


