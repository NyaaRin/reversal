// 0x18016ca30  FUN_18016ca30
// size=601 thunk=false
// signature: undefined FUN_18016ca30()
// status: ok


float * FUN_18016ca30(float *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_res8;
  float local_resc;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0xec0) + 0x1228);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar6 = DAT_180380bb0;
  if (((DAT_1803fcb80 == '\0') &&
      (fVar5 = DAT_1803fcb6c * DAT_180380a38 + DAT_180380b3c, fVar6 = DAT_180380b3c,
      DAT_180380b3c <= fVar5)) && (fVar6 = DAT_180380bb0, fVar5 <= DAT_180380bb0)) {
    fVar6 = fVar5;
  }
  fVar6 = *(float *)(*(longlong *)(lVar1 + 0xec0) + 0x1238) * fVar6;
  if (lVar2 == 0) {
    fVar5 = DAT_180380bb0;
    if (((DAT_1803fcb80 == '\0') &&
        (fVar4 = DAT_1803fcb6c * DAT_180380a38 + DAT_180380b3c, fVar5 = DAT_180380b3c,
        DAT_180380b3c <= fVar4)) && (fVar5 = DAT_180380bb0, fVar4 <= DAT_180380bb0)) {
      fVar5 = fVar4;
    }
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    fVar4 = *(float *)(*(longlong *)(lVar1 + 0xec0) + 0x1238);
    if (param_2 == 0) {
      local_res8 = 0.0;
      local_resc = fVar4;
    }
    else {
      FUN_18029e350(&local_res8,*(undefined8 *)(*(longlong *)(lVar1 + 0xec0) + 0x1228),fVar4,
                    DAT_180381308,DAT_180381384,param_2,0,0,0);
      local_res8 = (float)(int)(local_res8 + DAT_180380ba8);
    }
    local_res8 = local_res8 * fVar5;
    local_resc = local_resc * fVar5;
  }
  else {
    FUN_18029e350(&local_res8,lVar2,fVar6,DAT_180381308,0,param_2,0,0,0);
  }
  bVar3 = DAT_1803fcb80 == '\0';
  *param_1 = local_res8;
  param_1[1] = local_resc;
  if (bVar3) {
    local_resc = local_resc - fVar6 * DAT_180380a2c;
    fVar6 = 0.0;
    if (0.0 <= local_resc) {
      fVar6 = local_resc;
    }
    param_1[1] = fVar6;
  }
  return param_1;
}


