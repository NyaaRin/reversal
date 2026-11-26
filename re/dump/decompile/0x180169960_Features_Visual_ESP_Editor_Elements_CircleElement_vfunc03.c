// 0x180169960  Features_Visual_ESP_Editor_Elements_CircleElement_vfunc03
// size=252 thunk=false
// signature: undefined Features_Visual_ESP_Editor_Elements_CircleElement_vfunc03()
// status: ok


void Features_Visual_ESP_Editor_Elements_CircleElement_vfunc03
               (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  undefined4 uVar4;
  float fVar5;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  float local_34;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_48 = param_3;
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  fVar1 = *(float *)(param_1 + 0x4c);
  fVar2 = *(float *)(*(longlong *)(lVar3 + 0xec0) + 0xc84);
  fVar5 = (float)FUN_1801691d0(param_1);
  local_40 = *(undefined4 *)(param_1 + 0x40);
  local_3c = *(undefined4 *)(param_1 + 0x44);
  local_38 = *(undefined4 *)(param_1 + 0x48);
  local_34 = fVar5 * fVar1 * fVar2;
  uVar4 = FUN_180268ed0(&local_40);
  if (*(char *)(param_1 + 0x54) == '\0') {
    FUN_180295460(param_2,&local_48,*(undefined4 *)(param_1 + 0x58),uVar4,
                  *(undefined4 *)(param_1 + 0x5c),(float)*(int *)(param_1 + 0x50));
  }
  else {
    FUN_180295540(param_2);
  }
  return;
}


