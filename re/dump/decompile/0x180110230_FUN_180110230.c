// 0x180110230  FUN_180110230
// size=226 thunk=false
// signature: undefined FUN_180110230()
// status: ok


undefined8 FUN_180110230(longlong param_1,int param_2,float param_3,float *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  
  puVar3 = (undefined4 *)((longlong)param_2 * 0x20 + *(longlong *)(param_1 + 8));
  fVar4 = (float)puVar3[7];
  if ((float)puVar3[7] <= 0.0) {
    fVar4 = DAT_180380c50;
  }
  fVar5 = 0.0;
  if (0.0 <= param_3 - (float)puVar3[6]) {
    fVar5 = param_3 - (float)puVar3[6];
  }
  if (fVar4 <= fVar5) {
    puVar1 = *(undefined4 **)(param_1 + 0x10);
    puVar2 = puVar3;
    while (puVar3 = puVar3 + 8, puVar3 != puVar1) {
      *puVar2 = *puVar3;
      puVar2[1] = puVar3[1];
      puVar2[2] = puVar3[2];
      puVar2[3] = puVar3[3];
      puVar2[4] = puVar3[4];
      puVar2[5] = puVar3[5];
      puVar2[6] = puVar3[6];
      puVar2[7] = puVar3[7];
      puVar2 = puVar2 + 8;
    }
    *(undefined4 **)(param_1 + 0x10) = puVar1 + -8;
    return 0;
  }
  *param_4 = 1.0;
  if ((DAT_180380ad4 < fVar5 / fVar4) &&
     (fVar4 = DAT_180380bb0 - (fVar5 / fVar4 - DAT_180380ad4) / DAT_180380ab0, *param_4 = fVar4,
     fVar4 < 0.0)) {
    *param_4 = 0.0;
  }
  return 1;
}


