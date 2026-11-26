// 0x18011e150  FUN_18011e150
// size=105 thunk=false
// signature: undefined FUN_18011e150()
// status: ok


undefined8 FUN_18011e150(longlong *param_1,undefined8 param_2,undefined1 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  *param_3 = 0;
  if (param_1 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    lVar1 = (**(code **)(*param_1 + 0x3d8))();
    uVar3 = 0;
    if (lVar1 != 0) {
      uVar2 = 0;
      while ((uVar2 + 1 < 0x80 && (*(char *)(uVar2 + lVar1) != '\0'))) {
        param_3[uVar2] = *(char *)(uVar2 + lVar1);
        uVar2 = uVar2 + 1;
      }
      param_3[uVar2] = 0;
      uVar3 = FUN_18011e020(param_3);
    }
  }
  return uVar3;
}


