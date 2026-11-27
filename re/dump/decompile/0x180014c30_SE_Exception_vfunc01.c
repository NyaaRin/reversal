// 0x180014c30  SE_Exception_vfunc01
// size=56 thunk=false
// signature: undefined SE_Exception_vfunc01()
// status: ok


undefined8 * SE_Exception_vfunc01(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 local_28 [32];
  
  puVar1 = (undefined8 *)
           FUN_180014520(local_28,*(undefined8 *)(param_1 + 0x20),param_3,
                         *(undefined4 *)(param_1 + 0x18));
  if (0xf < (ulonglong)puVar1[3]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  FUN_18020e450(local_28);
  return puVar1;
}


