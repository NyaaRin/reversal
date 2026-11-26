// 0x1800d9e00  FUN_1800d9e00
// size=663 thunk=false
// signature: undefined FUN_1800d9e00()
// status: ok


void FUN_1800d9e00(longlong *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  double dVar7;
  undefined4 uVar8;
  
  cVar1 = FUN_1800da0a0();
  if ((((cVar1 != '\0') && (param_1 != (longlong *)0x0)) && (param_1[1] != 0)) &&
     (((DAT_1803fa608 != (float *)0x0 && (DAT_1803fafa0 != 0)) && (DAT_1803faef0 != 0)))) {
    if ((DAT_1803fe731 == '\0') && (0xf0 < (int)DAT_1803fcf3c)) {
      uVar2 = DAT_1803fcf3c & 0x8000003f;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xffffffc0) + 1;
      }
      if (uVar2 != 0) {
        DAT_1803fcf3c = DAT_1803fcf3c + 1;
        return;
      }
    }
    iVar3 = (**(code **)*param_1)(param_1);
    uVar6 = (undefined4)DAT_1803813b0;
    uVar8 = (undefined4)((ulonglong)DAT_1803813b0 >> 0x20);
    FUN_180023e60(param_1,0);
    FUN_18002db10(param_1[1],0xffffffff,&DAT_180349348);
    cVar1 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,5);
    if (cVar1 != '\0') {
      FUN_18002db10(param_1[1],0xffffffff,"WeaponSelector");
      cVar1 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,5);
      if (cVar1 != '\0') {
        FUN_18002db10(param_1[1],0xffffffff,&DAT_18034dcb8);
        cVar1 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,3);
        if (((cVar1 != '\0') &&
            (dVar7 = (double)(**(code **)(*param_1 + 0xc0))(param_1,0xffffffff), 0.0 <= dVar7)) &&
           (dVar7 < DAT_180381040)) {
          uVar6 = SUB84(dVar7,0);
          uVar8 = (undefined4)((ulonglong)dVar7 >> 0x20);
        }
      }
    }
    iVar4 = (**(code **)*param_1)(param_1);
    if (iVar3 < iVar4) {
      (**(code **)(*param_1 + 0x10))(param_1,iVar4 - iVar3);
    }
    if (0.0 <= (double)CONCAT44(uVar8,uVar6)) {
      DAT_1803e9248 = CONCAT44(uVar8,uVar6);
      DAT_1803e9238 = (double)*DAT_1803fa608;
      if (DAT_1803fe731 == '\0') {
        DAT_1803fe731 = '\x01';
        FUN_180014410("[SELGUARD] hg.WeaponSelector.Show found (=%.2f, now=%.2f) after %d miss(es)\n"
                      ,CONCAT44(uVar8,uVar6),*(undefined8 *)(DAT_1803fa608 + 4),DAT_1803fcf3c);
      }
    }
    if ((((double)CONCAT44(uVar8,uVar6) <= 0.0 && (double)CONCAT44(uVar8,uVar6) != 0.0) &&
        (DAT_1803fe731 == '\0')) && (DAT_1803fcf3c = DAT_1803fcf3c + 1, DAT_1803fcf3c == 0xf1)) {
      FUN_180014410(&DAT_18034dd10,0xf0,0x40);
    }
    cVar1 = FUN_180071a30();
    if (cVar1 != DAT_180423ae9) {
      pcVar5 = "closed";
      if (cVar1 != '\0') {
        pcVar5 = "OPEN";
      }
      DAT_180423ae9 = cVar1;
      FUN_180014410("[SELGUARD] %s show=%.2f now=%.2f\n",pcVar5,DAT_1803e9248,
                    *(undefined8 *)(DAT_1803fa608 + 4));
      return;
    }
  }
  return;
}


