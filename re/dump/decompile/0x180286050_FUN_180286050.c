// 0x180286050  FUN_180286050
// size=860 thunk=false
// signature: undefined FUN_180286050()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180286050(void)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char *pcVar7;
  longlong lVar8;
  bool bVar9;
  bool bVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  lVar3 = *(longlong *)(lVar2 + 0x2070);
  if (((*(uint *)(lVar3 + 0x14) & 0x10000) == 0) && (*(longlong *)(lVar2 + 0x2258) == 0)) {
    pcVar7 = (char *)FUN_180267330(0x205);
    if (*pcVar7 == '\0') {
      bVar9 = false;
    }
    else {
      cVar4 = FUN_18027deb0(0x205,0xffffffff);
      bVar9 = cVar4 != '\0';
    }
    pcVar7 = (char *)FUN_180267330(0x206);
    if (*pcVar7 == '\0') {
      bVar10 = false;
    }
    else {
      cVar4 = FUN_18027deb0(0x206,0xffffffff);
      bVar10 = cVar4 != '\0';
    }
    cVar4 = FUN_18027bb30(0x207,1,0xffffffff);
    cVar5 = FUN_18027bb30(0x208,1,0xffffffff);
    if ((bVar9 != bVar10) || (cVar4 != cVar5)) {
      if (*(int *)(lVar2 + 0x207c) != 0) {
        FUN_180283d20(0);
      }
      if (((*(byte *)(lVar3 + 0x174) & 1) != 0) || (*(char *)(lVar3 + 0x17a) == '\0')) {
        lVar8 = (longlong)*(int *)(lVar2 + 0x207c);
        fVar13 = ((*(float *)(lVar3 + 0x234) - *(float *)(lVar3 + 0x22c)) -
                 *(float *)(lVar3 + 0x2c0)) +
                 (*(float *)(lVar3 + 0x404 + lVar8 * 0x10) -
                 *(float *)(lVar3 + 0x3fc + lVar8 * 0x10));
        fVar11 = 0.0;
        if (0.0 <= fVar13) {
          fVar11 = fVar13;
        }
        cVar6 = FUN_18027bb30(0x205,1,0);
        uVar12 = _UNK_1803817f4;
        if (cVar6 != '\0') {
          fVar11 = (float)((uint)fVar11 ^ DAT_1803817f0);
          *(undefined4 *)(lVar2 + 0x2120) = 3;
          *(undefined4 *)(lVar2 + 0x2128) = 2;
          *(undefined4 *)(lVar2 + 0x2114) = 0x810;
          goto LAB_1802861fa;
        }
        cVar6 = FUN_18027bb30(0x206,1,0);
        if (cVar6 == '\0') {
          fVar11 = 0.0;
          if (cVar4 != '\0') {
            fVar11 = *(float *)(lVar3 + 0x3f8 + lVar8 * 0x10);
            pfVar1 = (float *)(lVar3 + 0x400 + lVar8 * 0x10);
            *(undefined4 *)(lVar3 + 0x404 + lVar8 * 0x10) = 0;
            *(undefined4 *)(lVar3 + 0x3fc + lVar8 * 0x10) = 0;
            if (*pfVar1 <= fVar11 && fVar11 != *pfVar1) {
              *(undefined4 *)(lVar3 + 0x400 + lVar8 * 0x10) = 0;
              *(undefined4 *)(lVar3 + 0x3f8 + lVar8 * 0x10) = 0;
            }
            fVar11 = 0.0;
            uVar12 = 0;
            *(undefined4 *)(lVar2 + 0x2120) = 3;
            *(undefined4 *)(lVar2 + 0x2114) = 0x50;
            goto LAB_1802861fa;
          }
          if (cVar5 != '\0') {
            uVar12 = *(undefined4 *)(lVar3 + 0x44);
            fVar13 = *(float *)(lVar3 + 0x3f8 + lVar8 * 0x10);
            pfVar1 = (float *)(lVar3 + 0x400 + lVar8 * 0x10);
            *(undefined4 *)(lVar3 + 0x404 + lVar8 * 0x10) = uVar12;
            *(undefined4 *)(lVar3 + 0x3fc + lVar8 * 0x10) = uVar12;
            if (*pfVar1 <= fVar13 && fVar13 != *pfVar1) {
              *(undefined4 *)(lVar3 + 0x400 + lVar8 * 0x10) = 0;
              *(undefined4 *)(lVar3 + 0x3f8 + lVar8 * 0x10) = 0;
            }
            *(undefined4 *)(lVar2 + 0x2114) = 0x50;
            goto LAB_180286395;
          }
        }
        else {
          *(undefined4 *)(lVar2 + 0x2128) = 3;
          *(undefined4 *)(lVar2 + 0x2114) = 0x810;
LAB_180286395:
          *(undefined4 *)(lVar2 + 0x2120) = 2;
        }
        uVar12 = 0;
        goto LAB_1802861fa;
      }
      cVar6 = FUN_18027bb30(0x205,1,0xffffffff);
      if (cVar6 == '\0') {
        cVar6 = FUN_18027bb30(0x206,1,0xffffffff);
        if (cVar6 != '\0') {
          fVar11 = (*(float *)(lVar3 + 0x234) - *(float *)(lVar3 + 0x22c)) +
                   *(float *)(lVar3 + 0x9c);
          goto LAB_1802861e1;
        }
        if (cVar4 == '\0') {
          if (cVar5 == '\0') goto LAB_1802861f7;
          *(undefined4 *)(lVar3 + 0xac) = *(undefined4 *)(lVar3 + 0xa4);
        }
        else {
          *(undefined4 *)(lVar3 + 0xac) = 0;
        }
      }
      else {
        fVar11 = *(float *)(lVar3 + 0x9c) - (*(float *)(lVar3 + 0x234) - *(float *)(lVar3 + 0x22c));
LAB_1802861e1:
        *(float *)(lVar3 + 0xac) = fVar11;
      }
      *(undefined4 *)(lVar3 + 0xbc) = 0;
      *(undefined4 *)(lVar3 + 0xb4) = 0;
    }
  }
LAB_1802861f7:
  fVar11 = 0.0;
  uVar12 = 0;
LAB_1802861fa:
  return CONCAT44(uVar12,fVar11);
}


