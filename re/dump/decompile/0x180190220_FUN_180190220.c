// 0x180190220  FUN_180190220
// size=1032 thunk=false
// signature: undefined FUN_180190220()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180190220(undefined8 *param_1,longlong *param_2,undefined1 param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  char cVar5;
  char cVar6;
  BOOL BVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint *puVar12;
  int *piVar13;
  undefined1 auStack_108 [32];
  int local_e8;
  int local_e0;
  char local_d8;
  char local_d7;
  undefined8 *local_d0;
  longlong *local_c8;
  undefined8 *local_c0;
  int local_b8;
  int local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  float local_88;
  undefined8 local_80;
  undefined4 local_78;
  uint local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_108;
  if (((((param_2 != (longlong *)0x0) &&
        (local_d0 = param_1, local_c8 = param_2, local_c0 = param_1, BVar7 = IsBadReadPtr(param_2,8)
        , BVar7 == 0)) && (local_b8 = IsBadReadPtr((void *)*param_2,8), local_b8 == 0)) &&
      ((DAT_1803fa668 != (longlong *)0x0 &&
       (local_b4 = local_b8, (**(code **)(*DAT_1803fa668 + 0x28))(DAT_1803fa668,&local_b4,&local_b8)
       , 1 < local_b4)))) && (1 < local_b8)) {
    local_a0 = 0;
    local_98 = 0;
    local_b0 = 0;
    local_a8 = 0;
    cVar6 = '\0';
    local_d8 = '\0';
    local_d7 = '\0';
    plVar8 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2);
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0xa0))(plVar8,&local_a0,&local_b0);
      cVar5 = FUN_18018c550(&local_a0,&local_b0);
      if (cVar5 != '\0') {
        puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x110))(plVar8);
        local_68 = *puVar9;
        uStack_60 = puVar9[1];
        local_58 = puVar9[2];
        uStack_50 = puVar9[3];
        local_48 = puVar9[4];
        uStack_40 = puVar9[5];
        cVar6 = '\x01';
        local_d8 = '\x01';
        local_d7 = '\x01';
      }
    }
    if (cVar6 == '\0') {
      plVar8 = (longlong *)(**(code **)(*param_2 + 0x18))(param_2);
      if (plVar8 != (longlong *)0x0) {
        puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x18))(plVar8);
        local_a0 = *puVar9;
        local_98 = *(undefined4 *)(puVar9 + 1);
        puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x20))(plVar8);
        local_b0 = *puVar9;
        local_a8 = *(undefined4 *)(puVar9 + 1);
        cVar5 = FUN_18018c550(&local_a0,&local_b0);
        if (cVar5 != '\0') {
          uVar10 = (**(code **)(*plVar8 + 0x50))(plVar8);
          uVar11 = (**(code **)(*plVar8 + 0x58))(plVar8);
          FUN_1802d3dc0(uVar11,uVar10,&local_68);
          cVar6 = '\x01';
          local_d8 = '\x01';
          local_d7 = '\x01';
        }
      }
      if (cVar6 == '\0') {
        puVar9 = (undefined8 *)FUN_18001bef0(param_2);
        local_a0 = *puVar9;
        local_98 = *(undefined4 *)(puVar9 + 1);
        puVar9 = (undefined8 *)FUN_18001bfe0(param_2);
        local_b0 = *puVar9;
        local_a8 = *(undefined4 *)(puVar9 + 1);
        cVar6 = FUN_18018c550(&local_a0,&local_b0);
        local_d8 = cVar6;
      }
    }
    puVar9 = (undefined8 *)(**(code **)(*param_2 + 0x48))(param_2);
    local_90 = *puVar9;
    local_88 = *(float *)(puVar9 + 1);
    if ((((float)local_90 == 0.0) &&
        (local_90._4_4_ = (float)((ulonglong)local_90 >> 0x20), bVar3 = local_90._4_4_ == 0.0, bVar3
        )) && (local_88 == 0.0)) {
      puVar9 = (undefined8 *)FUN_18001daf0(param_2,&local_80);
      local_90 = *puVar9;
      local_88 = *(float *)(puVar9 + 1);
    }
    if (cVar6 == '\0') {
      local_a0 = 0xc1400000c1400000;
      local_98 = 0;
      local_b0 = 0x4140000041400000;
      local_a8 = 0x42100000;
    }
    if (local_d7 == '\0') {
      local_80 = 0;
      local_78 = 0;
      puVar9 = (undefined8 *)FUN_18001d620(param_2);
      local_80 = *puVar9;
      local_78 = *(undefined4 *)(puVar9 + 1);
      FUN_1802d3dc0(&local_80,&local_90,&local_68);
    }
    local_e0 = local_b8;
    local_e8 = local_b4;
    puVar12 = (uint *)FUN_18018df20(&local_80,&local_a0,&local_b0,&local_68);
    uVar1 = *puVar12;
    uVar10 = *(undefined8 *)(puVar12 + 1);
    uVar11 = *(undefined8 *)(puVar12 + 3);
    local_6c = puVar12[5];
    if (2 < uVar1) {
      local_e0 = CONCAT31(local_e0._1_3_,param_3);
      local_e8 = local_b8;
      piVar13 = (int *)FUN_18018f950(&local_80,param_2,&local_68,local_b4);
      iVar2 = *piVar13;
      uVar4 = *(undefined8 *)(piVar13 + 3);
      if (iVar2 != 4) {
        if (iVar2 == 3) {
          *local_c0 = *(undefined8 *)(piVar13 + 1);
          local_c0[1] = uVar4;
          *(undefined1 *)(param_1 + 2) = 1;
          return param_1;
        }
        if ((iVar2 != 1) && (uVar1 != 4)) {
          *local_c0 = uVar10;
          local_c0[1] = uVar11;
          *(undefined1 *)(param_1 + 2) = 1;
          return param_1;
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 2) = 0;
  return param_1;
}


