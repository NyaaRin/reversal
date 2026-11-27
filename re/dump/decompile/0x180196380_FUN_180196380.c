// 0x180196380  FUN_180196380
// size=1324 thunk=false
// signature: undefined FUN_180196380()
// status: ok


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180196380(void)

{
  uint uVar1;
  char cVar2;
  longlong *plVar3;
  uint *puVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_1918 [32];
  undefined1 local_18f8 [16];
  longlong local_18e8;
  undefined1 *local_18e0;
  undefined1 local_18d8 [16];
  longlong *local_18c8;
  undefined8 uStack_18c0;
  undefined4 local_1894;
  undefined4 local_1890;
  undefined4 local_188c;
  undefined1 local_1888;
  undefined1 local_1884 [6156];
  undefined1 local_78;
  undefined4 local_74;
  undefined1 local_64;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x180196392;
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_1918;
  FUN_1801924b0();
  if (DAT_1803fa608 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(DAT_1803fa608 + 0x20);
  }
  local_48 = 0x93fd561a96ab0c67;
  plVar3 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_18d8,&local_48);
  lVar8 = *plVar3 + 0x28;
  local_58 = 0xc0a7d35683114a67;
  plVar3 = (longlong *)FUN_180241a30(lVar8,local_18f8,&local_58);
  puVar4 = (uint *)FUN_1802029c0(*plVar3 + 0x28);
  uVar1 = *puVar4;
  local_58 = 0x908f1a603f411b5c;
  plVar3 = (longlong *)FUN_180241a30(lVar8,local_18f8,&local_58);
  pcVar5 = (char *)FUN_1801fcfc0(*plVar3 + 0x28);
  if (*pcVar5 == '\0') {
LAB_180196522:
    local_58 = 0x39a166e326dd1eac;
    plVar3 = (longlong *)FUN_180241a30(lVar8,local_18f8,&local_58);
    pcVar5 = (char *)FUN_1801fcfc0(*plVar3 + 0x28);
    if (*pcVar5 != '\0') {
      local_58 = 0x25b6fbdbfceb85c6;
      plVar3 = (longlong *)FUN_180241a30(lVar8,local_18f8,&local_58);
      piVar6 = (int *)FUN_1802029c0(*plVar3 + 0x28);
      if (*piVar6 == 1) {
        local_58 = 0xc3cc876af74b4db6;
        plVar3 = (longlong *)FUN_180241a30(lVar8,local_18f8,&local_58);
        piVar6 = (int *)FUN_1802029c0(*plVar3 + 0x28);
        if (*piVar6 != 1) goto LAB_1801965d6;
      }
    }
  }
  else {
    local_58 = 0x8a386bd0bf0679d2;
    plVar3 = (longlong *)FUN_180241a30(lVar8,local_18f8,&local_58);
    pcVar5 = (char *)FUN_1801fcfc0(*plVar3 + 0x28);
    if (*pcVar5 == '\0') {
      local_58 = 0x532b2e31ad1a6312;
      plVar3 = (longlong *)FUN_180241a30(lVar8,local_18f8,&local_58);
      pcVar5 = (char *)FUN_1801fcfc0(*plVar3 + 0x28);
      if (*pcVar5 == '\0') {
        local_58 = 0x1153f407eb06a5de;
        plVar3 = (longlong *)FUN_180241a30(lVar8,local_18f8,&local_58);
        pcVar5 = (char *)FUN_1801fcfc0(*plVar3 + 0x28);
        if (*pcVar5 == '\0') goto LAB_180196522;
      }
    }
    if (((uVar1 & 0xfffffffc) != 0) || (uVar1 == 1)) goto LAB_180196522;
LAB_1801965d6:
    if ((DAT_1803fa668 != (longlong *)0x0) &&
       (cVar2 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar2 != '\0')) {
      if (uVar1 != 3) {
        local_58 = 0xf7521f28977a3033;
        local_48 = 0x402819404e703058;
        plVar3 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_18f8,&local_58);
        plVar3 = (longlong *)FUN_180241a30(*plVar3 + 0x28,local_18d8,&local_48);
        pcVar5 = (char *)FUN_1801fcfc0(*plVar3 + 0x28);
        if (*pcVar5 == '\0') goto LAB_1801967c9;
      }
      if (iVar7 != DAT_1803e9678) {
        DAT_1803e9678 = iVar7;
        if (uVar1 == 3) {
          DAT_1803ff220 = FUN_1801960b0();
        }
        else {
          local_50 = 0;
          local_58 = 0;
          (**(code **)(*DAT_1803fa668 + 0x98))(DAT_1803fa668,&local_58);
          local_18c8 = (longlong *)0x0;
          uStack_18c0 = 0;
          local_1894 = 0xffffffff;
          local_1890 = 0;
          local_188c = 0xffffffff;
          local_1888 = 0;
          local_18e0 = local_1884;
          lVar8 = 0x80;
          while (local_18e8 = lVar8 + -1, lVar8 != 0) {
            local_18e0 = local_18e0 + 0x30;
            lVar8 = local_18e8;
          }
          local_74 = 0;
          local_64 = 0;
          local_78 = 0;
          local_40 = 0;
          local_48 = 0;
          cVar2 = FUN_1800cfb30(&local_58,&local_18c8,&local_48,0);
          if (((cVar2 == '\0') || (local_18c8 == (longlong *)0x0)) ||
             (lVar8 = (**(code **)(*local_18c8 + 0x20))(), lVar8 == 0)) {
            DAT_1803ff220 = 0;
          }
          else {
            plVar3 = (longlong *)(**(code **)(*local_18c8 + 0x20))();
            DAT_1803ff220 = (**(code **)(*plVar3 + 0x48))(plVar3);
          }
        }
      }
      goto LAB_1801967d9;
    }
  }
LAB_1801967c9:
  DAT_1803ff220 = 0;
  DAT_1803e9678 = -0x80000000;
LAB_1801967d9:
  FUN_180194eb0();
  FUN_180195400();
  FUN_1801226a0();
  local_58 = 0x93fd561a96ab0c67;
  local_48 = 0x228a0511fbcdbb9;
  plVar3 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_18f8,&local_58);
  plVar3 = (longlong *)FUN_180241a30(*plVar3 + 0x28,local_18d8,&local_48);
  pcVar5 = (char *)FUN_1801fcfc0(*plVar3 + 0x28);
  if (*pcVar5 != '\0') {
    iVar7 = 1;
    while( true ) {
      local_48 = CONCAT44(local_48._4_4_,iVar7);
      if (*(int *)(DAT_1803fa608 + 0x1c) < iVar7) break;
      lVar8 = (**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,iVar7);
      if (lVar8 == 0) {
        iVar7 = iVar7 + 1;
      }
      else {
        FUN_18018b900(lVar8);
        iVar7 = iVar7 + 1;
      }
    }
    FUN_180192700();
    FUN_180184940();
  }
  return;
}


