// 0x1802a9e40  FUN_1802a9e40
// size=1310 thunk=false
// signature: undefined FUN_1802a9e40()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802a9e40(void)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  float fVar9;
  char cVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  longlong local_b8;
  char local_b0;
  char local_af [7];
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  ulonglong local_98;
  
  local_98 = DAT_1803da4c0 ^ (ulonglong)auStack_e8;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  local_b8 = *(longlong *)(lVar2 + 0xec0);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar2 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar3 + 0x1520) + 0xce) = 1;
  lVar3 = *(longlong *)(lVar3 + 0x1520);
  piVar4 = *(int **)(lVar3 + 0x1c8);
  FUN_18027f940();
  if (1 < piVar4[4]) {
    FUN_180271860();
    FUN_180296e30(piVar4 + 0x1c,*(undefined8 *)(lVar3 + 0x2c8));
  }
  fVar16 = (float)piVar4[8];
  if ((float)piVar4[8] <= *(float *)(lVar3 + 0x11c)) {
    fVar16 = *(float *)(lVar3 + 0x11c);
  }
  uVar1 = piVar4[1];
  piVar4[8] = (int)fVar16;
  *(float *)(lVar3 + 0x11c) = fVar16;
  if ((uVar1 & 0x10) == 0) {
    *(int *)(lVar3 + 0x130) = piVar4[10];
  }
  fVar9 = DAT_180380e9c;
  uVar8 = DAT_180380bb0;
  cVar10 = '\0';
  if (((uVar1 & 1) == 0) && (*(char *)(lVar3 + 0xd1) == '\0')) {
    if (*(float *)(lVar3 + 0x274) <= fVar16) {
      fVar16 = *(float *)(lVar3 + 0x274);
    }
    iVar13 = 1;
    iVar14 = -1;
    fVar17 = (float)piVar4[9];
    if ((float)piVar4[9] <= *(float *)(lVar3 + 0x26c)) {
      fVar17 = *(float *)(lVar3 + 0x26c);
    }
    if (1 < piVar4[4]) {
      do {
        lVar12 = *(longlong *)(piVar4 + 0x1a);
        if (*(char *)(lVar2 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0xec0) + 0x1520) + 0x1c8);
        if (lVar5 == 0) {
          fVar15 = 0.0;
        }
        else {
          iVar11 = iVar13;
          if (iVar13 < 0) {
            iVar11 = *(int *)(lVar5 + 0xc);
          }
          fVar15 = (*(float *)(lVar5 + 0x18) - *(float *)(lVar5 + 0x14)) *
                   *(float *)((longlong)iVar11 * 0x1c + *(longlong *)(lVar5 + 0x68)) +
                   *(float *)(lVar5 + 0x14);
        }
        fVar15 = fVar15 + *(float *)(lVar3 + 0x28);
        iVar11 = *piVar4;
        local_a0 = (float)(int)(*(float *)(local_b8 + 0x1248) * fVar9);
        local_a8 = fVar15 - local_a0;
        local_a0 = local_a0 + fVar15;
        local_a4 = fVar17;
        local_9c = fVar16;
        cVar10 = FUN_18027f160(&local_a8,iVar11 + iVar13,0,2);
        if (cVar10 != '\0') {
          local_b0 = '\0';
          local_af[0] = '\0';
          if ((uVar1 & 2) == 0) {
            local_c8 = 0;
            FUN_1802ab600(&local_a8,iVar11 + iVar13,&local_b0,local_af);
            if ((local_b0 == '\0') && (local_af[0] == '\0')) goto LAB_1802aa0ff;
            if (*(char *)(lVar2 + 0x10) == '\0') {
              __dyn_tls_on_demand_init();
            }
            *(undefined4 *)(*(longlong *)(lVar2 + 0xec0) + 0x2508) = 4;
            if (local_af[0] == '\0') goto LAB_1802aa0ff;
            cVar10 = '\x1e';
            iVar11 = iVar13;
            if ((*(byte *)((longlong)iVar13 * 0x1c + 8 + lVar12) & 2) != 0) {
              iVar11 = iVar14;
            }
          }
          else {
LAB_1802aa0ff:
            cVar10 = (local_b0 != '\0') + '\x1c';
            iVar11 = iVar14;
          }
          local_c8 = FUN_18026a6a0(cVar10);
          local_c0 = uVar8;
          FUN_180294e30(*(undefined8 *)(lVar3 + 0x2c8));
          iVar14 = iVar11;
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < piVar4[4]);
      if (iVar14 == -1) {
        cVar10 = '\0';
      }
      else {
        if ((*(char *)((longlong)piVar4 + 9) == '\0') && (iVar13 = 0, 0 < piVar4[4] + 1)) {
          do {
            lVar12 = (longlong)iVar13;
            iVar13 = iVar13 + 1;
            *(undefined4 *)(lVar12 * 0x1c + 4 + *(longlong *)(piVar4 + 0x1a)) =
                 *(undefined4 *)(lVar12 * 0x1c + *(longlong *)(piVar4 + 0x1a));
          } while (iVar13 < piVar4[4] + 1);
        }
        local_b0 = '\x01';
        *(undefined1 *)((longlong)piVar4 + 9) = 1;
        if (*(char *)(lVar2 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        FUN_1802a9aa0(iVar14 + -1);
        if ((*(byte *)(piVar4 + 1) & 4) != 0) {
          FUN_1802a9aa0(iVar14 + 1);
        }
        FUN_1802a9b30(iVar14);
        cVar10 = local_b0;
      }
    }
  }
  *(char *)((longlong)piVar4 + 9) = cVar10;
  cVar10 = *(char *)(lVar2 + 0x10);
  *(undefined8 *)(lVar3 + 0x248) = *(undefined8 *)(lVar3 + 600);
  *(undefined8 *)(lVar3 + 0x250) = *(undefined8 *)(lVar3 + 0x260);
  uVar6 = *(undefined8 *)(piVar4 + 0x13);
  uVar7 = *(undefined8 *)(piVar4 + 0x15);
  *(undefined8 *)(lVar3 + 0x1c8) = 0;
  *(undefined8 *)(lVar3 + 600) = uVar6;
  *(undefined8 *)(lVar3 + 0x260) = uVar7;
  *(undefined4 *)(lVar3 + 0x160) = 0;
  *(float *)(lVar3 + 0x118) =
       (float)(int)(*(float *)(lVar3 + 0x15c) + *(float *)(lVar3 + 0x28) + 0.0);
  if (cVar10 == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0xec0) + 0x1520);
  if ((*(longlong *)(*(longlong *)(lVar2 + 0xec0) + 0x2368) == 0) &&
     (*(longlong *)(lVar3 + 0x1c8) == 0)) {
    *(undefined1 *)(lVar3 + 0x178) = 1;
    return;
  }
  *(undefined1 *)(lVar3 + 0x178) = 0;
  return;
}


