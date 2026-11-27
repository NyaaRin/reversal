// 0x180267b90  FUN_180267b90
// size=575 thunk=false
// signature: undefined FUN_180267b90()
// status: ok


void FUN_180267b90(longlong param_1,uint param_2,char param_3,float param_4)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int *piVar9;
  void *_Dst;
  char cVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  float fVar14;
  
  if ((param_2 != 0) && (*(char *)(param_1 + 0xba5) != '\0')) {
    lVar6 = *(longlong *)(param_1 + 0xd0);
    if (*(char *)(lVar6 + 0x79) != '\0') {
      if (param_2 == 0x8000) {
        param_2 = 0x1000;
      }
      else if (param_2 == 0x1000) {
        param_2 = 0x8000;
      }
      else if (param_2 == 0x212) {
        param_2 = 0x20f;
      }
      else if (param_2 == 0x216) {
        param_2 = 0x213;
      }
      else if (param_2 == 0x20f) {
        param_2 = 0x212;
      }
      else if (param_2 == 0x213) {
        param_2 = 0x216;
      }
    }
    iVar3 = *(int *)(lVar6 + 0x1498);
    uVar13 = iVar3 - 1;
    if (-1 < (int)uVar13) {
      do {
        piVar9 = (int *)((ulonglong)uVar13 * 0x1c + *(longlong *)(lVar6 + 0x14a0));
        if ((*piVar9 == 4) && (piVar9[3] == param_2)) goto LAB_180267c4c;
        uVar13 = uVar13 - 1;
      } while (-1 < (int)uVar13);
    }
    piVar9 = (int *)0x0;
LAB_180267c4c:
    uVar13 = param_2;
    if ((param_2 & 0xf000) != 0) {
      if (param_2 == 0x1000) {
        uVar13 = 0x297;
      }
      else if (param_2 == 0x2000) {
        uVar13 = 0x298;
      }
      else if (param_2 == 0x4000) {
        uVar13 = 0x299;
      }
      else if (param_2 == 0x8000) {
        uVar13 = 0x29a;
      }
    }
    if (piVar9 == (int *)0x0) {
      cVar10 = *(char *)(lVar6 + -0x1edc + (longlong)(int)uVar13 * 0x10);
      fVar14 = *(float *)(lVar6 + -0x1ed0 + (longlong)(int)uVar13 * 0x10);
    }
    else {
      cVar10 = (char)piVar9[4];
      fVar14 = (float)piVar9[5];
    }
    if ((cVar10 != param_3) || (fVar14 != param_4)) {
      iVar4 = *(int *)(lVar6 + 0x14bc);
      *(int *)(lVar6 + 0x14bc) = iVar4 + 1;
      iVar5 = *(int *)(lVar6 + 0x149c);
      if (iVar3 == iVar5) {
        if (iVar5 == 0) {
          iVar8 = 8;
        }
        else {
          iVar8 = iVar5 / 2 + iVar5;
        }
        iVar12 = iVar3 + 1;
        if (iVar3 + 1 < iVar8) {
          iVar12 = iVar8;
        }
        if (iVar5 < iVar12) {
          _Dst = (void *)FUN_18026f580((longlong)iVar12 * 0x1c);
          if (*(void **)(lVar6 + 0x14a0) != (void *)0x0) {
            memcpy(_Dst,*(void **)(lVar6 + 0x14a0),(longlong)*(int *)(lVar6 + 0x1498) * 0x1c);
            FUN_18026f680(*(undefined8 *)(lVar6 + 0x14a0));
          }
          *(void **)(lVar6 + 0x14a0) = _Dst;
          *(int *)(lVar6 + 0x149c) = iVar12;
        }
      }
      lVar11 = (longlong)*(int *)(lVar6 + 0x1498) * 0x1c;
      lVar7 = *(longlong *)(lVar6 + 0x14a0);
      puVar1 = (undefined8 *)(lVar11 + lVar7);
      *puVar1 = CONCAT44((param_2 - 0x278 < 0x18) + 2,4);
      puVar1[1] = CONCAT44(param_2,iVar4);
      puVar2 = (ulonglong *)(lVar11 + 0xc + lVar7);
      *puVar2 = (ulonglong)CONCAT14(param_3,param_2);
      puVar2[1] = (ulonglong)(uint)param_4;
      *(int *)(lVar6 + 0x1498) = *(int *)(lVar6 + 0x1498) + 1;
    }
  }
  return;
}


