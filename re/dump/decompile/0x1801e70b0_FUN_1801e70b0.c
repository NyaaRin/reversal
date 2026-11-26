// 0x1801e70b0  FUN_1801e70b0
// size=2460 thunk=false
// signature: undefined FUN_1801e70b0()
// status: ok


void FUN_1801e70b0(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  
  if (DAT_1803fcc08 != DAT_1803fcc10) {
    FUN_180214c90();
    DAT_1803fcc10 = DAT_1803fcc08;
  }
  DAT_1803facfd = 1;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar2 + 0xec0);
  *(uint *)(lVar3 + 0x1f48) = *(uint *)(lVar3 + 0x1f48) | 1;
  *(undefined4 *)(lVar3 + 0x1f58) = 0xc69c4000;
  *(undefined4 *)(lVar3 + 0x1f5c) = 0xc69c4000;
  *(undefined8 *)(lVar3 + 0x1f60) = 0;
  *(undefined4 *)(lVar3 + 0x1f4c) = 1;
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar4 = DAT_180380bb0;
  lVar3 = *(longlong *)(lVar2 + 0xec0);
  *(uint *)(lVar3 + 0x1f48) = *(uint *)(lVar3 + 0x1f48) | 2;
  *(undefined4 *)(lVar3 + 0x1f68) = 0x441b0000;
  *(undefined4 *)(lVar3 + 0x1f6c) = 0x45228000;
  *(undefined4 *)(lVar3 + 0x1f50) = 1;
  FUN_18026a940(0,uVar4);
  cVar6 = FUN_180276630("##search_probe",0,0x3330f);
  if (cVar6 != '\0') {
    PTR_DAT_1803dc910 = s_Combat___Aimbot_180378f60;
    DAT_1803fcbe8 = 0;
    DAT_1803dc8c8 = 0xffffffff;
    PTR_DAT_1803dc8c0 = &DAT_18033e5ea;
    FUN_18027abf0();
    FUN_1801bb810();
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0xec0) + 0x1520);
    iVar1 = *(int *)(lVar3 + 0x108);
    if (iVar1 < 2) {
      FUN_18027e9c0("Calling PopID() too many times!");
    }
    else {
      *(int *)(lVar3 + 0x108) = iVar1 + -1;
    }
    DAT_1803fcbe8 = 7;
    PTR_DAT_1803dc910 = s_Combat___HVH_180378f70;
    DAT_1803dc8c8 = 0xffffffff;
    PTR_DAT_1803dc8c0 = &DAT_18033e5ea;
    FUN_18027abf0();
    FUN_1801bfd20();
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0xec0) + 0x1520);
    iVar1 = *(int *)(lVar3 + 0x108);
    if (iVar1 < 2) {
      FUN_18027e9c0("Calling PopID() too many times!");
    }
    else {
      *(int *)(lVar3 + 0x108) = iVar1 + -1;
    }
    DAT_1803fcbe8 = 1;
    PTR_DAT_1803dc910 = s_Visual___Players_180378f80;
    DAT_1803dc8c8 = 0;
    PTR_DAT_1803dc8c0 = &DAT_18033e5ea;
    FUN_18027abf0();
    FUN_1801c23c0();
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0xec0) + 0x1520);
    iVar1 = *(int *)(lVar3 + 0x108);
    if (iVar1 < 2) {
      FUN_18027e9c0("Calling PopID() too many times!");
    }
    else {
      *(int *)(lVar3 + 0x108) = iVar1 + -1;
    }
    DAT_1803fcbe8 = 1;
    PTR_DAT_1803dc910 = s_Visual___World_180378f98;
    DAT_1803dc8c8 = 1;
    PTR_DAT_1803dc8c0 = &DAT_18033e5ea;
    FUN_18027abf0();
    FUN_1801c3ef0();
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0xec0) + 0x1520);
    iVar1 = *(int *)(lVar3 + 0x108);
    if (iVar1 < 2) {
      FUN_18027e9c0("Calling PopID() too many times!");
    }
    else {
      *(int *)(lVar3 + 0x108) = iVar1 + -1;
    }
    DAT_1803fcbe8 = 4;
    PTR_DAT_1803dc910 = s_Visual___Camera_180378fa8;
    DAT_1803dc8c8 = 0xffffffff;
    PTR_DAT_1803dc8c0 = &DAT_18033e5ea;
    FUN_18027abf0();
    FUN_1801e2220();
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0xec0) + 0x1520);
    iVar1 = *(int *)(lVar3 + 0x108);
    if (iVar1 < 2) {
      FUN_18027e9c0("Calling PopID() too many times!");
    }
    else {
      *(int *)(lVar3 + 0x108) = iVar1 + -1;
    }
    DAT_1803fcbe8 = 2;
    PTR_DAT_1803dc910 = s_Utility_180378fb8;
    DAT_1803dc8c8 = 0xffffffff;
    PTR_DAT_1803dc8c0 = &DAT_18033e5ea;
    FUN_18027abf0();
    FUN_1801d5ef0();
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0xec0) + 0x1520);
    iVar1 = *(int *)(lVar3 + 0x108);
    if (iVar1 < 2) {
      FUN_18027e9c0("Calling PopID() too many times!");
    }
    else {
      *(int *)(lVar3 + 0x108) = iVar1 + -1;
    }
    uVar4 = DAT_1803fa55c;
    PTR_DAT_1803dc910 = s_Logs___Damage_180378fc0;
    DAT_1803fa55c = 0;
    DAT_1803fcbe8 = 3;
    DAT_1803dc8c8 = 0;
    PTR_DAT_1803dc8c0 = &DAT_18033e5ea;
    FUN_18027abf0();
    FUN_1801df8b0();
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0xec0) + 0x1520);
    iVar1 = *(int *)(lVar3 + 0x108);
    if (iVar1 < 2) {
      FUN_18027e9c0("Calling PopID() too many times!");
    }
    else {
      *(int *)(lVar3 + 0x108) = iVar1 + -1;
    }
    DAT_1803fa55c = 1;
    PTR_DAT_1803dc910 = s_Logs___Network_180378fd0;
    DAT_1803fcbe8 = 3;
    DAT_1803dc8c8 = 1;
    PTR_DAT_1803dc8c0 = &DAT_18033e5ea;
    FUN_18027abf0();
    FUN_1801df8b0();
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0xec0) + 0x1520);
    iVar1 = *(int *)(lVar3 + 0x108);
    if (iVar1 < 2) {
      FUN_18027e9c0("Calling PopID() too many times!");
    }
    else {
      *(int *)(lVar3 + 0x108) = iVar1 + -1;
    }
    uVar5 = DAT_1803fa548;
    DAT_1803fa548 = 0;
    PTR_DAT_1803dc910 = s_Network___Entities_180378fe0;
    DAT_1803fcbe8 = 6;
    DAT_1803dc8c8 = 0;
    PTR_DAT_1803dc8c0 = &DAT_18033e5ea;
    DAT_1803fa55c = uVar4;
    FUN_18027abf0();
    if (DAT_1803fa548 == 1) {
      FUN_1801cb050();
    }
    else if (DAT_1803fa548 == 2) {
      FUN_1801cd9e0();
    }
    else if (DAT_1803fa548 == 3) {
      FUN_1801d0270();
    }
    else if (DAT_1803fa548 == 4) {
      FUN_1801cee10();
    }
    else if (DAT_1803fa548 == 6) {
      FUN_1801d3b90();
    }
    else {
      FUN_1801c8950();
    }
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0xec0) + 0x1520);
    iVar1 = *(int *)(lVar3 + 0x108);
    if (iVar1 < 2) {
      FUN_18027e9c0("Calling PopID() too many times!");
    }
    else {
      *(int *)(lVar3 + 0x108) = iVar1 + -1;
    }
    DAT_1803fa548 = 1;
    PTR_DAT_1803dc910 = s_Network___Players_180378ff8;
    DAT_1803fcbe8 = 6;
    DAT_1803dc8c8 = 1;
    PTR_DAT_1803dc8c0 = &DAT_18033e5ea;
    FUN_18027abf0();
    if (DAT_1803fa548 == 1) {
      FUN_1801cb050();
    }
    else if (DAT_1803fa548 == 2) {
      FUN_1801cd9e0();
    }
    else if (DAT_1803fa548 == 3) {
      FUN_1801d0270();
    }
    else if (DAT_1803fa548 == 4) {
      FUN_1801cee10();
    }
    else if (DAT_1803fa548 == 6) {
      FUN_1801d3b90();
    }
    else {
      FUN_1801c8950();
    }
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0xec0) + 0x1520);
    iVar1 = *(int *)(lVar3 + 0x108);
    if (iVar1 < 2) {
      FUN_18027e9c0("Calling PopID() too many times!");
    }
    else {
      *(int *)(lVar3 + 0x108) = iVar1 + -1;
    }
    DAT_1803fa548 = 2;
    PTR_DAT_1803dc910 = s_Network___Teams_180379010;
    DAT_1803fcbe8 = 6;
    DAT_1803dc8c8 = 2;
    PTR_DAT_1803dc8c0 = &DAT_18033e5ea;
    FUN_18027abf0();
    if (DAT_1803fa548 == 1) {
      FUN_1801cb050();
    }
    else if (DAT_1803fa548 == 2) {
      FUN_1801cd9e0();
    }
    else if (DAT_1803fa548 == 3) {
      FUN_1801d0270();
    }
    else if (DAT_1803fa548 == 4) {
      FUN_1801cee10();
    }
    else if (DAT_1803fa548 == 6) {
      FUN_1801d3b90();
    }
    else {
      FUN_1801c8950();
    }
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0xec0) + 0x1520);
    iVar1 = *(int *)(lVar3 + 0x108);
    if (iVar1 < 2) {
      FUN_18027e9c0("Calling PopID() too many times!");
    }
    else {
      *(int *)(lVar3 + 0x108) = iVar1 + -1;
    }
    DAT_1803fa548 = 3;
    PTR_DAT_1803dc910 = s_Network___Netvars_180379020;
    DAT_1803fcbe8 = 6;
    DAT_1803dc8c8 = 3;
    PTR_DAT_1803dc8c0 = &DAT_18033e5ea;
    FUN_18027abf0();
    if (DAT_1803fa548 == 1) {
      FUN_1801cb050();
    }
    else if (DAT_1803fa548 == 2) {
      FUN_1801cd9e0();
    }
    else if (DAT_1803fa548 == 3) {
      FUN_1801d0270();
    }
    else if (DAT_1803fa548 == 4) {
      FUN_1801cee10();
    }
    else if (DAT_1803fa548 == 6) {
      FUN_1801d3b90();
    }
    else {
      FUN_1801c8950();
    }
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0xec0) + 0x1520);
    iVar1 = *(int *)(lVar3 + 0x108);
    if (iVar1 < 2) {
      FUN_18027e9c0("Calling PopID() too many times!");
    }
    else {
      *(int *)(lVar3 + 0x108) = iVar1 + -1;
    }
    DAT_1803fa548 = 4;
    PTR_DAT_1803dc910 = s_Network___Usergroups_180379038;
    DAT_1803fcbe8 = 6;
    DAT_1803dc8c8 = 4;
    PTR_DAT_1803dc8c0 = &DAT_18033e5ea;
    FUN_18027abf0();
    if (DAT_1803fa548 == 1) {
      FUN_1801cb050();
    }
    else if (DAT_1803fa548 == 2) {
      FUN_1801cd9e0();
    }
    else if (DAT_1803fa548 == 3) {
      FUN_1801d0270();
    }
    else if (DAT_1803fa548 == 4) {
      FUN_1801cee10();
    }
    else if (DAT_1803fa548 == 6) {
      FUN_1801d3b90();
    }
    else {
      FUN_1801c8950();
    }
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0xec0) + 0x1520);
    iVar1 = *(int *)(lVar3 + 0x108);
    if (iVar1 < 2) {
      FUN_18027e9c0("Calling PopID() too many times!");
    }
    else {
      *(int *)(lVar3 + 0x108) = iVar1 + -1;
    }
    DAT_1803fa548 = 6;
    PTR_DAT_1803dc910 = s_Network___Steam_180379050;
    DAT_1803fcbe8 = 6;
    DAT_1803dc8c8 = 6;
    PTR_DAT_1803dc8c0 = &DAT_18033e5ea;
    FUN_18027abf0();
    if (DAT_1803fa548 == 1) {
      FUN_1801cb050();
    }
    else if (DAT_1803fa548 == 2) {
      FUN_1801cd9e0();
    }
    else if (DAT_1803fa548 == 3) {
      FUN_1801d0270();
    }
    else if (DAT_1803fa548 == 4) {
      FUN_1801cee10();
    }
    else if (DAT_1803fa548 == 6) {
      FUN_1801d3b90();
    }
    else {
      FUN_1801c8950();
    }
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0xec0) + 0x1520);
    iVar1 = *(int *)(lVar3 + 0x108);
    if (iVar1 < 2) {
      FUN_18027e9c0("Calling PopID() too many times!");
    }
    else {
      *(int *)(lVar3 + 0x108) = iVar1 + -1;
    }
    PTR_DAT_1803dc910 = s_Settings_180379060;
    DAT_1803fcbe8 = 5;
    DAT_1803dc8c8 = 0xffffffff;
    PTR_DAT_1803dc8c0 = &DAT_18033e5ea;
    DAT_1803fa548 = uVar5;
    FUN_18027abf0();
    FUN_1801e3830();
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0xec0) + 0x1520);
    iVar1 = *(int *)(lVar3 + 0x108);
    if (iVar1 < 2) {
      FUN_18027e9c0("Calling PopID() too many times!");
    }
    else {
      *(int *)(lVar3 + 0x108) = iVar1 + -1;
    }
  }
  FUN_180278d40();
  FUN_18026abb0(1);
  PTR_DAT_1803dc8c0 = &DAT_18033e5ea;
  PTR_DAT_1803dc910 = &DAT_18033e5ea;
  DAT_1803facfd = 0;
  if (DAT_1803fcbf0 != DAT_1803fcbf8) {
    DAT_1803fcbf8 = DAT_1803fcbf0;
  }
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (*(longlong *)(lVar2 + 0xec0) != 0) {
    *(undefined4 *)(*(longlong *)(lVar2 + 0xec0) + 0x1f48) = 0;
  }
  return;
}


