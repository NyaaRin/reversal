// 0x1800da4c0  FUN_1800da4c0
// size=391 thunk=false
// signature: undefined FUN_1800da4c0()
// status: ok


undefined8 FUN_1800da4c0(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  char local_10;
  
  if ((param_1 != (longlong *)0x0) && (lVar1 = param_1[1], lVar1 != 0)) {
    if (DAT_1803faee8 != (code *)0x0) {
      FUN_180023010(&local_28,lVar1);
      (*DAT_1803faee8)(lVar1,param_2,"GetOwner");
      if ((local_10 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
        (*DAT_1803fae90)(local_28,local_20,local_18,local_14);
      }
    }
    cVar2 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,6);
    if (cVar2 != '\0') {
      (**(code **)(*param_1 + 8))(param_1,param_2);
      iVar3 = FUN_180023180(param_1[1],1,1);
      if (iVar3 == 0) {
        cVar2 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,9);
        if (cVar2 != '\0') {
          uVar4 = (**(code **)*param_1)(param_1);
          if (DAT_1803faee8 != (code *)0x0) {
            lVar1 = param_1[1];
            FUN_180023010(&local_28,lVar1);
            (*DAT_1803faee8)(lVar1,uVar4,"organism");
            if ((local_10 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
              (*DAT_1803fae90)(local_28,local_20,local_18,local_14);
            }
          }
          cVar2 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,5);
          if (cVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001800da632. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar5 = (**(code **)*param_1)(param_1);
            return uVar5;
          }
        }
      }
    }
  }
  return 0;
}


