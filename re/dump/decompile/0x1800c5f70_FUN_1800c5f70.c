// 0x1800c5f70  FUN_1800c5f70
// size=330 thunk=false
// signature: undefined FUN_1800c5f70()
// status: ok


undefined1 FUN_1800c5f70(longlong *param_1)

{
  char cVar1;
  BOOL BVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  
  if ((void *)*param_1 != (void *)0x0) {
    BVar2 = IsBadReadPtr((void *)*param_1,8);
    if (BVar2 == 0) {
      BVar2 = IsBadReadPtr(*(void **)*param_1,8);
      if (BVar2 == 0) {
        cVar1 = FUN_18001c330(*param_1);
        if (cVar1 == '\0') {
          return 0;
        }
        plVar4 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x20))();
        if (plVar4 == (longlong *)0x0) {
          return 0;
        }
        if (DAT_1803fa608 != 0) {
          iVar3 = (**(code **)(*plVar4 + 0x48))(plVar4);
          if ((iVar3 < 1) || (*(int *)(DAT_1803fa608 + 0x1c) < iVar3)) {
            return 0;
          }
          if ((DAT_1803fa360 != (longlong *)0x0) &&
             (lVar6 = *param_1, lVar5 = (**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,iVar3),
             lVar5 != lVar6)) {
            return 0;
          }
        }
        iVar3 = FUN_18001c680(*param_1);
        if (iVar3 < 1) {
          return 0;
        }
        lVar6 = (**(code **)(*DAT_1803fa668 + 0x240))();
        if ((((lVar6 != 0) && (DAT_1803fa608 != 0)) && (0 < *(int *)((longlong)param_1 + 0x1854)))
           && (*(char *)((longlong)param_1 + 0x1864) == '\0')) {
          dVar7 = (double)FUN_1800c5e70();
          dVar8 = *(double *)(DAT_1803fa608 + 0x10) -
                  (double)*(int *)((longlong)param_1 + 0x1854) * *(double *)(DAT_1803fa608 + 0x28);
          if ((DAT_180381398 <= dVar8) && (dVar8 <= dVar7)) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}


