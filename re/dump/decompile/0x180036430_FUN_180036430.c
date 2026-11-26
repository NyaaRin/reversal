// 0x180036430  FUN_180036430
// size=527 thunk=false
// signature: undefined FUN_180036430()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_180036430(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
             char param_5,longlong param_6,char *param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  longlong local_70;
  longlong lStack_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  if (param_2 == (longlong *)0x0) {
    iVar1 = 0;
  }
  else if ((DAT_1803fb088 == (code *)0x0) || (param_2[1] == 0)) {
    iVar1 = (**(code **)*param_2)(param_2);
  }
  else {
    iVar1 = (*DAT_1803fb088)();
  }
  local_78 = 0;
  (*DAT_1803faed8)(param_1);
  (*DAT_1803faef0)(param_1,param_3);
  iVar2 = (*DAT_1803faff8)(param_1,0xffffffff);
  if (iVar2 == 5) {
    if (param_2 == (longlong *)0x0) {
      uVar3 = 0;
    }
    else if ((DAT_1803fb088 == (code *)0x0) || (param_2[1] == 0)) {
      uVar3 = (**(code **)*param_2)();
    }
    else {
      uVar3 = (*DAT_1803fb088)();
    }
    local_70 = 0;
    lStack_68 = 0;
    local_60 = 0;
    FUN_180034850(param_1,uVar3,&local_70,0x40);
    uVar5 = lStack_68 - local_70 >> 5;
    if (1 < uVar5) {
      local_78 = 1;
      if (param_5 == '\0') {
        if (((*param_7 == '\0') &&
            ((ulonglong)(*(longlong *)(param_6 + 0x30) - *(longlong *)(param_6 + 0x28) >> 5) < uVar5
            )) && ((longlong *)(param_6 + 0x28) != &local_70)) {
          FUN_180219bd0();
        }
      }
      else {
        if ((longlong *)(param_6 + 0x28) != &local_70) {
          FUN_180219bd0();
        }
        *param_7 = '\x01';
      }
    }
    FUN_18020d5c0(&local_70);
  }
  do {
    if (param_2 != (longlong *)0x0) {
      if ((DAT_1803fb088 != (code *)0x0) && (param_2[1] != 0)) {
        iVar2 = (*DAT_1803fb088)();
        goto LAB_1800365ce;
      }
      iVar2 = (**(code **)*param_2)(param_2);
      goto LAB_1800365ce;
    }
    do {
      iVar2 = 0;
LAB_1800365ce:
      if (iVar2 <= iVar1) {
        return local_78;
      }
    } while (param_2 == (longlong *)0x0);
    if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (param_2[1] == 0)) {
      (**(code **)(*param_2 + 0x10))(param_2,1);
    }
    else {
      iVar4 = (*DAT_1803fb088)();
      iVar2 = 0;
      if (-1 < iVar4 + -1) {
        iVar2 = iVar4 + -1;
      }
      (*DAT_1803faf10)(param_2[1],iVar2);
    }
  } while( true );
}


