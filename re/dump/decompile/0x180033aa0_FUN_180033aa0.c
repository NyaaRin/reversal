// 0x180033aa0  FUN_180033aa0
// size=757 thunk=false
// signature: undefined FUN_180033aa0()
// status: ok


undefined8 FUN_180033aa0(undefined8 param_1,longlong *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)(param_3 + 0x88) != 0) {
    if ((*(char *)(param_3 + 0x8c) != '\0') && (cVar3 = FUN_180033790(), cVar3 != '\0')) {
      return 1;
    }
    return 0;
  }
  if ((((*(int *)(param_3 + 0x7c) == -1) || (DAT_1803faef0 == (code *)0x0)) ||
      (DAT_1803faed8 == (code *)0x0)) || (DAT_1803faff8 == (code *)0x0)) {
    return 0;
  }
  plVar1 = param_2 + 1;
  if (param_2 == (longlong *)0x0) {
    iVar4 = 0;
  }
  else if ((DAT_1803fb088 == (code *)0x0) || (*plVar1 == 0)) {
    iVar4 = (**(code **)*param_2)(param_2);
  }
  else {
    iVar4 = (*DAT_1803fb088)();
  }
  iVar6 = *(int *)(param_3 + 0x7c);
  if (iVar6 < 0x40000000) {
    if (param_2 != (longlong *)0x0) {
      (**(code **)(*param_2 + 0x128))(param_2,iVar6);
    }
  }
  else {
    if (param_2 == (longlong *)0x0) {
      lVar7 = 0;
    }
    else {
      lVar7 = *plVar1;
    }
    cVar3 = FUN_18002d6e0(lVar7);
    if (cVar3 != '\0') {
      (*DAT_1803faf38)(lVar7,0xffffd8ed);
      iVar5 = (*DAT_1803faff8)(lVar7,0xffffffff);
      pcVar2 = DAT_1803faf10;
      if (iVar5 == 5) {
        (*DAT_1803faf88)(lVar7,0xffffffff,iVar6 + -0x40000000);
        (*DAT_1803faee0)(lVar7,0xfffffffe);
        goto LAB_180033c21;
      }
      iVar6 = (*DAT_1803fb088)(lVar7);
      (*pcVar2)(lVar7,iVar6 + -1);
    }
    if ((lVar7 != 0) && (DAT_1803fafd8 != (code *)0x0)) {
      (*DAT_1803fafd8)(lVar7);
    }
  }
LAB_180033c21:
  iVar6 = (*DAT_1803faff8)(param_1,0xffffffff);
  if (iVar6 != 5) {
    *(undefined4 *)(param_3 + 0x7c) = 0xffffffff;
    *(undefined1 *)(param_3 + 0x80) = 0;
    do {
      if (param_2 != (longlong *)0x0) {
        if ((DAT_1803fb088 != (code *)0x0) && (param_2[1] != 0)) {
          iVar6 = (*DAT_1803fb088)();
          goto LAB_180033c7f;
        }
        iVar6 = (**(code **)*param_2)(param_2);
        goto LAB_180033c7f;
      }
      do {
        iVar6 = 0;
LAB_180033c7f:
        if (iVar6 <= iVar4) {
          return 0;
        }
      } while (param_2 == (longlong *)0x0);
      if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (*plVar1 == 0)) {
        (**(code **)(*param_2 + 0x10))(param_2,1);
      }
      else {
        iVar5 = (*DAT_1803fb088)();
        iVar6 = 0;
        if (-1 < iVar5 + -1) {
          iVar6 = iVar5 + -1;
        }
        (*DAT_1803faf10)(*plVar1,iVar6);
      }
    } while( true );
  }
  (*DAT_1803faed8)(param_1,(double)param_4);
  (*DAT_1803faef0)(param_1,0xfffffffe);
  iVar6 = (*DAT_1803faff8)(param_1,0xffffffff);
  if (iVar6 == 5) {
    return 1;
  }
  do {
    if (param_2 != (longlong *)0x0) {
      if ((DAT_1803fb088 != (code *)0x0) && (*plVar1 != 0)) {
        iVar6 = (*DAT_1803fb088)();
        goto LAB_180033d2c;
      }
      iVar6 = (**(code **)*param_2)(param_2);
      goto LAB_180033d2c;
    }
    do {
      iVar6 = 0;
LAB_180033d2c:
      if (iVar6 <= iVar4) {
        return 0;
      }
    } while (param_2 == (longlong *)0x0);
    if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (*plVar1 == 0)) {
      (**(code **)(*param_2 + 0x10))(param_2,1);
    }
    else {
      iVar5 = (*DAT_1803fb088)();
      iVar6 = 0;
      if (-1 < iVar5 + -1) {
        iVar6 = iVar5 + -1;
      }
      (*DAT_1803faf10)(*plVar1,iVar6);
    }
  } while( true );
}


