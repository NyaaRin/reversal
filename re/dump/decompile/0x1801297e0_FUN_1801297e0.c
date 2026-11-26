// 0x1801297e0  FUN_1801297e0
// size=43 thunk=false
// signature: undefined FUN_1801297e0()
// status: ok


undefined8 FUN_1801297e0(longlong param_1)

{
  uint uVar1;
  uint7 uVar3;
  undefined8 uVar2;
  
  uVar1 = *(uint *)(DAT_1804015ac + param_1);
  if ((uVar1 & 0x20) == 0) {
    uVar3 = (uint7)(uint3)(uVar1 >> 8);
  }
  else {
    *(uint *)(DAT_1804015ac + param_1) = uVar1 & 0xffffffdf;
    uVar2 = (*DAT_1804015b0)();
    uVar3 = (uint7)((ulonglong)uVar2 >> 8);
  }
  return CONCAT71(uVar3,1);
}


