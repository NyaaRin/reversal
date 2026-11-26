// 0x180293e00  FUN_180293e00
// size=599 thunk=false
// signature: undefined FUN_180293e00()
// status: ok


void FUN_180293e00(longlong param_1,float *param_2,float param_3,uint param_4,int param_5)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  float *pfVar9;
  int iVar10;
  
  if (param_3 < DAT_180380ac0) {
    FUN_18020dc30(param_1 + 0x50);
    return;
  }
  iVar3 = FUN_1802924c0(DAT_180380ac0,param_3);
  bVar2 = false;
  iVar4 = (int)(0x30 / (longlong)iVar3);
  uVar7 = 0x30 / (longlong)iVar3 & 0xffffffff;
  if (iVar4 < 1) {
    uVar7 = 1;
    iVar3 = -(param_5 - param_4);
    if (iVar3 < 0) {
      iVar3 = param_5 - param_4;
    }
  }
  else {
    if (0xc < iVar4) {
      uVar7 = 0xc;
    }
    iVar4 = (int)uVar7;
    iVar3 = -(param_5 - param_4);
    if (iVar3 < 0) {
      iVar3 = param_5 - param_4;
    }
    if (1 < iVar4) {
      iVar10 = iVar3 / iVar4 + 1;
      uVar6 = uVar7;
      if (0 < iVar3 % iVar4) {
        iVar10 = iVar3 / iVar4 + 2;
        bVar2 = true;
        if (0 < iVar3) {
          uVar6 = (ulonglong)(uint)(iVar4 - (iVar4 - iVar3 % iVar4) / 2);
        }
      }
      goto LAB_180293e95;
    }
  }
  iVar10 = iVar3 + 1;
  uVar6 = uVar7;
LAB_180293e95:
  FUN_18028a820(param_1 + 0x50,*(int *)(param_1 + 0x50) + iVar10);
  pfVar9 = (float *)(*(longlong *)(param_1 + 0x58) +
                    (longlong)(*(int *)(param_1 + 0x50) - iVar10) * 8);
  uVar8 = param_4;
  if (0x2f < param_4) {
    uVar5 = (int)param_4 % 0x30;
    uVar8 = uVar5 + 0x30;
    if (-1 < (int)uVar5) {
      uVar8 = uVar5;
    }
  }
  if (param_5 < (int)param_4) {
    do {
      uVar5 = uVar8 + 0x30;
      if (-1 < (int)uVar8) {
        uVar5 = uVar8;
      }
      param_4 = param_4 - (int)uVar6;
      fVar1 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x74 + (longlong)(int)uVar5 * 8);
      uVar8 = uVar5 - (int)uVar6;
      *pfVar9 = param_3 * *(float *)(*(longlong *)(param_1 + 0x38) + 0x70 + (longlong)(int)uVar5 * 8
                                    ) + *param_2;
      pfVar9[1] = fVar1 * param_3 + param_2[1];
      pfVar9 = pfVar9 + 2;
      uVar6 = uVar7;
    } while (param_5 <= (int)param_4);
  }
  else {
    do {
      uVar5 = uVar8 - 0x30;
      if ((int)uVar8 < 0x30) {
        uVar5 = uVar8;
      }
      param_4 = param_4 + (int)uVar6;
      uVar8 = uVar5 + (int)uVar6;
      fVar1 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x74 + (longlong)(int)uVar5 * 8);
      *pfVar9 = param_3 * *(float *)(*(longlong *)(param_1 + 0x38) + 0x70 + (longlong)(int)uVar5 * 8
                                    ) + *param_2;
      pfVar9[1] = fVar1 * param_3 + param_2[1];
      pfVar9 = pfVar9 + 2;
      uVar6 = uVar7;
    } while ((int)param_4 <= param_5);
  }
  if (bVar2) {
    param_5 = param_5 % 0x30;
    iVar3 = param_5 + 0x30;
    if (-1 < param_5) {
      iVar3 = param_5;
    }
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x74 + (longlong)iVar3 * 8);
    *pfVar9 = param_3 * *(float *)(*(longlong *)(param_1 + 0x38) + 0x70 + (longlong)iVar3 * 8) +
              *param_2;
    pfVar9[1] = fVar1 * param_3 + param_2[1];
  }
  return;
}


