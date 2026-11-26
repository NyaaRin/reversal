// 0x180272030  FUN_180272030
// size=1244 thunk=false
// signature: undefined FUN_180272030()
// status: ok


void FUN_180272030(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  bool bVar8;
  char cVar9;
  char cVar10;
  void *_Dst;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  
  lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar14 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar5 = *(longlong *)(lVar14 + 0xec0);
  if (*(int *)(lVar5 + 8) == *(int *)(lVar5 + 4)) {
    return;
  }
  if (*(char *)(lVar5 + 1) == '\0') {
    FUN_18027e9c0("Forgot to call ImGui::NewFrame()?");
    return;
  }
  lVar12 = *(longlong *)(lVar5 + 0x27f0);
  lVar11 = (longlong)*(int *)(lVar5 + 0x27e8) * 0x20 + lVar12;
  for (; lVar12 != lVar11; lVar12 = lVar12 + 0x20) {
    if (*(int *)(lVar12 + 4) == 2) {
      (**(code **)(lVar12 + 0x10))(lVar5,lVar12);
    }
  }
  if (*(char *)(lVar5 + 0x9c) != '\0') {
    FUN_18027e550(lVar5 + 0x28c0);
  }
  if (*(char *)(lVar14 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FUN_18027bf60();
  FUN_18027ec10();
  plVar1 = (longlong *)(lVar5 + 0x2768);
  if ((*(longlong *)(lVar5 + 0xc28) != 0) &&
     (((*plVar1 != *(longlong *)(lVar5 + 0x277c) ||
       (*(longlong *)(lVar5 + 0x2770) != *(longlong *)(lVar5 + 0x2784))) ||
      (*(int *)(lVar5 + 0x2778) != *(int *)(lVar5 + 0x278c))))) {
    if (*(char *)(lVar14 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    puVar6 = (undefined4 *)**(undefined8 **)(*(longlong *)(lVar14 + 0xec0) + 0x2060);
    if ((*(byte *)(lVar5 + 0x28e4) & 0x80) != 0) {
      FUN_180289170("[io] Calling Platform_SetImeDataFn(): WantVisible: %d, InputPos (%.2f,%.2f) for Viewport 0x%08X\n"
                    ,*(undefined1 *)plVar1,(double)*(float *)(lVar5 + 0x276c),
                    (double)*(float *)(lVar5 + 0x2770),*puVar6);
    }
    (**(code **)(lVar5 + 0xc28))(lVar5,puVar6,plVar1);
  }
  *(undefined1 *)(lVar5 + 2) = 0;
  *(uint *)(lVar5 + 0x2ae4) = (uint)(*(char *)(lVar5 + 0x2769) != '\0');
  lVar12 = *(longlong *)(lVar5 + 0x1520);
  if (((lVar12 != 0) && (*(char *)(lVar12 + 0xd5) != '\0')) && (*(char *)(lVar12 + 0xce) == '\0')) {
    *(undefined1 *)(lVar12 + 0xcc) = 0;
    if ((*(longlong *)(lVar5 + 0x2070) != 0) &&
       (*(longlong *)(*(longlong *)(lVar5 + 0x2070) + 0x3c0) == *(longlong *)(lVar5 + 0x1520))) {
      FUN_1802827b0(0,0);
    }
  }
  FUN_180278d40();
  cVar9 = *(char *)(lVar14 + 0x10);
  if (cVar9 == '\0') {
    __dyn_tls_on_demand_init();
    cVar9 = *(char *)(lVar14 + 0x10);
  }
  lVar12 = *(longlong *)(lVar14 + 0xec0);
  if (*(longlong *)(lVar12 + 0x2258) != 0) {
    FUN_180287250();
    cVar9 = *(char *)(lVar14 + 0x10);
  }
  if (*(longlong *)(lVar12 + 0x2070) != 0) {
    if (cVar9 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar11 = *(longlong *)(lVar14 + 0xec0);
    if ((((*(char *)(lVar11 + 0x2111) != '\0') && (*(int *)(lVar11 + 0x2160) == 0)) &&
        (*(int *)(lVar11 + 0x21d0) == 0)) &&
       (((*(uint *)(lVar12 + 0x2114) & 0xf) != 0 && (-1 < (char)*(uint *)(lVar12 + 0x2114))))) {
      FUN_1802863b0();
    }
  }
  if (*(char *)(lVar5 + 0x2298) == '\0') goto LAB_180272321;
  cVar9 = *(char *)(lVar5 + 0x22e2);
  if (*(int *)(lVar5 + 0x22a0) + 1 < *(int *)(lVar5 + 4)) {
    if ((*(byte *)(lVar5 + 0x229c) & 0x20) == 0) {
      iVar3 = *(int *)(lVar5 + 0x22a4);
      if (iVar3 != -1) {
        if (*(char *)(lVar14 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        if ((*(char *)((longlong)iVar3 + 0x108 + *(longlong *)(lVar14 + 0xec0)) != '\0') &&
           (cVar10 = FUN_18027deb0(iVar3 + 0x290,0), cVar10 != '\0')) goto LAB_1802722d8;
      }
    }
    bVar8 = true;
  }
  else {
LAB_1802722d8:
    bVar8 = false;
  }
  if ((cVar9 != '\0') || (bVar8)) {
    FUN_180287530();
  }
  if (((*(char *)(lVar5 + 0x2298) != '\0') && (*(int *)(lVar5 + 0x22a0) + 1 < *(int *)(lVar5 + 4)))
     && ((*(byte *)(lVar5 + 0x229c) & 1) == 0)) {
    *(undefined1 *)(lVar5 + 0x2299) = 1;
    FUN_180280d00(&DAT_18034f96c);
    *(undefined1 *)(lVar5 + 0x2299) = 0;
  }
LAB_180272321:
  *(undefined4 *)(lVar5 + 8) = *(undefined4 *)(lVar5 + 4);
  *(undefined1 *)(lVar5 + 1) = 0;
  if (*(char *)(lVar14 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar14 = *(longlong *)(lVar14 + 0xec0);
  lVar12 = (longlong)*(int *)(lVar14 + 0x1fe8);
  if (*(int *)(lVar14 + 0x1fe8) < 1) {
    FUN_18027e9c0("Calling PopFont() too many times!");
  }
  else {
    lVar11 = *(longlong *)(lVar14 + 0x1ff0);
    FUN_18027a5f0(*(undefined8 *)(lVar11 + -0x10 + lVar12 * 0x10),
                  *(undefined4 *)(lVar11 + -8 + lVar12 * 0x10),
                  *(undefined4 *)(lVar11 + -4 + lVar12 * 0x10));
    *(int *)(lVar14 + 0x1fe8) = *(int *)(lVar14 + 0x1fe8) + -1;
  }
  FUN_18026f9b0();
  piVar2 = (int *)(lVar5 + 0x14e0);
  FUN_18028a390(piVar2);
  iVar3 = *(int *)(lVar5 + 0x14c0);
  if (*(int *)(lVar5 + 0x14e4) < iVar3) {
    _Dst = (void *)FUN_18026f580((longlong)iVar3 << 3);
    if (*(void **)(lVar5 + 0x14e8) != (void *)0x0) {
      memcpy(_Dst,*(void **)(lVar5 + 0x14e8),(longlong)*piVar2 << 3);
      FUN_18026f680(*(undefined8 *)(lVar5 + 0x14e8));
    }
    *(void **)(lVar5 + 0x14e8) = _Dst;
    *(int *)(lVar5 + 0x14e4) = iVar3;
  }
  plVar13 = *(longlong **)(lVar5 + 0x14c8);
  plVar1 = plVar13 + *(int *)(lVar5 + 0x14c0);
  for (; plVar13 != plVar1; plVar13 = plVar13 + 1) {
    if ((*(char *)(*plVar13 + 0xcc) == '\0') || ((*(uint *)(*plVar13 + 0x14) & 0x1000000) == 0)) {
      FUN_1802715c0(piVar2);
    }
  }
  iVar3 = *piVar2;
  *piVar2 = *(int *)(lVar5 + 0x14c0);
  *(int *)(lVar5 + 0x14c0) = iVar3;
  uVar4 = *(undefined4 *)(lVar5 + 0x14e4);
  *(undefined4 *)(lVar5 + 0x14e4) = *(undefined4 *)(lVar5 + 0x14c4);
  *(undefined4 *)(lVar5 + 0x14c4) = uVar4;
  uVar7 = *(undefined8 *)(lVar5 + 0x14e8);
  *(undefined8 *)(lVar5 + 0x14e8) = *(undefined8 *)(lVar5 + 0x14c8);
  *(undefined4 *)(lVar5 + 0xe8) = *(undefined4 *)(lVar5 + 0x1510);
  *(undefined8 *)(lVar5 + 0x14c8) = uVar7;
  FUN_180279fa0();
  plVar13 = *(longlong **)(lVar5 + 0x1220);
  plVar1 = plVar13 + *(int *)(lVar5 + 0x1218);
  for (; plVar13 != plVar1; plVar13 = plVar13 + 1) {
    *(undefined1 *)(*plVar13 + 0x50) = 0;
  }
  *(undefined8 *)(lVar5 + 0xad8) = *(undefined8 *)(lVar5 + 0x100);
  *(undefined1 *)(lVar5 + 0xbcc) = 0;
  *(undefined8 *)(lVar5 + 0x110) = 0;
  FUN_180260a20(lVar5 + 0xbd0,0);
  lVar14 = *(longlong *)(lVar5 + 0x27f0);
  lVar12 = (longlong)*(int *)(lVar5 + 0x27e8) * 0x20 + lVar14;
  for (; lVar14 != lVar12; lVar14 = lVar14 + 0x20) {
    if (*(int *)(lVar14 + 4) == 3) {
      (**(code **)(lVar14 + 0x10))(lVar5,lVar14);
    }
  }
  return;
}


