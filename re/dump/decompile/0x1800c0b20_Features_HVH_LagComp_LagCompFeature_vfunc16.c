// 0x1800c0b20  Features_HVH_LagComp_LagCompFeature_vfunc16
// size=646 thunk=false
// signature: undefined Features_HVH_LagComp_LagCompFeature_vfunc16()
// status: ok


void Features_HVH_LagComp_LagCompFeature_vfunc16(longlong param_1)

{
  undefined1 *puVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  BOOL BVar6;
  longlong lVar7;
  void *pvVar8;
  void *pvVar9;
  void *pvVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  
  if (DAT_1803fa340 != 0) {
    if (*(char *)(param_1 + 10) != '\0') {
      lVar7 = FUN_180016fb0("cl_interpolate");
      if (lVar7 != 0) {
        FUN_1800c0920(lVar7,"cl_interpolate",*(undefined4 *)(param_1 + 0x1c),1);
        if (*(char *)(param_1 + 0xb) != '\0') {
          FUN_1800170c0(lVar7,*(undefined4 *)(param_1 + 0x18));
        }
      }
      *(undefined2 *)(param_1 + 10) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    if (*(char *)(param_1 + 8) != '\0') {
      pvVar8 = (void *)FUN_180016fb0("cl_interp");
      pvVar9 = (void *)FUN_180016fb0("cl_interp_ratio");
      if ((pvVar8 != (void *)0x0) && (pvVar9 != (void *)0x0)) {
        cVar4 = FUN_1800c0920(pvVar8,"cl_interp",*(undefined4 *)(param_1 + 0x20),1);
        cVar5 = FUN_1800c0920(pvVar9,"cl_interp_ratio",*(undefined4 *)(param_1 + 0x24),1);
        *(undefined1 *)(param_1 + 8) = 0;
        *(undefined4 *)(param_1 + 0x14) = 0;
        if ((cVar4 == '\0') || (cVar5 == '\0')) {
          pvVar10 = *(void **)((longlong)pvVar9 + 0x38);
          if (((pvVar10 == (void *)0x0) || (pvVar10 == pvVar9)) ||
             (BVar6 = IsBadReadPtr(pvVar10,0x60), BVar6 != 0)) {
            pvVar10 = pvVar9;
          }
          if (*(void **)((longlong)pvVar10 + 0x48) != (void *)0x0) {
            IsBadReadPtr(*(void **)((longlong)pvVar10 + 0x48),2);
          }
          pvVar10 = *(void **)((longlong)pvVar9 + 0x38);
          if (((pvVar10 == (void *)0x0) || (pvVar10 == pvVar9)) ||
             (BVar6 = IsBadReadPtr(pvVar10,0x60), BVar6 != 0)) {
            pvVar10 = pvVar9;
          }
          puVar1 = *(undefined1 **)((longlong)pvVar10 + 0x48);
          bVar2 = true;
          if ((puVar1 == (undefined1 *)0x0) || (BVar6 = IsBadReadPtr(puVar1,2), BVar6 != 0)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          puVar12 = &DAT_18033e5ea;
          if (bVar3) {
            puVar12 = puVar1;
          }
          pvVar9 = *(void **)((longlong)pvVar8 + 0x38);
          if (((pvVar9 == (void *)0x0) || (pvVar9 == pvVar8)) ||
             (BVar6 = IsBadReadPtr(pvVar9,0x60), BVar6 != 0)) {
            pvVar9 = pvVar8;
          }
          if (*(void **)((longlong)pvVar9 + 0x48) != (void *)0x0) {
            IsBadReadPtr(*(void **)((longlong)pvVar9 + 0x48),2);
          }
          pvVar9 = *(void **)((longlong)pvVar8 + 0x38);
          if (((pvVar9 == (void *)0x0) || (pvVar9 == pvVar8)) ||
             (BVar6 = IsBadReadPtr(pvVar9,0x60), BVar6 != 0)) {
            pvVar9 = pvVar8;
          }
          puVar1 = *(undefined1 **)((longlong)pvVar9 + 0x48);
          if ((puVar1 == (undefined1 *)0x0) || (BVar6 = IsBadReadPtr(puVar1,2), BVar6 != 0)) {
            bVar2 = false;
          }
          puVar11 = &DAT_18033e5ea;
          if (bVar2) {
            puVar11 = puVar1;
          }
          FUN_180014410(&DAT_18034c250,(double)*(float *)(param_1 + 0x20),
                        (double)*(float *)(param_1 + 0x24),puVar11,puVar12);
        }
        else {
          *(undefined1 *)(param_1 + 9) = 0;
          FUN_180014410("[LAGCOMP] interp abuse restored on shutdown (%.3f / %.1f)\n",
                        (double)*(float *)(param_1 + 0x20),(double)*(float *)(param_1 + 0x24));
        }
      }
    }
  }
  return;
}


