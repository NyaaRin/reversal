// 0x1800b7530  FUN_1800b7530
// size=157 thunk=false
// signature: undefined FUN_1800b7530()
// status: ok


undefined8 FUN_1800b7530(void *param_1)

{
  char cVar1;
  BOOL BVar2;
  void *pvVar3;
  undefined1 local_res8 [32];
  
  if (param_1 != (void *)0x0) {
    BVar2 = IsBadReadPtr(param_1,0x27c0);
    if (((((BVar2 == 0) && (DAT_1803fa668 != (longlong *)0x0)) &&
         (cVar1 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar1 != '\0')) &&
        ((pvVar3 = (void *)(**(code **)(*DAT_1803fa668 + 0x240))(), pvVar3 == param_1 &&
         (DAT_1803fb230 == param_1)))) && (3 < DAT_1803fb244)) {
      local_res8[0] = 0;
      cVar1 = FUN_1800b6cf0(param_1);
      if ((cVar1 != '\0') && (cVar1 = FUN_1800b6dc0(param_1,local_res8), cVar1 == '\0')) {
        return 1;
      }
      return 0;
    }
  }
  return 0;
}


