// 0x180246f90  FUN_180246f90
// size=900 thunk=false
// signature: undefined FUN_180246f90()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180246f90(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  float fVar4;
  float _Y;
  ulonglong uVar5;
  ulonglong uVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  undefined8 local_b8;
  longlong local_a8;
  undefined8 local_a0;
  ulonglong local_98;
  ulonglong local_90;
  undefined8 local_88;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  char local_70;
  undefined4 local_6c;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_1803da4c0 ^ (ulonglong)auStack_f8;
  if ((*(char *)(param_1 + 0x12) != '\0') && (cVar7 = FUN_1802822b0(0), cVar7 != '\0')) {
    lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar8 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    cVar7 = *(char *)(lVar8 + 0x10);
    lVar1 = *(longlong *)(lVar8 + 0xec0);
    *(float *)(param_1 + 0x560) = *(float *)(lVar1 + 0x40) + *(float *)(param_1 + 0x560);
    if (cVar7 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar8 = *(longlong *)(lVar8 + 0xec0);
    lVar9 = 0;
    *(undefined1 *)(*(longlong *)(lVar8 + 0x1520) + 0xce) = 1;
    _Y = DAT_180380bf0;
    fVar4 = DAT_180380b3c;
    lVar2 = *(longlong *)(param_1 + 0xf8);
    local_b8 = *(undefined8 *)(*(longlong *)(lVar8 + 0x1520) + 0x2c8);
    for (lVar8 = *(longlong *)(param_1 + 0xf0); lVar8 != lVar2; lVar8 = lVar8 + 0x30) {
      local_a8 = *(longlong *)(lVar8 + 0x10);
      local_a0 = *(undefined8 *)(lVar8 + 0x18);
      if ((((*(char *)(local_a8 * 0x60 + 0x22 + *(longlong *)(param_1 + 0x50)) != '\x03') &&
           (FUN_18025dda0(param_1 + 0x1d8,&local_98,param_1 + 0x50,&local_a8), uVar6 = local_90,
           uVar5 = local_98, *(ulonglong *)(param_1 + 0x510) <= local_98)) &&
          (local_98 <= *(ulonglong *)(param_1 + 0x518))) &&
         ((*(ulonglong *)(param_1 + 0x520) <= local_90 &&
          (local_90 <= *(ulonglong *)(param_1 + 0x528))))) {
        if ((*(char *)(lVar1 + 0x7b) == '\0') ||
           ((*(float *)(param_1 + 0x560) <= 0.0 ||
            (fVar10 = fmodf(*(float *)(param_1 + 0x560),_Y), fVar10 <= fVar4)))) {
          cVar7 = '\x01';
        }
        else {
          cVar7 = '\0';
        }
        fVar10 = *(float *)(param_1 + 0x4dc);
        fVar12 = *(float *)(param_1 + 0x4f0) + *(float *)(param_1 + 0x4b8) +
                 (float)uVar6 * *(float *)(param_1 + 0x4d8);
        plVar3 = *(longlong **)(param_1 + 0x610);
        fVar11 = (float)uVar5 * fVar10 + *(float *)(param_1 + 0x4bc);
        if (plVar3 == (longlong *)0x0) {
          if (cVar7 != '\0') {
            local_c0 = fVar12 - *(float *)(param_1 + 0x4b4);
            local_c4 = fVar11 + fVar10;
            local_d0 = 0;
            local_d8 = 0;
            local_c8 = fVar12;
            local_bc = fVar11;
            FUN_180295000(local_b8,&local_c0,&local_c8,*(undefined4 *)(param_1 + 0x944));
          }
        }
        else {
          local_88 = local_b8;
          local_6c = *(undefined4 *)(param_1 + 0x944);
          local_80 = fVar12;
          local_7c = fVar11;
          local_78 = *(float *)(param_1 + 0x4d8);
          local_74 = fVar10;
          local_70 = cVar7;
          local_68 = lVar9;
          (**(code **)(*plVar3 + 0x10))(plVar3,&local_88);
        }
      }
      lVar9 = lVar9 + 1;
    }
  }
  return;
}


