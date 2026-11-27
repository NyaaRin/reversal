// 0x1800ce2c0  FUN_1800ce2c0
// size=170 thunk=false
// signature: undefined FUN_1800ce2c0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float FUN_1800ce2c0(void)

{
  float fVar1;
  short sVar2;
  longlong *plVar3;
  float *pfVar4;
  float fVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  local_38 = 0xf7521f28977a3033;
  local_30 = 0xfb3877511c4b6892;
  plVar3 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_58,&local_38);
  plVar3 = (longlong *)FUN_180241a30(*plVar3 + 0x28,local_48,&local_30);
  pfVar4 = (float *)FUN_180202dc0(*plVar3 + 0x28);
  fVar1 = *pfVar4;
  sVar2 = _fdclass(fVar1);
  fVar5 = 0.0;
  if (((sVar2 < 1) && (0.0 < fVar1)) && (fVar5 = DAT_180381188, fVar1 <= DAT_180381188)) {
    fVar5 = fVar1;
  }
  return fVar5;
}


