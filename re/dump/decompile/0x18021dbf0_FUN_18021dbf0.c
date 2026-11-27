// 0x18021dbf0  FUN_18021dbf0
// size=445 thunk=false
// signature: undefined FUN_18021dbf0()
// status: ok


uint FUN_18021dbf0(uint *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar6 = 0x270;
  if (*param_1 == 0x270) {
    do {
      uVar3 = param_1[uVar6 - 0x26e];
      uVar4 = param_1[uVar6 - 0x26d];
      uVar5 = param_1[uVar6 - 0x26b];
      uVar2 = (uVar3 ^ param_1[uVar6 - 0x26f]) & 0x7fffffff ^ param_1[uVar6 - 0x26f];
      param_1[uVar6 + 1] =
           -(uint)((uVar2 & 1) != 0) & 0x9908b0df ^ param_1[uVar6 - 0xe2] ^ uVar2 >> 1;
      uVar3 = (uVar4 ^ uVar3) & 0x7fffffff ^ uVar3;
      uVar2 = param_1[uVar6 - 0x26c];
      param_1[uVar6 + 2] =
           -(uint)((uVar3 & 1) != 0) & 0x9908b0df ^ param_1[uVar6 - 0xe1] ^ uVar3 >> 1;
      uVar4 = (uVar2 ^ uVar4) & 0x7fffffff ^ uVar4;
      uVar3 = param_1[uVar6 - 0x26a];
      param_1[uVar6 + 3] =
           -(uint)((uVar4 & 1) != 0) & 0x9908b0df ^ param_1[uVar6 - 0xe0] ^ uVar4 >> 1;
      uVar2 = (uVar5 ^ uVar2) & 0x7fffffff ^ uVar2;
      param_1[uVar6 + 4] =
           -(uint)((uVar2 & 1) != 0) & 0x9908b0df ^ param_1[uVar6 - 0xdf] ^ uVar2 >> 1;
      uVar5 = (uVar3 ^ uVar5) & 0x7fffffff ^ uVar5;
      uVar3 = (uVar3 ^ param_1[uVar6 - 0x269]) & 0x7fffffff ^ uVar3;
      param_1[uVar6 + 5] =
           -(uint)((uVar5 & 1) != 0) & 0x9908b0df ^ param_1[uVar6 - 0xde] ^ uVar5 >> 1;
      uVar1 = uVar6 + 6;
      param_1[uVar1] = -(uint)((uVar3 & 1) != 0) & 0x9908b0df ^ param_1[uVar6 - 0xdd] ^ uVar3 >> 1;
      uVar6 = uVar1;
    } while (uVar1 < 0x4e0);
  }
  else if (0x4df < *param_1) {
    FUN_18022e630();
  }
  uVar3 = param_1[(ulonglong)*param_1 + 1];
  *param_1 = *param_1 + 1;
  uVar3 = uVar3 >> 0xb & param_1[0x4e1] ^ uVar3;
  uVar3 = (uVar3 & 0xff3a58ad) << 7 ^ uVar3;
  uVar3 = (uVar3 & 0xffffdf8c) << 0xf ^ uVar3;
  return uVar3 >> 0x12 ^ uVar3;
}


