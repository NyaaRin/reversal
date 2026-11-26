// 0x180027030  FUN_180027030
// size=252 thunk=false
// signature: undefined FUN_180027030()
// status: ok


longlong FUN_180027030(undefined8 *param_1,byte *param_2,ulonglong param_3)

{
  byte *pbVar1;
  ulonglong uVar2;
  size_t sVar3;
  longlong lVar4;
  longlong lVar5;
  byte *pbVar6;
  char local_128 [256];
  
  sVar3 = strlen((char *)param_2);
  uVar2 = param_1[2];
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  if (param_3 < uVar2) {
    pbVar6 = (byte *)(param_3 + (longlong)param_1);
    if (sVar3 + (uVar2 - param_3) < 0x10) {
      memset(local_128,0,0x100);
      pbVar1 = param_2 + sVar3;
      for (; param_2 != pbVar1; param_2 = param_2 + 1) {
        local_128[*param_2] = '\x01';
      }
      for (; pbVar6 < (byte *)(uVar2 + (longlong)param_1); pbVar6 = pbVar6 + 1) {
        if (local_128[*pbVar6] == '\0') {
          return (longlong)pbVar6 - (longlong)param_1;
        }
      }
      lVar5 = -1;
    }
    else {
      lVar4 = FUN_1802d6fd0(pbVar6,uVar2 - param_3,param_2,sVar3);
      lVar5 = lVar4 + param_3;
      if (lVar4 == -1) {
        lVar5 = -1;
      }
    }
    return lVar5;
  }
  return -1;
}


