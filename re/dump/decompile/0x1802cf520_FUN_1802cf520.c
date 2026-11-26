// 0x1802cf520  FUN_1802cf520
// size=1364 thunk=false
// signature: undefined FUN_1802cf520()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802cf520(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  float local_b8 [6];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  float local_88;
  float local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_f8;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (*(longlong *)(lVar1 + 0xec0) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    puVar3 = *(undefined8 **)(*(longlong *)(lVar1 + 0xec0) + 0xc0);
  }
  local_d8 = 0;
  local_c8 = 0;
  local_c4 = 0x3f800000;
  local_d0 = (undefined4)(longlong)*(float *)(param_1 + 0x28);
  local_cc = (undefined4)(longlong)*(float *)(param_1 + 0x2c);
  plVar2 = (longlong *)*puVar3;
  (**(code **)(*plVar2 + 0x178))(plVar2,&local_d8);
  (**(code **)(*plVar2 + 0x358))(plVar2,0);
  (**(code **)(*plVar2 + 0x2e0))(plVar2,0);
  (**(code **)(*plVar2 + 0x1c8))(plVar2,8,3);
  (**(code **)(*plVar2 + 0x1c8))(plVar2,9,2);
  (**(code **)(*plVar2 + 0x1c8))(plVar2,0xe,0);
  (**(code **)(*plVar2 + 0x1c8))(plVar2,0xf,0);
  (**(code **)(*plVar2 + 0x1c8))(plVar2,0x16,1);
  (**(code **)(*plVar2 + 0x1c8))(plVar2,7,0);
  (**(code **)(*plVar2 + 0x1c8))(plVar2,0x1b,1);
  (**(code **)(*plVar2 + 0x1c8))(plVar2,0xab,1);
  (**(code **)(*plVar2 + 0x1c8))(plVar2,0x13,5);
  (**(code **)(*plVar2 + 0x1c8))(plVar2,0x14,6);
  (**(code **)(*plVar2 + 0x1c8))(plVar2,0xce,1);
  (**(code **)(*plVar2 + 0x1c8))(plVar2,0xcf,2);
  (**(code **)(*plVar2 + 0x1c8))(plVar2,0xd0,6);
  (**(code **)(*plVar2 + 0x1c8))(plVar2,0xae,1);
  (**(code **)(*plVar2 + 0x1c8))(plVar2,0x1c,0);
  (**(code **)(*plVar2 + 0x1c8))(plVar2,0x30,0);
  (**(code **)(*plVar2 + 0x1c8))(plVar2,0x1d,0);
  (**(code **)(*plVar2 + 0x1c8))(plVar2,0x34,0);
  (**(code **)(*plVar2 + 0x1c8))(plVar2,0x88,1);
  (**(code **)(*plVar2 + 0x1c8))(plVar2,0x89,0);
  (**(code **)(*plVar2 + 0x1c8))(plVar2,0xc2,0);
  (**(code **)(*plVar2 + 0x1c8))(plVar2,0xa8,0xf);
  (**(code **)(*plVar2 + 0x1c8))(plVar2,0x98,0);
  (**(code **)(*plVar2 + 0x218))(plVar2,0,1,4);
  (**(code **)(*plVar2 + 0x218))(plVar2,0,2);
  (**(code **)(*plVar2 + 0x218))(plVar2,0,3,0);
  (**(code **)(*plVar2 + 0x218))(plVar2,0,4);
  (**(code **)(*plVar2 + 0x218))(plVar2,0,5,2);
  (**(code **)(*plVar2 + 0x218))(plVar2,0,6,0);
  (**(code **)(*plVar2 + 0x218))(plVar2,1,1,1);
  (**(code **)(*plVar2 + 0x218))(plVar2,1,4,1);
  (**(code **)(*plVar2 + 0x228))(plVar2,0,6,2);
  (**(code **)(*plVar2 + 0x228))(plVar2,0,5,2);
  (**(code **)(*plVar2 + 0x228))(plVar2,0,1,3);
  (**(code **)(*plVar2 + 0x228))(plVar2,0,2,3);
  (**(code **)(*plVar2 + 0x228))(plVar2,0,0xb,0);
  fVar7 = *(float *)(param_1 + 0x20) + DAT_180380ac0;
  local_68 = _DAT_180381470;
  uStack_60 = _UNK_180381478;
  fVar4 = *(float *)(param_1 + 0x24) + DAT_180380ac0;
  fVar6 = *(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x28) + DAT_180380ac0;
  local_48 = _DAT_180381630;
  uStack_40 = _UNK_180381638;
  local_b8[1] = 0.0;
  local_b8[2] = 0.0;
  local_b8[3] = 0.0;
  local_b8[4] = 0.0;
  fVar5 = *(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x2c) + DAT_180380ac0;
  local_78 = _DAT_180381460;
  uStack_70 = _UNK_180381468;
  local_58 = _DAT_1803814d0;
  uStack_50 = _UNK_1803814d8;
  local_b8[0] = DAT_180380d30 / (fVar6 - fVar7);
  local_b8[5] = DAT_180380d30 / (fVar4 - fVar5);
  local_98 = _DAT_1803814c0;
  uStack_90 = _UNK_1803814c8;
  local_a0 = 0;
  local_80 = 0x3f000000;
  local_7c = 0x3f800000;
  local_88 = (fVar6 + fVar7) / (fVar7 - fVar6);
  local_84 = (fVar5 + fVar4) / (fVar5 - fVar4);
  (**(code **)(*plVar2 + 0x160))(plVar2,0x100,&local_78);
  (**(code **)(*plVar2 + 0x160))(plVar2,2,&local_78);
  (**(code **)(*plVar2 + 0x160))(plVar2,3,local_b8);
  return;
}


