// 0x18004bad0  FUN_18004bad0
// size=395 thunk=false
// signature: undefined FUN_18004bad0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18004bad0(longlong param_1)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined1 *puVar7;
  char *pcVar8;
  undefined1 *puVar9;
  double dVar10;
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_1)) {
    uVar5 = 0;
  }
  else if (DAT_1803ff8ec == '\0') {
    (**(code **)(*plVar4 + 0xf8))(plVar4,0);
    (**(code **)(*plVar4 + 0xf8))(plVar4,1);
    uVar5 = 2;
  }
  else {
    cVar1 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);
    if (cVar1 == '\0') {
      pcVar8 = "mayrr";
    }
    else {
      pcVar6 = (char *)(**(code **)(*plVar4 + 0xb8))(plVar4,1,0);
      pcVar8 = "mayrr";
      if (pcVar6 != (char *)0x0) {
        pcVar8 = pcVar6;
      }
    }
    cVar1 = (**(code **)(*plVar4 + 0x138))(plVar4,2,1);
    if (cVar1 == '\0') {
      local_18[0] = 1;
    }
    else {
      local_18[0] = (**(code **)(*plVar4 + 200))(plVar4,2);
    }
    cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,3,3);
    puVar9 = (undefined1 *)0x0;
    if (cVar2 != '\0') {
      dVar10 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,3);
      puVar9 = (undefined1 *)(ulonglong)(uint)(int)dVar10;
    }
    puVar7 = local_18;
    if (cVar1 == '\0') {
      puVar7 = (undefined1 *)0x0;
    }
    uVar3 = FUN_180276630(pcVar8,puVar7,puVar9);
    FUN_180049be0(1);
    (**(code **)(*plVar4 + 0xf8))(plVar4,uVar3);
    (**(code **)(*plVar4 + 0xf8))(plVar4,local_18[0]);
    uVar5 = 2;
  }
  return uVar5;
}


