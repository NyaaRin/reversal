// 0x1800ee480  FUN_1800ee480
// size=178 thunk=false
// signature: undefined FUN_1800ee480()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800ee480(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
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
      plVar2 = (longlong *)FUN_1800ebf80((int)*puVar4);
      if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
        lVar1 = *plVar2;
        dVar5 = (double)(**(code **)(lVar1 + 0x160))(plVar2,1);
        uVar3 = FUN_1802d2b60((int)dVar5);
        (**(code **)(lVar1 + 0xe8))(plVar2,uVar3,0);
        return 1;
      }
      puVar4 = (ulonglong *)((longlong)puVar4 + 4);
    } while (puVar4 != &local_10);
  }
  return 0;
}


