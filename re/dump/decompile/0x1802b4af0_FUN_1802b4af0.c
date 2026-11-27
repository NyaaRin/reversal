// 0x1802b4af0  FUN_1802b4af0
// size=706 thunk=false
// signature: undefined FUN_1802b4af0()
// status: ok


int FUN_1802b4af0(longlong *param_1,float param_2,float param_3,uint *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  undefined4 uVar5;
  float fVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  ulonglong local_res8;
  float local_res20;
  float local_res24;
  
  iVar8 = (int)param_1[3];
  iVar10 = 0;
  *param_4 = 0;
  uVar5 = DAT_180381308;
  fVar13 = 0.0;
  if (0 < iVar8) {
    do {
      lVar2 = *param_1;
      lVar3 = param_1[4];
      lVar7 = (int)param_1[3] + lVar3;
      local_res8 = 0;
      FUN_18029e350(&local_res20,*(undefined8 *)(lVar2 + 0x1228),*(undefined4 *)(lVar2 + 0x1238),
                    uVar5,*(undefined4 *)(lVar2 + 0x2580),iVar10 + lVar3,lVar7,lVar7,&local_res8);
      fVar6 = DAT_180381384;
      iVar9 = (uint)local_res8 - (int)lVar3;
      iVar11 = iVar9 - iVar10;
      if (iVar11 < 1) {
        return iVar8;
      }
      if ((iVar10 == 0) && (param_3 < fVar13 + 0.0)) {
        return 0;
      }
      if (param_3 < local_res24 + fVar13) {
        if (iVar10 < iVar8) {
          if (param_2 < 0.0) {
            return iVar10;
          }
          if (param_2 < local_res20) {
            iVar8 = 0;
            fVar13 = 0.0;
            if (0 < iVar11) {
              do {
                FUN_180268c20(&local_res8,(longlong)iVar8 + param_1[4] + (longlong)iVar10,
                              (longlong)(int)param_1[3] + param_1[4]);
                fVar12 = fVar6;
                if ((short)local_res8 != 10) {
                  lVar2 = *param_1;
                  piVar4 = *(int **)(lVar2 + 0x1230);
                  if ((*piVar4 <= (int)((uint)local_res8 & 0xffff)) ||
                     (fVar12 = *(float *)(*(longlong *)(piVar4 + 2) + (local_res8 & 0xffff) * 4),
                     fVar12 < 0.0)) {
                    fVar12 = (float)FUN_18029cb50(piVar4);
                  }
                  fVar12 = fVar12 * *(float *)(lVar2 + 0x1240);
                }
                iVar1 = iVar8 + iVar10;
                if (param_2 < fVar12 + fVar13) {
                  fVar12 = fVar12 * DAT_180380ac0;
                  *param_4 = (uint)(iVar8 != 0);
                  if (param_2 < fVar12 + fVar13) {
                    return iVar1;
                  }
                  iVar8 = (int)param_1[3];
                  if (iVar8 <= iVar1) {
                    return iVar8 + 1;
                  }
                  iVar8 = FUN_180268c20(&local_res8,(longlong)iVar1 + param_1[4],
                                        (longlong)iVar8 + param_1[4]);
                  return iVar8 + iVar1;
                }
                iVar8 = (int)param_1[3];
                if (iVar1 < iVar8) {
                  iVar8 = FUN_180268c20(&local_res20,(longlong)iVar1 + param_1[4],
                                        (longlong)iVar8 + param_1[4]);
                  iVar8 = iVar1 + iVar8;
                }
                else {
                  iVar8 = iVar8 + 1;
                }
                iVar8 = iVar8 - iVar10;
                fVar13 = fVar12 + fVar13;
              } while (iVar8 < iVar11);
            }
          }
          lVar2 = param_1[4];
          *param_4 = 1;
          if (*(char *)((longlong)iVar9 + -1 + lVar2) == '\n') {
            iVar9 = iVar9 + -1;
          }
          return iVar9;
        }
        break;
      }
      fVar13 = fVar13 + local_res24;
      iVar10 = iVar9;
    } while (iVar9 < iVar8);
  }
  *param_4 = 1;
  return iVar8;
}


