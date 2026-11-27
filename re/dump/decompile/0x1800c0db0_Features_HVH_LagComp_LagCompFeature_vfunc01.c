// 0x1800c0db0  Features_HVH_LagComp_LagCompFeature_vfunc01
// size=771 thunk=false
// signature: undefined Features_HVH_LagComp_LagCompFeature_vfunc01()
// status: ok


void Features_HVH_LagComp_LagCompFeature_vfunc01(longlong param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  BOOL BVar5;
  undefined8 uVar6;
  char *pcVar7;
  int *piVar8;
  void *pvVar9;
  void *pvVar10;
  char *_String;
  void *pvVar11;
  char cVar12;
  char *_String_00;
  double dVar13;
  float fVar14;
  
  FUN_1800c10c0();
  uVar6 = FUN_180241610(&DAT_1803fadf0,0x2d8f695138585a77);
  uVar6 = FUN_180241610(uVar6,0xe0c32a7e4da84b2e);
  pcVar7 = (char *)FUN_1801fcfc0(uVar6);
  if (*pcVar7 != '\0') {
    uVar6 = FUN_180241610(&DAT_1803fadf0,0x2d8f695138585a77);
    uVar6 = FUN_180241610(uVar6,0x80da9dc943fdf3cc);
    piVar8 = (int *)FUN_1802029c0(uVar6);
    if (*piVar8 == 1) {
      cVar12 = '\x01';
      goto LAB_1800c0e47;
    }
  }
  cVar12 = '\0';
LAB_1800c0e47:
  if ((cVar12 != *(char *)(param_1 + 8)) && (DAT_1803fa340 != 0)) {
    cVar3 = cVar12;
    pvVar9 = (void *)FUN_180016fb0("cl_interp");
    pvVar10 = (void *)FUN_180016fb0();
    if ((pvVar9 != (void *)0x0) && (pvVar10 != (void *)0x0)) {
      if (cVar12 == '\0') {
        FUN_1800c0920(pvVar9,"cl_interp",*(undefined4 *)(param_1 + 0x20),0,cVar3);
        FUN_1800c0920(pvVar10,"cl_interp_ratio",*(undefined4 *)(param_1 + 0x24),0);
        FUN_180014410("[LAGCOMP] interp abuse OFF (restored %.3f / %.1f)\n",
                      (double)*(float *)(param_1 + 0x20),(double)*(float *)(param_1 + 0x24));
        *(undefined1 *)(param_1 + 9) = 0;
        *(undefined4 *)(param_1 + 0x14) = 0;
      }
      else {
        if (*(char *)(param_1 + 9) == '\0') {
          pvVar11 = *(void **)((longlong)pvVar9 + 0x38);
          if (((pvVar11 == (void *)0x0) || (pvVar11 == pvVar9)) ||
             (BVar5 = IsBadReadPtr(pvVar11,0x60), BVar5 != 0)) {
            pvVar11 = pvVar9;
          }
          pcVar7 = *(char **)((longlong)pvVar11 + 0x48);
          if ((pcVar7 == (char *)0x0) || (BVar5 = IsBadReadPtr(pcVar7,2), BVar5 != 0)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          bVar1 = true;
          _String = "";
          if (bVar2) {
            _String = pcVar7;
          }
          pvVar11 = *(void **)((longlong)pvVar10 + 0x38);
          if (((pvVar11 == (void *)0x0) || (pvVar11 == pvVar10)) ||
             (BVar5 = IsBadReadPtr(pvVar11,0x60), BVar5 != 0)) {
            pvVar11 = pvVar10;
          }
          pcVar7 = *(char **)((longlong)pvVar11 + 0x48);
          if ((pcVar7 == (char *)0x0) || (BVar5 = IsBadReadPtr(pcVar7,2), BVar5 != 0)) {
            bVar1 = false;
          }
          _String_00 = "";
          if (bVar1) {
            _String_00 = pcVar7;
          }
          fVar14 = DAT_1803809ec;
          if (_String != (char *)0x0) {
            dVar13 = atof(_String);
            fVar14 = (float)dVar13;
          }
          *(float *)(param_1 + 0x20) = fVar14;
          fVar14 = DAT_180380d30;
          if (_String_00 != (char *)0x0) {
            dVar13 = atof(_String_00);
            fVar14 = (float)dVar13;
          }
          *(float *)(param_1 + 0x24) = fVar14;
          *(undefined1 *)(param_1 + 9) = 1;
        }
        if (7 < *(int *)(param_1 + 0x14)) {
          return;
        }
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        cVar3 = FUN_1800c0920(pvVar9,"cl_interp",DAT_180380ac0,0,cVar3);
        cVar4 = FUN_1800c0920(pvVar10,"cl_interp_ratio",DAT_180380f00,0);
        if ((cVar3 == '\0') || (cVar4 == '\0')) {
          if (*(int *)(param_1 + 0x14) < 8) {
            return;
          }
          FUN_180014410(&DAT_18034c310);
          return;
        }
        *(undefined4 *)(param_1 + 0x14) = 0;
        FUN_180014410("[LAGCOMP] interp abuse ON (was %.3f / %.1f)\n",
                      (double)*(float *)(param_1 + 0x20),(double)*(float *)(param_1 + 0x24));
      }
      *(char *)(param_1 + 8) = cVar12;
    }
  }
  return;
}


