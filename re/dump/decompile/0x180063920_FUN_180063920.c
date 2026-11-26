// 0x180063920  FUN_180063920
// size=250 thunk=false
// signature: undefined FUN_180063920()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180063920(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  double dVar6;
  undefined1 auStack_38 [32];
  float local_18 [2];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 == (longlong *)0x0) || (plVar1[1] != param_1)) {
    uVar3 = 0;
  }
  else {
    dVar6 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
    uVar4 = (uint)dVar6;
    if (((((int)uVar4 < 1) ||
         (lVar5 = (ulonglong)(uVar4 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar5] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar5) != uVar4 >> 6)) || ((&DAT_1805b88e1)[lVar5] == '\0')) {
      lVar2 = *plVar1;
    }
    else {
      lVar2 = *plVar1;
      if (&DAT_1805b8928 + lVar5 != (undefined *)0x0) {
        dVar6 = (double)(**(code **)(lVar2 + 0x160))(plVar1,2);
        local_18[0] = (float)dVar6;
        FUN_180019e10(&DAT_1805b8928 + lVar5,local_18,0x20);
        (**(code **)(*plVar1 + 0xf8))(plVar1,(&DAT_1805b893c)[lVar5] == '\0');
        return 1;
      }
    }
    (**(code **)(lVar2 + 0xf8))(plVar1,0);
    uVar3 = 1;
  }
  return uVar3;
}


