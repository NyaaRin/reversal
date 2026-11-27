// 0x1800ee380  FUN_1800ee380
// size=254 thunk=false
// signature: undefined FUN_1800ee380()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800ee380(longlong param_1)

{
  longlong *plVar1;
  undefined8 ****ppppuVar2;
  ulonglong *puVar3;
  undefined1 auStack_58 [32];
  undefined8 ***local_38 [2];
  longlong local_28;
  ulonglong local_20;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  if (param_1 != 0) {
    local_18 = 0;
    local_14 = 2;
    puVar3 = (ulonglong *)&local_18;
    do {
      plVar1 = (longlong *)FUN_1800ebf80((int)*puVar3);
      if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
        if (DAT_180409ba0 == (code *)0x0) {
          (**(code **)(*plVar1 + 0xe0))(plVar1);
          return 1;
        }
        (*DAT_180409ba0)(local_38);
        if (local_28 == 0) {
          (**(code **)(*plVar1 + 0xe0))();
          FUN_18020e450(local_38);
          return 1;
        }
        ppppuVar2 = local_38;
        if (0xf < local_20) {
          ppppuVar2 = (undefined8 ****)local_38[0];
        }
        (**(code **)(*plVar1 + 0xe8))(plVar1,ppppuVar2,0);
        FUN_18020e450(local_38);
        return 1;
      }
      puVar3 = (ulonglong *)((longlong)puVar3 + 4);
    } while (puVar3 != &local_10);
  }
  return 0;
}


