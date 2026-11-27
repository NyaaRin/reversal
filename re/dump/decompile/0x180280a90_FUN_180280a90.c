// 0x180280a90  FUN_180280a90
// size=609 thunk=false
// signature: undefined FUN_180280a90()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180280a90(ulonglong param_1)

{
  uint *puVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  char *pcVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [32];
  ulonglong local_88;
  
  local_88 = DAT_1803da4c0 ^ (ulonglong)auStack_c8;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(lVar3 + 0xec0);
  if ((*(char *)(lVar4 + 0x2299) == '\0') && (*(char *)(lVar4 + 0x229a) == '\0')) {
    bVar6 = false;
    bVar7 = false;
    if ((param_1 & 2) == 0) goto LAB_180280c94;
  }
  else {
    if ((*(byte *)(lVar4 + 0x1f48) & 1) == 0) {
      fVar11 = *(float *)(lVar4 + 0xda0);
      fVar2 = *(float *)(lVar4 + 0x100);
      if (*(int *)(lVar4 + 0x118) == 1) {
        fVar12 = *(float *)(lVar4 + 0x104) - fVar11 * DAT_180381024;
        fVar10 = fVar11 * 0.0;
        uVar13 = DAT_180380ac0;
        uVar14 = DAT_180380bb0;
      }
      else {
        uVar13 = 0;
        fVar10 = fVar11 * DAT_180380fe8;
        uVar14 = 0;
        fVar12 = fVar11 * DAT_180380fcc + *(float *)(lVar4 + 0x104);
      }
      if (*(char *)(lVar3 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar5 = *(longlong *)(lVar3 + 0xec0);
      *(uint *)(lVar5 + 0x1f48) = *(uint *)(lVar5 + 0x1f48) | 1;
      *(float *)(lVar5 + 0x1f5c) = fVar12;
      *(undefined4 *)(lVar5 + 0x1f60) = uVar13;
      *(undefined4 *)(lVar5 + 0x1f64) = uVar14;
      *(float *)(lVar5 + 0x1f58) = fVar10 + fVar2;
      *(undefined4 *)(lVar5 + 0x1f4c) = 1;
    }
    fVar11 = *(float *)(lVar4 + 0xdfc) * DAT_180380ae4;
    if (*(char *)(lVar3 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar5 = *(longlong *)(lVar3 + 0xec0);
    puVar1 = (uint *)(lVar5 + 0x1f48);
    *puVar1 = *puVar1 | 0x40;
    *(float *)(lVar5 + 0x1fb0) = fVar11;
    bVar7 = true;
  }
  bVar6 = bVar7;
  lVar5 = *(longlong *)(lVar4 + 0x26d8);
  if ((lVar5 != 0) && (*(char *)(lVar5 + 0xcc) != '\0')) {
    if (*(char *)(lVar3 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    uVar8 = *(int *)(*(longlong *)(lVar3 + 0xec0) + 0x14f0) - 1;
    if (-1 < (int)uVar8) {
      do {
        if (*(longlong *)
             ((ulonglong)uVar8 * 0x78 + *(longlong *)(*(longlong *)(lVar3 + 0xec0) + 0x14f8)) ==
            lVar5) goto LAB_180280c94;
        uVar8 = uVar8 - 1;
      } while (-1 < (int)uVar8);
    }
    lVar3 = *(longlong *)(lVar4 + 0x26d8);
    *(undefined1 *)(lVar3 + 0xd1) = 1;
    *(undefined1 *)(lVar3 + 0xd4) = 1;
    *(undefined1 *)(lVar3 + 0xeb) = 1;
    *(short *)(lVar4 + 0x26d6) = *(short *)(lVar4 + 0x26d6) + 1;
  }
LAB_180280c94:
  pcVar9 = "##Tooltip_%02d";
  if (bVar6) {
    pcVar9 = "##Tooltip_DragDrop_%02d";
  }
  FUN_180268750(local_a8,0x20,pcVar9,(int)*(short *)(lVar4 + 0x26d6));
  FUN_180276630(local_a8,0,0x2030347);
  return 1;
}


