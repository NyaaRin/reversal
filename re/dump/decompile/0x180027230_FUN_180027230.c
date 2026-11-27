// 0x180027230  FUN_180027230
// size=215 thunk=false
// signature: undefined FUN_180027230()
// status: ok


longlong * FUN_180027230(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  if (param_2[1] - *param_2 >> 5 != 0) {
    do {
      if (uVar4 != 0) {
        uVar2 = param_1[2];
        if (uVar2 < (ulonglong)param_1[3]) {
          param_1[2] = uVar2 + 1;
          if ((ulonglong)param_1[3] < 0x10) {
            *(undefined2 *)(uVar2 + (longlong)param_1) = 0x2e;
          }
          else {
            *(undefined2 *)(uVar2 + *param_1) = 0x2e;
          }
        }
        else {
          FUN_18021abd0(param_1);
        }
      }
      puVar3 = (undefined8 *)(uVar4 * 0x20 + *param_2);
      puVar1 = puVar3 + 2;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      FUN_18021aef0(param_1,puVar3,*puVar1);
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ulonglong)(param_2[1] - *param_2 >> 5));
  }
  return param_1;
}


