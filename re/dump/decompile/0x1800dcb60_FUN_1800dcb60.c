// 0x1800dcb60  FUN_1800dcb60
// size=242 thunk=false
// signature: undefined FUN_1800dcb60()
// status: ok


ulonglong FUN_1800dcb60(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = *param_1;
  uVar4 = (uVar3 & 0x1ffffc000 ^ uVar3 >> 0x1f) >> 0xe ^ (uVar3 & 0xfffffffffffffffe) << 0x12;
  *param_1 = uVar4;
  uVar3 = param_1[1];
  uVar1 = (uVar3 & 0x1ffffffff800 ^ uVar3 >> 0x13) >> 0xb ^ (uVar3 & 0xffffffffffffffc0) << 0x1c;
  uVar3 = param_1[2];
  param_1[1] = uVar1;
  uVar2 = (uVar3 >> 0x18 ^ uVar3 & 0xffff000000) >> 0x18 ^ (uVar3 & 0xfffffffffffffe00) << 7;
  uVar3 = param_1[3];
  param_1[2] = uVar2;
  uVar3 = (uVar3 >> 0x15 ^ uVar3 & 0x7fffffc0000) >> 0x12 ^ (uVar3 & 0xfffffffffffe0000) << 8;
  param_1[3] = uVar3;
  return (uVar3 ^ uVar1 ^ uVar4 ^ uVar2) & 0xfffffffffffff | 0x3ff0000000000000;
}


