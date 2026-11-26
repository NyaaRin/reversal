// 0x18002ed20  FUN_18002ed20
// size=649 thunk=false
// signature: undefined FUN_18002ed20()
// status: ok


ulonglong FUN_18002ed20(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong in_RAX;
  longlong *plVar5;
  char cVar6;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  char local_30;
  
  if ((((param_1 == 0) || (param_2 == (longlong *)0x0)) ||
      (in_RAX = FUN_18002e100(), (char)in_RAX == '\0')) ||
     (in_RAX = (**(code **)(*param_2 + 0x138))(param_2,param_3,9), (char)in_RAX == '\0')) {
LAB_18002ef9c:
    return in_RAX & 0xffffffffffffff00;
  }
  if ((DAT_1803fb088 == (code *)0x0) || (param_2[1] == 0)) {
    iVar1 = (**(code **)*param_2)(param_2);
  }
  else {
    iVar1 = (*DAT_1803fb088)();
  }
  if (param_3 + 9999U < 9999) {
    param_3 = param_3 + 1 + iVar1;
  }
  if ((DAT_1803fafb8 == 0) || (DAT_1803faf58 == (code *)0x0)) {
    if (DAT_1803faee8 != (code *)0x0) {
      FUN_180023010(&local_48,param_1);
      (*DAT_1803faee8)(param_1,param_3,"SetupBones");
      if ((local_30 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
        (*DAT_1803fae90)(local_48,local_40,local_38,local_34);
      }
    }
    if ((DAT_1803faff8 == (code *)0x0) || (param_2[1] == 0)) {
      cVar6 = (**(code **)(*param_2 + 0x138))(param_2,0xffffffff,6);
    }
    else {
      iVar2 = (*DAT_1803faff8)(param_2[1],0xffffffff);
      cVar6 = iVar2 == 6;
    }
    if (cVar6 == '\0') {
      while( true ) {
        plVar5 = param_2 + 1;
        if ((DAT_1803fb088 == (code *)0x0) || (*plVar5 == 0)) {
          in_RAX = (**(code **)*param_2)(param_2);
        }
        else {
          in_RAX = (*DAT_1803fb088)();
        }
        if ((int)in_RAX <= iVar1) break;
        if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (*plVar5 == 0)) {
          (**(code **)(*param_2 + 0x10))(param_2,1);
        }
        else {
          iVar3 = (*DAT_1803fb088)();
          iVar2 = 0;
          if (-1 < iVar3 + -1) {
            iVar2 = iVar3 + -1;
          }
          (*DAT_1803faf10)(*plVar5,iVar2);
        }
      }
      goto LAB_18002ef9c;
    }
  }
  else {
    (*DAT_1803faf58)(param_1,DAT_1803fafb8,0);
  }
  if ((DAT_1803faf38 == (code *)0x0) || (param_2[1] == 0)) {
    (**(code **)(*param_2 + 8))(param_2,param_3);
  }
  else {
    (*DAT_1803faf38)(param_2[1],param_3);
  }
  iVar2 = FUN_180023180(param_1,1,0);
  while( true ) {
    plVar5 = param_2 + 1;
    if ((DAT_1803fb088 == (code *)0x0) || (*plVar5 == 0)) {
      iVar3 = (**(code **)*param_2)(param_2);
    }
    else {
      iVar3 = (*DAT_1803fb088)();
    }
    if (iVar3 <= iVar1) break;
    if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (*plVar5 == 0)) {
      (**(code **)(*param_2 + 0x10))(param_2,1);
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
  return (ulonglong)(iVar2 == 0);
}


