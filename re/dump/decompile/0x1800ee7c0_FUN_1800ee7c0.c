// 0x1800ee7c0  FUN_1800ee7c0
// size=175 thunk=false
// signature: undefined FUN_1800ee7c0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800ee7c0(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  double dVar5;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  if (param_1 != 0) {
    local_18 = 0;
    puVar4 = (ulonglong *)&local_18;
    local_14 = 2;
    do {
      plVar3 = (longlong *)FUN_1800ebf80((int)*puVar4);
      if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
        lVar1 = *plVar3;
        dVar5 = (double)(**(code **)(lVar1 + 0x160))(plVar3,1);
        uVar2 = FUN_1800245f0((int)dVar5);
        (**(code **)(lVar1 + 0xf8))(plVar3,uVar2);
        return 1;
      }
      puVar4 = (ulonglong *)((longlong)puVar4 + 4);
    } while (puVar4 != &local_10);
  }
  return 0;
}


