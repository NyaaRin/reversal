// 0x1800d2a70  FUN_1800d2a70
// size=389 thunk=false
// signature: undefined FUN_1800d2a70()
// status: ok


void FUN_1800d2a70(longlong param_1,char param_2)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float local_38;
  float local_34;
  float local_30;
  float local_2c [9];
  
  if ((DAT_180425f90 == 0) && (DAT_1803fa340 != 0)) {
    DAT_180425f90 = FUN_180016fb0("cl_forwardspeed");
  }
  if ((DAT_1804260f0 == 0) && (DAT_1803fa340 != 0)) {
    DAT_1804260f0 = FUN_180016fb0("cl_sidespeed");
  }
  fVar7 = DAT_1803812ac;
  fVar6 = DAT_1803812ac;
  if (DAT_180425f90 != 0) {
    fVar6 = (float)FUN_180019700();
  }
  local_34 = fVar6;
  if (DAT_1804260f0 != 0) {
    fVar7 = (float)FUN_180019700(DAT_1804260f0);
  }
  local_2c[0] = fVar7;
  if (param_2 != '\0') {
    FUN_1800c4400(param_1);
  }
  local_38 = (float)((uint)fVar6 ^ DAT_1803817f0);
  local_30 = (float)((uint)fVar7 ^ DAT_1803817f0);
  pfVar5 = &local_38;
  if ((float)((uint)fVar6 ^ DAT_1803817f0) <= *(float *)(param_1 + 0x14)) {
    pfVar5 = (float *)(param_1 + 0x14);
  }
  pfVar2 = &local_34;
  if (*(float *)(param_1 + 0x14) <= fVar6) {
    pfVar2 = pfVar5;
  }
  fVar6 = *pfVar2;
  *(float *)(param_1 + 0x14) = fVar6;
  pfVar5 = (float *)(param_1 + 0x18);
  pfVar2 = &local_30;
  if (local_30 <= *pfVar5) {
    pfVar2 = pfVar5;
  }
  pfVar3 = local_2c;
  if (*pfVar5 <= fVar7) {
    pfVar3 = pfVar2;
  }
  fVar7 = *pfVar3;
  *pfVar5 = fVar7;
  uVar1 = *(uint *)(param_1 + 0x20);
  if (fVar7 <= 0.0) {
    uVar4 = uVar1 & 0xfffff9ff;
    if (fVar7 < 0.0) {
      uVar4 = uVar1 & 0xfffffbff;
    }
  }
  else {
    uVar4 = uVar1 & 0xfffffdff;
  }
  if (fVar6 <= 0.0) {
    uVar1 = uVar4 & 0xffffffe7;
    if (fVar6 < 0.0) {
      uVar1 = uVar4 & 0xfffffff7;
    }
    *(uint *)(param_1 + 0x20) = uVar1;
  }
  else {
    *(uint *)(param_1 + 0x20) = uVar4 & 0xffffffef;
  }
  return;
}


