// 0x1800ad090  FUN_1800ad090
// size=626 thunk=false
// signature: undefined FUN_1800ad090()
// status: ok


void FUN_1800ad090(longlong param_1)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  DAT_1804236d0 = (longlong *)0x0;
  if (param_1 == 0) {
    DAT_1804236d0 = (longlong *)0x0;
    return;
  }
  cVar1 = FUN_1800acf70();
  if (cVar1 == '\0') {
    return;
  }
  if (DAT_180409790 == (undefined8 *)0x0) {
    return;
  }
  uVar3 = (**(code **)*DAT_180409790)();
  puVar6 = DAT_1803e9ba0;
  puVar5 = DAT_1803e9b98;
  if (uVar3 < 0x10001) {
    return;
  }
  for (; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    cVar1 = (**(code **)(*(longlong *)*puVar5 + 0x10))((longlong *)*puVar5,uVar3);
    if (cVar1 != '\0') {
      DAT_1804236d0 = (longlong *)*puVar5;
      break;
    }
  }
  if (DAT_1804236d0 == (longlong *)0x0) {
    if (DAT_1803fd120 == uVar3) {
      return;
    }
    DAT_1803fd120 = uVar3;
    FUN_180014410(&DAT_18034a320,uVar3);
    return;
  }
  if ((DAT_1805c59f8 & 1) == 0) {
    DAT_1805c59f8 = DAT_1805c59f8 | 1;
    atexit((_func_5014 *)&LAB_180309950);
  }
  plVar7 = DAT_1804236d0;
  if (DAT_1803fa608 == 0) {
    uVar8 = 0;
    uVar9 = 0;
  }
  else {
    uVar8 = (undefined4)*(undefined8 *)(DAT_1803fa608 + 0x10);
    uVar9 = (undefined4)((ulonglong)*(undefined8 *)(DAT_1803fa608 + 0x10) >> 0x20);
  }
  if ((DAT_1804253d0 == DAT_1804236d0) && (DAT_1803fd060 == param_1)) {
    puVar6 = &DAT_1803eb458;
    if (0xf < DAT_1803eb470) {
      puVar6 = DAT_1803eb458;
    }
    puVar5 = &DAT_1803e78b0;
    if (0xf < DAT_1803e78c8) {
      puVar5 = DAT_1803e78b0;
    }
    if (((DAT_1803e78c0 == DAT_1803eb468) &&
        (((DAT_1803e78c0 == 0 || (iVar2 = memcmp(puVar5,puVar6,DAT_1803e78c0), iVar2 == 0)) &&
         (0.0 <= DAT_1803e9708)))) &&
       ((DAT_1803e9708 <= (double)CONCAT44(uVar9,uVar8) &&
        ((double)CONCAT44(uVar9,uVar8) - DAT_1803e9708 < DAT_180380cb0)))) goto LAB_1800ad2e1;
  }
  (**(code **)(*plVar7 + 0x18))(plVar7,param_1);
  DAT_1804253d0 = DAT_1804236d0;
  puVar6 = &DAT_1803eb458;
  if (0xf < DAT_1803eb470) {
    puVar6 = DAT_1803eb458;
  }
  DAT_1803fd060 = param_1;
  FUN_180212700(&DAT_1803e78b0,puVar6,DAT_1803eb468);
  DAT_1803e9708 = (double)CONCAT44(uVar9,uVar8);
  plVar7 = DAT_1804236d0;
LAB_1800ad2e1:
  lVar4 = (**(code **)(*plVar7 + 8))(plVar7);
  if (DAT_1804259f0 != lVar4) {
    DAT_1804259f0 = (**(code **)(*DAT_1804236d0 + 8))();
    FUN_180014410("[Autowall] model: %s (backend %s)\n",DAT_1804259f0,uVar3);
  }
  return;
}


