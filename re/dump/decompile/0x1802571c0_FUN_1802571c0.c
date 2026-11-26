// 0x1802571c0  FUN_1802571c0
// size=264 thunk=false
// signature: undefined FUN_1802571c0()
// status: ok


ulonglong FUN_1802571c0(ushort *param_1,ushort *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  ushort uVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)*param_3 + param_3[1];
  pbVar1 = (byte *)*param_3;
  while( true ) {
    if (pbVar4 <= pbVar1) {
      return CONCAT71((int7)((ulonglong)pbVar1 >> 8),1);
    }
    pbVar2 = pbVar1;
    if (param_1 == param_2) break;
    uVar3 = (ushort)(char)*pbVar1;
    if ((char)*pbVar1 < '\0') {
      pbVar2 = pbVar1 + 1;
      if ((pbVar2 < pbVar4) && ((*pbVar1 & 0xe0) == 0xc0)) {
        uVar3 = (ushort)(*pbVar1 & 0x1f) << 6 | (ushort)(*pbVar2 & 0x3f);
        pbVar2 = pbVar1 + 2;
      }
      else if ((pbVar1 + 2 < pbVar4) && ((*pbVar1 & 0xf0) == 0xe0)) {
        uVar3 = ((ushort)(*pbVar2 & 0x3f) | (short)(char)*pbVar1 << 6) << 6 |
                (ushort)(pbVar1[2] & 0x3f);
        pbVar2 = pbVar1 + 3;
      }
      else if ((pbVar1 + 3 < pbVar4) && ((*pbVar1 & 0xf8) == 0xf0)) {
        uVar3 = 0xfffd;
        pbVar2 = pbVar1 + 4;
      }
      else {
        uVar3 = 0xfffd;
      }
    }
    else {
      pbVar2 = pbVar1 + 1;
    }
    if (*param_1 != uVar3) break;
    param_1 = param_1 + 8;
    pbVar1 = pbVar2;
  }
  return (ulonglong)pbVar2 & 0xffffffffffffff00;
}


