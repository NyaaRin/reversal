// 0x180030f20  FUN_180030f20
// size=1444 thunk=false
// signature: undefined FUN_180030f20()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_180030f20(int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  longlong *plVar10;
  undefined **ppuVar11;
  longlong *plVar12;
  int iVar13;
  bool bVar14;
  undefined1 auStack_98 [32];
  int local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  local_78 = param_1;
  FUN_18002e100();
  if (DAT_1803fa678 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
    plVar12 = plVar10;
  }
  else {
    lVar7 = (**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0);
    plVar10 = (longlong *)0x0;
    if (lVar7 != 0) {
      plVar10 = *(longlong **)(lVar7 + 8);
    }
    if (DAT_1803fa678 == (longlong *)0x0) {
      plVar12 = (longlong *)0x0;
    }
    else {
      plVar12 = (longlong *)(**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0);
    }
  }
  iVar13 = 0;
  if ((plVar10 == (longlong *)0x0) || (plVar12 == (longlong *)0x0)) goto LAB_18003149f;
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(uint *)(lVar7 + 0x2114) & 1) == 0) {
    *(uint *)(lVar7 + 0x2114) = *(uint *)(lVar7 + 0x2114) | 1;
    FUN_1802d8910(&LAB_180308eb0);
  }
  FUN_180030030(plVar10,plVar12);
  if (DAT_1803fb060 != 0) {
    if ((DAT_1803fb088 == (code *)0x0) || (plVar12[1] == 0)) {
      iVar4 = (**(code **)*plVar12)(plVar12);
    }
    else {
      iVar4 = (*DAT_1803fb088)();
    }
    (*DAT_1803faf58)(plVar10,DAT_1803fb060,0);
    (*DAT_1803faed8)(plVar10,(double)param_1);
    bVar14 = false;
    iVar5 = FUN_180023180(plVar10,1,1);
    if (((iVar5 == 0) && (DAT_1803faff8 != (code *)0x0)) &&
       (iVar5 = (*DAT_1803faff8)(plVar10,0xffffffff), iVar5 == 4)) {
      FUN_180212700(lVar7 + 0x1070,&DAT_18033e5ea,0);
      if (((DAT_1803faff8 != (code *)0x0) && (DAT_1803fb008 != (code *)0x0)) &&
         (iVar5 = (*DAT_1803faff8)(plVar10,0xffffffff), iVar5 == 4)) {
        local_60 = (undefined *)0x0;
        lVar8 = (*DAT_1803fb008)(plVar10,0xffffffff,&local_60);
        if (lVar8 != 0) {
          FUN_180212700(lVar7 + 0x1070,lVar8,local_60);
        }
      }
      bVar14 = *(longlong *)(lVar7 + 0x1080) != 0;
    }
    do {
      plVar1 = plVar12 + 1;
      while( true ) {
        if ((DAT_1803fb088 == (code *)0x0) || (*plVar1 == 0)) {
          iVar5 = (**(code **)*plVar12)(plVar12);
        }
        else {
          iVar5 = (*DAT_1803fb088)();
        }
        if (iVar5 <= iVar4) {
          if (!bVar14) goto LAB_180031186;
          goto LAB_180031170;
        }
        if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (*plVar1 == 0))
        break;
        iVar6 = (*DAT_1803fb088)();
        iVar5 = iVar13;
        if (-1 < iVar6 + -1) {
          iVar5 = iVar6 + -1;
        }
        (*DAT_1803faf10)(*plVar1,iVar5);
      }
      (**(code **)(*plVar12 + 0x10))(plVar12,1);
    } while( true );
  }
LAB_180031186:
  if (((DAT_1803db33c != -1) && (DAT_1803faf88 != (code *)0x0)) && (DAT_1803faff8 != (code *)0x0)) {
    if ((DAT_1803fb088 == (code *)0x0) || (plVar12[1] == 0)) {
      iVar4 = (**(code **)*plVar12)(plVar12);
    }
    else {
      iVar4 = (*DAT_1803fb088)();
    }
    iVar5 = DAT_1803db33c;
    bVar14 = false;
    if (DAT_1803db33c < 0x40000000) {
      (**(code **)(*plVar12 + 0x128))(plVar12,DAT_1803db33c);
    }
    else {
      lVar8 = plVar12[1];
      cVar3 = FUN_18002d6e0(lVar8);
      if (cVar3 != '\0') {
        (*DAT_1803faf38)(lVar8,0xffffd8ed);
        iVar6 = (*DAT_1803faff8)(lVar8,0xffffffff);
        pcVar2 = DAT_1803faf10;
        if (iVar6 == 5) {
          (*DAT_1803faf88)(lVar8,0xffffffff,iVar5 + -0x40000000);
          (*DAT_1803faee0)(lVar8,0xfffffffe);
          goto LAB_18003127f;
        }
        iVar5 = (*DAT_1803fb088)(lVar8);
        (*pcVar2)(lVar8,iVar5 + -1);
      }
      if ((lVar8 != 0) && (DAT_1803fafd8 != (code *)0x0)) {
        (*DAT_1803fafd8)(lVar8);
      }
    }
LAB_18003127f:
    iVar5 = (*DAT_1803faff8)(plVar10,0xffffffff);
    if (iVar5 == 5) {
      (*DAT_1803faf88)(plVar10,0xffffffff,local_78);
      iVar5 = (*DAT_1803faff8)(plVar10,0xffffffff);
      if (iVar5 == 5) {
        local_70 = &DAT_180341140;
        local_68 = &DAT_180341148;
        ppuVar11 = &local_70;
        do {
          (*DAT_1803fafa0)(plVar10,*ppuVar11);
          (*DAT_1803faef0)(plVar10,0xfffffffe);
          iVar5 = (*DAT_1803faff8)(plVar10,0xffffffff);
          if (iVar5 == 4) {
            FUN_180212700(lVar7 + 0x1070,&DAT_18033e5ea,0);
            if (((DAT_1803faff8 != (code *)0x0) && (DAT_1803fb008 != (code *)0x0)) &&
               (iVar5 = (*DAT_1803faff8)(plVar10,0xffffffff), iVar5 == 4)) {
              local_60 = (undefined *)0x0;
              lVar8 = (*DAT_1803fb008)(plVar10,0xffffffff);
              if (lVar8 != 0) {
                FUN_180212700(lVar7 + 0x1070,lVar8,local_60);
              }
            }
            bVar14 = *(longlong *)(lVar7 + 0x1080) != 0;
          }
          if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) ||
             (plVar12[1] == 0)) {
            (**(code **)(*plVar12 + 0x10))(plVar12,1);
          }
          else {
            iVar6 = (*DAT_1803fb088)();
            iVar5 = iVar13;
            if (-1 < iVar6 + -1) {
              iVar5 = iVar6 + -1;
            }
            (*DAT_1803faf10)(plVar12[1],iVar5);
          }
        } while ((!bVar14) && (ppuVar11 = ppuVar11 + 1, ppuVar11 != &local_60));
      }
    }
    else {
      DAT_1803db33c = -1;
    }
    while( true ) {
      if ((DAT_1803fb088 == (code *)0x0) || (plVar12[1] == 0)) {
        iVar5 = (**(code **)*plVar12)(plVar12);
      }
      else {
        iVar5 = (*DAT_1803fb088)();
      }
      if (iVar5 <= iVar4) break;
      if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (plVar12[1] == 0)) {
        (**(code **)(*plVar12 + 0x10))(plVar12,1);
      }
      else {
        iVar6 = (*DAT_1803fb088)();
        iVar5 = iVar13;
        if (-1 < iVar6 + -1) {
          iVar5 = iVar6 + -1;
        }
        (*DAT_1803faf10)(plVar12[1],iVar5);
      }
    }
    if (bVar14) {
LAB_180031170:
      if (*(ulonglong *)(lVar7 + 0x1088) < 0x10) {
        return (char *)(lVar7 + 0x1070);
      }
      return *(char **)(lVar7 + 0x1070);
    }
  }
  pcVar9 = (char *)(lVar7 + 0x1070);
  cVar3 = FUN_180030510(plVar10,plVar12,local_78,pcVar9);
  if (cVar3 != '\0') {
    if (*(ulonglong *)(lVar7 + 0x1088) < 0x10) {
      return pcVar9;
    }
    return *(char **)pcVar9;
  }
LAB_18003149f:
  return "unknown";
}


