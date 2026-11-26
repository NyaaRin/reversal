// 0x180249100  FUN_180249100
// size=1116 thunk=false
// signature: undefined FUN_180249100()
// status: ok


void FUN_180249100(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_res8;
  float local_resc;
  float local_res10;
  float local_res14;
  float local_res18;
  float local_res1c;
  
  if ((*(char *)(param_1 + 0x26) != '\0') &&
     ((*(char *)(param_1 + 0x818) != '\0' || (*(char *)(param_1 + 0x819) != '\0')))) {
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    cVar1 = *(char *)(lVar2 + 0x10);
    lVar3 = *(longlong *)(lVar2 + 0xec0);
    *(undefined1 *)(*(longlong *)(lVar3 + 0x1520) + 0xce) = 1;
    lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x1520) + 0x2c8);
    if (cVar1 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0xec0) + 0x1520);
    fVar10 = *(float *)(lVar4 + 0x30) * DAT_180380ac0;
    fVar9 = *(float *)(lVar4 + 0x34) * DAT_180380ac0;
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0xec0) + 0x1520);
    fVar10 = fVar10 + *(float *)(lVar2 + 0x28);
    fVar9 = fVar9 + *(float *)(lVar2 + 0x2c);
    local_res8 = fVar10;
    local_resc = fVar9;
    FUN_180293e00(lVar3,&local_res8,DAT_180381024,0,0x30);
    *(int *)(lVar3 + 0x50) = *(int *)(lVar3 + 0x50) + -1;
    FUN_1802938c0(lVar3,*(undefined8 *)(lVar3 + 0x58),*(undefined4 *)(lVar3 + 0x50),0xa0ffffff);
    uVar5 = DAT_180380ec8;
    *(undefined4 *)(lVar3 + 0x50) = 0;
    FUN_180293e00(lVar3,&local_res8,uVar5,0,0x30);
    *(int *)(lVar3 + 0x50) = *(int *)(lVar3 + 0x50) + -1;
    uVar5 = DAT_180380d30;
    FUN_1802929d0(lVar3,*(undefined8 *)(lVar3 + 0x58),*(undefined4 *)(lVar3 + 0x50),0xa0000000,
                  DAT_180380d30,0x200);
    fVar8 = DAT_180380fe4;
    fVar7 = DAT_180380fa8;
    fVar6 = DAT_180380e9c;
    local_res10 = fVar10 - DAT_180380fa8;
    *(undefined4 *)(lVar3 + 0x50) = 0;
    local_res8 = fVar10 - fVar8;
    local_resc = fVar9;
    local_res14 = fVar9 - fVar6;
    local_res18 = local_res10;
    local_res1c = fVar9 + fVar6;
    FUN_18020dc30(lVar3 + 0x50,&local_res8);
    FUN_18020dc30(lVar3 + 0x50,&local_res10);
    FUN_18020dc30(lVar3 + 0x50,&local_res18);
    FUN_1802929d0(lVar3,*(undefined8 *)(lVar3 + 0x58),*(undefined4 *)(lVar3 + 0x50),0xa0000000,uVar5
                  ,0x200);
    local_res10 = fVar10 + fVar7;
    *(undefined4 *)(lVar3 + 0x50) = 0;
    local_res8 = fVar10 + fVar8;
    local_resc = fVar9;
    local_res14 = fVar9 - fVar6;
    local_res18 = local_res10;
    local_res1c = fVar9 + fVar6;
    FUN_18020dc30(lVar3 + 0x50,&local_res8);
    FUN_18020dc30(lVar3 + 0x50,&local_res10);
    FUN_18020dc30(lVar3 + 0x50,&local_res18);
    FUN_1802929d0(lVar3,*(undefined8 *)(lVar3 + 0x58),*(undefined4 *)(lVar3 + 0x50),0xa0000000,uVar5
                  ,0x200);
    local_res14 = fVar9 - fVar7;
    *(undefined4 *)(lVar3 + 0x50) = 0;
    local_resc = fVar9 - fVar8;
    local_res8 = fVar10;
    local_res10 = fVar10 - fVar6;
    local_res18 = fVar10 + fVar6;
    local_res1c = local_res14;
    FUN_18020dc30(lVar3 + 0x50,&local_res8);
    FUN_18020dc30(lVar3 + 0x50,&local_res10);
    FUN_18020dc30(lVar3 + 0x50,&local_res18);
    FUN_1802929d0(lVar3,*(undefined8 *)(lVar3 + 0x58),*(undefined4 *)(lVar3 + 0x50),0xa0000000,uVar5
                  ,0x200);
    local_res14 = fVar9 + fVar7;
    local_resc = fVar9 + fVar8;
    *(undefined4 *)(lVar3 + 0x50) = 0;
    local_res8 = fVar10;
    local_res10 = fVar10 - fVar6;
    local_res18 = fVar10 + fVar6;
    local_res1c = local_res14;
    FUN_18020dc30(lVar3 + 0x50,&local_res8);
    FUN_18020dc30(lVar3 + 0x50,&local_res10);
    FUN_18020dc30(lVar3 + 0x50,&local_res18);
    FUN_1802929d0(lVar3,*(undefined8 *)(lVar3 + 0x58),*(undefined4 *)(lVar3 + 0x50),0xa0000000,uVar5
                  ,0x200);
    *(undefined4 *)(lVar3 + 0x50) = 0;
  }
  return;
}


