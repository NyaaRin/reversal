// 0x180030510  FUN_180030510
// size=731 thunk=false
// signature: undefined FUN_180030510()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180030510(longlong param_1,longlong *param_2,undefined4 param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined **ppuVar6;
  bool bVar7;
  undefined1 auStack_88 [32];
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  ulonglong local_50;
  
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  if ((((param_1 == 0) || (param_2 == (longlong *)0x0)) || (DAT_1803fafa0 == (code *)0x0)) ||
     (((DAT_1803faef0 == (code *)0x0 || (DAT_1803faf88 == (code *)0x0)) ||
      (DAT_1803faff8 == (code *)0x0)))) {
    local_50 = local_50 & 0xffffffffffffff00;
  }
  else {
    if ((DAT_1803fb088 == (code *)0x0) || (param_2[1] == 0)) {
      iVar1 = (**(code **)*param_2)(param_2);
    }
    else {
      iVar1 = (*DAT_1803fb088)();
    }
    bVar7 = false;
    (*DAT_1803fafa0)(param_1,"RPExtraTeams");
    (*DAT_1803faef0)(param_1,0xffffd8ee);
    iVar2 = (*DAT_1803faff8)(param_1,0xffffffff);
    if (iVar2 == 5) {
      (*DAT_1803faf88)(param_1,0xffffffff,param_3);
      iVar2 = (*DAT_1803faff8)(param_1,0xffffffff);
      if (iVar2 == 5) {
        local_68 = &DAT_180341140;
        ppuVar6 = &local_68;
        local_60 = &DAT_180341148;
        do {
          (*DAT_1803fafa0)(param_1,*ppuVar6);
          (*DAT_1803faef0)(param_1,0xfffffffe);
          iVar2 = (*DAT_1803faff8)(param_1,0xffffffff);
          if (iVar2 == 4) {
            FUN_180212700(param_4,&DAT_18033e5ea,0);
            if (((DAT_1803faff8 != (code *)0x0) && (DAT_1803fb008 != (code *)0x0)) &&
               (iVar2 = (*DAT_1803faff8)(param_1,0xffffffff), iVar2 == 4)) {
              local_58 = (undefined *)0x0;
              lVar4 = (*DAT_1803fb008)(param_1,0xffffffff);
              if (lVar4 != 0) {
                FUN_180212700(param_4,lVar4,local_58);
              }
            }
            bVar7 = *(longlong *)(param_4 + 0x10) != 0;
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
        } while ((bVar7 == false) && (ppuVar6 = ppuVar6 + 1, ppuVar6 != &local_58));
      }
    }
    while( true ) {
      plVar5 = param_2 + 1;
      if ((DAT_1803fb088 == (code *)0x0) || (*plVar5 == 0)) {
        iVar2 = (**(code **)*param_2)(param_2);
      }
      else {
        iVar2 = (*DAT_1803fb088)();
      }
      if (iVar2 <= iVar1) break;
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
    local_50 = (ulonglong)bVar7;
  }
  return local_50;
}


