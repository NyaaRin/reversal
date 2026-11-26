// 0x18014c530  FUN_18014c530
// size=380 thunk=false
// signature: undefined FUN_18014c530()
// status: ok


bool FUN_18014c530(longlong *param_1,ulonglong param_2,longlong param_3,ulonglong param_4,
                  longlong param_5)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  
  if (param_2 < 0x2000001) {
    iVar1 = *(int *)((longlong)param_1 + 0x1c);
    uVar3 = param_2;
    if (iVar1 - 0x23 < param_2) {
      uVar3 = (ulonglong)((iVar1 * 0x20 - 0x180U) / 0xff - 0x17);
      uVar4 = (param_2 - uVar3) % (ulonglong)(iVar1 - 4) + uVar3;
      if (uVar4 <= iVar1 - 0x23) {
        uVar3 = uVar4;
      }
    }
    if (uVar3 <= param_4) {
      puVar5 = (undefined1 *)(param_3 + uVar3);
      FUN_1801fd7f0(param_5,param_3,puVar5);
      if (uVar3 == param_2) {
        return true;
      }
      if (uVar3 + 4 <= param_4) {
        uVar4 = 0;
        uVar2 = CONCAT31(CONCAT21(CONCAT11(*puVar5,puVar5[1]),puVar5[2]),puVar5[3]);
        param_2 = param_2 - uVar3;
        while( true ) {
          if (((param_2 == 0) || (uVar2 == 0)) || (*(uint *)(param_1 + 4) < uVar2)) {
            return param_2 == 0;
          }
          uVar4 = uVar4 + 1;
          if (0x100000 < uVar4) break;
          uVar3 = (ulonglong)(*(int *)((longlong)param_1 + 0x1c) - 4);
          puVar5 = (undefined1 *)
                   ((ulonglong)*(uint *)(param_1 + 3) * (ulonglong)(uVar2 - 1) + *param_1);
          if (param_2 < uVar3) {
            uVar3 = param_2;
          }
          FUN_180212f60(param_5,*(undefined8 *)(param_5 + 8),puVar5 + 4,
                        puVar5 + (uVar3 - (longlong)(puVar5 + 4)) + 4);
          uVar2 = CONCAT31(CONCAT21(CONCAT11(*puVar5,puVar5[1]),puVar5[2]),puVar5[3]);
          param_2 = param_2 - uVar3;
        }
      }
    }
  }
  return false;
}


