// 1802d31a0  FUN_1802d31a0
// signature: undefined FUN_1802d31a0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1802d31a0(undefined8 param_1,int *param_2,undefined8 param_3,char param_4)

{
  SHORT SVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined6 extraout_var;
  undefined6 extraout_var_00;
  undefined6 extraout_var_01;
  int iVar5;
  bool bVar6;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  iVar2 = FUN_18027b010();
  bVar6 = DAT_18042622c != iVar2;
  if (bVar6) {
    if (param_2 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *param_2;
    }
    uVar3 = FUN_1802d2b60(iVar5);
    local_88 = param_1;
    FUN_180012ac0(local_78,0x40,"[%s]###%s",uVar3);
  }
  else {
    FUN_180012ac0(local_78,0x40,"[Press a key]###%s",param_1);
  }
  uVar4 = FUN_1802abf60(local_78,param_3,0);
  if (((char)uVar4 != '\0') && (uVar4 = 0, DAT_18042622c = iVar2, DAT_180426230 = bVar6, !bVar6)) {
    DAT_18042622c = 0;
  }
  if ((DAT_18042622c == iVar2) && (param_2 != (int *)0x0)) {
    iVar2 = 1;
    if (DAT_180426230 != '\0') {
      SVar1 = GetAsyncKeyState(1);
      uVar4 = CONCAT62(extraout_var,SVar1);
      if (-1 < SVar1) {
        DAT_180426230 = '\0';
      }
    }
    if (param_4 == '\0') {
      do {
        if (1 < iVar2 - 1U) {
          SVar1 = GetAsyncKeyState(iVar2);
          uVar4 = CONCAT62(extraout_var_00,SVar1);
          if (SVar1 < 0) {
LAB_1802d3300:
            DAT_18042622c = 0;
            DAT_180426230 = 0;
            if (iVar2 == 0x1b) {
              iVar2 = 0;
            }
            *param_2 = iVar2;
            return 1;
          }
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0xff);
    }
    else {
      do {
        while ((iVar2 == 1 && (DAT_180426230 != '\0'))) {
          iVar2 = 2;
        }
        SVar1 = GetAsyncKeyState(iVar2);
        uVar4 = CONCAT62(extraout_var_01,SVar1);
        if (SVar1 < 0) goto LAB_1802d3300;
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0xff);
    }
  }
  return uVar4 & 0xffffffffffffff00;
}


