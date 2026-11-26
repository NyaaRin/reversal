// 0x1800314d0  FUN_1800314d0
// size=584 thunk=false
// signature: undefined FUN_1800314d0()
// status: ok


char FUN_1800314d0(longlong param_1,longlong param_2,undefined8 param_3,int param_4,int param_5)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  
  if ((((param_1 == 0) || (param_2 == 0)) || (DAT_1803faff8 == (code *)0x0)) ||
     (((DAT_1803faef0 == (code *)0x0 || (DAT_1803faed8 == (code *)0x0)) ||
      ((DAT_1803fb088 == (code *)0x0 ||
       ((DAT_1803faf10 == (code *)0x0 || (iVar3 = (*DAT_1803faff8)(param_2,0xffffffff), iVar3 != 5))
       )))))) {
    return '\0';
  }
  uVar4 = (*DAT_1803fb088)(param_2);
  uVar5 = (*DAT_1803fb088)(param_2);
  cVar8 = '\x02';
  if (0 < param_5) {
    (*DAT_1803faed8)(param_2,(double)param_5);
    (*DAT_1803faef0)(param_2,uVar4);
    iVar3 = (*DAT_1803faff8)(param_2,0xffffffff);
    (*DAT_1803faf10)(param_2,uVar5);
    cVar8 = (iVar3 != 5) + '\x01';
    if (iVar3 == 5) goto LAB_180031624;
  }
  if ((0 < param_4) && (cVar2 = FUN_18002eb00(param_2,param_1,param_4), cVar2 != '\0')) {
    (*DAT_1803faef0)(param_2,uVar4);
    iVar3 = (*DAT_1803faff8)(param_2,0xffffffff);
    if (iVar3 == 5) {
      cVar8 = '\x01';
    }
    (*DAT_1803faf10)(param_2,uVar5);
  }
LAB_180031624:
  if (((cVar8 == '\x02') && (DAT_1803fb048 != (code *)0x0)) && (DAT_1803fafd8 != (code *)0x0)) {
    iVar3 = 0;
    iVar7 = 0;
    (*DAT_1803fafd8)(param_2);
    iVar6 = (*DAT_1803fb048)(param_2,uVar4);
    while ((iVar6 != 0 && (iVar3 < 0x18))) {
      iVar3 = iVar3 + 1;
      iVar6 = (*DAT_1803faff8)(param_2,0xfffffffe);
      if (((iVar6 - 3U & 0xfffffffb) == 0) &&
         (iVar6 = (*DAT_1803faff8)(param_2,0xffffffff), iVar6 == 5)) {
        iVar7 = iVar7 + 1;
      }
      pcVar1 = DAT_1803faf10;
      iVar6 = (*DAT_1803fb088)(param_2);
      (*pcVar1)(param_2,iVar6 + -1);
      iVar6 = (*DAT_1803fb048)(param_2,uVar4);
    }
    (*DAT_1803faf10)(param_2,uVar5);
    if (0 < iVar3) {
      cVar8 = 0 < iVar7;
    }
  }
  (*DAT_1803faf10)(param_2,uVar5);
  return cVar8;
}


