// 0x180062330  FUN_180062330
// size=274 thunk=false
// signature: undefined FUN_180062330()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180062330(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  double dVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  float local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 == (longlong *)0x0) || (plVar1[1] != param_1)) {
    uVar2 = 0;
  }
  else {
    dVar5 = (double)(**(code **)(*plVar1 + 0x160))(plVar1,1);
    uVar3 = (uint)dVar5;
    if (((((int)uVar3 < 1) ||
         (lVar4 = (ulonglong)(uVar3 & 0x3f) * 0x68, (&DAT_1805b88e0)[lVar4] == '\0')) ||
        (*(uint *)(&DAT_1805b88e4 + lVar4) != uVar3 >> 6)) ||
       (((&DAT_1805b88e1)[lVar4] != '\0' || (&DAT_1805b8908 + lVar4 == (undefined *)0x0)))) {
      (**(code **)(*plVar1 + 0xe0))(plVar1);
      uVar2 = 1;
    }
    else {
      local_28 = 0;
      local_20 = 0.0;
      FUN_18001b960(&DAT_1805b8908 + lVar4,&local_28);
      (**(code **)(*plVar1 + 0xf0))(plVar1,(double)(float)local_28);
      (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_28._4_4_);
      (**(code **)(*plVar1 + 0xf0))(plVar1,(double)local_20);
      uVar2 = 3;
    }
  }
  return uVar2;
}


