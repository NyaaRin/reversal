// 0x1800eae40  FUN_1800eae40
// size=1355 thunk=false
// signature: undefined FUN_1800eae40()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800eae40(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  byte ****ppppbVar9;
  longlong lVar10;
  byte ****ppppbVar11;
  byte ****ppppbVar12;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined8 *local_170;
  undefined8 local_168;
  undefined **ppuStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  longlong *plStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  longlong *plStack_120;
  longlong local_118;
  longlong *plStack_110;
  undefined1 local_108 [32];
  longlong local_e8;
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  byte ***local_80 [2];
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  longlong *plStack_58;
  ulonglong local_50;
  
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStack_198;
  local_178 = 0;
  plVar3 = (longlong *)(param_1 + 0x9d8);
  lVar10 = *(longlong *)(param_1 + 0x9e0);
  lVar7 = *plVar3;
  local_e8 = param_1;
  if (lVar7 != lVar10) {
    do {
      FUN_18020e450(lVar7);
      lVar7 = lVar7 + 0x20;
    } while (lVar7 != lVar10);
    *(longlong *)(param_1 + 0x9e0) = *plVar3;
  }
  local_168 = 0;
  ppuStack_160 = &PTR_vftable_std__System_error_category_1803e9500;
  local_170 = &local_148;
  local_148 = 0;
  plStack_140 = (longlong *)0x0;
  local_138 = 0;
  local_130 = 0;
  FUN_180211510(&local_148,L"scripts",7);
  local_178 = 0;
  uVar6 = FUN_1800ea7a0(local_e0);
  FUN_180066720(local_108,uVar6,&local_148);
  local_178 = 1;
  FUN_18021e290(local_e0);
  FUN_18021e290(&local_148);
  FUN_180067d80(local_108,&local_168);
  local_178 = 0;
  FUN_18021e290(local_108);
  if ((int)local_168 == 0) {
    local_148 = 0;
    plStack_140 = (longlong *)0x0;
    local_170 = &local_168;
    local_168 = 0;
    ppuStack_160 = (undefined **)0x0;
    local_158 = 0;
    local_150 = 0;
    FUN_180211510(&local_168,L"scripts",7);
    local_178 = 0;
    uVar6 = FUN_1800ea7a0(local_e0);
    FUN_180066720(local_108,uVar6,&local_168);
    local_178 = 8;
    FUN_18021e290(local_e0);
    FUN_18021e290(&local_168);
    local_148 = 0;
    plStack_140 = (longlong *)0x0;
    iVar5 = FUN_180201e70(&local_148,local_108,0);
    local_178 = 0;
    FUN_18021e290(local_108);
    plVar4 = plStack_140;
    uVar6 = local_148;
    lVar10 = param_1;
    if (iVar5 == 0) {
      local_60 = 0;
      plStack_58 = (longlong *)0x0;
      local_170 = &local_168;
      if (plStack_140 == (longlong *)0x0) {
        plVar8 = (longlong *)0x8;
      }
      else {
        plVar8 = plStack_140 + 1;
        LOCK();
        *(int *)plVar8 = (int)*plVar8 + 1;
        UNLOCK();
      }
      local_168 = local_148;
      ppuStack_160 = (undefined **)plStack_140;
      FUN_180067810(&local_60,&local_168);
      local_118 = 0;
      plStack_110 = (longlong *)0x0;
      local_170 = &local_128;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)plVar8 = (int)*plVar8 + 1;
        UNLOCK();
      }
      local_128 = uVar6;
      plStack_120 = plVar4;
      FUN_1800678f0(&local_118,&local_128);
      if (local_60 != local_118) {
        do {
          lVar10 = local_60;
          FUN_180067150(local_60,&local_168);
          if (((int)local_168 == 2) && ((int)ppuStack_160 == 0)) {
            local_170 = (undefined8 *)(lVar10 + 0x20);
            uVar6 = FUN_180066000(local_170,local_c0);
            FUN_180065810(uVar6,local_80);
            FUN_18021e290(local_c0);
            ppppbVar11 = (byte ****)local_80[0];
            if (local_68 < 0x10) {
              ppppbVar11 = local_80;
            }
            ppppbVar9 = (byte ****)((longlong)ppppbVar11 + local_70);
            for (ppppbVar12 = ppppbVar11; ppppbVar12 != ppppbVar9;
                ppppbVar12 = (byte ****)((longlong)ppppbVar12 + 1)) {
              iVar5 = tolower((uint)*(byte *)ppppbVar12);
              *(byte *)ppppbVar11 = (byte)iVar5;
              ppppbVar11 = (byte ****)((longlong)ppppbVar11 + 1);
            }
            ppppbVar11 = local_80;
            if (0xf < local_68) {
              ppppbVar11 = (byte ****)local_80[0];
            }
            if ((local_70 == 4) && (*(int *)ppppbVar11 == 0x61756c2e)) {
LAB_1800eb1fa:
              uVar6 = FUN_180065de0(local_170,local_a0);
              FUN_18020e540(local_108,uVar6);
              local_178 = 0x100;
              uVar6 = FUN_1800ea630(local_e0,local_108);
              FUN_180214300(plVar3,uVar6);
              FUN_18020e450(local_e0);
              local_178 = 0;
              FUN_18021e290(local_108);
              FUN_18021e290(local_a0);
            }
            else {
              ppppbVar11 = local_80;
              if (0xf < local_68) {
                ppppbVar11 = (byte ****)local_80[0];
              }
              if ((local_70 == 4) && (*(int *)ppppbVar11 == 0x7478742e)) goto LAB_1800eb1fa;
            }
            FUN_18020e450(local_80);
          }
          FUN_180067700(&local_60);
          lVar10 = local_e8;
        } while (local_60 != local_118);
      }
      plVar8 = plStack_110;
      if (plStack_110 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_110 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plStack_110)(plStack_110);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8);
          }
        }
      }
      plVar8 = plStack_58;
      if (plStack_58 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_58 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plStack_58)(plStack_58);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8);
          }
        }
      }
      FUN_180220450(*plVar3,*(longlong *)(lVar10 + 0x9e0),
                    *(longlong *)(lVar10 + 0x9e0) - *plVar3 >> 5,0);
      if ((int)(*(longlong *)(param_1 + 0x9e0) - *plVar3 >> 5) <= *(int *)(lVar10 + 0x9f0)) {
        *(uint *)(lVar10 + 0x9f0) = (*plVar3 != *(longlong *)(param_1 + 0x9e0)) - 1;
      }
    }
    else {
      FUN_180212700(param_1 + 0xa58,"Failed to read scripts folder.",0x1e);
    }
    *(undefined1 *)(lVar10 + 0xa78) = 1;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar4 + 1;
      lVar10 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
      }
    }
  }
  else {
    FUN_180212700(param_1 + 0xa58,"Failed to create scripts folder.",0x20);
    *(undefined1 *)(param_1 + 0xa78) = 1;
  }
  return;
}


