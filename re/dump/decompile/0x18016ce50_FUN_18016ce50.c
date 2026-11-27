// 0x18016ce50  FUN_18016ce50
// size=768 thunk=false
// signature: undefined FUN_18016ce50()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18016ce50(longlong param_1,longlong param_2,undefined8 param_3,char *param_4,float *param_5
                  ,float param_6,float param_7,char *param_8)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  float fVar6;
  undefined1 auStack_108 [32];
  uint local_e8;
  undefined4 *local_e0;
  char *local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  ulonglong local_90;
  
  if (param_4 != (char *)0x0) {
    local_90 = DAT_1803da4c0 ^ (ulonglong)auStack_108;
    if (param_8 == (char *)0x0) {
      bVar5 = *param_4 == '\0';
    }
    else {
      bVar5 = param_8 == param_4;
    }
    if (!bVar5) {
      lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      local_b8 = param_3;
      if (*(char *)(lVar4 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      fVar1 = *(float *)(*(longlong *)(lVar4 + 0xec0) + 0xc84);
      if (*(char *)(lVar4 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0xec0) + 0x1228);
      if (*(char *)(param_1 + 0x80) != '\0') {
        local_9c = *(float *)(param_1 + 0x54);
        local_a0 = *(float *)(param_1 + 0x50);
        local_98 = *(float *)(param_1 + 0x58);
        local_94 = fVar1 * *(float *)(param_1 + 0x5c) * param_7;
        uVar2 = FUN_180268ed0(&local_a0);
        local_9c = local_b8._4_4_ + DAT_180380bb0;
        local_a0 = (float)param_3 + DAT_180380bb0;
        if ((((uVar2 & 0xff000000) != 0) && (param_4 != param_8)) && (*param_4 != '\0')) {
          lVar3 = lVar4;
          if (lVar4 == 0) {
            lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x38) + 0x18);
          }
          fVar6 = param_6;
          if (param_6 == 0.0) {
            fVar6 = *(float *)(*(longlong *)(param_2 + 0x38) + 0x20);
          }
          local_b0 = *(undefined4 *)(param_2 + 0x60);
          uStack_ac = *(undefined4 *)(param_2 + 100);
          uStack_a8 = *(undefined4 *)(param_2 + 0x68);
          uStack_a4 = *(undefined4 *)(param_2 + 0x6c);
          local_c0 = 0;
          local_e0 = &local_b0;
          local_c8 = 0;
          local_d0 = param_8;
          local_e8 = uVar2;
          local_d8 = param_4;
          FUN_18029e990(lVar3,param_2,fVar6,&local_a0);
        }
      }
      local_a0 = *param_5;
      local_9c = param_5[1];
      local_98 = param_5[2];
      local_94 = param_7 * param_5[3] * fVar1;
      local_e8 = FUN_180268ed0(&local_a0);
      if ((((local_e8 & 0xff000000) != 0) && (param_4 != param_8)) && (*param_4 != '\0')) {
        if (lVar4 == 0) {
          lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x38) + 0x18);
        }
        if (param_6 == 0.0) {
          param_6 = *(float *)(*(longlong *)(param_2 + 0x38) + 0x20);
        }
        local_b0 = *(undefined4 *)(param_2 + 0x60);
        uStack_ac = *(undefined4 *)(param_2 + 100);
        uStack_a8 = *(undefined4 *)(param_2 + 0x68);
        uStack_a4 = *(undefined4 *)(param_2 + 0x6c);
        local_c0 = 0;
        local_e0 = &local_b0;
        local_c8 = 0;
        local_d0 = param_8;
        local_d8 = param_4;
        FUN_18029e990(lVar4,param_2,param_6,&local_b8);
      }
    }
  }
  return;
}


