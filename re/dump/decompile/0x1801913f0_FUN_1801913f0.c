// 0x1801913f0  FUN_1801913f0
// size=332 thunk=false
// signature: undefined FUN_1801913f0()
// status: ok


undefined8 FUN_1801913f0(void)

{
  uint *lp;
  uint uVar1;
  void *lp_00;
  BOOL BVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 in_R9;
  
  if (DAT_18040a3d3 == '\0') {
    return 1;
  }
  lVar3 = FUN_180191350();
  if (lVar3 == 0) {
    FUN_180014410("[ESP] listener unregister: CClientEntityList base unavailable\n");
  }
  else {
    BVar2 = IsBadReadPtr((void *)(lVar3 + 0x80030),8);
    if (BVar2 == 0) {
      lp = (uint *)(lVar3 + 0x80040);
      BVar2 = IsBadReadPtr(lp,4);
      if (BVar2 == 0) {
        lp_00 = *(void **)(lVar3 + 0x80030);
        uVar1 = *lp;
        if (((lp_00 != (void *)0x0) && (uVar1 - 1 < 0x1000)) &&
           (BVar2 = IsBadReadPtr(lp_00,(longlong)(int)uVar1 << 3), BVar2 == 0)) {
          iVar5 = 0;
          while( true ) {
            if ((int)uVar1 <= iVar5) {
              FUN_180014410("[ESP] listener unregister: our entry is not in the list (%d entries)\n"
                            ,uVar1);
              DAT_18040a3d3 = 0;
              return 1;
            }
            iVar4 = iVar5;
            if (*(undefined ***)((longlong)lp_00 + (longlong)iVar5 * 8) ==
                &PTR_vftable_Features_Visual_ESP_CGhostEntityListener_1803e8850) break;
            iVar5 = iVar5 + 1;
          }
          while (iVar6 = iVar4 + 1, iVar6 < (int)uVar1) {
            *(undefined8 *)((longlong)lp_00 + (longlong)iVar4 * 8) =
                 *(undefined8 *)((longlong)lp_00 + (longlong)iVar6 * 8);
            iVar4 = iVar6;
          }
          *lp = uVar1 - 1;
          DAT_18040a3d3 = 0;
          FUN_180014410("[ESP] entity lifecycle listener unregistered (slot %d of %d)\n",iVar5,uVar1
                        ,in_R9,iVar5);
          return 1;
        }
        FUN_180014410("[ESP] listener unregister: vector looks wrong (data=%p size=%d)\n",lp_00,
                      uVar1);
        return 0;
      }
    }
  }
  return 0;
}


