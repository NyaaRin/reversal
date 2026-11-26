// 0x18001e850  FUN_18001e850
// size=478 thunk=false
// signature: undefined FUN_18001e850()
// status: ok


uint FUN_18001e850(void)

{
  uint uVar1;
  HMODULE pHVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  HMODULE pHVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  
  if (DAT_180425394 == 0) {
    DAT_180425394 = 0xffffffff;
    pHVar2 = GetModuleHandleA("client.dll");
    if (((pHVar2 != (HMODULE)0x0) && ((short)pHVar2->unused == 0x5a4d)) &&
       (*(int *)((longlong)&pHVar2->unused + (longlong)pHVar2[0xf].unused) == 0x4550)) {
      uVar7 = (ulonglong)*(uint *)((longlong)&pHVar2[0x14].unused + (longlong)pHVar2[0xf].unused);
      for (lVar4 = 0;
          (plVar10 = (longlong *)0x0, lVar4 + 0xdU <= uVar7 &&
          (((plVar10 = (longlong *)((longlong)&pHVar2->unused + lVar4), (char)*plVar10 != 'G' ||
            (*plVar10 != s_GetPrintName_180339018._0_8_)) ||
           (((int)plVar10[1] != s_GetPrintName_180339018._8_4_ ||
            (*(char *)((longlong)plVar10 + 0xc) != s_GetPrintName_180339018[0xc]))))));
          lVar4 = lVar4 + 1) {
      }
      if (plVar10 != (longlong *)0x0) {
        lVar3 = 0;
        while (pHVar9 = (HMODULE)0x0, lVar3 + 0x18U <= uVar7) {
          if (*(longlong **)((longlong)&pHVar2->unused + lVar3) == plVar10) {
            pHVar9 = *(HMODULE *)((longlong)&pHVar2[4].unused + lVar3);
            if ((pHVar2 <= pHVar9) && (pHVar9 < (HMODULE)((longlong)&pHVar2->unused + uVar7)))
            break;
            lVar3 = lVar3 + 8;
          }
          else {
            lVar3 = lVar3 + 8;
          }
        }
        if (pHVar9 != (HMODULE)0x0) {
          uVar7 = 0;
          do {
            uVar12 = uVar7;
            uVar7 = uVar12 + 1;
            uVar8 = 0x140;
            if (0x13f < uVar7) break;
          } while ((*(char *)((longlong)&pHVar9->unused + uVar12) != -0x34) ||
                  (uVar8 = uVar12, *(char *)((longlong)&pHVar9->unused + uVar12 + 1) != -0x34));
          uVar6 = 0;
          lVar5 = 0;
          uVar11 = 0;
          while (lVar5 + 6U <= uVar8) {
            if ((*(char *)((longlong)&pHVar9->unused + lVar5) == -1) &&
               ((byte)(*(char *)((longlong)&pHVar9->unused + lVar5 + 1) + 0x70U) < 8)) {
              uVar1 = *(uint *)((longlong)&pHVar9->unused + lVar5 + 2);
              pHVar2 = (HMODULE)(ulonglong)uVar1;
              if ((uVar1 - 0x100 < 0x1f01) && ((uVar1 & 7) == 0)) {
                if (uVar6 < uVar1) {
                  uVar6 = uVar1;
                }
                lVar5 = lVar5 + 1;
                uVar11 = uVar6;
              }
              else {
                lVar5 = lVar5 + 1;
              }
            }
            else {
              lVar5 = lVar5 + 1;
            }
          }
          if (uVar6 != 0) {
            DAT_180425394 = uVar6 >> 3;
          }
          FUN_180014410("[WEAP] GetPrintName vtable index = %d\n",DAT_180425394,pHVar2,uVar8,uVar11,
                        lVar4,lVar3,uVar12,lVar5);
        }
      }
    }
  }
  return DAT_180425394;
}


