// 0x180281ed0  FUN_180281ed0
// size=914 thunk=false
// signature: undefined FUN_180281ed0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * FUN_180281ed0(float *param_1,longlong param_2)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_d8 [32];
  float *local_b8;
  float *local_b0;
  undefined4 local_a8;
  float local_98;
  float local_94;
  float local_90;
  undefined4 local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  ulonglong local_68;
  
  local_68 = DAT_1803da4c0 ^ (ulonglong)auStack_d8;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(lVar3 + 0xec0);
  FUN_180281dc0(&local_78);
  uVar2 = *(uint *)(param_2 + 0x14);
  if ((uVar2 >> 0x1c & 1) == 0) {
    if ((uVar2 >> 0x1a & 1) == 0) {
      if ((uVar2 >> 0x19 & 1) == 0) {
        *(undefined8 *)param_1 = *(undefined8 *)(param_2 + 0x28);
        return param_1;
      }
      fVar1 = *(float *)(lVar4 + 0xda0);
      FUN_180284040(&local_98,0x2000000);
      if (*(int *)(lVar4 + 0x118) == 1) {
        if (*(char *)(lVar3 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar3 = *(longlong *)(lVar3 + 0xec0);
        if (((*(char *)(lVar3 + 0x2068) == '\0') || (*(char *)(lVar3 + 0x2069) == '\0')) ||
           (*(longlong *)(lVar3 + 0x2070) == 0)) {
          fVar6 = (fVar1 * 0.0 + local_98) - *(float *)(param_2 + 0x30) * DAT_180380ac0;
          if (local_78 <= fVar6) {
            fVar5 = (local_94 - fVar1 * DAT_180381024) - *(float *)(param_2 + 0x34);
            if (((local_74 <= fVar5) && (fVar6 + *(float *)(param_2 + 0x30) <= local_70)) &&
               (fVar5 + *(float *)(param_2 + 0x34) <= local_6c)) {
              *param_1 = fVar6;
              param_1[1] = fVar5;
              return param_1;
            }
          }
        }
      }
      if (((*(char *)(lVar4 + 0x2068) == '\0') || (*(char *)(lVar4 + 0x2069) == '\0')) ||
         (local_80 = DAT_180380fe8, local_7c = DAT_180380fa8, *(char *)(lVar4 + 0x72) != '\0')) {
        local_80 = fVar1 * DAT_180381038;
        local_7c = fVar1 * DAT_180381038;
      }
      local_7c = local_94 + local_7c;
      local_80 = local_98 + local_80;
      local_88 = local_98 - DAT_180380fe8;
      local_84 = local_94 - DAT_180380fa8;
      local_b0 = &local_88;
      local_a8 = 2;
      local_b8 = &local_78;
      local_98 = fVar1 * DAT_180380fe8 + local_98;
      local_94 = fVar1 * DAT_180380fcc + local_94;
      FUN_180281aa0(param_1,&local_98,param_2 + 0x30,param_2 + 0xe4);
      return param_1;
    }
    local_88 = *(float *)(param_2 + 0x28);
    local_84 = *(float *)(param_2 + 0x2c);
    local_b0 = &local_88;
    local_80 = local_88;
    local_7c = local_84;
  }
  else {
    lVar3 = *(longlong *)
             (((longlong)*(int *)(lVar4 + 0x14f0) + -2) * 0x78 + *(longlong *)(lVar4 + 0x14f8));
    if (*(char *)(lVar3 + 0x17b) == '\0') {
      local_98 = *(float *)(lVar3 + 0x28) + *(float *)(lVar4 + 0xcdc);
      local_94 = -3.4028235e+38;
      local_8c = 0x7f7fffff;
      local_90 = ((*(float *)(lVar3 + 0x28) + *(float *)(lVar3 + 0x30)) - *(float *)(lVar4 + 0xcdc))
                 - *(float *)(lVar3 + 0xc0);
    }
    else {
      local_94 = *(float *)(lVar3 + 0x26c);
      local_8c = *(undefined4 *)(lVar3 + 0x274);
      local_98 = -3.4028235e+38;
      local_90 = 3.4028235e+38;
    }
    local_b0 = &local_98;
  }
  local_a8 = 0;
  local_b8 = &local_78;
  FUN_180281aa0(param_1,param_2 + 0x28,param_2 + 0x30,param_2 + 0xe4);
  return param_1;
}


