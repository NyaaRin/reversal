// 0x1802b5240  FUN_1802b5240
// size=3398 thunk=false
// signature: undefined FUN_1802b5240()
// status: ok


void FUN_1802b5240(longlong *param_1,int *param_2,uint param_3)

{
  byte *pbVar1;
  longlong lVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  bool bVar17;
  float fVar18;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar19;
  float fVar20;
  int local_res18 [2];
  int local_res20;
  uint local_b4;
  undefined1 local_b0 [8];
  float local_a8 [3];
  int local_9c;
  int local_98;
  int local_94;
  
  local_res20 = 1;
LAB_1802b5292:
  if ((int)param_3 < 0x600001) {
    if (param_3 == 0x600000) {
      iVar6 = param_2[2];
      iVar14 = param_2[1];
      iVar13 = (int)param_1[3];
      if (iVar14 != iVar6) {
        if (iVar13 < iVar14) {
          param_2[1] = iVar13;
          iVar14 = iVar13;
        }
        if (iVar13 < iVar6) {
          param_2[2] = iVar13;
          iVar6 = iVar13;
        }
        if (iVar14 == iVar6) {
          *param_2 = iVar14;
        }
      }
      iVar15 = *param_2;
      if (iVar13 < iVar15) {
        *param_2 = iVar13;
        iVar15 = iVar13;
      }
      if (iVar14 == iVar6) {
        param_2[2] = iVar15;
        param_2[1] = iVar15;
        iVar6 = iVar15;
      }
      else {
        *param_2 = iVar6;
      }
      if (iVar6 < 1) goto LAB_1802b56dd;
      uVar10 = param_1[4];
      uVar11 = (longlong)iVar6 + uVar10;
      goto joined_r0x0001802b56c0;
    }
    switch(param_3) {
    case 0x200000:
      iVar6 = param_2[2];
      iVar13 = param_2[1];
      bVar17 = SBORROW4(iVar13,iVar6);
      iVar14 = iVar13 - iVar6;
      bVar16 = iVar13 == iVar6;
      if (!bVar16) goto LAB_1802b54a1;
      if (*param_2 < 1) goto LAB_1802b5f2d;
      uVar11 = param_1[4];
      uVar10 = uVar11 + (longlong)*param_2;
      goto joined_r0x0001802b5394;
    case 0x200001:
      iVar6 = param_2[2];
      iVar14 = param_2[1];
      if (iVar14 == iVar6) {
        iVar13 = *param_2;
        iVar15 = (int)param_1[3];
        if (iVar13 < iVar15) {
          iVar15 = FUN_180268c20(local_res18,(longlong)iVar13 + param_1[4],
                                 (longlong)iVar15 + param_1[4]);
          iVar6 = param_2[2];
          iVar15 = iVar13 + iVar15;
          iVar14 = param_2[1];
        }
        else {
          iVar15 = iVar15 + 1;
        }
        *param_2 = iVar15;
        iVar13 = (int)param_1[3];
        if (iVar14 != iVar6) {
          if (iVar13 < iVar14) {
            param_2[1] = iVar13;
            iVar14 = iVar13;
          }
          if (iVar13 < iVar6) {
            param_2[2] = iVar13;
            iVar6 = iVar13;
          }
          if (iVar14 == iVar6) {
            *param_2 = iVar14;
            iVar15 = iVar14;
          }
        }
      }
      else {
        iVar15 = iVar6;
        if (iVar6 < iVar14) {
          param_2[2] = iVar14;
          param_2[1] = iVar6;
          iVar15 = iVar14;
          iVar14 = iVar6;
        }
        iVar6 = (int)param_1[3];
        if (iVar6 < iVar14) {
          iVar14 = iVar6;
        }
        if (iVar6 < iVar15) {
          param_2[2] = iVar6;
          iVar15 = iVar6;
        }
        if (iVar14 == iVar15) {
          *param_2 = iVar14;
        }
        *(undefined1 *)((longlong)param_2 + 0x16) = 0;
        param_2[1] = iVar15;
        *param_2 = iVar15;
        iVar13 = (int)param_1[3];
      }
      if (iVar13 < iVar15) {
        *param_2 = iVar13;
        *(undefined1 *)((longlong)param_2 + 0x16) = 0;
        return;
      }
      *(undefined1 *)((longlong)param_2 + 0x16) = 0;
      return;
    case 0x200002:
    case 0x20000e:
      goto switchD_1802b52c5_caseD_200002;
    case 0x200003:
    case 0x20000f:
      goto switchD_1802b52c5_caseD_200003;
    case 0x200004:
      iVar6 = param_2[2];
      iVar14 = param_2[1];
      iVar13 = (int)param_1[3];
      if (iVar14 != iVar6) {
        if (iVar13 < iVar14) {
          param_2[1] = iVar13;
          iVar14 = iVar13;
        }
        if (iVar13 < iVar6) {
          param_2[2] = iVar13;
          iVar6 = iVar13;
        }
        if (iVar14 == iVar6) {
          *param_2 = iVar14;
        }
      }
      iVar15 = *param_2;
      if (iVar13 < iVar15) {
        *param_2 = iVar13;
        iVar15 = iVar13;
      }
      if (iVar14 == iVar6) {
        iVar13 = FUN_1802b4740(param_1,param_2,iVar15);
      }
      else if (iVar6 < iVar14) {
        param_2[1] = iVar6;
        *param_2 = iVar6;
        param_2[2] = iVar6;
        *(undefined1 *)((longlong)param_2 + 0x16) = 0;
        iVar13 = FUN_1802b4740(param_1,param_2);
      }
      else {
        *param_2 = iVar14;
        param_2[2] = iVar14;
        *(undefined1 *)((longlong)param_2 + 0x16) = 0;
        iVar13 = FUN_1802b4740(param_1,param_2,iVar14);
      }
      break;
    case 0x200005:
      iVar6 = param_2[2];
      iVar14 = param_2[1];
      iVar13 = (int)param_1[3];
      if (iVar14 != iVar6) {
        if (iVar13 < iVar14) {
          param_2[1] = iVar13;
          iVar14 = iVar13;
        }
        if (iVar13 < iVar6) {
          param_2[2] = iVar13;
          iVar6 = iVar13;
        }
        if (iVar14 == iVar6) {
          *param_2 = iVar14;
        }
      }
      iVar15 = *param_2;
      if (iVar13 < iVar15) {
        *param_2 = iVar13;
        iVar15 = iVar13;
      }
      if (iVar14 != iVar6) {
        if (iVar6 < iVar14) {
          param_2[2] = iVar14;
          param_2[1] = iVar6;
          iVar6 = iVar14;
        }
        iVar14 = (int)param_1[3];
        if (iVar14 < iVar6) {
          param_2[2] = iVar14;
          iVar6 = iVar14;
        }
        *param_2 = iVar6;
        param_2[1] = iVar6;
        *(undefined1 *)((longlong)param_2 + 0x16) = 0;
        iVar15 = iVar6;
      }
      iVar13 = FUN_1802b48c0(param_1,param_2,iVar15);
      break;
    case 0x200006:
      param_2[1] = 0;
      param_2[2] = 0;
      *param_2 = 0;
      *(undefined1 *)((longlong)param_2 + 0x16) = 0;
      return;
    case 0x200007:
      *param_2 = (int)param_1[3];
      param_2[1] = 0;
      param_2[2] = 0;
      *(undefined1 *)((longlong)param_2 + 0x16) = 0;
      return;
    case 0x200008:
      goto switchD_1802b52c5_caseD_200008;
    case 0x200009:
      goto switchD_1802b52c5_caseD_200009;
    case 0x20000a:
      FUN_1802b6250(param_1,param_2);
      goto LAB_1802b5f2d;
    case 0x20000b:
      FUN_1802b64e0(param_1,param_2);
      goto LAB_1802b5f2d;
    case 0x20000c:
      iVar6 = param_2[2];
      iVar13 = param_2[1];
      bVar17 = SBORROW4(iVar13,iVar6);
      iVar14 = iVar13 - iVar6;
      bVar16 = false;
      if (iVar13 == iVar6) {
        iVar6 = FUN_1802b4430(param_1,*param_2);
LAB_1802b54bc:
        iVar14 = param_2[2];
        iVar13 = param_2[1];
        *param_2 = iVar6;
        iVar15 = (int)param_1[3];
        if (iVar13 != iVar14) {
          if (iVar15 < iVar13) {
            param_2[1] = iVar15;
            iVar13 = iVar15;
          }
          if (iVar15 < iVar14) goto LAB_1802b54db;
          goto LAB_1802b54e1;
        }
        goto LAB_1802b54ec;
      }
LAB_1802b54a1:
      if (!bVar16 && bVar17 == iVar14 < 0) {
        param_2[1] = iVar6;
        iVar13 = iVar6;
      }
      goto LAB_1802b5f28;
    case 0x20000d:
      iVar6 = param_2[2];
      iVar14 = param_2[1];
      if (iVar14 == iVar6) {
        iVar6 = FUN_1802b4690(param_1,*param_2);
        goto LAB_1802b54bc;
      }
      iVar13 = iVar6;
      if (iVar6 < iVar14) {
        param_2[2] = iVar14;
        param_2[1] = iVar6;
        iVar13 = iVar14;
        iVar14 = iVar6;
      }
      iVar6 = (int)param_1[3];
      if (iVar6 < iVar14) {
        iVar14 = iVar6;
      }
      if (iVar6 < iVar13) {
        param_2[2] = iVar6;
        iVar13 = iVar6;
      }
      if (iVar14 == iVar13) {
        *param_2 = iVar14;
      }
      param_2[1] = iVar13;
      break;
    default:
      goto switchD_1802b52c5_default;
    }
  }
  else {
    switch(param_3) {
    case 0x600001:
      iVar6 = param_2[2];
      if (param_2[1] == iVar6) {
        iVar6 = *param_2;
        param_2[2] = iVar6;
        param_2[1] = iVar6;
      }
      else {
        *param_2 = iVar6;
      }
      iVar14 = (int)param_1[3];
      if (iVar6 < iVar14) {
        iVar14 = FUN_180268c20(local_res18,(longlong)iVar6 + param_1[4],
                               (longlong)iVar14 + param_1[4]);
        iVar14 = iVar14 + iVar6;
      }
      else {
        iVar14 = iVar14 + 1;
      }
      param_2[2] = iVar14;
      if (param_2[1] != iVar14) {
        iVar6 = (int)param_1[3];
        if (iVar6 < param_2[1]) {
          param_2[1] = iVar6;
        }
        if (iVar6 < iVar14) {
          param_2[2] = iVar6;
          *param_2 = iVar6;
          goto LAB_1802b5f2d;
        }
      }
      *param_2 = iVar14;
      goto LAB_1802b5f2d;
    case 0x600002:
    case 0x60000e:
switchD_1802b52c5_caseD_200002:
      if ((param_3 & 0xffbfffff) == 0x20000e) {
        local_res20 = param_2[4];
      }
      else if (*(char *)((longlong)param_2 + 0x17) != '\0') {
        param_3 = param_3 & 0x400000 | 0x200000;
        goto LAB_1802b5292;
      }
      iVar13 = local_res20;
      iVar14 = param_2[2];
      iVar6 = param_2[1];
      if ((param_3 & 0x400000) == 0) {
        if (iVar6 == iVar14) {
          iVar14 = *param_2;
        }
        else {
          if (iVar14 < iVar6) {
            param_2[1] = iVar14;
            iVar6 = iVar14;
          }
          *param_2 = iVar6;
          param_2[2] = iVar6;
          *(undefined1 *)((longlong)param_2 + 0x16) = 0;
          iVar14 = iVar6;
        }
        iVar15 = (int)param_1[3];
      }
      else {
        if (iVar6 == iVar14) {
          iVar14 = *param_2;
          param_2[2] = iVar14;
          param_2[1] = iVar14;
          iVar6 = iVar14;
        }
        else {
          *param_2 = iVar14;
        }
        iVar15 = (int)param_1[3];
        if (iVar6 != iVar14) {
          if (iVar15 < iVar6) {
            param_2[1] = iVar15;
            iVar6 = iVar15;
          }
          iVar7 = iVar14;
          if (iVar15 < iVar14) {
            iVar14 = *param_2;
            param_2[2] = iVar15;
            iVar7 = iVar15;
          }
          if (iVar6 == iVar7) {
            *param_2 = iVar6;
            iVar14 = iVar6;
          }
        }
      }
      if (iVar15 < iVar14) {
        *param_2 = iVar15;
        iVar14 = iVar15;
      }
      FUN_1802b4eb0(local_a8,param_1,iVar14,*(undefined1 *)((longlong)param_2 + 0x17));
      fVar5 = local_a8[0];
      fVar4 = DAT_180381384;
      if (iVar13 < 1) {
        return;
      }
      local_res18[0] = 0;
      iVar6 = local_94;
      iVar14 = local_9c;
      do {
        iVar15 = iVar6;
        iVar13 = local_res18[0];
        fVar20 = fVar5;
        if (*(char *)((longlong)param_2 + 0x16) != '\0') {
          fVar20 = (float)param_2[7];
        }
        if (iVar15 == iVar14) {
          return;
        }
        *param_2 = iVar15;
        FUN_1802b4230(local_a8,param_1,iVar15);
        iVar6 = local_94;
        iVar7 = 0;
        fVar19 = local_a8[0];
        if (0 < local_94) {
          do {
            FUN_180268c20(&local_b4,(longlong)iVar15 + (longlong)iVar7 + param_1[4],
                          (longlong)(int)param_1[3] + param_1[4]);
            fVar18 = fVar4;
            if ((short)local_b4 != 10) {
              lVar2 = *param_1;
              piVar3 = *(int **)(lVar2 + 0x1230);
              if ((*piVar3 <= (int)(local_b4 & 0xffff)) ||
                 (fVar18 = *(float *)(*(longlong *)(piVar3 + 2) + ((ulonglong)local_b4 & 0xffff) * 4
                                     ), fVar18 < 0.0)) {
                fVar18 = (float)FUN_18029cb50(piVar3);
              }
              fVar18 = fVar18 * *(float *)(lVar2 + 0x1240);
            }
            iVar13 = *param_2;
            iVar8 = (int)param_1[3];
            if (iVar13 < iVar8) {
              iVar8 = FUN_180268c20(local_b0,(longlong)iVar13 + param_1[4],
                                    (longlong)iVar8 + param_1[4]);
              iVar8 = iVar13 + iVar8;
              fVar18 = extraout_XMM0_Da_00;
            }
            else {
              iVar8 = iVar8 + 1;
            }
            iVar13 = local_res18[0];
            if ((fVar18 == fVar4) || (fVar20 < fVar19 + fVar18)) break;
            iVar7 = iVar7 + (iVar8 - *param_2);
            *param_2 = iVar8;
            fVar19 = fVar19 + fVar18;
          } while (iVar7 < iVar6);
        }
        iVar6 = param_2[2];
        iVar7 = param_2[1];
        iVar8 = (int)param_1[3];
        if (iVar7 != iVar6) {
          if (iVar8 < iVar7) {
            param_2[1] = iVar8;
            iVar7 = iVar8;
          }
          if (iVar8 < iVar6) {
            param_2[2] = iVar8;
            iVar6 = iVar8;
          }
          if (iVar7 == iVar6) {
            *param_2 = iVar7;
          }
        }
        iVar6 = *param_2;
        if (iVar8 < iVar6) {
          *param_2 = iVar8;
          iVar6 = iVar8;
        }
        if (iVar6 == iVar14) {
          *(undefined1 *)((longlong)param_1 + 0x76) = 1;
        }
        else if (iVar6 == iVar15) {
          *(undefined1 *)((longlong)param_1 + 0x76) = 0;
        }
        param_2[7] = (int)fVar20;
        *(undefined1 *)((longlong)param_2 + 0x16) = 1;
        if ((param_3 & 0x400000) != 0) {
          param_2[2] = *param_2;
        }
        if (iVar15 < 1) {
          uVar10 = 0;
        }
        else {
          uVar10 = (ulonglong)(iVar15 - 1U);
          if (0 < (int)(iVar15 - 1U)) {
            uVar11 = param_1[4];
            do {
              uVar12 = uVar10 + uVar11;
              do {
                if (uVar12 <= uVar11) {
                  iVar6 = (int)uVar11;
                  uVar12 = uVar11;
                  goto LAB_1802b5b98;
                }
                pbVar1 = (byte *)(uVar12 - 1);
                uVar12 = uVar12 - 1;
              } while ((*pbVar1 & 0xc0) == 0x80);
              iVar6 = (int)param_1[4];
LAB_1802b5b98:
              uVar9 = (int)uVar12 - iVar6;
            } while ((*(char *)((longlong)(int)uVar9 + uVar11) != '\n') &&
                    (uVar10 = (ulonglong)uVar9, 0 < (int)uVar9));
          }
        }
        iVar6 = FUN_1802b4740(param_1,param_2,uVar10);
        local_res18[0] = iVar13 + 1;
        iVar14 = iVar15;
        if (local_res20 <= local_res18[0]) {
          return;
        }
      } while( true );
    case 0x600003:
    case 0x60000f:
switchD_1802b52c5_caseD_200003:
      if ((param_3 & 0xffbfffff) == 0x20000f) {
        local_res20 = param_2[4];
      }
      else if (*(char *)((longlong)param_2 + 0x17) != '\0') goto code_r0x0001802b530e;
      iVar13 = local_res20;
      iVar14 = param_2[2];
      iVar6 = param_2[1];
      if ((param_3 & 0x400000) == 0) {
        if (iVar6 == iVar14) {
          iVar14 = *param_2;
        }
        else {
          iVar15 = iVar14;
          if (iVar14 < iVar6) {
            param_2[2] = iVar6;
            param_2[1] = iVar14;
            iVar15 = iVar6;
            iVar6 = iVar14;
          }
          iVar14 = iVar15;
          iVar15 = (int)param_1[3];
          if (iVar15 < iVar6) {
            iVar6 = iVar15;
          }
          if (iVar15 < iVar14) {
            param_2[2] = iVar15;
            iVar14 = iVar15;
          }
          if (iVar6 == iVar14) {
            *param_2 = iVar6;
          }
          *param_2 = iVar14;
          param_2[1] = iVar14;
          *(undefined1 *)((longlong)param_2 + 0x16) = 0;
        }
        iVar15 = (int)param_1[3];
      }
      else {
        if (iVar6 == iVar14) {
          iVar14 = *param_2;
          param_2[2] = iVar14;
          param_2[1] = iVar14;
          iVar6 = iVar14;
        }
        else {
          *param_2 = iVar14;
        }
        iVar15 = (int)param_1[3];
        if (iVar6 != iVar14) {
          if (iVar15 < iVar6) {
            param_2[1] = iVar15;
            iVar6 = iVar15;
          }
          iVar7 = iVar14;
          if (iVar15 < iVar14) {
            iVar14 = *param_2;
            param_2[2] = iVar15;
            iVar7 = iVar15;
          }
          if (iVar6 == iVar7) {
            *param_2 = iVar6;
            iVar14 = iVar6;
          }
        }
      }
      if (iVar15 < iVar14) {
        *param_2 = iVar15;
        iVar14 = iVar15;
      }
      FUN_1802b4eb0(local_a8,param_1,iVar14,*(undefined1 *)((longlong)param_2 + 0x17));
      fVar5 = local_a8[0];
      fVar4 = DAT_180381384;
      local_res18[0] = 0;
      if (iVar13 < 1) {
        return;
      }
      do {
        iVar6 = local_res18[0];
        fVar20 = fVar5;
        if (*(char *)((longlong)param_2 + 0x16) != '\0') {
          fVar20 = (float)param_2[7];
        }
        if (local_98 == 0) {
          return;
        }
        iVar15 = local_9c + local_98;
        *param_2 = iVar15;
        FUN_1802b4230(local_a8,param_1,iVar15);
        iVar14 = local_94;
        iVar13 = 0;
        if (0 < local_94) {
          fVar19 = local_a8[0];
          do {
            FUN_180268c20(&local_b4,(longlong)iVar13 + param_1[4] + (longlong)iVar15,
                          (longlong)(int)param_1[3] + param_1[4]);
            fVar18 = fVar4;
            if ((short)local_b4 != 10) {
              lVar2 = *param_1;
              piVar3 = *(int **)(lVar2 + 0x1230);
              if ((*piVar3 <= (int)(local_b4 & 0xffff)) ||
                 (fVar18 = *(float *)(*(longlong *)(piVar3 + 2) + ((ulonglong)local_b4 & 0xffff) * 4
                                     ), fVar18 < 0.0)) {
                fVar18 = (float)FUN_18029cb50(piVar3);
              }
              fVar18 = fVar18 * *(float *)(lVar2 + 0x1240);
            }
            iVar6 = *param_2;
            iVar7 = (int)param_1[3];
            if (iVar6 < iVar7) {
              iVar7 = FUN_180268c20(local_b0,(longlong)iVar6 + param_1[4],
                                    (longlong)iVar7 + param_1[4]);
              iVar7 = iVar6 + iVar7;
              fVar18 = extraout_XMM0_Da;
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar6 = local_res18[0];
            if ((fVar18 == fVar4) || (fVar19 = fVar19 + fVar18, fVar20 < fVar19)) break;
            iVar13 = iVar13 + (iVar7 - *param_2);
            *param_2 = iVar7;
          } while (iVar13 < iVar14);
        }
        iVar13 = param_2[2];
        iVar7 = param_2[1];
        iVar8 = (int)param_1[3];
        if (iVar7 != iVar13) {
          if (iVar8 < iVar7) {
            param_2[1] = iVar8;
            iVar7 = iVar8;
          }
          if (iVar8 < iVar13) {
            param_2[2] = iVar8;
            iVar13 = iVar8;
          }
          if (iVar7 == iVar13) {
            *param_2 = iVar7;
          }
        }
        iVar13 = *param_2;
        if (iVar8 < iVar13) {
          *param_2 = iVar8;
          iVar13 = iVar8;
        }
        if (iVar13 == iVar15) {
          *(undefined1 *)((longlong)param_1 + 0x76) = 0;
        }
        param_2[7] = (int)fVar20;
        *(undefined1 *)((longlong)param_2 + 0x16) = 1;
        if ((param_3 & 0x400000) != 0) {
          param_2[2] = *param_2;
        }
        local_res18[0] = iVar6 + 1;
        local_98 = iVar14;
        local_9c = iVar15;
        if (local_res20 <= local_res18[0]) {
          return;
        }
      } while( true );
    case 0x600004:
      iVar6 = param_2[2];
      iVar14 = param_2[1];
      iVar13 = (int)param_1[3];
      if (iVar14 != iVar6) {
        if (iVar13 < iVar14) {
          param_2[1] = iVar13;
          iVar14 = iVar13;
        }
        if (iVar13 < iVar6) {
          param_2[2] = iVar13;
          iVar6 = iVar13;
        }
        if (iVar14 == iVar6) {
          *param_2 = iVar14;
        }
      }
      iVar15 = *param_2;
      if (iVar13 < iVar15) {
        *param_2 = iVar13;
        iVar15 = iVar13;
      }
      if (iVar14 == iVar6) {
        param_2[2] = iVar15;
        param_2[1] = iVar15;
        iVar13 = FUN_1802b4740(param_1,param_2);
      }
      else {
        *param_2 = iVar6;
        iVar13 = FUN_1802b4740(param_1,param_2,iVar6);
      }
      break;
    case 0x600005:
      iVar6 = param_2[2];
      iVar14 = param_2[1];
      iVar13 = (int)param_1[3];
      if (iVar14 != iVar6) {
        if (iVar13 < iVar14) {
          param_2[1] = iVar13;
          iVar14 = iVar13;
        }
        if (iVar13 < iVar6) {
          param_2[2] = iVar13;
          iVar6 = iVar13;
        }
        if (iVar14 == iVar6) {
          *param_2 = iVar14;
        }
      }
      iVar15 = *param_2;
      if (iVar13 < iVar15) {
        *param_2 = iVar13;
        iVar15 = iVar13;
      }
      if (iVar14 == iVar6) {
        param_2[2] = iVar15;
        param_2[1] = iVar15;
        iVar6 = iVar15;
      }
      else {
        *param_2 = iVar6;
      }
      iVar13 = FUN_1802b48c0(param_1,param_2,iVar6);
      break;
    case 0x600006:
      if (param_2[1] == param_2[2]) {
        param_2[1] = *param_2;
      }
      param_2[2] = 0;
      *param_2 = 0;
      *(undefined1 *)((longlong)param_2 + 0x16) = 0;
      return;
    case 0x600007:
      if (param_2[1] == param_2[2]) {
        param_2[2] = *param_2;
        param_2[1] = *param_2;
        iVar13 = (int)param_1[3];
      }
      else {
        *param_2 = param_2[2];
        iVar13 = (int)param_1[3];
      }
      break;
    case 0x600008:
switchD_1802b52c5_caseD_200008:
      iVar13 = param_2[2];
      iVar6 = param_2[1];
      iVar14 = (int)param_1[3];
      if (iVar6 != iVar13) {
        if (iVar14 < iVar6) {
          param_2[1] = iVar14;
          iVar6 = iVar14;
        }
        if (iVar14 < iVar13) {
          param_2[2] = iVar14;
          iVar13 = iVar14;
        }
        if (iVar6 == iVar13) {
          *param_2 = iVar6;
        }
        if (iVar14 < *param_2) {
          *param_2 = iVar14;
        }
        goto LAB_1802b5d8f;
      }
      iVar6 = *param_2;
      if (iVar6 < iVar14) {
        iVar14 = FUN_180268c20(local_res18,(longlong)iVar6 + param_1[4],
                               (longlong)iVar14 + param_1[4]);
        FUN_1802b50e0(param_1,param_2,*param_2,(iVar14 + iVar6) - *param_2);
      }
      goto LAB_1802b5f2d;
    case 0x600009:
switchD_1802b52c5_caseD_200009:
      iVar13 = param_2[2];
      iVar6 = param_2[1];
      iVar14 = (int)param_1[3];
      if (iVar6 == iVar13) {
        iVar6 = *param_2;
        if (iVar14 < iVar6) {
          *param_2 = iVar14;
          iVar6 = iVar14;
        }
        if (iVar6 < 1) goto LAB_1802b5f2d;
        uVar10 = param_1[4];
        uVar11 = (longlong)iVar6 + uVar10;
        if (uVar11 <= uVar10) goto LAB_1802b5e0b;
        goto LAB_1802b5df3;
      }
      if (iVar14 < iVar6) {
        param_2[1] = iVar14;
        iVar6 = iVar14;
      }
      if (iVar14 < iVar13) {
        param_2[2] = iVar14;
        iVar13 = iVar14;
      }
      if (iVar6 == iVar13) {
        *param_2 = iVar6;
      }
      if (iVar14 < *param_2) {
        *param_2 = iVar14;
      }
LAB_1802b5d8f:
      if (iVar6 != iVar13) {
        if (iVar6 < iVar13) {
          FUN_1802b50e0(param_1,param_2,iVar6,iVar13 - iVar6);
          iVar13 = param_2[1];
          break;
        }
        FUN_1802b50e0(param_1,param_2,iVar13,iVar6 - iVar13);
        iVar13 = param_2[2];
        param_2[1] = iVar13;
        goto LAB_1802b5f2b;
      }
      goto LAB_1802b5f2d;
    default:
      goto switchD_1802b52c5_default;
    case 0x60000c:
      if (param_2[1] == param_2[2]) {
        param_2[2] = *param_2;
        param_2[1] = *param_2;
      }
      iVar6 = FUN_1802b4430(param_1,*param_2);
      iVar14 = param_2[1];
      *param_2 = iVar6;
      param_2[2] = iVar6;
      iVar15 = (int)param_1[3];
      if (iVar14 != iVar6) {
        if (iVar15 < iVar14) {
          param_2[1] = iVar15;
          iVar14 = iVar15;
        }
        iVar13 = iVar6;
        if (iVar15 < iVar6) {
          param_2[2] = iVar15;
          iVar13 = iVar15;
        }
        if (iVar14 == iVar13) {
          *param_2 = iVar14;
          iVar6 = iVar14;
        }
      }
      goto LAB_1802b54ec;
    case 0x60000d:
      if (param_2[1] == param_2[2]) {
        param_2[2] = *param_2;
        param_2[1] = *param_2;
      }
      iVar14 = FUN_1802b4690(param_1,*param_2);
      iVar13 = param_2[1];
      *param_2 = iVar14;
      param_2[2] = iVar14;
      iVar15 = (int)param_1[3];
      iVar6 = iVar14;
      if (iVar13 != iVar14) {
        if (iVar15 < iVar13) {
          param_2[1] = iVar15;
          iVar13 = iVar15;
        }
        if (iVar15 < iVar14) {
LAB_1802b54db:
          iVar14 = iVar15;
          param_2[2] = iVar14;
          iVar15 = iVar14;
        }
LAB_1802b54e1:
        if (iVar13 == iVar14) {
          *param_2 = iVar13;
          iVar6 = iVar13;
        }
      }
LAB_1802b54ec:
      if (iVar15 < iVar6) {
        *param_2 = iVar15;
      }
      goto switchD_1802b52c5_default;
    }
LAB_1802b5f28:
    param_2[2] = iVar13;
  }
LAB_1802b5f2b:
  *param_2 = iVar13;
  goto LAB_1802b5f2d;
  while (pbVar1 = (byte *)(uVar11 - 1), uVar11 = uVar11 - 1, uVar12 = uVar11,
        (*pbVar1 & 0xc0) == 0x80) {
joined_r0x0001802b56c0:
    uVar12 = uVar10;
    if (uVar11 <= uVar10) break;
  }
  iVar6 = (int)uVar12 - (int)param_1[4];
  param_2[2] = iVar6;
LAB_1802b56dd:
  *param_2 = iVar6;
  goto LAB_1802b5f2d;
  while (pbVar1 = (byte *)(uVar10 - 1), uVar10 = uVar10 - 1, uVar12 = uVar10,
        (*pbVar1 & 0xc0) == 0x80) {
joined_r0x0001802b5394:
    uVar12 = uVar11;
    if (uVar10 <= uVar11) break;
  }
  *param_2 = (int)uVar12 - (int)param_1[4];
  goto LAB_1802b5f2d;
code_r0x0001802b530e:
  param_3 = param_3 & 0x400000 | 0x200001;
  goto LAB_1802b5292;
  while (uVar10 < uVar11) {
LAB_1802b5df3:
    pbVar1 = (byte *)(uVar11 - 1);
    uVar11 = uVar11 - 1;
    if ((*pbVar1 & 0xc0) != 0x80) {
      iVar6 = *param_2;
      uVar10 = uVar11;
      goto LAB_1802b5e0b;
    }
  }
  iVar6 = *param_2;
LAB_1802b5e0b:
  iVar14 = (int)uVar10 - (int)param_1[4];
  FUN_1802b50e0(param_1,param_2,iVar14,iVar6 - iVar14);
  *param_2 = iVar14;
LAB_1802b5f2d:
  *(undefined1 *)((longlong)param_2 + 0x16) = 0;
switchD_1802b52c5_default:
  return;
}


