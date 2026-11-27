// 0x1802af100  FUN_1802af100
// size=339 thunk=false
// signature: undefined FUN_1802af100()
// status: ok


char FUN_1802af100(void)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  char *pcVar5;
  char cVar6;
  char cVar7;
  char *pcVar8;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar2 + 0xec0);
  cVar6 = FUN_1802aeb80();
  if ((cVar6 != '\0') && (pcVar4 = *(code **)(lVar3 + 0xc18), pcVar4 != (code *)0x0)) {
    (*pcVar4)(lVar3,"https://github.com/ocornut/imgui/blob/master/docs/FAQ.md#qa-usage");
  }
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  pcVar5 = *(char **)(*(longlong *)(lVar2 + 0xec0) + 0x2848);
  pcVar8 = "*Missing Text*";
  if (pcVar5 != (char *)0x0) {
    pcVar8 = pcVar5;
  }
  FUN_180280d50(pcVar8,"https://github.com/ocornut/imgui/blob/master/docs/FAQ.md#qa-usage");
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (*(char *)(*(longlong *)(*(longlong *)(lVar2 + 0xec0) + 0x1520) + 0xd1) == '\0') {
    uVar1 = *(undefined4 *)(*(longlong *)(lVar2 + 0xec0) + 0x1ef8);
    cVar7 = FUN_1802818e0(0,uVar1);
    if (cVar7 != '\0') {
      FUN_180281080(uVar1,0);
    }
    cVar7 = FUN_180281660(uVar1,0x141);
    if (cVar7 != '\0') {
      if (*(char *)(lVar2 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      pcVar5 = *(char **)(*(longlong *)(lVar2 + 0xec0) + 0x2850);
      pcVar8 = "*Missing Text*";
      if (pcVar5 != (char *)0x0) {
        pcVar8 = pcVar5;
      }
      cVar7 = FUN_1802c42f0(pcVar8,pcVar5,0,0,1);
      if (cVar7 != '\0') {
        if (*(char *)(lVar2 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        pcVar4 = *(code **)(*(longlong *)(lVar2 + 0xec0) + 0xc08);
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(*(longlong *)(lVar2 + 0xec0),
                    "https://github.com/ocornut/imgui/blob/master/docs/FAQ.md#qa-usage");
        }
      }
      FUN_180281800();
    }
  }
  return cVar6;
}


