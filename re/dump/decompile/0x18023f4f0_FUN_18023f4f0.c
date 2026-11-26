// 0x18023f4f0  FUN_18023f4f0
// size=1180 thunk=false
// signature: undefined FUN_18023f4f0()
// status: ok


longlong *
FUN_18023f4f0(longlong *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  byte *pbVar3;
  uint *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  uint *puVar7;
  byte bVar8;
  sbyte sVar9;
  byte bVar10;
  longlong lVar11;
  ulonglong uVar12;
  char cVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint *puVar23;
  uint uVar24;
  byte *_Src;
  uint uVar25;
  char cVar26;
  byte *_Dst;
  size_t _Size;
  longlong local_68;
  
  puVar4 = (uint *)*param_3;
  puVar5 = (uint *)*param_2;
  puVar1 = param_3 + 1;
  puVar2 = param_2 + 1;
  if ((puVar5 == puVar4) && (*puVar2 == *puVar1)) {
    lVar11 = param_4[1];
    *param_1 = *param_4;
    param_1[1] = lVar11;
    return param_1;
  }
  lVar11 = param_4[1];
  puVar7 = (uint *)*param_4;
  uVar17 = *puVar2;
  uVar6 = *puVar1;
  lVar19 = (((longlong)puVar4 - (longlong)puVar5 >> 2) * 0x20 - uVar17) + uVar6;
  *param_1 = *param_4;
  param_1[1] = lVar11;
  if ((lVar19 < 0) && ((ulonglong)param_1[1] < (ulonglong)-lVar19)) {
    uVar21 = param_1[1] + lVar19;
    param_1[1] = uVar21;
    *param_1 = *param_1 + (~uVar21 >> 5) * -4 + -4;
    local_68 = *param_1;
  }
  else {
    param_1[1] = param_1[1] + lVar19;
    uVar21 = param_1[1];
    *param_1 = *param_1 + (uVar21 >> 5) * 4;
    local_68 = *param_1;
  }
  uVar20 = (uint)uVar21 & 0x1f;
  uVar12 = (ulonglong)uVar20;
  param_1[1] = uVar12;
  uVar21 = param_4[1];
  bVar8 = (byte)uVar17;
  uVar18 = -1 << (bVar8 & 0x1f);
  cVar13 = (char)uVar21;
  if (uVar21 == 0) {
    uVar25 = 0;
  }
  else {
    uVar25 = 0xffffffff >> (-cVar13 & 0x1fU);
  }
  cVar26 = (char)uVar6;
  if (uVar6 == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = 0xffffffff >> (-cVar26 & 0x1fU);
  }
  sVar9 = (sbyte)uVar20;
  uVar20 = -1 << sVar9;
  lVar11 = 0;
  if (uVar12 == 0) {
    lVar11 = -4;
  }
  if (puVar5 == puVar4) {
    bVar10 = cVar13 - bVar8;
    if (uVar21 < uVar17) {
      bVar10 = bVar8 - cVar13;
    }
    uVar16 = uVar18 & uVar14 & *puVar5;
    uVar24 = uVar16 >> (bVar10 & 0x1f);
    if (uVar17 <= uVar21) {
      uVar24 = uVar16 << (bVar10 & 0x1f);
    }
    if (puVar7 != (uint *)(lVar11 + local_68)) {
      *puVar7 = *puVar7 & uVar25 | uVar24;
      puVar7[1] = (*puVar5 & uVar18 & uVar14) >> (cVar26 - (char)param_1[1] & 0x1fU) |
                  puVar7[1] & uVar20;
      return param_1;
    }
    if (uVar12 == 0) {
      uVar20 = 0;
    }
    uVar24 = (uVar20 | uVar25) & *puVar7 | uVar24;
  }
  else {
    uVar15 = *puVar2;
    if (puVar7 == (uint *)(lVar11 + local_68)) {
      bVar8 = cVar13 - (char)uVar15;
      if (uVar21 < uVar17) {
        bVar8 = (char)uVar15 - cVar13;
      }
      uVar24 = (uVar18 & *puVar5) >> (bVar8 & 0x1f);
      if (uVar17 <= uVar21) {
        uVar24 = (uVar18 & *puVar5) << (bVar8 & 0x1f);
      }
      if (uVar12 == 0) {
        uVar20 = 0;
      }
      uVar18 = (uVar20 | uVar25) & *puVar7;
      if (uVar6 != 0) {
        *puVar7 = (*puVar4 & uVar14) << (sVar9 - cVar26 & 0x1fU) | uVar18 | uVar24;
        return param_1;
      }
      *puVar7 = uVar18 | uVar24;
      return param_1;
    }
    uVar12 = (ulonglong)((uint)uVar21 & 7);
    uVar24 = (uint)uVar15 & 7;
    uVar22 = (ulonglong)uVar24;
    if (uVar22 == uVar12) {
      uVar18 = (uint)uVar6 & 7;
      pbVar3 = (byte *)((uVar6 - uVar18 >> 3) + (longlong)puVar4);
      _Dst = (byte *)((uVar21 - uVar12 >> 3) + (longlong)puVar7);
      _Src = (byte *)((longlong)puVar5 + (uVar17 - uVar22 >> 3));
      if (uVar22 != 0) {
        sVar9 = (sbyte)uVar24;
        bVar8 = *_Src;
        _Src = _Src + 1;
        *_Dst = (byte)(0xff >> (8U - sVar9 & 0x1f)) & *_Dst | -1 << sVar9 & bVar8;
        _Dst = _Dst + 1;
      }
      _Size = (longlong)pbVar3 - (longlong)_Src;
      memmove(_Dst,_Src,_Size);
      if ((ulonglong)uVar18 == 0) {
        return param_1;
      }
      _Dst[_Size] = (byte)(0xff >> (8U - (sbyte)uVar18 & 0x1f)) & *pbVar3 |
                    -1 << (sbyte)uVar18 & _Dst[_Size];
      return param_1;
    }
    puVar23 = puVar5 + 1;
    if (uVar21 < uVar17) {
      uVar15 = uVar15 - uVar21;
      bVar8 = (byte)uVar15;
      uVar18 = (uVar18 & *puVar5) >> (bVar8 & 0x1f) | uVar25 & *puVar7;
      uVar25 = 0xffffffff >> (bVar8 & 0x1f);
      *puVar7 = uVar18;
      if (puVar23 != puVar4) {
        do {
          *puVar7 = uVar18 & uVar25 | *puVar23 << (0x20 - bVar8 & 0x1f);
          puVar7 = puVar7 + 1;
          uVar18 = *puVar23;
          puVar23 = puVar23 + 1;
          uVar18 = ~uVar25 & *puVar7 | uVar18 >> (bVar8 & 0x1f);
          *puVar7 = uVar18;
        } while (puVar23 != puVar4);
      }
      if (uVar6 == 0) {
        return param_1;
      }
      uVar18 = (*puVar23 & uVar14) << (0x20 - bVar8 & 0x1f);
      if (uVar6 < uVar15) {
        *puVar7 = (uVar25 | uVar20) & *puVar7 | uVar18;
        return param_1;
      }
      *puVar7 = *puVar7 & uVar25 | uVar18;
      if (uVar6 == uVar15) {
        return param_1;
      }
      puVar7[1] = (*puVar23 & uVar14) >> (bVar8 & 0x1f) | puVar7[1] & uVar20;
      return param_1;
    }
    uVar17 = 0x20 - (uVar21 - uVar15);
    bVar8 = (byte)(uVar21 - uVar15);
    *puVar7 = (uVar18 & *puVar5) << (bVar8 & 0x1f) | uVar25 & *puVar7;
    bVar10 = (byte)uVar17;
    uVar24 = *puVar5 >> (bVar10 & 0x1f);
    puVar5 = puVar7;
    for (; puVar7 = puVar5 + 1, puVar23 != puVar4; puVar23 = puVar23 + 1) {
      *puVar7 = *puVar23 << (bVar8 & 0x1f) | uVar24;
      uVar24 = *puVar23 >> (bVar10 & 0x1f);
      puVar5 = puVar7;
    }
    uVar21 = *puVar1;
    if (uVar17 <= uVar6) {
      *puVar7 = *puVar23 << (bVar8 & 0x1f) | uVar24;
      if (uVar21 == uVar17) {
        return param_1;
      }
      puVar5[2] = *puVar23 >> (bVar10 & 0x1f) & ~uVar20 | puVar5[2] & uVar20;
      return param_1;
    }
    if (uVar21 != 0) {
      *puVar7 = (*puVar23 & uVar14) << (bVar8 & 0x1f) | uVar20 & *puVar7 | uVar24;
      return param_1;
    }
    uVar24 = uVar20 & *puVar7 | uVar24;
  }
  *puVar7 = uVar24;
  return param_1;
}


