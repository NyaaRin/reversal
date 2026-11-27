// 0x1802b3a10  FUN_1802b3a10
// size=1997 thunk=false
// signature: undefined FUN_1802b3a10()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1802b3a10(char *param_1,int param_2,double *param_3,double *param_4,double *param_5,
                       undefined *param_6)

{
  char *pcVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  short sVar6;
  ushort uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  char *pcVar13;
  byte bVar14;
  char cVar15;
  double dVar16;
  double *pdVar17;
  char *pcVar18;
  double dVar19;
  short sVar20;
  short sVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  double *local_e0;
  char *local_d8;
  undefined1 local_c8 [64];
  ulonglong local_88;
  
  local_88 = DAT_1803da4c0 ^ (ulonglong)auStack_128;
  lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_e0 = param_4;
  local_d8 = param_1;
  if (*(char *)(lVar9 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar10 = *(longlong *)(lVar9 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar10 + 0x1520) + 0xce) = 1;
  uVar11 = *(ulonglong *)(lVar10 + 0x1520);
  if (*(char *)(uVar11 + 0xd1) != '\0') {
    return uVar11 & 0xffffffffffffff00;
  }
  if (*(char *)(lVar9 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar10 = *(longlong *)(lVar9 + 0xec0);
  if (param_6 == (undefined *)0x0) {
    param_6 = (&PTR_DAT_180338980)[(longlong)param_2 * 4];
  }
  local_108 = (undefined8 *)param_6;
  FUN_1802b1470(local_c8,0x40,param_2,param_3);
  *(uint *)(lVar10 + 0x1ec4) = *(uint *)(lVar10 + 0x1ec4) | 0x10000;
  if (param_4 == (double *)0x0) {
    fVar25 = 0.0;
  }
  else {
    if (*(char *)(lVar9 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    fVar25 = *(float *)(*(longlong *)(lVar9 + 0xec0) + 0xcc8);
    fVar25 = fVar25 + fVar25 + *(float *)(*(longlong *)(lVar9 + 0xec0) + 0x1238);
    FUN_18027fc30();
    FUN_18027abf0(param_1);
    fVar24 = fVar25 + *(float *)(lVar10 + 0xcdc);
    fVar23 = (float)FUN_18027f9c0();
    fVar23 = fVar23 - (fVar24 + fVar24);
    fVar24 = DAT_180380bb0;
    if (DAT_180380bb0 <= fVar23) {
      fVar24 = fVar23;
    }
    if (*(char *)(lVar9 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    param_1 = "";
    lVar12 = *(longlong *)(lVar9 + 0xec0);
    puVar2 = (uint *)(lVar12 + 0x1ec0);
    *puVar2 = *puVar2 | 1;
    *(float *)(lVar12 + 0x1ed8) = fVar24;
  }
  dVar19 = 0.0;
  fVar24 = 0.0;
  local_108 = &local_e8;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0x10001000;
  local_e8 = 0;
  FUN_1802b74e0(param_1,0,local_c8,0x40);
  if ((*(uint *)(lVar10 + 0x1f00) & 0x800) == 0) {
    bVar14 = 0;
  }
  else {
    local_108 = (undefined8 *)0x0;
    bVar14 = FUN_1802b1550(local_c8,param_2,param_3,param_6);
  }
  if (param_4 == (double *)0x0) goto LAB_1802b4182;
  uVar3 = *(undefined4 *)(lVar10 + 0xcc4);
  uVar4 = *(undefined4 *)(lVar10 + 0xcc8);
  *(undefined4 *)(lVar10 + 0xcc4) = *(undefined4 *)(lVar10 + 0xcc8);
  FUN_180279080(8,1);
  FUN_18027f5b0(0,*(undefined4 *)(lVar10 + 0xcdc));
  local_e8 = CONCAT44(fVar25,fVar25);
  cVar15 = FUN_1802abf60(&DAT_1803410ec,&local_e8,0);
  if (cVar15 != '\0') {
    if ((*(char *)(lVar10 + 0x11c) == '\0') || (pdVar17 = param_5, param_5 == (double *)0x0)) {
      pdVar17 = local_e0;
    }
    switch(param_2) {
    case 0:
      cVar15 = *(char *)pdVar17;
      cVar5 = *(char *)param_3;
      if (cVar15 < '\x01') {
        if ((-1 < cVar15) || ((int)cVar5 <= cVar15 + 0x7f)) goto LAB_1802b3d0e;
        *(undefined1 *)param_3 = 0x7f;
      }
      else if ((int)cVar5 < cVar15 + -0x80) {
        *(undefined1 *)param_3 = 0x80;
      }
      else {
LAB_1802b3d0e:
        *(char *)param_3 = cVar5 - cVar15;
      }
      break;
    case 1:
      bVar14 = *(byte *)pdVar17;
      if ((bVar14 == 0) || (bVar14 <= *(byte *)param_3)) {
        *(byte *)param_3 = *(byte *)param_3 - bVar14;
      }
      else {
        *(undefined1 *)param_3 = 0;
      }
      break;
    case 2:
      sVar20 = *(short *)pdVar17;
      sVar6 = *(short *)param_3;
      if (sVar20 < 1) {
        if ((-1 < sVar20) || ((int)sVar6 <= sVar20 + 0x7fff)) goto LAB_1802b3d70;
        *(short *)param_3 = 0x7fff;
      }
      else if ((int)sVar6 < sVar20 + -0x8000) {
        *(short *)param_3 = -0x8000;
      }
      else {
LAB_1802b3d70:
        *(short *)param_3 = sVar6 - sVar20;
      }
      break;
    case 3:
      uVar7 = *(ushort *)pdVar17;
      if ((uVar7 == 0) || (uVar7 <= *(ushort *)param_3)) {
        dVar19 = (double)(ulonglong)(ushort)(*(ushort *)param_3 - uVar7);
      }
      *(short *)param_3 = SUB82(dVar19,0);
      break;
    case 4:
      fVar24 = *(float *)pdVar17;
      fVar23 = *(float *)param_3;
      if ((int)fVar24 < 1) {
        if ((-1 < (int)fVar24) || ((int)fVar23 <= (int)fVar24 + 0x7fffffff)) goto LAB_1802b3dd6;
        *(float *)param_3 = NAN;
      }
      else if ((int)fVar23 < (int)fVar24 + -0x80000000) {
        *(float *)param_3 = -0.0;
      }
      else {
LAB_1802b3dd6:
        *(int *)param_3 = (int)fVar23 - (int)fVar24;
      }
      break;
    case 5:
      fVar23 = *(float *)pdVar17;
      if ((fVar23 == 0.0) || ((uint)fVar23 <= (uint)*(float *)param_3)) {
        fVar24 = (float)((int)*(float *)param_3 - (int)fVar23);
      }
      *(float *)param_3 = fVar24;
      break;
    case 6:
      dVar19 = *pdVar17;
      dVar16 = *param_3;
      if ((longlong)dVar19 < 1) {
        if ((-1 < (longlong)dVar19) || ((longlong)dVar16 <= (longlong)dVar19 + 0x7fffffffffffffff))
        goto LAB_1802b3e23;
        *param_3 = NAN;
      }
      else if ((longlong)dVar16 < (longlong)dVar19 + -0x8000000000000000) {
        *param_3 = -0.0;
      }
      else {
LAB_1802b3e23:
        *param_3 = (double)((longlong)dVar16 - (longlong)dVar19);
      }
      break;
    case 7:
      dVar16 = *pdVar17;
      if ((dVar16 == 0.0) || ((ulonglong)dVar16 <= (ulonglong)*param_3)) {
        dVar19 = (double)((longlong)*param_3 - (longlong)dVar16);
      }
      *param_3 = dVar19;
      break;
    case 8:
      *(float *)param_3 = *(float *)param_3 - *(float *)pdVar17;
      break;
    case 9:
      *param_3 = *param_3 - *pdVar17;
    }
    bVar14 = 1;
  }
  FUN_18027f5b0(0,*(undefined4 *)(lVar10 + 0xcdc));
  local_e8 = CONCAT44(fVar25,fVar25);
  cVar15 = FUN_1802abf60(&DAT_1803616bc,&local_e8,0);
  if (cVar15 != '\0') {
    if ((*(char *)(lVar10 + 0x11c) == '\0') || (param_5 == (double *)0x0)) {
      param_5 = local_e0;
    }
    switch(param_2) {
    case 0:
      cVar15 = *(char *)param_5;
      cVar5 = *(char *)param_3;
      if (cVar15 < '\0') {
        if ((int)cVar5 < -0x80 - cVar15) {
          *(undefined1 *)param_3 = 0x80;
        }
        else {
LAB_1802b3f05:
          *(char *)param_3 = cVar15 + cVar5;
        }
      }
      else {
        if ((cVar15 < '\x01') || ((int)cVar5 <= 0x7f - cVar15)) goto LAB_1802b3f05;
        *(undefined1 *)param_3 = 0x7f;
      }
      break;
    case 1:
      bVar14 = *(byte *)param_5;
      if ((bVar14 == 0) || ((int)(uint)*(byte *)param_3 <= (int)(0xff - (uint)bVar14))) {
        *(byte *)param_3 = bVar14 + *(byte *)param_3;
      }
      else {
        *(undefined1 *)param_3 = 0xff;
      }
      break;
    case 2:
      sVar20 = *(short *)param_5;
      sVar6 = *(short *)param_3;
      if (sVar20 < 0) {
        if ((int)sVar6 < -0x8000 - sVar20) {
          *(short *)param_3 = -0x8000;
          break;
        }
LAB_1802b3f70:
        sVar21 = sVar6 + sVar20;
      }
      else if ((sVar20 < 1) || (sVar21 = 0x7fff, (int)sVar6 <= 0x7fff - sVar20)) goto LAB_1802b3f70;
      *(short *)param_3 = sVar21;
      break;
    case 3:
      uVar7 = *(ushort *)param_5;
      if ((uVar7 == 0) ||
         (sVar20 = -1, (int)(uint)*(ushort *)param_3 <= (int)(0xffff - (uint)uVar7))) {
        sVar20 = *(ushort *)param_3 + uVar7;
      }
      *(short *)param_3 = sVar20;
      break;
    case 4:
      fVar25 = *(float *)param_5;
      fVar24 = *(float *)param_3;
      if ((int)fVar25 < 0) {
        if ((int)fVar24 < -0x80000000 - (int)fVar25) {
          *(float *)param_3 = -0.0;
          break;
        }
LAB_1802b3fd8:
        fVar23 = (float)((int)fVar25 + (int)fVar24);
      }
      else if (((int)fVar25 < 1) || (fVar23 = NAN, (int)fVar24 <= 0x7fffffff - (int)fVar25))
      goto LAB_1802b3fd8;
      *(float *)param_3 = fVar23;
      break;
    case 5:
      fVar25 = *(float *)param_5;
      if ((fVar25 == 0.0) || (fVar24 = -NAN, (uint)*(float *)param_3 <= ~(uint)fVar25)) {
        fVar24 = (float)((int)fVar25 + (int)*(float *)param_3);
      }
      *(float *)param_3 = fVar24;
      break;
    case 6:
      dVar19 = *param_5;
      dVar16 = *param_3;
      if ((longlong)dVar19 < 0) {
        if ((longlong)dVar16 < -0x8000000000000000 - (longlong)dVar19) {
          *param_3 = -0.0;
          break;
        }
LAB_1802b4032:
        dVar22 = (double)((longlong)dVar19 + (longlong)dVar16);
      }
      else if (((longlong)dVar19 < 1) ||
              (dVar22 = NAN, (longlong)dVar16 <= 0x7fffffffffffffff - (longlong)dVar19))
      goto LAB_1802b4032;
      *param_3 = dVar22;
      break;
    case 7:
      dVar19 = *param_5;
      if ((dVar19 == 0.0) || (dVar16 = -NAN, (ulonglong)*param_3 <= ~(ulonglong)dVar19)) {
        dVar16 = (double)((longlong)dVar19 + (longlong)*param_3);
      }
      *param_3 = dVar16;
      break;
    case 8:
      *(float *)param_3 = *(float *)param_3 + *(float *)param_5;
      break;
    case 9:
      *param_3 = *param_3 + *param_5;
    }
    bVar14 = 1;
  }
  if (*(char *)(lVar9 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar12 = *(longlong *)(lVar9 + 0xec0);
  iVar8 = *(int *)(lVar12 + 0x2008);
  if (iVar8 < 2) {
    FUN_18027e9c0("Calling PopItemFlag() too many times!");
  }
  else {
    *(int *)(lVar12 + 0x2008) = iVar8 + -1;
    *(undefined4 *)(lVar12 + 0x1eb8) =
         *(undefined4 *)(*(longlong *)(lVar12 + 0x2010) + -8 + (longlong)iVar8 * 4);
  }
  pcVar13 = local_d8;
  pcVar18 = local_d8;
  if (local_d8 != (char *)0xffffffffffffffff) {
    while (*pcVar18 != '\0') {
      pcVar1 = pcVar18 + 1;
      if (((*pcVar18 == '#') && (*pcVar1 == '#')) ||
         (pcVar18 = pcVar1, pcVar1 == (char *)0xffffffffffffffff)) break;
    }
    if (local_d8 != pcVar18) {
      FUN_18027f5b0(0,*(undefined4 *)(lVar10 + 0xcdc));
      FUN_1802aa3c0(pcVar13,pcVar18,0);
    }
  }
  cVar15 = *(char *)(lVar9 + 0x10);
  *(undefined4 *)(lVar10 + 0xcc4) = uVar3;
  *(undefined4 *)(lVar10 + 0xcc8) = uVar4;
  if (cVar15 == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0xec0) + 0x1520);
  iVar8 = *(int *)(lVar9 + 0x108);
  if (iVar8 < 2) {
    FUN_18027e9c0("Calling PopID() too many times!");
  }
  else {
    *(int *)(lVar9 + 0x108) = iVar8 + -1;
  }
  FUN_18027fda0();
LAB_1802b4182:
  *(uint *)(lVar10 + 0x1efc) = *(uint *)(lVar10 + 0x1efc) & 0xfffeffff;
  if (bVar14 != 0) {
    FUN_18026ed00(*(undefined4 *)(lVar10 + 0x1ef8));
  }
  return (ulonglong)bVar14;
}


