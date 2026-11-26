// 0x180255080  FUN_180255080
// size=634 thunk=false
// signature: undefined FUN_180255080()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180255080(longlong *param_1,ulonglong *param_2,ulonglong *param_3,longlong *param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  ulonglong *local_68;
  longlong *local_60;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  uVar1 = *param_2;
  uVar7 = *param_3;
  local_68 = param_3;
  local_60 = param_4;
  if (uVar1 == uVar7) {
    uVar5 = param_3[1];
    for (uVar7 = param_2[1]; uVar7 < uVar5; uVar7 = uVar7 + 1) {
      uVar4 = (param_1[1] - *param_1 >> 5) * -0x5555555555555555;
      if (uVar4 < uVar1 || uVar4 - uVar1 == 0) goto LAB_1802552f6;
      plVar2 = (longlong *)param_4[7];
      if (plVar2 == (longlong *)0x0) {
LAB_1802552ef:
                    /* WARNING: Subroutine does not return */
        std::_Xbad_function_call();
      }
      (**(code **)(*plVar2 + 0x10))(plVar2,uVar7 * 0x10 + *(longlong *)(uVar1 * 0x60 + *param_1));
    }
  }
  else {
    lVar3 = *param_1;
    uVar5 = (param_1[1] - lVar3 >> 5) * -0x5555555555555555;
    if (uVar5 < uVar1 || uVar5 - uVar1 == 0) {
LAB_1802552f6:
                    /* WARNING: Subroutine does not return */
      FUN_180262180();
    }
    lVar8 = uVar1 * 0x60;
    lVar9 = *(longlong *)(lVar8 + 8 + lVar3);
    lVar3 = *(longlong *)(lVar8 + lVar3);
    for (uVar5 = param_2[1]; uVar5 < (ulonglong)(lVar9 - lVar3 >> 4); uVar5 = uVar5 + 1) {
      uVar4 = (param_1[1] - *param_1 >> 5) * -0x5555555555555555;
      if (uVar4 < uVar1 || uVar4 - uVar1 == 0) goto LAB_1802552f6;
      plVar2 = (longlong *)param_4[7];
      if (plVar2 == (longlong *)0x0) goto LAB_1802552ef;
      (**(code **)(*plVar2 + 0x10))(plVar2,uVar5 * 0x10 + *(longlong *)(*param_1 + lVar8));
    }
    while (uVar1 = uVar1 + 1, uVar1 < uVar7) {
      lVar3 = *param_1;
      uVar5 = (param_1[1] - lVar3 >> 5) * -0x5555555555555555;
      if (uVar5 < uVar1 || uVar5 - uVar1 == 0) goto LAB_1802552f6;
      lVar9 = uVar1 * 0x60;
      uVar4 = *(longlong *)(lVar9 + 8 + lVar3) - *(longlong *)(lVar9 + lVar3) >> 4;
      uVar5 = 0;
      if (uVar4 != 0) {
        do {
          uVar6 = (param_1[1] - *param_1 >> 5) * -0x5555555555555555;
          if (uVar6 < uVar1 || uVar6 - uVar1 == 0) goto LAB_1802552f6;
          plVar2 = (longlong *)param_4[7];
          if (plVar2 == (longlong *)0x0) goto LAB_1802552ef;
          (**(code **)(*plVar2 + 0x10))(plVar2,uVar5 * 0x10 + *(longlong *)(*param_1 + lVar9));
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar4);
      }
    }
    uVar1 = local_68[1];
    if (uVar1 != 0) {
      uVar5 = 0;
      do {
        uVar4 = (param_1[1] - *param_1 >> 5) * -0x5555555555555555;
        if (uVar4 < uVar7 || uVar4 - uVar7 == 0) goto LAB_1802552f6;
        plVar2 = (longlong *)param_4[7];
        if (plVar2 == (longlong *)0x0) goto LAB_1802552ef;
        (**(code **)(*plVar2 + 0x10))(plVar2,uVar5 * 0x10 + *(longlong *)(uVar7 * 0x60 + *param_1));
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar1);
    }
  }
  plVar2 = (longlong *)param_4[7];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != param_4);
    param_4[7] = 0;
  }
  return;
}


