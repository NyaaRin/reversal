// 0x1802b6990  FUN_1802b6990
// size=322 thunk=false
// signature: undefined FUN_1802b6990()
// status: ok


void FUN_1802b6990(void)

{
  uint *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar3 + 0xec0);
  lVar7 = FUN_18029d9a0(*(undefined8 *)(lVar3 + 0x1230),0x2a);
  *(undefined4 *)(lVar3 + 0x2630) = *(undefined4 *)(*(longlong *)(lVar3 + 0x1228) + 0x10);
  *(undefined4 *)(lVar3 + 0x2608) = *(undefined4 *)(*(longlong *)(lVar3 + 0x1230) + 0x40);
  *(undefined4 *)(lVar3 + 0x25d8) = *(undefined4 *)(*(longlong *)(lVar3 + 0x1230) + 0x10);
  lVar4 = *(longlong *)(lVar3 + 0x1230);
  uVar2 = *(undefined4 *)(lVar4 + 0x20);
  *(undefined4 *)(lVar4 + 0x20) = *(undefined4 *)(lVar3 + 0x25e8);
  *(undefined4 *)(lVar3 + 0x25e8) = uVar2;
  uVar2 = *(undefined4 *)(lVar4 + 0x24);
  *(undefined4 *)(lVar4 + 0x24) = *(undefined4 *)(lVar3 + 0x25ec);
  *(undefined4 *)(lVar3 + 0x25ec) = uVar2;
  uVar5 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(lVar3 + 0x25f0);
  *(undefined8 *)(lVar3 + 0x25f0) = uVar5;
  puVar6 = *(undefined4 **)(lVar3 + 0x1230);
  uVar2 = *puVar6;
  *puVar6 = *(undefined4 *)(lVar3 + 0x25c8);
  *(undefined4 *)(lVar3 + 0x25c8) = uVar2;
  uVar2 = puVar6[1];
  puVar6[1] = *(undefined4 *)(lVar3 + 0x25cc);
  *(undefined4 *)(lVar3 + 0x25cc) = uVar2;
  uVar5 = *(undefined8 *)(puVar6 + 2);
  *(undefined8 *)(puVar6 + 2) = *(undefined8 *)(lVar3 + 0x25d0);
  *(undefined8 *)(lVar3 + 0x25d0) = uVar5;
  puVar1 = (uint *)(*(longlong *)(lVar3 + 0x1228) + 0x10);
  *puVar1 = *puVar1 | 4;
  *(int *)(*(longlong *)(lVar3 + 0x1230) + 0x40) =
       (int)((lVar7 - *(longlong *)(*(longlong *)(lVar3 + 0x1230) + 0x38)) / 0x2c);
  *(undefined4 *)(*(longlong *)(lVar3 + 0x1230) + 0x10) = *(undefined4 *)(lVar7 + 4);
  return;
}


