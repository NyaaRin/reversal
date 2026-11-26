// 0x1800cfab0  FUN_1800cfab0
// size=128 thunk=false
// signature: undefined FUN_1800cfab0()
// status: ok


ulonglong FUN_1800cfab0(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  if (param_2 != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(*param_2 + 0x20))(param_2);
    if (plVar1 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar1 + 0x48))(plVar1);
      goto LAB_1800cfae0;
    }
  }
  uVar2 = 0;
LAB_1800cfae0:
  if ((int)uVar2 < 1) {
    return uVar2 & 0xffffffffffffff00;
  }
  if ((DAT_1803fa608 != 0) && (*(int *)(DAT_1803fa608 + 0x1c) < (int)uVar2)) {
    uVar2 = FUN_1800c54e0(param_2);
    return uVar2;
  }
  uVar2 = FUN_1800c5030(param_2,*(undefined8 *)*param_1);
  return uVar2;
}


