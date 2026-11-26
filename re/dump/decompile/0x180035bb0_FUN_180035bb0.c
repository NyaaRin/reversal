// 0x180035bb0  FUN_180035bb0
// size=1469 thunk=false
// signature: undefined FUN_180035bb0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180035bb0(undefined4 param_1,undefined4 param_2,longlong *param_3)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  void **ppvVar8;
  void *_Memory;
  ulonglong *puVar9;
  ulonglong *puVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  void *pvVar15;
  ulonglong *puVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined1 uVar19;
  ulonglong uVar20;
  undefined4 uVar21;
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [24];
  undefined4 local_138;
  undefined4 local_134;
  longlong *local_130;
  longlong *local_128;
  longlong *local_120;
  ulonglong *local_118;
  undefined1 local_110 [32];
  ulonglong *local_f0;
  undefined1 local_e8 [32];
  ulonglong local_c8;
  ulonglong uStack_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  void *local_a8;
  void *pvStack_a0;
  void *local_98;
  void *local_90;
  ulonglong local_88;
  undefined1 local_80;
  longlong local_78;
  ulonglong *local_70;
  ulonglong *puStack_68;
  undefined8 local_60;
  ulonglong local_58;
  
  puVar13 = auStack_158;
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_158;
  lVar11 = *param_3;
  lVar1 = param_3[1];
  local_120 = param_3;
  if (lVar11 != lVar1) {
    do {
      local_78 = lVar11;
      FUN_18020e450(lVar11 + 0x20);
      FUN_18020e450(lVar11);
      lVar11 = lVar11 + 0x50;
    } while (lVar11 != lVar1);
    param_3[1] = *param_3;
    local_78 = lVar11;
  }
  cVar3 = FUN_18002e100();
  puVar14 = auStack_158;
  if (cVar3 != '\0') {
    if (DAT_1803fa678 == (longlong *)0x0) {
      plVar12 = (longlong *)0x0;
      local_130 = (longlong *)0x0;
      plVar18 = plVar12;
    }
    else {
      lVar11 = (**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0);
      plVar18 = (longlong *)0x0;
      if (lVar11 != 0) {
        plVar18 = *(longlong **)(lVar11 + 8);
      }
      local_130 = plVar18;
      if (DAT_1803fa678 == (longlong *)0x0) {
        plVar12 = (longlong *)0x0;
      }
      else {
        plVar12 = (longlong *)(**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0);
      }
    }
    puVar14 = auStack_158;
    if (((((plVar18 != (longlong *)0x0) && (puVar14 = auStack_158, plVar12 != (longlong *)0x0)) &&
         (puVar14 = auStack_158, DAT_1803faef0 != (code *)0x0)) &&
        ((puVar14 = auStack_158, DAT_1803fafa0 != (code *)0x0 &&
         (puVar14 = auStack_158, DAT_1803faff8 != (code *)0x0)))) &&
       (puVar14 = auStack_158, DAT_1803fb008 != (code *)0x0)) {
      FUN_18002dc30(local_110,plVar18);
      if ((DAT_1803fb038 == (code *)0x0) || (iVar4 = (*DAT_1803fb038)(plVar18,6), iVar4 != 0)) {
        plVar17 = plVar12 + 1;
        local_128 = plVar17;
        if ((DAT_1803fb088 == (code *)0x0) || (*plVar17 == 0)) {
          local_134 = (**(code **)*plVar12)(plVar12);
        }
        else {
          local_134 = (*DAT_1803fb088)();
        }
        cVar3 = FUN_180033790(plVar18,plVar12,param_1,param_2);
        puVar13 = auStack_158;
        if (cVar3 != '\0') {
          if ((DAT_1803fb088 == (code *)0x0) || (plVar12[1] == 0)) {
            uVar5 = (**(code **)*plVar12)(plVar12);
          }
          else {
            uVar5 = (*DAT_1803fb088)();
          }
          local_70 = (ulonglong *)0x0;
          puStack_68 = (ulonglong *)0x0;
          local_60 = 0;
          local_138 = uVar5;
          FUN_180034850(plVar18,uVar5,&local_70,0x20);
          local_118 = puStack_68;
          puVar13 = auStack_158;
          puVar10 = puStack_68;
          puVar16 = local_70;
          if (local_70 != puStack_68) {
            do {
              puVar9 = puVar16;
              if (0xf < puVar16[3]) {
                puVar9 = (ulonglong *)*puVar16;
              }
              (*DAT_1803fafa0)(plVar18,puVar9);
              (*DAT_1803faef0)(plVar18,uVar5);
              iVar4 = (*DAT_1803faff8)(plVar18,0xffffffff);
              if (iVar4 - 3U < 2) {
                uStack_c0 = 0;
                local_b8 = 0;
                local_b0 = 0xf;
                local_c8 = 0;
                pvStack_a0 = (void *)0x0;
                local_98 = (void *)0x0;
                local_90 = (void *)0xf;
                local_a8 = (void *)0x0;
                uVar5 = 0;
                uVar21 = 0;
                local_88 = 0;
                local_80 = 0;
                if (&local_c8 != puVar16) {
                  puVar10 = puVar16;
                  if (0xf < puVar16[3]) {
                    puVar10 = (ulonglong *)*puVar16;
                  }
                  FUN_180212700(&local_c8,puVar10,puVar16[2]);
                  uVar5 = (undefined4)local_88;
                  uVar21 = (undefined4)(local_88 >> 0x20);
                }
                pvVar15 = local_90;
                uVar19 = iVar4 == 3;
                local_80 = uVar19;
                if (iVar4 == 4) {
                  local_78 = 0;
                  lVar11 = (*DAT_1803fb008)(local_130,0xffffffff,&local_78);
                  uVar20 = CONCAT44(uVar21,uVar5);
                  if (lVar11 != 0) {
                    FUN_180212700(&local_a8,lVar11,local_78);
                    pvVar15 = local_90;
                    uVar19 = local_80;
                    uVar20 = local_88;
                  }
                }
                else {
                  uVar20 = (*DAT_1803fafc0)(local_130,0xffffffff);
                  local_88 = uVar20;
                  ppvVar8 = (void **)FUN_180027490(local_e8,(int)uVar20);
                  if (&local_a8 != ppvVar8) {
                    if ((void *)0xf < pvVar15) {
                      _Memory = local_a8;
                      if ((0xfff < (longlong)pvVar15 + 1U) &&
                         (_Memory = *(void **)((longlong)local_a8 + -8),
                         0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)_Memory)))) {
                        pcVar2 = (code *)swi(0x29);
                        (*pcVar2)(5);
                        puVar13 = auStack_150;
                        break;
                      }
                      free(_Memory);
                    }
                    local_a8 = *ppvVar8;
                    pvStack_a0 = ppvVar8[1];
                    local_98 = ppvVar8[2];
                    pvVar15 = ppvVar8[3];
                    ppvVar8[2] = (void *)0x0;
                    ppvVar8[3] = (void *)0xf;
                    *(undefined1 *)ppvVar8 = 0;
                    local_90 = pvVar15;
                  }
                  FUN_18020e450(local_e8);
                }
                puVar10 = (ulonglong *)local_120[1];
                if (puVar10 == (ulonglong *)local_120[2]) {
                  FUN_1802293c0(local_120,puVar10,&local_c8);
                }
                else {
                  *puVar10 = local_c8;
                  puVar10[1] = uStack_c0;
                  puVar10[2] = local_b8;
                  puVar10[3] = local_b0;
                  local_b8 = 0;
                  local_b0 = 0xf;
                  local_c8 = local_c8 & 0xffffffffffffff00;
                  puVar10[4] = (ulonglong)local_a8;
                  puVar10[5] = (ulonglong)pvStack_a0;
                  puVar10[6] = (ulonglong)local_98;
                  puVar10[7] = (ulonglong)pvVar15;
                  local_98 = (void *)0x0;
                  local_90 = (void *)0xf;
                  local_a8 = (void *)((ulonglong)local_a8 & 0xffffffffffffff00);
                  puVar10[8] = uVar20;
                  *(undefined1 *)(puVar10 + 9) = uVar19;
                  local_120[1] = local_120[1] + 0x50;
                  local_f0 = puVar10;
                }
                FUN_18020e450(&local_a8);
                FUN_18020e450(&local_c8);
                puVar10 = local_118;
                plVar18 = local_130;
              }
              if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) ||
                 (plVar12[1] == 0)) {
                (**(code **)(*plVar12 + 0x10))(plVar12,1);
              }
              else {
                iVar6 = (*DAT_1803fb088)();
                iVar4 = 0;
                if (-1 < iVar6 + -1) {
                  iVar4 = iVar6 + -1;
                }
                (*DAT_1803faf10)(plVar12[1],iVar4);
              }
              puVar16 = puVar16 + 4;
              puVar13 = auStack_158;
              uVar5 = local_138;
            } while (puVar16 != puVar10);
          }
          *(undefined8 *)(puVar13 + -8) = 0x18003608f;
          FUN_18020d5c0(&local_70);
          plVar17 = *(longlong **)(puVar13 + 0x30);
        }
        iVar4 = *(int *)(puVar13 + 0x24);
        plVar18 = plVar12 + 1;
        while( true ) {
          if ((DAT_1803fb088 == (code *)0x0) || (*plVar18 == 0)) {
            pcVar2 = *(code **)*plVar12;
            *(undefined8 *)(puVar13 + -8) = 0x1800360c1;
            iVar6 = (*pcVar2)(plVar12);
          }
          else {
            *(undefined8 *)(puVar13 + -8) = 0x1800360b7;
            iVar6 = (*DAT_1803fb088)();
          }
          if (iVar6 <= iVar4) break;
          if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (*plVar18 == 0))
          {
            pcVar2 = *(code **)(*plVar12 + 0x10);
            *(undefined8 *)(puVar13 + -8) = 0x180036110;
            (*pcVar2)(plVar12,1);
            plVar18 = plVar17;
          }
          else {
            *(undefined8 *)(puVar13 + -8) = 0x1800360e6;
            iVar7 = (*DAT_1803fb088)();
            iVar6 = 0;
            if (-1 < iVar7 + -1) {
              iVar6 = iVar7 + -1;
            }
            lVar11 = *plVar18;
            *(undefined8 *)(puVar13 + -8) = 0x1800360fd;
            (*DAT_1803faf10)(lVar11,iVar6);
            plVar18 = plVar17;
          }
        }
      }
      puVar14 = puVar13;
      if ((puVar13[0x60] != '\0') && (DAT_1803faf78 != (code *)0x0)) {
        *(undefined8 *)(puVar13 + -8) = 0x18003613e;
        (*DAT_1803faf78)(*(undefined8 *)(puVar13 + 0x48),*(undefined8 *)(puVar13 + 0x50),
                         *(undefined4 *)(puVar13 + 0x58),*(undefined4 *)(puVar13 + 0x5c));
      }
    }
  }
  *(undefined8 *)(puVar14 + -8) = 0x18003614a;
  return;
}


