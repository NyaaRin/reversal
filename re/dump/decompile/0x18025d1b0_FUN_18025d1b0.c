// 0x18025d1b0  FUN_18025d1b0
// size=268 thunk=false
// signature: undefined FUN_18025d1b0()
// status: ok


void FUN_18025d1b0(undefined8 param_1,undefined8 *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  ushort local_48 [4];
  undefined1 local_40 [32];
  
  FUN_180260730();
  pbVar3 = (byte *)*param_2;
  pbVar1 = pbVar3 + param_2[1];
  if ((((2 < (longlong)param_2[1]) && (*pbVar3 == 0xef)) && (pbVar3[1] == 0xbb)) &&
     (pbVar3[2] == 0xbf)) {
    pbVar3 = pbVar3 + 3;
  }
  while (pbVar3 < pbVar1) {
    local_48[0] = (ushort)(char)*pbVar3;
    if ((char)*pbVar3 < '\0') {
      pbVar4 = pbVar3 + 1;
      if ((pbVar4 < pbVar1) && ((*pbVar3 & 0xe0) == 0xc0)) {
        bVar2 = *pbVar4;
        pbVar4 = pbVar3 + 2;
        local_48[0] = (ushort)(*pbVar3 & 0x1f) << 6 | (ushort)(bVar2 & 0x3f);
      }
      else if ((pbVar3 + 2 < pbVar1) && ((*pbVar3 & 0xf0) == 0xe0)) {
        bVar2 = *pbVar4;
        pbVar4 = pbVar3 + 3;
        local_48[0] = ((ushort)(bVar2 & 0x3f) | (short)(char)*pbVar3 << 6) << 6 |
                      (ushort)(pbVar3[2] & 0x3f);
      }
      else if ((pbVar3 + 3 < pbVar1) && ((*pbVar3 & 0xf8) == 0xf0)) {
        pbVar4 = pbVar3 + 4;
        local_48[0] = 0xfffd;
      }
      else {
        local_48[0] = 0xfffd;
      }
    }
    else {
      pbVar4 = pbVar3 + 1;
    }
    FUN_180261500(param_1,local_40,local_48);
    pbVar3 = pbVar4;
  }
  return;
}


