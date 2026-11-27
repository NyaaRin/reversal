// 0x1800acfc0  FUN_1800acfc0
// size=82 thunk=false
// signature: undefined FUN_1800acfc0()
// status: ok


float FUN_1800acfc0(void)

{
  undefined8 uVar1;
  float *pfVar2;
  float fVar3;
  
  uVar1 = FUN_180241610(&DAT_1803fadf0,0xf7521f28977a3033);
  uVar1 = FUN_180241610(uVar1,0xef946101541b4e0d);
  pfVar2 = (float *)FUN_180202dc0(uVar1);
  fVar3 = *pfVar2;
  if (fVar3 < 0.0) {
    fVar3 = 0.0;
  }
  return fVar3;
}


