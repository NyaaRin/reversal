// 0x18021ed30  FUN_18021ed30
// size=199 thunk=false
// signature: undefined FUN_18021ed30()
// status: ok


undefined4 * FUN_18021ed30(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)(param_2 + 2);
  param_1[1] = param_2[1];
  if ((undefined8 *)(param_1 + 2) != puVar1) {
    if (0xf < *(ulonglong *)(param_2 + 8)) {
      puVar1 = (undefined8 *)*puVar1;
    }
    FUN_180212700(param_1 + 2,puVar1,*(undefined8 *)(param_2 + 6));
  }
  plVar2 = (longlong *)(param_2 + 10);
  if ((longlong *)(param_1 + 10) != plVar2) {
    if (0xf < *(ulonglong *)(param_2 + 0x10)) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_180212700(param_1 + 10,plVar2,*(undefined8 *)(param_2 + 0xe));
  }
  plVar2 = (longlong *)(param_2 + 0x14);
  param_1[0x12] = param_2[0x12];
  if ((longlong *)(param_1 + 0x14) != plVar2) {
    if (0xf < *(ulonglong *)(param_2 + 0x1a)) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_180212700(param_1 + 0x14,plVar2,*(undefined8 *)(param_2 + 0x18));
  }
  plVar2 = (longlong *)(param_2 + 0x1c);
  if ((longlong *)(param_1 + 0x1c) != plVar2) {
    if (0xf < *(ulonglong *)(param_2 + 0x22)) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_180212700(param_1 + 0x1c,plVar2,*(undefined8 *)(param_2 + 0x20));
  }
  param_1[0x24] = param_2[0x24];
  *(undefined1 *)(param_1 + 0x25) = *(undefined1 *)(param_2 + 0x25);
  return param_1;
}


