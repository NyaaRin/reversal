// 0x1800e5bc0  FUN_1800e5bc0
// size=378 thunk=false
// signature: undefined FUN_1800e5bc0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_1800e5bc0(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  double dVar8;
  undefined1 auStack_158 [48];
  char local_128 [272];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_158;
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
    dVar8 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);
    if (((int)dVar8 < 1) || (DAT_1803fa360 == (longlong *)0x0)) {
      uVar5 = (**(code **)(*plVar3 + 0x158))(plVar3,2);
      FUN_1800e3320(uVar5);
    }
    else {
      lVar4 = (**(code **)(*DAT_1803fa360 + 0x18))();
      uVar5 = (**(code **)(*plVar3 + 0x158))(plVar3,2);
      iVar2 = FUN_1800e3320(uVar5);
      if ((lVar4 != 0) && (0 < iVar2)) {
        lVar4 = iVar2 + lVar4;
        uVar6 = 0;
        do {
          if (*(char *)(lVar4 + uVar6) == '\0') goto LAB_1800e5cc8;
          local_128[uVar6] = *(char *)(lVar4 + uVar6);
          cVar1 = *(char *)(lVar4 + 1 + uVar6);
          if (cVar1 == '\0') {
            uVar6 = uVar6 + 1;
            break;
          }
          local_128[uVar6 + 1] = cVar1;
          cVar1 = *(char *)(lVar4 + 2 + uVar6);
          if (cVar1 == '\0') {
            uVar6 = uVar6 + 2;
            break;
          }
          local_128[uVar6 + 2] = cVar1;
          cVar1 = *(char *)(lVar4 + 3 + uVar6);
          if (cVar1 == '\0') {
            uVar6 = uVar6 + 3;
            break;
          }
          local_128[uVar6 + 3] = cVar1;
          uVar6 = uVar6 + 4;
        } while (uVar6 < 0x100);
        if (0x100 < uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_1802d8348();
        }
LAB_1800e5cc8:
        local_128[uVar6] = '\0';
        (**(code **)(*plVar3 + 0xe8))(plVar3,local_128,0);
        return 1;
      }
    }
    (**(code **)(*plVar3 + 0xe0))(plVar3);
  }
  return uVar7;
}


