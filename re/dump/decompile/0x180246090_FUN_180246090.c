// 0x180246090  FUN_180246090
// size=912 thunk=false
// signature: undefined FUN_180246090()
// status: ok


void FUN_180246090(float param_1,float param_2,float param_3,float param_4,undefined4 param_5,
                  uint param_6,char *param_7)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined4 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  bVar4 = true;
  lVar3 = *(longlong *)(lVar2 + 0xec0);
  fVar15 = (param_4 - param_3) * DAT_180380a3c;
  fVar14 = (param_4 - param_3) * DAT_180380b3c + param_3;
  *(undefined1 *)(*(longlong *)(lVar3 + 0x1520) + 0xce) = 1;
  lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x1520) + 0x2c8);
  local_d8 = param_2;
  local_d4 = param_4;
  local_d0 = param_1;
  local_cc = param_3;
  FUN_180292550(lVar3,&local_d0,&local_d8,1);
  if (param_1 < param_2) {
    fVar10 = DAT_180380ac0;
    fVar13 = param_1;
    fVar16 = fVar14;
    do {
      fVar12 = fVar13 + fVar15;
      fVar11 = fVar14;
      if (bVar4) {
        fVar11 = fVar14 + fVar15;
      }
      if ((param_6 & 0xff000000) != 0) {
        local_d0 = fVar13 + fVar10;
        local_cc = fVar16 + fVar10;
        FUN_18020dc30(lVar3 + 0x50,&local_d0);
        local_d8 = fVar12 + DAT_180380ac0;
        local_d4 = fVar11 + DAT_180380ac0;
        FUN_18020dc30(lVar3 + 0x50,&local_d8);
        FUN_1802929d0(lVar3,*(undefined8 *)(lVar3 + 0x58),*(undefined4 *)(lVar3 + 0x50),param_6,
                      param_5,0);
        fVar10 = DAT_180380ac0;
        *(undefined4 *)(lVar3 + 0x50) = 0;
      }
      bVar4 = (bool)(bVar4 ^ 1);
      fVar13 = fVar12;
      fVar16 = fVar11;
    } while (fVar12 < param_2);
  }
  piVar1 = (int *)(lVar3 + 0xa0);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    puVar9 = (undefined4 *)(*(longlong *)(lVar3 + 0x38) + 0x38);
  }
  else {
    puVar9 = (undefined4 *)
             ((longlong)(*(int *)(lVar3 + 0xa0) + -1) * 0x10 + *(longlong *)(lVar3 + 0xa8));
  }
  uVar5 = puVar9[1];
  uVar6 = puVar9[2];
  uVar7 = puVar9[3];
  *(undefined4 *)(lVar3 + 0x60) = *puVar9;
  *(undefined4 *)(lVar3 + 100) = uVar5;
  *(undefined4 *)(lVar3 + 0x68) = uVar6;
  *(undefined4 *)(lVar3 + 0x6c) = uVar7;
  FUN_180292360(lVar3);
  if (*param_7 != '\0') {
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(lVar2 + 0xec0);
    lVar3 = *(longlong *)(lVar2 + 0x1520);
    if (param_1 <= *(float *)(lVar3 + 0x268)) {
      param_1 = *(float *)(lVar3 + 0x268);
    }
    if (param_1 - *(float *)(lVar2 + 0xcec) <= *(float *)(lVar2 + 0x100)) {
      if (param_3 <= *(float *)(lVar3 + 0x26c)) {
        param_3 = *(float *)(lVar3 + 0x26c);
      }
      if (param_3 - *(float *)(lVar2 + 0xcf0) <= *(float *)(lVar2 + 0x104)) {
        if (*(float *)(lVar3 + 0x270) <= param_2) {
          param_2 = *(float *)(lVar3 + 0x270);
        }
        if (*(float *)(lVar2 + 0x100) < param_2 + *(float *)(lVar2 + 0xcec)) {
          if (*(float *)(lVar3 + 0x274) <= param_4) {
            param_4 = *(float *)(lVar3 + 0x274);
          }
          if ((*(float *)(lVar2 + 0x104) < param_4 + *(float *)(lVar2 + 0xcf0)) &&
             (cVar8 = FUN_180280a90(0), cVar8 != '\0')) {
            FUN_1802aa3c0(param_7,0,1);
            FUN_180278d40();
          }
        }
      }
    }
  }
  return;
}


