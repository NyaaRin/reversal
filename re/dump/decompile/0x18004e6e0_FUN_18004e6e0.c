// 0x18004e6e0  FUN_18004e6e0
// size=613 thunk=false
// signature: undefined FUN_18004e6e0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18004e6e0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  float fVar11;
  undefined1 auStack_78 [32];
  int *local_58;
  int *local_50;
  undefined *local_48;
  undefined4 local_40;
  int local_38 [2];
  int local_30 [2];
  int local_28 [2];
  ulonglong local_20;
  
  local_20 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
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
      local_28[0] = 0;
    }
    else {
      dVar10 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);
      local_28[0] = (int)dVar10;
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,6,4);
    if (cVar1 == '\0') {
      puVar7 = &DAT_18033f570;
    }
    else {
      puVar5 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,6,0);
      puVar7 = &DAT_18033f570;
      if (puVar5 != (undefined *)0x0) {
        puVar7 = puVar5;
      }
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,5,3);
    if (cVar1 == '\0') {
      iVar8 = 0;
    }
    else {
      dVar10 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,5);
      iVar8 = (int)dVar10;
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,4,3);
    if (cVar1 == '\0') {
      iVar9 = 0;
    }
    else {
      dVar10 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,4);
      iVar9 = (int)dVar10;
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,3,3);
    fVar11 = DAT_180380bb0;
    if (cVar1 != '\0') {
      dVar10 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);
      fVar11 = (float)dVar10;
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);
    if (cVar1 == '\0') {
      puVar5 = &DAT_1803431e8;
    }
    else {
      puVar6 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);
      puVar5 = &DAT_1803431e8;
      if (puVar6 != (undefined *)0x0) {
        puVar5 = puVar6;
      }
    }
    local_40 = 0;
    local_50 = local_38;
    local_58 = local_30;
    local_48 = puVar7;
    local_38[0] = iVar8;
    local_30[0] = iVar9;
    uVar2 = FUN_1802b1e50(puVar5,4,local_28,fVar11);
    (**(code **)(*plVar3 + 0xf0))(plVar3,(double)local_28[0]);
    (**(code **)(*plVar3 + 0xf8))(plVar3,uVar2);
    uVar4 = 2;
  }
  return uVar4;
}


