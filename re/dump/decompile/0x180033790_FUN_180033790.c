// 0x180033790  FUN_180033790
// size=784 thunk=false
// signature: undefined FUN_180033790()
// status: ok


undefined1 FUN_180033790(undefined8 param_1,longlong *param_2,int param_3,int param_4)

{
  longlong lVar1;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  undefined1 uVar5;
  DWORD DVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int local_res18 [2];
  
  if ((1 < param_3 - 1U) || (0x7f < param_4 - 1U)) {
    uVar5 = FUN_180033540(param_1,param_2,param_3,param_4);
    return uVar5;
  }
  lVar9 = (longlong)param_3 * 0x81 + (longlong)param_4;
  lVar1 = lVar9 * 8;
  piVar2 = (int *)(&DAT_1803da718 + lVar9);
  DVar6 = GetTickCount();
  iVar8 = *piVar2;
  if ((iVar8 != -1) && (DVar6 - *(int *)((longlong)&DAT_1803da718 + lVar1 + 4) < 500)) {
    if (iVar8 < 0x40000000) {
      if (param_2 != (longlong *)0x0) {
        (**(code **)(*param_2 + 0x128))(param_2,iVar8);
      }
    }
    else {
      if (param_2 == (longlong *)0x0) {
        lVar9 = 0;
      }
      else {
        lVar9 = param_2[1];
      }
      cVar4 = FUN_18002d6e0(lVar9);
      if (cVar4 != '\0') {
        (*DAT_1803faf38)(lVar9,0xffffd8ed);
        iVar7 = (*DAT_1803faff8)(lVar9,0xffffffff);
        pcVar3 = DAT_1803faf10;
        if (iVar7 == 5) {
          (*DAT_1803faf88)(lVar9,0xffffffff,iVar8 + -0x40000000);
          (*DAT_1803faee0)(lVar9,0xfffffffe);
          goto LAB_1800338c8;
        }
        iVar8 = (*DAT_1803fb088)(lVar9);
        (*pcVar3)(lVar9,iVar8 + -1);
      }
      if ((lVar9 != 0) && (DAT_1803fafd8 != (code *)0x0)) {
        (*DAT_1803fafd8)(lVar9);
      }
    }
LAB_1800338c8:
    iVar8 = (*DAT_1803faff8)(param_1,0xffffffff);
    if (iVar8 == 5) {
      return 1;
    }
    if (param_2 != (longlong *)0x0) {
      if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (param_2[1] == 0)) {
        (**(code **)(*param_2 + 0x10))(param_2,1);
      }
      else {
        iVar7 = (*DAT_1803fb088)();
        iVar8 = 0;
        if (-1 < iVar7 + -1) {
          iVar8 = iVar7 + -1;
        }
        (*DAT_1803faf10)(param_2[1],iVar8);
      }
    }
    FUN_18002d8c0(param_2,*piVar2);
    *piVar2 = -1;
  }
  cVar4 = FUN_180033540(param_1,param_2,param_3,param_4);
  if (cVar4 == '\0') {
    return 0;
  }
  iVar8 = *piVar2;
  if (iVar8 == -1) {
LAB_180033a1e:
    if (param_2 == (longlong *)0x0) goto LAB_180033a75;
  }
  else {
    if (0x3fffffff < iVar8) {
      if (param_2 == (longlong *)0x0) {
        lVar9 = 0;
      }
      else {
        lVar9 = param_2[1];
      }
      iVar8 = iVar8 + -0x40000000;
      local_res18[0] = iVar8;
      cVar4 = FUN_18002d6e0(lVar9);
      if (cVar4 != '\0') {
        (*DAT_1803faf38)(lVar9,0xffffd8ed);
        iVar7 = (*DAT_1803faff8)(lVar9,0xffffffff);
        if (iVar7 == 5) {
          (*DAT_1803fafd8)(lVar9);
          (*DAT_1803fb000)(lVar9,0xfffffffe,iVar8);
        }
        pcVar3 = DAT_1803faf10;
        iVar7 = (*DAT_1803fb088)(lVar9);
        (*pcVar3)(lVar9,iVar7 + -1);
      }
      if (DAT_1803fb070 == DAT_1803fb078) {
        FUN_180229d20(&DAT_1803fb068,DAT_1803fb070,local_res18);
      }
      else {
        *DAT_1803fb070 = iVar8;
        DAT_1803fb070 = DAT_1803fb070 + 1;
      }
      goto LAB_180033a1e;
    }
    if (param_2 == (longlong *)0x0) goto LAB_180033a75;
    (**(code **)(*param_2 + 0x120))(param_2);
  }
  if ((DAT_1803faf38 == (code *)0x0) || (param_2[1] == 0)) {
    (**(code **)(*param_2 + 8))(param_2,0xffffffff);
  }
  else {
    (*DAT_1803faf38)(param_2[1],0xffffffff);
  }
LAB_180033a75:
  iVar8 = FUN_18002d7a0(param_2);
  *piVar2 = iVar8;
  *(DWORD *)((longlong)&DAT_1803da718 + lVar1 + 4) = DVar6;
  return 1;
}


