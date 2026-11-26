// 0x180024cd0  FUN_180024cd0
// size=539 thunk=false
// signature: undefined FUN_180024cd0()
// status: ok


void FUN_180024cd0(void)

{
  ulonglong uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  HMODULE pHVar6;
  longlong lVar7;
  int *piVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  HMODULE pHVar13;
  HMODULE pHVar14;
  
  if (DAT_1803fe3f5 == '\0') {
    DAT_1803fe3f5 = '\x01';
    pHVar6 = GetModuleHandleA("client.dll");
    if (((pHVar6 != (HMODULE)0x0) && ((short)pHVar6->unused == 0x5a4d)) &&
       (piVar8 = (int *)((longlong)&pHVar6->unused + (longlong)pHVar6[0xf].unused),
       *piVar8 == 0x4550)) {
      uVar10 = 0;
      uVar2 = *(ushort *)((longlong)piVar8 + 6);
      uVar3 = *(ushort *)(piVar8 + 5);
      pHVar13 = (HMODULE)0x0;
      if (uVar2 != 0) {
        do {
          pHVar14 = pHVar13;
          if (pHVar13 != (HMODULE)0x0) goto LAB_180024de9;
          if (((*(uint *)((longlong)piVar8 + uVar10 * 0x28 + (ulonglong)uVar3 + 0x3c) & 0x40000000)
               != 0) &&
             (uVar11 = (ulonglong)
                       *(uint *)((longlong)piVar8 + uVar10 * 0x28 + (ulonglong)uVar3 + 0x20),
             0x11 < uVar11)) {
            uVar12 = *(uint *)((longlong)piVar8 + uVar10 * 0x28 + (ulonglong)uVar3 + 0x24);
            lVar7 = 0;
            do {
              pHVar14 = (HMODULE)((longlong)&pHVar6->unused + lVar7 + (ulonglong)uVar12);
              if ((((*(char *)((longlong)&pHVar6->unused + lVar7 + (ulonglong)uVar12) == 'm') &&
                   (*(longlong *)pHVar14 == s_m_flStepSoundTime_18033bd08._0_8_)) &&
                  ((*(longlong *)(pHVar14 + 2) == s_m_flStepSoundTime_18033bd08._8_8_ &&
                   ((short)pHVar14[4].unused == s_m_flStepSoundTime_18033bd08._16_2_)))) &&
                 ((pHVar14 == pHVar6 || (*(char *)((longlong)&pHVar14[-1].unused + 3) == '\0'))))
              break;
              uVar1 = lVar7 + 0x13;
              lVar7 = lVar7 + 1;
              pHVar14 = pHVar13;
            } while (uVar1 <= uVar11);
          }
          uVar12 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar12;
          pHVar13 = pHVar14;
        } while ((int)uVar12 < (int)(uint)uVar2);
        if (pHVar14 != (HMODULE)0x0) {
LAB_180024de9:
          iVar9 = 0;
          do {
            lVar7 = (longlong)iVar9;
            if ((((*(int *)((longlong)piVar8 + lVar7 * 0x28 + (ulonglong)uVar3 + 0x18) == 0x6164722e
                  ) && (*(short *)((longlong)piVar8 + lVar7 * 0x28 + (ulonglong)uVar3 + 0x1c) ==
                        0x6174)) ||
                ((*(int *)((longlong)piVar8 + lVar7 * 0x28 + (ulonglong)uVar3 + 0x18) == 0x7461642e
                 && (*(char *)((longlong)piVar8 + lVar7 * 0x28 + (ulonglong)uVar3 + 0x1c) == 'a'))))
               && (uVar10 = (ulonglong)
                            *(uint *)((longlong)piVar8 + lVar7 * 0x28 + (ulonglong)uVar3 + 0x20),
                  0x1f < uVar10)) {
              uVar12 = *(uint *)((longlong)piVar8 + lVar7 * 0x28 + (ulonglong)uVar3 + 0x24);
              lVar7 = 8;
              do {
                if (*(HMODULE *)((longlong)&pHVar6->unused + lVar7 + (ulonglong)uVar12) == pHVar14)
                {
                  iVar4 = *(int *)((longlong)&pHVar6[-2].unused + lVar7 + (ulonglong)uVar12);
                  iVar5 = *(int *)((longlong)&pHVar6[2].unused + lVar7 + (ulonglong)uVar12);
                  if ((iVar4 == 1) && (iVar5 - 0x100U < 0x1ff01)) {
                    DAT_1803e6ed0 = iVar5;
                    FUN_180014410(
                                 "[STEPSND] m_flStepSoundTime = +0x%X (from client.dll prediction datamap)\n"
                                 );
                    return;
                  }
                  FUN_180014410("[STEPSND] datamap entry rejected (type=%d off=0x%X)\n",iVar4,iVar5)
                  ;
                }
                uVar11 = lVar7 + 0x18;
                lVar7 = lVar7 + 8;
              } while (uVar11 <= uVar10);
            }
            iVar9 = iVar9 + 1;
            if ((int)(uint)uVar2 <= iVar9) {
              FUN_180014410(&DAT_180340ae0);
              return;
            }
          } while( true );
        }
      }
      FUN_180014410(&DAT_180340a00);
    }
  }
  return;
}


