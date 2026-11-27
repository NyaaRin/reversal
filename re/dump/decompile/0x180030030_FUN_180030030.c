// 0x180030030  FUN_180030030
// size=1247 thunk=false
// signature: undefined FUN_180030030()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_180030030(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  DWORD DVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  
  if (DAT_1803db33c != -1) {
    return true;
  }
  if ((((param_2 == (longlong *)0x0) || (param_1 == 0)) || (DAT_1803faef0 == (code *)0x0)) ||
     ((DVar3 = GetTickCount(), DAT_1803faf90 == param_1 && (DVar3 - _DAT_1803faf9c < 1000)))) {
    return false;
  }
  plVar1 = param_2 + 1;
  DAT_1803faf90 = param_1;
  _DAT_1803faf9c = DVar3;
  if ((DAT_1803fb088 == (code *)0x0) || (*plVar1 == 0)) {
    iVar4 = (**(code **)*param_2)(param_2);
  }
  else {
    iVar4 = (*DAT_1803fb088)();
  }
  (*DAT_1803fafa0)(param_1,&DAT_1803416e8);
  (*DAT_1803faef0)(param_1,0xffffd8ee);
  iVar5 = (*DAT_1803faff8)(param_1,0xffffffff);
  if (iVar5 == 5) {
    if (DAT_1803fafd0 == 0) {
      (*DAT_1803fafa0)(param_1,"GetColor");
      (*DAT_1803faef0)(param_1,0xfffffffe);
      if ((DAT_1803faff8 == (code *)0x0) || (*plVar1 == 0)) {
        cVar8 = (**(code **)(*param_2 + 0x138))(param_2,0xffffffff,6);
      }
      else {
        iVar5 = (*DAT_1803faff8)(*plVar1,0xffffffff);
        cVar8 = iVar5 == 6;
      }
      if (cVar8 != '\0') {
        DAT_1803fafd0 = (**(code **)(*param_2 + 0xd0))(param_2,0xffffffff);
      }
      if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (*plVar1 == 0)) {
        (**(code **)(*param_2 + 0x10))(param_2,1);
      }
      else {
        iVar6 = (*DAT_1803fb088)();
        iVar5 = 0;
        if (-1 < iVar6 + -1) {
          iVar5 = iVar6 + -1;
        }
        (*DAT_1803faf10)(*plVar1,iVar5);
      }
    }
    if (DAT_1803fb060 == 0) {
      (*DAT_1803fafa0)(param_1,"GetName");
      (*DAT_1803faef0)(param_1,0xfffffffe);
      if ((DAT_1803faff8 == (code *)0x0) || (*plVar1 == 0)) {
        cVar8 = (**(code **)(*param_2 + 0x138))(param_2,0xffffffff,6);
      }
      else {
        iVar5 = (*DAT_1803faff8)(*plVar1,0xffffffff);
        cVar8 = iVar5 == 6;
      }
      if (cVar8 != '\0') {
        DAT_1803fb060 = (**(code **)(*param_2 + 0xd0))(param_2,0xffffffff);
      }
      if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (*plVar1 == 0)) {
        (**(code **)(*param_2 + 0x10))(param_2,1);
      }
      else {
        iVar6 = (*DAT_1803fb088)();
        iVar5 = 0;
        if (-1 < iVar6 + -1) {
          iVar5 = iVar6 + -1;
        }
        (*DAT_1803faf10)(*plVar1,iVar5);
      }
      if ((DAT_1803fb060 == 0) && (DAT_1803db33c == -1)) {
        (*DAT_1803fafa0)(param_1,"GetName");
        (*DAT_1803faef0)(param_1,0xfffffffe);
        if ((DAT_1803faff8 == (code *)0x0) || (*plVar1 == 0)) {
          cVar8 = (**(code **)(*param_2 + 0x138))(param_2,0xffffffff,6);
        }
        else {
          iVar5 = (*DAT_1803faff8)(*plVar1,0xffffffff);
          cVar8 = iVar5 == 6;
        }
        if (cVar8 != '\0') {
          iVar5 = 1;
          do {
            if ((DAT_1803fb088 == (code *)0x0) || (*plVar1 == 0)) {
              iVar6 = (**(code **)*param_2)(param_2);
            }
            else {
              iVar6 = (*DAT_1803fb088)();
            }
            (**(code **)(*param_2 + 0x370))(param_2,0xffffffff,iVar5);
            if ((DAT_1803fb088 == (code *)0x0) || (*plVar1 == 0)) {
              iVar7 = (**(code **)*param_2)(param_2);
            }
            else {
              iVar7 = (*DAT_1803fb088)();
            }
            if (iVar7 <= iVar6) break;
            plVar2 = param_2 + 1;
            if ((DAT_1803faff8 == (code *)0x0) || (*plVar2 == 0)) {
              cVar8 = (**(code **)(*param_2 + 0x138))(param_2,0xffffffff,5);
            }
            else {
              iVar6 = (*DAT_1803faff8)(*plVar2,0xffffffff);
              cVar8 = iVar6 == 5;
            }
            if (cVar8 != '\0') {
              DAT_1803db33c = FUN_18002d7a0(param_2);
              FUN_180014410("[TRAMP] Late-init Teams table found at upvalue %d, ref=%d\n",iVar5,
                            DAT_1803db33c);
              break;
            }
            if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (*plVar2 == 0)
               ) {
              (**(code **)(*param_2 + 0x10))(param_2,1);
            }
            else {
              iVar7 = (*DAT_1803fb088)();
              iVar6 = 0;
              if (-1 < iVar7 + -1) {
                iVar6 = iVar7 + -1;
              }
              (*DAT_1803faf10)(*plVar2,iVar6);
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < 5);
        }
        if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (param_2[1] == 0))
        {
          (**(code **)(*param_2 + 0x10))(param_2,1);
        }
        else {
          iVar6 = (*DAT_1803fb088)();
          iVar5 = 0;
          if (-1 < iVar6 + -1) {
            iVar5 = iVar6 + -1;
          }
          (*DAT_1803faf10)(param_2[1],iVar5);
        }
      }
    }
  }
  do {
    while( true ) {
      if ((DAT_1803fb088 == (code *)0x0) || (param_2[1] == 0)) {
        iVar5 = (**(code **)*param_2)(param_2);
      }
      else {
        iVar5 = (*DAT_1803fb088)();
      }
      if (iVar5 <= iVar4) {
        return DAT_1803db33c != -1;
      }
      if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (param_2[1] == 0))
      break;
      iVar6 = (*DAT_1803fb088)();
      iVar5 = 0;
      if (-1 < iVar6 + -1) {
        iVar5 = iVar6 + -1;
      }
      (*DAT_1803faf10)(param_2[1],iVar5);
    }
    (**(code **)(*param_2 + 0x10))(param_2,1);
  } while( true );
}


