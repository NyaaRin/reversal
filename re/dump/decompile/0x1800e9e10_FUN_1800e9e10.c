// 0x1800e9e10  FUN_1800e9e10
// size=316 thunk=false
// signature: undefined FUN_1800e9e10()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800e9e10(longlong param_1)

{
  double dVar1;
  double dVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 ***pppuVar6;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong uStack_50;
  undefined1 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_1)) {
    uVar5 = 0;
  }
  else {
    dVar1 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);
    dVar2 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,2);
    uStack_60 = 0;
    local_58 = _DAT_1803814b0;
    uStack_50 = _UNK_1803814b8;
    local_68 = (undefined8 ***)0x0;
    local_48 = 0;
    local_44 = 0x3f800000;
    local_40 = 0x3f800000;
    local_3c = 0x3f800000;
    local_38 = 0x3f800000;
    local_30 = 0;
    local_28 = 0;
    cVar3 = FUN_1800213a0((int)dVar1,(int)dVar2,&local_68);
    if (cVar3 == '\0') {
      (**(code **)(*plVar4 + 0xe0))();
      FUN_18020e450(&local_68);
      uVar5 = 1;
    }
    else {
      pppuVar6 = &local_68;
      if (0xf < uStack_50) {
        pppuVar6 = (undefined8 ***)local_68;
      }
      (**(code **)(*plVar4 + 0xe8))(plVar4,pppuVar6,0);
      FUN_18020e450(&local_68);
      uVar5 = 1;
    }
  }
  return uVar5;
}


