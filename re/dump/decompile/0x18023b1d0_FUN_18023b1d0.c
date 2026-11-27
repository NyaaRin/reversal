// 0x18023b1d0  FUN_18023b1d0
// size=243 thunk=false
// signature: undefined FUN_18023b1d0()
// status: ok


void FUN_18023b1d0(undefined8 *param_1,undefined8 *param_2,char param_3)

{
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  
  puVar1 = (uint *)*param_2;
  puVar2 = (uint *)*param_1;
  bVar3 = (byte)param_1[1];
  if (puVar2 == puVar1) {
    if (param_1[1] != param_2[1]) {
      uVar5 = -1 << (bVar3 & 0x1f);
      uVar4 = 0xffffffff >> (0x20U - *(char *)(param_2 + 1) & 0x1f);
      *puVar2 = (~uVar4 | ~uVar5) & *puVar2 | -(uint)(param_3 != '\0') & uVar4 & uVar5;
      return;
    }
  }
  else {
    uVar4 = -1 << (bVar3 & 0x1f);
    *puVar2 = *puVar2 & ~uVar4 | -(uint)(param_3 != '\0') & uVar4;
    memset(puVar2 + 1,-(uint)(param_3 != '\0') & 0xff,(longlong)puVar1 - (longlong)(puVar2 + 1));
    if (param_2[1] != 0) {
      uVar4 = 0xffffffff >> (0x20U - (char)param_2[1] & 0x1f);
      *puVar1 = ~uVar4 & *puVar1 | -(uint)(param_3 != '\0') & uVar4;
    }
  }
  return;
}


