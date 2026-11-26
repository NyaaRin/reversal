// 0x1802c2940  FUN_1802c2940
// size=1185 thunk=false
// signature: undefined FUN_1802c2940()
// status: ok


undefined4 * FUN_1802c2940(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar1 + 0xec0);
  puVar3 = *(undefined4 **)(lVar2 + 0x24a8);
  lVar4 = *(longlong *)(lVar2 + 0x1520);
  lVar6 = *(longlong *)(puVar3 + 10);
  if (puVar3[0xc] != *(int *)(lVar2 + 0x1eb4)) {
    FUN_18027e9c0("EndMultiSelect() FocusScope mismatch!");
  }
  if ((puVar3[0xd] & 0x1000) == 0) {
    fVar10 = *(float *)(lVar4 + 0x80) + *(float *)(lVar4 + 0x238);
    fVar11 = *(float *)(lVar4 + 0x23c) + *(float *)(lVar4 + 0x84);
    fVar12 = *(float *)(lVar4 + 0x240);
    fVar13 = *(float *)(lVar4 + 0x244);
    if (fVar12 <= fVar10) {
      fVar10 = fVar12;
    }
    if (fVar13 <= fVar11) {
      fVar11 = fVar13;
    }
  }
  else {
    fVar10 = (float)puVar3[0xe];
    fVar11 = (float)puVar3[0xf];
    fVar12 = *(float *)(lVar4 + 0x130);
    if (*(float *)(lVar4 + 0x130) <= fVar10) {
      fVar12 = fVar10;
    }
    fVar13 = *(float *)(lVar4 + 0x134);
    if (*(float *)(lVar4 + 0x134) <= fVar11) {
      fVar13 = fVar11;
    }
  }
  local_68 = fVar10;
  local_64 = fVar11;
  local_60 = fVar12;
  local_5c = fVar13;
  if (*(char *)((longlong)puVar3 + 0x52) != '\0') {
    if ((*(char *)((longlong)puVar3 + 0x21) != '\0') ||
       ((*(char *)((longlong)puVar3 + 0x55) == '\0' && (*(longlong *)(puVar3 + 4) != -1)))) {
      if ((*(byte *)(lVar2 + 0x28e4) & 0x40) != 0) {
        FUN_180289170("[selection] EndMultiSelect: Reset RangeSrcItem.\n");
      }
      *(undefined8 *)(lVar6 + 0x18) = 0xffffffffffffffff;
    }
    if ((*(char *)(puVar3 + 0x15) == '\0') && (*(longlong *)(lVar6 + 0x20) != -1)) {
      if ((*(byte *)(lVar2 + 0x28e4) & 0x40) != 0) {
        FUN_180289170("[selection] EndMultiSelect: Reset NavIdItem.\n");
      }
      *(undefined8 *)(lVar6 + 0x20) = 0xffffffffffffffff;
      *(undefined1 *)(lVar6 + 0x15) = 0xff;
    }
    if (((*(byte *)(puVar3 + 0xd) & 0xc0) != 0) && (lVar6 = FUN_1802aa360(puVar3[0x12]), lVar6 != 0)
       ) {
      FUN_1802c24e0(&local_68,puVar3[0xd]);
      fVar10 = local_68;
      fVar11 = local_64;
      fVar12 = local_60;
      fVar13 = local_5c;
    }
  }
  if (*(char *)((longlong)puVar3 + 0x51) == '\0') {
    iVar7 = puVar3[1];
    if (iVar7 < 0) {
      iVar7 = iVar7 + iVar7 / 2;
      iVar8 = 0;
      if (0 < iVar7) {
        iVar8 = iVar7;
      }
      FUN_1802cf430(puVar3,iVar8);
    }
    *puVar3 = 0;
  }
  if ((((((*(float *)(lVar4 + 0x228) <= *(float *)(lVar2 + 0x100)) &&
         (*(float *)(lVar4 + 0x22c) <= *(float *)(lVar2 + 0x104))) &&
        (*(float *)(lVar2 + 0x100) < *(float *)(lVar4 + 0x230))) &&
       ((*(float *)(lVar2 + 0x104) < *(float *)(lVar4 + 0x234) &&
        (cVar5 = FUN_180279410(1), cVar5 != '\0')))) &&
      ((((uint)puVar3[0xd] >> 0xc & 1) == 0 ||
       (((fVar10 <= *(float *)(lVar2 + 0x100) && (fVar11 <= *(float *)(lVar2 + 0x104))) &&
        ((*(float *)(lVar2 + 0x100) < fVar12 && (*(float *)(lVar2 + 0x104) < fVar13)))))))) &&
     ((*(int *)(lVar2 + 0x157c) == 0 && (*(int *)(lVar2 + 0x1594) == 0)))) {
    if (((puVar3[0xd] & 0xc0) != 0) &&
       (((*(char *)(lVar2 + 0x2424) == '\0' && (*(char *)(lVar2 + 0x2425) == '\0')) &&
        (*(short *)(lVar2 + 0xb3a) == 1)))) {
      FUN_1802c2120(puVar3[0x12],0xffffffffffffffff);
      FUN_1802827b0(lVar4,2);
      FUN_18026ec90(puVar3[0x12]);
      if ((puVar3[0xd] & 0x1000) != 0) {
        local_68 = *(float *)(lVar2 + 0x100);
        local_64 = *(float *)(lVar2 + 0x104);
        local_60 = local_68;
        local_5c = local_64;
        FUN_180282d70(0,0,puVar3[0xc],&local_68);
      }
    }
    if ((puVar3[0xd] & 0x400) != 0) {
      if (*(char *)(lVar1 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      if (*(char *)(*(longlong *)(lVar1 + 0xec0) + 0xb4e) != '\0') {
        if (*(char *)(lVar1 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        if (*(char *)(*(longlong *)(lVar1 + 0xec0) + 0x1cd4) == '\0') {
          if (*(char *)(lVar1 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          fVar10 = *(float *)(*(longlong *)(lVar1 + 0xec0) + 0x90);
          if ((*(float *)(*(longlong *)(lVar1 + 0xec0) + 0xbb4) < fVar10 * fVar10) &&
             (*(int *)(lVar2 + 0x120) == 0)) {
            FUN_1802c3540(puVar3);
          }
        }
      }
    }
  }
  if ((puVar3[0xd] & 0x10000) != 0) {
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar1 = *(longlong *)(lVar1 + 0xec0);
    *(undefined1 *)(*(longlong *)(lVar1 + 0x1520) + 0xce) = 1;
    FUN_180283c90(*(undefined8 *)(lVar1 + 0x1520),4);
  }
  if ((*(longlong *)(lVar2 + 0x2368) != 0) &&
     (*(char *)(*(longlong *)(lVar2 + 0x2368) + 0x23a) != '\0')) {
    FUN_1802a4b70();
  }
  fVar10 = (float)puVar3[0x11];
  if ((float)puVar3[0x11] <= *(float *)(lVar4 + 0x134)) {
    fVar10 = *(float *)(lVar4 + 0x134);
  }
  fVar11 = (float)puVar3[0x10];
  if ((float)puVar3[0x10] <= *(float *)(lVar4 + 0x130)) {
    fVar11 = *(float *)(lVar4 + 0x130);
  }
  *(float *)(lVar4 + 0x134) = fVar10;
  *(float *)(lVar4 + 0x130) = fVar11;
  uVar9 = FUN_180279af0();
  if ((*(byte *)(lVar2 + 0x28e4) & 0x40) != 0) {
    FUN_1802c2840(uVar9,puVar3);
  }
  *(undefined8 *)(puVar3 + 0xc) = 0;
  *(int *)(lVar2 + 0x24b0) = *(int *)(lVar2 + 0x24b0) + -1;
  if (*(int *)(lVar2 + 0x24b0) < 1) {
    *(undefined8 *)(lVar2 + 0x24a8) = 0;
    return puVar3;
  }
  *(longlong *)(lVar2 + 0x24a8) =
       (longlong)(*(int *)(lVar2 + 0x24b0) + -1) * 0x58 + *(longlong *)(lVar2 + 0x24c0);
  return puVar3;
}


