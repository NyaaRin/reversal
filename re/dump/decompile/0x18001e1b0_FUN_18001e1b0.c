// 0x18001e1b0  FUN_18001e1b0
// size=252 thunk=false
// signature: undefined FUN_18001e1b0()
// status: ok


undefined8 FUN_18001e1b0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((param_2 != (longlong *)0x0) && (DAT_1803fcf38 != -1)) {
    iVar3 = (**(code **)*param_2)(param_2);
    cVar1 = FUN_18001bdc0(param_1);
    iVar4 = (**(code **)*param_2)(param_2);
    iVar4 = iVar4 - iVar3;
    if ((cVar1 != '\0') &&
       ((iVar4 == 1 &&
        (cVar2 = (**(code **)(*param_2 + 0x138))(param_2,0xffffffff,9), cVar2 != '\0')))) {
      if (DAT_1803fcf38 == 0) {
        DAT_1803fcf38 = iVar4;
        FUN_180014410("[PUSH] native PushEntity(vt174) verified: +1 ENTITY, no Lua executed\n");
      }
      return 1;
    }
    iVar5 = (**(code **)*param_2)(param_2);
    while (iVar3 < iVar5) {
      (**(code **)(*param_2 + 0x10))(param_2,1);
      iVar5 = (**(code **)*param_2)(param_2);
    }
    if (DAT_1803fcf38 == 0) {
      DAT_1803fcf80 = DAT_1803fcf80 + 1;
      if (2 < DAT_1803fcf80) {
        DAT_1803fcf38 = -1;
        FUN_180014410(&DAT_18033ff10,cVar1,iVar4);
      }
    }
  }
  return 0;
}


