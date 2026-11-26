// 0x180038080  FUN_180038080
// size=697 thunk=false
// signature: undefined FUN_180038080()
// status: ok


ulonglong FUN_180038080(undefined4 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  char local_50;
  
  param_3[2] = 0;
  plVar9 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    plVar9 = (longlong *)*param_3;
  }
  *(undefined1 *)plVar9 = 0;
  if (((char)param_2[3] != '\0') && (plVar9 = (longlong *)FUN_18002e100(), (char)plVar9 != '\0')) {
    if (DAT_1803fa678 == (longlong *)0x0) {
      lVar14 = 0;
      plVar11 = (longlong *)0x0;
    }
    else {
      plVar9 = (longlong *)(**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0);
      if (plVar9 == (longlong *)0x0) {
        lVar14 = 0;
      }
      else {
        lVar14 = plVar9[1];
      }
      if (DAT_1803fa678 == (longlong *)0x0) {
        plVar11 = (longlong *)0x0;
      }
      else {
        plVar9 = (longlong *)(**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0);
        plVar11 = plVar9;
      }
    }
    if ((lVar14 != 0) && (plVar11 != (longlong *)0x0)) {
      FUN_18002dc30(&local_68,lVar14);
      cVar2 = FUN_180032950(lVar14,plVar11);
      if (cVar2 != '\0') {
        for (lVar10 = *param_2; lVar10 != param_2[1]; lVar10 = lVar10 + 0x90) {
          if (*(char *)(lVar10 + 0x80) != '\0') {
            iVar4 = 2;
            goto LAB_18003816c;
          }
        }
        iVar4 = 1;
LAB_18003816c:
        iVar13 = 0;
        do {
          lVar1 = DAT_1803fcc58;
          for (lVar10 = DAT_1803fcc50; lVar10 != lVar1; lVar10 = lVar10 + 0x98) {
            if (*(int *)(lVar10 + 0x88) == 0) {
              cVar2 = *(int *)(lVar10 + 0x7c) != -1;
            }
            else {
              cVar2 = *(char *)(lVar10 + 0x8c);
            }
            if (cVar2 != '\0') {
              if ((DAT_1803fb088 == (code *)0x0) || (plVar11[1] == 0)) {
                iVar5 = (**(code **)*plVar11)(plVar11);
              }
              else {
                iVar5 = (*DAT_1803fb088)();
              }
              cVar3 = '\0';
              cVar2 = FUN_180033aa0(lVar14,plVar11,lVar10,param_1);
              if (cVar2 != '\0') {
                if ((DAT_1803fb088 == (code *)0x0) || (plVar11[1] == 0)) {
                  uVar6 = (**(code **)*plVar11)(plVar11);
                }
                else {
                  uVar6 = (*DAT_1803fb088)();
                }
                cVar3 = FUN_180035030(lVar14,plVar11,param_2,uVar6,param_3,iVar13 == 1);
              }
              while( true ) {
                if ((DAT_1803fb088 == (code *)0x0) || (plVar11[1] == 0)) {
                  iVar7 = (**(code **)*plVar11)(plVar11);
                }
                else {
                  iVar7 = (*DAT_1803fb088)();
                }
                if (iVar7 <= iVar5) break;
                if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) ||
                   (plVar11[1] == 0)) {
                  (**(code **)(*plVar11 + 0x10))(plVar11,1);
                }
                else {
                  iVar8 = (*DAT_1803fb088)();
                  iVar7 = 0;
                  if (-1 < iVar8 + -1) {
                    iVar7 = iVar8 + -1;
                  }
                  (*DAT_1803faf10)(plVar11[1],iVar7);
                }
              }
              if (cVar3 != '\0') {
                uVar12 = 1;
                goto LAB_1800382f4;
              }
            }
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < iVar4);
      }
      uVar12 = 0;
LAB_1800382f4:
      if (local_50 == '\0') {
        return uVar12;
      }
      if (DAT_1803faf78 == (code *)0x0) {
        return uVar12;
      }
      (*DAT_1803faf78)(local_68,local_60,local_58,local_54);
      return uVar12;
    }
  }
  return (ulonglong)plVar9 & 0xffffffffffffff00;
}


