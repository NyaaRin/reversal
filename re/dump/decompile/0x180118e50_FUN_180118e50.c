// 0x180118e50  FUN_180118e50
// size=162 thunk=false
// signature: undefined FUN_180118e50()
// status: ok


undefined4 * FUN_180118e50(undefined4 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  if (((DAT_1804236a5 != '\0') && (DAT_1803fa660 != 0)) && (DAT_180423600 != '\0')) {
    *(undefined1 *)param_1 = 1;
    lVar1 = DAT_1803fa660;
    *(undefined1 *)((longlong)param_1 + 1) = *(undefined1 *)(DAT_1803fa660 + 0x90);
    *(undefined1 *)((longlong)param_1 + 2) = *(undefined1 *)(lVar1 + 0x91);
    *(undefined1 *)((longlong)param_1 + 3) = *(undefined1 *)(lVar1 + 0x92);
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(lVar1 + 0x93);
    param_1[2] = *(undefined4 *)(lVar1 + 0x94);
    param_1[3] = *(undefined4 *)(lVar1 + 0x98);
    param_1[4] = *(undefined4 *)(lVar1 + 0x9c);
    param_1[5] = *(undefined4 *)(lVar1 + 0xa0);
    *(undefined4 *)(lVar1 + 0x90) = 0;
    return param_1;
  }
  *(undefined1 *)param_1 = 0;
  return param_1;
}


