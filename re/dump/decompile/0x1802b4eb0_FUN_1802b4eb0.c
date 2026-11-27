// 0x1802b4eb0  FUN_1802b4eb0
// size=558 thunk=false
// signature: undefined FUN_1802b4eb0()
// status: ok


void FUN_1802b4eb0(float *param_1,longlong *param_2,float param_3,int param_4)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 local_res10 [8];
  uint local_res18 [2];
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  
  fVar2 = *(float *)(param_2 + 3);
  if ((param_3 == fVar2) && (param_4 != 0)) {
    FUN_1802b4230(&local_68,param_2,0);
    param_1[1] = 0.0;
    param_1[3] = 0.0;
    param_1[4] = fVar2;
    param_1[2] = local_58 - local_5c;
    *param_1 = local_64;
    return;
  }
  iVar6 = 0;
  param_1[1] = 0.0;
  FUN_1802b4230(&local_68,param_2,0);
  fVar9 = 0.0;
  fVar8 = 0.0;
  fVar1 = local_54;
  while( true ) {
    fVar7 = fVar9;
    if ((((int)param_3 < (int)fVar1) ||
        ((((*(char *)((longlong)param_2 + 0x76) == '\x01' && (0 < *(int *)param_2[1])) &&
          (*(int *)param_2[1] == (int)local_54 + (int)fVar7)) &&
         (*(char *)(param_2[4] + -1 + (longlong)((int)local_54 + (int)fVar7)) != '\n')))) ||
       (((fVar9 = (float)((int)local_54 + (int)fVar7), fVar9 == fVar2 && (0 < (int)fVar2)) &&
        (*(char *)(param_2[4] + -1 + (longlong)(int)fVar2) != '\n')))) goto LAB_1802b4fbe;
    param_1[1] = local_60 + param_1[1];
    fVar8 = fVar7;
    if (fVar9 == fVar2) break;
    FUN_1802b4230(&local_68,param_2);
    fVar1 = (float)((int)local_54 + (int)fVar9);
  }
  local_54 = 0.0;
  fVar7 = fVar9;
LAB_1802b4fbe:
  param_1[3] = fVar7;
  param_1[4] = local_54;
  param_1[5] = fVar8;
  param_1[2] = local_58 - local_5c;
  *param_1 = local_68;
  fVar2 = DAT_180381384;
  if ((int)fVar7 < (int)param_3) {
    do {
      FUN_180268c20(local_res18,(longlong)iVar6 + param_2[4] + (longlong)(int)fVar7,
                    (longlong)(int)param_2[3] + param_2[4]);
      fVar9 = fVar2;
      if ((short)local_res18[0] != 10) {
        lVar3 = *param_2;
        piVar4 = *(int **)(lVar3 + 0x1230);
        if ((*piVar4 <= (int)(local_res18[0] & 0xffff)) ||
           (fVar9 = *(float *)(*(longlong *)(piVar4 + 2) + ((ulonglong)local_res18[0] & 0xffff) * 4)
           , fVar9 < 0.0)) {
          fVar9 = (float)FUN_18029cb50(piVar4);
        }
        fVar9 = fVar9 * *(float *)(lVar3 + 0x1240);
      }
      iVar6 = (int)fVar7 + iVar6;
      *param_1 = fVar9 + *param_1;
      iVar5 = (int)param_2[3];
      if (iVar6 < iVar5) {
        iVar5 = FUN_180268c20(local_res10,(longlong)iVar6 + param_2[4],(longlong)iVar5 + param_2[4])
        ;
        iVar5 = iVar5 + iVar6;
      }
      else {
        iVar5 = iVar5 + 1;
      }
      iVar6 = iVar5 - (int)fVar7;
    } while (iVar5 < (int)param_3);
  }
  return;
}


