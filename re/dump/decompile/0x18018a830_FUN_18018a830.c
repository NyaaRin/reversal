// 0x18018a830  FUN_18018a830
// size=174 thunk=false
// signature: undefined FUN_18018a830()
// status: ok


float * FUN_18018a830(float *param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  BOOL BVar4;
  float *pfVar5;
  undefined1 local_18 [16];
  
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  if (((param_2 != (longlong *)0x0) && (BVar4 = IsBadReadPtr(param_2,8), BVar4 == 0)) &&
     (BVar4 = IsBadReadPtr((void *)*param_2,8), BVar4 == 0)) {
    pfVar5 = (float *)(**(code **)(*param_2 + 0x48))(param_2);
    fVar1 = *pfVar5;
    *param_1 = fVar1;
    fVar2 = pfVar5[1];
    param_1[1] = fVar2;
    fVar3 = pfVar5[2];
    param_1[2] = fVar3;
    if (((fVar1 == 0.0) && (fVar2 == 0.0)) && (fVar3 == 0.0)) {
      pfVar5 = (float *)FUN_18001daf0(param_2,local_18);
      *param_1 = *pfVar5;
      param_1[1] = pfVar5[1];
      param_1[2] = pfVar5[2];
    }
  }
  return param_1;
}


