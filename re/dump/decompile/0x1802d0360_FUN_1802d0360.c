// 0x1802d0360  FUN_1802d0360
// size=720 thunk=false
// signature: undefined FUN_1802d0360()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802d0360(longlong param_1)

{
  ushort *puVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  ushort *puVar8;
  undefined1 auStack_a8 [32];
  int local_88;
  uint local_80;
  uint local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 local_58;
  int local_50;
  int local_4c;
  int local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  puVar7 = (undefined8 *)0x0;
  if (*(longlong *)(lVar2 + 0xec0) != 0) {
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    puVar7 = *(undefined8 **)(*(longlong *)(lVar2 + 0xec0) + 0xc0);
  }
  iVar5 = *(int *)(param_1 + 4);
  if (iVar5 == 2) {
    local_68 = 0;
    local_70 = &local_58;
    local_80 = 0x15;
    if (*(char *)(puVar7 + 4) != '\0') {
      local_80 = 0x20;
    }
    local_58 = (longlong *)0x0;
    local_78 = 0;
    local_88 = 0x200;
    iVar5 = (**(code **)(*(longlong *)*puVar7 + 0xb8))
                      ((longlong *)*puVar7,*(undefined4 *)(param_1 + 0x1c),
                       *(undefined4 *)(param_1 + 0x20),1);
    if (-1 < iVar5) {
      local_88 = 0;
      iVar5 = (**(code **)(*local_58 + 0x98))(local_58,0,local_48,0);
      if (iVar5 == 0) {
        local_80 = *(int *)(param_1 + 0x1c);
        local_78 = *(undefined4 *)(param_1 + 0x20);
        local_88 = local_48[0];
        FUN_1802d0220(*(undefined1 *)(param_1 + 0x56),*(undefined8 *)(param_1 + 0x28),local_80 * 4,
                      local_40);
        (**(code **)(*local_58 + 0xa0))(local_58,0);
      }
      *(longlong **)(param_1 + 0x10) = local_58;
      *(undefined4 *)(param_1 + 4) = 0;
    }
  }
  else if (iVar5 == 3) {
    local_50 = (uint)*(ushort *)(param_1 + 0x3c) + (uint)*(ushort *)(param_1 + 0x38);
    local_4c = (uint)*(ushort *)(param_1 + 0x3e) + (uint)*(ushort *)(param_1 + 0x3a);
    local_58 = (longlong *)
               (ulonglong)CONCAT24(*(ushort *)(param_1 + 0x3a),(uint)*(ushort *)(param_1 + 0x38));
    plVar3 = *(longlong **)(param_1 + 0x10);
    local_88 = 0;
    iVar6 = (**(code **)(*plVar3 + 0x98))(plVar3,0,local_48,&local_58);
    iVar5 = local_88;
    if (iVar6 == 0) {
      puVar8 = *(ushort **)(param_1 + 0x48);
      puVar1 = puVar8 + (longlong)*(int *)(param_1 + 0x40) * 4;
      uVar4 = (ulonglong)local_58;
      local_88 = local_48[0];
      for (; local_58 = (longlong *)uVar4, puVar8 != puVar1; puVar8 = puVar8 + 4) {
        local_58._4_4_ = (int)(uVar4 >> 0x20);
        iVar6 = (uint)puVar8[1] - local_58._4_4_;
        local_58._0_4_ = (int)uVar4;
        iVar5 = (uint)*puVar8 - (int)local_58;
        local_78 = (uint)puVar8[3];
        local_80 = (uint)puVar8[2];
        local_48[0] = local_88;
        FUN_1802d0220(*(undefined1 *)(param_1 + 0x56),
                      (longlong)
                      (int)(((uint)puVar8[1] * *(int *)(param_1 + 0x1c) + (uint)*puVar8) *
                           *(int *)(param_1 + 0x24)) + *(longlong *)(param_1 + 0x28),
                      *(int *)(param_1 + 0x1c) * 4,
                      local_40 +
                      ((longlong)(iVar6 * ((int)(local_88 + (local_88 >> 0x1f & 3U)) >> 2)) +
                      (longlong)iVar5) * 4);
        iVar5 = local_88;
        uVar4 = (ulonglong)local_58;
        local_88 = local_48[0];
      }
    }
    local_88 = iVar5;
    (**(code **)(*plVar3 + 0xa0))(plVar3,0);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else if (iVar5 == 4) {
    if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 1;
    if ((*(char *)(param_1 + 0x57) == '\0') && (*(longlong *)(param_1 + 0x28) != 0)) {
      *(undefined4 *)(param_1 + 4) = 2;
    }
  }
  return;
}


