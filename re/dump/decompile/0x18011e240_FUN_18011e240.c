// 0x18011e240  FUN_18011e240
// size=648 thunk=false
// signature: undefined FUN_18011e240()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_18011e240(uint param_1)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 auStack_f8 [32];
  char *local_d8;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  ulonglong local_a8 [2];
  char local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_f8;
  plVar3 = *(longlong **)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)((longlong)plVar3 + 0xf49) == '\0') goto LAB_18011e4a5;
  local_a8[1] = 0x7a7f52ad97e147b7;
  local_a8[0] = 0x93fd561a96ab0c67;
  plVar3 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_b8,local_a8);
  plVar3 = (longlong *)FUN_180241a30(*plVar3 + 0x28,local_c8,local_a8 + 1);
  plVar3 = (longlong *)FUN_1801fcfc0(*plVar3 + 0x28);
  if ((char)*plVar3 == '\0') goto LAB_18011e4a5;
  local_a8[0] = CONCAT44(local_a8[0]._4_4_,param_1);
  puVar5 = (undefined8 *)
           (((((ulonglong)(param_1 >> 0x10) & 0xff ^
              ((ulonglong)(param_1 >> 8 & 0xff) ^
              ((ulonglong)param_1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3) *
              0x100000001b3 ^ (ulonglong)(param_1 >> 0x18)) * 0x100000001b3 & DAT_1805beee0) * 0x10
           + DAT_1805beec8);
  plVar3 = (longlong *)puVar5[1];
  if (plVar3 == DAT_1805beeb8) {
LAB_18011e368:
    plVar3 = (longlong *)0x0;
  }
  else {
    uVar1 = *(uint *)(plVar3 + 2);
    while (param_1 != uVar1) {
      if (plVar3 == (longlong *)*puVar5) goto LAB_18011e368;
      plVar3 = (longlong *)plVar3[1];
      uVar1 = *(uint *)(plVar3 + 2);
    }
  }
  plVar6 = DAT_1805beeb8;
  if (plVar3 != (longlong *)0x0) {
    plVar6 = plVar3;
  }
  if (plVar6 != DAT_1805beeb8) {
    iVar2 = *(int *)((longlong)plVar6 + 0x14);
    goto LAB_18011e429;
  }
  plVar3 = DAT_1804015d8;
  if ((DAT_1804015d8 == (longlong *)0x0) || (*DAT_1804015d8 == 0)) goto LAB_18011e4a5;
  plVar3 = (longlong *)FUN_18011e150(*DAT_1804015d8,param_1,local_98);
  iVar2 = (int)plVar3;
  if (local_98[0] == '\0') goto LAB_18011e4a5;
  plVar3 = (longlong *)FUN_180217700();
  *(int *)(*plVar3 + 0x14) = iVar2;
  if (local_98[0] != '\0') {
    plVar3 = (longlong *)(ulonglong)DAT_1803fe9f8;
    if (iVar2 == 0) {
      if (0x3b < (int)DAT_1803fe9f8) goto LAB_18011e429;
LAB_18011e3e3:
      DAT_1803fe9f8 = DAT_1803fe9f8 + 1;
    }
    else if ((int)DAT_1803fe9f8 < 0x3c) goto LAB_18011e3e3;
    if (iVar2 == 1) {
      local_d8 = "[HUD tier: skip when hide=ON]";
    }
    else {
      local_d8 = "";
      if (iVar2 == 2) {
        local_d8 = "[Lifecycle tier: skip when More=ON]";
      }
    }
    plVar3 = (longlong *)
             FUN_180014410("[GMFilter] hookId %d (0x%X) = \"%s\" %s\n",local_a8[0] & 0xffffffff,
                           local_a8[0] & 0xffffffff,local_98);
  }
LAB_18011e429:
  if (iVar2 == 1) {
    return 1;
  }
  if (iVar2 == 2) {
    local_a8[0] = 0x2b08eda621452889;
  }
  else if (iVar2 == 4) {
    local_a8[0] = 0x59d309e8a2eb12f6;
  }
  else {
    if (iVar2 != 5) {
LAB_18011e4a5:
      return (ulonglong)plVar3 & 0xffffffffffffff00;
    }
    local_a8[0] = 0x2e9325269e4e4100;
  }
  local_a8[1] = 0x93fd561a96ab0c67;
  plVar3 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c8,local_a8 + 1);
  plVar3 = (longlong *)FUN_180241a30(*plVar3 + 0x28,local_b8,local_a8);
  pbVar4 = (byte *)FUN_1801fcfc0(*plVar3 + 0x28);
  return (ulonglong)*pbVar4;
}


