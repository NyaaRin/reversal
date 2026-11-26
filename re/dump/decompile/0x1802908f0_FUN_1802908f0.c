// 0x1802908f0  FUN_1802908f0
// size=625 thunk=false
// signature: undefined FUN_1802908f0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802908f0(undefined8 param_1,undefined8 param_2,int param_3,int param_4,undefined4 param_5,
                  float param_6,float param_7,undefined4 param_8,float param_9,undefined4 param_10)

{
  longlong lVar1;
  longlong lVar2;
  void *_Memory;
  undefined4 uVar3;
  longlong lVar4;
  short sVar5;
  int iVar6;
  int *piVar7;
  float fVar8;
  undefined1 auStack_118 [32];
  undefined4 *local_f8;
  float local_f0;
  undefined4 *local_e8;
  undefined4 *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0 [2];
  void *local_a8;
  int local_a0;
  int local_9c;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_1803da4c0 ^ (ulonglong)auStack_118;
  uVar3 = FUN_18028e930(param_1,param_10,&local_88);
  local_e0 = &local_b4;
  local_d0 = 0;
  local_d8 = 0;
  local_e8 = local_b0;
  local_f0 = param_9;
  local_f8 = (undefined4 *)CONCAT44(local_f8._4_4_,param_8);
  FUN_18028ea20(param_1,param_10,param_6,param_7);
  local_98 = param_5;
  local_a0 = param_3;
  local_9c = param_4;
  local_90 = param_2;
  if ((param_3 != 0) && (param_4 != 0)) {
    local_f8 = &local_b8;
    local_b8 = 0;
    fVar8 = param_7;
    if (param_6 <= param_7) {
      fVar8 = param_6;
    }
    local_a8 = (void *)0x0;
    lVar4 = FUN_1802904f0(local_88,uVar3,DAT_180380a88 / fVar8,&local_a8);
    _Memory = local_a8;
    if (lVar4 != 0) {
      local_d0 = CONCAT44(local_d0._4_4_,local_b4);
      local_d8 = CONCAT44(local_d8._4_4_,local_b0[0]);
      local_e0 = (undefined4 *)CONCAT44(local_e0._4_4_,param_9);
      local_e8 = (undefined4 *)CONCAT44(local_e8._4_4_,param_8);
      local_f0 = param_7;
      local_f8 = (undefined4 *)CONCAT44(local_f8._4_4_,param_6);
      FUN_18028fbc0(&local_a0,lVar4,local_a8,local_b8);
      if (_Memory != (void *)0x0) {
        lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if (*(char *)(lVar1 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar1 = *(longlong *)(lVar1 + 0xec0);
        if (lVar1 != 0) {
          piVar7 = (int *)(lVar1 + 0x29b0 + (longlong)*(short *)(lVar1 + 0x29ac) * 8);
          if (*piVar7 != *(int *)(lVar1 + 4)) {
            iVar6 = *(short *)(lVar1 + 0x29ac) + 1;
            lVar2 = (longlong)iVar6;
            sVar5 = (short)iVar6 +
                    ((short)((ulonglong)(lVar2 * 0x2aaaaaab) >> 0x20) +
                    (short)((lVar2 / 6 + (lVar2 >> 0x3f) & 0xffffffffU) >> 0x1f)) * -6;
            *(short *)(lVar1 + 0x29ac) = sVar5;
            piVar7 = (int *)(lVar1 + ((longlong)sVar5 + 0x536) * 8);
            *piVar7 = *(int *)(lVar1 + 4);
            piVar7[1] = 0;
          }
          *(short *)((longlong)piVar7 + 6) = *(short *)((longlong)piVar7 + 6) + 1;
          *(int *)(lVar1 + 0x29a8) = *(int *)(lVar1 + 0x29a8) + 1;
        }
      }
      free(_Memory);
      FUN_18026f680(lVar4);
    }
  }
  FUN_18026f680(local_88);
  return;
}


