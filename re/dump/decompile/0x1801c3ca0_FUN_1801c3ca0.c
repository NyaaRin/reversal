// 0x1801c3ca0  FUN_1801c3ca0
// size=580 thunk=false
// signature: undefined FUN_1801c3ca0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801c3ca0(undefined4 param_1)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  char *pcVar7;
  size_t sVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  char *_Src;
  undefined1 auStack_b8 [32];
  ulonglong *local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  local_58 = 0x93fd561a96ab0c67;
  local_50 = 0xf50e5e909d50b4e9;
  plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_78,&local_58);
  plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_68,&local_50);
  pcVar7 = (char *)FUN_1802028c0(*plVar6 + 0x28);
  if (DAT_180423ae8 == '\0') {
    _Src = pcVar7;
    if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
      _Src = *(char **)pcVar7;
    }
    strncpy_s(&DAT_180425920,0xc0,_Src,0xffffffffffffffff);
  }
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  local_80 = 0;
  local_88 = 0;
  local_90 = 0x40;
  local_58 = 0;
  lVar4 = *(longlong *)(lVar3 + 0xec0);
  puVar1 = (uint *)(lVar4 + 0x1ec0);
  *puVar1 = *puVar1 | 1;
  *(undefined4 *)(lVar4 + 0x1ed8) = param_1;
  local_98 = &local_58;
  cVar5 = FUN_1802b74e0("##chams_custom_path","models/shiny",&DAT_180425920,0xc0);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  iVar2 = *(int *)(*(longlong *)(lVar3 + 0xec0) + 0x1594);
  if (iVar2 == 0) {
    DAT_180423ae8 = false;
  }
  else {
    DAT_180423ae8 = iVar2 == *(int *)(*(longlong *)(lVar3 + 0xec0) + 0x1ef8);
  }
  if (cVar5 == '\0') {
    if (*(char *)(lVar3 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = *(longlong *)(lVar3 + 0xec0);
    cVar5 = FUN_180272ea0();
    if ((cVar5 == '\0') || (*(char *)(lVar3 + 0x15cc) == '\0')) goto LAB_1801c3e49;
  }
  sVar8 = strlen(&DAT_180425920);
  FUN_180212700(pcVar7,&DAT_180425920,sVar8);
LAB_1801c3e49:
  cVar5 = FUN_18026ee60(0);
  if (cVar5 != '\0') {
    FUN_180280d00(
                 "Material path as the engine sees it: no \"materials/\" prefix, no \".vmt\".\nMust be a MODEL material (VertexLitGeneric / UnlitGeneric / Refract).\nWorld materials (LightmappedGeneric, dev/ grids) render black on players.\nEnter to apply. Unknown path or empty = Flat."
                 );
  }
  if (*(longlong *)(pcVar7 + 0x10) == 0) {
    local_58 = CONCAT44(local_58._4_4_,4);
    puVar10 = &local_50;
    local_50 = local_50 & 0xffffffff00000000;
    if (-1 < DAT_1803fb24c) {
      puVar10 = (ulonglong *)&DAT_1803fb24c;
    }
    puVar9 = &local_58;
    if (DAT_1803fb24c < 5) {
      puVar9 = puVar10;
    }
    DAT_1803fb24c = (int)*puVar9;
    FUN_1802aabb0(&DAT_1803dca28 + (longlong)DAT_1803fb24c * 200,"Empty - drawing Flat.");
  }
  return;
}


