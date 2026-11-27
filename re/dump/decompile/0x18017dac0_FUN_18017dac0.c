// 0x18017dac0  FUN_18017dac0
// size=470 thunk=false
// signature: undefined FUN_18017dac0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18017dac0(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined8 local_118;
  float local_110;
  undefined4 local_10c;
  undefined4 local_108;
  float fStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 local_f8 [48];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_68 [16];
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_148;
  FUN_18017d630(local_f8);
  FUN_1802aabb0(local_68,&DAT_1803431ac,param_1);
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  local_118 = *(undefined8 *)(*(longlong *)(*(longlong *)(lVar1 + 0xec0) + 0x1520) + 0x118);
  fVar8 = (float)local_118;
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar1 + 0xec0);
  local_108 = local_c8;
  fStack_104 = (float)uStack_c4;
  uStack_100 = uStack_c0;
  uStack_fc = uStack_bc;
  *(undefined1 *)(*(longlong *)(lVar2 + 0x1520) + 0xce) = 1;
  uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 0x1520) + 0x2c8);
  uVar4 = FUN_180268ed0(&local_108);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0xec0) + 0x1520);
  if ((*(longlong *)(lVar2 + 0x1c8) != 0) ||
     (lVar5 = 0x280, *(longlong *)(*(longlong *)(lVar1 + 0xec0) + 0x2368) != 0)) {
    lVar5 = 0x250;
  }
  local_128 = DAT_180380bb0;
  local_110 = (*(float *)(lVar2 + lVar5) - *(float *)(lVar2 + 0x118)) + fVar8;
  local_10c = local_118._4_4_;
  FUN_180294c90(uVar3,&local_118,&local_110,uVar4);
  pfVar7 = (float *)&local_118;
  local_110 = 1.5;
  local_118 = CONCAT44(local_118._4_4_,0x3f400000);
  local_108 = 0;
  if (DAT_180380b20 <= DAT_1803da6a4) {
    pfVar7 = &DAT_1803da6a4;
  }
  pfVar6 = &local_110;
  if (DAT_1803da6a4 <= DAT_180380c50) {
    pfVar6 = pfVar7;
  }
  fStack_104 = *pfVar6 * DAT_180380f00;
  FUN_1802af260(&local_108);
  return;
}


