// 0x1800cb190  FUN_1800cb190
// size=132 thunk=false
// signature: undefined FUN_1800cb190()
// status: ok


undefined4 * FUN_1800cb190(undefined4 *param_1,undefined8 param_2)

{
  code *pcVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined1 local_18 [16];
  
  plVar2 = DAT_1803fa360;
  *(undefined1 *)(param_1 + 6) = 0;
  pcVar1 = *(code **)(*plVar2 + 0x18);
  uVar3 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar4 = (*pcVar1)(DAT_1803fa360,uVar3);
  if (lVar4 != 0) {
    puVar5 = (undefined4 *)FUN_180073aa0(local_18,param_2);
    *param_1 = *puVar5;
    param_1[1] = puVar5[1];
    param_1[2] = puVar5[2];
    FUN_1802d4050(param_2,param_1 + 3);
    *(undefined1 *)(param_1 + 6) = 1;
  }
  return param_1;
}


