// 0x1800ce080  FUN_1800ce080
// size=357 thunk=false
// signature: undefined FUN_1800ce080()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1800ce080(longlong *param_1,undefined8 *param_2,float param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  lVar3 = *param_1;
  iVar7 = 0;
  iVar1 = *(int *)param_1[1];
  fVar8 = (float)((uint)(*(float *)(lVar3 + 8) - param_3) & _DAT_1803817c0);
  if (1 < iVar1) {
    iVar6 = 1;
    if (3 < iVar1 + -1) {
      do {
        lVar5 = (longlong)iVar6;
        fVar9 = (float)((uint)(*(float *)(lVar3 + 8 + lVar5 * 0xc) - param_3) & _DAT_1803817c0);
        fVar10 = fVar8;
        if (fVar9 < fVar8) {
          fVar10 = fVar9;
        }
        iVar4 = iVar6;
        if (fVar8 <= fVar9) {
          iVar4 = iVar7;
        }
        fVar9 = (float)((uint)(*(float *)(lVar3 + 0x14 + lVar5 * 0xc) - param_3) & _DAT_1803817c0);
        fVar8 = fVar10;
        if (fVar9 < fVar10) {
          fVar8 = fVar9;
        }
        iVar7 = iVar6 + 1;
        if (fVar10 <= fVar9) {
          iVar7 = iVar4;
        }
        fVar9 = (float)((uint)(*(float *)(lVar3 + 0x20 + lVar5 * 0xc) - param_3) & _DAT_1803817c0);
        fVar10 = fVar8;
        if (fVar9 < fVar8) {
          fVar10 = fVar9;
        }
        iVar4 = iVar6 + 2;
        if (fVar8 <= fVar9) {
          iVar4 = iVar7;
        }
        fVar8 = (float)((uint)(*(float *)(lVar3 + 0x2c + lVar5 * 0xc) - param_3) & _DAT_1803817c0);
        iVar7 = iVar6 + 3;
        if (fVar10 <= fVar8) {
          iVar7 = iVar4;
          fVar8 = fVar10;
        }
        iVar6 = iVar6 + 4;
      } while (iVar6 < iVar1 + -3);
      if (iVar1 <= iVar6) goto LAB_1800ce1c3;
    }
    do {
      fVar10 = (float)((uint)(*(float *)(lVar3 + 8 + (longlong)iVar6 * 0xc) - param_3) &
                      _DAT_1803817c0);
      iVar4 = iVar6;
      if (fVar8 <= fVar10) {
        iVar4 = iVar7;
        fVar10 = fVar8;
      }
      fVar8 = fVar10;
      iVar7 = iVar4;
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar1);
  }
LAB_1800ce1c3:
  uVar2 = *(undefined4 *)(lVar3 + 8 + (longlong)iVar7 * 0xc);
  *param_2 = *(undefined8 *)(lVar3 + (longlong)iVar7 * 0xc);
  *(undefined4 *)(param_2 + 1) = uVar2;
  return param_2;
}


