// 0x18004efd0  FUN_18004efd0
// size=664 thunk=false
// signature: undefined FUN_18004efd0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18004efd0(undefined8 param_1,longlong param_2)

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
  float fVar12;
  float fVar13;
  undefined1 auStack_b8 [32];
  float *local_98;
  uint local_90;
  code *local_88;
  undefined8 **local_80;
  float local_78;
  float local_74;
  undefined8 **local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 **local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
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
    local_58 = (undefined8 ***)0x0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    sVar7 = strlen(_Str);
    FUN_18001d080(&local_58,_Str,sVar7);
    cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,5,3);
    if (cVar2 == '\0') {
      uVar11 = 0;
    }
    else {
      dVar1 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,5);
      uVar11 = (uint)dVar1;
    }
    cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,4,3);
    fVar12 = 0.0;
    if (cVar2 == '\0') {
      fVar13 = 0.0;
    }
    else {
      dVar1 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,4);
      fVar13 = (float)dVar1;
    }
    cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,3,3);
    if (cVar2 != '\0') {
      dVar1 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,3);
      fVar12 = (float)dVar1;
    }
    local_78 = fVar12;
    local_74 = fVar13;
    cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);
    if (cVar2 == '\0') {
      puVar9 = &DAT_180343208;
    }
    else {
      puVar8 = (undefined *)(**(code **)(*plVar4 + 0xb8))(plVar4,1,0);
      puVar9 = &DAT_180343208;
      if (puVar8 != (undefined *)0x0) {
        puVar9 = puVar8;
      }
    }
    local_70 = &local_58;
    local_68 = 0;
    local_60 = 0;
    pppuVar10 = &local_58;
    if (0xf < uStack_40) {
      pppuVar10 = (undefined8 ***)local_58;
    }
    local_90 = uVar11 | 0x4400000;
    local_80 = &local_70;
    local_88 = FUN_1802d2b00;
    local_98 = &local_78;
    uVar3 = FUN_1802b74e0(puVar9,0,pppuVar10,(int)uStack_40 + 1);
    pppuVar10 = &local_58;
    if (0xf < uStack_40) {
      pppuVar10 = (undefined8 ***)local_58;
    }
    (**(code **)(*plVar4 + 0xe8))(plVar4,pppuVar10,0);
    (**(code **)(*plVar4 + 0xf8))(plVar4,uVar3);
    FUN_18020e450(&local_58);
    uVar5 = 2;
  }
  return uVar5;
}


