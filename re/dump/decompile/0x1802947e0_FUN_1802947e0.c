// 0x1802947e0  FUN_1802947e0
// size=431 thunk=false
// signature: undefined FUN_1802947e0()
// status: ok


void FUN_1802947e0(longlong param_1,float *param_2,float *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  longlong lVar8;
  float fVar9;
  int iVar10;
  void *_Dst;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar9 = DAT_180380bb0;
  uVar13 = (ulonglong)*(int *)(param_1 + 0x50);
  iVar11 = 1;
  fVar1 = *(float *)(*(longlong *)(param_1 + 0x58) + -8 + uVar13 * 8);
  fVar2 = *(float *)(*(longlong *)(param_1 + 0x58) + -4 + uVar13 * 8);
  fVar17 = DAT_180380bb0 / (float)param_4;
  if (0 < param_4) {
    do {
      iVar7 = *(int *)(param_1 + 0x54);
      fVar16 = (float)iVar11 * fVar17;
      fVar14 = fVar9 - fVar16;
      fVar15 = (fVar14 + fVar14) * fVar16;
      fVar3 = *param_2;
      fVar4 = param_2[1];
      fVar5 = *param_3;
      fVar6 = param_3[1];
      if ((int)uVar13 == iVar7) {
        iVar12 = (int)uVar13 + 1;
        if (iVar7 == 0) {
          iVar10 = 8;
        }
        else {
          iVar10 = iVar7 / 2 + iVar7;
        }
        if (iVar12 < iVar10) {
          iVar12 = iVar10;
        }
        if (iVar7 < iVar12) {
          _Dst = (void *)FUN_18026f580((longlong)iVar12 << 3);
          if (*(void **)(param_1 + 0x58) != (void *)0x0) {
            memcpy(_Dst,*(void **)(param_1 + 0x58),(longlong)*(int *)(param_1 + 0x50) << 3);
            FUN_18026f680(*(undefined8 *)(param_1 + 0x58));
          }
          *(void **)(param_1 + 0x58) = _Dst;
          *(int *)(param_1 + 0x54) = iVar12;
        }
      }
      iVar7 = *(int *)(param_1 + 0x50);
      iVar11 = iVar11 + 1;
      lVar8 = *(longlong *)(param_1 + 0x58);
      *(float *)(lVar8 + (longlong)iVar7 * 8) =
           fVar14 * fVar14 * fVar1 + fVar15 * fVar3 + fVar16 * fVar16 * fVar5;
      *(float *)(lVar8 + 4 + (longlong)iVar7 * 8) =
           fVar14 * fVar14 * fVar2 + fVar15 * fVar4 + fVar16 * fVar16 * fVar6;
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
      uVar13 = (ulonglong)*(uint *)(param_1 + 0x50);
    } while (iVar11 <= param_4);
  }
  return;
}


