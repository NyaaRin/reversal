// 0x1800e48e0  FUN_1800e48e0
// size=287 thunk=false
// signature: undefined FUN_1800e48e0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800e48e0(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  double dVar6;
  undefined1 auStack_58 [32];
  float *local_38;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  plVar3 = (longlong *)FUN_180039770();
  pcVar1 = DAT_1803ff7c0;
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
    uVar4 = 0;
  }
  else {
    if (DAT_1803ff7c0 == (code *)0x0) {
      lVar5 = *plVar3;
    }
    else {
      local_28 = 0.0;
      local_24 = 0.0;
      local_20 = 0.0;
      local_1c = 0.0;
      dVar6 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);
      local_38 = &local_1c;
      cVar2 = (*pcVar1)((int)dVar6,&local_28,&local_24,&local_20);
      lVar5 = *plVar3;
      if (cVar2 != '\0') {
        (**(code **)(lVar5 + 0xf0))(plVar3,(double)local_28);
        (**(code **)(*plVar3 + 0xf0))(plVar3,(double)local_24);
        (**(code **)(*plVar3 + 0xf0))(plVar3,(double)local_20);
        (**(code **)(*plVar3 + 0xf0))(plVar3,(double)local_1c);
        return 4;
      }
    }
    (**(code **)(lVar5 + 0xe0))();
    uVar4 = 1;
  }
  return uVar4;
}


