// 0x18008a690  FUN_18008a690
// size=267 thunk=false
// signature: undefined FUN_18008a690()
// status: ok


void FUN_18008a690(undefined8 *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  char local_30;
  
  if (DAT_1803faee8 != (code *)0x0) {
    uVar1 = *(undefined8 *)(*(longlong *)*param_1 + 8);
    FUN_180023010(&local_48,uVar1);
    (*DAT_1803faee8)(uVar1,0xffffffff,param_2);
    if ((local_30 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
      (*DAT_1803fae90)(local_48,local_40,local_38,local_34);
    }
  }
  cVar2 = (**(code **)(**(longlong **)*param_1 + 0x138))(*(longlong **)*param_1,0xffffffff,6);
  plVar6 = *(longlong **)*param_1;
  if (cVar2 == '\0') {
    lVar5 = *plVar6;
  }
  else {
    FUN_18001e2b0(*(undefined8 *)param_1[1],plVar6);
    iVar4 = FUN_180023180(*(undefined8 *)(*(longlong *)*param_1 + 8),1,1);
    plVar6 = *(longlong **)*param_1;
    if (iVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00018008a77f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x10))(plVar6,1);
      return;
    }
    uVar3 = (**(code **)(*plVar6 + 200))(plVar6,0xffffffff);
    *param_3 = uVar3;
    plVar6 = *(longlong **)*param_1;
    lVar5 = *plVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x00018008a797. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 0x10))(plVar6,1);
  return;
}


