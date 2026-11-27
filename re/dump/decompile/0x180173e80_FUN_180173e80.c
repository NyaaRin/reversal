// 0x180173e80  FUN_180173e80
// size=682 thunk=false
// signature: undefined FUN_180173e80()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_180173e80(float *param_1,longlong *param_2,undefined8 param_3)

{
  float *pfVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60 [16];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  if (DAT_1803fcb80 == '\0') {
    *(undefined8 *)param_1 = param_3;
  }
  else {
    local_68 = param_3;
    local_50 = param_2;
    if ((DAT_1803fac7c == '\0') || (param_2 != DAT_1803fa5f8)) {
      if ((int)param_2[1] == 8) {
        plVar2 = (longlong *)FUN_180215a50(param_1,local_60,&local_50);
        *(undefined8 *)(*plVar2 + 0x18) = param_3;
        *(undefined8 *)param_1 = param_3;
      }
      else {
        uVar5 = ((((((((ulonglong)param_2 >> 8 & 0xff ^
                      ((ulonglong)param_2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3) *
                      0x100000001b3 ^ (ulonglong)param_2 >> 0x10 & 0xff) * 0x100000001b3 ^
                    (ulonglong)param_2 >> 0x18 & 0xff) * 0x100000001b3 ^
                   (ulonglong)param_2 >> 0x20 & 0xff) * 0x100000001b3 ^
                  (ulonglong)param_2 >> 0x28 & 0xff) * 0x100000001b3 ^
                 (ulonglong)param_2 >> 0x30 & 0xff) * 0x100000001b3 ^ (ulonglong)param_2 >> 0x38) *
                0x100000001b3 & DAT_1803fa890;
        lVar3 = *(longlong *)(DAT_1803fa878 + 8 + uVar5 * 0x10);
        lVar4 = DAT_1803fa878;
        if (lVar3 == DAT_1803fa868) {
LAB_180174045:
          lVar3 = 0;
        }
        else {
          lVar4 = *(longlong *)(DAT_1803fa878 + uVar5 * 0x10);
          plVar2 = *(longlong **)(lVar3 + 0x10);
          while (param_2 != plVar2) {
            if (lVar3 == lVar4) goto LAB_180174045;
            lVar3 = *(longlong *)(lVar3 + 8);
            plVar2 = *(longlong **)(lVar3 + 0x10);
          }
        }
        lVar6 = DAT_1803fa868;
        if (lVar3 != 0) {
          lVar6 = lVar3;
        }
        if (lVar6 == DAT_1803fa868) {
          plVar2 = (longlong *)FUN_180215a50(lVar4,local_60,&local_50);
          *(undefined8 *)(*plVar2 + 0x18) = param_3;
          *(undefined8 *)param_1 = param_3;
        }
        else {
          lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          if (*(char *)(lVar3 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          fVar9 = 0.0;
          fVar7 = *(float *)(*(longlong *)(lVar3 + 0xec0) + 0x40);
          if (0.0 < fVar7) {
            fVar9 = expf(fVar7 * _DAT_1803813f8);
            fVar9 = DAT_180380bb0 - fVar9;
          }
          fVar8 = ((float)param_3 - *(float *)(lVar6 + 0x18)) * fVar9 + *(float *)(lVar6 + 0x18);
          fVar7 = (local_68._4_4_ - *(float *)(lVar6 + 0x1c)) * fVar9 + *(float *)(lVar6 + 0x1c);
          *(float *)(lVar6 + 0x18) = fVar8;
          *(float *)(lVar6 + 0x1c) = fVar7;
          *param_1 = fVar8;
          param_1[1] = fVar7;
        }
      }
    }
    else {
      pfVar1 = (float *)(**(code **)(*param_2 + 0x10))(param_2,local_60);
      fVar9 = DAT_1803fb0e8 - *pfVar1 * DAT_180380ac0;
      fVar7 = DAT_1803fb0ec - pfVar1[1] * DAT_180380ac0;
      plVar2 = (longlong *)FUN_180215a50(pfVar1[1] * DAT_180380ac0,local_60,&local_50);
      lVar3 = *plVar2;
      *(float *)(lVar3 + 0x18) = fVar9;
      *(float *)(lVar3 + 0x1c) = fVar7;
      *param_1 = fVar9;
      param_1[1] = fVar7;
    }
  }
  return param_1;
}


