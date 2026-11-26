// 0x18001c860  FUN_18001c860
// size=1039 thunk=false
// signature: undefined FUN_18001c860()
// status: ok


longlong * FUN_18001c860(void)

{
  char cVar1;
  DWORD DVar2;
  int iVar3;
  BOOL BVar4;
  longlong *plVar5;
  void *pvVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 *puVar9;
  char *pcVar10;
  undefined4 uVar11;
  char *_Str;
  undefined1 *puVar12;
  char *pcVar13;
  undefined1 *puVar14;
  int iVar15;
  
  if (-1 < DAT_1803e9958) {
    plVar5 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))();
    cVar1 = FUN_18001ccb0();
    if (cVar1 != '\0') {
      return plVar5;
    }
    DAT_1803e9958 = -1;
  }
  DVar2 = GetTickCount();
  if ((DAT_1803fcf84 == 0) || (999 < DVar2 - DAT_1803fcf84)) {
    DAT_1803fcf84 = DVar2;
    iVar3 = (**(code **)(*DAT_1803fa360 + 0x30))();
    if (DAT_1804260c8 == '\0') {
      DAT_1804260c8 = '\x01';
      FUN_180014410("[ARMOR] scanning entlist 1..%d for resource entity...\n",iVar3);
      pcVar13 = (char *)0x0;
      for (iVar15 = 1; iVar15 <= iVar3; iVar15 = iVar15 + 1) {
        plVar5 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,iVar15);
        if (plVar5 != (longlong *)0x0) {
          BVar4 = IsBadReadPtr(plVar5,8);
          pcVar10 = pcVar13;
          if ((((BVar4 == 0) && (BVar4 = IsBadReadPtr((void *)*plVar5,8), BVar4 == 0)) &&
              (pvVar6 = (void *)(**(code **)(*plVar5 + 0x78))(plVar5), pvVar6 != (void *)0x0)) &&
             (((BVar4 = IsBadReadPtr(pvVar6,8), BVar4 == 0 &&
               (pvVar6 = *(void **)((longlong)pvVar6 + 0x18), pvVar6 != (void *)0x0)) &&
              ((BVar4 = IsBadReadPtr(pvVar6,8), BVar4 == 0 &&
               ((char *)0xffff < *(char **)((longlong)pvVar6 + 0x18))))))) {
            pcVar10 = *(char **)((longlong)pvVar6 + 0x18);
          }
          pcVar7 = (char *)FUN_18001e410(plVar5);
          _Str = pcVar7;
          if (pcVar7 < (char *)0x10000) {
            _Str = pcVar13;
          }
          if (((pcVar10 != (char *)0x0) &&
              ((pcVar8 = strstr(pcVar10,"Resource"), pcVar8 != (char *)0x0 ||
               (pcVar8 = strstr(pcVar10,"resource"), pcVar8 != (char *)0x0)))) ||
             ((_Str != (char *)0x0 &&
              ((pcVar8 = strstr(_Str,"manager"), pcVar8 != (char *)0x0 ||
               (pcVar8 = strstr(_Str,"resource"), pcVar8 != (char *)0x0)))))) {
            pcVar8 = "?";
            if (pcVar10 != (char *)0x0) {
              pcVar8 = pcVar10;
            }
            pcVar10 = "?";
            if (_Str != (char *)0x0) {
              pcVar10 = _Str;
            }
            FUN_180014410("[ARMOR]   idx=%d class=%s table=%s\n",iVar15,pcVar10,pcVar8,pcVar7);
          }
        }
      }
    }
    puVar14 = (undefined1 *)0x0;
    iVar15 = 1;
    uVar11 = 0xffffffff;
    if (0 < iVar3) {
      do {
        plVar5 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,iVar15);
        cVar1 = FUN_18001ccb0();
        if (cVar1 != '\0') {
          if (DAT_1804253a0 != '\0') {
            DAT_1803e9958 = iVar15;
            return plVar5;
          }
          DAT_1804253a0 = 1;
          DAT_1803e9958 = iVar15;
          puVar9 = (undefined1 *)FUN_18001e410(plVar5);
          puVar12 = &DAT_18033e9cc;
          if ((undefined1 *)0x10000 < puVar9) {
            puVar12 = puVar9;
          }
          if (((((plVar5 == (longlong *)0x0) || (BVar4 = IsBadReadPtr(plVar5,8), BVar4 != 0)) ||
               (BVar4 = IsBadReadPtr((void *)*plVar5,8), BVar4 != 0)) ||
              ((pvVar6 = (void *)(**(code **)(*plVar5 + 0x78))(plVar5), pvVar6 == (void *)0x0 ||
               (BVar4 = IsBadReadPtr(pvVar6,8), BVar4 != 0)))) ||
             ((pvVar6 = *(void **)((longlong)pvVar6 + 0x18), pvVar6 == (void *)0x0 ||
              ((BVar4 = IsBadReadPtr(pvVar6,8), BVar4 != 0 ||
               (*(ulonglong *)((longlong)pvVar6 + 0x18) < 0x10000)))))) {
            puVar14 = &DAT_18033e9cc;
          }
          else {
            BVar4 = IsBadReadPtr(plVar5,8);
            if ((((BVar4 == 0) && (BVar4 = IsBadReadPtr((void *)*plVar5,8), BVar4 == 0)) &&
                (pvVar6 = (void *)(**(code **)(*plVar5 + 0x78))(plVar5), pvVar6 != (void *)0x0)) &&
               (((BVar4 = IsBadReadPtr(pvVar6,8), BVar4 == 0 &&
                 (pvVar6 = *(void **)((longlong)pvVar6 + 0x18), pvVar6 != (void *)0x0)) &&
                ((BVar4 = IsBadReadPtr(pvVar6,8), BVar4 == 0 &&
                 (0xffff < *(ulonglong *)((longlong)pvVar6 + 0x18))))))) {
              puVar14 = *(undefined1 **)((longlong)pvVar6 + 0x18);
            }
          }
          FUN_180014410("[ARMOR] player resource entity found: idx=%d class=%s table=%s\n",iVar15,
                        puVar12,puVar14);
          return plVar5;
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 <= iVar3);
    }
    if (DAT_1804253f4 == '\0') {
      DAT_1804253f4 = '\x01';
      if (DAT_1803fa608 != 0) {
        uVar11 = *(undefined4 *)(DAT_1803fa608 + 0x1c);
      }
      FUN_180014410("[ARMOR] player resource entity NOT found (high=%d, maxClients=%d)\n",iVar3,
                    uVar11);
    }
  }
  return (longlong *)0x0;
}


