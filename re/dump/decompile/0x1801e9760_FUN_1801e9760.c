// 0x1801e9760  FUN_1801e9760
// size=77 thunk=false
// signature: undefined FUN_1801e9760()
// status: ok


ulonglong FUN_1801e9760(longlong *param_1,longlong param_2)

{
  uint uVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  
  if ((param_1 == (longlong *)0x0) || (param_2 == 0)) {
    uVar2 = in_RAX & 0xffffffffffffff00;
  }
  else {
    uVar2 = 0;
    if (*param_1 != 0) {
      uVar2 = (**(code **)(*param_1 + 0x180))();
      if ((-1 < (int)uVar2) &&
         (uVar1 = *(int *)(param_2 + 8) - 1, uVar2 = (ulonglong)uVar1, uVar1 < 0x4000)) {
        uVar1 = *(int *)(param_2 + 0xc) - 1;
        uVar2 = (ulonglong)uVar1;
        if (uVar1 < 0x4000) {
          return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
        }
      }
      uVar2 = uVar2 & 0xffffffffffffff00;
    }
  }
  return uVar2;
}


