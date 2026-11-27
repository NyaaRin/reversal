// 0x1802a7e20  FUN_1802a7e20
// size=225 thunk=false
// signature: undefined FUN_1802a7e20()
// status: ok


void FUN_1802a7e20(uint param_1)

{
  longlong lVar1;
  uint *puVar2;
  char *pcVar3;
  uint uVar4;
  ulonglong uVar5;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  puVar2 = *(uint **)(*(longlong *)(lVar1 + 0xec0) + 0x2368);
  if ((param_1 == 0xffffffff) && (puVar2[0x1d] != 0xffffffff)) {
    param_1 = puVar2[0x1d];
  }
  if (param_1 == puVar2[0x1b]) {
    param_1 = 0xffffffff;
  }
  if ((puVar2[1] & 7) != 0) {
    uVar5 = 0x23;
    *(short *)((longlong)puVar2 + 0x7a) = (short)puVar2[0x1e];
    *(undefined1 *)((longlong)puVar2 + 0x23e) = 1;
    *(short *)((longlong)puVar2 + 0x226) = (short)param_1;
    pcVar3 = "##ContextMenu";
    uVar4 = ~*puVar2;
    do {
      pcVar3 = pcVar3 + 1;
      if ((((char)uVar5 == '#') && (*pcVar3 == 0x23)) && (pcVar3[1] == 0x23)) {
        pcVar3 = pcVar3 + 2;
        uVar4 = ~*puVar2;
      }
      else {
        uVar4 = uVar4 >> 8 ^ *(uint *)(&DAT_180331380 + (uVar4 & 0xff ^ uVar5) * 4);
      }
      uVar5 = (ulonglong)(byte)*pcVar3;
    } while (*pcVar3 != 0);
    FUN_180281080(~uVar4,0);
  }
  return;
}


