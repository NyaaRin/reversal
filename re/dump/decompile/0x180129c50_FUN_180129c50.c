// 0x180129c50  FUN_180129c50
// size=245 thunk=false
// signature: undefined FUN_180129c50()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float FUN_180129c50(void)

{
  float fVar1;
  longlong *plVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  undefined1 auStack_78 [32];
  float local_58;
  float local_54;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  fVar1 = DAT_1803809ec;
  local_20 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  if ((DAT_180409880 != '\0') && (DAT_1803e7cf0 == 3)) {
    local_30 = 0x93fd561a96ab0c67;
    local_54 = 1.0;
    local_28 = 0x2b9f64e127f850a9;
    local_58 = 0.1;
    plVar2 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_50,&local_30);
    plVar2 = (longlong *)FUN_180241a30(*plVar2 + 0x28,local_40,&local_28);
    pfVar3 = (float *)FUN_180202dc0(*plVar2 + 0x28);
    pfVar5 = &local_58;
    if (fVar1 <= *pfVar3) {
      pfVar5 = pfVar3;
    }
    pfVar4 = &local_54;
    if (*pfVar3 <= DAT_180380bb0) {
      pfVar4 = pfVar5;
    }
    return *pfVar4;
  }
  return DAT_180380bb0;
}


