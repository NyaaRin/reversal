// 0x180254360  FUN_180254360
// size=964 thunk=false
// signature: undefined FUN_180254360()
// status: ok


void FUN_180254360(ulonglong *param_1,longlong *param_2)

{
  ulonglong *puVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong *_Dst;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong *_Src;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 local_38;
  
  plVar3 = (longlong *)param_1[1];
  for (plVar6 = (longlong *)*param_1; plVar6 != plVar3; plVar6 = plVar6 + 6) {
    lVar4 = *param_2;
    if (*(char *)(*plVar6 * 0x60 + 0x22 + lVar4) == '\x03') {
      lVar9 = *plVar6 + -1;
      cVar2 = *(char *)(lVar9 * 0x60 + 0x22 + lVar4);
      while (cVar2 == '\x03') {
        lVar9 = lVar9 + -1;
        cVar2 = *(char *)(lVar9 * 0x60 + 0x22 + lVar4);
      }
      *plVar6 = lVar9;
      plVar6[1] = *(longlong *)(lVar9 * 0x60 + 8 + *param_2) -
                  *(longlong *)(lVar9 * 0x60 + *param_2) >> 4;
      *(undefined1 *)((longlong)plVar6 + 0x22) = 1;
    }
    lVar4 = *param_2;
    if (*(char *)(plVar6[2] * 0x60 + 0x22 + lVar4) == '\x03') {
      lVar9 = plVar6[2] + -1;
      cVar2 = *(char *)(lVar9 * 0x60 + 0x22 + lVar4);
      while (cVar2 == '\x03') {
        lVar9 = lVar9 + -1;
        cVar2 = *(char *)(lVar9 * 0x60 + 0x22 + lVar4);
      }
      plVar6[2] = lVar9;
      plVar6[3] = *(longlong *)(lVar9 * 0x60 + 8 + *param_2) -
                  *(longlong *)(lVar9 * 0x60 + *param_2) >> 4;
      *(undefined1 *)((longlong)plVar6 + 0x22) = 1;
    }
  }
  uVar7 = *param_1;
  uVar10 = uVar7;
  while( true ) {
    if (param_1[1] <= uVar10) {
      return;
    }
    if (*(char *)(uVar10 + 0x22) != '\0') break;
    uVar10 = uVar10 + 0x30;
  }
  for (; uVar10 = param_1[1], uVar7 < uVar10; uVar7 = uVar7 + 0x30) {
    *(undefined1 *)(uVar7 + 0x22) = 0;
  }
  uVar7 = ((longlong)(uVar10 - *param_1) >> 4) * -0x5555555555555555;
  if (1 < uVar7) {
    FUN_180260af0(*param_1,uVar10,uVar7,local_38);
    _Dst = (ulonglong *)param_1[1];
LAB_1802544f0:
    _Src = _Dst;
    uVar7 = *param_1;
    if ((_Src != (ulonglong *)(uVar7 + 0x30)) && ((ulonglong *)(uVar7 + 0x30) <= _Src)) {
      uVar7 = _Src[-10];
      puVar1 = _Src + -10;
      uVar10 = _Src[-0xc];
      _Dst = _Src + -6;
      bVar15 = uVar10 < uVar7;
      bVar17 = false;
      if (uVar10 == uVar7) {
        bVar15 = _Src[-0xb] < _Src[-9];
        bVar17 = _Src[-0xb] == _Src[-9];
      }
      uVar11 = _Src[-4];
      uVar5 = *_Dst;
      uVar12 = uVar10;
      puVar14 = _Src + -0xc;
      if (bVar15 || bVar17) {
        uVar12 = uVar7;
        puVar14 = puVar1;
      }
      bVar15 = uVar5 < uVar11;
      bVar17 = false;
      if (uVar5 == uVar11) {
        bVar15 = _Src[-5] < _Src[-3];
        bVar17 = _Src[-5] == _Src[-3];
      }
      uVar8 = uVar5;
      if (bVar15 || bVar17) {
        uVar8 = uVar11;
      }
      if (uVar12 == uVar8) {
        bVar17 = _Src[((ulonglong)(!bVar15 && !bVar17) ^ 1) * 2 + -5] <= puVar14[1];
      }
      else {
        bVar17 = uVar8 < uVar12;
      }
      if (!bVar17) goto LAB_18025459b;
      if ((char)_Src[-2] != '\0') {
        *(undefined1 *)(_Src + -8) = 1;
      }
      if (*(char *)((longlong)_Src + -0xf) != '\0') {
        *(undefined1 *)((longlong)_Src + -0x3f) = 1;
      }
      goto LAB_180254698;
    }
    uVar10 = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    uVar11 = ((longlong)(param_1[1] - uVar7) >> 4) * -0x5555555555555555;
    if (uVar11 != 0) {
      do {
        if (*(char *)(uVar7 + 0x20 + uVar10 * 0x30) == '\0') {
          if (*(char *)(uVar7 + 0x21 + uVar10 * 0x30) != '\0') {
            param_1[4] = uVar10;
          }
        }
        else {
          param_1[3] = uVar10;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar11);
    }
  }
  return;
LAB_18025459b:
  puVar14 = _Src + -0xc;
  bVar15 = uVar10 < uVar7;
  bVar17 = false;
  if (uVar10 == uVar7) {
    bVar15 = _Src[-0xb] < _Src[-9];
    bVar17 = _Src[-0xb] == _Src[-9];
  }
  puVar13 = puVar14;
  if (bVar15 || bVar17) {
    puVar13 = puVar1;
  }
  bVar17 = uVar5 < uVar11;
  if (uVar5 == uVar11) {
    bVar17 = _Src[-5] < _Src[-3];
  }
  bVar16 = *puVar13 < _Src[((ulonglong)!bVar17 - 3) * 2];
  bVar15 = false;
  if (*puVar13 == _Src[((ulonglong)!bVar17 - 3) * 2]) {
    bVar16 = puVar13[1] < _Src[((ulonglong)!bVar17 - 3) * 2 + 1];
    bVar15 = puVar13[1] == _Src[((ulonglong)!bVar17 - 3) * 2 + 1];
  }
  if (!bVar16 && !bVar15) {
    bVar17 = uVar11 < uVar5;
    if (uVar11 == uVar5) {
      bVar17 = _Src[-3] < _Src[-5];
    }
    if (bVar17) {
      bVar17 = uVar10 < uVar7;
      if (uVar10 == uVar7) {
        bVar17 = _Src[-0xb] < _Src[-9];
      }
      if (!bVar17) {
        puVar14 = puVar1;
      }
      bVar15 = uVar5 < uVar11;
      bVar17 = false;
      if (uVar5 == uVar11) {
        bVar15 = _Src[-5] < _Src[-3];
        bVar17 = _Src[-5] == _Src[-3];
      }
      uVar22 = (undefined4)*puVar14;
      uVar23 = *(undefined4 *)((longlong)puVar14 + 4);
      uVar24 = (undefined4)puVar14[1];
      uVar25 = *(undefined4 *)((longlong)puVar14 + 0xc);
      puVar1 = _Src + ((ulonglong)(bVar15 || bVar17) - 3) * 2;
      uVar18 = (undefined4)*puVar1;
      uVar19 = *(undefined4 *)((longlong)puVar1 + 4);
      uVar20 = (undefined4)puVar1[1];
      uVar21 = *(undefined4 *)((longlong)puVar1 + 0xc);
    }
    else {
      bVar15 = uVar5 < uVar11;
      bVar17 = false;
      if (uVar5 == uVar11) {
        bVar15 = _Src[-5] < _Src[-3];
        bVar17 = _Src[-5] == _Src[-3];
      }
      bVar16 = uVar10 < uVar7;
      if (uVar10 == uVar7) {
        bVar16 = _Src[-0xb] < _Src[-9];
      }
      puVar13 = _Src + ((ulonglong)(bVar15 || bVar17) - 3) * 2;
      uVar22 = (undefined4)*puVar13;
      uVar23 = *(undefined4 *)((longlong)puVar13 + 4);
      uVar24 = (undefined4)puVar13[1];
      uVar25 = *(undefined4 *)((longlong)puVar13 + 0xc);
      if (!bVar16) {
        puVar14 = puVar1;
      }
      uVar18 = (undefined4)*puVar14;
      uVar19 = *(undefined4 *)((longlong)puVar14 + 4);
      uVar20 = (undefined4)puVar14[1];
      uVar21 = *(undefined4 *)((longlong)puVar14 + 0xc);
    }
    *(undefined4 *)(_Src + -10) = uVar22;
    *(undefined4 *)((longlong)_Src + -0x4c) = uVar23;
    *(undefined4 *)(_Src + -9) = uVar24;
    *(undefined4 *)((longlong)_Src + -0x44) = uVar25;
    *(undefined4 *)(_Src + -0xc) = uVar18;
    *(undefined4 *)((longlong)_Src + -0x5c) = uVar19;
    *(undefined4 *)(_Src + -0xb) = uVar20;
    *(undefined4 *)((longlong)_Src + -0x54) = uVar21;
    *(undefined1 *)((longlong)_Src + -0x3e) = 1;
    if ((char)_Src[-2] != '\0') {
      *(undefined1 *)(_Src + -8) = 1;
    }
    if (*(char *)((longlong)_Src + -0xf) != '\0') {
      *(undefined1 *)((longlong)_Src + -0x3f) = 1;
    }
LAB_180254698:
    memmove(_Dst,_Src,param_1[1] - (longlong)_Src);
    param_1[1] = param_1[1] - 0x30;
  }
  goto LAB_1802544f0;
}


