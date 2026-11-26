// 0x1800bc790  Features_HVH_Resolver_ResolverFeature_vfunc16
// size=404 thunk=false
// signature: undefined Features_HVH_Resolver_ResolverFeature_vfunc16()
// status: ok


void Features_HVH_Resolver_ResolverFeature_vfunc16(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined4 *puVar10;
  longlong lVar11;
  undefined8 local_328 [96];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (DAT_1803e9e08 != DAT_1803e9e10) {
    DAT_1803e9e10 = DAT_1803e9e08;
  }
  puVar10 = &DAT_1805610f0;
  do {
    memset(local_328,0,0x168);
    FUN_1800b8590(local_328);
    FUN_1800b89a0(puVar10);
    puVar10 = puVar10 + 0x5a;
  } while (puVar10 != (undefined4 *)&DAT_18056c658);
  lVar11 = 0;
  DAT_180409cb8 = 0;
  do {
    memset(local_328,0,0x300);
    FUN_1802030d0(local_328);
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    lVar9 = 6;
    puVar5 = local_328;
    puVar6 = (undefined8 *)(&DAT_18040a650 + lVar11 * 0x318);
    do {
      puVar8 = puVar6;
      puVar7 = puVar5;
      uVar1 = puVar7[1];
      uVar2 = puVar7[2];
      uVar3 = puVar7[3];
      *puVar8 = *puVar7;
      puVar8[1] = uVar1;
      uVar1 = puVar7[4];
      uVar4 = puVar7[5];
      puVar8[2] = uVar2;
      puVar8[3] = uVar3;
      uVar2 = puVar7[6];
      uVar3 = puVar7[7];
      puVar8[4] = uVar1;
      puVar8[5] = uVar4;
      uVar1 = puVar7[8];
      uVar4 = puVar7[9];
      puVar8[6] = uVar2;
      puVar8[7] = uVar3;
      uVar2 = puVar7[10];
      uVar3 = puVar7[0xb];
      puVar8[8] = uVar1;
      puVar8[9] = uVar4;
      uVar1 = puVar7[0xc];
      uVar4 = puVar7[0xd];
      puVar8[10] = uVar2;
      puVar8[0xb] = uVar3;
      uVar2 = puVar7[0xe];
      uVar3 = puVar7[0xf];
      puVar8[0xc] = uVar1;
      puVar8[0xd] = uVar4;
      puVar8[0xe] = uVar2;
      puVar8[0xf] = uVar3;
      lVar9 = lVar9 + -1;
      puVar5 = puVar7 + 0x10;
      puVar6 = puVar8 + 0x10;
    } while (lVar9 != 0);
    uVar2 = puVar7[0x11];
    uVar1 = puVar7[0x12];
    lVar11 = lVar11 + 1;
    puVar8[0x10] = puVar7[0x10];
    puVar8[0x11] = uVar2;
    puVar8[0x12] = uVar1;
  } while (lVar11 != 0x81);
  DAT_180409cc0 = 0;
  DAT_1803e7c84 = 0x88;
  DAT_1804097a4 = 0;
  DAT_18040979c = 0;
  DAT_1803e7c80 = 0xffffffff;
  DAT_1804097a0 = 0;
  return;
}


