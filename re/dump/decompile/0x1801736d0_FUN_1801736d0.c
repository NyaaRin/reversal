// 0x1801736d0  FUN_1801736d0
// size=989 thunk=false
// signature: undefined FUN_1801736d0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1801736d0(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                       undefined4 *param_5)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  longlong *plVar7;
  float fVar8;
  char cVar9;
  int iVar10;
  char cVar11;
  uint uVar12;
  ulonglong uVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_118 [32];
  uint local_f8;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [4];
  float local_d4;
  float local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  ulonglong local_b8;
  
  plVar7 = DAT_1803fa5f8;
  fVar6 = DAT_180380bb0;
  fVar5 = DAT_180380ac0;
  local_b8 = DAT_1803da4c0 ^ (ulonglong)auStack_118;
  if ((DAT_1803fa5f8 == (longlong *)0x0) || (param_2 == 8)) {
    uVar13 = DAT_1803fb108 - DAT_1803fb100 >> 3;
  }
  else {
    local_e8._4_4_ = (float)((ulonglong)param_4 >> 0x20);
    fVar8 = local_e8._4_4_;
    fVar1 = (float)param_5[1];
    fVar2 = (float)param_5[3];
    local_e0._4_4_ = (float)((ulonglong)param_3 >> 0x20);
    switch(param_2) {
    case 0:
    case 4:
    case 5:
      fVar16 = (fVar1 + local_e8._4_4_) - local_e0._4_4_;
      break;
    case 1:
    case 6:
    case 7:
      fVar16 = local_e0._4_4_ - (fVar2 + local_e8._4_4_);
      break;
    case 2:
    case 3:
    case 9:
    case 0xb:
      fVar16 = local_e0._4_4_ - (fVar1 + local_e8._4_4_);
      break;
    default:
      fVar16 = 0.0;
      break;
    case 10:
    case 0xc:
      fVar16 = (fVar2 + local_e8._4_4_) - local_e0._4_4_;
    }
    uVar12 = 0;
    uVar13 = 0xffffffff;
    local_e8 = param_4;
    local_e0 = param_3;
    if (0 < (int)(DAT_1803fb108 - DAT_1803fb100 >> 3)) {
      do {
        plVar4 = *(longlong **)(DAT_1803fb100 + (longlong)(int)uVar12 * 8);
        bVar14 = *(uint *)(plVar4 + 1) == param_2;
        iVar10 = (**(code **)(*plVar7 + 8))(plVar7);
        if (((iVar10 == 4) || (iVar10 == 7)) && (param_2 < 2)) {
          uVar3 = *(uint *)(plVar4 + 1);
          if (param_2 == 0) {
            if ((uVar3 & 0xfffffffa) == 0) {
              if (uVar3 != 1) goto LAB_1801738a6;
              bVar14 = false;
            }
            else {
LAB_18017387a:
              bVar14 = false;
            }
          }
          else {
joined_r0x000180173866:
            if ((uVar3 == 1) || (uVar3 - 6 < 2)) {
LAB_1801738a6:
              bVar14 = true;
            }
            else {
              bVar14 = false;
            }
          }
        }
        else {
          iVar10 = (**(code **)(*plVar4 + 8))(plVar4);
          if ((iVar10 == 4) || (iVar10 == 7)) {
            if ((int)plVar4[1] == 0) {
              if (((param_2 & 0xfffffffa) == 0) && (param_2 != 1)) goto LAB_1801738a6;
              goto LAB_18017387a;
            }
            uVar3 = param_2;
            if ((int)plVar4[1] == 1) goto joined_r0x000180173866;
          }
        }
        if ((((plVar4 != plVar7) && (bVar14)) && (*(char *)((longlong)plVar4 + 0x14) != '\0')) &&
           ((DAT_1803fcb80 != '\0' ||
            (((DAT_1803fcb81 == '\0' || (*(char *)((longlong)plVar4 + 0x16) != '\0')) &&
             ((*(char *)((longlong)plVar4 + 0x15) == '\0' ||
              (DAT_1803fcb68 <= *(float *)(plVar4 + 3))))))))) {
          if ((param_2 - 2 < 2) || (param_2 - 9 < 4)) {
            iVar10 = (**(code **)(*plVar4 + 8))(plVar4);
            if ((iVar10 == 4) || (iVar10 == 7)) {
              cVar11 = '\x01';
            }
            else {
              cVar11 = '\0';
            }
            iVar10 = (**(code **)(*plVar7 + 8))(plVar7);
            if ((iVar10 == 4) || (iVar10 == 7)) {
              cVar9 = '\x01';
            }
            else {
              cVar9 = '\0';
            }
            if (cVar11 != cVar9) goto LAB_1801739dc;
          }
          local_c8 = *param_5;
          uStack_c4 = param_5[1];
          uStack_c0 = param_5[2];
          uStack_bc = param_5[3];
          uVar13 = (ulonglong)(uVar12 + 1);
          local_f8 = param_2;
          FUN_180173490(local_d8,plVar4,param_4,&local_c8);
          if (param_2 < 0xd) {
            fVar15 = (local_d4 + local_cc) * fVar5;
            switch(param_2) {
            case 0:
            case 4:
            case 5:
              fVar15 = (fVar1 + fVar8) - fVar15;
              break;
            case 1:
            case 6:
            case 7:
              fVar15 = fVar15 - (fVar2 + fVar8);
              break;
            default:
              fVar15 = fVar15 - (fVar1 + fVar8);
              break;
            case 8:
              goto switchD_18017398b_caseD_8;
            case 10:
            case 0xc:
              fVar15 = (fVar2 + fVar8) - fVar15;
            }
          }
          else {
switchD_18017398b_caseD_8:
            fVar15 = 0.0;
          }
          if (fVar16 < fVar15 - fVar6) {
            return (ulonglong)uVar12;
          }
        }
LAB_1801739dc:
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < (int)(DAT_1803fb108 - DAT_1803fb100 >> 3));
      if (-1 < (int)uVar13) {
        return uVar13;
      }
    }
    uVar13 = DAT_1803fb108 - DAT_1803fb100 >> 3 & 0xffffffff;
  }
  return uVar13;
}


