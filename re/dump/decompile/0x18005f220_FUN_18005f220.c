// 0x18005f220  FUN_18005f220
// size=237 thunk=false
// signature: undefined FUN_18005f220()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18005f220(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  int local_28;
  undefined1 local_20;
  int local_18 [2];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_48;
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
    uVar4 = 0;
  }
  else {
    local_18[0] = 0;
    lVar3 = (**(code **)(*plVar2 + 0xb8))(plVar2,1,local_18);
    if (lVar3 == 0) {
      (**(code **)(*plVar2 + 0xe0))(plVar2);
      uVar4 = 1;
    }
    else {
      if (local_18[0] < 1) {
        iVar1 = 1;
      }
      else {
        iVar1 = local_18[0];
        if (0x10000 < local_18[0]) {
          iVar1 = 0x10000;
        }
      }
      local_28 = iVar1 * 8;
      local_20 = 1;
      iVar1 = FUN_18005dff0(0,iVar1,lVar3);
      if (iVar1 == 0) {
        (**(code **)(*plVar2 + 0xe0))(plVar2);
        uVar4 = 1;
      }
      else {
        (**(code **)(*plVar2 + 0xf0))(plVar2,(double)iVar1);
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}


