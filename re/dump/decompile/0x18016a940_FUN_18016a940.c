// 0x18016a940  FUN_18016a940
// size=331 thunk=false
// signature: undefined FUN_18016a940()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18016a940(undefined8 param_1)

{
  uint *puVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  int *piVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  char *local_28;
  char *local_20;
  char *local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  local_28 = "AABB (collision)";
  local_20 = "Legacy (0.55)";
  local_18 = "Silhouette (hitboxes)";
  local_38 = 0x93fd561a96ab0c67;
  local_30 = 0xf5d2d5e513b25a03;
  plVar5 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_58,&local_38);
  plVar5 = (longlong *)FUN_180241a30(*plVar5 + 0x28,local_48,&local_30);
  piVar6 = (int *)FUN_1802029c0(*plVar5 + 0x28);
  FUN_1802aac00("Box size");
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  local_68 = 3;
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  puVar1 = (uint *)(lVar2 + 0x1ec0);
  *puVar1 = *puVar1 | 1;
  *(undefined4 *)(lVar2 + 0x1ed8) = 0xbf800000;
  FUN_1802b1200(param_1,piVar6);
  iVar4 = *piVar6;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (2 < iVar4) {
    iVar4 = 2;
  }
  *piVar6 = iVar4;
  cVar3 = FUN_18026ee60(0);
  if (cVar3 != '\0') {
    FUN_180280d00(
                 "AABB - the player\'s collision box, axis-aligned, all 8 corners\nprojected, then thinned. Follows crouching and model size.\n\nLegacy - head and feet only, width = 55%% of height.\n\nSilhouette - the model itself: every hitbox corner, measured across\nyour view axis. Tight to the actual model, exact at any angle, and\nnothing about it is a tuned constant. Costs one bone setup per player.\n\nApplies to every player: the whole element layout anchors to this rect."
                 );
  }
  return;
}


