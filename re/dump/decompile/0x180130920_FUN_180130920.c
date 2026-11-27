// 0x180130920  FUN_180130920
// size=546 thunk=false
// signature: undefined FUN_180130920()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180130920(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong *plVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  undefined1 auStack_a8 [32];
  float local_88;
  float local_84;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  fVar8 = (float)FUN_180129c50();
  local_84 = 1.0;
  local_58 = 0xbbd46f0aa9aa58e5;
  local_88 = 0.0;
  local_60 = 0x93fd561a96ab0c67;
  plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_80,&local_60);
  plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_70,&local_58);
  pfVar5 = (float *)FUN_180202dc0(*plVar4 + 0x28);
  local_58 = 0x93fd561a96ab0c67;
  pfVar7 = &local_88;
  if (0.0 <= *pfVar5) {
    pfVar7 = pfVar5;
  }
  pfVar6 = &local_84;
  if (*pfVar5 <= DAT_180380bb0) {
    pfVar6 = pfVar7;
  }
  fVar1 = *pfVar6;
  local_60 = 0xbbd47a0aa9aa6b96;
  local_88 = 1.0;
  local_84 = 0.0;
  plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_70,&local_58);
  plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_80,&local_60);
  pfVar5 = (float *)FUN_180202dc0(*plVar4 + 0x28);
  local_58 = 0x93fd561a96ab0c67;
  pfVar7 = &local_84;
  if (0.0 <= *pfVar5) {
    pfVar7 = pfVar5;
  }
  pfVar6 = &local_88;
  if (*pfVar5 <= DAT_180380bb0) {
    pfVar6 = pfVar7;
  }
  fVar2 = *pfVar6;
  local_60 = 0xbbd47f0aa9aa7415;
  local_88 = 1.0;
  local_84 = 0.0;
  plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_70,&local_58);
  plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_80,&local_60);
  pfVar5 = (float *)FUN_180202dc0(*plVar4 + 0x28);
  pfVar7 = &local_84;
  if (0.0 <= *pfVar5) {
    pfVar7 = pfVar5;
  }
  pfVar6 = &local_88;
  if (*pfVar5 <= DAT_180380bb0) {
    pfVar6 = pfVar7;
  }
  fVar3 = *pfVar6;
  FUN_180130390(fVar8 * fVar1,fVar8 * fVar2,fVar8 * fVar3,0);
  _DAT_1803e7b50 = fVar8 * fVar1;
  _DAT_1803e7b54 = fVar8 * fVar2;
  _DAT_1803e7b58 = fVar8 * fVar3;
  DAT_180401593 = 1;
  DAT_180401590 = 1;
  return;
}


