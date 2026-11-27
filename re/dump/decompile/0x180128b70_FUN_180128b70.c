// 0x180128b70  FUN_180128b70
// size=699 thunk=false
// signature: undefined FUN_180128b70()
// status: ok


ulonglong FUN_180128b70(char *param_1,char *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  char *pcVar3;
  size_t sVar4;
  char *pcVar5;
  ulonglong uVar6;
  byte bVar7;
  char cVar8;
  byte bVar9;
  byte bVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  uVar6 = *(ulonglong *)(param_1 + 0x10);
  if (((uVar6 == 0) || (param_2 == (char *)0x0)) || (*param_2 == '\0')) goto LAB_180128e12;
  pcVar5 = param_1;
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    pcVar5 = *(char **)param_1;
  }
  if (((uVar6 == 0) ||
      (pcVar3 = (char *)thunk_FUN_1802d5c20(pcVar5,pcVar5 + uVar6,0x2a), pcVar3 == pcVar5 + uVar6))
     || ((longlong)pcVar3 - (longlong)pcVar5 == -1)) {
    uVar6 = FUN_180128ae0(param_1,param_2);
    return uVar6;
  }
  sVar4 = strlen(param_2);
  uVar1 = *(ulonglong *)(param_1 + 0x18);
  if (uVar1 < 0x10) {
    cVar8 = *param_1;
    pcVar5 = param_1;
  }
  else {
    cVar8 = **(char **)param_1;
    pcVar5 = *(char **)param_1;
  }
  uVar13 = *(ulonglong *)(param_1 + 0x10);
  uVar6 = 0;
  uVar11 = uVar13 - 1;
  if (cVar8 == '*') {
    if (pcVar5[uVar13 - 1] != '*') {
      if (sVar4 < uVar11) goto LAB_180128e12;
      if (uVar11 != 0) {
        uVar13 = 0;
        do {
          bVar10 = param_2[uVar13 + (sVar4 - uVar11)];
          if (bVar10 == 0) goto LAB_180128e12;
          bVar9 = bVar10 + 0x20;
          if (0x19 < (byte)(bVar10 + 0xbf)) {
            bVar9 = bVar10;
          }
          pcVar5 = param_1;
          if (0xf < uVar1) {
            pcVar5 = *(char **)param_1;
          }
          bVar10 = pcVar5[uVar13 + 1];
          uVar6 = (ulonglong)(bVar10 + 0x20);
          bVar7 = (byte)(bVar10 + 0x20);
          if (0x19 < (byte)(bVar10 + 0xbf)) {
            bVar7 = bVar10;
          }
          if (bVar9 != bVar7) goto LAB_180128e12;
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar11);
      }
      goto LAB_180128d35;
    }
    if (2 < uVar13) {
      uVar13 = uVar13 - 2;
      if (uVar13 <= sVar4) {
        uVar12 = 0;
        uVar11 = uVar12;
        pcVar5 = param_2;
        uVar14 = uVar12;
        if (uVar13 != 0) {
          do {
            while (bVar10 = pcVar5[uVar11], bVar10 != 0) {
              bVar9 = bVar10 + 0x20;
              if (0x19 < (byte)(bVar10 + 0xbf)) {
                bVar9 = bVar10;
              }
              pcVar3 = param_1;
              if (0xf < uVar1) {
                pcVar3 = *(char **)param_1;
              }
              bVar10 = pcVar3[uVar11 + 1];
              bVar7 = (byte)(bVar10 + 0x20);
              if (0x19 < (byte)(bVar10 + 0xbf)) {
                bVar7 = bVar10;
              }
              if (bVar9 != bVar7) break;
              uVar11 = uVar11 + 1;
              if (uVar13 <= uVar11) {
                return CONCAT71((uint7)(uint3)(bVar10 + 0x20 >> 8),1);
              }
            }
            uVar14 = uVar14 + 1;
            uVar6 = uVar14 + uVar13;
            if (sVar4 < uVar6) goto LAB_180128e12;
            pcVar5 = param_2 + uVar14;
            uVar11 = uVar12;
          } while( true );
        }
        goto LAB_180128d35;
      }
      goto LAB_180128e12;
    }
  }
  else if (pcVar5[uVar13 - 1] != '*') {
    uVar11 = 0;
    if (uVar13 != 0) {
      do {
        bVar10 = param_2[uVar11];
        if (bVar10 == 0) goto LAB_180128e12;
        pcVar5 = param_1;
        if (0xf < uVar1) {
          pcVar5 = *(char **)param_1;
        }
        bVar9 = pcVar5[uVar11];
        uVar6 = (ulonglong)(bVar10 - 0x41);
        bVar7 = bVar9 + 0x20;
        if (0x19 < (byte)(bVar9 + 0xbf)) {
          bVar7 = bVar9;
        }
        if ((byte)(bVar10 - 0x41) < 0x1a) {
          bVar10 = bVar10 + 0x20;
        }
        if (bVar7 != bVar10) goto LAB_180128e12;
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar13);
    }
    return CONCAT71((int7)(uVar6 >> 8),param_2[uVar11] == '\0');
  }
  if (uVar11 <= sVar4) {
    uVar13 = 0;
    if (uVar11 == 0) {
LAB_180128d35:
      return CONCAT71((int7)(uVar6 >> 8),1);
    }
    while (bVar10 = param_2[uVar13], bVar10 != 0) {
      bVar9 = bVar10 + 0x20;
      if (0x19 < (byte)(bVar10 + 0xbf)) {
        bVar9 = bVar10;
      }
      pcVar5 = param_1;
      if (0xf < uVar1) {
        pcVar5 = *(char **)param_1;
      }
      bVar10 = pcVar5[uVar13];
      uVar2 = bVar10 + 0x20;
      uVar6 = (ulonglong)uVar2;
      bVar7 = (byte)uVar2;
      if (0x19 < (byte)(bVar10 + 0xbf)) {
        bVar7 = bVar10;
      }
      if (bVar9 != bVar7) break;
      uVar13 = uVar13 + 1;
      if (uVar11 <= uVar13) {
        return CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
      }
    }
  }
LAB_180128e12:
  return uVar6 & 0xffffffffffffff00;
}


