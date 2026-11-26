// 0x1800ee720  FUN_1800ee720
// size=148 thunk=false
// signature: undefined FUN_1800ee720()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800ee720(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
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
      lVar2 = FUN_1800ebf80((int)*puVar4);
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) == param_1)) {
        uVar3 = 0;
        uVar1 = 0;
        do {
          if (0x1ff < uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_1802d8348();
          }
          (&DAT_1803ff990)[uVar3] = 0;
          uVar1 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uVar1;
        } while ((int)uVar1 < 0x200);
        return 0;
      }
      puVar4 = (ulonglong *)((longlong)puVar4 + 4);
    } while (puVar4 != &local_10);
  }
  return 0;
}


