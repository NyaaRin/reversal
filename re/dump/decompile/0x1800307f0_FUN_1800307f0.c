// 0x1800307f0  FUN_1800307f0
// size=631 thunk=false
// signature: undefined FUN_1800307f0()
// status: ok


ulonglong FUN_1800307f0(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong in_RAX;
  undefined4 *puVar4;
  char **ppcVar5;
  longlong *plVar6;
  byte bVar7;
  undefined1 local_68 [8];
  char *local_60;
  char *local_58;
  char *local_50 [2];
  
  if (((((param_1 != 0) && (param_2 != (longlong *)0x0)) && (DAT_1803fafa0 != (code *)0x0)) &&
      ((DAT_1803faef0 != (code *)0x0 && (DAT_1803faf88 != (code *)0x0)))) &&
     (DAT_1803faff8 != (code *)0x0)) {
    if ((DAT_1803fb088 == (code *)0x0) || (param_2[1] == 0)) {
      iVar1 = (**(code **)*param_2)(param_2);
    }
    else {
      iVar1 = (*DAT_1803fb088)();
    }
    bVar7 = 0;
    (*DAT_1803fafa0)(param_1,"RPExtraTeams");
    (*DAT_1803faef0)(param_1,0xffffd8ee);
    iVar2 = (*DAT_1803faff8)(param_1,0xffffffff);
    if (iVar2 == 5) {
      (*DAT_1803faf88)(param_1,0xffffffff,param_3);
      iVar2 = (*DAT_1803faff8)(param_1,0xffffffff);
      if (iVar2 == 5) {
        local_60 = "Color";
        ppcVar5 = &local_60;
        local_58 = "color";
        do {
          (*DAT_1803fafa0)(param_1,*ppcVar5);
          (*DAT_1803faef0)(param_1,0xfffffffe);
          iVar2 = (*DAT_1803faff8)(param_1,0xffffffff);
          if (iVar2 == 5) {
            puVar4 = (undefined4 *)(**(code **)(*param_2 + 0x348))(param_2,local_68,0xffffffff);
            bVar7 = 1;
            *param_4 = *puVar4;
          }
          if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) ||
             (param_2[1] == 0)) {
            (**(code **)(*param_2 + 0x10))(param_2,1);
          }
          else {
            iVar3 = (*DAT_1803fb088)();
            iVar2 = 0;
            if (-1 < iVar3 + -1) {
              iVar2 = iVar3 + -1;
            }
            (*DAT_1803faf10)(param_2[1],iVar2);
          }
        } while ((bVar7 == 0) && (ppcVar5 = ppcVar5 + 1, ppcVar5 != local_50));
      }
    }
    while( true ) {
      plVar6 = param_2 + 1;
      if ((DAT_1803fb088 == (code *)0x0) || (*plVar6 == 0)) {
        iVar2 = (**(code **)*param_2)(param_2);
      }
      else {
        iVar2 = (*DAT_1803fb088)();
      }
      if (iVar2 <= iVar1) break;
      if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (*plVar6 == 0)) {
        (**(code **)(*param_2 + 0x10))(param_2,1);
      }
      else {
        iVar3 = (*DAT_1803fb088)();
        iVar2 = 0;
        if (-1 < iVar3 + -1) {
          iVar2 = iVar3 + -1;
        }
        (*DAT_1803faf10)(*plVar6,iVar2);
      }
    }
    return (ulonglong)bVar7;
  }
  return in_RAX & 0xffffffffffffff00;
}


