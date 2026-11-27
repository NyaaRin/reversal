// 0x1800b77a0  FUN_1800b77a0
// size=1330 thunk=false
// signature: undefined FUN_1800b77a0()
// status: ok


undefined8 FUN_1800b77a0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  char cVar2;
  BOOL BVar3;
  longlong *plVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da;
  float fVar11;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  double dVar12;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 uVar13;
  undefined4 uVar14;
  double *local_38 [6];
  
  if (DAT_1803facf8 == '\0') {
    DAT_1803fb0dc = 0;
    return 0;
  }
  if ((param_1 == (longlong *)0x0) || (param_2 == (undefined8 *)0x0)) {
    DAT_1803fb0dc = 2;
    return 0;
  }
  BVar3 = IsBadReadPtr(param_1,0x27c0);
  if (BVar3 != 0) {
    DAT_1803fb0dc = 2;
    return 0;
  }
  if (DAT_1803fa668 == (longlong *)0x0) {
    DAT_1803fb0dc = 2;
    return 0;
  }
  cVar2 = (**(code **)(*DAT_1803fa668 + 0xd0))();
  if (cVar2 == '\0') {
    DAT_1803fb0dc = 2;
    return 0;
  }
  plVar4 = (longlong *)(**(code **)(*DAT_1803fa668 + 0x240))();
  if (plVar4 != param_1) {
    DAT_1803fb0dc = 2;
    return 0;
  }
  cVar2 = (**(code **)(*param_1 + 0x30))(param_1);
  if (cVar2 != '\0') {
    DAT_1803fb0dc = 3;
    return 0;
  }
  cVar2 = (**(code **)(*param_1 + 0x40))(param_1);
  if (cVar2 != '\0') {
    DAT_1803fb0dc = 3;
    return 0;
  }
  cVar2 = (**(code **)(*DAT_1803fa668 + 0x260))();
  if (cVar2 != '\0') {
    DAT_1803fb0dc = 3;
    return 0;
  }
  cVar2 = (**(code **)(*param_1 + 0x38))(param_1);
  if (cVar2 != '\0') {
    DAT_1803fb0dc = 2;
    return 0;
  }
  if (DAT_1803fb230 != param_1) {
    FUN_1800b64b0();
    DAT_1803fb230 = param_1;
    DAT_1803fb0dc = 5;
    return 0;
  }
  cVar2 = FUN_1800b6cf0(param_1);
  if (cVar2 == '\0') {
    uVar10 = FUN_1800b6430();
    uVar8 = *(uint *)(param_1 + 2);
    FUN_1800b6b50(uVar8,uVar10);
    if (((-1 < (int)uVar8) && (uVar6 = uVar8 & 0x3f, (&DAT_1803fb130)[uVar6] == uVar8)) &&
       ((float)(&DAT_1803fca50)[uVar6] < 0.0)) {
      if (((double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) < 0.0) ||
         (uVar10 = extraout_XMM0_Da, uVar13 = extraout_XMM0_Db,
         DAT_180380d38 <= (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) &&
         (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) != DAT_180380d38)) {
        uVar10 = 0;
        uVar13 = 0;
      }
      (&DAT_1803fca50)[uVar6] = (float)(double)CONCAT44(uVar13,uVar10);
      FUN_1800b6650(1);
    }
    DAT_1803fb0dc = 4;
    return 0;
  }
  if ((((int)param_1[0x4f7] == 0x100) || ((int)param_1[0x4f7] == 0x1000)) &&
     (iVar1 = *(int *)((longlong)param_1 + 0x27bc), (iVar1 - 8U & 0xfffffff7) == 0)) {
    if ((param_1[0x49] == 0) && (param_1[0x71] == 0)) {
      if ((0x1000 < *(uint *)(param_1 + 0x21)) || (0x1000 < *(uint *)(param_1 + 0x25)))
      goto LAB_1800b7967;
      if ((*(uint *)(param_1 + 0x21) == 0) && (*(uint *)(param_1 + 0x25) == 0)) {
        uVar9 = 0;
        lVar7 = 0;
        if (0 < iVar1) {
          do {
            lVar7 = uVar9 * 0x1c;
            if (*(int *)(lVar7 + 0x3cc + (longlong)param_1) != 0) goto LAB_1800b7c1a;
            uVar8 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar8;
          } while ((int)uVar8 < iVar1);
        }
        fVar11 = (float)FUN_1800b7350(CONCAT71((int7)((ulonglong)lVar7 >> 8),1));
        if (DAT_180380964 < fVar11) {
          dVar12 = (double)FUN_1800b6430();
          if ((-1 < DAT_1803db41c) && (*(int *)((longlong)param_1 + 0x1c) != DAT_1803db41c)) {
            DAT_1803db41c = *(int *)((longlong)param_1 + 0x1c);
          }
          local_38[0] = (double *)0x0;
          cVar2 = FUN_1800b6fb0(param_1,SUB84(dVar12,0),fVar11,DAT_1803db384,local_38);
          if ((cVar2 == '\0') || (local_38[0] == (double *)0x0)) {
            uVar10 = 7;
            if (DAT_1803fb244 < 4) {
              uVar10 = 5;
            }
            uVar13 = FUN_1800b6430();
            uVar8 = *(uint *)(param_1 + 2);
            FUN_1800b6b50(uVar8,uVar13);
            if (((-1 < (int)uVar8) && (uVar6 = uVar8 & 0x3f, (&DAT_1803fb130)[uVar6] == uVar8)) &&
               ((float)(&DAT_1803fca50)[uVar6] < 0.0)) {
              if (((double)CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01) < 0.0) ||
                 (uVar13 = extraout_XMM0_Da_01, uVar14 = extraout_XMM0_Db_01,
                 DAT_180380d38 <= (double)CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01) &&
                 (double)CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01) != DAT_180380d38)) {
                uVar13 = 0;
                uVar14 = 0;
              }
              (&DAT_1803fca50)[uVar6] = (float)(double)CONCAT44(uVar14,uVar13);
              FUN_1800b6650(1);
            }
            uVar5 = 0;
            DAT_1803fb0dc = uVar10;
          }
          else {
            *param_2 = param_1;
            *(int *)(param_2 + 1) = (int)param_1[2];
            *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)param_1 + 0x1c);
            *(undefined4 *)(param_1 + 2) = *(undefined4 *)(local_38[0] + 1);
            if (DAT_1803facf9 != '\0') {
              *(undefined4 *)((longlong)param_1 + 0x1c) =
                   *(undefined4 *)((longlong)local_38[0] + 0xc);
            }
            uVar8 = *(uint *)(local_38[0] + 1);
            if (((-1 < (int)uVar8) && (uVar6 = uVar8 & 0x3f, (&DAT_1803fb130)[uVar6] == uVar8)) &&
               ((float)(&DAT_1803fca50)[uVar6] < 0.0)) {
              dVar12 = dVar12 - *local_38[0];
              if ((dVar12 < 0.0) || (DAT_180380d38 < dVar12)) {
                dVar12 = 0.0;
              }
              (&DAT_1803fca50)[uVar6] = (float)dVar12;
              FUN_1800b6650(1);
            }
            DAT_1803fb0dc = 8;
            uVar5 = 1;
          }
          return uVar5;
        }
        uVar10 = FUN_1800b6430();
        uVar8 = *(uint *)(param_1 + 2);
        FUN_1800b6b50(uVar8,uVar10);
        if (((-1 < (int)uVar8) && (uVar6 = uVar8 & 0x3f, (&DAT_1803fb130)[uVar6] == uVar8)) &&
           ((float)(&DAT_1803fca50)[uVar6] < 0.0)) {
          if (((double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00) < 0.0) ||
             (uVar10 = extraout_XMM0_Da_00, uVar13 = extraout_XMM0_Db_00,
             DAT_180380d38 <= (double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00) &&
             (double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00) != DAT_180380d38)) {
            uVar10 = 0;
            uVar13 = 0;
          }
          (&DAT_1803fca50)[uVar6] = (float)(double)CONCAT44(uVar13,uVar10);
          FUN_1800b6650(1);
        }
        DAT_1803fb0dc = 8;
        return 0;
      }
    }
LAB_1800b7c1a:
    uVar10 = 6;
  }
  else {
LAB_1800b7967:
    uVar10 = 4;
  }
  uVar13 = FUN_1800b6430();
  uVar8 = *(uint *)(param_1 + 2);
  FUN_1800b6b50(uVar8,uVar13);
  if (((-1 < (int)uVar8) && (uVar6 = uVar8 & 0x3f, (&DAT_1803fb130)[uVar6] == uVar8)) &&
     ((float)(&DAT_1803fca50)[uVar6] < 0.0)) {
    if (((double)CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02) < 0.0) ||
       (uVar13 = extraout_XMM0_Da_02, uVar14 = extraout_XMM0_Db_02,
       DAT_180380d38 <= (double)CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02) &&
       (double)CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02) != DAT_180380d38)) {
      uVar13 = 0;
      uVar14 = 0;
    }
    (&DAT_1803fca50)[uVar6] = (float)(double)CONCAT44(uVar14,uVar13);
    FUN_1800b6650(1);
  }
  DAT_1803fb0dc = uVar10;
  return 0;
}


