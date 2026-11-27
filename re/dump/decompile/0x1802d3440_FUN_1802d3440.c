// 0x1802d3440  FUN_1802d3440
// size=415 thunk=false
// signature: undefined FUN_1802d3440()
// status: ok


void FUN_1802d3440(undefined8 param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined8 local_res10;
  undefined8 local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_98 = param_1;
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar6 = FUN_18026f7d0(**(undefined8 **)(*(longlong *)(lVar1 + 0xec0) + 0x2060),0,"##Background");
  fVar4 = DAT_1803da9cc;
  fVar3 = DAT_1803da9c8;
  fVar2 = DAT_1803da9c4;
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar8 = *(float *)(*(longlong *)(lVar1 + 0xec0) + 0xc84) * DAT_1803809ec;
  fVar7 = (DAT_180380bb0 - fVar8) * 0.0;
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
  }
  local_84 = *(float *)(*(longlong *)(lVar1 + 0xec0) + 0xc84) * DAT_180380b20;
  local_res10 = 0;
  local_90 = fVar8 * fVar2 + fVar7;
  local_8c = fVar8 * fVar3 + fVar7;
  local_88 = fVar8 * fVar4 + fVar7;
  uVar5 = FUN_180268ed0(&local_90);
  FUN_180295000(uVar6,&local_res10,&local_98,uVar5,0,0);
  return;
}


