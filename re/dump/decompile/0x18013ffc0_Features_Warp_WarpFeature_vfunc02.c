// 0x18013ffc0  Features_Warp_WarpFeature_vfunc02
// size=1816 thunk=false
// signature: undefined Features_Warp_WarpFeature_vfunc02()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void Features_Warp_WarpFeature_vfunc02(void)

{
  uint uVar1;
  code *pcVar2;
  void *pvVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  char cVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  BOOL BVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  int *piVar14;
  char *pcVar15;
  int iVar16;
  uint uVar17;
  void *lp;
  bool bVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_b8 [32];
  char *local_98;
  int local_90;
  char local_88;
  char local_87;
  undefined8 local_80;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  longlong local_50 [7];
  
  local_50[3] = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  if (DAT_1803fa668 == (longlong *)0x0) {
    local_50[0] = 0;
  }
  else {
    local_50[0] = (**(code **)(*DAT_1803fa668 + 0x240))();
  }
  FUN_1800b37b0();
  if ((-1 < DAT_1803e7b6c) && (DAT_1803e7b6c = DAT_1803e7b6c + 1, 0xb < DAT_1803e7b6c)) {
    pcVar2 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar9 = (**(code **)(*DAT_1803fa668 + 0x60))();
    lVar12 = (*pcVar2)(DAT_1803fa360,uVar9);
    if (lVar12 != 0) {
      FUN_18001daf0(lVar12,&local_80);
      fVar19 = (local_80._4_4_ - DAT_1805b888c) * (local_80._4_4_ - DAT_1805b888c) +
               ((float)local_80 - DAT_1805b8888) * ((float)local_80 - DAT_1805b8888);
      if (fVar19 < 0.0) {
        fVar19 = sqrtf(fVar19);
      }
      else {
        fVar19 = SQRT(fVar19);
      }
      if ((DAT_1803fe648 == (void *)0x0) &&
         ((DAT_1803fa340 == 0 ||
          (DAT_1803fe648 = (void *)FUN_180016fb0(), DAT_1803fe648 == (void *)0x0)))) {
        local_98 = "<not found>";
      }
      else {
        pvVar3 = DAT_1803fe648;
        lp = *(void **)((longlong)DAT_1803fe648 + 0x38);
        if ((lp == (void *)0x0) ||
           ((lp == DAT_1803fe648 || (BVar10 = IsBadReadPtr(lp,0x60), BVar10 != 0)))) {
          lp = pvVar3;
        }
        pcVar15 = *(char **)((longlong)lp + 0x48);
        if ((pcVar15 == (char *)0x0) || (BVar10 = IsBadReadPtr(pcVar15,2), BVar10 != 0)) {
          bVar18 = false;
        }
        else {
          bVar18 = true;
        }
        local_98 = "";
        if (bVar18) {
          local_98 = pcVar15;
        }
      }
      if (DAT_18040159c < 1) {
        fVar20 = 0.0;
      }
      else {
        fVar20 = fVar19 / (float)DAT_18040159c;
      }
      FUN_180014410("[WARP] charge=%d -> travelled %.0fu (%.1f u/tick) sv_maxusrcmdprocessticks=%s\n"
                    ,DAT_18040159c,(double)fVar19,(double)fVar20);
    }
    DAT_1803e7b6c = -1;
  }
  if ((local_50[0] != 0) && (DAT_180401594 == '\0')) {
    local_50[1] = 0x93fd561a96ab0c67;
    local_50[2] = 0x35dd584952165cb0;
    plVar13 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_80,local_50 + 1);
    plVar13 = (longlong *)FUN_180241a30(*plVar13 + 0x28,local_70,local_50 + 2);
    piVar14 = (int *)FUN_1802029c0(*plVar13 + 0x28);
    iVar11 = 0x20;
    if (0x20 < *piVar14 + 8) {
      iVar11 = *piVar14 + 8;
    }
    iVar16 = *(int *)(local_50[0] + 0xc) - *(int *)(local_50[0] + 0x14);
    if ((iVar11 < iVar16) || (iVar16 < 0)) {
      *(int *)(local_50[0] + 0xc) = *(int *)(local_50[0] + 0x14) + 1;
    }
  }
  local_50[2] = 0x93fd561a96ab0c67;
  local_50[1] = 0x161b55506f557a6d;
  plVar13 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_70,local_50 + 2);
  plVar13 = (longlong *)FUN_180241a30(*plVar13 + 0x28,&local_80,local_50 + 1);
  pcVar15 = (char *)FUN_1801fcfc0(*plVar13 + 0x28);
  if (*pcVar15 != '\0') {
    pcVar2 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar9 = (**(code **)(*DAT_1803fa668 + 0x60))();
    lVar12 = (*pcVar2)(DAT_1803fa360,uVar9);
    if ((lVar12 != 0) && (cVar5 = FUN_18001c330(lVar12), cVar5 != '\0')) {
      if (local_50[0] == 0) {
        return;
      }
      local_50[2] = 0x93fd561a96ab0c67;
      local_50[1] = 0x35dd584952165cb0;
      plVar13 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_70,local_50 + 2);
      plVar13 = (longlong *)FUN_180241a30(*plVar13 + 0x28,&local_80,local_50 + 1);
      piVar14 = (int *)FUN_1802029c0(*plVar13 + 0x28);
      iVar11 = *piVar14;
      iVar16 = 1;
      if ((0 < iVar11) && (iVar16 = iVar11, 0x40 < iVar11)) {
        iVar16 = 0x40;
      }
      local_50[2] = 0x93fd561a96ab0c67;
      local_50[1] = 0xfe939fed9e625efe;
      plVar13 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_70,local_50 + 2);
      plVar13 = (longlong *)FUN_180241a30(*plVar13 + 0x28,&local_80,local_50 + 1);
      pcVar15 = (char *)FUN_1801fcfc0(*plVar13 + 0x28);
      if ((((*pcVar15 != '\0') &&
           ((DAT_1804261b8 != 0 ||
            ((DAT_1803fa340 != 0 &&
             (DAT_1804261b8 = FUN_180016fb0("sv_maxusrcmdprocessticks"), DAT_1804261b8 != 0)))))) &&
          (iVar11 = FUN_1800197a0(DAT_1804261b8), 1 < iVar11)) && (iVar11 + -1 < iVar16)) {
        iVar16 = iVar11 + -1;
      }
      local_50[2] = 0x93fd561a96ab0c67;
      local_50[1] = 0xdb9ca35f44d9bb88;
      plVar13 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_70,local_50 + 2);
      FUN_180241a30(*plVar13 + 0x28,&local_80,local_50 + 1);
      piVar14 = (int *)FUN_1802029c0();
      iVar11 = *piVar14;
      uVar1 = iVar11 - 1;
      if (((uVar1 < 0xfe) && (cVar5 = FUN_180024540(), cVar5 != '\0')) && (DAT_1803fa545 == '\0')) {
        bVar6 = FUN_1800245f0();
      }
      else {
        bVar6 = 0;
      }
      iVar4 = DAT_180401598;
      uVar17 = -(uint)(DAT_180401594 != '\0') & 2 | (uint)bVar6 << 3 | iVar11 << 4;
      if (uVar17 != DAT_1803e9574) {
        bVar18 = DAT_180401594 != '\0';
        local_50[2] = 0x93fd561a96ab0c67;
        local_50[1] = 0xbf7c50ae7aa0dd3e;
        DAT_1803e9574 = uVar17;
        plVar13 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_70,local_50 + 2);
        plVar13 = (longlong *)FUN_180241a30(*plVar13 + 0x28,&local_80,local_50 + 1);
        pcVar15 = (char *)FUN_1801fcfc0(*plVar13 + 0x28);
        cVar5 = *pcVar15;
        if (((uVar1 < 0xfe) && (cVar7 = FUN_180024540(), cVar7 != '\0')) && (DAT_1803fa545 == '\0'))
        {
          uVar8 = FUN_1800245f0(iVar11);
        }
        else {
          uVar8 = 0;
        }
        local_90 = iVar4;
        local_98 = (char *)CONCAT44(local_98._4_4_,(uint)bVar18);
        FUN_180014410("[WARP] state key=%d down=%d tap=%d charging=%d ticks=%d\n",iVar11,uVar8,
                      cVar5 != '\0');
      }
      local_80 = local_50;
      local_50[2] = 0x93fd561a96ab0c67;
      local_50[1] = 0xbf7c50ae7aa0dd3e;
      plVar13 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_70,local_50 + 2);
      plVar13 = (longlong *)FUN_180241a30(*plVar13 + 0x28,local_60,local_50 + 1);
      pcVar15 = (char *)FUN_1801fcfc0(*plVar13 + 0x28);
      if (*pcVar15 == '\0') {
        if ((((uVar1 < 0xfe) && (cVar5 = FUN_180024540(), cVar5 != '\0')) && (DAT_1803fa545 == '\0')
            ) && (cVar5 = FUN_1800245f0(iVar11), cVar5 != '\0')) {
          if (DAT_180401598 < iVar16) {
            DAT_180401594 = '\x01';
            *(int *)(local_50[0] + 0xc) = *(int *)(local_50[0] + 0xc) + -1;
            DAT_180401598 = DAT_180401598 + 1;
            *(undefined4 *)(local_50[0] + 0x20) = 0;
            return;
          }
          local_50[2] = 0x93fd561a96ab0c67;
          local_50[1] = 0xa447f642f59d8736;
          plVar13 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_60,local_50 + 2);
          plVar13 = (longlong *)FUN_180241a30(*plVar13 + 0x28,local_70,local_50 + 1);
          pcVar15 = (char *)FUN_1801fcfc0(*plVar13 + 0x28);
          if (*pcVar15 == '\0') {
            return;
          }
        }
        else {
          if (DAT_180401594 == '\0') {
            DAT_180401594 = '\0';
            DAT_180401598 = 0;
            return;
          }
          if (DAT_180401598 < 1) {
            DAT_180401594 = '\0';
            DAT_180401598 = 0;
            return;
          }
        }
LAB_180140694:
        FUN_1801406e0(&local_80);
        return;
      }
      FUN_180024720(&local_88,iVar11);
      if ((local_88 == '\0') && (local_87 != '\0')) {
        if ((DAT_180401594 != '\0') && (0 < DAT_180401598)) goto LAB_180140694;
        DAT_180401594 = '\x01';
        DAT_180401598 = 0;
      }
      else if (DAT_180401594 == '\0') {
        return;
      }
      if (DAT_180401598 < iVar16) {
        *(int *)(local_50[0] + 0xc) = *(int *)(local_50[0] + 0xc) + -1;
        DAT_180401598 = DAT_180401598 + 1;
        *(undefined4 *)(local_50[0] + 0x20) = 0;
        return;
      }
      return;
    }
  }
  DAT_180401598 = 0;
  DAT_180401594 = '\0';
  return;
}


