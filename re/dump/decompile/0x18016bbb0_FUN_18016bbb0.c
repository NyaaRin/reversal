// 0x18016bbb0  FUN_18016bbb0
// size=1600 thunk=false
// signature: undefined FUN_18016bbb0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18016bbb0(undefined8 *param_1,longlong *param_2,float *param_3)

{
  float fVar1;
  longlong lVar2;
  float *pfVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  longlong lVar8;
  undefined8 *******pppppppuVar9;
  undefined8 *******pppppppuVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_108;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_dc;
  undefined8 ******local_d8 [2];
  undefined8 local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  
  local_b8 = DAT_1803da4c0 ^ (ulonglong)auStack_158;
  fVar12 = (float)FUN_18016b110(param_2);
  local_f8 = (*(float *)(param_2 + 8) - *(float *)(param_2 + 10)) * fVar12 +
             *(float *)(param_2 + 10);
  local_f4 = (*(float *)((longlong)param_2 + 0x44) - *(float *)((longlong)param_2 + 0x54)) * fVar12
             + *(float *)((longlong)param_2 + 0x54);
  local_f0 = (*(float *)(param_2 + 9) - *(float *)(param_2 + 0xb)) * fVar12 +
             *(float *)(param_2 + 0xb);
  local_ec = *(float *)*param_1;
  uVar4 = FUN_180268ed0(&local_f8);
  fVar1 = *param_3;
  fVar16 = param_3[3];
  local_ec = fVar16;
  local_dc = fVar16;
  if (*(char *)param_1[1] == '\0') {
    fVar15 = param_3[1];
    fVar12 = (fVar16 - fVar15) * fVar12;
    fVar17 = param_3[2];
    fVar18 = fVar16 - fVar12;
    fVar13 = fVar17;
    local_f8 = fVar1;
    local_f4 = fVar18;
    local_f0 = fVar17;
    local_e8 = fVar1;
    if (0.0 < fVar12) {
      local_130 = (undefined8 *******)((ulonglong)local_130._4_4_ << 0x20);
      local_138 = *(undefined4 *)param_1[3];
      FUN_180295000(*(undefined8 *)param_1[2],&local_f8,&local_f0,uVar4);
    }
  }
  else {
    fVar13 = param_3[2];
    fVar12 = (fVar13 - fVar1) * fVar12;
    local_f8 = *param_3;
    fVar18 = param_3[1];
    fVar17 = fVar12 + fVar1;
    fVar15 = fVar18;
    local_f4 = fVar18;
    local_f0 = fVar17;
    if (0.0 < fVar12) {
      local_130 = (undefined8 *******)((ulonglong)local_130._4_4_ << 0x20);
      local_138 = *(undefined4 *)param_1[3];
      FUN_180295000(*(undefined8 *)param_1[2],&local_f8,&local_f0,uVar4);
    }
  }
  fVar12 = 0.0;
  if (*(char *)((longlong)param_2 + 0x71) != '\0') {
    iVar5 = (**(code **)(*param_2 + 0x58))(param_2);
    iVar6 = (**(code **)(*param_2 + 0x60))(param_2);
    if ((*(char *)((longlong)param_2 + 0x72) == '\0') || (iVar5 < iVar6)) {
      switch((int)param_2[1]) {
      case 0:
      case 1:
      case 4:
      case 5:
      case 6:
      case 7:
        bVar11 = true;
        break;
      default:
        bVar11 = false;
        break;
      case 8:
        bVar11 = (char)param_2[0xe] == '\0';
      }
      if (DAT_1803fcb80 == '\0') {
        if (bVar11) {
          bVar11 = fVar13 - fVar1 < DAT_18038102c;
        }
        else {
          bVar11 = fVar16 - fVar15 < DAT_180381078;
        }
        if (bVar11) {
          return;
        }
      }
      uVar4 = (**(code **)(*param_2 + 0x58))(param_2);
      FUN_180013ba0(local_d8,uVar4);
      fVar1 = DAT_180380bb0;
      fVar16 = DAT_180380bb0;
      if (((DAT_1803fcb80 == '\0') &&
          (fVar13 = DAT_1803fcb6c * DAT_1803809e4 + DAT_180380b6c, fVar16 = DAT_180380b6c,
          DAT_180380b6c <= fVar13)) && (fVar16 = DAT_180380bb0, fVar13 <= DAT_180380bb0)) {
        fVar16 = fVar13;
      }
      fVar16 = fVar16 * _DAT_180380b48;
      lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      cVar7 = *(char *)(lVar2 + 0x10);
      if (cVar7 == '\0') {
        __dyn_tls_on_demand_init();
        cVar7 = *(char *)(lVar2 + 0x10);
      }
      fVar13 = *(float *)(*(longlong *)(lVar2 + 0xec0) + 0x1238);
      pppppppuVar9 = local_d8;
      if (0xf < local_c0) {
        pppppppuVar9 = (undefined8 *******)local_d8[0];
      }
      if (cVar7 == '\0') {
        __dyn_tls_on_demand_init();
      }
      fVar15 = *(float *)(*(longlong *)(lVar2 + 0xec0) + 0x1238);
      if (pppppppuVar9 != (undefined8 *******)0x0) {
        local_108 = 0;
        local_118 = 0;
        local_120 = 0;
        local_128 = 0;
        local_138 = DAT_180381384;
        local_130 = pppppppuVar9;
        FUN_18029e350(&local_f8,*(undefined8 *)(*(longlong *)(lVar2 + 0xec0) + 0x1228),fVar15,
                      DAT_180381308);
        fVar12 = (float)(int)(local_f8 + DAT_180380ba8);
        fVar15 = local_f4;
      }
      fVar15 = fVar15 * fVar16;
      fVar12 = fVar12 * fVar16;
      if (*(char *)param_1[1] == '\0') {
        iVar5 = FUN_18016aed0(param_2);
        pfVar3 = (float *)param_1[5];
        if (iVar5 == 1) {
          fVar14 = (*pfVar3 - fVar12) - DAT_180380d30;
        }
        else if (iVar5 == 2) {
          fVar14 = pfVar3[2] + DAT_180380d30;
        }
        else {
          fVar14 = (pfVar3[2] + *pfVar3) * DAT_180380ac0 - fVar12 * DAT_180380ac0;
        }
        fVar18 = fVar18 - fVar15 * DAT_180380ac0;
        fVar12 = param_3[1] + fVar1;
        if ((param_3[1] + fVar1 <= fVar18) &&
           (fVar12 = (param_3[3] - fVar15) - fVar1, fVar18 <= fVar12)) {
          fVar12 = fVar18;
        }
      }
      else {
        fVar17 = fVar17 - fVar12 * DAT_180380ac0;
        fVar14 = *param_3;
        if ((*param_3 <= fVar17) && (fVar14 = param_3[2] - fVar12, fVar17 <= param_3[2] - fVar12)) {
          fVar14 = fVar17;
        }
        fVar12 = DAT_180380ac0;
        iVar5 = FUN_18016aed0(param_2);
        lVar2 = param_1[5];
        if (iVar5 == 1) {
          fVar12 = (*(float *)(lVar2 + 4) - fVar15) - fVar1;
        }
        else if (iVar5 == 2) {
          fVar12 = *(float *)(lVar2 + 0xc) + fVar1;
        }
        else {
          fVar12 = (*(float *)(lVar2 + 0xc) + *(float *)(lVar2 + 4)) * fVar12 - fVar15 * fVar12;
        }
      }
      if (*(int *)param_1[6] < 2) {
        lVar8 = (longlong)*(int *)param_1[6] * 0x38;
        lVar2 = param_1[7];
        *(float *)(lVar8 + lVar2) = fVar14;
        *(float *)(lVar8 + 4 + lVar2) = fVar12;
        *(float *)((longlong)*(int *)param_1[6] * 0x38 + 8 + param_1[7]) = fVar13 * fVar16;
        local_f8 = *(float *)(param_2 + 0x11);
        local_f4 = *(float *)((longlong)param_2 + 0x8c);
        local_f0 = *(float *)(param_2 + 0x12);
        local_ec = *(float *)((longlong)param_2 + 0x94) * *(float *)*param_1;
        uVar4 = FUN_180268ed0(&local_f8);
        *(undefined4 *)((longlong)*(int *)param_1[6] * 0x38 + 0xc + param_1[7]) = uVar4;
        *(char *)((longlong)*(int *)param_1[6] * 0x38 + 0x14 + param_1[7]) = (char)param_2[0x13];
        local_f8 = *(float *)((longlong)param_2 + 0x9c);
        local_f4 = *(float *)(param_2 + 0x14);
        local_f0 = *(float *)((longlong)param_2 + 0xa4);
        local_ec = *(float *)(param_2 + 0x15) * *(float *)*param_1;
        uVar4 = FUN_180268ed0(&local_f8);
        *(undefined4 *)((longlong)*(int *)param_1[6] * 0x38 + 0x10 + param_1[7]) = uVar4;
        pppppppuVar9 = (undefined8 *******)(param_1[7] + 0x18 + (longlong)*(int *)param_1[6] * 0x38)
        ;
        if (pppppppuVar9 != local_d8) {
          pppppppuVar10 = local_d8;
          if (0xf < local_c0) {
            pppppppuVar10 = (undefined8 *******)local_d8[0];
          }
          FUN_180212700(pppppppuVar9,pppppppuVar10,local_c8);
        }
        *(int *)param_1[6] = *(int *)param_1[6] + 1;
      }
      FUN_18020e450(local_d8);
    }
  }
  return;
}


