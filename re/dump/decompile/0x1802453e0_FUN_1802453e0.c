// 0x1802453e0  FUN_1802453e0
// size=1582 thunk=false
// signature: undefined FUN_1802453e0()
// status: ok


void FUN_1802453e0(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  bool bVar16;
  bool bVar17;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  undefined8 local_130;
  longlong local_128;
  longlong local_120;
  ulonglong local_118;
  ulonglong local_108;
  ulonglong uStack_100;
  longlong local_f8;
  ulonglong local_e8;
  ulonglong uStack_e0;
  ulonglong local_d8;
  undefined8 local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  ulonglong local_a8;
  ulonglong uStack_a0;
  undefined1 local_98 [8];
  ulonglong local_90;
  undefined1 local_88 [8];
  ulonglong local_80;
  undefined1 local_78 [8];
  ulonglong local_70;
  undefined1 local_68 [8];
  ulonglong local_60;
  
  lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar11 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar11 = *(longlong *)(lVar11 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar11 + 0x1520) + 0xce) = 1;
  puVar8 = *(ulonglong **)(param_1 + 0xf0);
  puVar1 = *(ulonglong **)(param_1 + 0xf8);
  local_130 = *(undefined8 *)(*(longlong *)(lVar11 + 0x1520) + 0x2c8);
  do {
    if (puVar8 == puVar1) {
      return;
    }
    uVar2 = puVar8[2];
    uVar3 = *puVar8;
    bVar16 = uVar3 < uVar2;
    if ((uVar3 != uVar2) || (bVar16 = puVar8[1] < puVar8[3], puVar8[1] != puVar8[3])) {
      puVar6 = puVar8 + 2;
      if (bVar16) {
        puVar6 = puVar8;
      }
      uVar4 = *puVar6;
      uVar5 = puVar6[1];
      local_b8 = uVar4;
      uStack_b0 = uVar5;
      bVar17 = uVar3 < uVar2;
      bVar16 = false;
      if (uVar3 == uVar2) {
        bVar17 = puVar8[1] < puVar8[3];
        bVar16 = puVar8[1] == puVar8[3];
      }
      puVar6 = puVar8 + 2;
      if (!bVar17 && !bVar16) {
        puVar6 = puVar8;
      }
      uVar2 = *puVar6;
      uVar3 = puVar6[1];
      local_a8 = uVar2;
      uStack_a0 = uVar3;
      for (uVar14 = uVar4; uVar14 <= uVar2; uVar14 = uVar14 + 1) {
        plVar12 = (longlong *)(param_1 + 0x50);
        lVar11 = *plVar12;
        lVar10 = uVar14 * 0x60;
        if (*(char *)(lVar10 + 0x22 + lVar11) != '\x03') {
          lVar13 = *(longlong *)(lVar10 + 0x30 + lVar11);
          local_128 = lVar10;
          local_120 = lVar11;
          if (lVar13 == 1) {
            uVar9 = *(ulonglong *)(lVar10 + 0x28 + lVar11);
            if ((*(ulonglong *)(param_1 + 0x510) <= uVar9) &&
               (uVar9 <= *(ulonglong *)(param_1 + 0x518))) {
              local_c0 = *(longlong *)(lVar10 + 8 + lVar11) - *(longlong *)(lVar10 + lVar11) >> 4;
              local_d8 = uVar14;
              local_d0 = 0;
              local_c8 = uVar14;
              if (uVar4 == uVar14) {
                bVar16 = uVar5 == 0;
              }
              else {
                bVar16 = uVar4 < uVar14;
              }
              puVar6 = &local_d8;
              if (!bVar16) {
                puVar6 = &local_b8;
              }
              if (uVar2 == uVar14) {
                bVar16 = uVar3 < local_c0;
                bVar17 = uVar3 == local_c0;
              }
              else {
                bVar16 = uVar2 < uVar14;
                bVar17 = uVar2 == uVar14;
              }
              local_108 = *puVar6;
              uStack_100 = puVar6[1];
              FUN_18025dda0(param_1 + 0x1d8,local_88,plVar12,&local_108);
              puVar6 = &local_c8;
              if (bVar16 || bVar17) {
                puVar6 = &local_a8;
              }
              local_108 = *puVar6;
              uStack_100 = puVar6[1];
              FUN_18025dda0(param_1 + 0x1d8,local_98,plVar12,&local_108);
              local_148 = *(float *)(param_1 + 0x4f0) + *(float *)(param_1 + 0x4b8);
              local_144 = (float)*(ulonglong *)(local_128 + 0x28 + local_120) *
                          *(float *)(param_1 + 0x4dc) + *(float *)(param_1 + 0x4bc);
              local_14c = *(float *)(param_1 + 0x4dc) + local_144;
              local_150 = (float)local_90 * *(float *)(param_1 + 0x4d8) + local_148;
              local_148 = (float)local_80 * *(float *)(param_1 + 0x4d8) + local_148;
              FUN_180295000(local_130,&local_148,&local_150,*(undefined4 *)(param_1 + 0x948),0,0);
            }
          }
          else {
            local_118 = 0;
            if (lVar13 != 0) {
              do {
                plVar12 = *(longlong **)(lVar10 + 0x40 + lVar11);
                local_f8 = *plVar12;
                if ((ulonglong)(plVar12[1] - local_f8 >> 5) <= local_118) {
                    /* WARNING: Subroutine does not return */
                  FUN_180262180();
                }
                uVar9 = *(longlong *)(lVar10 + 0x28 + lVar11) + local_118;
                if ((*(ulonglong *)(param_1 + 0x510) <= uVar9) &&
                   (uVar9 <= *(ulonglong *)(param_1 + 0x518))) {
                  lVar13 = local_118 * 0x20;
                  local_108 = *(ulonglong *)(lVar13 + 8 + local_f8);
                  bVar16 = uVar4 < uVar14;
                  if (uVar4 == uVar14) {
                    bVar16 = uVar5 < local_108;
                  }
                  if (bVar16) {
                    uVar15 = *(ulonglong *)(lVar13 + local_f8);
                    bVar16 = uVar2 < uVar14;
                    if (uVar2 == uVar14) {
                      bVar16 = uVar3 < uVar15;
                    }
                    if (!bVar16 && (uVar2 != uVar14 || uVar3 != uVar15)) {
                      bVar16 = uVar4 < uVar14;
                      if (uVar4 == uVar14) {
                        bVar16 = uVar5 <= uVar15;
                      }
                      if (bVar16) {
                        uVar15 = 0;
                      }
                      else {
                        local_e8 = uVar4;
                        uStack_e0 = uVar5;
                        FUN_18025dda0(param_1 + 0x1d8,local_78,param_1 + 0x50,&local_e8);
                        uVar15 = local_70;
                      }
                      bVar16 = uVar2 < uVar14;
                      if (uVar2 == uVar14) {
                        bVar16 = uVar3 < local_108;
                      }
                      if (bVar16 || uVar2 == uVar14 && uVar3 == local_108) {
                        local_e8 = uVar2;
                        uStack_e0 = uVar3;
                        FUN_18025dda0(param_1 + 0x1d8,local_68,param_1 + 0x50,&local_e8);
                        uVar7 = local_60;
                      }
                      else {
                        uVar7 = *(ulonglong *)(lVar13 + 0x10 + local_f8);
                      }
                      local_138 = *(float *)(param_1 + 0x4f0) + *(float *)(param_1 + 0x4b8);
                      local_134 = (float)uVar9 * *(float *)(param_1 + 0x4dc) +
                                  *(float *)(param_1 + 0x4bc);
                      local_13c = *(float *)(param_1 + 0x4dc) + local_134;
                      local_140 = (float)uVar7 * *(float *)(param_1 + 0x4d8) + local_138;
                      local_138 = (float)uVar15 * *(float *)(param_1 + 0x4d8) + local_138;
                      FUN_180295000(local_130,&local_138,&local_140,*(undefined4 *)(param_1 + 0x948)
                                    ,0,0);
                      lVar10 = local_128;
                      lVar11 = local_120;
                    }
                  }
                }
                local_118 = local_118 + 1;
              } while (local_118 < *(ulonglong *)(lVar10 + 0x30 + lVar11));
            }
          }
        }
      }
    }
    puVar8 = puVar8 + 6;
  } while( true );
}


