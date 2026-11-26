// 0x1800c10c0  FUN_1800c10c0
// size=469 thunk=false
// signature: undefined FUN_1800c10c0()
// status: ok


void FUN_1800c10c0(longlong param_1)

{
  char cVar1;
  char cVar2;
  BOOL BVar3;
  undefined4 uVar4;
  void *pvVar5;
  void *lp;
  char *pcVar6;
  double dVar7;
  float fVar8;
  
  cVar1 = FUN_1800b8290();
  if (cVar1 != *(char *)(param_1 + 0xc)) {
    *(char *)(param_1 + 0xc) = cVar1;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (((cVar1 != *(char *)(param_1 + 10)) && (DAT_1803fa340 != 0)) && (*(int *)(param_1 + 0x10) < 8)
     ) {
    pvVar5 = (void *)FUN_180016fb0("cl_interpolate");
    if (pvVar5 == (void *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 8;
      return;
    }
    if (cVar1 == '\0') {
      fVar8 = *(float *)(param_1 + 0x1c);
    }
    else {
      if (*(char *)(param_1 + 0xb) == '\0') {
        lp = *(void **)((longlong)pvVar5 + 0x38);
        if (((lp == (void *)0x0) || (lp == pvVar5)) || (BVar3 = IsBadReadPtr(lp,0x60), BVar3 != 0))
        {
          lp = pvVar5;
        }
        pcVar6 = *(char **)((longlong)lp + 0x48);
        if ((pcVar6 == (char *)0x0) || (BVar3 = IsBadReadPtr(pcVar6,2), BVar3 != 0)) {
          pcVar6 = "";
        }
        fVar8 = DAT_180380bb0;
        if (*pcVar6 != '\0') {
          dVar7 = atof(pcVar6);
          fVar8 = (float)dVar7;
        }
        *(float *)(param_1 + 0x1c) = fVar8;
        uVar4 = FUN_1800170a0(pvVar5);
        *(undefined4 *)(param_1 + 0x18) = uVar4;
        *(undefined1 *)(param_1 + 0xb) = 1;
      }
      fVar8 = 0.0;
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    cVar2 = FUN_1800c0920(pvVar5,"cl_interpolate",fVar8,0);
    if (cVar2 == '\0') {
      if (7 < *(int *)(param_1 + 0x10)) {
        cVar1 = *(char *)(param_1 + 10);
        uVar4 = FUN_1800170a0(pvVar5);
        pcVar6 = "as it was";
        if (cVar1 != '\0') {
          pcVar6 = &DAT_18034c3e0;
        }
        FUN_180014410(&DAT_18034c420,8,uVar4,pcVar6);
      }
    }
    else {
      *(char *)(param_1 + 10) = cVar1;
      pcVar6 = "restored";
      if (cVar1 != '\0') {
        pcVar6 = "OFF";
      }
      FUN_180014410("[LAGCOMP] interpolation %s (cl_interpolate %.0f)\n",pcVar6,(double)fVar8);
      if (cVar1 == '\0') {
        if (*(char *)(param_1 + 0xb) != '\0') {
          FUN_1800170c0(pvVar5,*(undefined4 *)(param_1 + 0x18));
        }
        *(undefined1 *)(param_1 + 0xb) = 0;
      }
    }
  }
  return;
}


