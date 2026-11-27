// 0x180030a70  FUN_180030a70
// size=1192 thunk=false
// signature: undefined FUN_180030a70()
// status: ok


undefined4 * FUN_180030a70(undefined4 *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  char **ppcVar13;
  undefined4 local_58;
  undefined1 local_54 [4];
  char *local_50;
  char *local_48;
  char *local_40;
  
  FUN_18002e100();
  if (DAT_1803fa678 == (longlong *)0x0) {
    lVar9 = 0;
    plVar10 = (longlong *)0x0;
  }
  else {
    lVar9 = (**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0);
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = *(longlong *)(lVar9 + 8);
    }
    if (DAT_1803fa678 == (longlong *)0x0) {
      plVar10 = (longlong *)0x0;
    }
    else {
      plVar10 = (longlong *)(**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0);
    }
  }
  if ((lVar9 == 0) || (plVar10 == (longlong *)0x0)) goto LAB_180030eec;
  FUN_180030030(lVar9,plVar10);
  if (DAT_1803fafd0 != 0) {
    if ((DAT_1803fb088 == (code *)0x0) || (plVar10[1] == 0)) {
      iVar6 = (**(code **)*plVar10)(plVar10);
    }
    else {
      iVar6 = (*DAT_1803fb088)();
    }
    (*DAT_1803faf58)(lVar9,DAT_1803fafd0,0);
    (*DAT_1803faed8)(lVar9,(double)param_2);
    iVar7 = FUN_180023180(lVar9,1,1);
    if (((iVar7 == 0) && (DAT_1803faff8 != (code *)0x0)) &&
       (iVar7 = (*DAT_1803faff8)(lVar9,0xffffffff), iVar7 == 5)) {
      puVar11 = (undefined4 *)(**(code **)(*plVar10 + 0x348))(plVar10,local_54,0xffffffff);
      bVar3 = true;
      uVar12 = *puVar11;
    }
    else {
      local_58 = 0xffffffff;
      bVar3 = false;
      uVar12 = 0xffffffff;
    }
    do {
      plVar1 = plVar10 + 1;
      while( true ) {
        if ((DAT_1803fb088 == (code *)0x0) || (*plVar1 == 0)) {
          iVar7 = (**(code **)*plVar10)(plVar10);
        }
        else {
          iVar7 = (*DAT_1803fb088)();
        }
        if (iVar7 <= iVar6) {
          if (bVar3) goto LAB_180030c20;
          goto LAB_180030c28;
        }
        if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (*plVar1 == 0))
        break;
        iVar8 = (*DAT_1803fb088)();
        iVar7 = 0;
        if (-1 < iVar8 + -1) {
          iVar7 = iVar8 + -1;
        }
        (*DAT_1803faf10)(*plVar1,iVar7);
      }
      (**(code **)(*plVar10 + 0x10))(plVar10,1);
    } while( true );
  }
LAB_180030c28:
  if (((DAT_1803db33c != -1) && (DAT_1803faf88 != (code *)0x0)) && (DAT_1803faff8 != (code *)0x0)) {
    if ((DAT_1803fb088 == (code *)0x0) || (plVar10[1] == 0)) {
      iVar6 = (**(code **)*plVar10)(plVar10);
    }
    else {
      iVar6 = (*DAT_1803fb088)();
    }
    iVar7 = DAT_1803db33c;
    bVar3 = false;
    local_58 = 0xffffffff;
    if (DAT_1803db33c < 0x40000000) {
      (**(code **)(*plVar10 + 0x128))(plVar10,DAT_1803db33c);
    }
    else {
      lVar2 = plVar10[1];
      cVar5 = FUN_18002d6e0(lVar2);
      if (cVar5 != '\0') {
        (*DAT_1803faf38)(lVar2,0xffffd8ed);
        iVar8 = (*DAT_1803faff8)(lVar2,0xffffffff);
        pcVar4 = DAT_1803faf10;
        if (iVar8 == 5) {
          (*DAT_1803faf88)(lVar2,0xffffffff,iVar7 + -0x40000000);
          (*DAT_1803faee0)(lVar2,0xfffffffe);
          goto LAB_180030d29;
        }
        iVar7 = (*DAT_1803fb088)(lVar2);
        (*pcVar4)(lVar2,iVar7 + -1);
      }
      if ((lVar2 != 0) && (DAT_1803fafd8 != (code *)0x0)) {
        (*DAT_1803fafd8)(lVar2);
      }
    }
LAB_180030d29:
    iVar7 = (*DAT_1803faff8)(lVar9,0xffffffff);
    if (iVar7 == 5) {
      (*DAT_1803faf88)(lVar9,0xffffffff,param_2);
      iVar7 = (*DAT_1803faff8)(lVar9,0xffffffff);
      uVar12 = local_58;
      if (iVar7 == 5) {
        local_50 = "Color";
        ppcVar13 = &local_50;
        local_48 = "color";
        do {
          (*DAT_1803fafa0)(lVar9,*ppcVar13);
          (*DAT_1803faef0)(lVar9,0xfffffffe);
          iVar7 = (*DAT_1803faff8)(lVar9,0xffffffff);
          if (iVar7 == 5) {
            puVar11 = (undefined4 *)(**(code **)(*plVar10 + 0x348))(plVar10,local_54,0xffffffff);
            bVar3 = true;
            uVar12 = *puVar11;
          }
          if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) ||
             (plVar10[1] == 0)) {
            (**(code **)(*plVar10 + 0x10))(plVar10,1);
          }
          else {
            iVar8 = (*DAT_1803fb088)();
            iVar7 = 0;
            if (-1 < iVar8 + -1) {
              iVar7 = iVar8 + -1;
            }
            (*DAT_1803faf10)(plVar10[1],iVar7);
          }
        } while ((!bVar3) && (ppcVar13 = ppcVar13 + 1, ppcVar13 != &local_40));
      }
    }
    else {
      DAT_1803db33c = -1;
      uVar12 = local_58;
    }
    while( true ) {
      if ((DAT_1803fb088 == (code *)0x0) || (plVar10[1] == 0)) {
        iVar7 = (**(code **)*plVar10)(plVar10);
      }
      else {
        iVar7 = (*DAT_1803fb088)();
      }
      if (iVar7 <= iVar6) break;
      if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (plVar10[1] == 0)) {
        (**(code **)(*plVar10 + 0x10))(plVar10,1);
      }
      else {
        iVar8 = (*DAT_1803fb088)();
        iVar7 = 0;
        if (-1 < iVar8 + -1) {
          iVar7 = iVar8 + -1;
        }
        (*DAT_1803faf10)(plVar10[1],iVar7);
      }
    }
    if (bVar3) {
LAB_180030c20:
      *param_1 = uVar12;
      return param_1;
    }
  }
  local_58 = 0xffffffff;
  cVar5 = FUN_1800307f0(lVar9,plVar10,param_2,&local_58);
  if (cVar5 != '\0') {
    *param_1 = local_58;
    return param_1;
  }
LAB_180030eec:
  *param_1 = 0xffffffff;
  return param_1;
}


