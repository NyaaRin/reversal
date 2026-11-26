// 0x1800611e0  FUN_1800611e0
// size=217 thunk=false
// signature: undefined FUN_1800611e0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800611e0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  undefined1 auStack_38 [32];
  float local_18 [2];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 == (longlong *)0x0) || (plVar1[1] != param_1)) {
    uVar2 = 0;
  }
  else {
    dVar6 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
    uVar3 = (uint)dVar6;
    if (((((int)uVar3 < 1) ||
         (lVar4 = (ulonglong)(uVar3 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar4] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar4) != uVar3 >> 6)) || ((&DAT_1805b88e1)[lVar4] != '\0')) {
      lVar5 = *plVar1;
    }
    else {
      lVar5 = *plVar1;
      if (&DAT_1805b8908 + lVar4 != (undefined *)0x0) {
        FUN_18001ad50(&DAT_1805b8908 + lVar4,local_18,0x20);
        (**(code **)(lVar5 + 0xf0))(plVar1,(double)local_18[0]);
        return 1;
      }
    }
    (**(code **)(lVar5 + 0xe0))(plVar1);
    uVar2 = 1;
  }
  return uVar2;
}


