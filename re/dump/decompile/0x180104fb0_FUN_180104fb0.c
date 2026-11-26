// 0x180104fb0  FUN_180104fb0
// size=287 thunk=false
// signature: undefined FUN_180104fb0()
// status: ok


void FUN_180104fb0(undefined8 param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  longlong lVar8;
  undefined1 local_38 [48];
  
  pfVar7 = (float *)FUN_18001f9d0(param_1,local_38);
  fVar1 = *pfVar7;
  lVar8 = FUN_18001f9d0(param_1,local_38);
  fVar2 = *(float *)(lVar8 + 4);
  lVar8 = FUN_18001f9d0(param_1,local_38);
  fVar3 = *(float *)(lVar8 + 8);
  if (((((fVar1 != 0.0) || (fVar2 != 0.0)) || (fVar3 != 0.0)) &&
      (((DAT_18038144c < fVar1 && (fVar1 < DAT_1803812fc)) &&
       ((DAT_18038144c < fVar2 && ((fVar2 < DAT_1803812fc && (DAT_18038144c < fVar3)))))))) &&
     ((fVar3 < DAT_1803812fc &&
      (((((fVar4 = *(float *)(param_2 + 0x4c), DAT_18038144c < fVar4 && (fVar4 < DAT_1803812fc)) &&
         (fVar5 = *(float *)(param_2 + 0x50), DAT_18038144c < fVar5)) &&
        ((fVar5 < DAT_1803812fc && (fVar6 = *(float *)(param_2 + 0x54), DAT_18038144c < fVar6)))) &&
       (fVar6 < DAT_1803812fc)))))) {
    *(float *)(param_2 + 0x4c) = fVar4 - fVar1;
    *(float *)(param_2 + 0x50) = fVar5 - fVar2;
    *(float *)(param_2 + 0x54) = fVar6 - fVar3;
  }
  return;
}


