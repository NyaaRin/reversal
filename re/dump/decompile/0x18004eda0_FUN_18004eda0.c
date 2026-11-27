// 0x18004eda0  FUN_18004eda0
// size=529 thunk=false
// signature: undefined FUN_18004eda0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18004eda0(undefined8 param_1,longlong param_2)

{
  double dVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  char *pcVar6;
  size_t sVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 ***pppuVar10;
  uint uVar11;
  char *_Str;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  uint local_70;
  code *local_68;
  undefined8 **local_60;
  undefined8 local_58;
  undefined8 **local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 **local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_2)) {
    uVar5 = 0;
  }
  else if (DAT_1803ff8ec == '\0') {
    uVar5 = FUN_18004a240(param_2);
  }
  else {
    cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,2,4);
    if (cVar2 == '\0') {
      _Str = "";
    }
    else {
      pcVar6 = (char *)(**(code **)(*plVar4 + 0xb8))(plVar4,2,0);
      _Str = "";
      if (pcVar6 != (char *)0x0) {
        _Str = pcVar6;
      }
    }
    local_38 = (undefined8 ***)0x0;
    uStack_30 = 0;
    local_28 = 0;
    uStack_20 = 0;
    sVar7 = strlen(_Str);
    FUN_18001d080(&local_38,_Str,sVar7);
    cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,3,3);
    if (cVar2 == '\0') {
      uVar11 = 0;
    }
    else {
      dVar1 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,3);
      uVar11 = (uint)dVar1;
    }
    cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);
    if (cVar2 == '\0') {
      puVar9 = &DAT_180343200;
    }
    else {
      puVar8 = (undefined *)(**(code **)(*plVar4 + 0xb8))(plVar4,1,0);
      puVar9 = &DAT_180343200;
      if (puVar8 != (undefined *)0x0) {
        puVar9 = puVar8;
      }
    }
    local_70 = uVar11 | 0x400000;
    local_50 = &local_38;
    local_48 = 0;
    local_40 = 0;
    pppuVar10 = &local_38;
    if (0xf < uStack_20) {
      pppuVar10 = (undefined8 ***)local_38;
    }
    local_58 = 0;
    local_60 = &local_50;
    local_68 = FUN_1802d2b00;
    local_78 = &local_58;
    uVar3 = FUN_1802b74e0(puVar9,0,pppuVar10,(int)uStack_20 + 1);
    pppuVar10 = &local_38;
    if (0xf < uStack_20) {
      pppuVar10 = (undefined8 ***)local_38;
    }
    (**(code **)(*plVar4 + 0xe8))(plVar4,pppuVar10,0);
    (**(code **)(*plVar4 + 0xf8))(plVar4,uVar3);
    FUN_18020e450(&local_38);
    uVar5 = 2;
  }
  return uVar5;
}


