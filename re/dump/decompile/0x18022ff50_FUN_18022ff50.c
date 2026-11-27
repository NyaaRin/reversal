// 0x18022ff50  FUN_18022ff50
// size=672 thunk=false
// signature: undefined FUN_18022ff50()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 ****** FUN_18022ff50(undefined8 ******param_1,undefined8 ******param_2)

{
  undefined8 *****pppppuVar1;
  code *pcVar2;
  undefined8 ******ppppppuVar3;
  undefined8 *****pppppuVar4;
  undefined8 *****pppppuVar5;
  undefined8 *****pppppuVar6;
  char cVar7;
  int iVar8;
  undefined8 ******ppppppuVar9;
  undefined8 ******ppppppuVar10;
  undefined8 ******_Buf1;
  undefined8 *****pppppuVar11;
  undefined8 ******ppppppuVar12;
  undefined8 ******ppppppuVar13;
  undefined1 auStack_b8 [32];
  undefined8 *****local_98;
  undefined8 *****local_90;
  undefined8 ****ppppuStack_88;
  undefined8 ****local_80;
  undefined8 ****ppppuStack_78;
  ulonglong local_70;
  
  local_70 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  if ((param_1 == param_2) ||
     (ppppppuVar9 = param_1 + 4, local_98 = param_2, ppppppuVar9 == param_2)) {
    return param_2;
  }
LAB_18022ffa0:
  ppppppuVar3 = (undefined8 ******)*ppppppuVar9;
  pppppuVar4 = ppppppuVar9[1];
  pppppuVar5 = ppppppuVar9[2];
  pppppuVar6 = ppppppuVar9[3];
  ppppppuVar9[2] = (undefined8 *****)0x0;
  ppppppuVar9[3] = (undefined8 *****)0xf;
  *(undefined1 *)ppppppuVar9 = 0;
  pppppuVar1 = param_1[2];
  ppppppuVar12 = param_1;
  if ((undefined8 *****)0xf < param_1[3]) {
    ppppppuVar12 = (undefined8 ******)*param_1;
  }
  ppppppuVar10 = &local_90;
  if ((undefined8 *****)0xf < pppppuVar6) {
    ppppppuVar10 = ppppppuVar3;
  }
  pppppuVar11 = pppppuVar5;
  if (pppppuVar1 < pppppuVar5) {
    pppppuVar11 = pppppuVar1;
  }
  local_90 = ppppppuVar3;
  ppppuStack_88 = pppppuVar4;
  local_80 = pppppuVar5;
  ppppuStack_78 = pppppuVar6;
  iVar8 = memcmp(ppppppuVar10,ppppppuVar12,(size_t)pppppuVar11);
  ppppppuVar12 = ppppppuVar9;
  if (iVar8 == 0) {
    if (pppppuVar1 <= pppppuVar5) {
      if (pppppuVar5 <= pppppuVar1) goto LAB_1802300e0;
      goto LAB_18023002d;
    }
    cVar7 = -1;
  }
  else if (iVar8 < 0) {
    cVar7 = -1;
  }
  else {
LAB_18023002d:
    cVar7 = '\x01';
  }
  if (-1 < cVar7) {
LAB_1802300e0:
    do {
      ppppppuVar13 = ppppppuVar12 + -4;
      pppppuVar1 = ppppppuVar12[-2];
      ppppppuVar10 = ppppppuVar13;
      if ((undefined8 *****)0xf < ppppppuVar12[-1]) {
        ppppppuVar10 = (undefined8 ******)*ppppppuVar13;
      }
      _Buf1 = &local_90;
      if ((undefined8 *****)0xf < pppppuVar6) {
        _Buf1 = ppppppuVar3;
      }
      pppppuVar11 = pppppuVar5;
      if (pppppuVar1 < pppppuVar5) {
        pppppuVar11 = pppppuVar1;
      }
      iVar8 = memcmp(_Buf1,ppppppuVar10,(size_t)pppppuVar11);
      if (iVar8 == 0) {
        if (pppppuVar5 < pppppuVar1) {
          cVar7 = -1;
        }
        else {
          if (pppppuVar5 <= pppppuVar1) goto LAB_18023013e;
LAB_180230128:
          cVar7 = '\x01';
        }
      }
      else {
        if (-1 < iVar8) goto LAB_180230128;
        cVar7 = -1;
      }
      if (-1 < cVar7) goto LAB_18023013e;
      FUN_18020e8a0(ppppppuVar12,ppppppuVar13);
      ppppppuVar12 = ppppppuVar13;
    } while( true );
  }
  ppppppuVar12 = ppppppuVar9 + 4;
  ppppppuVar10 = ppppppuVar9;
  while (ppppppuVar10 != param_1) {
    ppppppuVar10 = ppppppuVar10 + -4;
    ppppppuVar12 = ppppppuVar12 + -4;
    FUN_18020e8a0(ppppppuVar12,ppppppuVar10);
  }
  if (param_1 != &local_90) {
    if ((undefined8 *****)0xf < param_1[3]) {
      pppppuVar1 = *param_1;
      pppppuVar11 = pppppuVar1;
      if ((0xfff < (longlong)param_1[3] + 1U) &&
         (pppppuVar11 = (undefined8 *****)pppppuVar1[-1],
         0x1f < (ulonglong)((longlong)pppppuVar1 + (-8 - (longlong)pppppuVar11))))
      goto LAB_1802301e8;
      free(pppppuVar11);
    }
    *param_1 = ppppppuVar3;
    param_1[1] = pppppuVar4;
    param_1[2] = pppppuVar5;
    param_1[3] = pppppuVar6;
    local_80 = (undefined8 *****)0x0;
    ppppuStack_78 = (undefined8 *****)0xf;
    local_90 = (undefined8 *****)((ulonglong)local_90 & 0xffffffffffffff00);
  }
  goto LAB_1802301a4;
LAB_18023013e:
  if (ppppppuVar12 != &local_90) {
    if ((undefined8 *****)0xf < ppppppuVar12[3]) {
      pppppuVar1 = *ppppppuVar12;
      pppppuVar11 = pppppuVar1;
      if ((0xfff < (longlong)ppppppuVar12[3] + 1U) &&
         (pppppuVar11 = (undefined8 *****)pppppuVar1[-1],
         0x1f < (ulonglong)((longlong)pppppuVar1 + (-8 - (longlong)pppppuVar11)))) {
LAB_1802301e8:
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        ppppppuVar9 = (undefined8 ******)(*pcVar2)();
        return ppppppuVar9;
      }
      free(pppppuVar11);
    }
    *ppppppuVar12 = ppppppuVar3;
    ppppppuVar12[1] = pppppuVar4;
    ppppppuVar12[2] = pppppuVar5;
    ppppppuVar12[3] = pppppuVar6;
    local_80 = (undefined8 *****)0x0;
    ppppuStack_78 = (undefined8 *****)0xf;
    local_90 = (undefined8 *****)((ulonglong)local_90 & 0xffffffffffffff00);
  }
LAB_1802301a4:
  FUN_18020e450(&local_90);
  ppppppuVar9 = ppppppuVar9 + 4;
  if (ppppppuVar9 == (undefined8 ******)local_98) {
    return (undefined8 ******)local_98;
  }
  goto LAB_18022ffa0;
}


