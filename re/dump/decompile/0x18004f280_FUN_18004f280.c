// 0x18004f280  FUN_18004f280
// size=285 thunk=false
// signature: undefined FUN_18004f280()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18004f280(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
    uVar4 = 0;
  }
  else if (DAT_1803ff8ec == '\0') {
    uVar4 = FUN_18004a240(param_1);
  }
  else {
    local_38 = _DAT_180381760;
    uStack_30 = _UNK_180381768;
    FUN_180049dc0(&local_48,plVar3,2,&local_38);
    local_28 = local_48;
    uStack_20 = uStack_40;
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);
    if (cVar1 == '\0') {
      puVar6 = &DAT_180343210;
    }
    else {
      puVar5 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);
      puVar6 = &DAT_180343210;
      if (puVar5 != (undefined *)0x0) {
        puVar6 = puVar5;
      }
    }
    uVar2 = FUN_1802bac60(puVar6,&local_28,0x44000);
    local_48 = local_28;
    uStack_40 = uStack_20;
    FUN_18004a030(plVar3,&local_48);
    (**(code **)(*plVar3 + 0xf8))(plVar3,uVar2);
    uVar4 = 2;
  }
  return uVar4;
}


