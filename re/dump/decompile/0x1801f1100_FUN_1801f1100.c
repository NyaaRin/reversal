// 0x1801f1100  FUN_1801f1100
// size=28 thunk=false
// signature: undefined FUN_1801f1100()
// status: ok


ulonglong FUN_1801f1100(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  
  if ((param_2 == (undefined4 *)0x0) || (param_3 == (undefined4 *)0x0)) {
    uVar2 = in_RAX & 0xffffffffffffff00;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0x10);
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    *param_3 = uVar1;
    uVar2 = CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
  }
  return uVar2;
}


