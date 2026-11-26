// 0x1802c3ed0  FUN_1802c3ed0
// size=197 thunk=false
// signature: undefined FUN_1802c3ed0()
// status: ok


float FUN_1802c3ed0(uint *param_1,float param_2,float param_3,float param_4,float param_5)

{
  ushort uVar1;
  uint uVar2;
  ushort uVar3;
  short sVar4;
  ushort uVar5;
  ushort uVar6;
  bool bVar7;
  
  uVar3 = (ushort)(int)param_2;
  if ((ushort)(int)param_2 <= *(ushort *)((longlong)param_1 + 0x12)) {
    uVar3 = *(ushort *)((longlong)param_1 + 0x12);
  }
  *(ushort *)((longlong)param_1 + 0x12) = uVar3;
  uVar5 = (ushort)(int)param_3;
  if ((ushort)(int)param_3 <= (ushort)param_1[5]) {
    uVar5 = (ushort)param_1[5];
  }
  *(ushort *)(param_1 + 5) = uVar5;
  uVar6 = (ushort)(int)param_4;
  if ((ushort)(int)param_4 <= *(ushort *)((longlong)param_1 + 0x16)) {
    uVar6 = *(ushort *)((longlong)param_1 + 0x16);
  }
  *(ushort *)((longlong)param_1 + 0x16) = uVar6;
  uVar1 = (ushort)(int)param_5;
  if ((ushort)(int)param_5 <= (ushort)param_1[6]) {
    uVar1 = (ushort)param_1[6];
  }
  bVar7 = uVar3 != 0;
  *(ushort *)(param_1 + 6) = uVar1;
  if ((uVar3 != 0) && (uVar5 != 0)) {
    uVar3 = uVar3 + (short)param_1[2];
  }
  sVar4 = uVar3 + uVar5;
  if ((uVar5 != 0 || bVar7) && (uVar6 != 0)) {
    sVar4 = sVar4 + (short)param_1[2];
  }
  sVar4 = sVar4 + uVar6;
  if ((uVar6 != 0 || (uVar5 != 0 || bVar7)) && (uVar1 != 0)) {
    sVar4 = sVar4 + (short)param_1[2];
  }
  uVar1 = uVar1 + sVar4;
  param_1[1] = (uint)uVar1;
  uVar2 = (uint)uVar1;
  if ((uint)uVar1 <= *param_1) {
    uVar2 = *param_1;
  }
  return (float)uVar2;
}


