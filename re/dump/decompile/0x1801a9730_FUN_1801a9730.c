// 0x1801a9730  FUN_1801a9730
// size=1266 thunk=false
// signature: undefined FUN_1801a9730()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801a9730(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 **ppuVar5;
  undefined **ppuVar6;
  longlong *plVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined **ppuVar12;
  uint uVar13;
  undefined1 auStack_1e8 [32];
  uint local_1c8;
  undefined8 **local_1c0;
  undefined **ppuStack_1b8;
  undefined8 ***local_1b0;
  undefined8 **local_1a8;
  undefined **ppuStack_1a0;
  undefined8 **local_198;
  undefined **ppuStack_190;
  longlong local_188;
  longlong *plStack_180;
  undefined8 ***local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  ulonglong local_160;
  undefined1 local_158 [32];
  undefined8 ***local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108 [32];
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  longlong local_88;
  longlong *plStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_1e8;
  local_1c8 = 0;
  if ((DAT_1803dc960 < 0) || ((int)(DAT_1803fcca0 - DAT_1803fcc98 >> 5) <= DAT_1803dc960)) {
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    uStack_110 = 0;
    FUN_18001d080(&local_128,&DAT_18033e5ea,0);
    puVar9 = &local_128;
    uVar13 = 2;
  }
  else {
    puVar9 = (undefined8 *)FUN_18016d4c0(local_108,(longlong)DAT_1803dc960 * 0x20 + DAT_1803fcc98);
    uVar13 = 1;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_78 = *(undefined4 *)puVar9;
  uStack_74 = *(undefined4 *)((longlong)puVar9 + 4);
  uStack_70 = *(undefined4 *)(puVar9 + 1);
  uStack_6c = *(undefined4 *)((longlong)puVar9 + 0xc);
  lVar3 = puVar9[2];
  uStack_60 = puVar9[3];
  local_68 = lVar3;
  *(undefined1 *)puVar9 = 0;
  puVar9[2] = 0;
  puVar9[3] = 0xf;
  local_1c8 = uVar13;
  if ((uVar13 & 2) != 0) {
    uVar13 = uVar13 & 0xfffffffd;
    local_1c8 = uVar13;
    FUN_18020e450(&local_128);
  }
  if ((uVar13 & 1) != 0) {
    uVar13 = uVar13 & 0xfffffffe;
    local_1c8 = uVar13;
    FUN_18020e450(local_108);
  }
  lVar4 = DAT_1803fcca0;
  lVar11 = DAT_1803fcc98;
  if (DAT_1803fcc98 != DAT_1803fcca0) {
    do {
      FUN_18020e450(lVar11);
      lVar11 = lVar11 + 0x20;
    } while (lVar11 != lVar4);
    DAT_1803fcca0 = DAT_1803fcc98;
  }
  DAT_1803dc960 = -1;
  local_1c0 = (undefined8 ***)0x0;
  ppuStack_1b8 = &PTR_vftable_std__System_error_category_1803e9500;
  uVar10 = FUN_1801a8aa0(local_158);
  FUN_180067d80(uVar10,&local_1c0);
  FUN_18021e290(local_158);
  if ((int)local_1c0 == 0) {
    local_1a8 = (undefined8 **)0x0;
    ppuStack_1a0 = (undefined **)0x0;
    uVar10 = FUN_1801a8aa0(local_158);
    local_1a8 = (undefined8 ***)0x0;
    ppuStack_1a0 = (undefined **)0x0;
    iVar8 = FUN_180201e70(&local_1a8,uVar10,0);
    FUN_18021e290(local_158);
    ppuVar6 = ppuStack_1a0;
    ppuVar5 = local_1a8;
    if (iVar8 == 0) {
      local_88 = 0;
      plStack_80 = (longlong *)0x0;
      local_1b0 = &local_1c0;
      if (ppuStack_1a0 == (undefined **)0x0) {
        ppuVar12 = (undefined **)0x8;
      }
      else {
        ppuVar12 = ppuStack_1a0 + 1;
        LOCK();
        *(int *)ppuVar12 = *(int *)ppuVar12 + 1;
        UNLOCK();
      }
      local_1c0 = local_1a8;
      ppuStack_1b8 = ppuStack_1a0;
      FUN_180067810(&local_88,&local_1c0);
      local_188 = 0;
      plStack_180 = (longlong *)0x0;
      local_1b0 = &local_198;
      if (ppuVar6 != (undefined **)0x0) {
        LOCK();
        *(int *)ppuVar12 = *(int *)ppuVar12 + 1;
        UNLOCK();
      }
      local_198 = ppuVar5;
      ppuStack_190 = ppuVar6;
      FUN_1800678f0(&local_188,&local_198);
      if (local_88 != local_188) {
        do {
          lVar4 = local_88;
          FUN_180067150(local_88,&local_1c0);
          if (((int)local_1c0 == 2) && ((int)ppuStack_1b8 == 0)) {
            local_1b0 = &local_178;
            local_178 = (undefined8 ****)0x0;
            uStack_170 = 0;
            local_168 = 0;
            local_160 = 0;
            FUN_180211510(&local_178,L".cfg",4);
            local_1c8 = uVar13;
            uVar10 = FUN_180066000(lVar4 + 0x20,local_e8);
            local_138 = &local_178;
            if (7 < local_160) {
              local_138 = local_178;
            }
            local_130 = local_168;
            iVar8 = FUN_180065970(uVar10,&local_138);
            FUN_18021e290(local_e8);
            FUN_18021e290(&local_178);
            if (iVar8 == 0) {
              uVar10 = FUN_180065ec0(lVar4 + 0x20,local_a8);
              FUN_18020e540(local_158,uVar10);
              local_1c8 = uVar13 | 0x40;
              uVar10 = FUN_1801a90e0(local_c8,local_158);
              FUN_180214300(&DAT_1803fcc98,uVar10);
              FUN_18020e450(local_c8);
              local_1c8 = uVar13;
              FUN_18021e290(local_158);
              FUN_18021e290(local_a8);
            }
          }
          FUN_180067700(&local_88);
        } while (local_88 != local_188);
      }
      plVar7 = plStack_180;
      if (plStack_180 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_180 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_180)(plStack_180);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7);
          }
        }
      }
      plVar7 = plStack_80;
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_80 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_80)(plStack_80);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7);
          }
        }
      }
      FUN_180220450(DAT_1803fcc98,DAT_1803fcca0,DAT_1803fcca0 - DAT_1803fcc98 >> 5,0);
      if (lVar3 != 0) {
        FUN_1801a9690(&local_78);
      }
      if ((DAT_1803dc960 < 0) && (DAT_1803fcc98 != DAT_1803fcca0)) {
        DAT_1803dc960 = 0;
      }
    }
    else {
      FUN_180212700(&DAT_1803fa8c0,"Failed to read settings folder.",0x1f);
    }
    DAT_1803facfe = 1;
    if (ppuVar6 != (undefined **)0x0) {
      LOCK();
      ppuVar12 = ppuVar6 + 1;
      iVar8 = *(int *)ppuVar12;
      *(int *)ppuVar12 = *(int *)ppuVar12 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)*ppuVar6)(ppuVar6);
        LOCK();
        piVar2 = (int *)((longlong)ppuVar6 + 0xc);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*ppuVar6 + 8))(ppuVar6);
        }
      }
    }
  }
  else {
    FUN_180212700(&DAT_1803fa8c0,"Failed to create settings folder.",0x21);
    DAT_1803facfe = 1;
  }
  FUN_18020e450(&local_78);
  return;
}


