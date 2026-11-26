// 0x180065970  FUN_180065970
// size=496 thunk=false
// signature: undefined FUN_180065970()
// status: ok


int FUN_180065970(undefined8 *param_1,longlong *param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ushort *puVar13;
  longlong lVar14;
  undefined8 *puVar15;
  
  puVar15 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar15 = (undefined8 *)*param_1;
  }
  puVar1 = (ushort *)((longlong)puVar15 + param_1[2] * 2);
  puVar6 = (ushort *)FUN_180065240(puVar15,puVar1);
  lVar14 = *param_2;
  puVar2 = (ushort *)(lVar14 + param_2[1] * 2);
  puVar7 = (ushort *)FUN_180065240(lVar14,puVar2);
  uVar10 = (longlong)puVar7 - lVar14 >> 1;
  uVar11 = (longlong)puVar6 - (longlong)puVar15 >> 1;
  uVar12 = uVar11;
  if (uVar10 < uVar11) {
    uVar12 = uVar10;
  }
  iVar5 = FUN_180012bf0(puVar15,lVar14,uVar12);
  if (iVar5 == 0) {
    if (uVar11 < uVar10) {
      iVar5 = -1;
    }
    else {
      puVar8 = puVar6;
      if (uVar10 < uVar11) {
        iVar5 = 1;
      }
      else {
        for (; (puVar13 = puVar7, puVar8 != puVar1 && ((*puVar8 == 0x5c || (*puVar8 == 0x2f))));
            puVar8 = puVar8 + 1) {
        }
        for (; (puVar13 != puVar2 && ((*puVar13 == 0x5c || (*puVar13 == 0x2f))));
            puVar13 = puVar13 + 1) {
        }
        iVar5 = (uint)(puVar6 != puVar8) - (uint)(puVar7 != puVar13);
        if (iVar5 == 0) {
          iVar5 = (uint)(puVar13 == puVar2) - (uint)(puVar8 == puVar1);
          while ((puVar8 != puVar1 && (iVar5 == 0))) {
            uVar3 = *puVar8;
            if ((uVar3 == 0x5c) || (uVar3 == 0x2f)) {
              iVar5 = 1;
            }
            else {
              iVar5 = 0;
            }
            uVar4 = *puVar13;
            if ((uVar4 == 0x5c) || (uVar4 == 0x2f)) {
              iVar9 = 1;
            }
            else {
              iVar9 = 0;
            }
            if (iVar9 - iVar5 != 0) {
              return iVar9 - iVar5;
            }
            if ((char)iVar5 == '\0') {
              if ((uint)uVar3 - (uint)uVar4 != 0) {
                return (uint)uVar3 - (uint)uVar4;
              }
              puVar8 = puVar8 + 1;
              puVar13 = puVar13 + 1;
            }
            else {
              do {
                puVar8 = puVar8 + 1;
                if (puVar8 == puVar1) break;
              } while ((*puVar8 == 0x5c) || (*puVar8 == 0x2f));
              do {
                puVar13 = puVar13 + 1;
                if (puVar13 == puVar2) break;
              } while ((*puVar13 == 0x5c) || (*puVar13 == 0x2f));
            }
            iVar5 = (uint)(puVar13 == puVar2) - (uint)(puVar8 == puVar1);
          }
        }
      }
    }
  }
  return iVar5;
}


