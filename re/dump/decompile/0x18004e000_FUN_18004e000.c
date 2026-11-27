// 0x18004e000  FUN_18004e000
// size=540 thunk=false
// signature: undefined FUN_18004e000()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18004e000(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_88 [32];
  float *local_68;
  undefined *local_60;
  float local_48 [2];
  float local_40 [2];
  float local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_2)) {
    uVar4 = 0;
  }
  else if (DAT_1803ff8ec == '\0') {
    uVar4 = FUN_18004a240(param_2);
  }
  else {
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,2,3);
    fVar9 = 0.0;
    if (cVar1 == '\0') {
      local_38[0] = 0.0;
    }
    else {
      dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,2);
      local_38[0] = (float)dVar8;
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,5,4);
    if (cVar1 == '\0') {
      puVar7 = &DAT_1803431c8;
    }
    else {
      puVar5 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,5,0);
      puVar7 = &DAT_1803431c8;
      if (puVar5 != (undefined *)0x0) {
        puVar7 = puVar5;
      }
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,4,3);
    fVar10 = DAT_180380bb0;
    if (cVar1 != '\0') {
      dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,4);
      fVar10 = (float)dVar8;
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,3,3);
    if (cVar1 != '\0') {
      dVar8 = (double)(**(code **)(*plVar3 + 0xc0))(plVar3,3);
      fVar9 = (float)dVar8;
    }
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,1,4);
    if (cVar1 == '\0') {
      puVar5 = &DAT_1803431d0;
    }
    else {
      puVar6 = (undefined *)(**(code **)(*plVar3 + 0xb8))(plVar3,1,0);
      puVar5 = &DAT_1803431d0;
      if (puVar6 != (undefined *)0x0) {
        puVar5 = puVar6;
      }
    }
    local_68 = local_48;
    local_60 = puVar7;
    local_48[0] = fVar10;
    local_40[0] = fVar9;
    uVar2 = FUN_1802b2b30(puVar5,8,local_38,local_40);
    (**(code **)(*plVar3 + 0xf0))(plVar3,(double)local_38[0]);
    (**(code **)(*plVar3 + 0xf8))(plVar3,uVar2);
    uVar4 = 2;
  }
  return uVar4;
}


