// 0x1802d0770  FUN_1802d0770
// size=475 thunk=false
// signature: undefined FUN_1802d0770()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1802d0770(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  char *pcVar4;
  longlong *plVar5;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined1 local_78 [8];
  undefined1 *local_70;
  longlong *local_68;
  longlong *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pcVar4 = (char *)(lVar1 + 0x10);
  if (*pcVar4 == '\0') {
    __dyn_tls_on_demand_init();
  }
  plVar5 = (longlong *)(lVar1 + 0xec0);
  lVar1 = *plVar5;
  plVar3 = (longlong *)FUN_18026f580(0x28);
  local_70 = local_78;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[2] = 0;
    plVar3[3] = 0;
    plVar3[4] = 0;
    *(undefined4 *)(plVar3 + 3) = 5000;
    *(undefined4 *)((longlong)plVar3 + 0x1c) = 10000;
  }
  *(longlong **)(lVar1 + 0xc0) = plVar3;
  *(char **)(lVar1 + 0xb0) = "imgui_impl_dx9";
  *(uint *)(lVar1 + 0x2c) = *(uint *)(lVar1 + 0x2c) | 0x18;
  local_68 = plVar3;
  local_60 = plVar3;
  if (*pcVar4 == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *plVar5;
  *(undefined4 *)(lVar1 + 0xc40) = 0x1000;
  *(undefined4 *)(lVar1 + 0xc3c) = 0x1000;
  *(code **)(lVar1 + 0xc50) = vfunc_shared_18001e3e0;
  *(code **)(lVar1 + 0xc58) = FUN_1802cfa80;
  *(code **)(lVar1 + 0xc60) = FUN_1802cfb20;
  *plVar3 = (longlong)param_1;
  (**(code **)(*param_1 + 8))(param_1);
  plVar5 = (longlong *)*plVar3;
  local_68 = (longlong *)0x0;
  iVar2 = (**(code **)(*plVar5 + 0x30))(plVar5,&local_68);
  if (iVar2 == 0) {
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    local_60 = (longlong *)0x0;
    uStack_58 = 0;
    iVar2 = (**(code **)(*plVar5 + 0x48))(plVar5,&local_50);
    if ((iVar2 == 0) && (iVar2 = (**(code **)(*plVar5 + 0x40))(plVar5,0,&local_60), iVar2 == 0)) {
      local_88 = 0x20;
      local_90 = 3;
      local_98 = 0xa0200;
      iVar2 = (**(code **)(*local_68 + 0x50))
                        (local_68,local_50 & 0xffffffff,local_50._4_4_,uStack_58._4_4_);
      (**(code **)(*local_68 + 0x10))();
      *(bool *)(plVar3 + 4) = iVar2 == 0;
      return 1;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  *(undefined1 *)(plVar3 + 4) = 0;
  return 1;
}


