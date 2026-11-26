// 0x1802c49e0  FUN_1802c49e0
// size=824 thunk=false
// signature: undefined FUN_1802c49e0()
// status: ok


undefined8 FUN_1802c49e0(longlong *param_1,longlong *param_2,uint param_3)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  undefined4 uVar10;
  void *_Dst;
  uint uVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  undefined4 local_res20;
  float local_res24;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar4 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar5 = *(longlong *)(lVar4 + 0xec0);
  lVar6 = *(longlong *)(lVar5 + 0x1520);
  if (*(char *)(lVar6 + 0xd1) == '\0') {
    if ((param_3 >> 0x14 & 1) == 0) {
      FUN_18027af00(*(undefined4 *)((longlong)param_1 + 0x1c));
    }
    if (*(char *)(lVar4 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    plVar7 = *(longlong **)(*(longlong *)(lVar4 + 0xec0) + 0x23e0);
    if ((param_1 < plVar7) ||
       (plVar7 + (longlong)*(int *)(*(longlong *)(lVar4 + 0xec0) + 0x23d8) * 0x16 <= param_1)) {
      uStack_50 = 0xffffffff;
      local_58 = param_1;
    }
    else {
      local_58 = (longlong *)0x0;
      uStack_50 = (undefined4)(((longlong)param_1 - (longlong)plVar7) / 0xb0);
    }
    iVar13 = *(int *)(lVar5 + 0x2404);
    if (*(int *)(lVar5 + 0x2400) == iVar13) {
      iVar14 = *(int *)(lVar5 + 0x2400) + 1;
      if (iVar13 == 0) {
        iVar9 = 8;
      }
      else {
        iVar9 = iVar13 / 2 + iVar13;
      }
      if (iVar14 < iVar9) {
        iVar14 = iVar9;
      }
      if (iVar13 < iVar14) {
        _Dst = (void *)FUN_18026f580((longlong)iVar14 << 4);
        if (*(void **)(lVar5 + 0x2408) != (void *)0x0) {
          memcpy(_Dst,*(void **)(lVar5 + 0x2408),(longlong)*(int *)(lVar5 + 0x2400) << 4);
          FUN_18026f680(*(undefined8 *)(lVar5 + 0x2408));
        }
        *(void **)(lVar5 + 0x2408) = _Dst;
        *(int *)(lVar5 + 0x2404) = iVar14;
      }
    }
    puVar1 = (undefined8 *)
             (*(longlong *)(lVar5 + 0x2408) + (longlong)*(int *)(lVar5 + 0x2400) * 0x10);
    *puVar1 = local_58;
    puVar1[1] = CONCAT44(uStack_4c,uStack_50);
    *(int *)(lVar5 + 0x2400) = *(int *)(lVar5 + 0x2400) + 1;
    *(longlong **)(lVar5 + 0x23d0) = param_1;
    iVar13 = (int)param_1[6];
    *param_1 = lVar6;
    param_1[0x13] = *(longlong *)(lVar6 + 0x118);
    if (iVar13 == *(int *)(lVar5 + 4)) {
      fVar2 = *(float *)((longlong)param_1 + 0x8c);
      fVar3 = *(float *)((longlong)param_1 + 0x44);
      *(int *)(lVar6 + 0x118) = (int)param_1[7];
      *(float *)(lVar6 + 0x11c) = fVar2 + fVar3;
      *(char *)((longlong)param_1 + 0x82) = *(char *)((longlong)param_1 + 0x82) + '\x01';
    }
    else {
      if ((((param_3 & 1) != (*(uint *)(param_1 + 3) & 1)) ||
          ((*(char *)((longlong)param_1 + 0x85) != '\0' && ((param_3 & 1) == 0)))) &&
         (1 < (ulonglong)(longlong)(int)param_1[1])) {
        qsort((void *)param_1[2],(longlong)(int)param_1[1],0x2c,(_PtFuncCompare *)&LAB_1802c49d0);
        iVar13 = (int)param_1[6];
      }
      *(char *)((longlong)param_1 + 0x85) = '\0';
      uVar11 = param_3 | 0x80;
      if ((param_3 & 0x380) != 0) {
        uVar11 = param_3;
      }
      *(uint *)(param_1 + 3) = uVar11;
      lVar4 = *param_2;
      lVar8 = param_2[1];
      *(undefined1 *)((longlong)param_1 + 0x83) = 1;
      *(int *)((longlong)param_1 + 0x34) = iVar13;
      param_1[7] = lVar4;
      param_1[8] = lVar8;
      *(undefined4 *)(param_1 + 6) = *(undefined4 *)(lVar5 + 4);
      *(undefined4 *)(param_1 + 10) = *(undefined4 *)((longlong)param_1 + 0x4c);
      *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
      fVar2 = *(float *)(lVar5 + 0xcd8);
      *(float *)((longlong)param_1 + 0x8c) = fVar2;
      fVar3 = *(float *)((longlong)param_1 + 0x44);
      param_1[0x12] = *(longlong *)(lVar5 + 0xcc4);
      *(undefined4 *)(param_1 + 0x11) = 0xffff0000;
      *(undefined1 *)((longlong)param_1 + 0x82) = 1;
      *(int *)(lVar6 + 0x118) = (int)param_1[7];
      *(float *)(lVar6 + 0x11c) = fVar2 + fVar3;
      uVar12 = 0x28;
      if ((uVar11 >> 0x15 & 1) != 0) {
        uVar12 = 0x25;
      }
      uVar10 = FUN_18026a6a0(uVar12,DAT_180380bb0);
      if (0.0 < *(float *)(lVar5 + 0xd34)) {
        local_res24 = *(float *)((longlong)param_1 + 0x44);
        local_res20 = (undefined4)param_1[0xf];
        local_58 = (longlong *)
                   CONCAT44(local_res24 - *(float *)(lVar5 + 0xd34),
                            *(undefined4 *)((longlong)param_1 + 0x74));
        FUN_180295000(*(undefined8 *)(lVar6 + 0x2c8),&local_58,&local_res20,uVar10,0,0);
      }
    }
    uVar12 = 1;
  }
  else {
    uVar12 = 0;
  }
  return uVar12;
}


