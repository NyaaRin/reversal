// 0x18008ac10  FUN_18008ac10
// size=343 thunk=false
// signature: undefined FUN_18008ac10()
// status: ok


void FUN_18008ac10(undefined8 *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  char local_30;
  
  if (DAT_1803faee8 != (code *)0x0) {
    uVar1 = *(undefined8 *)(*(longlong *)*param_1 + 8);
    FUN_180023010(&local_48,uVar1);
    (*DAT_1803faee8)(uVar1,0xffffffff,"GetValue");
    if ((local_30 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
      (*DAT_1803fae90)(local_48,local_40,local_38,local_34);
    }
  }
  cVar2 = (**(code **)(**(longlong **)*param_1 + 0x138))(*(longlong **)*param_1,0xffffffff,6);
  plVar5 = *(longlong **)*param_1;
  if (cVar2 == '\0') {
    lVar4 = *plVar5;
  }
  else {
    FUN_18001e2b0(*(undefined8 *)param_1[1],plVar5);
    (**(code **)(**(longlong **)*param_1 + 0xe8))(*(longlong **)*param_1,param_2,0);
    iVar3 = FUN_180023180(*(undefined8 *)(*(longlong *)*param_1 + 8),2,1);
    plVar5 = *(longlong **)*param_1;
    if (iVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00018008ad4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))(plVar5,1);
      return;
    }
    cVar2 = (**(code **)(*plVar5 + 0x138))(plVar5,0xffffffff,0);
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(**(longlong **)*param_1 + 200))(*(longlong **)*param_1,0xffffffff);
      if (cVar2 != '\0') {
        *param_3 = 1;
        plVar5 = *(longlong **)*param_1;
        lVar4 = *plVar5;
        goto LAB_18008ad56;
      }
    }
    *param_3 = 0;
    plVar5 = *(longlong **)*param_1;
    lVar4 = *plVar5;
  }
LAB_18008ad56:
                    /* WARNING: Could not recover jumptable at 0x00018008ad63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 0x10))(plVar5,1);
  return;
}


