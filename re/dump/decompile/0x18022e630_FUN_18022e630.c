// 0x18022e630  FUN_18022e630
// size=498 thunk=false
// signature: undefined FUN_18022e630()
// status: ok


undefined8 FUN_18022e630(undefined4 *param_1)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  uVar2 = 0;
  uVar6 = 0xe3;
  do {
    uVar7 = (param_1[uVar2 + 0x271] ^ param_1[uVar2 + 0x272]) & 0x7fffffff ^ param_1[uVar2 + 0x271];
    param_1[uVar2 + 1] =
         -(uint)((uVar7 & 1) != 0) & 0x9908b0df ^ param_1[uVar2 + 0x3fe] ^ uVar7 >> 1;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0xe3);
  do {
    uVar7 = param_1[uVar6 + 0x272];
    uVar4 = param_1[uVar6 + 0x273];
    uVar5 = param_1[uVar6 + 0x275];
    uVar3 = (uVar7 ^ param_1[uVar6 + 0x271]) & 0x7fffffff ^ param_1[uVar6 + 0x271];
    param_1[uVar6 + 1] = -(uint)((uVar3 & 1) != 0) & 0x9908b0df ^ param_1[uVar6 - 0xe2] ^ uVar3 >> 1
    ;
    uVar7 = (uVar4 ^ uVar7) & 0x7fffffff ^ uVar7;
    uVar3 = param_1[uVar6 + 0x274];
    param_1[uVar6 + 2] = -(uint)((uVar7 & 1) != 0) & 0x9908b0df ^ param_1[uVar6 - 0xe1] ^ uVar7 >> 1
    ;
    uVar4 = (uVar3 ^ uVar4) & 0x7fffffff ^ uVar4;
    uVar7 = param_1[uVar6 + 0x276];
    param_1[uVar6 + 3] = -(uint)((uVar4 & 1) != 0) & 0x9908b0df ^ param_1[uVar6 - 0xe0] ^ uVar4 >> 1
    ;
    uVar3 = (uVar5 ^ uVar3) & 0x7fffffff ^ uVar3;
    param_1[uVar6 + 4] = -(uint)((uVar3 & 1) != 0) & 0x9908b0df ^ param_1[uVar6 - 0xdf] ^ uVar3 >> 1
    ;
    uVar5 = (uVar7 ^ uVar5) & 0x7fffffff ^ uVar5;
    uVar7 = (uVar7 ^ param_1[uVar6 + 0x277]) & 0x7fffffff ^ uVar7;
    param_1[uVar6 + 5] = -(uint)((uVar5 & 1) != 0) & 0x9908b0df ^ param_1[uVar6 - 0xde] ^ uVar5 >> 1
    ;
    uVar2 = uVar6 + 6;
    param_1[uVar2] = -(uint)((uVar7 & 1) != 0) & 0x9908b0df ^ param_1[uVar6 - 0xdd] ^ uVar7 >> 1;
    uVar6 = uVar2;
  } while (uVar2 < 0x26f);
  uVar7 = (param_1[0x4e0] ^ param_1[1]) & 0x7fffffff ^ param_1[0x4e0];
  *param_1 = 0;
  uVar6 = (ulonglong)uVar7 & 0xffffffffffffff01;
  cVar1 = (char)uVar6;
  param_1[0x270] = -(uint)(cVar1 != '\0') & 0x9908b0df ^ param_1[0x18d] ^ uVar7 >> 1;
  return CONCAT71((int7)(uVar6 >> 8),-cVar1);
}


