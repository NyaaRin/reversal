// 0x180147e50  FUN_180147e50
// size=740 thunk=false
// signature: undefined FUN_180147e50()
// status: ok


undefined8 FUN_180147e50(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  int *piVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  char *_Str1;
  float fVar18;
  float fVar19;
  undefined4 local_res20 [2];
  longlong local_58;
  longlong local_50 [5];
  
  local_58 = 0;
  local_res20[0] = 0;
  local_50[0] = 0;
  lVar8 = FUN_180147c60(param_1,param_2,&local_58,local_res20,local_50);
  uVar9 = 0;
  if (lVar8 != 0) {
    *param_3 = (int)param_2;
    *(byte *)(param_3 + 3) = *(byte *)(lVar8 + 0xc) & 1;
    iVar7 = 0;
    iVar13 = *(int *)(lVar8 + 0x44);
    if (iVar13 < 1) {
      iVar16 = 1;
    }
    else {
      iVar16 = 9;
      if (iVar13 < 9) {
        iVar16 = iVar13;
      }
    }
    iVar13 = *(int *)(lVar8 + 0x48);
    if (iVar13 < 1) {
      iVar17 = 1;
    }
    else {
      iVar17 = 9;
      if (iVar13 < 9) {
        iVar17 = iVar13;
      }
    }
    for (iVar13 = 0; iVar12 = 0, iVar13 < iVar17; iVar13 = iVar13 + 1) {
      while (iVar12 < iVar16) {
        iVar4 = *(int *)(lVar8 + 0x44);
        iVar10 = iVar4 + -1;
        if (iVar12 < iVar4) {
          iVar10 = iVar12;
        }
        iVar14 = iVar13;
        if (*(int *)(lVar8 + 0x48) <= iVar13) {
          iVar14 = *(int *)(lVar8 + 0x48) + -1;
        }
        sVar3 = *(short *)(*(int *)(lVar8 + 0x3c) + lVar8 + (longlong)(iVar4 * iVar14 + iVar10) * 2)
        ;
        if ((sVar3 < 0) || (*(int *)(local_58 + 0xb4) <= (int)sVar3)) {
          iVar12 = iVar12 + 1;
        }
        else {
          lVar15 = local_58 + (longlong)sVar3 * 100 + (longlong)*(int *)(local_58 + 0xb8);
          if ((*(float *)(lVar15 + 8) <= 0.0) || (iVar4 = *(int *)(lVar15 + 0x10), iVar4 < 2)) {
            iVar12 = iVar12 + 1;
          }
          else {
            fVar19 = *(float *)(lVar15 + 8) / (float)(iVar4 + -1);
            if (iVar7 < iVar4) {
              param_3[1] = fVar19;
              iVar7 = iVar4;
            }
            if (*(int *)(lVar15 + 0x14) - 1U < 0x3f) {
              lVar11 = (longlong)*(int *)(lVar15 + 0x14) * 0x2c;
              lVar15 = *(int *)(lVar15 + 0x18) + lVar15;
              fVar18 = *(float *)(lVar11 + -0xc + lVar15);
              fVar2 = *(float *)(lVar11 + -8 + lVar15);
              fVar18 = fVar2 * fVar2 + fVar18 * fVar18;
              if (fVar18 < 0.0) {
                fVar18 = sqrtf(fVar18);
              }
              else {
                fVar18 = SQRT(fVar18);
              }
              fVar18 = fVar18 * fVar19;
              if ((float)param_3[2] <= fVar18 && fVar18 != (float)param_3[2]) {
                param_3[2] = fVar18;
              }
            }
            iVar12 = iVar12 + 1;
          }
        }
      }
    }
LAB_18014801b:
    if (iVar12 < 2) {
      if (*(int *)(lVar8 + 0x44 + (longlong)iVar12 * 4) < 2) {
        iVar12 = iVar12 + 1;
      }
      else {
        iVar13 = *(int *)(lVar8 + 0x4c + (longlong)iVar12 * 4);
        lVar15 = (longlong)iVar13;
        if ((-1 < iVar13) && (iVar13 < *(int *)(local_58 + 300))) {
          if (local_50[0] != 0) {
            if (*(int *)(local_50[0] + 0xb8) <= iVar13) {
              iVar12 = iVar12 + 1;
              goto LAB_18014801b;
            }
            iVar13 = *(int *)(*(longlong *)(local_50[0] + 0xa8) + lVar15 * 4);
          }
          piVar1 = (int *)(*(int *)(local_58 + 0x130) + local_58 + lVar15 * 0x14);
          _Str1 = (char *)((longlong)*piVar1 + (longlong)piVar1);
          if ((_Str1 == (char *)0x0) || (iVar7 = _stricmp(_Str1,"move_x"), iVar7 != 0)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if ((_Str1 == (char *)0x0) || (iVar7 = _stricmp(_Str1,"move_y"), iVar7 != 0)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if ((bVar5) || ((!bVar6 && (iVar12 == 0)))) {
            param_3[4] = iVar13;
            param_3[6] = piVar1[2];
            param_3[7] = piVar1[3];
          }
          else {
            param_3[5] = iVar13;
            param_3[8] = piVar1[2];
            param_3[9] = piVar1[3];
          }
          iVar12 = iVar12 + 1;
          goto LAB_18014801b;
        }
        iVar12 = iVar12 + 1;
      }
      goto LAB_18014801b;
    }
    uVar9 = 1;
  }
  return uVar9;
}


