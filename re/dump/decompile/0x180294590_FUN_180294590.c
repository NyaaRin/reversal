// 0x180294590  FUN_180294590
// size=590 thunk=false
// signature: undefined FUN_180294590()
// status: ok


void FUN_180294590(longlong param_1,float *param_2,float *param_3,float param_4,float param_5,
                  float param_6,int param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  void *pvVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if (param_7 < 1) {
    fVar10 = *param_3;
    if (*param_3 <= param_3[1]) {
      fVar10 = param_3[1];
    }
    param_7 = FUN_1802924c0(param_1,fVar10);
  }
  iVar8 = *(int *)(param_1 + 0x50) + 1 + param_7;
  if (*(int *)(param_1 + 0x54) < iVar8) {
    pvVar7 = (void *)FUN_18026f580((longlong)iVar8 << 3);
    if (*(void **)(param_1 + 0x58) != (void *)0x0) {
      memcpy(pvVar7,*(void **)(param_1 + 0x58),(longlong)*(int *)(param_1 + 0x50) << 3);
      FUN_18026f680(*(undefined8 *)(param_1 + 0x58));
    }
    *(void **)(param_1 + 0x58) = pvVar7;
    *(int *)(param_1 + 0x54) = iVar8;
  }
  fVar10 = cosf(param_4);
  fVar11 = sinf(param_4);
  iVar8 = 0;
  if (-1 < param_7) {
    do {
      fVar14 = ((float)iVar8 / (float)param_7) * (param_6 - param_5) + param_5;
      fVar12 = cosf(fVar14);
      fVar1 = *param_3;
      fVar13 = sinf(fVar14);
      iVar4 = *(int *)(param_1 + 0x54);
      fVar14 = param_3[1];
      fVar2 = param_2[1];
      fVar3 = *param_2;
      if (*(int *)(param_1 + 0x50) == iVar4) {
        iVar9 = *(int *)(param_1 + 0x50) + 1;
        if (iVar4 == 0) {
          iVar6 = 8;
        }
        else {
          iVar6 = iVar4 / 2 + iVar4;
        }
        if (iVar9 < iVar6) {
          iVar9 = iVar6;
        }
        if (iVar4 < iVar9) {
          pvVar7 = (void *)FUN_18026f580((longlong)iVar9 << 3);
          if (*(void **)(param_1 + 0x58) != (void *)0x0) {
            memcpy(pvVar7,*(void **)(param_1 + 0x58),(longlong)*(int *)(param_1 + 0x50) << 3);
            FUN_18026f680(*(undefined8 *)(param_1 + 0x58));
          }
          *(void **)(param_1 + 0x58) = pvVar7;
          *(int *)(param_1 + 0x54) = iVar9;
        }
      }
      iVar4 = *(int *)(param_1 + 0x50);
      iVar8 = iVar8 + 1;
      lVar5 = *(longlong *)(param_1 + 0x58);
      *(float *)(lVar5 + (longlong)iVar4 * 8) =
           (fVar12 * fVar1 * fVar10 - fVar13 * fVar14 * fVar11) + fVar3;
      *(float *)(lVar5 + 4 + (longlong)iVar4 * 8) =
           fVar13 * fVar14 * fVar10 + fVar12 * fVar1 * fVar11 + fVar2;
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
    } while (iVar8 <= param_7);
  }
  return;
}


