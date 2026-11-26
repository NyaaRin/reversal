// 0x180191780  FUN_180191780
// size=348 thunk=false
// signature: undefined FUN_180191780()
// status: ok


void FUN_180191780(void)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  BOOL BVar5;
  longlong *lp;
  longlong lVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined1 local_90 [48];
  undefined1 local_60 [56];
  
  if (DAT_1803fa360 != (longlong *)0x0) {
    iVar4 = (**(code **)(*DAT_1803fa360 + 0x30))();
    iVar8 = 1;
    while (iVar8 <= iVar4) {
      lp = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,iVar8);
      if ((((lp == (longlong *)0x0) || (BVar5 = IsBadReadPtr(lp,8), BVar5 != 0)) ||
          (BVar5 = IsBadReadPtr((void *)*lp,8), BVar5 != 0)) ||
         (lVar6 = (**(code **)(*lp + 0x20))(lp), lVar6 == 0)) {
        iVar8 = iVar8 + 1;
      }
      else {
        puVar7 = (undefined4 *)(**(code **)(*lp + 0x10))(lp);
        uVar1 = *puVar7;
        FUN_180121710(local_90,lp,iVar8,uVar1,lVar6,0,0);
        uVar2 = FUN_180208320(lVar6);
        uVar3 = FUN_180208710(lVar6);
        FUN_180121710(local_60,lp,iVar8,uVar1,lVar6,uVar3,uVar2);
        iVar8 = iVar8 + 1;
      }
    }
  }
  return;
}


