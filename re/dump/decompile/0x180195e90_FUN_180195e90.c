// 0x180195e90  FUN_180195e90
// size=475 thunk=false
// signature: undefined FUN_180195e90()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180195e90(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong *plVar5;
  char *pcVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  if ((0 < param_1) && (DAT_1803fa360 != (longlong *)0x0)) {
    local_48 = 0x93fd561a96ab0c67;
    plVar5 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_60,&local_48);
    lVar8 = *plVar5 + 0x28;
    local_50 = 0x24da2018957c545b;
    plVar5 = (longlong *)FUN_180241a30(lVar8,local_78,&local_50);
    pcVar6 = (char *)FUN_1801fcfc0(*plVar5 + 0x28);
    if (*pcVar6 != '\0') {
      local_68 = (**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,param_1);
      cVar4 = FUN_18018a2e0(local_68);
      if (cVar4 != '\0') {
        local_50 = 0xe5a541a826b1810;
        plVar5 = (longlong *)FUN_180241a30(lVar8,local_78,&local_50);
        puVar7 = (undefined4 *)FUN_180202dc0(*plVar5 + 0x28);
        uVar1 = *puVar7;
        local_50 = 0xe5a571a826b1d29;
        plVar5 = (longlong *)FUN_180241a30(lVar8,local_78,&local_50);
        puVar7 = (undefined4 *)FUN_180202dc0(*plVar5 + 0x28);
        uVar2 = *puVar7;
        local_50 = 0xe5a5a1a826b2242;
        plVar5 = (longlong *)FUN_180241a30(lVar8,local_78,&local_50);
        puVar7 = (undefined4 *)FUN_180202dc0(*plVar5 + 0x28);
        uVar3 = *puVar7;
        local_50 = 0xe5a471a826b01f9;
        plVar5 = (longlong *)FUN_180241a30(lVar8,local_78,&local_50);
        puVar7 = (undefined4 *)FUN_180202dc0(*plVar5 + 0x28);
        *param_2 = *puVar7;
        param_2[1] = uVar3;
        param_2[2] = uVar2;
        param_2[3] = uVar1;
        return 1;
      }
    }
  }
  return 0;
}


