// 0x1800beeb0  FUN_1800beeb0
// size=341 thunk=false
// signature: undefined FUN_1800beeb0()
// status: ok


void FUN_1800beeb0(float *param_1)

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
  float local_14;
  float *local_10;
  
  if (param_1 != (float *)0x0) {
    local_24 = 1.0;
    local_28 = 0.0;
    local_10 = param_1;
    uVar1 = FUN_180241610(&DAT_1803fadf0,0x2d8f695138585a77);
    uVar1 = FUN_180241610(uVar1,0xef633722fde02243);
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
    uVar1 = FUN_180241610(&DAT_1803fadf0,0x2d8f695138585a77);
    uVar1 = FUN_180241610(uVar1,0xef632a22fde00c2c);
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
    local_14 = 1.0;
    local_18 = 0.0;
    uVar1 = FUN_180241610(&DAT_1803fadf0,0x2d8f695138585a77);
    uVar1 = FUN_180241610(uVar1,0xef632722fde00713);
    pfVar2 = (float *)FUN_180202dc0(uVar1);
    pfVar4 = &local_18;
    if (local_18 <= *pfVar2) {
      pfVar4 = pfVar2;
    }
    pfVar3 = &local_14;
    if (*pfVar2 <= local_14) {
      pfVar3 = pfVar4;
    }
    param_1[2] = *pfVar3;
  }
  return;
}


