// 0x180267dd0  FUN_180267dd0
// size=467 thunk=false
// signature: undefined FUN_180267dd0()
// status: ok


void FUN_180267dd0(longlong param_1,float param_2,float param_3)

{
  undefined8 *puVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  void *_Dst;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  float fVar12;
  
  if (*(char *)(param_1 + 0xba5) != '\0') {
    lVar5 = *(longlong *)(param_1 + 0xd0);
    if (DAT_180381454 < param_3) {
      iVar7 = (int)param_3;
      if ((param_3 < 0.0) && ((float)iVar7 != param_3)) {
        iVar7 = iVar7 + -1;
      }
      param_3 = (float)iVar7;
    }
    if (DAT_180381454 < param_2) {
      iVar7 = (int)param_2;
      if ((param_2 < 0.0) && ((float)iVar7 != param_2)) {
        iVar7 = iVar7 + -1;
      }
      param_2 = (float)iVar7;
    }
    iVar7 = *(int *)(lVar5 + 0x1498);
    uVar9 = iVar7 - 1;
    if (-1 < (int)uVar9) {
      lVar6 = *(longlong *)(lVar5 + 0x14a0);
      do {
        lVar10 = (ulonglong)uVar9 * 0x1c;
        if (*(int *)(lVar10 + lVar6) == 1) {
          fVar2 = *(float *)(lVar10 + 0xc + lVar6);
          fVar12 = *(float *)(lVar10 + 0x10 + lVar6);
          goto LAB_180267e86;
        }
        uVar9 = uVar9 - 1;
      } while (-1 < (int)uVar9);
    }
    fVar2 = *(float *)(lVar5 + 0x100);
    fVar12 = *(float *)(lVar5 + 0x104);
LAB_180267e86:
    if ((fVar2 != param_2) || (fVar12 != param_3)) {
      iVar3 = *(int *)(lVar5 + 0x14bc);
      *(int *)(lVar5 + 0x14bc) = iVar3 + 1;
      iVar4 = *(int *)(lVar5 + 0x149c);
      uVar9 = *(uint *)(lVar5 + 0x14b8);
      if (iVar7 == iVar4) {
        if (iVar4 == 0) {
          iVar8 = 8;
        }
        else {
          iVar8 = iVar4 / 2 + iVar4;
        }
        iVar11 = iVar7 + 1;
        if (iVar7 + 1 < iVar8) {
          iVar11 = iVar8;
        }
        if (iVar4 < iVar11) {
          _Dst = (void *)FUN_18026f580((longlong)iVar11 * 0x1c);
          if (*(void **)(lVar5 + 0x14a0) != (void *)0x0) {
            memcpy(_Dst,*(void **)(lVar5 + 0x14a0),(longlong)*(int *)(lVar5 + 0x1498) * 0x1c);
            FUN_18026f680(*(undefined8 *)(lVar5 + 0x14a0));
          }
          *(void **)(lVar5 + 0x14a0) = _Dst;
          *(int *)(lVar5 + 0x149c) = iVar11;
        }
      }
      lVar10 = (longlong)*(int *)(lVar5 + 0x1498) * 0x1c;
      lVar6 = *(longlong *)(lVar5 + 0x14a0);
      puVar1 = (undefined8 *)(lVar10 + lVar6);
      *puVar1 = 0x100000001;
      puVar1[1] = CONCAT44(param_2,iVar3);
      puVar1 = (undefined8 *)(lVar10 + 0xc + lVar6);
      *puVar1 = CONCAT44(param_3,param_2);
      puVar1[1] = (ulonglong)uVar9;
      *(int *)(lVar5 + 0x1498) = *(int *)(lVar5 + 0x1498) + 1;
    }
  }
  return;
}


