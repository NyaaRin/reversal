// 0x1800b2190  FUN_1800b2190
// size=22 thunk=false
// signature: undefined FUN_1800b2190()
// status: ok


ulonglong FUN_1800b2190(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  
  if ((param_1 == 0) || (param_2 == (undefined4 *)0x0)) {
    uVar2 = in_RAX & 0xffffffffffffff00;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    *param_2 = uVar1;
    uVar2 = CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
  }
  return uVar2;
}


