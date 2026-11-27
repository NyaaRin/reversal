// 0x1801f1220  FUN_1801f1220
// size=637 thunk=false
// signature: undefined FUN_1801f1220()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1801f1220(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  short sVar8;
  float fVar9;
  float fVar10;
  
  if (0 < *param_1) {
    if (((0 < param_1[1]) && (*param_1 < 0x8001)) && (param_1[1] < 0x8001)) {
      fVar9 = (float)param_1[2];
      sVar8 = _fdclass();
      if (((sVar8 < 1) && (DAT_1803809c4 < fVar9)) &&
         ((fVar9 < DAT_180381184 && (sVar8 = _fdclass(), sVar8 < 1)))) {
        uVar1 = param_1[4];
        sVar8 = _fdclass();
        if (sVar8 < 1) {
          uVar2 = param_1[5];
          sVar8 = _fdclass();
          if (sVar8 < 1) {
            uVar3 = param_1[6];
            sVar8 = _fdclass();
            if (sVar8 < 1) {
              uVar4 = param_1[7];
              sVar8 = _fdclass();
              if (sVar8 < 1) {
                uVar5 = param_1[8];
                sVar8 = _fdclass();
                if (sVar8 < 1) {
                  uVar6 = param_1[9];
                  sVar8 = _fdclass();
                  if (sVar8 < 1) {
                    fVar9 = (float)param_1[10];
                    sVar8 = _fdclass();
                    if (sVar8 < 1) {
                      fVar10 = (float)param_1[0xb];
                      sVar8 = _fdclass();
                      if (sVar8 < 1) {
                        fVar7 = (float)param_1[0xc];
                        sVar8 = _fdclass();
                        if (((sVar8 < 1) && (0.0 <= fVar7)) &&
                           ((fVar7 <= DAT_180380fcc &&
                            ((((0.0 <= fVar9 && (0.0 <= fVar10)) && (fVar9 <= DAT_1803812f0)) &&
                             (fVar10 <= DAT_1803812fc)))))) {
                          if (fVar9 <= 0.0) {
                            fVar9 = DAT_180380f90;
                          }
                          if (fVar10 <= 0.0) {
                            fVar10 = DAT_1803812c8;
                          }
                          if (((((fVar9 + DAT_180380964 < fVar10) &&
                                ((float)(uVar1 & _DAT_1803817c0) < DAT_1803812f8)) &&
                               (((float)(uVar2 & _DAT_1803817c0) < DAT_1803812f8 &&
                                (((float)(uVar3 & _DAT_1803817c0) < DAT_1803812f8 &&
                                 ((float)(uVar4 & _DAT_1803817c0) < DAT_1803812f0)))))) &&
                              ((float)(uVar5 & _DAT_1803817c0) < DAT_1803812f0)) &&
                             ((float)(uVar6 & _DAT_1803817c0) < DAT_1803812f0)) {
                            return 1;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


