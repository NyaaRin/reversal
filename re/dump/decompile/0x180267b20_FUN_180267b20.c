// 0x180267b20  FUN_180267b20
// size=100 thunk=false
// signature: undefined FUN_180267b20()
// status: ok


void FUN_180267b20(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0xd0);
  uVar3 = 0x200;
  do {
    if (6 < uVar3 - 0x290) {
      uVar2 = (ulonglong)uVar3;
      *(undefined1 *)(lVar1 + -0x1edc + uVar2 * 0x10) = 0;
      *(undefined4 *)(lVar1 + -0x1ed8 + uVar2 * 0x10) = 0xbf800000;
      *(undefined4 *)(lVar1 + -0x1ed4 + uVar2 * 0x10) = 0xbf800000;
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 0x29b);
  *(undefined8 *)(param_1 + 0xf4) = 0;
  FUN_180260a20(param_1 + 0xba8,0);
  return;
}


