// 0x180245a10  FUN_180245a10
// size=821 thunk=false
// signature: undefined FUN_180245a10()
// status: ok


void FUN_180245a10(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  longlong *plVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_res8;
  float local_resc;
  float local_res10;
  float local_res14;
  
  if (*(longlong *)(param_1 + 0x348) != *(longlong *)(param_1 + 0x340)) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(lVar1 + 0xec0);
    *(undefined1 *)(*(longlong *)(lVar2 + 0x1520) + 0xce) = 1;
    uVar9 = *(ulonglong *)(param_1 + 0x510);
    uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 0x1520) + 0x2c8);
    if (uVar9 <= *(ulonglong *)(param_1 + 0x518)) {
      do {
        lVar2 = *(longlong *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + uVar9 * 0x18) * 0x60 + 0x50 +
                 *(longlong *)(param_1 + 0x50));
        if ((lVar2 != 0) &&
           (lVar4 = *(longlong *)(param_1 + 0x340), *(char *)(lVar4 + -0x41 + lVar2 * 0x48) != '\0')
           ) {
          fVar12 = *(float *)(param_1 + 0x4f0) + *(float *)(param_1 + 0x4b8);
          fVar10 = (float)uVar9 * *(float *)(param_1 + 0x4dc) + *(float *)(param_1 + 0x4bc);
          fVar13 = fVar10 + *(float *)(param_1 + 0x4dc);
          fVar11 = (float)*(ulonglong *)(param_1 + 0x528) * *(float *)(param_1 + 0x4d8) + fVar12;
          local_res8 = fVar11;
          local_resc = fVar13;
          local_res10 = fVar12;
          local_res14 = fVar10;
          FUN_180295000(uVar3,&local_res10,&local_res8,*(undefined4 *)(lVar4 + -0x44 + lVar2 * 0x48)
                        ,0,0);
          if (*(longlong *)(lVar4 + -0x10 + lVar2 * 0x48) != 0) {
            if (*(char *)(lVar1 + 0x10) == '\0') {
              __dyn_tls_on_demand_init();
            }
            lVar5 = *(longlong *)(lVar1 + 0xec0);
            lVar6 = *(longlong *)(lVar5 + 0x1520);
            if (fVar12 <= *(float *)(lVar6 + 0x268)) {
              fVar12 = *(float *)(lVar6 + 0x268);
            }
            if (fVar12 - *(float *)(lVar5 + 0xcec) <= *(float *)(lVar5 + 0x100)) {
              if (fVar10 <= *(float *)(lVar6 + 0x26c)) {
                fVar10 = *(float *)(lVar6 + 0x26c);
              }
              if (fVar10 - *(float *)(lVar5 + 0xcf0) <= *(float *)(lVar5 + 0x104)) {
                if (*(float *)(lVar6 + 0x270) <= fVar11) {
                  fVar11 = *(float *)(lVar6 + 0x270);
                }
                if (*(float *)(lVar5 + 0x100) < fVar11 + *(float *)(lVar5 + 0xcec)) {
                  if (*(float *)(lVar6 + 0x274) <= fVar13) {
                    fVar13 = *(float *)(lVar6 + 0x274);
                  }
                  if ((*(float *)(lVar5 + 0x104) < fVar13 + *(float *)(lVar5 + 0xcf0)) &&
                     (cVar7 = FUN_180280a90(0), cVar7 != '\0')) {
                    FUN_18026a730(4,*(undefined4 *)(lVar4 + -0x44 + lVar2 * 0x48));
                    plVar8 = (longlong *)(lVar4 + -0x20 + lVar2 * 0x48);
                    if (0xf < *(ulonglong *)(lVar4 + -8 + lVar2 * 0x48)) {
                      plVar8 = (longlong *)*plVar8;
                    }
                    FUN_1802aa3c0(plVar8,0,1);
                    FUN_18026a890(1);
                    FUN_180278d40();
                  }
                }
              }
            }
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 <= *(ulonglong *)(param_1 + 0x518));
    }
  }
  return;
}


