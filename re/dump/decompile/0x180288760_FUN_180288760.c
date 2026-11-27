// 0x180288760  FUN_180288760
// size=157 thunk=false
// signature: undefined FUN_180288760()
// status: ok


void FUN_180288760(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint *puVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar6 = 0xffffffff;
  uVar5 = 0xffffffff;
  bVar1 = *param_3;
  pbVar2 = param_3;
  while (bVar1 != 0) {
    pbVar3 = pbVar2 + 1;
    if (((bVar1 == 0x23) && (*pbVar3 == 0x23)) && (pbVar2[2] == 0x23)) {
      uVar6 = 0xffffffff;
      pbVar3 = pbVar2 + 3;
    }
    else {
      uVar6 = (ulonglong)
              ((uint)(uVar6 >> 8) ^
              *(uint *)(&DAT_180331380 + (uVar6 & 0xff ^ (ulonglong)bVar1) * 4));
    }
    uVar5 = (uint)uVar6;
    pbVar2 = pbVar3;
    bVar1 = *pbVar3;
  }
  uVar5 = ~uVar5;
  puVar4 = (uint *)FUN_180288660(uVar5);
  if (puVar4 != (uint *)0x0) {
    puVar4[0] = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = uVar5;
    *(undefined1 *)((longlong)puVar4 + 0xe) = 1;
    return;
  }
  puVar4 = (uint *)FUN_180288560(param_3);
  *puVar4 = uVar5;
  *(undefined1 *)((longlong)puVar4 + 0xe) = 1;
  return;
}


