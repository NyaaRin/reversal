// 0x1800c25f0  FUN_1800c25f0
// size=555 thunk=false
// signature: undefined FUN_1800c25f0()
// status: ok


int FUN_1800c25f0(longlong param_1,longlong param_2,float *param_3,uint param_4,float param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  uint *puVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  
  if ((*(char *)(param_1 + 0x40) == '\0') || (param_2 == 0)) {
    return 0;
  }
  iVar3 = *(int *)(param_1 + 0xc);
  iVar12 = 0;
  if (0 < iVar3) {
    iVar4 = *(int *)(param_2 + 4);
    uVar11 = 0;
    do {
      bVar5 = false;
      uVar9 = 0;
      if (0 < iVar4) {
        do {
          iVar8 = (int)uVar9;
          if (bVar5) break;
          puVar7 = (uint *)((longlong)*(int *)(param_2 + 8) + uVar9 * 0x44 + param_2);
          if ((puVar7 != (uint *)0x0) && (((int)param_4 < 1 || (puVar7[1] == param_4)))) {
            if ((*puVar7 < 0x80) &&
               (cVar6 = FUN_1800c2340(&DAT_1805580f0 +
                                      (uVar11 * 0x80 + (longlong)(int)*puVar7) * 0x30,&local_68),
               cVar6 != '\0')) {
              fVar13 = *param_3;
              fVar1 = param_3[1];
              fVar2 = param_3[2];
              fVar14 = fVar13 * local_68 + fVar1 * local_64 + fVar2 * local_60 + local_5c;
              if ((((param_5 + (float)puVar7[2] <= fVar14) && (fVar14 <= (float)puVar7[5] - param_5)
                   ) && (fVar14 = fVar1 * local_54 + fVar13 * local_58 + fVar2 * local_50 + local_4c
                        , param_5 + (float)puVar7[3] <= fVar14)) &&
                 (((fVar14 <= (float)puVar7[6] - param_5 &&
                   (fVar13 = fVar1 * local_44 + fVar13 * local_48 + fVar2 * local_40 + local_3c,
                   param_5 + (float)puVar7[4] <= fVar13)) && (fVar13 <= (float)puVar7[7] - param_5))
                 )) {
                bVar5 = true;
                goto LAB_1800c27b9;
              }
            }
            bVar5 = false;
          }
LAB_1800c27b9:
          uVar9 = (ulonglong)(iVar8 + 1U);
        } while ((int)(iVar8 + 1U) < iVar4);
      }
      iVar8 = iVar12 + 1;
      if (!bVar5) {
        iVar8 = iVar12;
      }
      iVar12 = iVar8;
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
    } while ((int)uVar10 < iVar3);
  }
  return iVar12;
}


