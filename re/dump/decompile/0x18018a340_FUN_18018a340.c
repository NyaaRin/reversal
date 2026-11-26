// 0x18018a340  FUN_18018a340
// size=368 thunk=false
// signature: undefined FUN_18018a340()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_18018a340(longlong *param_1)

{
  float fVar1;
  code *pcVar2;
  undefined4 uVar3;
  BOOL BVar4;
  longlong *plVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float extraout_XMM0_Da;
  float fVar9;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  float local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  local_28 = 0x93fd561a96ab0c67;
  local_38 = 0x3de1d4a1ddc4912e;
  plVar5 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_58,&local_28);
  plVar5 = (longlong *)FUN_180241a30(*plVar5 + 0x28,local_48,&local_38);
  pfVar6 = (float *)FUN_180202dc0(*plVar5 + 0x28);
  fVar1 = *pfVar6;
  if (0.0 < fVar1) {
    pcVar2 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar3 = (**(code **)(*DAT_1803fa668 + 0x60))();
    plVar5 = (longlong *)(*pcVar2)(DAT_1803fa360,uVar3);
    if ((plVar5 != (longlong *)0x0) && (param_1 != (longlong *)0x0)) {
      BVar4 = IsBadReadPtr(param_1,8);
      if (BVar4 == 0) {
        BVar4 = IsBadReadPtr((void *)*param_1,8);
        if (BVar4 == 0) {
          pfVar6 = (float *)(**(code **)(*plVar5 + 0x48))(plVar5);
          pfVar7 = (float *)(**(code **)(*param_1 + 0x48))(param_1);
          fVar9 = *pfVar6 - *pfVar7;
          fVar8 = pfVar6[1] - pfVar7[1];
          local_38 = CONCAT44(fVar8,fVar9);
          local_30 = pfVar6[2] - pfVar7[2];
          (*(code *)PTR_FUN_1803da018)(fVar8 * fVar8 + fVar9 * fVar9 + local_30 * local_30);
          return extraout_XMM0_Da <= fVar1;
        }
      }
    }
  }
  return true;
}


