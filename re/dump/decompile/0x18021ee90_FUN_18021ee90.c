// 0x18021ee90  FUN_18021ee90
// size=161 thunk=false
// signature: undefined FUN_18021ee90()
// status: ok


undefined4 * FUN_18021ee90(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)(param_2 + 2);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
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
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  param_1[0x19] = param_2[0x19];
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
  return param_1;
}


