// 0x180107300  FUN_180107300
// size=54 thunk=false
// signature: undefined FUN_180107300()
// status: ok


ulonglong FUN_180107300(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  ulonglong in_RAX;
  undefined4 *puVar2;
  
  if (param_1 == (longlong *)0x0) {
    return in_RAX & 0xffffffffffffff00;
  }
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x48))();
  *param_2 = *puVar2;
  param_2[1] = puVar2[1];
  uVar1 = puVar2[2];
  param_2[2] = uVar1;
  return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
}


