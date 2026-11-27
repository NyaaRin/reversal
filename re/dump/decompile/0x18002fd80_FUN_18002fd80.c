// 0x18002fd80  FUN_18002fd80
// size=609 thunk=false
// signature: undefined FUN_18002fd80()
// status: ok


int FUN_18002fd80(longlong param_1,undefined4 param_2,int param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  double dVar8;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  char local_40;
  
  cVar2 = FUN_18002e100();
  if ((cVar2 != '\0') && (param_1 != 0)) {
    if (DAT_1803fa678 == (longlong *)0x0) {
      lVar6 = 0;
      plVar7 = (longlong *)0x0;
    }
    else {
      lVar6 = (**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0);
      if (lVar6 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = *(longlong *)(lVar6 + 8);
      }
      if (DAT_1803fa678 == (longlong *)0x0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = (longlong *)(**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0);
      }
    }
    if ((lVar6 != 0) && (plVar7 != (longlong *)0x0)) {
      FUN_18002dc30(&local_58,lVar6);
      if ((DAT_1803fb088 == (code *)0x0) || (plVar7[1] == 0)) {
        iVar3 = (**(code **)*plVar7)(plVar7);
      }
      else {
        iVar3 = (*DAT_1803fb088)();
      }
      cVar2 = FUN_18002eb00(lVar6,plVar7,param_2);
      if (cVar2 != '\0') {
        (*DAT_1803faf58)(lVar6,param_1,0);
        if ((DAT_1803faf38 == (code *)0x0) || (plVar7[1] == 0)) {
          (**(code **)(*plVar7 + 8))(plVar7,0xfffffffe);
        }
        else {
          (*DAT_1803faf38)(plVar7[1],0xfffffffe);
        }
        iVar4 = FUN_180023180(lVar6,1,1);
        if (iVar4 == 0) {
          iVar4 = (*DAT_1803faff8)(lVar6,0xffffffff);
          if (iVar4 == 3) {
            dVar8 = (double)(*DAT_1803fafc0)(lVar6,0xffffffff);
            param_3 = (int)dVar8;
          }
          do {
            plVar1 = plVar7 + 1;
            while( true ) {
              if ((DAT_1803fb088 == (code *)0x0) || (*plVar1 == 0)) {
                iVar4 = (**(code **)*plVar7)(plVar7);
              }
              else {
                iVar4 = (*DAT_1803fb088)();
              }
              if (iVar4 <= iVar3) goto LAB_18002ffa7;
              if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) ||
                 (*plVar1 == 0)) break;
              iVar5 = (*DAT_1803fb088)();
              iVar4 = 0;
              if (-1 < iVar5 + -1) {
                iVar4 = iVar5 + -1;
              }
              (*DAT_1803faf10)(*plVar1,iVar4);
            }
            (**(code **)(*plVar7 + 0x10))(plVar7,1);
          } while( true );
        }
        while( true ) {
          if ((DAT_1803fb088 == (code *)0x0) || (plVar7[1] == 0)) {
            iVar4 = (**(code **)*plVar7)(plVar7);
          }
          else {
            iVar4 = (*DAT_1803fb088)();
          }
          if (iVar4 <= iVar3) break;
          if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (plVar7[1] == 0)
             ) {
            (**(code **)(*plVar7 + 0x10))(plVar7,1);
          }
          else {
            iVar5 = (*DAT_1803fb088)();
            iVar4 = 0;
            if (-1 < iVar5 + -1) {
              iVar4 = iVar5 + -1;
            }
            (*DAT_1803faf10)(plVar7[1],iVar4);
          }
        }
      }
LAB_18002ffa7:
      if ((local_40 != '\0') && (DAT_1803faf78 != (code *)0x0)) {
        (*DAT_1803faf78)(local_58,local_50,local_48,local_44);
      }
    }
  }
  return param_3;
}


