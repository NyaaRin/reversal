// 0x1800f5a50  Features_Spectators_SpectatorsFeature_vfunc06
// size=944 thunk=false
// signature: undefined Features_Spectators_SpectatorsFeature_vfunc06()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Features_Spectators_SpectatorsFeature_vfunc06(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  size_t sVar14;
  undefined8 ****ppppuVar15;
  char *pcVar16;
  int iVar17;
  ulonglong local_f8;
  ulonglong uStack_f0;
  ulonglong local_e8;
  ulonglong uStack_e0;
  undefined4 local_d8;
  ulonglong local_d0;
  ulonglong uStack_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  undefined8 ***local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong local_90;
  undefined8 ***local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  undefined8 ***local_68;
  undefined8 ***local_60;
  ulonglong *local_58;
  
  pcVar2 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar7 = (**(code **)(*DAT_1803fa668 + 0x60))();
  plVar10 = (longlong *)(*pcVar2)(DAT_1803fa360,uVar7);
  if (((plVar10 == (longlong *)0x0) || (DAT_1803fa668 == (longlong *)0x0)) ||
     (cVar6 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar6 == '\0')) {
    FUN_18020ba00(param_1 + 8);
  }
  else {
    cVar6 = FUN_18001c330(plVar10);
    plVar11 = plVar10;
    if (cVar6 == '\0') {
      plVar11 = (longlong *)FUN_18001fbc0(plVar10);
    }
    FUN_18020ba00(param_1 + 8);
    uVar5 = _UNK_1803814b8;
    uVar4 = _DAT_1803814b0;
    if (0 < *(int *)(DAT_1803fa608 + 0x1c)) {
      iVar17 = 1;
      plVar1 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      do {
        plVar12 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,iVar17);
        if (((plVar12 != (longlong *)0x0) && (plVar12 != plVar10)) &&
           (plVar13 = (longlong *)FUN_18001fbc0(plVar12), plVar13 == plVar11)) {
          plVar13 = (longlong *)(**(code **)(*plVar12 + 0x20))(plVar12);
          if (plVar13 == (longlong *)0x0) {
            pcVar16 = "user";
          }
          else {
            iVar8 = (**(code **)(*plVar13 + 0x48))(plVar13);
            if (iVar8 < 1) {
              pcVar16 = "user";
            }
            else if (((DAT_180426150 == (code *)0x0) ||
                     (pcVar16 = (char *)(*DAT_180426150)(iVar8), pcVar16 == (char *)0x0)) ||
                    (*pcVar16 == '\0')) {
              if (DAT_1803fe9e8 == (code *)0x0) {
                pcVar16 = "user";
              }
              else {
                pcVar16 = (char *)(*DAT_1803fe9e8)(iVar8,"UserGroup",&DAT_180340268);
              }
            }
          }
          local_88 = (undefined8 ****)0x0;
          uStack_80 = 0;
          local_78 = 0;
          local_70 = 0;
          sVar14 = strlen(pcVar16);
          FUN_18001d080(&local_88,pcVar16,sVar14);
          uVar7 = FUN_18001fad0(plVar12);
          local_68 = &local_a8;
          plVar12 = (longlong *)(**(code **)(*plVar12 + 0x20))(plVar12);
          if ((plVar12 == (longlong *)0x0) ||
             (uVar9 = (**(code **)(*plVar12 + 0x48))(plVar12), DAT_1803fa668 == (longlong *)0x0)) {
LAB_1800f5c65:
            pcVar16 = "unknown";
          }
          else {
            pcVar16 = (char *)(*plVar1 + 0x1fb0);
            cVar6 = (**(code **)(*DAT_1803fa668 + 0x40))(DAT_1803fa668,uVar9,pcVar16);
            if (cVar6 == '\0') goto LAB_1800f5c65;
          }
          local_a8 = (undefined8 ****)0x0;
          uStack_a0 = 0;
          local_98 = 0;
          local_90 = 0;
          sVar14 = strlen(pcVar16);
          FUN_18001d080(&local_a8,pcVar16,sVar14);
          local_60 = &local_a8;
          uStack_f0 = 0;
          local_e8 = uVar4;
          uStack_e0 = uVar5;
          local_f8 = 0;
          uStack_c8 = 0;
          local_c0 = 0;
          local_b8 = 0xf;
          local_d0 = 0;
          ppppuVar15 = &local_a8;
          if (0xf < local_90) {
            ppppuVar15 = (undefined8 ****)local_a8;
          }
          FUN_180212700(&local_f8,ppppuVar15,local_98);
          ppppuVar15 = &local_88;
          if (0xf < local_70) {
            ppppuVar15 = (undefined8 ****)local_88;
          }
          local_d8 = uVar7;
          FUN_180212700(&local_d0,ppppuVar15,local_78);
          FUN_18020e450(&local_a8);
          FUN_18020e450(&local_88);
          puVar3 = *(ulonglong **)(param_1 + 0x10);
          if (puVar3 == *(ulonglong **)(param_1 + 0x18)) {
            FUN_1802268c0(param_1 + 8,puVar3,&local_f8);
          }
          else {
            *puVar3 = local_f8;
            puVar3[1] = uStack_f0;
            puVar3[2] = local_e8;
            puVar3[3] = uStack_e0;
            local_e8 = uVar4;
            uStack_e0 = uVar5;
            local_f8 = local_f8 & 0xffffffffffffff00;
            *(undefined4 *)(puVar3 + 4) = local_d8;
            puVar3[5] = local_d0;
            puVar3[6] = uStack_c8;
            puVar3[7] = local_c0;
            puVar3[8] = local_b8;
            local_c0 = 0;
            local_b8 = 0xf;
            local_d0 = local_d0 & 0xffffffffffffff00;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x48;
            local_58 = puVar3;
          }
          FUN_18020e450(&local_d0);
          FUN_18020e450(&local_f8);
        }
        iVar17 = iVar17 + 1;
      } while (iVar17 <= *(int *)(DAT_1803fa608 + 0x1c));
    }
  }
  return;
}


