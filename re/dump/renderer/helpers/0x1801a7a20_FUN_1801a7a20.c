// 1801a7a20  FUN_1801a7a20
// signature: undefined FUN_1801a7a20()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_1801a7a20(undefined8 param_1,undefined8 param_2,float *param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined4 local_res20 [2];
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 local_b8 [64];
  ulonglong local_78;
  
  uVar7 = param_6;
  local_78 = DAT_1803da4c0 ^ (ulonglong)auStack_108;
  local_res20[0] = param_4;
  FUN_18019a460(param_1,0);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar5 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0xec0) + 0x1520);
  uVar2 = *(undefined4 *)(lVar6 + 0x118);
  uVar3 = *(undefined4 *)(lVar6 + 0x11c);
  FUN_180012ac0(local_b8,0x40,uVar7,(double)*param_3);
  FUN_1801a75c0(param_1,local_b8);
  if (*(char *)(lVar5 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar6 = *(longlong *)(lVar5 + 0xec0);
  local_d8 = 0;
  local_e0 = uVar7;
  puVar1 = (uint *)(lVar6 + 0x1ec0);
  *puVar1 = *puVar1 | 1;
  *(undefined4 *)(lVar6 + 0x1ed8) = 0xbf800000;
  local_e8 = (undefined1 *)&param_5;
  uVar8 = FUN_1801a6c50(param_2,8,param_3,local_res20);
  if (*(char *)(lVar5 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar4 = *(undefined4 *)(*(longlong *)(lVar5 + 0xec0) + 0x1f10);
  if (*(char *)(lVar5 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  local_c0 = *(undefined4 *)(*(longlong *)(lVar5 + 0xec0) + 0x1f0c);
  local_c8 = uVar2;
  local_c4 = uVar3;
  local_bc = uVar4;
  FUN_18019a7a0(param_1,&local_c8);
  return uVar8;
}


