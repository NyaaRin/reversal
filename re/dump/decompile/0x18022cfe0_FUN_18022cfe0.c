// 0x18022cfe0  FUN_18022cfe0
// size=502 thunk=false
// signature: undefined FUN_18022cfe0()
// status: ok


undefined8 * FUN_18022cfe0(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  uVar3 = DAT_1803fac58;
  plVar2 = DAT_1803fac40;
  uVar6 = *(ulonglong *)(param_3 + 0x10);
  uVar5 = *(ulonglong *)(param_4 + 0x10);
  lVar7 = uVar5 - uVar6;
  if (lVar7 == 0) {
    param_2[1] = 0;
    *param_2 = plVar2;
    param_2[2] = uVar6;
  }
  else {
    uVar4 = uVar6 - DAT_1803fac58;
    if (DAT_1803fac40 == (longlong *)0x0) {
      lVar8 = 0;
    }
    else {
      lVar8 = *DAT_1803fac40;
    }
    uVar1 = DAT_1803fac58 + DAT_1803fac60;
    if (uVar4 < uVar1 - uVar5) {
      while (uVar3 != uVar6) {
        uVar6 = uVar6 - 1;
        uVar5 = uVar5 - 1;
        FUN_180220390(*(undefined8 *)
                       (*(longlong *)(lVar8 + 8) + (*(longlong *)(lVar8 + 0x10) - 1U & uVar5) * 8),
                      *(undefined8 *)
                       (*(longlong *)(lVar8 + 8) + (*(longlong *)(lVar8 + 0x10) - 1U & uVar6) * 8));
      }
      do {
        FUN_18021cee0();
        DAT_1803fac60 = DAT_1803fac60 + -1;
        if (DAT_1803fac60 == 0) {
          DAT_1803fac58 = 0;
        }
        else {
          DAT_1803fac58 = DAT_1803fac58 + 1;
        }
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    else {
      for (; uVar5 != uVar1; uVar5 = uVar5 + 1) {
        FUN_180220390(*(undefined8 *)
                       (*(longlong *)(lVar8 + 8) + (*(longlong *)(lVar8 + 0x10) - 1U & uVar6) * 8),
                      *(undefined8 *)
                       (*(longlong *)(lVar8 + 8) + (*(longlong *)(lVar8 + 0x10) - 1U & uVar5) * 8));
        uVar6 = uVar6 + 1;
      }
      do {
        FUN_18021cee0();
        DAT_1803fac60 = DAT_1803fac60 + -1;
        if (DAT_1803fac60 == 0) {
          DAT_1803fac58 = 0;
        }
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    uVar6 = DAT_1803fac58;
    plVar2 = DAT_1803fac40;
    param_2[1] = 0;
    *param_2 = plVar2;
    param_2[2] = uVar4 + uVar6;
  }
  return param_2;
}


