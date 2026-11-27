// 0x180268360  FUN_180268360
// size=273 thunk=false
// signature: undefined FUN_180268360()
// status: ok


undefined1 FUN_180268360(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  undefined1 uVar10;
  
  fVar1 = param_2[1];
  fVar2 = *param_2;
  fVar3 = param_3[1];
  fVar4 = *param_3;
  fVar5 = *param_4;
  fVar6 = param_4[1];
  fVar7 = *param_1;
  fVar8 = param_1[1];
  bVar9 = (fVar5 - fVar4) * (fVar1 - fVar3) - (fVar2 - fVar4) * (fVar6 - fVar3) < 0.0;
  if (((fVar5 - fVar2) * (fVar8 - fVar1) - (fVar7 - fVar2) * (fVar6 - fVar1) < 0.0 == bVar9) &&
     (bVar9 == (fVar3 - fVar8) * (fVar5 - fVar7) - (fVar4 - fVar7) * (fVar6 - fVar8) < 0.0)) {
    uVar10 = 1;
  }
  else {
    uVar10 = 0;
  }
  return uVar10;
}


