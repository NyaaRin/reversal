// 0x1800d81c0  FUN_1800d81c0
// size=620 thunk=false
// signature: undefined FUN_1800d81c0()
// status: ok


void FUN_1800d81c0(longlong param_1,longlong param_2,longlong param_3,char *param_4)

{
  int *piVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  undefined **ppuVar6;
  int *piVar7;
  int iVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  
  piVar1 = (int *)(param_1 + 0x14);
  pcVar2 = (char *)(param_1 + 0x18);
  piVar3 = (int *)(param_1 + 0x1c);
  if (param_3 != *(longlong *)(param_1 + 8)) {
    *(undefined8 *)(param_1 + 8) = 0;
    *piVar1 = -1;
    *pcVar2 = '\0';
    *piVar3 = -1;
    *(longlong *)(param_1 + 8) = param_3;
    iVar4 = strcmp(param_4,"ptp_cs_autoshotgun");
    if ((iVar4 == 0) || (iVar4 = strcmp(param_4,"ptp_cs_pumpshotgun"), iVar4 == 0)) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      for (ppuVar6 = &PTR_s_ptp_cs_ak47_18033b3f0;
          ppuVar6 != &Features::DamageFeed::DamageFeedFeature::vftable_meta_ptr;
          ppuVar6 = ppuVar6 + 1) {
        iVar4 = strcmp(param_4,*ppuVar6);
        if (iVar4 == 0) {
          *(undefined4 *)(param_1 + 0x10) = 4;
          goto LAB_1800d82c7;
        }
      }
      *(undefined4 *)(param_1 + 0x10) = 2;
    }
  }
LAB_1800d82c7:
  piVar7 = (int *)(param_1 + 0x10);
  if (0 < *piVar7) {
    puVar5 = (uint *)(param_2 + 0x20);
    if ((*(byte *)puVar5 & 1) == 0) {
      *piVar1 = -1;
      *pcVar2 = '\0';
      *piVar3 = -1;
    }
    else {
      iVar4 = FUN_18001e5b0(param_3);
      if (*pcVar2 == '\0') {
        *piVar1 = iVar4;
        *piVar3 = -1;
        *pcVar2 = '\x01';
      }
      else if (((-1 < *piVar1) && (-1 < iVar4)) && (iVar4 <= *piVar1 - *piVar7)) {
        if (*piVar3 < 0) {
          *piVar3 = 0;
        }
        else {
          *piVar3 = *piVar3 + 1;
        }
        dVar10 = (double)FUN_18001eff0(param_3);
        if (DAT_1803fa608 == 0) {
          dVar11 = 0.0;
        }
        else {
          dVar11 = (double)DAT_1803de068 * *(double *)(DAT_1803fa608 + 0x28);
        }
        if ((dVar11 < dVar10) || (7 < *piVar3)) {
          *puVar5 = *puVar5 & 0xfffffffe;
          *pcVar2 = '\0';
          *piVar1 = -1;
          *piVar3 = -1;
          iVar8 = DAT_1803feee4 + 1;
          bVar9 = DAT_1803feee4 == (DAT_1803feee4 / 0x14) * 0x14;
          DAT_1803feee4 = iVar8;
          if (bVar9) {
            FUN_180014410("[PTP] spray reset: released IN_ATTACK for 1 cmd (%s clip=%d thr=%d cooldown=%d)\n"
                          ,param_4,iVar4,*piVar7,dVar11 < dVar10);
          }
        }
      }
    }
  }
  return;
}


