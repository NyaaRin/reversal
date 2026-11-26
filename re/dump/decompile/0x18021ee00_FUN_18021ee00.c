// 0x18021ee00  FUN_18021ee00
// size=138 thunk=false
// signature: undefined FUN_18021ee00()
// status: ok


undefined4 * FUN_18021ee00(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  *param_1 = *param_2;
  puVar2 = (undefined8 *)(param_2 + 2);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  if ((undefined8 *)(param_1 + 2) != puVar2) {
    if (0xf < *(ulonglong *)(param_2 + 8)) {
      puVar2 = (undefined8 *)*puVar2;
    }
    FUN_180212700(param_1 + 2,puVar2,*(undefined8 *)(param_2 + 6));
  }
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  if (param_1 + 0xe != param_2 + 0xe) {
    lVar1 = *(longlong *)(param_2 + 0xe);
    FUN_180219bd0(param_1 + 0xe,lVar1,*(longlong *)(param_2 + 0x10) - lVar1 >> 5);
  }
  FUN_18020ca40(param_1 + 0x14,param_2 + 0x14);
  return param_1;
}


