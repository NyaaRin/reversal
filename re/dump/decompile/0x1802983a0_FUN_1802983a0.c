// 0x1802983a0  FUN_1802983a0
// size=1063 thunk=false
// signature: undefined FUN_1802983a0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1802983a0(longlong param_1,undefined8 *param_2)

{
  short *psVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  short *_Src;
  size_t _Size;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  char cVar11;
  void *pvVar12;
  undefined8 *puVar13;
  uint uVar14;
  longlong lVar15;
  int iVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined1 *local_58;
  ulonglong local_50;
  undefined8 *puVar16;
  
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x2b0) == 0) {
    FUN_18029bdd0();
  }
  iVar5 = *(int *)(param_1 + 0x68);
  puVar16 = (undefined8 *)0x0;
  iVar20 = 8;
  if (*(char *)((longlong)param_2 + 0x35) == '\0') {
    local_70 = (undefined8 *)FUN_18026f580(0x50);
    local_58 = local_78;
    puVar13 = puVar16;
    if (local_70 != (undefined8 *)0x0) {
      local_70[4] = 0;
      local_70[5] = 0;
      local_68 = local_70 + 7;
      *local_68 = 0;
      local_70[8] = 0;
      *local_70 = 0;
      local_70[1] = 0;
      local_70[2] = 0;
      local_70[3] = 0;
      local_70[4] = 0;
      local_70[5] = 0;
      local_70[6] = 0;
      local_70[7] = 0;
      local_70[8] = 0;
      local_70[9] = 0;
      *(undefined4 *)(local_70 + 9) = 0x3f800000;
      puVar13 = local_70;
    }
    iVar6 = *(int *)(param_1 + 0x29c);
    *(int *)(param_1 + 0x29c) = iVar6 + 1;
    *(int *)(puVar13 + 3) = iVar6;
    *(undefined4 *)(puVar13 + 2) = *(undefined4 *)(param_2 + 0xf);
    *(undefined4 *)((longlong)puVar13 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x3c);
    *(undefined4 *)((longlong)puVar13 + 0x14) = *(undefined4 *)(param_2 + 0xe);
    iVar6 = *(int *)(param_1 + 0x6c);
    local_60 = local_70;
    if (*(int *)(param_1 + 0x68) == iVar6) {
      iVar18 = *(int *)(param_1 + 0x68) + 1;
      iVar17 = iVar20;
      if (iVar6 != 0) {
        iVar17 = iVar6 / 2 + iVar6;
      }
      if (iVar18 < iVar17) {
        iVar18 = iVar17;
      }
      if (iVar6 < iVar18) {
        pvVar12 = (void *)FUN_18026f580((longlong)iVar18 << 3);
        if (*(void **)(param_1 + 0x70) != (void *)0x0) {
          memcpy(pvVar12,*(void **)(param_1 + 0x70),(longlong)*(int *)(param_1 + 0x68) << 3);
          FUN_18026f680(*(undefined8 *)(param_1 + 0x70));
        }
        *(void **)(param_1 + 0x70) = pvVar12;
        *(int *)(param_1 + 0x6c) = iVar18;
      }
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x70) + (longlong)*(int *)(param_1 + 0x68) * 8) =
         puVar13;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
  }
  else {
    puVar13 = (undefined8 *)param_2[0x10];
    if (puVar13 == (undefined8 *)0x0) {
      puVar13 = *(undefined8 **)(*(longlong *)(param_1 + 0x70) + -8 + (longlong)iVar5 * 8);
    }
    FUN_18029af20(param_1,puVar13);
  }
  iVar6 = *(int *)(param_1 + 0x7c);
  if (*(int *)(param_1 + 0x78) == iVar6) {
    iVar18 = *(int *)(param_1 + 0x78) + 1;
    iVar17 = iVar20;
    if (iVar6 != 0) {
      iVar17 = iVar6 / 2 + iVar6;
    }
    if (iVar18 < iVar17) {
      iVar18 = iVar17;
    }
    if (iVar6 < iVar18) {
      pvVar12 = (void *)FUN_18026f580((longlong)iVar18 * 0xa0);
      if (*(void **)(param_1 + 0x80) != (void *)0x0) {
        memcpy(pvVar12,*(void **)(param_1 + 0x80),(longlong)*(int *)(param_1 + 0x78) * 0xa0);
        FUN_18026f680(*(undefined8 *)(param_1 + 0x80));
      }
      *(void **)(param_1 + 0x80) = pvVar12;
      *(int *)(param_1 + 0x7c) = iVar18;
    }
  }
  lVar15 = (longlong)*(int *)(param_1 + 0x78) * 0xa0;
  lVar19 = *(longlong *)(param_1 + 0x80);
  uVar10 = param_2[1];
  *(undefined8 *)(lVar15 + lVar19) = *param_2;
  ((undefined8 *)(lVar15 + lVar19))[1] = uVar10;
  uVar10 = param_2[3];
  puVar2 = (undefined8 *)(lVar15 + 0x10 + lVar19);
  *puVar2 = param_2[2];
  puVar2[1] = uVar10;
  uVar10 = param_2[5];
  puVar2 = (undefined8 *)(lVar15 + 0x20 + lVar19);
  *puVar2 = param_2[4];
  puVar2[1] = uVar10;
  uVar10 = param_2[7];
  puVar2 = (undefined8 *)(lVar15 + 0x30 + lVar19);
  *puVar2 = param_2[6];
  puVar2[1] = uVar10;
  uVar10 = param_2[9];
  puVar2 = (undefined8 *)(lVar15 + 0x40 + lVar19);
  *puVar2 = param_2[8];
  puVar2[1] = uVar10;
  uVar10 = param_2[0xb];
  puVar2 = (undefined8 *)(lVar15 + 0x50 + lVar19);
  *puVar2 = param_2[10];
  puVar2[1] = uVar10;
  uVar10 = param_2[0xd];
  puVar2 = (undefined8 *)(lVar15 + 0x60 + lVar19);
  *puVar2 = param_2[0xc];
  puVar2[1] = uVar10;
  uVar10 = param_2[0xf];
  puVar2 = (undefined8 *)(lVar15 + 0x70 + lVar19);
  *puVar2 = param_2[0xe];
  puVar2[1] = uVar10;
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x84);
  uVar8 = *(undefined4 *)(param_2 + 0x11);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x8c);
  puVar3 = (undefined4 *)(lVar15 + 0x80 + lVar19);
  *puVar3 = *(undefined4 *)(param_2 + 0x10);
  puVar3[1] = uVar7;
  puVar3[2] = uVar8;
  puVar3[3] = uVar9;
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x94);
  uVar8 = *(undefined4 *)(param_2 + 0x13);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x9c);
  puVar3 = (undefined4 *)(lVar15 + 0x90 + lVar19);
  *puVar3 = *(undefined4 *)(param_2 + 0x12);
  puVar3[1] = uVar7;
  puVar3[2] = uVar8;
  puVar3[3] = uVar9;
  iVar6 = *(int *)(param_1 + 0x78);
  *(int *)(param_1 + 0x78) = iVar6 + 1;
  lVar19 = (longlong)iVar6 * 0xa0 + *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(lVar19 + 0x80) == 0) {
    *(undefined8 **)(lVar19 + 0x80) = puVar13;
  }
  iVar6 = *(int *)((longlong)puVar13 + 0x24);
  if (*(int *)(puVar13 + 4) == iVar6) {
    iVar17 = *(int *)(puVar13 + 4) + 1;
    if (iVar6 != 0) {
      iVar20 = iVar6 + iVar6 / 2;
    }
    if (iVar17 < iVar20) {
      iVar17 = iVar20;
    }
    if (iVar6 < iVar17) {
      pvVar12 = (void *)FUN_18026f580((longlong)iVar17 << 3);
      if ((void *)puVar13[5] != (void *)0x0) {
        memcpy(pvVar12,(void *)puVar13[5],(longlong)*(int *)(puVar13 + 4) << 3);
        FUN_18026f680(puVar13[5]);
      }
      puVar13[5] = pvVar12;
      *(int *)((longlong)puVar13 + 0x24) = iVar17;
    }
  }
  *(longlong *)(puVar13[5] + (longlong)*(int *)(puVar13 + 4) * 8) = lVar19;
  *(int *)(puVar13 + 4) = *(int *)(puVar13 + 4) + 1;
  FUN_180299850(param_1);
  _Src = *(short **)(lVar19 + 0x48);
  if (_Src != (short *)0x0) {
    uVar14 = 0;
    sVar4 = *_Src;
    psVar1 = _Src;
    while (sVar4 != 0) {
      psVar1 = psVar1 + 1;
      uVar14 = (int)puVar16 + 1;
      puVar16 = (undefined8 *)(ulonglong)uVar14;
      sVar4 = *psVar1;
    }
    _Size = (longlong)(int)(uVar14 + 1) * 2;
    pvVar12 = (void *)FUN_18026f580(_Size);
    pvVar12 = memcpy(pvVar12,_Src,_Size);
    *(void **)(lVar19 + 0x48) = pvVar12;
  }
  lVar15 = *(longlong *)(lVar19 + 0x88);
  if (lVar15 == 0) {
    lVar15 = *(longlong *)(param_1 + 0x2b8);
  }
  if ((*(code **)(lVar15 + 0x18) == (code *)0x0) ||
     (cVar11 = (**(code **)(lVar15 + 0x18))(param_1,lVar19), cVar11 != '\0')) {
    FUN_18029a110(param_1,puVar13,lVar19);
    if (iVar5 == 0) {
      FUN_180298e70(param_1);
    }
  }
  else {
    if (*(char *)(lVar19 + 0x34) != '\0') {
      FUN_18026f680(*(undefined8 *)(lVar19 + 0x28));
    }
    *(undefined8 *)(lVar19 + 0x28) = 0;
    if (*(longlong *)(lVar19 + 0x48) != 0) {
      FUN_18026f680();
    }
    *(undefined8 *)(lVar19 + 0x48) = 0;
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + -1;
    *(int *)(puVar13 + 4) = *(int *)(puVar13 + 4) + -1;
    if (*(char *)(lVar19 + 0x35) == '\0') {
      if (puVar13 != (undefined8 *)0x0) {
        local_68 = puVar13;
        if (puVar13[1] != 0) {
          FUN_18029af20(puVar13[1],puVar13);
        }
        *(undefined1 *)((longlong)puVar13 + 0x34) = 0;
        *puVar13 = 0;
        local_70 = puVar13 + 7;
        if (puVar13[8] != 0) {
          FUN_18026f680();
        }
        if (puVar13[5] != 0) {
          FUN_18026f680();
        }
        FUN_18026f680(puVar13);
      }
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
    }
    puVar13 = (undefined8 *)0x0;
  }
  return puVar13;
}


