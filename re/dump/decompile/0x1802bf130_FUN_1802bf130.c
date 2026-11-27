// 0x1802bf130  FUN_1802bf130
// size=920 thunk=false
// signature: undefined FUN_1802bf130()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802bf130(char *param_1,float *param_2,uint param_3)

{
  char *pcVar1;
  float fVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_108 [32];
  double local_e8;
  int local_e0;
  int local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  ulonglong local_80;
  
  local_80 = DAT_1803da4c0 ^ (ulonglong)auStack_108;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar3 + 0xec0);
  cVar6 = FUN_180280a90(2);
  if (cVar6 != '\0') {
    if (param_1 != (char *)0x0) {
      pcVar7 = param_1;
      if (param_1 != (char *)0xffffffffffffffff) {
        while (*pcVar7 != '\0') {
          pcVar1 = pcVar7 + 1;
          if (((*pcVar7 == '#') && (*pcVar1 == '#')) ||
             (pcVar7 = pcVar1, pcVar1 == (char *)0xffffffffffffffff)) break;
        }
      }
      if (param_1 < pcVar7) {
        FUN_1802aa3c0(param_1,pcVar7,0);
        FUN_1802afb40();
      }
    }
    fVar5 = DAT_1803811c8;
    fVar4 = DAT_180380ac0;
    fVar13 = *(float *)(lVar3 + 0xcc8);
    local_98 = fVar13 + fVar13 + *(float *)(lVar3 + 0x1238) * DAT_180380e28;
    local_84 = DAT_180380bb0;
    if ((param_3 & 2) == 0) {
      local_84 = param_2[3];
    }
    local_90 = *param_2;
    local_8c = param_2[1];
    local_88 = param_2[2];
    if (0.0 <= local_90) {
      fVar13 = DAT_180380bb0;
      if (local_90 <= DAT_180380bb0) {
        fVar13 = local_90;
      }
    }
    else {
      fVar13 = 0.0;
    }
    if (0.0 <= local_8c) {
      fVar12 = DAT_180380bb0;
      if (local_8c <= DAT_180380bb0) {
        fVar12 = local_8c;
      }
    }
    else {
      fVar12 = 0.0;
    }
    if (0.0 <= local_88) {
      fVar11 = DAT_180380bb0;
      if (local_88 <= DAT_180380bb0) {
        fVar11 = local_88;
      }
    }
    else {
      fVar11 = 0.0;
    }
    if ((param_3 & 2) == 0) {
      fVar2 = param_2[3];
      if (0.0 <= fVar2) {
        fVar10 = DAT_180380bb0;
        if (fVar2 <= DAT_180380bb0) {
          fVar10 = fVar2;
        }
      }
      else {
        fVar10 = 0.0;
      }
      iVar8 = (int)(fVar10 * DAT_1803811c8 + DAT_180380ac0);
    }
    else {
      iVar8 = 0xff;
    }
    local_94 = local_98;
    FUN_1802be530("##preview",&local_90,param_3 & 0x18007002 | 0x40,&local_98);
    FUN_18027f5b0(0,DAT_180381384);
    if (((param_3 >> 0x1b & 1) == 0) && ((param_3 & 0x18000000) != 0)) {
      if ((param_3 >> 0x1c & 1) != 0) {
        if ((param_3 & 2) == 0) {
          local_e8 = (double)param_2[3];
          FUN_1802aaae0("H: %.3f, S: %.3f, V: %.3f, A: %.3f",(double)*param_2,(double)param_2[1],
                        (double)param_2[2]);
        }
        else {
          FUN_1802aaae0("H: %.3f, S: %.3f, V: %.3f",(double)*param_2,(double)param_2[1],
                        (double)param_2[2]);
        }
      }
    }
    else {
      local_e0 = (int)(fVar13 * fVar5 + fVar4);
      local_d8 = (int)(fVar12 * fVar5 + fVar4);
      iVar9 = (int)(fVar11 * fVar5 + fVar4);
      if ((param_3 & 2) == 0) {
        local_a8 = (double)param_2[3];
        local_b0 = (double)param_2[2];
        local_b8 = (double)param_2[1];
        local_c0 = (double)*param_2;
        local_c8 = (double)CONCAT44(local_c8._4_4_,iVar8);
        local_d0 = (double)CONCAT44(local_d0._4_4_,iVar9);
        local_e8 = (double)CONCAT44(local_e8._4_4_,iVar8);
        FUN_1802aaae0("#%02X%02X%02X%02X\nR:%d, G:%d, B:%d, A:%d\n(%.3f, %.3f, %.3f, %.3f)");
      }
      else {
        local_c0 = (double)param_2[2];
        local_c8 = (double)param_2[1];
        local_d0 = (double)*param_2;
        local_e8 = (double)CONCAT44(local_e8._4_4_,local_e0);
        local_e0 = local_d8;
        local_d8 = iVar9;
        FUN_1802aaae0("#%02X%02X%02X\nR: %d, G: %d, B: %d\n(%.3f, %.3f, %.3f)");
      }
    }
    FUN_180278d40();
  }
  return;
}


