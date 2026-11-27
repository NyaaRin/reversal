// 0x180195a30  FUN_180195a30
// size=551 thunk=false
// signature: undefined FUN_180195a30()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180195a30(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 local_70;
  ulonglong local_68;
  
  local_68 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  if (0 < param_1) {
    local_70 = 0x93fd561a96ab0c67;
    plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_88,&local_70);
    lVar10 = *plVar6 + 0x28;
    local_78 = 0x908f1a603f411b5c;
    plVar6 = (longlong *)FUN_180241a30(lVar10,local_98,&local_78);
    pcVar7 = (char *)FUN_1801fcfc0(*plVar6 + 0x28);
    if (*pcVar7 == '\0') {
      return 0;
    }
    local_78 = 0x532b2e31ad1a6312;
    plVar6 = (longlong *)FUN_180241a30(lVar10,local_98,&local_78);
    pcVar7 = (char *)FUN_1801fcfc0(*plVar6 + 0x28);
    if (*pcVar7 == '\0') {
      return 0;
    }
    local_78 = 0xc0a7d35683114a67;
    plVar6 = (longlong *)FUN_180241a30(lVar10,local_98,&local_78);
    piVar8 = (int *)FUN_1802029c0(*plVar6 + 0x28);
    iVar4 = *piVar8;
    if (iVar4 == 0) {
      iVar5 = DAT_1803ff220;
      if (param_1 == DAT_1803fea00) goto LAB_180195b4a;
    }
    else {
      iVar5 = DAT_1803fea00;
      if ((iVar4 != 1) && (iVar5 = DAT_1803ff220, 1 < iVar4 - 2U)) {
        return 0;
      }
    }
    if (param_1 == iVar5) {
LAB_180195b4a:
      local_78 = 0xfccc6c3fa335993f;
      plVar6 = (longlong *)FUN_180241a30(lVar10,local_98,&local_78);
      puVar9 = (undefined4 *)FUN_180202dc0(*plVar6 + 0x28);
      uVar1 = *puVar9;
      local_78 = 0xfccc6d3fa3359af2;
      plVar6 = (longlong *)FUN_180241a30(lVar10,local_98,&local_78);
      puVar9 = (undefined4 *)FUN_180202dc0(*plVar6 + 0x28);
      uVar2 = *puVar9;
      local_78 = 0xfccc6a3fa33595d9;
      plVar6 = (longlong *)FUN_180241a30(lVar10,local_98,&local_78);
      puVar9 = (undefined4 *)FUN_180202dc0(*plVar6 + 0x28);
      uVar3 = *puVar9;
      local_78 = 0xfccc7d3fa335b622;
      plVar6 = (longlong *)FUN_180241a30(lVar10,local_98,&local_78);
      puVar9 = (undefined4 *)FUN_180202dc0(*plVar6 + 0x28);
      *param_2 = *puVar9;
      param_2[1] = uVar3;
      param_2[2] = uVar2;
      param_2[3] = uVar1;
      return 1;
    }
  }
  return 0;
}


