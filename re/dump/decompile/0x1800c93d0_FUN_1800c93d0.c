// 0x1800c93d0  FUN_1800c93d0
// size=505 thunk=false
// signature: undefined FUN_1800c93d0()
// status: ok


void FUN_1800c93d0(void)

{
  float fVar1;
  char cVar2;
  BOOL BVar3;
  int iVar4;
  void *pvVar5;
  void *lp;
  char *_String;
  undefined *puVar6;
  float fVar7;
  double dVar8;
  
  if ((DAT_1803fa340 != 0) &&
     (pvVar5 = (void *)FUN_180016fb0("cl_extrapolate"), fVar1 = DAT_180380bb0, pvVar5 != (void *)0x0
     )) {
    if (DAT_1803fac7b == '\0') {
      lp = *(void **)((longlong)pvVar5 + 0x38);
      if (((lp == (void *)0x0) || (lp == pvVar5)) || (BVar3 = IsBadReadPtr(lp,0x60), BVar3 != 0)) {
        lp = pvVar5;
      }
      _String = *(char **)((longlong)lp + 0x48);
      if ((_String == (char *)0x0) || (BVar3 = IsBadReadPtr(_String,2), BVar3 != 0)) {
        _String = "";
      }
      fVar7 = fVar1;
      if (*_String != '\0') {
        dVar8 = atof(_String);
        fVar7 = (float)dVar8;
      }
      DAT_1803fac7b = '\x01';
      DAT_1803db380 = fVar7;
    }
    cVar2 = FUN_1800c9380();
    if (cVar2 == '\0') {
      if (DAT_1803fac7a != '\0') {
        puVar6 = &DAT_180347810;
        if (DAT_1803db380 != 0.0) {
          puVar6 = &DAT_18034124c;
        }
        FUN_1801fcdc0(pvVar5,0,puVar6);
        DAT_1803fac7a = 0;
        FUN_180014410("[BT-EXTRAP] cl_extrapolate restored to %.0f\n",(double)DAT_1803db380);
        return;
      }
    }
    else {
      iVar4 = FUN_1800197a0(pvVar5);
      if (iVar4 == 0) {
        DAT_1803fac7a = 1;
        return;
      }
      FUN_1801fcdc0(pvVar5);
      if (DAT_1803fac7a == '\0') {
        DAT_1803fac7a = '\x01';
        if ((((DAT_1803ffcf8 == 0) &&
             ((DAT_1803fa340 == 0 ||
              (DAT_1803ffcf8 = FUN_180016fb0("cl_extrapolate_amount"), DAT_1803ffcf8 == 0)))) ||
            (fVar7 = (float)FUN_180019700(DAT_1803ffcf8), fVar7 <= 0.0)) || (fVar1 <= fVar7)) {
          fVar7 = DAT_180380a58;
        }
        FUN_180014410("[BT-EXTRAP] cl_extrapolate -> 0 (was %.0f): entities now clamp to their last real snapshot instead of drifting up to %.0fms past it\n"
                      ,(double)DAT_1803db380,(double)(fVar7 * DAT_180381278));
      }
    }
  }
  return;
}


