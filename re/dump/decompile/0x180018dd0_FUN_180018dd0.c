// 0x180018dd0  FUN_180018dd0
// size=284 thunk=false
// signature: undefined FUN_180018dd0()
// status: ok


longlong FUN_180018dd0(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *local_res10;
  undefined8 local_28;
  undefined8 *puStack_20;
  undefined8 *local_18;
  
  FUN_180018990();
  puVar1 = (undefined4 *)(param_1 + 0x18);
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  local_res10 = puVar1;
  lVar2 = FUN_1802d8350(0x98);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(param_1 + 0x20) = lVar2;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 7;
  *(undefined8 *)(param_1 + 0x50) = 8;
  *puVar1 = 0x3f800000;
  FUN_18022be40((undefined8 *)(param_1 + 0x30),0x10,*(undefined8 *)(param_1 + 0x20));
  if (DAT_1803f9278 != (longlong *)0x0) {
    local_28 = 0;
    puStack_20 = (undefined8 *)0x0;
    local_18 = (undefined8 *)0x0;
    for (lVar2 = (**(code **)(*DAT_1803f9278 + 0x40))(); lVar2 != 0;
        lVar2 = *(longlong *)(lVar2 + 0x20)) {
      local_res10 = *(undefined4 **)(lVar2 + 0x18);
      if (puStack_20 == local_18) {
        FUN_180221c00(&local_28,puStack_20,&local_res10);
      }
      else {
        *puStack_20 = local_res10;
        puStack_20 = puStack_20 + 1;
      }
    }
    FUN_1800191d0(param_1,&local_28);
    FUN_180209700(&local_28);
  }
  return param_1;
}


