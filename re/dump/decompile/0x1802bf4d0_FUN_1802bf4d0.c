// 0x1802bf4d0  FUN_1802bf4d0
// size=1286 thunk=false
// signature: undefined FUN_1802bf4d0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802bf4d0(float *param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  int iVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_f8 [32];
  double local_d8;
  double local_d0;
  double local_c8;
  undefined8 local_b8;
  int local_b0 [2];
  longlong local_a8;
  undefined1 local_98 [64];
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_f8;
  uVar13 = param_2 & 0x1800000;
  uVar10 = param_2 & 0x700000;
  if ((uVar10 == 0) || (uVar13 == 0)) {
    cVar8 = FUN_180281720("context",0);
    if (cVar8 != '\0') {
      lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar4 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar5 = *(longlong *)(lVar4 + 0xec0);
      local_a8 = lVar5;
      FUN_180279080(0x10000,1);
      uVar9 = *(uint *)(lVar5 + 0x264c);
      if (uVar10 == 0) {
        cVar8 = FUN_1802adc80(&DAT_180380308,uVar9 >> 0x14 & 0xffffff01);
        if (cVar8 != '\0') {
          uVar9 = uVar9 & 0xff9fffff | 0x100000;
        }
        cVar8 = FUN_1802adc80(&DAT_180380304,
                              CONCAT31((uint3)(uVar9 >> 0x1d),(char)(uVar9 >> 0x15)) & 0xffffff01);
        if (cVar8 != '\0') {
          uVar9 = uVar9 & 0xffafffff | 0x200000;
        }
        cVar8 = FUN_1802adc80(&DAT_180380314,
                              CONCAT31((uint3)(uVar9 >> 0x1e),(char)(uVar9 >> 0x16)) & 0xffffff01);
        if (cVar8 != '\0') {
          uVar9 = uVar9 & 0xffcfffff | 0x400000;
        }
      }
      if (uVar13 == 0) {
        if (uVar10 == 0) {
          FUN_1802afb40();
        }
        cVar8 = FUN_1802adc80("0..255",CONCAT31((uint3)(uVar9 >> 0x1f),(char)(uVar9 >> 0x17)) &
                                       0xffffff01);
        if (cVar8 != '\0') {
          uVar9 = uVar9 & 0xfeffffff | 0x800000;
        }
        cVar8 = FUN_1802adc80("0.00..1.00",(byte)(uVar9 >> 0x18) & 1);
        if (cVar8 != '\0') {
          uVar9 = uVar9 & 0xff7fffff | 0x1000000;
        }
      }
      if ((uVar10 == 0) || (uVar13 == 0)) {
        FUN_1802afb40();
      }
      local_b0[0] = -0x40800000;
      local_b0[1] = 0;
      cVar8 = FUN_1802abf60("Copy as..",local_b0,0);
      if (cVar8 != '\0') {
        FUN_180280fd0(&DAT_18037f624);
      }
      cVar8 = FUN_180281720(&DAT_18037f624,0);
      if (cVar8 != '\0') {
        fVar1 = *param_1;
        if (0.0 <= fVar1) {
          fVar15 = DAT_180380bb0;
          if (fVar1 <= DAT_180380bb0) {
            fVar15 = fVar1;
          }
        }
        else {
          fVar15 = 0.0;
        }
        fVar2 = param_1[1];
        local_b0[0] = (int)(fVar15 * DAT_1803811c8 + DAT_180380ac0);
        if (0.0 <= fVar2) {
          fVar15 = DAT_180380bb0;
          if (fVar2 <= DAT_180380bb0) {
            fVar15 = fVar2;
          }
        }
        else {
          fVar15 = 0.0;
        }
        fVar3 = param_1[2];
        iVar12 = (int)(fVar15 * DAT_1803811c8 + DAT_180380ac0);
        if (0.0 <= fVar3) {
          fVar15 = DAT_180380bb0;
          if (fVar3 <= DAT_180380bb0) {
            fVar15 = fVar3;
          }
        }
        else {
          fVar15 = 0.0;
        }
        iVar14 = (int)(fVar15 * DAT_1803811c8 + DAT_180380ac0);
        if ((param_2 & 2) == 0) {
          fVar15 = param_1[3];
          fVar16 = 0.0;
          if ((0.0 <= fVar15) && (fVar16 = DAT_180380bb0, fVar15 <= DAT_180380bb0)) {
            fVar16 = fVar15;
          }
          iVar11 = (int)(fVar16 * DAT_1803811c8 + DAT_180380ac0);
        }
        else {
          iVar11 = 0xff;
          fVar15 = DAT_180380bb0;
        }
        local_c8 = (double)fVar15;
        local_d0 = (double)fVar3;
        local_d8 = (double)fVar2;
        FUN_180268750(local_98,0x40,"(%.3ff, %.3ff, %.3ff, %.3ff)",(double)fVar1);
        local_b8 = 0;
        cVar8 = FUN_1802c1850(local_98,0,0,&local_b8);
        if (cVar8 != '\0') {
          if (*(char *)(lVar4 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          pcVar6 = *(code **)(*(longlong *)(lVar4 + 0xec0) + 0xc08);
          if (pcVar6 != (code *)0x0) {
            (*pcVar6)(*(longlong *)(lVar4 + 0xec0),local_98);
          }
        }
        iVar7 = local_b0[0];
        local_c8 = (double)CONCAT44(local_c8._4_4_,iVar11);
        local_d0 = (double)CONCAT44(local_d0._4_4_,iVar14);
        local_d8 = (double)CONCAT44(local_d8._4_4_,iVar12);
        FUN_180268750(local_98,0x40,"(%d,%d,%d,%d)",local_b0[0]);
        local_b8 = 0;
        cVar8 = FUN_1802c1850(local_98,0,0,&local_b8);
        if (cVar8 != '\0') {
          if (*(char *)(lVar4 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          pcVar6 = *(code **)(*(longlong *)(lVar4 + 0xec0) + 0xc08);
          if (pcVar6 != (code *)0x0) {
            (*pcVar6)(*(longlong *)(lVar4 + 0xec0),local_98);
          }
        }
        local_d0 = (double)CONCAT44(local_d0._4_4_,iVar14);
        local_d8 = (double)CONCAT44(local_d8._4_4_,iVar12);
        FUN_180268750(local_98,0x40,"#%02X%02X%02X",iVar7);
        local_b8 = 0;
        cVar8 = FUN_1802c1850(local_98,0,0,&local_b8);
        if (cVar8 != '\0') {
          if (*(char *)(lVar4 + 0x10) == '\0') {
            __dyn_tls_on_demand_init();
          }
          pcVar6 = *(code **)(*(longlong *)(lVar4 + 0xec0) + 0xc08);
          if (pcVar6 != (code *)0x0) {
            (*pcVar6)(*(longlong *)(lVar4 + 0xec0),local_98);
          }
        }
        if ((param_2 & 2) == 0) {
          local_c8 = (double)CONCAT44(local_c8._4_4_,iVar11);
          local_d0 = (double)CONCAT44(local_d0._4_4_,iVar14);
          local_d8 = (double)CONCAT44(local_d8._4_4_,iVar12);
          FUN_180268750(local_98,0x40,"#%02X%02X%02X%02X",iVar7);
          local_b8 = 0;
          cVar8 = FUN_1802c1850(local_98,0,0,&local_b8);
          if (cVar8 != '\0') {
            if (*(char *)(lVar4 + 0x10) == '\0') {
              __dyn_tls_on_demand_init();
            }
            pcVar6 = *(code **)(*(longlong *)(lVar4 + 0xec0) + 0xc08);
            if (pcVar6 != (code *)0x0) {
              (*pcVar6)(*(longlong *)(lVar4 + 0xec0),local_98);
            }
          }
        }
        FUN_180281800();
      }
      *(uint *)(local_a8 + 0x264c) = uVar9;
      if (*(char *)(lVar4 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar4 = *(longlong *)(lVar4 + 0xec0);
      iVar12 = *(int *)(lVar4 + 0x2008);
      if (iVar12 < 2) {
        FUN_18027e9c0("Calling PopItemFlag() too many times!");
      }
      else {
        *(int *)(lVar4 + 0x2008) = iVar12 + -1;
        *(undefined4 *)(lVar4 + 0x1eb8) =
             *(undefined4 *)(*(longlong *)(lVar4 + 0x2010) + -8 + (longlong)iVar12 * 4);
      }
      FUN_180281800();
    }
  }
  return;
}


