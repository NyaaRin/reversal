// 0x1802b3320  FUN_1802b3320
// size=239 thunk=false
// signature: undefined FUN_1802b3320()
// status: ok


uint FUN_1802b3320(byte *param_1)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  bool bVar6;
  
  bVar3 = *param_1;
  while (bVar3 != 0) {
    if (bVar3 == 0x25) {
      if (param_1[1] != 0x25) break;
      param_1 = param_1 + 1;
    }
    pbVar2 = param_1 + 1;
    param_1 = param_1 + 1;
    bVar3 = *pbVar2;
  }
  if (*param_1 != 0x25) {
    return 3;
  }
  bVar3 = param_1[1];
  while (('/' < (char)bVar3 && (bVar3 < 0x3a))) {
    bVar3 = param_1[2];
    param_1 = param_1 + 1;
  }
  bVar3 = param_1[1];
  if (bVar3 == 0x2e) {
    bVar3 = param_1[2];
    pbVar2 = param_1 + 2;
    bVar6 = bVar3 != 0x2d;
    if (!bVar6) {
      bVar3 = param_1[3];
      pbVar2 = param_1 + 3;
    }
    pbVar4 = pbVar2 + 1;
    if (bVar3 != 0x2b) {
      pbVar4 = pbVar2;
    }
    bVar3 = *pbVar4;
    if ((char)bVar3 < '0') {
      uVar1 = 0;
    }
    else {
      uVar5 = 0;
      do {
        if (0x39 < bVar3) break;
        pbVar4 = pbVar4 + 1;
        uVar5 = (uint)bVar3 + (uVar5 * 5 + -0x18) * 2;
        bVar3 = *pbVar4;
      } while ('/' < (char)bVar3);
      uVar1 = -uVar5;
      if (bVar6) {
        uVar1 = uVar5;
      }
      if (99 < uVar1) {
        bVar3 = *pbVar4;
        uVar1 = 3;
        goto LAB_1802b33e4;
      }
    }
    bVar3 = *pbVar4;
  }
  else {
    uVar1 = 0x7fffffff;
  }
LAB_1802b33e4:
  if ((bVar3 + 0xbb & 0xdf) == 0) {
    uVar1 = 0xffffffff;
  }
  if (((bVar3 + 0xb9 & 0xdf) == 0) && (uVar1 == 0x7fffffff)) {
    uVar1 = 0xffffffff;
  }
  if (uVar1 == 0x7fffffff) {
    uVar1 = 3;
  }
  return uVar1;
}


