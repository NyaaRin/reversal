// 0x18006d6f0  FUN_18006d6f0
// size=507 thunk=false
// signature: undefined FUN_18006d6f0()
// status: ok


undefined8 * FUN_18006d6f0(int param_1)

{
  undefined8 *puVar1;
  size_t _Size;
  char cVar2;
  DWORD DVar3;
  int iVar4;
  longlong lVar5;
  char *_Str;
  size_t sVar6;
  code *pcVar7;
  char *pcVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  int iVar13;
  longlong *plVar14;
  longlong lVar15;
  
  lVar12 = (longlong)param_1;
  if ((DAT_1803ffc2c != '\0') || (0x7f < param_1 - 1U)) {
    return (undefined8 *)0x0;
  }
  lVar15 = lVar12 * 0x20;
  puVar9 = &DAT_1803ea300 + lVar12 * 4;
  DVar3 = GetTickCount();
  if (((&DAT_1803ea31c)[lVar15] == '\0') || (499 < DVar3 - *(int *)(&DAT_1803ea318 + lVar15))) {
    if ((DAT_1803fa360 == (longlong *)0x0) ||
       ((lVar5 = (**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,param_1), lVar5 == 0 ||
        (cVar2 = FUN_18006cf50(param_1,lVar5,puVar9), cVar2 == '\0')))) {
      (&DAT_1803ea31c)[lVar15] = 0;
      puVar9 = (undefined8 *)0x0;
    }
    else {
      *(DWORD *)(&DAT_1803ea318 + lVar15) = DVar3;
      iVar13 = DAT_1803ffc38;
      (&DAT_1803ea31c)[lVar15] = 1;
      if ((iVar13 < 0xc) && (DAT_1803fe9e8 != (code *)0x0)) {
        puVar1 = (undefined8 *)(&DAT_1803ea308)[lVar12 * 4];
        pcVar7 = DAT_1803fe9e8;
        for (puVar11 = (undefined8 *)*puVar9; puVar11 != puVar1; puVar11 = puVar11 + 10) {
          if (0xb < iVar13) goto LAB_18006d85e;
          if ((*(int *)(puVar11 + 9) == 4) && (puVar11[6] != 0)) {
            puVar10 = puVar11;
            if (0xf < (ulonglong)puVar11[3]) {
              puVar10 = (undefined8 *)*puVar11;
            }
            _Str = (char *)(*pcVar7)(param_1,puVar10,&DAT_18033e5ea);
            iVar13 = DAT_1803ffc38 + 1;
            DAT_1803ffc38 = iVar13;
            if (_Str == (char *)0x0) {
LAB_18006d88e:
              plVar14 = puVar11 + 4;
              DAT_1803ffc2c = 1;
              if (0xf < (ulonglong)puVar11[7]) {
                plVar14 = (longlong *)*plVar14;
              }
              if (0xf < (ulonglong)puVar11[3]) {
                puVar11 = (undefined8 *)*puVar11;
              }
              pcVar8 = "(null)";
              if (_Str != (char *)0x0) {
                pcVar8 = _Str;
              }
              FUN_180014410(&DAT_1803464d0,param_1,puVar11,plVar14,pcVar8);
              (&DAT_1803ea31c)[lVar15] = 0;
              return (undefined8 *)0x0;
            }
            sVar6 = strlen(_Str);
            puVar10 = puVar11 + 4;
            _Size = puVar11[6];
            if (0xf < (ulonglong)puVar11[7]) {
              puVar10 = (undefined8 *)*puVar10;
            }
            if ((_Size != sVar6) ||
               ((pcVar7 = DAT_1803fe9e8, _Size != 0 &&
                (iVar4 = memcmp(puVar10,_Str,_Size), pcVar7 = DAT_1803fe9e8, iVar4 != 0))))
            goto LAB_18006d88e;
          }
        }
        if (0xb < iVar13) {
LAB_18006d85e:
          FUN_180014410(&DAT_180346560,iVar13);
        }
      }
    }
  }
  return puVar9;
}


