// 0x1800c76d0  FUN_1800c76d0
// size=198 thunk=false
// signature: undefined FUN_1800c76d0()
// status: ok


bool FUN_1800c76d0(longlong *param_1,undefined8 *param_2)

{
  float *pfVar1;
  float extraout_XMM0_Da;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 local_4c [68];
  
  pfVar1 = (float *)(**(code **)(*param_1 + 0x48))();
  fVar2 = *pfVar1;
  fVar4 = pfVar1[1];
  fVar3 = pfVar1[2];
  pfVar1 = (float *)FUN_18001daf0(param_1,local_4c);
  fVar2 = fVar2 - *pfVar1;
  fVar4 = fVar4 - pfVar1[1];
  fVar3 = fVar3 - pfVar1[2];
  *param_2 = CONCAT44(fVar4,fVar2);
  *(float *)(param_2 + 1) = fVar3;
  (*(code *)PTR_FUN_1803da018)(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3);
  return extraout_XMM0_Da < DAT_1803811cc;
}


