// 0x1802990c0  FUN_1802990c0
// size=182 thunk=false
// signature: undefined FUN_1802990c0()
// status: ok


undefined8 FUN_1802990c0(longlong param_1,undefined8 param_2,ushort *param_3)

{
  float fVar1;
  ushort uVar2;
  ushort uVar3;
  ushort *puVar4;
  
  puVar4 = (ushort *)FUN_18029c780();
  if (puVar4 == (ushort *)0x0) {
    return 0;
  }
  if (param_3 != (ushort *)0x0) {
    *param_3 = *puVar4;
    param_3[1] = puVar4[1];
    param_3[2] = puVar4[2];
    param_3[3] = puVar4[3];
    uVar2 = *puVar4;
    fVar1 = *(float *)(param_1 + 0x54);
    *(float *)(param_3 + 6) = (float)puVar4[1] * *(float *)(param_1 + 0x58);
    *(float *)(param_3 + 4) = (float)uVar2 * fVar1;
    uVar2 = *puVar4;
    uVar3 = puVar4[2];
    fVar1 = *(float *)(param_1 + 0x54);
    *(float *)(param_3 + 10) =
         (float)((uint)puVar4[3] + (uint)puVar4[1]) * *(float *)(param_1 + 0x58);
    *(float *)(param_3 + 8) = (float)((uint)uVar3 + (uint)uVar2) * fVar1;
  }
  return 1;
}


