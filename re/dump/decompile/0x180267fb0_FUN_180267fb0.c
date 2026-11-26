// 0x180267fb0  FUN_180267fb0
// size=613 thunk=false
// signature: undefined FUN_180267fb0()
// status: ok


void FUN_180267fb0(longlong param_1,int param_2,char param_3)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  void *_Dst;
  char cVar10;
  uint uVar11;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar12;
  
  cVar10 = *(char *)(param_1 + 0xba5);
  lVar6 = *(longlong *)(param_1 + 0xd0);
  do {
    if (cVar10 == '\0') {
      return;
    }
    if ((((*(char *)(param_1 + 0x51) != '\0') && (param_2 == 0)) &&
        (*(char *)(param_1 + 0xb63) != '\0')) && (param_2 = 1, param_3 == '\0')) {
      *(undefined1 *)(param_1 + 0xb63) = 0;
    }
    iVar3 = *(int *)(lVar6 + 0x1498);
    uVar14 = iVar3 - 1;
    uVar15 = (ulonglong)uVar14;
    if (-1 < (int)uVar14) {
      lVar7 = *(longlong *)(lVar6 + 0x14a0);
      uVar12 = uVar15;
      do {
        lVar9 = uVar12 * 0x1c;
        if ((*(int *)(lVar9 + lVar7) == 3) && (*(int *)(lVar9 + 0xc + lVar7) == param_2)) {
          cVar10 = *(char *)(lVar9 + 0x10 + lVar7);
          goto LAB_180268068;
        }
        uVar11 = (int)uVar12 - 1;
        uVar12 = (ulonglong)uVar11;
      } while (-1 < (int)uVar11);
    }
    cVar10 = *(char *)((longlong)param_2 + 0x108 + lVar6);
LAB_180268068:
    if (cVar10 == param_3) {
      return;
    }
    if (((*(char *)(param_1 + 0x51) == '\0') || (param_2 != 0)) || (param_3 == '\0')) {
LAB_180268118:
      iVar4 = *(int *)(lVar6 + 0x14bc);
      *(int *)(lVar6 + 0x14bc) = iVar4 + 1;
      iVar5 = *(int *)(lVar6 + 0x149c);
      uVar14 = *(uint *)(lVar6 + 0x14b8);
      if (iVar3 == iVar5) {
        if (iVar5 == 0) {
          iVar8 = 8;
        }
        else {
          iVar8 = iVar5 / 2 + iVar5;
        }
        iVar13 = iVar3 + 1;
        if (iVar3 + 1 < iVar8) {
          iVar13 = iVar8;
        }
        if (iVar5 < iVar13) {
          _Dst = (void *)FUN_18026f580((longlong)iVar13 * 0x1c);
          if (*(void **)(lVar6 + 0x14a0) != (void *)0x0) {
            memcpy(_Dst,*(void **)(lVar6 + 0x14a0),(longlong)*(int *)(lVar6 + 0x1498) * 0x1c);
            FUN_18026f680(*(undefined8 *)(lVar6 + 0x14a0));
          }
          *(void **)(lVar6 + 0x14a0) = _Dst;
          *(int *)(lVar6 + 0x149c) = iVar13;
        }
      }
      lVar9 = (longlong)*(int *)(lVar6 + 0x1498) * 0x1c;
      lVar7 = *(longlong *)(lVar6 + 0x14a0);
      puVar1 = (undefined8 *)(lVar9 + lVar7);
      *puVar1 = 0x100000003;
      puVar1[1] = CONCAT44(param_2,iVar4);
      puVar2 = (ulonglong *)(lVar9 + 0xc + lVar7);
      *puVar2 = (ulonglong)CONCAT14(param_3,param_2);
      puVar2[1] = (ulonglong)uVar14;
      *(int *)(lVar6 + 0x1498) = *(int *)(lVar6 + 0x1498) + 1;
      return;
    }
    if (-1 < (int)uVar14) {
      lVar7 = *(longlong *)(lVar6 + 0x14a0);
      do {
        lVar9 = uVar15 * 0x1c;
        if ((*(int *)(lVar9 + lVar7) == 4) && (*(int *)(lVar9 + 0xc + lVar7) == 0x8000)) {
          cVar10 = *(char *)(lVar9 + 0x10 + lVar7);
          goto LAB_1802680c4;
        }
        uVar14 = (int)uVar15 - 1;
        uVar15 = (ulonglong)uVar14;
      } while (-1 < (int)uVar14);
    }
    cVar10 = *(char *)(lVar6 + 0x11f);
LAB_1802680c4:
    if (cVar10 == '\0') goto LAB_180268118;
    if ((*(byte *)(lVar6 + 0x28e4) & 0x80) != 0) {
      FUN_180289170("[io] Super+Left Click aliased into Right Click\n");
    }
    *(undefined1 *)(param_1 + 0xb63) = 1;
    param_3 = '\x01';
    cVar10 = *(char *)(param_1 + 0xba5);
    param_2 = 1;
    lVar6 = *(longlong *)(param_1 + 0xd0);
  } while( true );
}


