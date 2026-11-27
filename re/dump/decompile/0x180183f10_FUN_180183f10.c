// 0x180183f10  FUN_180183f10
// size=637 thunk=false
// signature: undefined FUN_180183f10()
// status: ok


void FUN_180183f10(longlong param_1,undefined8 param_2,char *param_3,uint param_4)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_res8;
  float local_resc;
  float local_res18;
  float local_res1c;
  char *in_stack_ffffffffffffff50;
  ulonglong in_stack_ffffffffffffff68;
  float local_78;
  float local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_70 = param_2;
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  fVar1 = *(float *)(lVar2 + 0x1238);
  if (param_3 == (char *)0x0) {
    fVar4 = 0.0;
    local_resc = fVar1;
  }
  else {
    in_stack_ffffffffffffff68 = 0;
    in_stack_ffffffffffffff50 = param_3;
    FUN_18029e350(&local_res8,*(undefined8 *)(lVar2 + 0x1228),fVar1,DAT_180381308,DAT_180381384,
                  param_3,0,0,0);
    fVar4 = (float)(int)(local_res8 + DAT_180380ba8);
  }
  fVar1 = DAT_180380bb0;
  fVar3 = local_70._4_4_;
  local_74 = local_70._4_4_;
  fVar5 = (float)param_2 - fVar4 * DAT_180380ac0;
  local_res8 = fVar5 + fVar4 + DAT_180380e28;
  local_resc = local_70._4_4_ + local_resc + DAT_180380bb0;
  local_res18 = fVar5 - DAT_180380e28;
  local_res1c = local_70._4_4_ - DAT_180380bb0;
  local_78 = fVar5;
  FUN_180295000(param_1,&local_res18,&local_res8,0xaa000000,DAT_180380e28,
                (ulonglong)in_stack_ffffffffffffff50 & 0xffffffff00000000);
  local_res8 = fVar5 + fVar1;
  local_resc = fVar3 + fVar1;
  if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
    local_68 = *(undefined4 *)(param_1 + 0x60);
    uStack_64 = *(undefined4 *)(param_1 + 100);
    uStack_60 = *(undefined4 *)(param_1 + 0x68);
    uStack_5c = *(undefined4 *)(param_1 + 0x6c);
    in_stack_ffffffffffffff68 = in_stack_ffffffffffffff68 & 0xffffffff00000000;
    FUN_18029e990(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x18),param_1,
                  *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x20),&local_res8,0xc8000000,
                  &local_68,param_3,0,in_stack_ffffffffffffff68,0);
  }
  if ((((param_4 & 0xff000000) != 0) && (param_3 != (char *)0x0)) && (*param_3 != '\0')) {
    local_68 = *(undefined4 *)(param_1 + 0x60);
    uStack_64 = *(undefined4 *)(param_1 + 100);
    uStack_60 = *(undefined4 *)(param_1 + 0x68);
    uStack_5c = *(undefined4 *)(param_1 + 0x6c);
    FUN_18029e990(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x18),param_1,
                  *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x20),&local_78,param_4,&local_68,
                  param_3,0,in_stack_ffffffffffffff68 & 0xffffffff00000000,0);
  }
  return;
}


