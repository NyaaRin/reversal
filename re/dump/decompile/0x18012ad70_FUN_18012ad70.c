// 0x18012ad70  FUN_18012ad70
// size=288 thunk=false
// signature: undefined FUN_18012ad70()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18012ad70(char param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined1 auStack_58 [32];
  int local_38;
  char local_34;
  char local_33 [3];
  ulonglong local_30;
  
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  iVar5 = 0;
  while (iVar5 < 6) {
    plVar3 = (longlong *)(&DAT_180400bd0)[iVar5];
    puVar4 = &DAT_180401150;
    if (param_1 == '\0') {
      puVar4 = &DAT_180401118;
    }
    if ((plVar3 == (longlong *)0x0) || (lVar1 = puVar4[iVar5], lVar1 == 0)) {
      iVar5 = iVar5 + 1;
    }
    else {
      local_34 = '\0';
      local_38 = iVar5;
      plVar2 = (longlong *)(**(code **)(*plVar3 + 0x58))(plVar3,"$basetexture",&local_34,0);
      if ((local_34 != '\0') && (plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x70))(plVar2,lVar1);
      }
      local_33[0] = '\0';
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x58))(plVar3,"$frame",local_33);
      if ((local_33[0] != '\0') && (plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x20))(plVar3,param_2);
      }
      iVar5 = iVar5 + 1;
    }
  }
  return;
}


