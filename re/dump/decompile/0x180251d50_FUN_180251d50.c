// 0x180251d50  FUN_180251d50
// size=698 thunk=false
// signature: undefined FUN_180251d50()
// status: ok


void FUN_180251d50(ulonglong *param_1)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  int *piVar4;
  bool bVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong *puVar8;
  longlong lVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  bool bVar18;
  undefined8 local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  longlong *plStack_90;
  ulonglong local_88;
  ulonglong *local_80;
  ulonglong local_78;
  undefined8 *local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58 [3];
  
  local_98 = 0;
  plStack_90 = (longlong *)0x0;
  FUN_180253050(0,&local_98,1);
  puVar10 = (ulonglong *)param_1[0x1e];
  do {
    local_80 = puVar10;
    if ((ulonglong *)param_1[0x1f] <= puVar10) {
      local_70 = &local_a8;
      if (plStack_90 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
        UNLOCK();
      }
      local_a8 = local_98;
      plStack_a0 = plStack_90;
      FUN_180253190(param_1,&local_a8);
      plVar6 = plStack_90;
      if (plStack_90 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_90 + 1;
        lVar17 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar17 == 1) {
          (**(code **)*plStack_90)(plStack_90);
          LOCK();
          piVar4 = (int *)((longlong)plVar6 + 0xc);
          iVar7 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6);
          }
        }
      }
      return;
    }
    puVar14 = puVar10 + 2;
    uVar11 = *puVar14;
    uVar16 = *puVar10;
    puVar1 = puVar10 + 3;
    puVar2 = puVar10 + 1;
    bVar18 = uVar16 < uVar11;
    if (uVar16 == uVar11) {
      uVar15 = *puVar1;
      bVar5 = uVar15 < *puVar2;
      bVar18 = *puVar2 < uVar15;
    }
    else {
      bVar5 = !bVar18;
    }
    uVar15 = uVar16;
    if (!bVar18) {
      uVar15 = uVar11;
    }
    puVar8 = puVar10;
    if (!bVar5) {
      puVar8 = puVar14;
      uVar16 = uVar11;
    }
    uVar11 = puVar8[1];
    puVar8 = puVar10;
    local_88 = uVar11;
    local_78 = uVar16;
    if (uVar15 <= uVar16) {
      do {
        puVar10 = puVar8;
        if ((((*puVar8 == *puVar14) && (*puVar2 == *puVar1)) || (uVar15 != uVar16)) || (uVar11 != 0)
           ) {
          uVar13 = param_1[10];
          lVar17 = uVar15 * 0x60;
          if ((*(longlong *)(lVar17 + 8 + uVar13) != *(longlong *)(lVar17 + uVar13)) &&
             (*param_1 != 0)) {
            uVar11 = 0;
            uVar12 = 0;
            do {
              if (((ulonglong)
                   (*(longlong *)(uVar13 + 8 + lVar17) - *(longlong *)(uVar13 + lVar17) >> 4) <=
                   uVar12) ||
                 (iVar7 = isblank(*(undefined2 *)(*(longlong *)(uVar13 + lVar17) + uVar12 * 0x10)),
                 iVar7 == 0)) break;
              uVar13 = param_1[10];
              if (*(short *)(*(longlong *)(lVar17 + uVar13) + uVar12 * 0x10) == 9) {
                lVar9 = *param_1 - uVar11 % *param_1;
              }
              else {
                lVar9 = 1;
              }
              uVar11 = uVar11 + lVar9;
              uVar12 = uVar12 + 1;
            } while (uVar11 < *param_1);
            uVar11 = local_88;
            if (uVar12 != 0) {
              local_70 = &local_a8;
              if (plStack_90 != (longlong *)0x0) {
                LOCK();
                *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
                UNLOCK();
              }
              local_a8 = local_98;
              plStack_a0 = plStack_90;
              local_58[1] = 0;
              local_68 = uVar15;
              local_60 = uVar12;
              local_58[0] = uVar15;
              FUN_180253fc0(param_1,&local_a8,local_58,&local_68);
              for (; uVar11 = local_88, puVar10 = local_80, uVar16 = local_78,
                  puVar8 < (ulonglong *)param_1[0x1f]; puVar8 = puVar8 + 6) {
                uVar11 = puVar8[1] - uVar12;
                if (*puVar8 != uVar15) {
                  uVar11 = puVar8[1];
                }
                puVar8[1] = uVar11;
                uVar11 = puVar8[3];
                if (puVar8[2] == uVar15) {
                  uVar11 = puVar8[3] - uVar12;
                }
                puVar8[3] = uVar11;
              }
            }
          }
        }
        uVar15 = uVar15 + 1;
        puVar14 = puVar10 + 2;
        puVar8 = puVar10;
      } while (uVar15 <= uVar16);
    }
    puVar10 = puVar10 + 6;
  } while( true );
}


