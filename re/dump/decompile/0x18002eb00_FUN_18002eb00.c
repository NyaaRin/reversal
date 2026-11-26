// 0x18002eb00  FUN_18002eb00
// size=434 thunk=false
// signature: undefined FUN_18002eb00()
// status: ok


undefined8 FUN_18002eb00(longlong param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  if ((param_1 != 0) && (param_2 != (longlong *)0x0)) {
    if ((DAT_1803fb088 == (code *)0x0) || (param_2[1] == 0)) {
      iVar3 = (**(code **)*param_2)(param_2);
    }
    else {
      iVar3 = (*DAT_1803fb088)();
    }
    if ((((DAT_1803fcf38 != -1) && (DAT_1803fa360 != (longlong *)0x0)) && (0 < param_3)) &&
       ((lVar6 = (**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,param_3), lVar6 != 0 &&
        (cVar2 = FUN_18001e1b0(lVar6,param_2), cVar2 != '\0')))) {
      return 1;
    }
    if (DAT_1803fb018 != 0) {
      (*DAT_1803faf58)(param_1,DAT_1803fb018,0);
      (*DAT_1803faed8)(param_1,(double)param_3);
      iVar4 = FUN_180023180(param_1,1,1);
      if (iVar4 != 0) {
        do {
          plVar1 = param_2 + 1;
          while( true ) {
            if ((DAT_1803fb088 == (code *)0x0) || (*plVar1 == 0)) {
              iVar4 = (**(code **)*param_2)(param_2);
            }
            else {
              iVar4 = (*DAT_1803fb088)();
            }
            if (iVar4 <= iVar3) {
              return 0;
            }
            if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (*plVar1 == 0)
               ) break;
            iVar5 = (*DAT_1803fb088)();
            iVar4 = 0;
            if (-1 < iVar5 + -1) {
              iVar4 = iVar5 + -1;
            }
            (*DAT_1803faf10)(*plVar1,iVar4);
          }
          (**(code **)(*param_2 + 0x10))(param_2,1);
        } while( true );
      }
      cVar2 = (**(code **)(*param_2 + 0x138))(param_2,0xffffffff,9);
      if (cVar2 != '\0') {
        return 1;
      }
      if (((DAT_1803fb088 != (code *)0x0) && (DAT_1803faf10 != (code *)0x0)) && (param_2[1] != 0)) {
        iVar4 = (*DAT_1803fb088)();
        iVar3 = 0;
        if (-1 < iVar4 + -1) {
          iVar3 = iVar4 + -1;
        }
        (*DAT_1803faf10)(param_2[1],iVar3);
        return 0;
      }
      (**(code **)(*param_2 + 0x10))(param_2,1);
    }
  }
  return 0;
}


