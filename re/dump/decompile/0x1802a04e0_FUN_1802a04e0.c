// 0x1802a04e0  FUN_1802a04e0
// size=669 thunk=false
// signature: undefined FUN_1802a04e0()
// status: ok


uint FUN_1802a04e0(byte *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  byte *pbVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  
  if (((((uint)*param_2 * 0x100 + (uint)param_2[1]) * 0x100 + (uint)param_2[2]) * 0x100 +
       (uint)param_2[3] == 0x57bc0000) &&
     ((((uint)param_2[4] * 0x100 + (uint)param_2[5]) * 0x100 + (uint)param_2[6]) * 0x100 +
      (uint)param_2[7] == 0)) {
    uVar8 = (uint)param_2[8] * 0x1000000 + (uint)param_2[9] * 0x10000 + (uint)param_2[10] * 0x100 +
            (uint)param_2[0xb];
    pbVar12 = param_1 + uVar8;
    DAT_1803fccb0 = param_2;
    DAT_1803fccb8 = pbVar12;
    DAT_1803fcce0 = param_1;
    DAT_1803fcce8 = param_1;
    pbVar3 = (byte *)FUN_18029ff10(param_2 + 0x10);
    pbVar4 = pbVar3;
    if (pbVar3 != param_2 + 0x10) {
      do {
        if (pbVar12 < DAT_1803fcce8) {
          return 0;
        }
        pbVar3 = (byte *)FUN_18029ff10(pbVar4);
        bVar19 = pbVar3 != pbVar4;
        pbVar4 = pbVar3;
      } while (bVar19);
    }
    if (((*pbVar3 == 5) && (pbVar3[1] == 0xfa)) && (DAT_1803fcce8 == pbVar12)) {
      uVar18 = 0;
      uVar5 = 1;
      uVar17 = uVar8;
      uVar2 = uVar8 % 0x15b0;
      while (uVar17 != 0) {
        uVar9 = 0;
        uVar10 = uVar9;
        if (7 < uVar2) {
          do {
            uVar9 = uVar10 + 8;
            iVar11 = *param_1 + uVar5;
            iVar7 = (uint)param_1[1] + iVar11;
            iVar16 = (uint)param_1[2] + iVar7;
            iVar15 = (uint)param_1[3] + iVar16;
            iVar14 = (uint)param_1[4] + iVar15;
            iVar13 = (uint)param_1[5] + iVar14;
            iVar6 = (uint)param_1[6] + iVar13;
            uVar5 = (uint)param_1[7] + iVar6;
            param_1 = param_1 + 8;
            uVar18 = uVar18 + iVar6 + iVar13 + iVar14 + iVar15 + iVar16 + iVar7 + iVar11 + uVar5;
            uVar1 = uVar10 + 0xf;
            uVar10 = uVar9;
          } while (uVar1 < uVar2);
        }
        if (uVar9 < uVar2) {
          iVar6 = 0;
          iVar7 = 0;
          if (uVar2 - uVar9 < 2) {
LAB_1802a06d2:
            uVar5 = uVar5 + *param_1;
            uVar18 = uVar18 + uVar5;
            param_1 = param_1 + 1;
          }
          else {
            do {
              uVar9 = uVar9 + 2;
              iVar11 = *param_1 + uVar5;
              uVar5 = (uint)param_1[1] + iVar11;
              iVar6 = iVar6 + iVar11;
              iVar7 = iVar7 + uVar5;
              param_1 = param_1 + 2;
            } while (uVar9 < uVar2 - 1);
            if (uVar9 < uVar2) goto LAB_1802a06d2;
          }
          uVar18 = uVar18 + iVar7 + iVar6;
        }
        uVar5 = uVar5 % 0xfff1;
        uVar18 = uVar18 % 0xfff1;
        uVar17 = uVar17 - uVar2;
        uVar2 = 0x15b0;
      }
      if (uVar18 * 0x10000 + uVar5 ==
          (uint)pbVar3[2] * 0x1000000 + (uint)pbVar3[3] * 0x10000 + (uint)pbVar3[4] * 0x100 +
          (uint)pbVar3[5]) {
        return uVar8;
      }
    }
  }
  return 0;
}


