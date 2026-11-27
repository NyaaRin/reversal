// 0x18027faa0  FUN_18027faa0
// size=397 thunk=false
// signature: undefined FUN_18027faa0()
// status: ok


undefined8 *
FUN_18027faa0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_res8;
  
  fVar6 = (float)param_2;
  fVar8 = (float)((ulonglong)param_2 >> 0x20);
  if (0.0 <= fVar6) {
    fVar7 = 0.0;
    fVar5 = 0.0;
    if (0.0 <= fVar8) goto LAB_18027fb74;
  }
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  lVar2 = *(longlong *)(lVar1 + 0x1520);
  if ((*(longlong *)(lVar2 + 0x1c8) != 0) || (lVar4 = 0x280, *(longlong *)(lVar1 + 0x2368) != 0)) {
    lVar4 = 0x250;
  }
  fVar7 = *(float *)(lVar2 + lVar4) - *(float *)(lVar2 + 0x118);
  fVar5 = *(float *)(lVar2 + 4 + lVar4) - *(float *)(lVar2 + 0x11c);
LAB_18027fb74:
  if (fVar6 == 0.0) {
    local_res8 = CONCAT44(fVar8,param_3);
  }
  else {
    local_res8 = param_2;
    if (fVar6 < 0.0) {
      fVar3 = DAT_180380e9c;
      if (DAT_180380e9c <= fVar7 + fVar6) {
        fVar3 = fVar7 + fVar6;
      }
      local_res8 = CONCAT44(fVar8,fVar3);
    }
  }
  if (fVar8 == 0.0) {
    *param_1 = CONCAT44(param_4,(int)local_res8);
  }
  else if (0.0 <= fVar8) {
    *param_1 = local_res8;
  }
  else {
    fVar6 = DAT_180380e9c;
    if (DAT_180380e9c <= fVar5 + fVar8) {
      fVar6 = fVar5 + fVar8;
    }
    *param_1 = CONCAT44(fVar6,(int)local_res8);
  }
  return param_1;
}


