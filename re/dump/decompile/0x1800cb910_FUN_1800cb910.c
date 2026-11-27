// 0x1800cb910  FUN_1800cb910
// size=700 thunk=false
// signature: undefined FUN_1800cb910()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1800cb910(float *param_1,longlong param_2,float *param_3,char param_4)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  byte bVar9;
  int iVar10;
  longlong *plVar11;
  char *pcVar12;
  ulonglong uVar13;
  uint uVar14;
  int *piVar15;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  local_58 = 0xf7521f28977a3033;
  local_50 = 0xcb531a901b22d600;
  plVar11 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_78,&local_58);
  plVar11 = (longlong *)FUN_180241a30(*plVar11 + 0x28,local_68,&local_50);
  pcVar12 = (char *)FUN_1801fcfc0(*plVar11 + 0x28);
  if (*pcVar12 == '\0') {
    uVar13 = FUN_1800cb6b0(param_1,param_2,param_3,param_4);
  }
  else {
    lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(uint *)(lVar8 + 0x2124) & 1) == 0) {
      *(uint *)(lVar8 + 0x2124) = *(uint *)(lVar8 + 0x2124) | 1;
      memset((void *)(lVar8 + 0x10a0),0,0xf00);
      uVar13 = 0;
      do {
        *(undefined8 *)(lVar8 + 0x10c0 + uVar13 * 0x28) = 0;
        *(undefined8 *)(lVar8 + 0x10a0 + uVar13 * 0x28) = 0;
        uVar13 = uVar13 + 1;
      } while (uVar13 < 0x60);
    }
    iVar10 = 0;
    if (DAT_1803fa608 != 0) {
      iVar10 = *(int *)(DAT_1803fa608 + 0x20);
    }
    if (iVar10 != *(int *)(lVar8 + 0x1048)) {
      *(int *)(lVar8 + 0x1048) = iVar10;
      *(undefined4 *)(lVar8 + 0xee0) = 0;
    }
    piVar15 = (int *)(lVar8 + 0xee0);
    if (0 < *piVar15) {
      uVar13 = 0;
      do {
        if (((((*(longlong *)(uVar13 * 0x28 + 0x10a0 + lVar8) == param_2) &&
              (lVar1 = uVar13 * 0x28, *(char *)(lVar1 + 0x10c0 + lVar8) == param_4)) &&
             ((float)((uint)(*(float *)(lVar1 + 0x10a8 + lVar8) - *param_3) & _DAT_1803817c0) <=
              DAT_1803809c4)) &&
            (((float)((uint)(*(float *)(lVar1 + 0x10ac + lVar8) - param_3[1]) & _DAT_1803817c0) <=
              DAT_1803809c4 &&
             ((float)((uint)(*(float *)(lVar1 + 0x10b0 + lVar8) - param_3[2]) & _DAT_1803817c0) <=
              DAT_1803809c4)))) &&
           (((float)((uint)(*(float *)(lVar1 + 0x10b4 + lVar8) - *param_1) & _DAT_1803817c0) <=
             DAT_1803809c4 &&
            (((float)((uint)(*(float *)(lVar1 + 0x10b8 + lVar8) - param_1[1]) & _DAT_1803817c0) <=
              DAT_1803809c4 &&
             ((float)((uint)(*(float *)(lVar1 + 0x10bc + lVar8) - param_1[2]) & _DAT_1803817c0) <=
              DAT_1803809c4)))))) {
          return (ulonglong)*(byte *)(lVar1 + 0x10c1 + lVar8);
        }
        uVar14 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar14;
      } while ((int)uVar14 < *piVar15);
    }
    bVar9 = FUN_1800cb6b0(param_1,param_2,param_3,param_4);
    iVar10 = *piVar15;
    if (iVar10 < 0x60) {
      fVar2 = *param_3;
      fVar3 = param_3[1];
      fVar4 = param_3[2];
      fVar5 = *param_1;
      fVar6 = param_1[1];
      fVar7 = param_1[2];
      lVar1 = (longlong)iVar10 * 0x28;
      *piVar15 = iVar10 + 1;
      *(longlong *)(lVar1 + 0x10a0 + lVar8) = param_2;
      *(float *)(lVar1 + 0x10a8 + lVar8) = fVar2;
      *(float *)(lVar1 + 0x10ac + lVar8) = fVar3;
      *(float *)(lVar1 + 0x10b0 + lVar8) = fVar4;
      *(float *)(lVar1 + 0x10b4 + lVar8) = fVar5;
      *(float *)(lVar1 + 0x10b8 + lVar8) = fVar6;
      *(float *)(lVar1 + 0x10bc + lVar8) = fVar7;
      *(char *)(lVar1 + 0x10c0 + lVar8) = param_4;
      *(byte *)(lVar1 + 0x10c1 + lVar8) = bVar9;
    }
    uVar13 = (ulonglong)bVar9;
  }
  return uVar13;
}


