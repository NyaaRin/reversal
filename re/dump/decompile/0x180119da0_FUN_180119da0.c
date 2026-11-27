// 0x180119da0  FUN_180119da0
// size=794 thunk=false
// signature: undefined FUN_180119da0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180119da0(undefined8 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                  undefined8 param_6,undefined4 param_7)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  char *pcVar7;
  code *pcVar8;
  float fVar9;
  undefined1 auStack_108 [32];
  int local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [40];
  code *local_70;
  undefined8 local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_108;
  local_c0 = param_6;
  local_70 = (code *)0x0;
  local_c8 = param_3;
  cVar4 = FUN_180115420(param_1,local_98);
  pcVar8 = (code *)0x0;
  if (cVar4 != '\0') {
    pcVar8 = local_70;
  }
  if (pcVar8 == (code *)0x0) {
    return;
  }
  if (DAT_1803ff270 == '\0') goto LAB_18011a067;
  local_d0 = param_7;
  local_d8 = local_c0;
  local_e0 = CONCAT44(local_e0._4_4_,param_5);
  local_e8 = param_4;
  iVar5 = FUN_180119660(pcVar8,param_1,param_2,local_c8);
  if (iVar5 != 0) {
    return;
  }
  if (((longlong)param_4 * (longlong)param_5 < 0x1000) && ((param_4 < 0x200 || (param_5 < 4)))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  local_68 = 0x93fd561a96ab0c67;
  local_60 = 0x6c96c33ad11a014c;
  plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_b8,&local_68);
  plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_a8,&local_60);
  pcVar7 = (char *)FUN_1801fcfc0(*plVar6 + 0x28);
  if ((((*pcVar7 == '\0') || (DAT_1803fa668 == (longlong *)0x0)) ||
      (cVar4 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar4 == '\0')) ||
     (cVar4 = FUN_180116970(param_1), cVar4 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (((!bVar1) && (bVar2)) && (DAT_180425fb4 = DAT_180425fb4 + 1, DAT_180425fb4 < 4)) {
    FUN_180014410("[AntiSS] ReadPixels (%dx%d) too small for a screenshot -- ignored #%d\n",param_4,
                  param_5);
  }
  cVar4 = FUN_1801145d0();
  if (((cVar4 == '\0') || (cVar4 = FUN_180114710(), cVar4 == '\0')) ||
     (cVar4 = FUN_1801eb5c0(), cVar4 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((((bVar2) && (!bVar3)) && (bVar1)) &&
     (cVar4 = FUN_180071920(&DAT_1803e7484,"Pixel readback"), cVar4 != '\0')) {
    if (DAT_1803fa608 == (float *)0x0) {
      fVar9 = 0.0;
LAB_180119ff3:
      DAT_1804236ac = DAT_1804236ac + 1;
      PTR_s_Screen_capture_1803e90c8 = s_Pixel_readback_1803514d8;
      _DAT_1803e90d0 = fVar9;
    }
    else {
      fVar9 = *DAT_1803fa608;
      if ((fVar9 <= 0.0) || (DAT_180380db8 <= fVar9 - _DAT_1803e90d0)) goto LAB_180119ff3;
    }
    if (((DAT_1803fa608 != (float *)0x0) && (0.0 < *DAT_1803fa608)) &&
       (fVar9 = *DAT_1803fa608 + DAT_180380a88, DAT_18042363c <= fVar9)) {
      DAT_18042363c = fVar9;
    }
    DAT_1803feb00 = DAT_1803feb00 + 1;
    if (DAT_1803feb00 < 0xb) {
      FUN_180014410("[AntiSS] ReadPixels (%dx%d): clean tail\n",param_4,param_5);
    }
  }
LAB_18011a067:
  local_d8 = CONCAT44(local_d8._4_4_,param_7);
  local_e0 = local_c0;
  local_e8 = param_5;
  (*pcVar8)(param_1,param_2,local_c8,param_4);
  return;
}


