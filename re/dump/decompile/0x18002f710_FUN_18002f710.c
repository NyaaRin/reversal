// 0x18002f710  FUN_18002f710
// size=835 thunk=false
// signature: undefined FUN_18002f710()
// status: ok


ulonglong FUN_18002f710(undefined4 param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  char local_40;
  
  plVar7 = (longlong *)FUN_18002e100();
  if ((((char)plVar7 == '\0') ||
      ((plVar7 = DAT_1803faf28, DAT_1803faf28 == (longlong *)0x0 && (DAT_1803db338 == -1)))) ||
     ((DAT_1803faf88 == (code *)0x0 && (DAT_1803faf28 == (longlong *)0x0)))) {
LAB_18002fa44:
    return (ulonglong)plVar7 & 0xffffffffffffff00;
  }
  if (DAT_1803fa678 == (longlong *)0x0) {
    lVar8 = 0;
    plVar9 = (longlong *)0x0;
  }
  else {
    plVar7 = (longlong *)(**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0);
    if (plVar7 == (longlong *)0x0) {
      lVar8 = 0;
    }
    else {
      lVar8 = plVar7[1];
    }
    if (DAT_1803fa678 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar7 = (longlong *)(**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0);
      plVar9 = plVar7;
    }
  }
  if ((lVar8 == 0) || (plVar9 == (longlong *)0x0)) goto LAB_18002fa44;
  FUN_18002dc30(&local_58,lVar8);
  if ((DAT_1803fb088 == (code *)0x0) || (plVar9[1] == 0)) {
    iVar4 = (**(code **)*plVar9)(plVar9);
  }
  else {
    iVar4 = (*DAT_1803fb088)();
  }
  cVar3 = FUN_18002eb00(lVar8,plVar9,param_1);
  iVar5 = DAT_1803db338;
  if (cVar3 != '\0') {
    if (DAT_1803faf28 == (longlong *)0x0) {
      if (DAT_1803db338 < 0x40000000) {
        (**(code **)(*plVar9 + 0x128))(plVar9,DAT_1803db338);
      }
      else {
        lVar1 = plVar9[1];
        cVar3 = FUN_18002d6e0(lVar1);
        if (cVar3 != '\0') {
          (*DAT_1803faf38)(lVar1,0xffffd8ed);
          iVar6 = (*DAT_1803faff8)(lVar1,0xffffffff);
          pcVar2 = DAT_1803faf10;
          if (iVar6 == 5) {
            (*DAT_1803faf88)(lVar1,0xffffffff,iVar5 + -0x40000000);
            (*DAT_1803faee0)(lVar1,0xfffffffe);
            goto LAB_18002f8c4;
          }
          iVar5 = (*DAT_1803fb088)(lVar1);
          (*pcVar2)(lVar1,iVar5 + -1);
        }
        if ((lVar1 != 0) && (DAT_1803fafd8 != (code *)0x0)) {
          (*DAT_1803fafd8)(lVar1);
        }
      }
    }
    else {
      (*DAT_1803faf58)(lVar8,DAT_1803faf28,0);
    }
LAB_18002f8c4:
    plVar7 = plVar9 + 1;
    if ((DAT_1803faf38 == (code *)0x0) || (*plVar7 == 0)) {
      (**(code **)(*plVar9 + 8))(plVar9,0xfffffffe);
    }
    else {
      (*DAT_1803faf38)(*plVar7,0xfffffffe);
    }
    iVar5 = FUN_180023180(lVar8,1,1);
    if (iVar5 == 0) {
      bVar10 = false;
      iVar5 = (*DAT_1803faff8)(lVar8,0xffffffff);
      if (iVar5 == 1) {
        iVar5 = (*DAT_1803fb058)(lVar8,0xffffffff);
        bVar10 = iVar5 != 0;
      }
      while( true ) {
        if ((DAT_1803fb088 == (code *)0x0) || (*plVar7 == 0)) {
          iVar5 = (**(code **)*plVar9)(plVar9);
        }
        else {
          iVar5 = (*DAT_1803fb088)();
        }
        if (iVar5 <= iVar4) break;
        if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (*plVar7 == 0)) {
          (**(code **)(*plVar9 + 0x10))(plVar9,1);
        }
        else {
          iVar6 = (*DAT_1803fb088)();
          iVar5 = 0;
          if (-1 < iVar6 + -1) {
            iVar5 = iVar6 + -1;
          }
          (*DAT_1803faf10)(*plVar7,iVar5);
        }
      }
      goto LAB_18002fa0a;
    }
    while( true ) {
      if ((DAT_1803fb088 == (code *)0x0) || (*plVar7 == 0)) {
        iVar5 = (**(code **)*plVar9)(plVar9);
      }
      else {
        iVar5 = (*DAT_1803fb088)();
      }
      if (iVar5 <= iVar4) break;
      if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (*plVar7 == 0)) {
        (**(code **)(*plVar9 + 0x10))(plVar9,1);
      }
      else {
        iVar6 = (*DAT_1803fb088)();
        iVar5 = 0;
        if (-1 < iVar6 + -1) {
          iVar5 = iVar6 + -1;
        }
        (*DAT_1803faf10)(*plVar7,iVar5);
      }
    }
  }
  bVar10 = false;
LAB_18002fa0a:
  if ((local_40 != '\0') && (DAT_1803faf78 != (code *)0x0)) {
    (*DAT_1803faf78)(local_58,local_50,local_48,local_44);
  }
  return (ulonglong)bVar10;
}


