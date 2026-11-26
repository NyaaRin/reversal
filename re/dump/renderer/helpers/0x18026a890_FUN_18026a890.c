// 18026a890  FUN_18026a890
// signature: undefined FUN_18026a890()
// status: ok


void FUN_18026a890(int param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar3 + 0xec0);
  iVar5 = *(int *)(lVar3 + 0x1fc8);
  if (iVar5 < param_1) {
    FUN_18027e9c0("Calling PopStyleColor() too many times!");
    iVar5 = *(int *)(lVar3 + 0x1fc8);
    param_1 = iVar5;
  }
  for (; 0 < param_1; param_1 = param_1 + -1) {
    puVar2 = (undefined8 *)(*(longlong *)(lVar3 + 0x1fd0) + -0x10 + (longlong)iVar5 * 0x14);
    uVar4 = puVar2[1];
    puVar1 = (undefined8 *)
             (lVar3 + ((longlong)
                       *(int *)(*(longlong *)(lVar3 + 0x1fd0) + -0x14 + (longlong)iVar5 * 0x14) +
                      0xdb) * 0x10);
    *puVar1 = *puVar2;
    puVar1[1] = uVar4;
    iVar5 = *(int *)(lVar3 + 0x1fc8) + -1;
    *(int *)(lVar3 + 0x1fc8) = iVar5;
  }
  return;
}


