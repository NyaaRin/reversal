// 0x180289430  FUN_180289430
// size=650 thunk=false
// signature: undefined FUN_180289430()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180289430(void)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  code *pcVar4;
  float fVar5;
  undefined4 uVar6;
  void *pvVar7;
  longlong lVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_res8;
  float local_resc;
  float local_res10;
  float local_res14;
  
  uVar9 = (ulonglong)_tls_index;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar9 * 8);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  pvVar7 = ThreadLocalStoragePointer;
  lVar3 = *(longlong *)(lVar3 + 0xec0);
  if (*(char *)(lVar3 + 0x291a) == '\0') {
    fVar13 = *(float *)(lVar3 + 0x1f04);
    *(undefined4 *)(lVar3 + 0x1ebc) = 0;
    fVar11 = *(float *)(lVar3 + 0x1f08);
    fVar10 = *(float *)(lVar3 + 0x1f0c);
    fVar12 = *(float *)(lVar3 + 0x1f10);
    lVar8 = *(longlong *)((longlong)pvVar7 + uVar9 * 8);
    if (*(char *)(lVar8 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar8 = FUN_18026f7d0(**(undefined8 **)(*(longlong *)(lVar8 + 0xec0) + 0x2060),1,"##Foreground")
    ;
    fVar5 = DAT_180380ac0;
    fVar1 = *(float *)(lVar3 + 0x104);
    fVar11 = fVar11 - DAT_180380e28;
    fVar2 = *(float *)(lVar3 + 0x100);
    fVar10 = fVar10 + DAT_180380e28;
    fVar13 = fVar13 - DAT_180380e28;
    fVar12 = fVar12 + DAT_180380e28;
    fVar14 = fVar11;
    if ((fVar11 <= fVar1) && (fVar14 = fVar12, fVar1 <= fVar12)) {
      fVar14 = fVar1;
    }
    fVar15 = fVar13;
    if ((fVar13 <= fVar2) && (fVar15 = fVar10, fVar2 <= fVar10)) {
      fVar15 = fVar2;
    }
    local_res10 = fVar13 + DAT_180380ac0;
    local_res14 = fVar11 + DAT_180380ac0;
    local_res8 = _DAT_180380abc;
    if ((*(byte *)(lVar8 + 0x30) & 1) != 0) {
      local_res8 = DAT_180380ac0;
    }
    local_resc = fVar12 - local_res8;
    local_res8 = fVar10 - local_res8;
    FUN_180294990(lVar8,&local_res10,&local_res8,0,0);
    uVar6 = DAT_180380bb0;
    FUN_1802929d0(lVar8,*(undefined8 *)(lVar8 + 0x58),*(undefined4 *)(lVar8 + 0x50),0xff00ff00,
                  DAT_180380bb0,0x200);
    local_res8 = fVar2 + fVar5;
    *(undefined4 *)(lVar8 + 0x50) = 0;
    local_resc = fVar1 + fVar5;
    FUN_18020dc30(lVar8 + 0x50,&local_res8);
    local_res8 = fVar15 + fVar5;
    local_resc = fVar14 + fVar5;
    FUN_18020dc30(lVar8 + 0x50,&local_res8);
    FUN_1802929d0(lVar8,*(undefined8 *)(lVar8 + 0x58),*(undefined4 *)(lVar8 + 0x50),0xff00ff00,uVar6
                  ,0);
    *(undefined4 *)(lVar8 + 0x50) = 0;
    return;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


