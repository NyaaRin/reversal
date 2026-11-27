// 0x1800b2c30  FUN_1800b2c30
// size=640 thunk=false
// signature: undefined FUN_1800b2c30()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800b2c30(void)

{
  void *lp;
  uint uVar1;
  BOOL BVar2;
  int iVar3;
  HMODULE lp_00;
  longlong lVar4;
  int *lp_01;
  char *pcVar5;
  undefined8 local_38;
  bool local_28;
  undefined7 uStack_27;
  undefined4 local_20;
  undefined4 uStack_1c;
  uint uStack_18;
  undefined4 uStack_14;
  undefined8 local_10;
  
  if (DAT_180409a2c != '\0') {
    return 1;
  }
  local_28 = false;
  local_38 = (HMODULE)0x0;
  uVar1 = 0;
  lp_00 = GetModuleHandleA("server.dll");
  uStack_18 = uVar1;
  if (((lp_00 != (HMODULE)0x0) && (BVar2 = IsBadReadPtr(lp_00,0x40), BVar2 == 0)) &&
     ((short)lp_00->unused == 0x5a4d)) {
    lp_01 = (int *)((longlong)&lp_00->unused + (longlong)lp_00[0xf].unused);
    BVar2 = IsBadReadPtr(lp_01,0x108);
    if ((BVar2 == 0) && (*lp_01 == 0x4550)) {
      uStack_18 = lp_01[0x14];
      local_28 = 0x1000 < uStack_18;
      local_38 = lp_00;
    }
  }
  local_10 = CONCAT71(uStack_27,local_28);
  local_20 = (undefined4)local_38;
  uStack_1c = local_38._4_4_;
  uStack_14 = 0;
  if (local_28) {
    pcVar5 = ".?AVCHL2MPPlayerAnimState@@";
    lVar4 = FUN_1800b2200(&local_20,".?AVCHL2MPPlayerAnimState@@");
    if (lVar4 == 0) {
      pcVar5 = ".?AVCMultiPlayerAnimState@@";
      lVar4 = FUN_1800b2200(&local_20,".?AVCMultiPlayerAnimState@@");
      if (lVar4 == 0) {
        FUN_180014410("[ANIMPROBE] no animstate vtable found in server.dll\n");
        return 0;
      }
      FUN_180014410(
                   "[ANIMPROBE] WARNING: derived animstate vtable missing, falling back to the base class - counts may be zero\n"
                   );
    }
    lp = *(void **)(lVar4 + 0x20);
    if ((lp == (void *)0x0) || (BVar2 = IsBadReadPtr(lp,0x10), BVar2 != 0)) {
      FUN_180014410("[ANIMPROBE] vtable slot %d is not readable code\n",4);
    }
    else {
      iVar3 = FUN_180242fc0(lp,FUN_1800b2680,&DAT_180409a10);
      if (iVar3 == 0) {
        iVar3 = FUN_180243560(lp,1);
        if (iVar3 == 0) {
          DAT_180409a38 = CONCAT44(uStack_1c,local_20);
          _DAT_180409a08 = 0;
          DAT_180409a2c = 1;
          DAT_180409a50 = 0;
          DAT_1803e8110 = 0xffffffff;
          DAT_180409a28 = 0;
          DAT_1804099e8 = 0;
          DAT_180409a00 = 0;
          DAT_1804099e0 = 0;
          DAT_180409a48 = 0;
          DAT_180409a20 = 0;
          DAT_180409a4c = 0;
          DAT_180409a60 = 0;
          DAT_180409a58 = lp;
          FUN_180014410("[ANIMPROBE] armed on server.dll %s::Update %p (rva +0x%zX, module %p, slot %d). A verdict line prints every 2s while a map runs.\n"
                        ,pcVar5,lp,(longlong)lp - DAT_180409a38,DAT_180409a38,4);
          return 1;
        }
        FUN_180014410("[ANIMPROBE] MH_EnableHook failed on %p\n",lp);
        FUN_180243300(lp);
      }
      else {
        FUN_180014410("[ANIMPROBE] MH_CreateHook failed on %p\n",lp);
      }
    }
  }
  else {
    FUN_180014410(
                 "[ANIMPROBE] server.dll is not loaded - host a listen server (or start a singleplayer map) and toggle the probe again.\n"
                 );
  }
  return 0;
}


