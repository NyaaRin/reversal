// 0x1802b0cb0  FUN_1802b0cb0
// size=1148 thunk=false
// signature: undefined FUN_1802b0cb0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1802b0cb0(undefined4 param_1,float *param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  byte *pbVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined1 local_c0 [16];
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  byte local_a0;
  byte local_9f [15];
  ulonglong local_90;
  
  local_90 = DAT_1803da4c0 ^ (ulonglong)auStack_e8;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar2 + 0xec0);
  cVar4 = FUN_180280db0(param_1,0);
  if (cVar4 == '\0') {
    *(undefined4 *)(lVar3 + 0x1f48) = 0;
    uVar5 = 0;
  }
  else {
    fVar16 = param_2[2] - *param_2;
    if ((*(uint *)(lVar3 + 0x1f48) & 0x10) == 0) {
      uVar8 = param_3 | 4;
      if ((param_3 & 0x1e) != 0) {
        uVar8 = param_3;
      }
      if ((uVar8 & 4) == 0) {
        if ((uVar8 & 2) == 0) {
          uVar10 = 0xffffffff;
          if ((uVar8 & 8) != 0) {
            uVar10 = 0x14;
          }
        }
        else {
          uVar10 = 4;
        }
      }
      else {
        uVar10 = 8;
      }
      uVar13 = *(uint *)(lVar3 + 0x1f48) & 2;
      if ((((uVar13 == 0) || (fVar19 = 0.0, *(float *)(lVar3 + 0x1f68) <= 0.0)) &&
          (fVar19 = fVar16, uVar13 == 0)) ||
         (uVar15 = DAT_180381308, *(float *)(lVar3 + 0x1f6c) <= 0.0)) {
        uVar15 = FUN_1802b0500(uVar10);
      }
      if (*(char *)(lVar2 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar7 = *(longlong *)(lVar2 + 0xec0);
      *(uint *)(lVar7 + 0x1f48) = *(uint *)(lVar7 + 0x1f48) | 0x10;
      *(float *)(lVar7 + 0x1f8c) = fVar19;
      *(undefined4 *)(lVar7 + 0x1f90) = 0;
      *(undefined4 *)(lVar7 + 0x1f94) = 0x7f7fffff;
      *(undefined4 *)(lVar7 + 0x1f98) = uVar15;
      *(undefined8 *)(lVar7 + 0x1fa0) = 0;
      *(undefined8 *)(lVar7 + 0x1fa8) = 0;
    }
    else {
      fVar19 = *(float *)(lVar3 + 0x1f8c);
      if (*(float *)(lVar3 + 0x1f8c) <= fVar16) {
        fVar19 = fVar16;
      }
      *(float *)(lVar3 + 0x1f8c) = fVar19;
      uVar8 = param_3;
    }
    FUN_180268750(&local_a0,0x10,"##Combo_%02d",*(undefined4 *)(lVar3 + 0x2648));
    uVar11 = 0xffffffff;
    uVar13 = 0xffffffff;
    pbVar14 = local_9f;
    while (local_a0 != 0) {
      if (((local_a0 == 0x23) && (*pbVar14 == 0x23)) && (pbVar14[1] == 0x23)) {
        uVar11 = 0xffffffff;
        pbVar14 = pbVar14 + 2;
      }
      else {
        uVar11 = (ulonglong)
                 ((uint)(uVar11 >> 8) ^
                 *(uint *)(&DAT_180331380 + (uVar11 & 0xff ^ (ulonglong)local_a0) * 4));
      }
      uVar13 = (uint)uVar11;
      local_a0 = *pbVar14;
      pbVar14 = pbVar14 + 1;
    }
    lVar7 = FUN_1802736c0(~uVar13);
    if ((lVar7 != 0) && (*(char *)(lVar7 + 0xcd) != '\0')) {
      local_c8 = 0;
      lVar12 = lVar7;
      FUN_180273ee0(lVar7,&local_b0,&local_c8);
      FUN_180274030(&local_b0,lVar12,&local_c8,0xffffffff);
      FUN_180273d40(&local_c8,lVar7,&local_b0);
      uVar15 = 3;
      if ((uVar8 & 1) != 0) {
        uVar15 = 0;
      }
      *(undefined4 *)(lVar7 + 0xe4) = uVar15;
      FUN_180281dc0();
      iVar1 = *(int *)(lVar7 + 0xe4);
      fVar16 = *param_2;
      fVar19 = param_2[3];
      iVar9 = -(uint)(iVar1 != -1);
      local_c0 = _DAT_180381500;
      do {
        iVar6 = iVar1;
        if ((iVar9 == -1) ||
           (iVar6 = *(int *)(local_c0 + (longlong)iVar9 * 4),
           *(int *)(local_c0 + (longlong)iVar9 * 4) != iVar1)) {
          fVar18 = fVar16;
          fVar17 = fVar19;
          if (iVar6 != 3) {
            if (iVar6 == 1) {
LAB_1802b0fd3:
              fVar17 = param_2[1] - local_c8._4_4_;
            }
            else if (iVar6 == 0) {
              fVar18 = param_2[2] - (float)local_c8;
            }
            else {
              fVar18 = 0.0;
              fVar17 = 0.0;
              if (iVar6 == 2) {
                fVar18 = param_2[2] - (float)local_c8;
                goto LAB_1802b0fd3;
              }
            }
          }
          if ((((local_b0 <= fVar18) && (local_ac <= fVar17)) &&
              (fVar18 + (float)local_c8 <= local_a8)) && (fVar17 + local_c8._4_4_ <= local_a4)) {
            *(int *)(lVar7 + 0xe4) = iVar6;
            goto LAB_1802b1044;
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < 4);
      *(undefined4 *)(lVar7 + 0xe4) = 0xffffffff;
      fVar17 = fVar16 + (float)local_c8;
      if (local_a8 <= fVar16 + (float)local_c8) {
        fVar17 = local_a8;
      }
      fVar16 = fVar19 + local_c8._4_4_;
      if (local_a4 <= fVar19 + local_c8._4_4_) {
        fVar16 = local_a4;
      }
      fVar18 = fVar17 - (float)local_c8;
      if (fVar17 - (float)local_c8 <= local_b0) {
        fVar18 = local_b0;
      }
      fVar17 = fVar16 - local_c8._4_4_;
      if (fVar16 - local_c8._4_4_ <= local_ac) {
        fVar17 = local_ac;
      }
LAB_1802b1044:
      if (*(char *)(lVar2 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar2 = *(longlong *)(lVar2 + 0xec0);
      *(uint *)(lVar2 + 0x1f48) = *(uint *)(lVar2 + 0x1f48) | 1;
      *(float *)(lVar2 + 0x1f58) = fVar18;
      *(float *)(lVar2 + 0x1f5c) = fVar17;
      *(undefined8 *)(lVar2 + 0x1f60) = 0;
      *(undefined4 *)(lVar2 + 0x1f4c) = 1;
    }
    FUN_18026aa00(2,*(undefined4 *)(lVar3 + 0xcc4));
    cVar4 = FUN_180276630(&local_a0,0,0x4000147);
    FUN_18026abb0(1);
    if (cVar4 == '\0') {
      FUN_180281800();
      uVar5 = 0;
    }
    else {
      *(int *)(lVar3 + 0x2648) = *(int *)(lVar3 + 0x2648) + 1;
      uVar5 = 1;
    }
  }
  return uVar5;
}


