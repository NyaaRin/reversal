// 0x180033540  FUN_180033540
// size=568 thunk=false
// signature: undefined FUN_180033540()
// status: ok


ulonglong FUN_180033540(longlong param_1,longlong *param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong in_RAX;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  char local_40;
  
  lVar7 = DAT_1803fb090;
  if (param_3 == 2) {
    lVar7 = DAT_1803faec0;
  }
  if ((((lVar7 == 0) || (param_1 == 0)) || (param_2 == (longlong *)0x0)) ||
     ((DAT_1803faf58 == (code *)0x0 || (DAT_1803faff8 == (code *)0x0)))) {
    return in_RAX & 0xffffffffffffff00;
  }
  plVar6 = param_2 + 1;
  if ((DAT_1803fb088 == (code *)0x0) || (*plVar6 == 0)) {
    iVar2 = (**(code **)*param_2)(param_2);
  }
  else {
    iVar2 = (*DAT_1803fb088)();
  }
  FUN_18002dc30(&local_58,param_1);
  cVar1 = FUN_18002eb00(param_1,param_2,param_4);
  if (cVar1 == '\0') {
    while( true ) {
      plVar6 = param_2 + 1;
      if ((DAT_1803fb088 == (code *)0x0) || (*plVar6 == 0)) {
        iVar3 = (**(code **)*param_2)(param_2);
      }
      else {
        iVar3 = (*DAT_1803fb088)();
      }
      if (iVar3 <= iVar2) break;
      if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (*plVar6 == 0)) {
        (**(code **)(*param_2 + 0x10))(param_2,1);
      }
      else {
        iVar4 = (*DAT_1803fb088)();
        iVar3 = 0;
        if (-1 < iVar4 + -1) {
          iVar3 = iVar4 + -1;
        }
        (*DAT_1803faf10)(*plVar6,iVar3);
      }
    }
  }
  else {
    (*DAT_1803faf58)(param_1,lVar7,0);
    if ((DAT_1803faf38 == (code *)0x0) || (*plVar6 == 0)) {
      (**(code **)(*param_2 + 8))(param_2,0xfffffffe);
    }
    else {
      (*DAT_1803faf38)(*plVar6,0xfffffffe);
    }
    iVar3 = FUN_180023180(param_1,1,1);
    if ((iVar3 == 0) && (iVar3 = (*DAT_1803faff8)(param_1,0xffffffff), iVar3 == 5)) {
      uVar5 = 1;
      goto LAB_180033739;
    }
    while( true ) {
      if ((DAT_1803fb088 == (code *)0x0) || (*plVar6 == 0)) {
        iVar3 = (**(code **)*param_2)(param_2);
      }
      else {
        iVar3 = (*DAT_1803fb088)();
      }
      if (iVar3 <= iVar2) break;
      if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (*plVar6 == 0)) {
        (**(code **)(*param_2 + 0x10))(param_2,1);
      }
      else {
        iVar4 = (*DAT_1803fb088)();
        iVar3 = 0;
        if (-1 < iVar4 + -1) {
          iVar3 = iVar4 + -1;
        }
        (*DAT_1803faf10)(*plVar6,iVar3);
      }
    }
  }
  uVar5 = 0;
LAB_180033739:
  if ((local_40 != '\0') && (DAT_1803faf78 != (code *)0x0)) {
    (*DAT_1803faf78)(local_58,local_50,local_48,local_44);
  }
  return uVar5;
}


