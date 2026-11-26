// 0x180056670  FUN_180056670
// size=253 thunk=false
// signature: undefined FUN_180056670()
// status: ok


undefined8 FUN_180056670(longlong param_1)

{
  char cVar1;
  BOOL BVar2;
  longlong *plVar3;
  longlong lVar4;
  void *pvVar5;
  void *lp;
  undefined1 *lp_00;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
    return 0;
  }
  cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);
  if (((cVar1 != '\0') && (lVar4 = (**(code **)(*plVar3 + 0xb8))(plVar3,1,0), lVar4 != 0)) &&
     (pvVar5 = (void *)FUN_180016fb0(lVar4), pvVar5 != (void *)0x0)) {
    lp = *(void **)((longlong)pvVar5 + 0x38);
    if (((lp == (void *)0x0) || (lp == pvVar5)) || (BVar2 = IsBadReadPtr(lp,0x60), BVar2 != 0)) {
      lp = pvVar5;
    }
    lp_00 = *(undefined1 **)((longlong)lp + 0x48);
    if ((lp_00 == (undefined1 *)0x0) || (BVar2 = IsBadReadPtr(lp_00,2), BVar2 != 0)) {
      lp_00 = &DAT_18033e5ea;
    }
    (**(code **)(*plVar3 + 0xe8))(plVar3,lp_00,0);
    return 1;
  }
  (**(code **)(*plVar3 + 0xe0))(plVar3);
  return 1;
}


