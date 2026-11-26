// 0x1801477c0  FUN_1801477c0
// size=195 thunk=false
// signature: undefined FUN_1801477c0()
// status: ok


undefined8 FUN_1801477c0(longlong *param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = FUN_180147130();
  if ((((param_1 == (longlong *)0x0) || (param_2 == 0)) || (*(char *)(lVar3 + 0x28) == '\0')) ||
     (DAT_1803fa598 == (longlong *)0x0)) {
    uVar4 = 0;
  }
  else {
    lVar1 = *(longlong *)(lVar3 + 8);
    if (*(longlong *)(lVar1 + (longlong)param_1) == param_2) {
      uVar4 = 1;
    }
    else {
      if (param_3 != '\0') {
        lVar2 = *(longlong *)(lVar3 + 0x10);
        if (*(short *)(lVar2 + (longlong)param_1) != -1) {
          (**(code **)(*DAT_1803fa598 + 0x20))();
          *(undefined2 *)(lVar2 + (longlong)param_1) = 0xffff;
        }
      }
      *(longlong *)(lVar1 + (longlong)param_1) = param_2;
      (**(code **)(*param_1 + (longlong)*(int *)(lVar3 + 0x18) * 8))(param_1);
      if (param_3 != '\0') {
        FUN_180147750(param_1);
        if (*(code **)(lVar3 + 0x20) != (code *)0x0) {
          (**(code **)(lVar3 + 0x20))(param_1);
        }
      }
      FUN_18001d810(param_1);
      uVar4 = 1;
    }
  }
  return uVar4;
}


