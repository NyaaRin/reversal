// 0x1802b67e0  FUN_1802b67e0
// size=114 thunk=false
// signature: undefined FUN_1802b67e0()
// status: ok


void FUN_1802b67e0(longlong param_1,uint param_2)

{
  uint uVar1;
  
  FUN_1802b5240(param_1,*(undefined8 *)(param_1 + 8),param_2);
  *(undefined1 *)(param_1 + 0x70) = 1;
  *(undefined4 *)(param_1 + 0x6c) = 0xbe99999a;
  uVar1 = (param_2 & 0xffbfffff) - 0x200000;
  if ((uVar1 < 0xd) && ((0x1251U >> (uVar1 & 0x1f) & 1) != 0)) {
    *(undefined1 *)(param_1 + 0x76) = 0;
    return;
  }
  uVar1 = (param_2 & 0xffbfffff) - 0x200001;
  if ((uVar1 < 0xd) && ((0x10d1U >> (uVar1 & 0x1f) & 1) != 0)) {
    *(undefined1 *)(param_1 + 0x76) = 1;
  }
  return;
}


