// 0x18029fa50  FUN_18029fa50
// size=1204 thunk=false
// signature: undefined FUN_18029fa50()
// status: ok


void FUN_18029fa50(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                  float param_5,undefined8 param_6,undefined4 param_7,uint param_8)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  ulonglong uVar6;
  char cVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_f8;
  undefined8 local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  
  uVar11 = 0xf0;
  if ((param_8 & 0x1f0) != 0) {
    uVar11 = param_8;
  }
  uVar6 = param_4 >> 0x18 & 0xff;
  local_f8 = param_3;
  local_f0 = param_2;
  if (0xfe < (uint)uVar6) {
    FUN_180295000(param_1,&local_f0,&local_f8,param_4,param_7,uVar11);
    return;
  }
  uVar5 = (uint)param_4 & 0xff;
  uVar10 = (uint)(param_4 >> 8) & 0xff;
  bVar9 = (byte)(param_4 >> 0x10);
  fVar13 = (float)uVar6 / DAT_1803811c8;
  uVar8 = (((int)((float)(int)(bVar9 - 0xcc) * fVar13 + DAT_18038119c) | 0xff00U) << 8 |
          (int)((float)(int)(uVar10 - 0xcc) * fVar13 + DAT_18038119c)) << 8 |
          (int)((float)(int)(uVar5 - 0xcc) * fVar13 + DAT_18038119c);
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  cVar7 = *(char *)(lVar2 + 0x10);
  if (cVar7 == '\0') {
    __dyn_tls_on_demand_init();
    cVar7 = *(char *)(lVar2 + 0x10);
  }
  fVar3 = DAT_180380bb0;
  fVar1 = *(float *)(*(longlong *)(lVar2 + 0xec0) + 0xc84);
  if (fVar1 < DAT_180380bb0) {
    uVar8 = (int)(longlong)((float)(uVar8 >> 0x18) * fVar1) << 0x18 | uVar8 & 0xffffff;
  }
  uVar10 = (((int)((float)(int)(bVar9 - 0x80) * fVar13 + DAT_180381148) | 0xff00U) << 8 |
           (int)((float)(int)(uVar10 - 0x80) * fVar13 + DAT_180381148)) << 8 |
           (int)((float)(int)(uVar5 - 0x80) * fVar13 + DAT_180381148);
  if (cVar7 == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar13 = *(float *)(*(longlong *)(lVar2 + 0xec0) + 0xc84);
  if (fVar13 < fVar3) {
    uVar10 = (int)(longlong)((float)(uVar10 >> 0x18) * fVar13) << 0x18 | uVar10 & 0xffffff;
  }
  FUN_180295000(param_1,&local_f0,&local_f8,uVar8,param_7,uVar11);
  bVar9 = 0;
  fVar1 = local_f0._4_4_;
  fVar13 = local_f8._4_4_;
  param_6._4_4_ = param_6._4_4_ + local_f0._4_4_;
  if (param_6._4_4_ < local_f8._4_4_) {
    fVar3 = (float)local_f8;
    fVar4 = (float)local_f0;
    do {
      fVar14 = fVar1;
      if ((fVar1 <= param_6._4_4_) && (fVar14 = fVar13, param_6._4_4_ <= fVar13)) {
        fVar14 = param_6._4_4_;
      }
      param_6._4_4_ = param_6._4_4_ + param_5;
      fVar15 = param_6._4_4_;
      if (fVar13 <= param_6._4_4_) {
        fVar15 = fVar13;
      }
      if ((fVar14 < fVar15) &&
         (fVar12 = (float)bVar9 * param_5 + (float)param_6 + fVar4, fVar12 < fVar3)) {
        do {
          local_e0 = fVar4;
          if ((fVar4 <= fVar12) && (local_e0 = fVar3, fVar12 <= fVar3)) {
            local_e0 = fVar12;
          }
          local_e8 = fVar12 + param_5;
          if (fVar3 <= fVar12 + param_5) {
            local_e8 = fVar3;
          }
          if (local_e0 < local_e8) {
            uVar5 = 0x100;
            if (fVar14 <= fVar1) {
              uVar5 = 0x100;
              if (local_e0 <= fVar4) {
                uVar5 = 0x110;
              }
              if (fVar3 <= local_e8) {
                uVar5 = uVar5 | 0x20;
              }
            }
            if (fVar13 <= fVar15) {
              if (local_e0 <= fVar4) {
                uVar5 = uVar5 | 0x40;
              }
              if (fVar3 <= local_e8) {
                uVar5 = uVar5 | 0x80;
              }
            }
            if ((uVar11 == 0x100) || (uVar5 == 0x100)) {
              uVar5 = 0x100;
            }
            else {
              uVar5 = uVar5 & uVar11;
            }
            local_e4 = fVar15;
            local_dc = fVar14;
            FUN_180295000(param_1,&local_e0,&local_e8,uVar10,param_7,uVar5);
          }
          fVar12 = fVar12 + param_5 + param_5;
        } while (fVar12 < fVar3);
      }
      bVar9 = bVar9 ^ 1;
    } while (param_6._4_4_ < fVar13);
  }
  return;
}


