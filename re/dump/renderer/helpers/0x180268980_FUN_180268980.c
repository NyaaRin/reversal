// 180268980  FUN_180268980
// signature: undefined FUN_180268980()
// status: ok


uint FUN_180268980(byte *param_1,ulonglong param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  ulonglong uVar4;
  
  param_3 = ~param_3;
  uVar2 = param_3;
  if (param_2 != 0) {
    do {
      uVar4 = param_2 - 1;
      pbVar3 = param_1 + 1;
      if (((*param_1 == 0x23) && (1 < uVar4)) && ((*pbVar3 == 0x23 && (param_1[2] == 0x23)))) {
        pbVar3 = param_1 + 3;
        uVar4 = param_2 - 3;
        uVar2 = param_3;
      }
      else {
        uVar2 = uVar2 >> 8 ^
                *(uint *)(&DAT_180331380 + ((ulonglong)(uVar2 & 0xff) ^ (ulonglong)*param_1) * 4);
      }
      param_1 = pbVar3;
      param_2 = uVar4;
    } while (uVar4 != 0);
    return ~uVar2;
  }
  bVar1 = *param_1;
  while (bVar1 != 0) {
    pbVar3 = param_1 + 1;
    if (((bVar1 == 0x23) && (*pbVar3 == 0x23)) && (param_1[2] == 0x23)) {
      pbVar3 = param_1 + 3;
      uVar2 = param_3;
    }
    else {
      uVar2 = uVar2 >> 8 ^
              *(uint *)(&DAT_180331380 + ((ulonglong)(uVar2 & 0xff) ^ (ulonglong)bVar1) * 4);
    }
    param_1 = pbVar3;
    bVar1 = *pbVar3;
  }
  return ~uVar2;
}


