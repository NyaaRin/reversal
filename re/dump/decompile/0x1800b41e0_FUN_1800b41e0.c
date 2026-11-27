// 0x1800b41e0  FUN_1800b41e0
// size=533 thunk=false
// signature: undefined FUN_1800b41e0()
// status: ok


void FUN_1800b41e0(int param_1,longlong param_2)

{
  undefined8 uVar1;
  double dVar2;
  float fVar3;
  undefined8 *puVar4;
  int *piVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  int local_68 [4];
  undefined8 local_58;
  undefined4 local_50;
  double local_48;
  undefined1 local_40 [56];
  
  lVar7 = (longlong)param_1;
  if (((param_1 - 1U < 0x80) && (param_2 != 0)) && (DAT_1803fa608 != 0)) {
    local_58 = 0;
    local_50 = 0;
    dVar9 = (double)FUN_18001c0d0(param_2);
    local_48 = dVar9;
    puVar4 = (undefined8 *)FUN_18001daf0(param_2,local_40);
    uVar1 = *puVar4;
    fVar3 = *(float *)(puVar4 + 1);
    lVar8 = lVar7 * 0x38;
    dVar10 = *(double *)(DAT_1803fa608 + 0x28);
    if (*(double *)(DAT_1803fa608 + 0x28) <= 0.0) {
      dVar10 = DAT_180380be0;
    }
    if ((*(char *)(&DAT_1804ecb60 + lVar7 * 0x1c) == '\0') ||
       (dVar2 = (double)(&DAT_1804ecb30)[lVar7 * 7], dVar9 < dVar2 - DAT_180380b40)) {
      (&DAT_1804ecb60)[lVar7 * 0x1c] = 1;
      (&DAT_1804ecb62)[lVar8] = 0;
    }
    else {
      if (dVar9 <= dVar2 + DAT_180380ae8) {
        return;
      }
      fVar12 = (float)((dVar9 - dVar2) / (double)(float)dVar10);
      if ((0.0 < fVar12) && (fVar12 <= DAT_1803810d0)) {
        fVar11 = fVar12 * (float)dVar10;
        *(undefined4 *)(&DAT_1804ecb50 + lVar7 * 7) =
             *(undefined4 *)((longlong)&DAT_1804ecb40 + lVar8 + 4);
        *(undefined4 *)((longlong)&DAT_1804ecb50 + lVar8 + 4) =
             *(undefined4 *)(&DAT_1804ecb48 + lVar7 * 7);
        (&DAT_1804ecb58)[lVar7 * 0xe] = *(undefined4 *)((longlong)&DAT_1804ecb48 + lVar8 + 4);
        (&DAT_1804ecb62)[lVar8] = *(undefined1 *)((longlong)&DAT_1804ecb60 + lVar8 + 1);
        *(float *)((longlong)&DAT_1804ecb40 + lVar8 + 4) =
             ((float)uVar1 - *(float *)(&DAT_1804ecb38 + lVar7 * 7)) / fVar11;
        local_58._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
        *(float *)(&DAT_1804ecb48 + lVar7 * 7) =
             (local_58._4_4_ - *(float *)((longlong)&DAT_1804ecb38 + lVar8 + 4)) / fVar11;
        *(float *)((longlong)&DAT_1804ecb48 + lVar8 + 4) =
             (fVar3 - *(float *)(&DAT_1804ecb40 + lVar7 * 7)) / fVar11;
        *(undefined1 *)((longlong)&DAT_1804ecb60 + lVar8 + 1) = 1;
        local_68[2] = 0x10;
        local_68[0] = 1;
        local_68[1] = (int)(fVar12 + DAT_180380ac0);
        piVar6 = local_68;
        if (0 < local_68[1]) {
          piVar6 = local_68 + 1;
        }
        piVar5 = local_68 + 2;
        if (local_68[1] < 0x11) {
          piVar5 = piVar6;
        }
        (&DAT_1804ecb5c)[lVar7 * 0xe] = *piVar5;
      }
    }
    (&DAT_1804ecb30)[lVar7 * 7] = dVar9;
    (&DAT_1804ecb38)[lVar7 * 7] = uVar1;
    *(float *)(&DAT_1804ecb40 + lVar7 * 7) = fVar3;
  }
  return;
}


