// 0x18013fa40  Features_Airstuck_AirstuckFeature_vfunc02
// size=1394 thunk=false
// signature: undefined Features_Airstuck_AirstuckFeature_vfunc02()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * Features_Airstuck_AirstuckFeature_vfunc02
                  (undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong *plVar6;
  float *pfVar7;
  int *piVar8;
  longlong lVar9;
  ULONGLONG UVar10;
  char *pcVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_88 [32];
  uint local_68 [2];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  local_40 = 0x93fd561a96ab0c67;
  local_38 = 0x42dfcfdb85d00c63;
  local_30 = param_3;
  plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_60,&local_40);
  plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_50,&local_38);
  pfVar7 = (float *)FUN_1801fcfc0(*plVar6 + 0x28);
  if (*(char *)pfVar7 == '\0') {
    DAT_1804099d4 = 0.0;
    DAT_1804099d0 = 0;
    DAT_1804099c8 = 0;
    DAT_1804099bc = 0.0;
    DAT_1804099ba = 0;
    DAT_1804099b9 = 0;
    DAT_1804099b8 = 0;
    DAT_1804099b0 = 0;
    DAT_1803e7cf4 = 0xfa;
    return pfVar7;
  }
  local_40 = 0x93fd561a96ab0c67;
  local_38 = 0x14aaa39e12056f36;
  plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_50,&local_40);
  plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_60,&local_38);
  piVar8 = (int *)FUN_1802029c0(*plVar6 + 0x28);
  iVar2 = *piVar8;
  uVar5 = iVar2 - 1;
  if (0xfd < uVar5) {
    DAT_1803e7cf4 = 0xfa;
    DAT_1804099b0 = 0;
    DAT_1804099b8 = 0;
    DAT_1804099b9 = 0;
    DAT_1804099ba = 0;
    DAT_1804099bc = 0.0;
    DAT_1804099c8 = 0;
    DAT_1804099d0 = 0;
    DAT_1804099d4 = 0.0;
    return (float *)(ulonglong)uVar5;
  }
  pfVar7 = (float *)FUN_180024540();
  if ((char)pfVar7 == '\0') {
    DAT_1803e7cf4 = 0xfa;
    DAT_1804099b0 = 0;
    DAT_1804099b8 = 0;
    DAT_1804099b9 = 0;
    DAT_1804099ba = 0;
    DAT_1804099bc = 0.0;
    DAT_1804099c8 = 0;
    DAT_1804099d0 = 0;
    DAT_1804099d4 = 0.0;
    return pfVar7;
  }
  if (DAT_1803fa545 != '\0') {
    DAT_1803e7cf4 = 0xfa;
    DAT_1804099b0 = 0;
    DAT_1804099b8 = 0;
    DAT_1804099b9 = 0;
    DAT_1804099ba = 0;
    DAT_1804099bc = 0.0;
    DAT_1804099c8 = 0;
    DAT_1804099d0 = 0;
    DAT_1804099d4 = 0.0;
    return pfVar7;
  }
  pfVar7 = (float *)FUN_1800245f0(iVar2);
  if ((char)pfVar7 == '\0') {
    DAT_1803e7cf4 = 0xfa;
    DAT_1804099b0 = 0;
    DAT_1804099b8 = 0;
    DAT_1804099b9 = 0;
    DAT_1804099ba = 0;
    DAT_1804099bc = 0.0;
    DAT_1804099c8 = 0;
    DAT_1804099d0 = 0;
    DAT_1804099d4 = 0.0;
    return pfVar7;
  }
  if (DAT_1803fa668 == (longlong *)0x0) {
    return pfVar7;
  }
  lVar9 = (**(code **)(*DAT_1803fa668 + 0x240))();
  if (lVar9 == 0) {
    return (float *)0x0;
  }
  DAT_1804099d0 = DAT_1804099d0 + 1;
  local_40 = 0x93fd561a96ab0c67;
  local_38 = 0xe6e21531f66dbcbd;
  plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_50,&local_40);
  plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_60,&local_38);
  piVar8 = (int *)FUN_1802029c0(*plVar6 + 0x28);
  if (*piVar8 != 1) {
    DAT_1804099b0 = 0;
    local_30 = -0x6c02a9e56954f399;
    local_40 = 0x57929d7a67798faf;
    plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_50,&local_30);
    plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_60,&local_40);
    piVar8 = (int *)FUN_1802029c0(*plVar6 + 0x28);
    iVar2 = *piVar8;
    if (*piVar8 < 1) {
      iVar2 = 1;
    }
    if (DAT_1803fa608 == (float *)0x0) {
      fVar16 = 0.0;
    }
    else {
      fVar16 = *DAT_1803fa608;
      if (0.0 < fVar16) {
        if (DAT_1804099bc == 0.0) {
          DAT_1804099bc = fVar16;
        }
        pfVar7 = DAT_1803fa608;
        if (DAT_180380c50 <= fVar16 - DAT_1804099bc) goto LAB_18013ff27;
      }
    }
    pfVar7 = (float *)((longlong)DAT_1804099d0 / (longlong)(iVar2 + 1) & 0xffffffff);
    if (DAT_1804099d0 % (iVar2 + 1) != 0) {
      *(int *)(lVar9 + 0xc) = *(int *)(lVar9 + 0xc) + -1;
      *(undefined4 *)(lVar9 + 0x20) = 0;
      *(undefined8 *)(param_3 + 0x14) = 0;
      *(undefined4 *)(param_3 + 0x1c) = 0;
      *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) & 0xfffff9e1;
      return pfVar7;
    }
LAB_18013ff27:
    DAT_1804099bc = fVar16;
    *(undefined8 *)(param_3 + 0x14) = 0;
    *(undefined4 *)(param_3 + 0x1c) = 0;
    *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) & 0xfffff9e1;
    return pfVar7;
  }
  UVar10 = GetTickCount64();
  DAT_1804099b0 = UVar10 + 0xfa;
  local_40 = 0x93fd561a96ab0c67;
  local_38 = 0x1f136f05274bb28d;
  plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_50,&local_40);
  plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_60,&local_38);
  pcVar11 = (char *)FUN_1801fcfc0(*plVar6 + 0x28);
  cVar1 = *pcVar11;
  uVar5 = DAT_1803e7cf4;
  if (cVar1 == '\0') {
    local_68[1] = 10000;
    local_68[0] = 0;
    local_40 = 0x93fd561a96ab0c67;
    local_38 = 0x73634b3d3ddd8dca;
    plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_50,&local_40);
    plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_60,&local_38);
    puVar12 = (uint *)FUN_1802029c0(*plVar6 + 0x28);
    puVar14 = local_68;
    if (-1 < (int)*puVar12) {
      puVar14 = puVar12;
    }
    puVar13 = local_68 + 1;
    if ((int)*puVar12 < 0x2711) {
      puVar13 = puVar14;
    }
    uVar5 = *puVar13;
  }
  pfVar7 = (float *)(ulonglong)uVar5;
  if (((int)uVar5 < 1) ||
     (((DAT_1804099c8 != 0 &&
       (pfVar7 = (float *)(longlong)(int)uVar5, (float *)(UVar10 - DAT_1804099c8) < pfVar7)) ||
      (DAT_1804099b8 = 1, DAT_1804099c8 = UVar10, cVar1 == '\0')))) goto LAB_18013fe50;
  pcVar3 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar4 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar9 = (*pcVar3)(DAT_1803fa360,uVar4);
  if (lVar9 != 0) {
    lVar9 = FUN_18001daf0(lVar9,local_60);
    fVar16 = *(float *)(lVar9 + 8);
    if (DAT_1804099b9 == '\0') {
      DAT_1804099b9 = '\x01';
      DAT_1804099c0 = fVar16;
    }
    else {
      fVar15 = 0.0;
      if (0.0 <= DAT_1804099c0 - fVar16) {
        fVar15 = DAT_1804099c0 - fVar16;
      }
      if (DAT_1804099ba != '\0') {
        if (DAT_1804099d4 * DAT_180380e28 + DAT_180380e9c < fVar15) {
          uVar5 = (uint)((float)(int)DAT_1803e7cf4 * DAT_180380ae4);
          local_38 = CONCAT44(local_38._4_4_,uVar5);
          DAT_1803e7cf4 = 0x78;
          DAT_1804099c0 = fVar16;
          if (0x78 < (int)uVar5) {
            DAT_1803e7cf4 = uVar5;
          }
          goto LAB_18013fe0c;
        }
        fVar15 = fVar15 * DAT_180380a3c + DAT_1804099d4 * DAT_180380b3c;
      }
      DAT_1804099ba = '\x01';
      uVar5 = DAT_1803e7cf4 + 0x19;
      local_40 = CONCAT44(local_40._4_4_,uVar5);
      DAT_1803e7cf4 = 3000;
      DAT_1804099c0 = fVar16;
      DAT_1804099d4 = fVar15;
      if ((int)uVar5 < 3000) {
        DAT_1803e7cf4 = uVar5;
      }
    }
  }
LAB_18013fe0c:
  uVar5 = DAT_1803ff250 & 0x80000007;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
  }
  pfVar7 = (float *)(ulonglong)uVar5;
  DAT_1803ff250 = DAT_1803ff250 + 1;
  if (uVar5 == 0) {
    pfVar7 = (float *)FUN_180014410("[AIRSTUCK] auto interval=%dms avgDrop=%.1fu\n",DAT_1803e7cf4,
                                    (double)DAT_1804099d4);
  }
LAB_18013fe50:
  if (param_3 != 0) {
    *(undefined8 *)(param_3 + 0x14) = 0;
    *(undefined4 *)(param_3 + 0x1c) = 0;
    *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) & 0xfffff9e1;
    return pfVar7;
  }
  return pfVar7;
}


