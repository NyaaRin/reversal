// 0x1801717e0  FUN_1801717e0
// size=480 thunk=false
// signature: undefined FUN_1801717e0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float FUN_1801717e0(int param_1)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  float local_64;
  ulonglong local_60;
  
  plVar4 = DAT_1803fb108;
  fVar3 = DAT_180380bb0;
  fVar2 = DAT_180380b3c;
  fVar9 = DAT_180380a38;
  local_60 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  if ((param_1 - 2U < 2) || (param_1 - 9U < 4)) {
    fVar11 = 0.0;
    for (plVar7 = DAT_1803fb100; plVar7 != plVar4; plVar7 = plVar7 + 1) {
      plVar1 = (longlong *)*plVar7;
      if ((*(char *)((longlong)plVar1 + 0x14) != '\0') &&
         (((DAT_1803fcb80 != '\0' ||
           (((DAT_1803fcb81 == '\0' || (*(char *)((longlong)plVar1 + 0x16) != '\0')) &&
            ((*(char *)((longlong)plVar1 + 0x15) == '\0' ||
             (DAT_1803fcb68 <= *(float *)(plVar1 + 3))))))) &&
          ((((cVar5 = (**(code **)(*plVar1 + 0x38))(plVar1), cVar5 != '\0' &&
             ((int)plVar1[1] == param_1)) &&
            (iVar6 = (**(code **)(*plVar1 + 8))(plVar1), iVar6 != 4)) && (iVar6 != 7)))))) {
        (**(code **)(*plVar1 + 0x10))(plVar1,local_68);
        fVar8 = fVar3;
        if (((DAT_1803fcb80 == '\0') &&
            (fVar10 = DAT_1803fcb6c * fVar9 + fVar2, fVar8 = fVar2, fVar2 <= fVar10)) &&
           (fVar8 = fVar3, fVar10 <= fVar3)) {
          fVar8 = fVar10;
        }
        fVar11 = fVar11 + fVar8 + fVar8 + local_64;
      }
    }
    fVar8 = fVar3;
    if (((DAT_1803fcb80 == '\0') &&
        (fVar9 = DAT_1803fcb6c * fVar9 + fVar2, fVar8 = fVar2, fVar2 <= fVar9)) &&
       (fVar8 = fVar3, fVar9 <= fVar3)) {
      fVar8 = fVar9;
    }
    fVar11 = fVar11 - (fVar8 + fVar8);
    fVar9 = 0.0;
    if (0.0 <= fVar11) {
      fVar9 = fVar11;
    }
  }
  else {
    fVar9 = 0.0;
  }
  return fVar9;
}


