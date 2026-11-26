// 0x180247630  FUN_180247630
// size=1414 thunk=false
// signature: undefined FUN_180247630()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180247630(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  char *******pppppppcVar13;
  ulonglong uVar14;
  float fVar15;
  undefined1 auStack_168 [32];
  uint local_148;
  undefined4 *local_140;
  char ******local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_120;
  float local_118;
  float local_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  char ******local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  ulonglong local_c8;
  
  local_c8 = DAT_1803da4c0 ^ (ulonglong)auStack_168;
  if (*(char *)(param_1 + 0x16) != '\0') {
    if (*(longlong *)(param_1 + 0x650) != 0) {
      fVar1 = *(float *)(param_1 + 0x4bc);
      lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar12 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      fVar2 = *(float *)(*(longlong *)(*(longlong *)(lVar12 + 0xec0) + 0x1520) + 0x28);
      fVar3 = *(float *)(param_1 + 0x4e0);
      uVar14 = *(ulonglong *)(param_1 + 0x110);
      uVar10 = (*(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0xf0) >> 4) *
               -0x5555555555555555;
      if (uVar14 <= uVar10 && uVar10 - uVar14 != 0) {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xf0) + 0x10 + uVar14 * 0x30);
        local_f8 = 0;
        uStack_f0 = 0;
        if (*(char *)(lVar12 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar12 = *(longlong *)(lVar12 + 0xec0);
        *(undefined1 *)(*(longlong *)(lVar12 + 0x1520) + 0xce) = 1;
        local_100 = *(char *******)(*(longlong *)(lVar12 + 0x1520) + 0x2c8);
        fVar15 = *(float *)(param_1 + 0x4e4) - *(float *)(param_1 + 0x4e0);
        uStack_f0 = CONCAT44(local_f8._4_4_ + *(float *)(param_1 + 0x4dc),(float)local_f8 + fVar15);
        fVar15 = fVar15 / *(float *)(param_1 + 0x4d8);
        lVar12 = 0;
        if ((DAT_180381300 <= fVar15) && (fVar15 = fVar15 - DAT_180381300, fVar15 < DAT_180381300))
        {
          lVar12 = -0x8000000000000000;
        }
        local_e8 = (longlong)fVar15 + lVar12;
        uVar14 = *(ulonglong *)(param_1 + 0x110);
        uVar10 = (*(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0xf0) >> 4) *
                 -0x5555555555555555;
        if (uVar14 <= uVar10 && uVar10 - uVar14 != 0) {
          local_d8 = *(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x10 + uVar14 * 0x30);
          uVar14 = *(ulonglong *)(param_1 + 0x510);
          if (*(ulonglong *)(param_1 + 0x518) < uVar14) {
            return;
          }
          do {
            if (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8 + uVar14 * 0x18) == 0) {
              local_f8 = CONCAT44((float)uVar14 * *(float *)(param_1 + 0x4dc) + fVar1,
                                  fVar3 + fVar2 + 0.0);
              local_e0 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + uVar14 * 0x18);
              lVar12 = 0x968;
              if (local_e0 == lVar4) {
                lVar12 = 0x96c;
              }
              local_d0 = *(undefined4 *)(lVar12 + param_1);
              plVar5 = *(longlong **)(param_1 + 0x650);
              if (plVar5 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
                std::_Xbad_function_call();
              }
              (**(code **)(*plVar5 + 0x10))(plVar5,&local_100);
            }
            uVar14 = uVar14 + 1;
            if (*(ulonglong *)(param_1 + 0x518) < uVar14) {
              return;
            }
          } while( true );
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_180262180();
    }
    lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar12 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar4 = *(longlong *)(lVar12 + 0xec0);
    *(undefined1 *)(*(longlong *)(lVar4 + 0x1520) + 0xce) = 1;
    uVar14 = *(ulonglong *)(param_1 + 0x110);
    uVar10 = (*(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0xf0) >> 4) *
             -0x5555555555555555;
    if (uVar10 < uVar14 || uVar10 - uVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180262180();
    }
    lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x1520) + 0x2c8);
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0xf0) + 0x10 + uVar14 * 0x30);
    fVar1 = *(float *)(param_1 + 0x4bc);
    if (*(char *)(lVar12 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    dVar9 = DAT_180381238;
    dVar8 = DAT_180380d08;
    fVar2 = *(float *)(*(longlong *)(*(longlong *)(lVar12 + 0xec0) + 0x1520) + 0x28);
    fVar3 = *(float *)(param_1 + 0x4e4);
    uVar14 = *(ulonglong *)(param_1 + 0x510);
    if (uVar14 <= *(ulonglong *)(param_1 + 0x518)) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8 + uVar14 * 0x18) == 0) {
          lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + uVar14 * 0x18);
          uVar10 = lVar12 + 1;
          dVar7 = log10((double)uVar10);
          fVar15 = *(float *)(param_1 + 0x4d8);
          FUN_180013d70(&local_100,uVar10);
          pppppppcVar13 = &local_100;
          if (0xf < local_e8) {
            pppppppcVar13 = (char *******)local_100;
          }
          lVar11 = 0x968;
          if (lVar12 == lVar6) {
            lVar11 = 0x96c;
          }
          dVar7 = dVar7 + dVar8;
          lVar12 = 0;
          if ((dVar9 <= dVar7) && (dVar7 = dVar7 - dVar9, dVar7 < dVar9)) {
            lVar12 = -0x8000000000000000;
          }
          local_118 = (fVar2 + fVar3) - (float)(ulonglong)((longlong)dVar7 + lVar12) * fVar15;
          local_114 = (float)uVar14 * *(float *)(param_1 + 0x4dc) + fVar1;
          if ((((*(uint *)(lVar11 + param_1) & 0xff000000) != 0) &&
              (pppppppcVar13 != (char *******)0x0)) && (*(char *)pppppppcVar13 != '\0')) {
            local_110 = *(undefined4 *)(lVar4 + 0x60);
            uStack_10c = *(undefined4 *)(lVar4 + 100);
            uStack_108 = *(undefined4 *)(lVar4 + 0x68);
            uStack_104 = *(undefined4 *)(lVar4 + 0x6c);
            local_120 = 0;
            local_128 = 0;
            local_130 = 0;
            local_140 = &local_110;
            local_148 = *(uint *)(lVar11 + param_1);
            local_138 = (char ******)pppppppcVar13;
            FUN_18029e990(*(undefined8 *)(*(longlong *)(lVar4 + 0x38) + 0x18),lVar4,
                          *(undefined4 *)(*(longlong *)(lVar4 + 0x38) + 0x20),&local_118);
          }
          FUN_18020e450(&local_100);
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 <= *(ulonglong *)(param_1 + 0x518));
    }
  }
  return;
}


