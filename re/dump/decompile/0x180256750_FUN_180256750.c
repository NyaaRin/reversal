// 0x180256750  FUN_180256750
// size=221 thunk=false
// signature: undefined FUN_180256750()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180256750(longlong *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 == (undefined8 *)param_1[2]) {
    lVar3 = FUN_180262470();
  }
  else {
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined4 *)(puVar1 + 4) = 0x1020001;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    lVar3 = param_1[1];
    param_1[1] = lVar3 + 0x60;
  }
  plVar2 = (longlong *)param_1[0xb];
  if (plVar2 != (longlong *)0x0) {
    local_18 = (param_1[1] - *param_1 >> 5) * -0x5555555555555555 + -1;
    uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,&local_18);
    *(undefined8 *)(lVar3 + 0x58) = uVar4;
  }
  return;
}


