// 0x1800ae270  FUN_1800ae270
// size=88 thunk=false
// signature: undefined FUN_1800ae270()
// status: ok


undefined8 FUN_1800ae270(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  *(undefined1 *)*param_1 = 1;
  lVar1 = *param_1;
  *(undefined4 *)(lVar1 + 0xc) = *param_2;
  *(undefined4 *)(lVar1 + 0x10) = param_2[1];
  *(undefined4 *)(lVar1 + 0x14) = param_2[2];
  uVar2 = (**(code **)(**(longlong **)param_1[1] + 0x50))
                    (*(longlong **)param_1[1],*(undefined4 *)param_1[2],*(undefined4 *)param_1[3]);
  lVar1 = *param_1;
  *(undefined4 *)(lVar1 + 4) = uVar2;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}


