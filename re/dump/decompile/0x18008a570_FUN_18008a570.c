// 0x18008a570  FUN_18008a570
// size=273 thunk=false
// signature: undefined FUN_18008a570()
// status: ok


void FUN_18008a570(undefined8 *param_1,undefined8 param_2,float *param_3)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  double dVar6;
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
  plVar5 = *(longlong **)*param_1;
  if (cVar2 == '\0') {
    lVar4 = *plVar5;
  }
  else {
    FUN_18001e2b0(*(undefined8 *)param_1[1],plVar5);
    iVar3 = FUN_180023180(*(undefined8 *)(*(longlong *)*param_1 + 8),1,1);
    plVar5 = *(longlong **)*param_1;
    if (iVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00018008a666. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))(plVar5,1);
      return;
    }
    dVar6 = (double)(**(code **)(*plVar5 + 0xc0))(plVar5,0xffffffff);
    *param_3 = (float)dVar6;
    plVar5 = *(longlong **)*param_1;
    lVar4 = *plVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00018008a67d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 0x10))(plVar5,1);
  return;
}


