// 0x1802b6ae0  FUN_1802b6ae0
// size=244 thunk=false
// signature: undefined FUN_1802b6ae0()
// status: ok


void FUN_1802b6ae0(void)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  *(undefined4 *)(*(longlong *)(lVar2 + 0x1228) + 0x10) = *(undefined4 *)(lVar2 + 0x2630);
  *(undefined4 *)(*(longlong *)(lVar2 + 0x1230) + 0x40) = *(undefined4 *)(lVar2 + 0x2608);
  *(undefined4 *)(*(longlong *)(lVar2 + 0x1230) + 0x10) = *(undefined4 *)(lVar2 + 0x25d8);
  lVar3 = *(longlong *)(lVar2 + 0x1230);
  uVar1 = *(undefined4 *)(lVar2 + 0x25e8);
  *(undefined4 *)(lVar2 + 0x25e8) = *(undefined4 *)(lVar3 + 0x20);
  *(undefined4 *)(lVar3 + 0x20) = uVar1;
  uVar1 = *(undefined4 *)(lVar2 + 0x25ec);
  *(undefined4 *)(lVar2 + 0x25ec) = *(undefined4 *)(lVar3 + 0x24);
  *(undefined4 *)(lVar3 + 0x24) = uVar1;
  uVar4 = *(undefined8 *)(lVar2 + 0x25f0);
  *(undefined8 *)(lVar2 + 0x25f0) = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
  puVar5 = *(undefined4 **)(lVar2 + 0x1230);
  uVar1 = *(undefined4 *)(lVar2 + 0x25c8);
  *(undefined4 *)(lVar2 + 0x25c8) = *puVar5;
  *puVar5 = uVar1;
  uVar1 = *(undefined4 *)(lVar2 + 0x25cc);
  *(undefined4 *)(lVar2 + 0x25cc) = puVar5[1];
  puVar5[1] = uVar1;
  uVar4 = *(undefined8 *)(lVar2 + 0x25d0);
  *(undefined8 *)(lVar2 + 0x25d0) = *(undefined8 *)(puVar5 + 2);
  *(undefined8 *)(puVar5 + 2) = uVar4;
  return;
}


