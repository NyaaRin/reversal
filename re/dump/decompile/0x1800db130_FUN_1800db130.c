// 0x1800db130  FUN_1800db130
// size=234 thunk=false
// signature: undefined FUN_1800db130()
// status: ok


int FUN_1800db130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  BOOL BVar2;
  undefined8 *lp;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  if ((DAT_1803fa360 == (longlong *)0x0) || (DAT_1803fa608 == 0)) {
    return 0;
  }
  uVar6 = 0x200;
  iVar4 = 0;
  iVar5 = 0;
  iVar1 = (**(code **)(*DAT_1803fa360 + 0x30))();
  iVar3 = 1;
LAB_1800db192:
  do {
    if ((iVar1 < iVar3) || (0x1ff < iVar4)) {
      return iVar4;
    }
    lp = (undefined8 *)
         (**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,iVar3,param_3,param_4,iVar5,uVar6);
    if (lp != (undefined8 *)0x0) {
      BVar2 = IsBadReadPtr(lp,8);
      if (BVar2 == 0) {
        BVar2 = IsBadReadPtr((void *)*lp,8);
        if (BVar2 == 0) {
          (&DAT_18056ffb0)[iVar4] = iVar3;
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + 1;
          iVar5 = iVar4;
          goto LAB_1800db192;
        }
      }
    }
    iVar3 = iVar3 + 1;
  } while( true );
}


