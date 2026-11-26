// 0x18026c020  FUN_18026c020
// size=462 thunk=false
// signature: undefined FUN_18026c020()
// status: ok


void FUN_18026c020(undefined8 param_1,undefined8 param_2,undefined4 param_3,char param_4,
                  undefined4 param_5)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined8 local_88;
  undefined8 local_80;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_88 = param_2;
  local_80 = param_1;
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  lVar3 = *(longlong *)(lVar2 + 0x1520);
  FUN_180295000(*(undefined8 *)(lVar3 + 0x2c8),&local_80,&local_88,param_3,param_5,0);
  fVar5 = DAT_180380bb0;
  if ((param_4 != '\0') && (fVar1 = *(float *)(lVar2 + 0xcd0), 0.0 < fVar1)) {
    uVar4 = *(undefined8 *)(lVar3 + 0x2c8);
    uVar6 = FUN_18026a6a0(6,DAT_180380bb0);
    local_78 = (float)param_2 + fVar5;
    local_74 = local_88._4_4_ + fVar5;
    local_70 = (float)param_1 + fVar5;
    local_6c = local_80._4_4_ + fVar5;
    FUN_180294f00(uVar4,&local_70,&local_78,uVar6,param_5,fVar1,0);
    uVar4 = *(undefined8 *)(lVar3 + 0x2c8);
    uVar6 = FUN_18026a6a0(5,fVar5);
    FUN_180294f00(uVar4,&local_80,&local_88,uVar6,param_5,fVar1,0);
  }
  return;
}


