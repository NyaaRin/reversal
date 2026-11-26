// 0x1800c6350  FUN_1800c6350
// size=347 thunk=false
// signature: undefined FUN_1800c6350()
// status: ok


void FUN_1800c6350(float *param_1)

{
  undefined8 uVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14 [3];
  
  *param_1 = 1.0;
  param_1[1] = 0.86;
  param_1[2] = 0.18;
  local_24 = 1.0;
  local_28 = 0.0;
  uVar1 = FUN_180241610(&DAT_1803fadf0,0x13806d9e35de0023);
  uVar1 = FUN_180241610(uVar1,0xe092ff67ce3c617e);
  pfVar2 = (float *)FUN_180202dc0(uVar1);
  pfVar4 = &local_28;
  if (local_28 <= *pfVar2) {
    pfVar4 = pfVar2;
  }
  pfVar3 = &local_24;
  if (*pfVar2 <= local_24) {
    pfVar3 = pfVar4;
  }
  *param_1 = *pfVar3;
  local_1c = 1.0;
  local_20 = 0.0;
  uVar1 = FUN_180241610(&DAT_1803fadf0,0x13806d9e35de0023);
  uVar1 = FUN_180241610(uVar1,0xe0931467ce3c852d);
  pfVar2 = (float *)FUN_180202dc0(uVar1);
  pfVar4 = &local_20;
  if (local_20 <= *pfVar2) {
    pfVar4 = pfVar2;
  }
  pfVar3 = &local_1c;
  if (*pfVar2 <= local_1c) {
    pfVar3 = pfVar4;
  }
  param_1[1] = *pfVar3;
  local_14[0] = 1.0;
  local_18 = 0.0;
  uVar1 = FUN_180241610(&DAT_1803fadf0,0x13806d9e35de0023);
  uVar1 = FUN_180241610(uVar1,0xe0930f67ce3c7cae);
  pfVar2 = (float *)FUN_180202dc0(uVar1);
  pfVar4 = &local_18;
  if (local_18 <= *pfVar2) {
    pfVar4 = pfVar2;
  }
  pfVar3 = local_14;
  if (*pfVar2 <= local_14[0]) {
    pfVar3 = pfVar4;
  }
  param_1[2] = *pfVar3;
  return;
}


