// 0x1800e5e70  FUN_1800e5e70
// size=329 thunk=false
// signature: undefined FUN_1800e5e70()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800e5e70(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  double dVar6;
  undefined1 auStack_38 [32];
  undefined4 local_18 [2];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
    return 0;
  }
  dVar6 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
  if (((int)dVar6 < 1) || (DAT_1803fa360 == (longlong *)0x0)) {
    uVar4 = (**(code **)(*plVar2 + 0x158))(plVar2,2);
    FUN_1800e3320(uVar4);
  }
  else {
    lVar3 = (**(code **)(*DAT_1803fa360 + 0x18))();
    uVar4 = (**(code **)(*plVar2 + 0x158))(plVar2,2);
    iVar1 = FUN_1800e3320(uVar4);
    if (((lVar3 != 0) && (0 < iVar1)) && (DAT_1803fa360 != (longlong *)0x0)) {
      local_18[0] = *(undefined4 *)(iVar1 + lVar3);
      plVar5 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x20))(DAT_1803fa360,local_18);
      if (plVar5 == (longlong *)0x0) {
        (**(code **)(*plVar2 + 0xe0))(plVar2);
        return 1;
      }
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5);
      iVar1 = (**(code **)(*plVar5 + 0x48))(plVar5);
      lVar3 = *plVar2;
      if (0 < iVar1) {
        (**(code **)(lVar3 + 0xf0))(plVar2,(double)iVar1);
        return 1;
      }
      goto LAB_1800e5f92;
    }
  }
  lVar3 = *plVar2;
LAB_1800e5f92:
  (**(code **)(lVar3 + 0xe0))(plVar2);
  return 1;
}


