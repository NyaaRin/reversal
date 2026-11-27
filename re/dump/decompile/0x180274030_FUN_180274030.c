// 0x180274030  FUN_180274030
// size=804 thunk=false
// signature: undefined FUN_180274030()
// status: ok


float * FUN_180274030(float *param_1,longlong param_2,float *param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  float *pfVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_res10;
  float fStackX_14;
  float local_c8;
  float local_c4;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar10 = *(float *)(param_2 + 0x58) + *(float *)(param_2 + 0x58);
  fVar9 = *(float *)(param_2 + 0x5c) + *(float *)(param_2 + 0x5c);
  lVar2 = *(longlong *)(lVar1 + 0xec0);
  fVar13 = (*(float *)(param_2 + 0x78) + *(float *)(param_2 + 0x70)) - *(float *)(param_2 + 0xc0);
  fVar14 = (*(float *)(param_2 + 0x7c) + *(float *)(param_2 + 0x74)) - *(float *)(param_2 + 0xc4);
  if ((param_4 & 1) == 0) {
    fVar7 = *(float *)(param_2 + 0x30);
  }
  else {
    fVar7 = fVar10 + *param_3 + fVar13;
  }
  if ((param_4 & 2) == 0) {
    fVar8 = *(float *)(param_2 + 0x34);
  }
  else {
    fVar8 = fVar9 + param_3[1] + fVar14;
  }
  uVar6 = *(uint *)(param_2 + 0x14);
  fVar11 = DAT_180381308;
  fVar12 = DAT_180381308;
  if ((uVar6 & 0x5000000) != 0x1000000) {
    fVar11 = *(float *)(lVar2 + 0xd98);
    fVar12 = *(float *)(lVar2 + 0xd9c);
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
      uVar6 = *(uint *)(param_2 + 0x14);
    }
    lVar1 = **(longlong **)(*(longlong *)(lVar1 + 0xec0) + 0x2060);
    fVar11 = *(float *)(lVar1 + 0x28) - (fVar11 + fVar11);
    fVar12 = *(float *)(lVar1 + 0x2c) - (fVar12 + fVar12);
  }
  if ((uVar6 >> 0x19 & 1) == 0) {
    FUN_180273c50(&local_res10,param_2);
    if (fVar12 <= fStackX_14) {
      fStackX_14 = fVar12;
    }
    if (fVar11 <= local_res10) {
      local_res10 = fVar11;
    }
    if ((fStackX_14 <= fVar8) && (fStackX_14 = fVar12, fVar8 <= fVar12)) {
      fStackX_14 = fVar8;
    }
    if ((local_res10 <= fVar7) && (local_res10 = fVar11, fVar7 <= fVar11)) {
      local_res10 = fVar7;
    }
    FUN_180273d40(&local_c8,param_2,&local_res10);
    pfVar5 = param_3;
    if ((param_4 & 1) == 0) {
      pfVar5 = (float *)(param_2 + 0x40);
    }
    if ((param_4 & 2) == 0) {
      fVar7 = *(float *)(param_2 + 0x44);
    }
    else {
      fVar7 = param_3[1];
    }
    if ((((local_c8 < fVar10 + *pfVar5 + fVar13) &&
         (uVar6 = *(uint *)(param_2 + 0x14), (uVar6 & 8) == 0)) && ((uVar6 >> 0xb & 1) != 0)) ||
       (uVar6 = *(uint *)(param_2 + 0x14), (uVar6 >> 0xf & 1) != 0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (((local_c4 < fVar9 + fVar7 + fVar14) && ((uVar6 & 8) == 0)) || ((uVar6 >> 0xe & 1) != 0)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (bVar3) {
      fStackX_14 = fStackX_14 + *(float *)(lVar2 + 0xcfc);
    }
    if (bVar4) {
      local_res10 = local_res10 + *(float *)(lVar2 + 0xcfc);
    }
    *(ulonglong *)param_1 = CONCAT44(fStackX_14,local_res10);
  }
  else {
    if (fVar11 <= fVar7) {
      fVar7 = fVar11;
    }
    if (fVar12 <= fVar8) {
      fVar8 = fVar12;
    }
    *param_1 = fVar7;
    param_1[1] = fVar8;
  }
  return param_1;
}


