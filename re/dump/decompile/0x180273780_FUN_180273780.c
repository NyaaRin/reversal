// 0x180273780  FUN_180273780
// size=103 thunk=false
// signature: undefined FUN_180273780()
// status: ok


void FUN_180273780(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = 0xffffffff;
  uVar3 = 0xffffffff;
  bVar1 = *param_1;
  while (bVar1 != 0) {
    pbVar2 = param_1 + 1;
    if (((bVar1 == 0x23) && (*pbVar2 == 0x23)) && (param_1[2] == 0x23)) {
      uVar4 = 0xffffffff;
      pbVar2 = param_1 + 3;
    }
    else {
      uVar4 = (ulonglong)
              ((uint)(uVar4 >> 8) ^
              *(uint *)(&DAT_180331380 + (uVar4 & 0xff ^ (ulonglong)bVar1) * 4));
    }
    uVar3 = (uint)uVar4;
    param_1 = pbVar2;
    bVar1 = *pbVar2;
  }
  FUN_1802736c0(~uVar3);
  return;
}


