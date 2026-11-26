// 0x18024efc0  FUN_18024efc0
// size=937 thunk=false
// signature: undefined FUN_18024efc0()
// status: ok


void FUN_18024efc0(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulonglong local_68;
  ulonglong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  fVar8 = DAT_180381384;
  fVar7 = DAT_180381384;
  if (*(longlong *)(param_1 + 0x578) != -1) {
    if ((*(longlong *)(param_1 + 0x518) == 0) && (*(longlong *)(param_1 + 0x528) == 0)) {
      uVar4 = *(longlong *)(param_1 + 0x210) - 1;
      fVar5 = ceilf(*(float *)(param_1 + 0x500) / *(float *)(param_1 + 0x4dc));
      fVar7 = DAT_180381300;
      lVar3 = 0;
      if ((DAT_180381300 <= fVar5) && (fVar5 = fVar5 - DAT_180381300, fVar5 < DAT_180381300)) {
        lVar3 = -0x8000000000000000;
      }
      uVar2 = (longlong)fVar5 + lVar3;
      if (uVar4 < (ulonglong)((longlong)fVar5 + lVar3)) {
        uVar2 = uVar4;
      }
      *(ulonglong *)(param_1 + 0x518) = uVar2;
      fVar5 = ceilf(*(float *)(param_1 + 0x4fc) / *(float *)(param_1 + 0x4d8));
      lVar3 = 0;
      if ((fVar7 <= fVar5) && (fVar5 = fVar5 - fVar7, fVar5 < fVar7)) {
        lVar3 = -0x8000000000000000;
      }
      *(longlong *)(param_1 + 0x528) = (longlong)fVar5 + lVar3;
    }
    local_58 = *(undefined4 *)(param_1 + 0x578);
    uStack_54 = *(undefined4 *)(param_1 + 0x57c);
    uStack_50 = *(undefined4 *)(param_1 + 0x580);
    uStack_4c = *(undefined4 *)(param_1 + 0x584);
    FUN_18025dda0(param_1 + 0x1d8,&local_68,param_1 + 0x50,&local_58);
    if (*(longlong *)(param_1 + 0x510) + 1U < local_68) {
      fVar7 = fVar8;
      if (*(longlong *)(param_1 + 0x518) - 1U <= local_68) {
        fVar7 = ((float)local_68 + DAT_180380d30) * *(float *)(param_1 + 0x4dc) -
                *(float *)(param_1 + 0x500);
        goto LAB_18024f18f;
      }
    }
    else {
      if ((longlong)local_68 < 0) {
        fVar7 = ((float)local_68 - DAT_180380d30) * *(float *)(param_1 + 0x4dc);
      }
      else {
        fVar7 = ((float)(longlong)local_68 - DAT_180380d30) * *(float *)(param_1 + 0x4dc);
      }
LAB_18024f18f:
      if (fVar7 <= 0.0) {
        fVar7 = 0.0;
      }
    }
    if (*(longlong *)(param_1 + 0x520) + 1U < local_60) {
      if (*(longlong *)(param_1 + 0x528) - 1U <= local_60) {
        fVar8 = ((float)local_60 + DAT_180380d30) * *(float *)(param_1 + 0x4d8) -
                *(float *)(param_1 + 0x4fc);
        goto LAB_18024f22d;
      }
    }
    else {
      if ((longlong)local_60 < 0) {
        fVar8 = ((float)local_60 - DAT_180380d30) * *(float *)(param_1 + 0x4d8);
      }
      else {
        fVar8 = ((float)(longlong)local_60 - DAT_180380d30) * *(float *)(param_1 + 0x4d8);
      }
LAB_18024f22d:
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
    }
    *(undefined8 *)(param_1 + 0x578) = 0xffffffffffffffff;
  }
  if (*(ulonglong *)(param_1 + 0x568) == 0xffffffffffffffff) {
    if (fVar8 < 0.0) goto LAB_18024f32b;
  }
  else {
    local_60 = 0;
    local_68 = *(ulonglong *)(param_1 + 0x568);
    FUN_18025dda0(param_1 + 0x1d8,&local_58,param_1 + 0x50,&local_68);
    fVar5 = *(float *)(param_1 + 0x4dc);
    fVar8 = 0.0;
    iVar1 = *(int *)(param_1 + 0x570);
    fVar6 = *(float *)(param_1 + 0x500) / fVar5;
    if (iVar1 == 0) {
      fVar7 = ((float)CONCAT44(uStack_54,local_58) + *(float *)(param_1 + 0x574)) * fVar5;
LAB_18024f310:
      *(undefined8 *)(param_1 + 0x568) = 0xffffffffffffffff;
    }
    else {
      if (iVar1 == 1) {
        fVar6 = fVar6 * DAT_180380ac0;
      }
      else {
        if (iVar1 != 2) goto LAB_18024f310;
        fVar6 = fVar6 - DAT_180380bb0;
      }
      *(undefined8 *)(param_1 + 0x568) = 0xffffffffffffffff;
      fVar7 = ((float)CONCAT44(uStack_54,local_58) - fVar6) * fVar5;
      if (fVar7 <= 0.0) {
        fVar7 = 0.0;
      }
    }
  }
  FUN_1802808e0(fVar8);
LAB_18024f32b:
  if (0.0 <= fVar7) {
    FUN_180280950(fVar7);
  }
  return;
}


