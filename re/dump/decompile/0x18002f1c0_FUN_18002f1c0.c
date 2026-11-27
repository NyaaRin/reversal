// 0x18002f1c0  FUN_18002f1c0
// size=672 thunk=false
// signature: undefined FUN_18002f1c0()
// status: ok


ulonglong FUN_18002f1c0(undefined4 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  char local_30;
  
  plVar5 = (longlong *)FUN_18002e100();
  if (((char)plVar5 == '\0') || (DAT_1803fafb0 == 0)) {
LAB_18002f453:
    return (ulonglong)plVar5 & 0xffffffffffffff00;
  }
  if (DAT_1803fa678 == (longlong *)0x0) {
    lVar7 = 0;
    plVar6 = (longlong *)0x0;
  }
  else {
    plVar5 = (longlong *)(**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0);
    if (plVar5 == (longlong *)0x0) {
      lVar7 = 0;
    }
    else {
      lVar7 = plVar5[1];
    }
    if (DAT_1803fa678 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar5 = (longlong *)(**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0);
      plVar6 = plVar5;
    }
  }
  if ((lVar7 == 0) || (plVar6 == (longlong *)0x0)) goto LAB_18002f453;
  FUN_18002dc30(&local_48,lVar7);
  if ((DAT_1803fb088 == (code *)0x0) || (plVar6[1] == 0)) {
    iVar2 = (**(code **)*plVar6)(plVar6);
  }
  else {
    iVar2 = (*DAT_1803fb088)();
  }
  cVar1 = FUN_18002eb00(lVar7,plVar6,param_1);
  if (cVar1 != '\0') {
    (*DAT_1803faf58)(lVar7,DAT_1803fafb0,0);
    if ((DAT_1803faf38 == (code *)0x0) || (plVar6[1] == 0)) {
      (**(code **)(*plVar6 + 8))(plVar6,0xfffffffe);
    }
    else {
      (*DAT_1803faf38)(plVar6[1],0xfffffffe);
    }
    (*DAT_1803fafa0)(lVar7,param_2);
    (*DAT_1803faf68)(lVar7,0);
    iVar3 = FUN_180023180(lVar7,3,1);
    if (iVar3 == 0) {
      iVar3 = (*DAT_1803faff8)(lVar7,0xffffffff);
      if (iVar3 == 1) {
        iVar3 = (*DAT_1803fb058)(lVar7,0xffffffff);
        bVar8 = iVar3 != 0;
      }
      else {
        bVar8 = false;
      }
      while( true ) {
        plVar5 = plVar6 + 1;
        if ((DAT_1803fb088 == (code *)0x0) || (*plVar5 == 0)) {
          iVar3 = (**(code **)*plVar6)(plVar6);
        }
        else {
          iVar3 = (*DAT_1803fb088)();
        }
        if (iVar3 <= iVar2) break;
        if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (*plVar5 == 0)) {
          (**(code **)(*plVar6 + 0x10))(plVar6,1);
        }
        else {
          iVar4 = (*DAT_1803fb088)();
          iVar3 = 0;
          if (-1 < iVar4 + -1) {
            iVar3 = iVar4 + -1;
          }
          (*DAT_1803faf10)(*plVar5,iVar3);
        }
      }
      goto LAB_18002f41a;
    }
    while( true ) {
      if ((DAT_1803fb088 == (code *)0x0) || (plVar6[1] == 0)) {
        iVar3 = (**(code **)*plVar6)(plVar6);
      }
      else {
        iVar3 = (*DAT_1803fb088)();
      }
      if (iVar3 <= iVar2) break;
      if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (plVar6[1] == 0)) {
        (**(code **)(*plVar6 + 0x10))(plVar6,1);
      }
      else {
        iVar4 = (*DAT_1803fb088)();
        iVar3 = 0;
        if (-1 < iVar4 + -1) {
          iVar3 = iVar4 + -1;
        }
        (*DAT_1803faf10)(plVar6[1],iVar3);
      }
    }
  }
  bVar8 = false;
LAB_18002f41a:
  if ((local_30 != '\0') && (DAT_1803faf78 != (code *)0x0)) {
    (*DAT_1803faf78)(local_48,local_40,local_38,local_34);
  }
  return (ulonglong)bVar8;
}


