// 0x1800aa340  FUN_1800aa340
// size=2955 thunk=false
// signature: undefined FUN_1800aa340()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_1800aa340(uint *param_1,uint *param_2,float *param_3,longlong param_4)

{
  int *piVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_6a8 [32];
  undefined1 *local_688;
  float local_678;
  undefined8 local_670;
  float local_668;
  float local_660;
  float local_65c;
  float local_658;
  float local_650;
  float local_64c;
  float local_648;
  float local_638;
  float local_634;
  float local_630;
  float local_628;
  float local_624;
  float local_620;
  undefined8 local_618;
  float local_610;
  undefined8 local_60c;
  float local_604;
  float local_600;
  float local_5f8;
  float local_5f0;
  float local_5e8;
  float local_5e0;
  longlong local_5d8;
  float local_5d0;
  float local_5cc;
  float local_5c8;
  float local_5c4;
  float local_5c0;
  float local_5bc;
  float local_5b8;
  float local_5b4;
  float local_5b0;
  float local_5ac;
  float local_5a8;
  float local_5a4;
  float local_5a0;
  float local_59c;
  float local_598;
  float local_594;
  float local_590;
  float local_58c;
  float local_588;
  float local_584;
  float local_580;
  undefined1 local_578 [672];
  undefined4 local_2d8;
  undefined1 local_2d4;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined1 local_2a8 [12];
  float local_29c;
  float local_298;
  float local_294;
  float local_290;
  float local_28c;
  float local_288;
  float local_27c;
  byte local_25e;
  longlong local_250;
  undefined **local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  float local_218;
  float local_210;
  float fStack_20c;
  float local_208;
  undefined1 local_1f8 [64];
  undefined8 local_1b8;
  undefined1 local_1a8 [64];
  undefined8 local_168;
  undefined1 local_158 [55];
  char local_121;
  ulonglong local_e8;
  
  local_e8 = DAT_1803da4c0 ^ (ulonglong)auStack_6a8;
  memset(local_578,0,0x2a0);
  FUN_180202e70(local_578);
  local_2d8 = 0;
  local_2d4 = 0;
  local_2d0 = 0;
  local_2c8 = 0;
  local_2c0 = 0;
  local_2b8 = 0;
  FUN_1800aaf40(param_4,local_578);
  fVar14 = DAT_180380938;
  if ((((DAT_1803fa610 != (longlong *)0x0) && ((*param_1 & 0x7f800000) != 0x7f800000)) &&
      ((param_1[1] & 0x7f800000) != 0x7f800000)) &&
     ((((param_1[2] & 0x7f800000) != 0x7f800000 && ((*param_2 & 0x7f800000) != 0x7f800000)) &&
      (((param_2[1] & 0x7f800000) != 0x7f800000 && ((param_2[2] & 0x7f800000) != 0x7f800000)))))) {
    uVar2 = *(undefined8 *)param_2;
    local_218 = (float)param_2[2];
    local_220._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
    if (DAT_180380938 <
        local_220._4_4_ * local_220._4_4_ + (float)uVar2 * (float)uVar2 + local_218 * local_218) {
      local_220 = uVar2;
      (*(code *)PTR_FUN_1803da000)(&local_220);
      if (((((uint)(float)local_220 & 0x7f800000) != 0x7f800000) &&
          (((uint)local_220._4_4_ & 0x7f800000) != 0x7f800000)) &&
         (((uint)local_218 & 0x7f800000) != 0x7f800000)) {
        local_670 = *(undefined8 *)param_1;
        fVar17 = (float)local_670;
        fVar13 = (float)((ulonglong)local_670 >> 0x20);
        local_668 = (float)param_1[2];
        local_678 = param_3[1];
        fVar16 = *param_3;
        uVar5 = 0;
        local_238 = vftable_CDoubleTraceFilter;
        local_230 = *(undefined8 *)(param_3 + 4);
        local_228 = *(undefined8 *)(param_3 + 6);
        fVar8 = param_3[10];
        local_5d8 = param_4;
        if ((int)fVar8 < 1) {
          fVar8 = 1.4013e-45;
          uVar5 = 0;
        }
        else if (0xe < (int)fVar8) {
          fVar8 = 1.96182e-44;
        }
        do {
          fVar4 = local_668;
          fVar3 = local_678;
          fVar11 = DAT_180380b68;
          fVar9 = DAT_180380ac0;
          fVar12 = DAT_180380a6c;
          fVar15 = DAT_1803809ec;
          piVar1 = (int *)(param_4 + 0x2a0);
          if ((int)fVar8 <= *piVar1) {
LAB_1800aa7c9:
            return 0 < *piVar1;
          }
          local_1b8 = 0;
          local_5d0 = (float)local_220 * DAT_1803812a0;
          local_5cc = local_220._4_4_ * DAT_1803812a0;
          local_5c8 = local_218 * DAT_1803812a0;
          local_638 = fVar17 + local_5d0;
          local_634 = local_670._4_4_ + local_5cc;
          local_630 = local_668 + local_5c8;
          local_5c4 = local_638;
          local_5c0 = local_634;
          local_5bc = local_630;
          FUN_18001fde0(local_1f8,&local_670,&local_638);
          local_688 = local_2a8;
          (**(code **)(*DAT_1803fa610 + 0x20))(DAT_1803fa610,local_1f8,0x46004003,&local_238);
          lVar7 = (longlong)*piVar1;
          *piVar1 = *piVar1 + 1;
          *(ulonglong *)(param_4 + lVar7 * 0x30) = CONCAT44(fVar13,fVar17);
          *(float *)(param_4 + 8 + lVar7 * 0x30) = fVar4;
          *(float *)(param_4 + 0xc + lVar7 * 0x30) = local_29c;
          *(float *)(param_4 + 0x10 + lVar7 * 0x30) = local_298;
          *(float *)(param_4 + 0x14 + lVar7 * 0x30) = local_294;
          *(undefined4 *)(param_4 + 0x18 + lVar7 * 0x30) = uVar5;
          *(float *)(param_4 + 0x1c + lVar7 * 0x30) = fVar3;
          *(longlong *)(param_4 + 0x20 + lVar7 * 0x30) = local_250;
          *(undefined4 *)(param_4 + 0x28 + lVar7 * 0x30) = 0;
          *(undefined1 *)(param_4 + 0x2c + lVar7 * 0x30) = 1;
          *(float *)(param_4 + 0x2ac) = local_29c;
          *(float *)(param_4 + 0x2b0) = local_298;
          *(float *)(param_4 + 0x2b4) = local_294;
          *(float *)(param_4 + 0x2b8) = fVar3;
          if ((DAT_180380bb0 <= local_27c) || ((local_25e & 4) != 0)) goto LAB_1800aa7c9;
          if ((*(longlong *)(param_3 + 8) != 0) && (local_250 == *(longlong *)(param_3 + 8))) {
            uVar5 = FUN_1800aa2f0();
            *(undefined4 *)(param_4 + 0x28 + lVar7 * 0x30) = uVar5;
            *(undefined1 *)(param_4 + 0x2a4) = 1;
            iVar6 = *(int *)(param_4 + 0x28 + lVar7 * 0x30);
LAB_1800aa7c3:
            *(int *)(param_4 + 0x2a8) = iVar6;
            goto LAB_1800aa7c9;
          }
          iVar6 = FUN_1800aa2f0();
          if (0 < iVar6) {
            *(int *)(param_4 + 0x28 + lVar7 * 0x30) = iVar6;
            *(undefined1 *)(param_4 + 0x2a4) = 1;
            goto LAB_1800aa7c3;
          }
          uVar5 = FUN_1800aa2b0(local_2a8);
          fVar18 = local_218;
          fVar4 = local_288;
          fVar13 = local_28c;
          fVar17 = local_290;
          switch(uVar5) {
          case 0x43:
          case 0x44:
          case 0x47:
          case 0x50:
          case 0x56:
            fVar12 = fVar11;
            break;
          default:
            fVar12 = fVar9;
            break;
          case 0x48:
          case 0x4c:
            break;
          case 0x4a:
          case 0x4e:
            fVar12 = fVar15;
            break;
          case 0x4d:
            fVar12 = DAT_180380bb0;
            break;
          case 0x53:
            fVar12 = DAT_1803809c4;
            break;
          case 0x54:
            fVar12 = DAT_180380b3c;
            break;
          case 0x55:
            fVar12 = DAT_180380a3c;
            break;
          case 0x59:
            fVar12 = DAT_180380ae4;
          }
          local_600 = local_290;
          if ((((((uint)local_290 & 0x7f800000) == 0x7f800000) ||
               (local_5f8 = local_28c, ((uint)local_28c & 0x7f800000) == 0x7f800000)) ||
              (local_5f0 = local_288, ((uint)local_288 & 0x7f800000) == 0x7f800000)) ||
             (local_28c * local_28c + local_290 * local_290 + local_288 * local_288 <= fVar14))
          goto LAB_1800aa7c9;
          fVar15 = local_220._4_4_;
          fVar14 = (float)local_220;
          fVar11 = local_28c * local_220._4_4_ + local_290 * (float)local_220 +
                   local_288 * local_218;
          fVar9 = DAT_180380bb0;
          if ((fVar11 <= DAT_180380bb0) && (fVar9 = DAT_180381384, DAT_180381384 <= fVar11)) {
            fVar9 = fVar11;
          }
          fVar9 = asinf(fVar9);
          fVar9 = (float)((uint)fVar9 ^ DAT_1803817f0) * DAT_1803810c0;
          if (NAN(fVar9)) goto LAB_1800aa7c9;
          fVar10 = DAT_180380bb0;
          if (*(char *)(param_3 + 2) != '\0') {
            fVar10 = 0.0;
          }
          fVar10 = fVar12 * DAT_1803810c8 * fVar10;
          iVar6 = *(int *)(param_4 + 0x2c0) + *(int *)(param_4 + 700);
          if (fVar9 <= fVar10) {
            if ((fVar10 * DAT_180380b10 <= fVar9) || (5 < iVar6)) goto LAB_1800aa7c9;
            fVar11 = fVar11 + fVar11;
            local_588 = fVar17 * fVar11;
            local_584 = fVar13 * fVar11;
            local_580 = fVar4 * fVar11;
            local_678 = fVar14 - local_588;
            local_5e8 = fVar15 - local_584;
            local_5e0 = fVar18 - local_580;
            if ((((uint)local_678 & 0x7f800000) == 0x7f800000) ||
               (((((uint)local_5e8 & 0x7f800000) == 0x7f800000 ||
                 (((uint)local_5e0 & 0x7f800000) == 0x7f800000)) ||
                (local_5e8 * local_5e8 + local_678 * local_678 + local_5e0 * local_5e0 <=
                 DAT_180380938)))) goto LAB_1800aa7c9;
            local_210 = local_678;
            fStack_20c = local_5e8;
            local_208 = local_5e0;
            (*(code *)PTR_FUN_1803da000)(&local_210);
            local_678 = fVar3 * DAT_180380b4c;
            fVar17 = fVar17 + local_29c;
            fVar13 = fVar13 + local_298;
            local_668 = fVar4 + local_294;
            local_60c = CONCAT44(fVar13,fVar17);
            local_670 = CONCAT44(fVar13,fVar17);
            local_220 = CONCAT44(fStack_20c,local_210);
            local_218 = local_208;
            uVar5 = 2;
            *(int *)(param_4 + 0x2c0) = *(int *)(param_4 + 0x2c0) + 1;
            local_604 = local_668;
          }
          else {
            if ((5 < iVar6) || (fVar12 <= DAT_180380948)) goto LAB_1800aa7c9;
            fVar11 = fVar16 * DAT_180380e28;
            fVar17 = (fVar11 / fVar12) * DAT_180380a94;
            fVar12 = DAT_180380f00;
            fVar9 = DAT_180381120;
            if ((fVar17 <= DAT_180381120) && (fVar9 = fVar17, fVar17 <= DAT_180380f00))
            goto LAB_1800aa7c9;
            while( true ) {
              if (fVar9 <= fVar12) goto LAB_1800aa7c9;
              local_5b8 = fVar14 * fVar12;
              local_5b4 = fVar15 * fVar12;
              local_5b0 = fVar18 * fVar12;
              fVar17 = local_29c + local_5b8;
              fVar13 = local_298 + local_5b4;
              fVar14 = local_294 + local_5b0;
              local_168 = 0;
              local_628 = fVar17 - local_5b8;
              local_624 = fVar13 - local_5b4;
              local_620 = fVar14 - local_5b0;
              local_660 = fVar17;
              local_65c = fVar13;
              local_658 = fVar14;
              local_64c = fVar12;
              local_5ac = fVar17;
              local_5a8 = fVar13;
              local_5a4 = fVar14;
              local_5a0 = local_5b8;
              local_59c = local_5b4;
              local_598 = local_5b0;
              local_594 = local_628;
              local_590 = local_624;
              local_58c = local_620;
              FUN_18001fde0(local_1a8,&local_660,&local_628);
              local_688 = local_158;
              (**(code **)(*DAT_1803fa610 + 0x20))(DAT_1803fa610,local_1a8,0x200400b,&local_238);
              if (local_121 == '\0') break;
              fVar12 = fVar12 + DAT_180380f00;
              fVar15 = local_220._4_4_;
              fVar18 = local_218;
              fVar14 = (float)local_220;
            }
            local_650 = fVar16 - ((fVar12 * fVar11) / fVar9) / DAT_180380e28;
            if (local_650 <= 0.0) {
              local_650 = 0.0;
            }
            local_678 = local_678 * DAT_180380afc;
            fVar17 = (float)local_220 + fVar17;
            fVar13 = local_220._4_4_ + fVar13;
            local_668 = local_218 + fVar14;
            local_618 = CONCAT44(fVar13,fVar17);
            local_670 = CONCAT44(fVar13,fVar17);
            uVar5 = 1;
            *(int *)(param_4 + 700) = *(int *)(param_4 + 700) + 1;
            fVar16 = local_650;
            local_610 = local_668;
          }
          *(undefined1 *)(param_4 + 0x2c + lVar7 * 0x30) = 0;
          fVar14 = DAT_180380938;
          local_648 = local_678;
        } while( true );
      }
    }
  }
  return false;
}


