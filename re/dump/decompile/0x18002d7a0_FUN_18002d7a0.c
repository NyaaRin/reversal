// 0x18002d7a0  FUN_18002d7a0
// size=274 thunk=false
// signature: undefined FUN_18002d7a0()
// status: ok


ulonglong FUN_18002d7a0(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  
  if (param_1 == (longlong *)0x0) {
    return 0xffffffff;
  }
  lVar2 = param_1[1];
  cVar4 = FUN_18002d6e0(lVar2);
  if (cVar4 != '\0') {
    (*DAT_1803faf38)(lVar2,0xffffd8ed);
    iVar5 = (*DAT_1803faff8)(lVar2,0xffffffff);
    pcVar3 = DAT_1803faf10;
    if (iVar5 == 5) {
      if (DAT_1803fb068 == DAT_1803fb070) {
        iVar5 = DAT_1803db334;
        DAT_1803db334 = DAT_1803db334 + 1;
      }
      else {
        piVar1 = (int *)(DAT_1803fb070 + -4);
        DAT_1803fb070 = DAT_1803fb070 + -4;
        iVar5 = *piVar1;
      }
      (*DAT_1803faf38)(lVar2,0xfffffffe);
      (*DAT_1803fb000)(lVar2,0xfffffffe,iVar5);
      pcVar3 = DAT_1803faf10;
      iVar6 = (*DAT_1803fb088)(lVar2);
      (*pcVar3)(lVar2,iVar6 + -2);
      if (iVar5 + 0x40000000U != 0xffffffff) {
        return (ulonglong)(iVar5 + 0x40000000U);
      }
    }
    else {
      iVar5 = (*DAT_1803fb088)(lVar2);
      (*pcVar3)(lVar2,iVar5 + -1);
    }
  }
  uVar7 = (**(code **)(*param_1 + 0x118))(param_1);
  return uVar7;
}


