// 18026a810  FUN_18026a810
// signature: undefined FUN_18026a810()
// status: ok


void FUN_18026a810(int param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  int local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar3 + 0xec0);
  puVar1 = (undefined4 *)(lVar3 + ((longlong)param_1 + 0xdb) * 0x10);
  local_44 = *puVar1;
  uStack_40 = puVar1[1];
  uStack_3c = puVar1[2];
  uStack_38 = puVar1[3];
  local_48 = param_1;
  FUN_18028a220(lVar3 + 0x1fc8,&local_48);
  if (*(int *)(lVar3 + 0x1fc4) != param_1) {
    uVar4 = param_2[1];
    puVar2 = (undefined8 *)(lVar3 + ((longlong)param_1 + 0xdb) * 0x10);
    *puVar2 = *param_2;
    puVar2[1] = uVar4;
  }
  return;
}


