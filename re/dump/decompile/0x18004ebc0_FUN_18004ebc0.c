// 0x18004ebc0  FUN_18004ebc0
// size=461 thunk=false
// signature: undefined FUN_18004ebc0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18004ebc0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  double dVar10;
  undefined1 auStack_68 [32];
  int *local_48;
  undefined *local_40;
  int local_28 [2];
  int local_20 [2];
  int local_18 [2];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_2)) {
    uVar4 = 0;
  }
  else if (DAT_1803ff8ec == '\0') {
    uVar4 = FUN_18004a240(param_2);
  }
  else {
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);
    if (cVar1 == '\0') {
      local_18[0] = 0;
    }
    else {
      dVar10 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);
      local_18[0] = (int)dVar10;
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,4,3);
    if (cVar1 == '\0') {
      iVar8 = 100;
    }
    else {
      dVar10 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,4);
      iVar8 = (int)dVar10;
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,3,3);
    if (cVar1 == '\0') {
      iVar7 = 1;
    }
    else {
      dVar10 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);
      iVar7 = (int)dVar10;
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);
    if (cVar1 == '\0') {
      puVar6 = &DAT_1803431f8;
    }
    else {
      puVar5 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);
      puVar6 = &DAT_1803431f8;
      if (puVar5 != (undefined *)0x0) {
        puVar6 = puVar5;
      }
    }
    local_48 = local_28;
    if (iVar8 < 1) {
      local_48 = (int *)0x0;
    }
    piVar9 = local_20;
    if (iVar7 < 1) {
      piVar9 = (int *)0x0;
    }
    local_40 = &DAT_18033f570;
    local_28[0] = iVar8;
    local_20[0] = iVar7;
    uVar2 = FUN_1802b3a10(puVar6,4,local_18,piVar9);
    (**(code **)(*plVar3 + 0xf0))(plVar3,(double)local_18[0]);
    (**(code **)(*plVar3 + 0xf8))(plVar3,uVar2);
    uVar4 = 2;
  }
  return uVar4;
}


