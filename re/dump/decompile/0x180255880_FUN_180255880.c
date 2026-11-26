// 0x180255880  FUN_180255880
// size=508 thunk=false
// signature: undefined FUN_180255880()
// status: ok


ulonglong * FUN_180255880(undefined4 param_1,ulonglong *param_2,ulonglong *param_3,char param_4)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  char cVar5;
  ulonglong uVar6;
  longlong *in_RCX;
  ulonglong uVar7;
  uint uVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  
  lVar2 = *in_RCX;
  uVar3 = *param_3;
  uVar6 = (in_RCX[1] - lVar2 >> 5) * -0x5555555555555555;
  if (uVar6 < uVar3 || uVar6 - uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180262180();
  }
  uVar6 = param_3[1];
  lVar4 = *(longlong *)(uVar3 * 0x60 + lVar2);
  uVar7 = *(longlong *)(uVar3 * 0x60 + 8 + lVar2) - lVar4 >> 4;
  if (uVar7 <= uVar6) {
    uVar3 = param_3[1];
    *param_2 = *param_3;
    param_2[1] = uVar3;
    return param_2;
  }
  uVar1 = *(ushort *)(lVar4 + uVar6 * 0x10);
  if ((param_4 == '\0') && (cVar5 = FUN_18025f490(uVar1), param_1 = extraout_XMM0_Da, cVar5 != '\0')
     ) {
    do {
      cVar5 = FUN_18025f490(*(undefined2 *)(lVar4 + uVar6 * 0x10));
      if (cVar5 == '\0') break;
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar7);
    goto LAB_180255a4e;
  }
  uVar8 = (uint)uVar1;
  if (uVar8 < 0x7f) {
    if ((0x19 < (uVar8 | 0x20) - 0x61) && ((9 < uVar1 - 0x30 && (uVar8 != 0x5f)))) {
LAB_1802559c7:
      if (param_4 == '\0') {
        for (; uVar6 < uVar7; uVar6 = uVar6 + 1) {
          uVar1 = *(ushort *)(lVar4 + uVar6 * 0x10);
          if (uVar1 < 0x7f) {
            if (((uVar1 | 0x20) - 0x61 < 0x1a) || ((uVar1 - 0x30 < 10 || (uVar1 == 0x5f)))) break;
          }
          else {
            cVar5 = FUN_180260600(param_1,uVar1);
            if ((cVar5 != '\0') || (cVar5 = FUN_180260690(extraout_XMM0_Da_02,uVar1), cVar5 != '\0')
               ) break;
          }
          cVar5 = FUN_18025f490(uVar1);
          if (cVar5 != '\0') break;
          param_1 = extraout_XMM0_Da_03;
        }
      }
      goto LAB_180255a4e;
    }
  }
  else {
    cVar5 = FUN_180260600(param_1,uVar1);
    param_1 = extraout_XMM0_Da_00;
    if ((cVar5 == '\0') &&
       (cVar5 = FUN_180260690(extraout_XMM0_Da_00,uVar1), param_1 = extraout_XMM0_Da_01,
       cVar5 == '\0')) goto LAB_1802559c7;
  }
  do {
    uVar1 = *(ushort *)(lVar4 + uVar6 * 0x10);
    if (uVar1 < 0x7f) {
      if ((0x19 < (uVar1 | 0x20) - 0x61) && ((9 < uVar1 - 0x30 && (uVar1 != 0x5f)))) break;
    }
    else {
      cVar5 = FUN_180260600(param_1,uVar1);
      param_1 = extraout_XMM0_Da_04;
      if ((cVar5 == '\0') &&
         (cVar5 = FUN_180260690(extraout_XMM0_Da_04,uVar1), param_1 = extraout_XMM0_Da_05,
         cVar5 == '\0')) break;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < uVar7);
LAB_180255a4e:
  *param_2 = uVar3;
  param_2[1] = uVar6;
  return param_2;
}


