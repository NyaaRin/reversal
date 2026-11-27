// 0x180190660  FUN_180190660
// size=1106 thunk=false
// signature: undefined FUN_180190660()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180190660(longlong *param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  BOOL BVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  longlong lVar9;
  undefined1 auStack_138 [32];
  char local_118;
  char local_117;
  longlong local_108;
  undefined8 local_f8;
  BOOL local_f0;
  undefined8 local_e8;
  BOOL local_e0;
  longlong *local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  BOOL local_88 [4];
  undefined4 local_78;
  BOOL local_74;
  undefined4 local_70;
  BOOL local_6c;
  BOOL local_68;
  undefined4 local_64;
  undefined4 local_60;
  BOOL local_5c;
  BOOL local_58;
  BOOL local_54;
  BOOL local_50;
  BOOL local_4c;
  undefined4 local_48;
  BOOL local_44;
  undefined4 local_40;
  BOOL local_3c;
  BOOL local_38;
  undefined4 local_34;
  undefined4 local_30;
  BOOL local_2c;
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_138;
  if (param_1 != (longlong *)0x0) {
    local_108 = param_2;
    local_d8 = param_1;
    BVar3 = IsBadReadPtr(param_1,8);
    if (BVar3 == 0) {
      local_f0 = IsBadReadPtr((void *)*param_1,8);
      if (local_f0 == 0) {
        local_f8 = 0;
        local_e8 = 0;
        cVar8 = '\0';
        local_118 = '\0';
        local_117 = '\0';
        local_e0 = local_f0;
        plVar4 = (longlong *)(**(code **)(*param_1 + 0x28))(param_1);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0xa0))(plVar4,&local_f8,&local_e8);
          cVar2 = FUN_18018c550(&local_f8,&local_e8);
          if (cVar2 != '\0') {
            puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x110))(plVar4);
            local_b8 = *puVar5;
            uStack_b0 = puVar5[1];
            local_a8 = puVar5[2];
            uStack_a0 = puVar5[3];
            local_98 = puVar5[4];
            uStack_90 = puVar5[5];
            cVar8 = '\x01';
            local_118 = '\x01';
            local_117 = '\x01';
          }
        }
        if (cVar8 == '\0') {
          plVar4 = (longlong *)(**(code **)(*param_1 + 0x18))(param_1);
          if (plVar4 != (longlong *)0x0) {
            puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x18))(plVar4);
            local_f8 = *puVar5;
            local_f0 = *(BOOL *)(puVar5 + 1);
            puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x20))(plVar4);
            local_e8 = *puVar5;
            local_e0 = *(BOOL *)(puVar5 + 1);
            cVar2 = FUN_18018c550(&local_f8,&local_e8);
            if (cVar2 != '\0') {
              uVar6 = (**(code **)(*plVar4 + 0x50))(plVar4);
              uVar7 = (**(code **)(*plVar4 + 0x58))(plVar4);
              FUN_1802d3dc0(uVar7,uVar6,&local_b8);
              cVar8 = '\x01';
              local_118 = '\x01';
              local_117 = '\x01';
            }
          }
          if (cVar8 == '\0') {
            puVar5 = (undefined8 *)FUN_18001bef0(param_1);
            local_f8 = *puVar5;
            local_f0 = *(BOOL *)(puVar5 + 1);
            puVar5 = (undefined8 *)FUN_18001bfe0(param_1);
            local_e8 = *puVar5;
            local_e0 = *(BOOL *)(puVar5 + 1);
            local_118 = FUN_18018c550(&local_f8,&local_e8);
            cVar8 = local_118;
          }
        }
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x48))(param_1);
        local_c8 = *puVar5;
        local_c0 = *(float *)(puVar5 + 1);
        if ((((float)local_c8 == 0.0) &&
            (local_c8._4_4_ = (float)((ulonglong)local_c8 >> 0x20), bVar1 = local_c8._4_4_ == 0.0,
            bVar1)) && (local_c0 == 0.0)) {
          puVar5 = (undefined8 *)FUN_18001daf0(param_1,&local_d8);
          local_c8 = *puVar5;
          local_c0 = *(float *)(puVar5 + 1);
        }
        if (cVar8 == '\0') {
          local_f8 = CONCAT44(DAT_1803813ec,DAT_1803813ec);
          local_f0 = 0;
          local_e8 = CONCAT44(DAT_180380fd8,DAT_180380fd8);
          local_e0 = DAT_180381080;
          local_70 = DAT_180380fd8;
          local_88[1] = DAT_1803813ec;
          local_78 = DAT_180380fd8;
          local_88[0] = DAT_1803813ec;
        }
        else {
          local_70 = (undefined4)local_e8;
          local_88[1] = local_f8._4_4_;
          local_78 = local_e8._4_4_;
          local_88[0] = (BOOL)local_f8;
        }
        if (local_117 == '\0') {
          local_d8 = (longlong *)0x0;
          local_d0 = 0;
          puVar5 = (undefined8 *)FUN_18001d620(param_1);
          local_d8 = (longlong *)*puVar5;
          local_d0 = *(undefined4 *)(puVar5 + 1);
          FUN_1802d3dc0(&local_d8,&local_c8,&local_b8);
          local_70 = (undefined4)local_e8;
          local_88[1] = local_f8._4_4_;
          local_78 = local_e8._4_4_;
          local_88[0] = (BOOL)local_f8;
        }
        lVar9 = 0;
        local_88[2] = local_f0;
        local_88[3] = local_88[0];
        local_74 = local_f0;
        local_6c = local_88[1];
        local_68 = local_f0;
        local_64 = local_70;
        local_60 = local_78;
        local_5c = local_f0;
        local_58 = local_88[0];
        local_54 = local_88[1];
        local_50 = local_e0;
        local_4c = local_88[0];
        local_48 = local_78;
        local_44 = local_e0;
        local_40 = local_70;
        local_3c = local_88[1];
        local_38 = local_e0;
        local_34 = local_70;
        local_30 = local_78;
        local_2c = local_e0;
        do {
          FUN_1802d46f0(local_88 + lVar9 * 3,&local_b8,local_108 + lVar9 * 0xc);
          lVar9 = lVar9 + 1;
        } while (lVar9 != 8);
        return 1;
      }
    }
  }
  return 0;
}


