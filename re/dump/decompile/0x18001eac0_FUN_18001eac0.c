// 0x18001eac0  FUN_18001eac0
// size=649 thunk=false
// signature: undefined FUN_18001eac0()
// status: ok


undefined8 * FUN_18001eac0(void)

{
  char cVar1;
  HMODULE pHVar2;
  HMODULE pHVar3;
  HMODULE pHVar4;
  uint uVar5;
  uint uVar6;
  HMODULE pHVar7;
  HMODULE pHVar8;
  longlong lVar9;
  HMODULE pHVar10;
  
  if (DAT_1804257a8 == '\0') {
    DAT_1804257a8 = '\x01';
    pHVar2 = GetModuleHandleA("client.dll");
    if (((pHVar2 != (HMODULE)0x0) && ((short)pHVar2->unused == 0x5a4d)) &&
       (*(int *)((longlong)&pHVar2->unused + (longlong)pHVar2[0xf].unused) == 0x4550)) {
      pHVar8 = (HMODULE)(ulonglong)
                        *(uint *)((longlong)&pHVar2[0x14].unused + (longlong)pHVar2[0xf].unused);
      pHVar4 = (HMODULE)0x0;
      pHVar3 = pHVar4;
      while ((pHVar10 = pHVar4, (HMODULE)((longlong)&pHVar3[2].unused + 2U) <= pHVar8 &&
             (((pHVar10 = (HMODULE)((longlong)&pHVar2->unused + (longlong)&pHVar3->unused),
               (char)pHVar10->unused != 'G' || (*(longlong *)pHVar10 != s_GetPhrase_180339b08._0_8_)
               ) || ((short)pHVar10[2].unused != s_GetPhrase_180339b08._8_2_))))) {
        pHVar3 = (HMODULE)((longlong)&pHVar3->unused + 1);
      }
      pHVar3 = pHVar4;
      if (pHVar10 != (HMODULE)0x0) {
        while (pHVar7 = pHVar4, pHVar3 + 6 <= pHVar8) {
          if (*(HMODULE *)((longlong)&pHVar2->unused + (longlong)&pHVar3->unused) == pHVar10) {
            pHVar7 = *(HMODULE *)((longlong)&pHVar2->unused + (longlong)&pHVar3[4].unused);
            if ((pHVar2 <= pHVar7) &&
               (pHVar7 < (HMODULE)((longlong)&pHVar2->unused + (longlong)&pHVar8->unused))) break;
            pHVar3 = pHVar3 + 2;
          }
          else {
            pHVar3 = pHVar3 + 2;
          }
        }
        pHVar2 = pHVar4;
        pHVar3 = pHVar4;
        if (pHVar7 != (HMODULE)0x0) {
          for (; (undefined1 *)((longlong)&pHVar2[1].unused + 1U) < (undefined1 *)0x61;
              pHVar2 = (HMODULE)((longlong)&pHVar2->unused + 1)) {
            cVar1 = *(char *)((longlong)&pHVar7->unused + (longlong)&pHVar2->unused);
            if ((cVar1 == -0x34) &&
               (*(char *)((longlong)&pHVar7->unused + (longlong)((longlong)&pHVar2->unused + 1)) ==
                -0x34)) break;
            if (cVar1 == -0x17) {
              pHVar3 = (HMODULE)((longlong)&pHVar2[1].unused +
                                (longlong)&pHVar7->unused +
                                (longlong)
                                *(int *)((longlong)&pHVar7->unused +
                                        (longlong)((longlong)&pHVar2->unused + 1)) + 1);
            }
          }
          lVar9 = DAT_1803e6f28;
          uVar6 = DAT_1803e6f34;
          uVar5 = DAT_1803e6f30;
          if (pHVar3 != (HMODULE)0x0) {
            for (; (undefined1 *)((longlong)&pHVar4[1].unused + 3U) < (undefined1 *)0x81;
                pHVar4 = (HMODULE)((longlong)&pHVar4->unused + 1)) {
              if (((lVar9 == 0) &&
                  (*(char *)((longlong)&pHVar3->unused + (longlong)&pHVar4->unused) == 'H')) &&
                 ((((undefined1 *)((longlong)&pHVar4->unused + 1))[(longlong)pHVar3] == -0x75 &&
                  (((undefined1 *)((longlong)&pHVar4->unused + 2))[(longlong)pHVar3] == '\r')))) {
                lVar9 = (longlong)&pHVar4[1].unused +
                        (longlong)&pHVar3->unused +
                        (longlong)
                        *(int *)((undefined1 *)((longlong)&pHVar4->unused + 3) + (longlong)pHVar3) +
                        3;
                DAT_1803e6f28 = lVar9;
              }
              else if ((((int)uVar5 < 0) &&
                       (*(char *)((longlong)&pHVar3->unused + (longlong)&pHVar4->unused) == -1)) &&
                      (((undefined1 *)((longlong)&pHVar4->unused + 1))[(longlong)pHVar3] == -0x70))
              {
                DAT_1803e6f30 =
                     *(uint *)((undefined1 *)((longlong)&pHVar4->unused + 2) + (longlong)pHVar3) >>
                     3;
                uVar5 = DAT_1803e6f30;
              }
              else if ((((int)uVar6 < 0) &&
                       (*(char *)((longlong)&pHVar3->unused + (longlong)&pHVar4->unused) == -1)) &&
                      (((undefined1 *)((longlong)&pHVar4->unused + 1))[(longlong)pHVar3] == 'W')) {
                DAT_1803e6f34 =
                     (uint)((byte)((undefined1 *)((longlong)&pHVar4->unused + 2))[(longlong)pHVar3]
                           >> 3);
                uVar6 = DAT_1803e6f34;
              }
            }
            if (((lVar9 == 0) || ((int)uVar5 < 1)) || ((int)uVar6 < 0)) {
              DAT_1803e6f38 = '\0';
            }
            else {
              DAT_1803e6f38 = '\x01';
            }
            FUN_180014410("[WEAP] Localize holder=%p getSlot=%d findSlot=%d valid=%d\n",lVar9,uVar5,
                          uVar6,DAT_1803e6f38 != '\0');
          }
        }
      }
    }
  }
  return &DAT_1803e6f28;
}


