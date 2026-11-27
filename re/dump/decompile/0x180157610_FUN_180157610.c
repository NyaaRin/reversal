// 0x180157610  FUN_180157610
// size=1165 thunk=false
// signature: undefined FUN_180157610()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180157610(undefined8 *param_1,undefined4 param_2,code *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  ulonglong local_58;
  
  uVar5 = DAT_1803da4c0 ^ (ulonglong)auStack_c8;
  if ((((*(char *)(param_1 + 0x10) == '\0') && (DAT_1803fa678 != (longlong *)0x0)) &&
      (local_58 = uVar5, uVar5 = FUN_180154b40(), (char)uVar5 != '\0')) &&
     ((uVar5 = (**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,param_2), uVar5 != 0 &&
      (lVar1 = *(longlong *)(uVar5 + 8), lVar1 != 0)))) {
    local_98 = 0;
    lStack_90 = 0;
    local_88 = 0;
    lStack_80 = 0;
    local_78 = 0;
    lStack_70 = 0;
    local_68 = 0;
    lStack_60 = 0;
    uVar5 = FUN_1801572b0(lVar1,&local_98);
    lVar2 = local_98;
    if ((char)uVar5 != '\0') {
      iVar7 = 0;
      if (local_98 != 0) {
        uVar6 = (*param_3)(0);
        iVar3 = FUN_180242fc0(lVar2,uVar6,param_1);
        if ((iVar3 == 0) && (iVar4 = FUN_180243560(lVar2,1), iVar4 == 0)) {
          param_1[1] = lVar2;
          iVar7 = 1;
        }
        else {
          *param_1 = 0;
          local_a8 = FUN_1802436b0(iVar3);
          FUN_180014410("[FSCLOAK] %s file.%s @ %p: %s\n",param_4,PTR_DAT_18033c630,lVar2);
        }
      }
      lVar2 = lStack_90;
      if (lStack_90 != 0) {
        uVar6 = (*param_3)(1);
        iVar3 = FUN_180242fc0(lVar2,uVar6,param_1 + 2);
        if ((iVar3 == 0) && (iVar4 = FUN_180243560(lVar2,1), iVar4 == 0)) {
          param_1[3] = lVar2;
          iVar7 = iVar7 + 1;
        }
        else {
          param_1[2] = 0;
          local_a8 = FUN_1802436b0(iVar3);
          FUN_180014410("[FSCLOAK] %s file.%s @ %p: %s\n",param_4,PTR_s_Exists_18033c638,lVar2);
        }
      }
      lVar2 = local_88;
      if (local_88 != 0) {
        uVar6 = (*param_3)(2);
        iVar3 = FUN_180242fc0(lVar2,uVar6,param_1 + 4);
        if ((iVar3 == 0) && (iVar4 = FUN_180243560(lVar2,1), iVar4 == 0)) {
          param_1[5] = lVar2;
          iVar7 = iVar7 + 1;
        }
        else {
          param_1[4] = 0;
          local_a8 = FUN_1802436b0(iVar3);
          FUN_180014410("[FSCLOAK] %s file.%s @ %p: %s\n",param_4,PTR_s_IsDir_18033c640,lVar2);
        }
      }
      lVar2 = lStack_80;
      if (lStack_80 != 0) {
        uVar6 = (*param_3)(3);
        iVar3 = FUN_180242fc0(lVar2,uVar6,param_1 + 6);
        if ((iVar3 == 0) && (iVar4 = FUN_180243560(lVar2,1), iVar4 == 0)) {
          param_1[7] = lVar2;
          iVar7 = iVar7 + 1;
        }
        else {
          param_1[6] = 0;
          local_a8 = FUN_1802436b0(iVar3);
          FUN_180014410("[FSCLOAK] %s file.%s @ %p: %s\n",param_4,PTR_DAT_18033c648,lVar2);
        }
      }
      lVar2 = local_78;
      if (local_78 != 0) {
        uVar6 = (*param_3)(4);
        iVar3 = FUN_180242fc0(lVar2,uVar6,param_1 + 8);
        if ((iVar3 == 0) && (iVar4 = FUN_180243560(lVar2,1), iVar4 == 0)) {
          param_1[9] = lVar2;
          iVar7 = iVar7 + 1;
        }
        else {
          param_1[8] = 0;
          local_a8 = FUN_1802436b0(iVar3);
          FUN_180014410("[FSCLOAK] %s file.%s @ %p: %s\n",param_4,PTR_DAT_18033c650,lVar2);
        }
      }
      lVar2 = lStack_70;
      if (lStack_70 != 0) {
        uVar6 = (*param_3)(5);
        iVar3 = FUN_180242fc0(lVar2,uVar6,param_1 + 10);
        if ((iVar3 == 0) && (iVar4 = FUN_180243560(lVar2,1), iVar4 == 0)) {
          param_1[0xb] = lVar2;
          iVar7 = iVar7 + 1;
        }
        else {
          param_1[10] = 0;
          local_a8 = FUN_1802436b0(iVar3);
          FUN_180014410("[FSCLOAK] %s file.%s @ %p: %s\n",param_4,PTR_DAT_18033c658,lVar2);
        }
      }
      lVar2 = local_68;
      if (local_68 != 0) {
        uVar6 = (*param_3)(6);
        iVar3 = FUN_180242fc0(lVar2,uVar6,param_1 + 0xc);
        if ((iVar3 == 0) && (iVar4 = FUN_180243560(lVar2,1), iVar4 == 0)) {
          param_1[0xd] = lVar2;
          iVar7 = iVar7 + 1;
        }
        else {
          param_1[0xc] = 0;
          local_a8 = FUN_1802436b0(iVar3);
          FUN_180014410("[FSCLOAK] %s file.%s @ %p: %s\n",param_4,PTR_DAT_18033c660,lVar2);
        }
      }
      lVar2 = lStack_60;
      if (lStack_60 != 0) {
        uVar6 = (*param_3)(7);
        iVar3 = FUN_180242fc0(lVar2,uVar6,param_1 + 0xe);
        if ((iVar3 == 0) && (iVar4 = FUN_180243560(lVar2,1), iVar4 == 0)) {
          param_1[0xf] = lVar2;
          iVar7 = iVar7 + 1;
        }
        else {
          param_1[0xe] = 0;
          local_a8 = FUN_1802436b0(iVar3);
          FUN_180014410("[FSCLOAK] %s file.%s @ %p: %s\n",param_4,PTR_s_AsyncRead_18033c668,lVar2);
        }
      }
      *(int *)((longlong)param_1 + 0x84) = iVar7;
      *(bool *)(param_1 + 0x10) = iVar7 != 0;
      local_a8 = lVar1;
      FUN_180014410("[FSCLOAK] %s realm: %d/%d hooked (state=%p)\n",param_4,iVar7,8);
      return (ulonglong)*(byte *)(param_1 + 0x10);
    }
  }
  return uVar5 & 0xffffffffffffff00;
}


