// 0x180159dc0  FUN_180159dc0
// size=721 thunk=false
// signature: undefined FUN_180159dc0()
// status: ok


void FUN_180159dc0(longlong param_1,int param_2,int param_3,float param_4,int *param_5,
                  undefined4 *param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  size_t sVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  *param_5 = -1;
  *param_6 = 0xffffffff;
  param_7[2] = 0;
  puVar3 = param_7;
  if (0xf < (ulonglong)param_7[3]) {
    puVar3 = (undefined8 *)*param_7;
  }
  puVar1 = (undefined8 *)(param_1 + 8);
  *(undefined1 *)puVar3 = 0;
  uVar2 = *(ulonglong *)(param_1 + 0x20);
  uVar6 = *(longlong *)(param_1 + 0x28) + uVar2;
  uVar8 = uVar6;
  if (puVar1 == (undefined8 *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  else {
    plVar7 = (longlong *)*puVar1;
  }
  do {
    if (uVar8 == uVar2) {
LAB_180159e8b:
      if (param_2 != param_3) {
        if (puVar1 == (undefined8 *)0x0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar7 = (longlong *)*puVar1;
        }
        if (uVar6 == uVar2) {
          return;
        }
        while( true ) {
          uVar6 = uVar6 - 1;
          if (plVar7 == (longlong *)0x0) {
            lVar4 = 0;
          }
          else {
            lVar4 = *plVar7;
          }
          if (DAT_180380ae4 <
              param_4 - **(float **)
                          (*(longlong *)(lVar4 + 8) + (*(longlong *)(lVar4 + 0x10) - 1U & uVar6) * 8
                          )) {
            return;
          }
          if (plVar7 == (longlong *)0x0) {
            lVar4 = 0;
          }
          else {
            lVar4 = *plVar7;
          }
          if (*(int *)(*(longlong *)
                        (*(longlong *)(lVar4 + 8) + (*(longlong *)(lVar4 + 0x10) - 1U & uVar6) * 8)
                      + 4) == param_3) break;
          if (uVar6 == uVar2) {
            return;
          }
        }
        *param_5 = param_3;
        if (plVar7 == (longlong *)0x0) goto LAB_18015a059;
        lVar4 = *plVar7;
        goto LAB_18015a05b;
      }
      if (puVar1 == (undefined8 *)0x0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = (longlong *)*puVar1;
      }
      if (uVar6 == uVar2) {
        return;
      }
      goto LAB_180159fa2;
    }
    uVar8 = uVar8 - 1;
    if (plVar7 == (longlong *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar7;
    }
    if (DAT_180380ae4 <
        param_4 - **(float **)
                    (*(longlong *)(lVar4 + 8) + (*(longlong *)(lVar4 + 0x10) - 1U & uVar8) * 8))
    goto LAB_180159e8b;
    if (plVar7 == (longlong *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar7;
    }
  } while (*(int *)(*(longlong *)
                     (*(longlong *)(lVar4 + 8) + (*(longlong *)(lVar4 + 0x10) - 1U & uVar8) * 8) + 8
                   ) != param_2);
  if (plVar7 == (longlong *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *plVar7;
  }
  *param_5 = *(int *)(*(longlong *)
                       (*(longlong *)(lVar4 + 8) + (*(longlong *)(lVar4 + 0x10) - 1U & uVar8) * 8) +
                     4);
  if (plVar7 == (longlong *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *plVar7;
  }
  *param_6 = *(undefined4 *)
              (*(longlong *)
                (*(longlong *)(lVar4 + 8) + (*(longlong *)(lVar4 + 0x10) - 1U & uVar8) * 8) + 0xc);
  if (plVar7 == (longlong *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *plVar7;
  }
  lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + (*(longlong *)(lVar4 + 0x10) - 1U & uVar8) * 8);
LAB_18015a06d:
  sVar5 = strlen((char *)(lVar4 + 0x10));
  FUN_180212700(param_7,lVar4 + 0x10,sVar5);
  return;
LAB_180159fa2:
  uVar6 = uVar6 - 1;
  if (plVar7 == (longlong *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *plVar7;
  }
  if (DAT_180380ae4 <
      param_4 - **(float **)
                  (*(longlong *)(lVar4 + 8) + (*(longlong *)(lVar4 + 0x10) - 1U & uVar6) * 8)) {
    return;
  }
  if (plVar7 == (longlong *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *plVar7;
  }
  if (0 < *(int *)(*(longlong *)
                    (*(longlong *)(lVar4 + 8) + (*(longlong *)(lVar4 + 0x10) - 1U & uVar6) * 8) + 4)
     ) {
    if (plVar7 == (longlong *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar7;
    }
    if (*(int *)(*(longlong *)
                  (*(longlong *)(lVar4 + 8) + (*(longlong *)(lVar4 + 0x10) - 1U & uVar6) * 8) + 4)
        != param_3) {
      if (plVar7 == (longlong *)0x0) {
        lVar4 = 0;
      }
      else {
        lVar4 = *plVar7;
      }
      *param_5 = *(int *)(*(longlong *)
                           (*(longlong *)(lVar4 + 8) +
                           (*(longlong *)(lVar4 + 0x10) - 1U & uVar6) * 8) + 4);
      if (plVar7 == (longlong *)0x0) {
LAB_18015a059:
        lVar4 = 0;
      }
      else {
        lVar4 = *plVar7;
      }
LAB_18015a05b:
      lVar4 = *(longlong *)
               (*(longlong *)(lVar4 + 8) + (*(longlong *)(lVar4 + 0x10) - 1U & uVar6) * 8);
      goto LAB_18015a06d;
    }
  }
  if (uVar6 == uVar2) {
    return;
  }
  goto LAB_180159fa2;
}


