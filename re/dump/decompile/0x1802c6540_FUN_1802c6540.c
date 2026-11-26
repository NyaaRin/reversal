// 0x1802c6540  FUN_1802c6540
// size=516 thunk=false
// signature: undefined FUN_1802c6540()
// status: ok


int * FUN_1802c6540(longlong param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  char cVar9;
  undefined *puVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  float fVar14;
  undefined8 local_res8 [4];
  longlong local_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar6 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  cVar9 = *(char *)(lVar6 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x3c);
  lVar7 = *(longlong *)(lVar6 + 0xec0);
  fVar14 = *(float *)(lVar7 + 0xcc8);
  lVar8 = *(longlong *)(lVar7 + 0x1520);
  fVar2 = *(float *)(lVar7 + 0x1238);
  uVar3 = *(undefined4 *)(lVar8 + 0x118);
  uVar4 = *(undefined4 *)(lVar8 + 0x11c);
  *(float *)(lVar8 + 0x118) = *(float *)(param_1 + 0x38) - fVar14;
  *(undefined4 *)(lVar8 + 0x11c) = uVar1;
  *(float *)(param_1 + 0x38) = fVar14 + fVar2 + *(float *)(param_1 + 0x38);
  uVar5 = *(undefined8 *)(lVar7 + 0xdb0);
  uVar1 = *(undefined4 *)(lVar7 + 0xdb8);
  fVar14 = *(float *)(lVar7 + 0xdbc);
  if (cVar9 == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar6 = *(longlong *)(lVar6 + 0xec0);
  uStack_90 = *(undefined8 *)(lVar6 + 0xdb4);
  uStack_88 = *(undefined4 *)(lVar6 + 0xdbc);
  local_98 = (ulonglong)*(uint *)(lVar6 + 0xdb0) << 0x20;
  FUN_18028a220(lVar6 + 0x1fc8,&local_98);
  if (*(int *)(lVar6 + 0x1fc4) != 0) {
    fVar14 = fVar14 * DAT_180380ac0;
    *(undefined8 *)(lVar6 + 0xdb0) = uVar5;
    *(undefined4 *)(lVar6 + 0xdb8) = uVar1;
    *(float *)(lVar6 + 0xdbc) = fVar14;
  }
  local_98 = 0;
  uStack_90 = 0;
  FUN_18026a810(0x16,&local_98);
  cVar9 = FUN_1802b0590(&DAT_180380518,0,0x50);
  FUN_18026a890(2);
  piVar12 = (int *)0x0;
  if (cVar9 != '\0') {
    iVar11 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        piVar13 = (int *)((longlong)iVar11 * 0x2c + *(longlong *)(param_1 + 0x10));
        if ((piVar13[1] & 0x200000U) == 0) {
          if (piVar13[8] == -1) {
            puVar10 = &DAT_18037f5f8;
          }
          else {
            puVar10 = (undefined *)((longlong)piVar13[8] + *(longlong *)(param_1 + 0xa8));
          }
          local_res8[0] = 0;
          cVar9 = FUN_1802c1850(puVar10,*(int *)(param_1 + 0x20) == *piVar13,0,local_res8);
          if (cVar9 != '\0') {
            piVar12 = piVar13;
          }
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < *(int *)(param_1 + 8));
    }
    FUN_1802b1130();
  }
  *(undefined4 *)(lVar8 + 0x118) = uVar3;
  *(undefined4 *)(lVar8 + 0x11c) = uVar4;
  return piVar12;
}


