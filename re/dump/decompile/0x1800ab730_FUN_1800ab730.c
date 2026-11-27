// 0x1800ab730  FUN_1800ab730
// size=82 thunk=false
// signature: undefined FUN_1800ab730()
// status: ok


float FUN_1800ab730(void)

{
  undefined8 uVar1;
  float *pfVar2;
  float fVar3;
  
  uVar1 = FUN_180241610(&DAT_1803fadf0,0x93fd561a96ab0c67);
  uVar1 = FUN_180241610(uVar1,0xa6fe116c060e2773);
  pfVar2 = (float *)FUN_180202dc0(uVar1);
  fVar3 = *pfVar2;
  if (fVar3 < 0.0) {
    fVar3 = 0.0;
  }
  return fVar3;
}


