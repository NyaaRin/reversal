// 0x180196d90  FUN_180196d90
// size=166 thunk=false
// signature: undefined FUN_180196d90()
// status: ok


ulonglong FUN_180196d90(undefined8 *param_1,undefined4 *param_2,undefined1 *param_3)

{
  char *pcVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  uint7 uVar6;
  undefined4 uVar7;
  
  uVar3 = 0;
  *param_1 = 0;
  *param_2 = 0;
  *param_3 = 0;
  if ((DAT_1803fa668 == (longlong *)0x0) ||
     (uVar3 = (**(code **)(*DAT_1803fa668 + 0xd8))(), (char)uVar3 == '\0')) {
    return uVar3 & 0xffffffffffffff00;
  }
  plVar4 = (longlong *)(**(code **)(*DAT_1803fa668 + 0x240))();
  if (plVar4 == (longlong *)0x0) {
    return 0;
  }
  uVar5 = (**(code **)(*plVar4 + 8))(plVar4);
  *param_1 = uVar5;
  uVar7 = (**(code **)(*plVar4 + 0x18))(plVar4);
  *param_2 = uVar7;
  uVar2 = (**(code **)(*plVar4 + 0x30))(plVar4);
  *param_3 = uVar2;
  pcVar1 = (char *)*param_1;
  uVar6 = (uint7)((ulonglong)pcVar1 >> 8);
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    return CONCAT71(uVar6,1);
  }
  return (ulonglong)uVar6 << 8;
}


