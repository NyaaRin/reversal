// 0x180087c90  FUN_180087c90
// size=538 thunk=false
// signature: undefined FUN_180087c90()
// status: ok


int FUN_180087c90(longlong param_1,longlong param_2,int param_3,int *param_4,int *param_5,
                 int *param_6,char *param_7)

{
  double dVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int *piVar7;
  longlong lVar8;
  int *piVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  int local_68 [12];
  
  iVar10 = 1;
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 1;
  *param_7 = '\x01';
  if (param_3 < 1) {
    param_3 = *(int *)(param_2 + 4);
  }
  param_3 = *(int *)(param_1 + 0x4c) + param_3;
  if (DAT_1803fa668 != (longlong *)0x0) {
    plVar6 = (longlong *)(**(code **)(*DAT_1803fa668 + 0x240))();
    if (plVar6 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar6 + 0x30))(plVar6);
      *param_7 = cVar3;
      if (cVar3 == '\0') {
        fVar11 = (float)(**(code **)(*plVar6 + 0x48))(plVar6,0);
        fVar12 = (float)(**(code **)(*plVar6 + 0x48))(plVar6);
        lVar8 = DAT_1803fa608;
        dVar2 = DAT_180380cb0;
        if ((DAT_1803fa608 == 0) || (*(double *)(DAT_1803fa608 + 0x28) <= 0.0)) {
          iVar4 = 0;
        }
        else {
          iVar4 = (int)((double)fVar11 / *(double *)(DAT_1803fa608 + 0x28) + DAT_180380cb0);
        }
        param_3 = param_3 + iVar4;
        *param_4 = iVar4;
        if ((lVar8 == 0) || (dVar1 = *(double *)(lVar8 + 0x28), dVar1 <= 0.0)) {
          local_68[0] = 0;
        }
        else {
          if (fVar11 <= fVar12) {
            fVar11 = fVar12;
          }
          local_68[0] = (int)((double)(fVar11 * DAT_180380a58) / dVar1 + dVar2);
        }
        local_68[0] = local_68[0] + 2;
        local_68[1] = 8;
        local_68[2] = 2;
        piVar9 = local_68 + 2;
        if (1 < local_68[0]) {
          piVar9 = local_68;
        }
        piVar7 = local_68 + 1;
        if (local_68[0] < 9) {
          piVar7 = piVar9;
        }
        *param_6 = *piVar7;
      }
    }
    if (DAT_1803fa668 != (longlong *)0x0) {
      lVar8 = (**(code **)(*DAT_1803fa668 + 0x240))();
      if (lVar8 != 0) {
        local_68[4] = 8;
        local_68[3] = 0;
        piVar9 = local_68 + 3;
        if (-1 < *(int *)(lVar8 + 0x20)) {
          piVar9 = (int *)(lVar8 + 0x20);
        }
        piVar7 = local_68 + 4;
        if (*(int *)(lVar8 + 0x20) < 9) {
          piVar7 = piVar9;
        }
        iVar4 = *piVar7;
        param_3 = param_3 + iVar4;
        *param_5 = iVar4;
        iVar5 = 4;
        if (iVar4 < 4) {
          iVar5 = iVar4;
        }
        *param_6 = *param_6 + iVar5;
      }
    }
  }
  if (*param_7 == '\0') {
    local_68[0] = 10;
    piVar9 = local_68 + 1;
    if (1 < *param_6) {
      piVar9 = param_6;
    }
    local_68[1] = 2;
    piVar7 = local_68;
    if (*param_6 < 0xb) {
      piVar7 = piVar9;
    }
    iVar10 = *piVar7;
  }
  *param_6 = iVar10;
  *(char *)(param_1 + 0x5c) = *param_7;
  return param_3;
}


