// 0x1800ef610  FUN_1800ef610
// size=333 thunk=false
// signature: undefined FUN_1800ef610()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800ef610(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  ulonglong *puVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_58;
  float local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38 [3];
  
  local_38[0] = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  if (param_1 != 0) {
    local_40 = 0;
    puVar4 = (ulonglong *)&local_40;
    local_3c = 2;
    do {
      plVar2 = (longlong *)FUN_1800ebf80((int)*puVar4);
      if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
        puVar3 = (undefined1 *)(**(code **)(*plVar2 + 0x158))(plVar2,1);
        local_80 = &DAT_18033e5ea;
        if (puVar3 != (undefined1 *)0x0) {
          local_80 = puVar3;
        }
        lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if (*(char *)(lVar1 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        local_58 = 0;
        local_68 = 0;
        local_70 = 0;
        local_78 = 0;
        local_88 = DAT_180381384;
        lVar1 = *(longlong *)(lVar1 + 0xec0);
        FUN_18029e350(&local_48,*(undefined8 *)(lVar1 + 0x1228),*(undefined4 *)(lVar1 + 0x1238),
                      DAT_180381308);
        (**(code **)(*plVar2 + 0xf0))(plVar2,(double)(int)(local_48 + DAT_180380ba8));
        (**(code **)(*plVar2 + 0xf0))(plVar2,(double)local_44);
        return 2;
      }
      puVar4 = (ulonglong *)((longlong)puVar4 + 4);
    } while (puVar4 != local_38);
  }
  return 0;
}


