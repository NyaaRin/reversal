// 0x18026c1f0  FUN_18026c1f0
// size=382 thunk=false
// signature: undefined FUN_18026c1f0()
// status: ok


void FUN_18026c1f0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  float fVar1;
  longlong lVar2;
  undefined8 uVar3;
  float fVar4;
  undefined4 uVar5;
  float local_res20;
  float local_res24;
  float local_78;
  float local_74;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_70 = param_2;
  local_68 = param_1;
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar4 = DAT_180380bb0;
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  fVar1 = *(float *)(lVar2 + 0xcd0);
  if (0.0 < fVar1) {
    lVar2 = *(longlong *)(lVar2 + 0x1520);
    uVar3 = *(undefined8 *)(lVar2 + 0x2c8);
    uVar5 = FUN_18026a6a0(6,DAT_180380bb0);
    local_res20 = (float)param_2 + fVar4;
    local_res24 = local_70._4_4_ + fVar4;
    local_78 = (float)param_1 + fVar4;
    local_74 = local_68._4_4_ + fVar4;
    FUN_180294f00(uVar3,&local_78,&local_res20,uVar5,param_3,fVar1,0);
    uVar3 = *(undefined8 *)(lVar2 + 0x2c8);
    uVar5 = FUN_18026a6a0(5,fVar4);
    FUN_180294f00(uVar3,&local_68,&local_70,uVar5,param_3,fVar1,0);
  }
  return;
}


