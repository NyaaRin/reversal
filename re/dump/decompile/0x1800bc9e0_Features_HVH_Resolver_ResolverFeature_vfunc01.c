// 0x1800bc9e0  Features_HVH_Resolver_ResolverFeature_vfunc01
// size=529 thunk=false
// signature: undefined Features_HVH_Resolver_ResolverFeature_vfunc01()
// status: ok


void Features_HVH_Resolver_ResolverFeature_vfunc01
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  BOOL BVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  
  if ((((DAT_1803fa668 != (longlong *)0x0) &&
       (cVar1 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar1 != '\0')) && (DAT_1803fa608 != 0)) &&
     (DAT_1803fa360 != (longlong *)0x0)) {
    cVar1 = FUN_1800bc930();
    iVar6 = 1;
    if (cVar1 != '\0') {
      iVar7 = 1;
      while ((iVar7 <= *(int *)(DAT_1803fa608 + 0x1c) && (iVar7 < 0x81))) {
        plVar3 = (longlong *)
                 (**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,iVar7,param_3,param_4,iVar7);
        if (((plVar3 == (longlong *)0x0) ||
            ((BVar2 = IsBadReadPtr(plVar3,8), BVar2 != 0 ||
             (BVar2 = IsBadReadPtr((void *)*plVar3,8), BVar2 != 0)))) ||
           ((plVar4 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3), plVar4 == (longlong *)0x0
            || ((cVar1 = (**(code **)(*plVar4 + 0x40))(plVar4), cVar1 != '\0' ||
                (cVar1 = FUN_18001c330(plVar3), cVar1 == '\0')))))) {
          iVar7 = iVar7 + 1;
        }
        else {
          uVar5 = FUN_18001d350(plVar3);
          FUN_1800b5be0(plVar3,uVar5);
          iVar7 = iVar7 + 1;
        }
      }
    }
    cVar1 = FUN_1800b81b0();
    if (cVar1 != '\0') {
      do {
        while( true ) {
          if ((*(int *)(DAT_1803fa608 + 0x1c) < iVar6) || (0x80 < iVar6)) {
            FUN_1800bc360();
            return;
          }
          plVar3 = (longlong *)
                   (**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,iVar6,param_3,param_4,iVar6);
          if ((((plVar3 != (longlong *)0x0) && (BVar2 = IsBadReadPtr(plVar3,8), BVar2 == 0)) &&
              (BVar2 = IsBadReadPtr((void *)*plVar3,8), BVar2 == 0)) &&
             ((plVar4 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3), plVar4 != (longlong *)0x0
              && (cVar1 = (**(code **)(*plVar4 + 0x40))(plVar4), cVar1 == '\0')))) break;
LAB_1800bcbbe:
          iVar6 = iVar6 + 1;
        }
        cVar1 = FUN_18001c330(plVar3);
        if (((&DAT_180561252)[(longlong)iVar6 * 0x168] != '\0') && (cVar1 == '\0')) {
          FUN_1800b8740(iVar6);
        }
        (&DAT_180561252)[(longlong)iVar6 * 0x168] = cVar1;
        if (cVar1 == '\0') goto LAB_1800bcbbe;
        FUN_1800b8c50(iVar6,plVar3);
        iVar6 = iVar6 + 1;
      } while( true );
    }
  }
  if (DAT_1803e9e08 != DAT_1803e9e10) {
    DAT_1803e9e10 = DAT_1803e9e08;
  }
  return;
}


