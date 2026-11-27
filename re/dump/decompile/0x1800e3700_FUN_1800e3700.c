// 0x1800e3700  FUN_1800e3700
// size=80 thunk=false
// signature: undefined FUN_1800e3700()
// status: ok


byte * FUN_1800e3700(longlong param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  
  if (param_1 != 0) {
    pbVar1 = (byte *)FUN_18001e410();
    if (((byte *)0xffff < pbVar1) && (bVar3 = *pbVar1, pbVar2 = pbVar1, bVar3 != 0)) {
      while ((bVar3 < 0x21 || (bVar3 == 0x7f))) {
        pbVar2 = pbVar2 + 1;
        bVar3 = *pbVar2;
        if (bVar3 == 0) {
          return (byte *)0x0;
        }
      }
      return pbVar1;
    }
  }
  return (byte *)0x0;
}


