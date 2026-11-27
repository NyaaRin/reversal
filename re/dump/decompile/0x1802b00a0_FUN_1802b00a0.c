// 0x1802b00a0  FUN_1802b00a0
// size=1118 thunk=false
// signature: undefined FUN_1802b00a0()
// status: ok


void FUN_1802b00a0(void *param_1,int param_2,float param_3,float param_4)

{
  float fVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if (param_2 == 1) {
    if (0.0 <= *(float *)((longlong)param_1 + 4)) {
      param_3 = *(float *)((longlong)param_1 + 4) - param_3;
      if (param_3 <= param_4) {
        param_3 = param_4;
      }
      *(float *)((longlong)param_1 + 4) = param_3;
    }
  }
  else {
    if (1 < (ulonglong)(longlong)param_2) {
      qsort(param_1,(longlong)param_2,0xc,(_PtFuncCompare *)&LAB_1802b0080);
    }
    fVar1 = DAT_180380bb0;
    fVar13 = DAT_180380964;
    if (DAT_180380964 < param_3) {
      iVar3 = 1;
      do {
        if (param_2 <= iVar3) break;
        fVar11 = *(float *)((longlong)param_1 + 4);
        do {
          fVar9 = *(float *)((longlong)param_1 + (longlong)iVar3 * 0xc + 4);
          if (fVar9 < fVar11) {
            if (0.0 <= fVar9) goto LAB_1802b0174;
            break;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < param_2);
        fVar9 = fVar1;
LAB_1802b0174:
        fVar10 = fVar11 - param_4;
        if (fVar11 - fVar9 <= fVar11 - param_4) {
          fVar10 = fVar11 - fVar9;
        }
        if (fVar10 <= 0.0) break;
        iVar4 = 0;
        fVar11 = param_3 / (float)iVar3;
        if (fVar10 <= param_3 / (float)iVar3) {
          fVar11 = fVar10;
        }
        if (3 < iVar3) {
          do {
            lVar2 = (longlong)iVar4;
            iVar4 = iVar4 + 4;
            fVar9 = *(float *)((longlong)param_1 + lVar2 * 0xc + 4);
            fVar5 = fVar9 - param_4;
            fVar10 = fVar11;
            if (fVar5 <= fVar11) {
              fVar10 = fVar5;
            }
            *(float *)((longlong)param_1 + lVar2 * 0xc + 4) = fVar9 - fVar10;
            fVar9 = *(float *)((longlong)param_1 + lVar2 * 0xc + 0x10);
            fVar6 = fVar9 - param_4;
            fVar5 = fVar11;
            if (fVar6 <= fVar11) {
              fVar5 = fVar6;
            }
            *(float *)((longlong)param_1 + lVar2 * 0xc + 0x10) = fVar9 - fVar5;
            fVar9 = *(float *)((longlong)param_1 + lVar2 * 0xc + 0x1c);
            fVar7 = fVar9 - param_4;
            fVar6 = fVar11;
            if (fVar7 <= fVar11) {
              fVar6 = fVar7;
            }
            *(float *)((longlong)param_1 + lVar2 * 0xc + 0x1c) = fVar9 - fVar6;
            fVar9 = *(float *)((longlong)param_1 + lVar2 * 0xc + 0x28);
            fVar8 = fVar9 - param_4;
            fVar7 = fVar11;
            if (fVar8 <= fVar11) {
              fVar7 = fVar8;
            }
            param_3 = (((param_3 - fVar10) - fVar5) - fVar6) - fVar7;
            *(float *)((longlong)param_1 + lVar2 * 0xc + 0x28) = fVar9 - fVar7;
          } while (iVar4 < iVar3 + -3);
        }
        while (iVar4 < iVar3) {
          lVar2 = (longlong)iVar4;
          iVar4 = iVar4 + 1;
          fVar9 = *(float *)((longlong)param_1 + lVar2 * 0xc + 4);
          fVar5 = fVar9 - param_4;
          fVar10 = fVar11;
          if (fVar5 <= fVar11) {
            fVar10 = fVar5;
          }
          param_3 = param_3 - fVar10;
          *(float *)((longlong)param_1 + lVar2 * 0xc + 4) = fVar9 - fVar10;
        }
      } while (fVar13 < param_3);
    }
    iVar3 = 0;
    fVar13 = 0.0;
    if (3 < param_2) {
      do {
        lVar2 = (longlong)iVar3;
        iVar3 = iVar3 + 4;
        fVar11 = *(float *)((longlong)param_1 + lVar2 * 0xc + 4);
        fVar12 = (float)(int)fVar11;
        *(float *)((longlong)param_1 + lVar2 * 0xc + 4) = fVar12;
        fVar9 = *(float *)((longlong)param_1 + lVar2 * 0xc + 0x10);
        fVar7 = (float)(int)fVar9;
        *(float *)((longlong)param_1 + lVar2 * 0xc + 0x10) = fVar7;
        fVar10 = *(float *)((longlong)param_1 + lVar2 * 0xc + 0x1c);
        fVar6 = (float)(int)fVar10;
        *(float *)((longlong)param_1 + lVar2 * 0xc + 0x1c) = fVar6;
        fVar5 = *(float *)((longlong)param_1 + lVar2 * 0xc + 0x28);
        fVar8 = (float)(int)fVar5;
        *(float *)((longlong)param_1 + lVar2 * 0xc + 0x28) = fVar8;
        fVar13 = (fVar11 - fVar12) + fVar13 + (fVar9 - fVar7) + (fVar10 - fVar6) + (fVar5 - fVar8);
      } while (iVar3 < param_2 + -3);
    }
    for (; iVar3 < param_2; iVar3 = iVar3 + 1) {
      fVar11 = *(float *)((longlong)param_1 + (longlong)iVar3 * 0xc + 4);
      fVar9 = (float)(int)fVar11;
      *(float *)((longlong)param_1 + (longlong)iVar3 * 0xc + 4) = fVar9;
      fVar13 = fVar13 + (fVar11 - fVar9);
    }
    while (0.0 < fVar13) {
      iVar3 = 0;
      if (3 < param_2) {
        do {
          if (fVar13 <= 0.0) {
            return;
          }
          lVar2 = (longlong)iVar3;
          fVar11 = *(float *)((longlong)param_1 + lVar2 * 0xc + 4);
          fVar9 = *(float *)((longlong)param_1 + lVar2 * 0xc + 8) - fVar11;
          if (fVar1 <= fVar9) {
            fVar9 = fVar1;
          }
          *(float *)((longlong)param_1 + lVar2 * 0xc + 4) = fVar11 + fVar9;
          if (fVar13 - fVar9 <= 0.0) {
            return;
          }
          fVar11 = *(float *)((longlong)param_1 + lVar2 * 0xc + 0x14) -
                   *(float *)((longlong)param_1 + lVar2 * 0xc + 0x10);
          if (fVar1 <= fVar11) {
            fVar11 = fVar1;
          }
          fVar13 = (fVar13 - fVar9) - fVar11;
          *(float *)((longlong)param_1 + lVar2 * 0xc + 0x10) =
               fVar11 + *(float *)((longlong)param_1 + lVar2 * 0xc + 0x10);
          if (fVar13 <= 0.0) {
            return;
          }
          fVar11 = *(float *)((longlong)param_1 + lVar2 * 0xc + 0x20) -
                   *(float *)((longlong)param_1 + lVar2 * 0xc + 0x1c);
          if (fVar1 <= fVar11) {
            fVar11 = fVar1;
          }
          fVar13 = fVar13 - fVar11;
          *(float *)((longlong)param_1 + lVar2 * 0xc + 0x1c) =
               fVar11 + *(float *)((longlong)param_1 + lVar2 * 0xc + 0x1c);
          if (fVar13 <= 0.0) {
            return;
          }
          iVar3 = iVar3 + 4;
          fVar11 = *(float *)((longlong)param_1 + lVar2 * 0xc + 0x2c) -
                   *(float *)((longlong)param_1 + lVar2 * 0xc + 0x28);
          if (fVar1 <= fVar11) {
            fVar11 = fVar1;
          }
          fVar13 = fVar13 - fVar11;
          *(float *)((longlong)param_1 + lVar2 * 0xc + 0x28) =
               fVar11 + *(float *)((longlong)param_1 + lVar2 * 0xc + 0x28);
        } while (iVar3 < param_2 + -3);
      }
      while (iVar3 < param_2) {
        if (fVar13 <= 0.0) {
          return;
        }
        lVar2 = (longlong)iVar3;
        iVar3 = iVar3 + 1;
        fVar11 = *(float *)((longlong)param_1 + lVar2 * 0xc + 8) -
                 *(float *)((longlong)param_1 + lVar2 * 0xc + 4);
        if (fVar1 <= fVar11) {
          fVar11 = fVar1;
        }
        fVar13 = fVar13 - fVar11;
        *(float *)((longlong)param_1 + lVar2 * 0xc + 4) =
             fVar11 + *(float *)((longlong)param_1 + lVar2 * 0xc + 4);
      }
    }
  }
  return;
}


