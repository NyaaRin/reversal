// 0x180130390  FUN_180130390
// size=301 thunk=false
// signature: undefined FUN_180130390()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180130390(undefined4 param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  char local_70 [8];
  ulonglong local_68;
  
  local_68 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  uVar3 = 0;
  while (uVar3 < (ulonglong)((DAT_1803ea298 - DAT_1803ea290 >> 3) * -0x5555555555555555)) {
    plVar1 = *(longlong **)(DAT_1803ea290 + uVar3 * 0x18);
    if (plVar1 == (longlong *)0x0) {
      uVar3 = uVar3 + 1;
    }
    else {
      local_78 = uVar3;
      if (*(char *)(DAT_1803ea290 + 8 + uVar3 * 0x18) != '\0') {
        local_70[0] = '\0';
        plVar2 = (longlong *)(**(code **)(*plVar1 + 0x58))(plVar1,"$color",local_70,0);
        if ((local_70[0] != '\0') && (plVar2 != (longlong *)0x0)) {
          uVar4 = param_1;
          uVar5 = param_2;
          uVar6 = param_3;
          if (param_4 != '\0') {
            uVar4 = *(undefined4 *)(DAT_1803ea290 + 0xc + uVar3 * 0x18);
            uVar5 = *(undefined4 *)(DAT_1803ea290 + 0x10 + uVar3 * 0x18);
            uVar6 = *(undefined4 *)(DAT_1803ea290 + 0x14 + uVar3 * 0x18);
          }
          (**(code **)(*plVar2 + 0x50))(plVar2,uVar4,uVar5,uVar6);
        }
      }
      (**(code **)(*plVar1 + 0xe0))(plVar1,param_1,param_2,param_3);
      uVar3 = uVar3 + 1;
    }
  }
  return;
}


