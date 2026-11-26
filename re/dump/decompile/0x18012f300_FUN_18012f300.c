// 0x18012f300  FUN_18012f300
// size=1285 thunk=false
// signature: undefined FUN_18012f300()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_18012f300(void)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int *piVar8;
  char *pcVar9;
  float *pfVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  undefined1 auStack_b8 [32];
  uint local_98;
  uint local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  if ((DAT_1803fa668 == (longlong *)0x0) ||
     (cVar3 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  cVar3 = DAT_180401148;
  LOCK();
  DAT_180401148 = 0;
  UNLOCK();
  if (cVar3 != '\0') {
    FUN_18012da80(1);
    FUN_18012f290();
    uVar6 = FUN_18012ae90(local_78);
    FUN_18012bc40(uVar6);
    FUN_18021e290(local_78);
  }
  cVar3 = DAT_180400eb0;
  LOCK();
  DAT_180400eb0 = 0;
  UNLOCK();
  if (cVar3 != '\0') {
    if (!bVar2) {
      LOCK();
      UNLOCK();
      DAT_180400eb0 = 1;
      return (float *)0x0;
    }
    FUN_18012dc30();
  }
  local_58 = 0x93fd561a96ab0c67;
  local_50 = 0x8911f3778b8c2d42;
  plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_88,&local_58);
  plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_78,&local_50);
  piVar8 = (int *)FUN_1802029c0(*plVar7 + 0x28);
  iVar5 = *piVar8;
  if ((bVar2) && (DAT_1803fa46f == '\0')) {
    local_50 = 0x93fd561a96ab0c67;
    local_58 = 0x3cfd94a417011121;
    plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_78,&local_50);
    plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_88,&local_58);
    pcVar9 = (char *)FUN_1801fcfc0(*plVar7 + 0x28);
    if (*pcVar9 == '\0') goto LAB_18012f44e;
    bVar1 = true;
  }
  else {
LAB_18012f44e:
    bVar1 = false;
  }
  if (iVar5 == 0) {
    if (DAT_180400eb8 != 0) {
      FUN_18012c6f0(1);
    }
    local_50 = 0x93fd561a96ab0c67;
    local_58 = 0x4ebcf38ca2af7c6e;
    plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_78,&local_50);
    plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_88,&local_58);
    pfVar10 = (float *)FUN_1802029c0(*plVar7 + 0x28);
    if ((bVar1) && (*pfVar10 == 0.0)) {
      local_50 = 0x93fd561a96ab0c67;
      local_58 = 0x4f0efc17f02b64be;
      plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_78,&local_50);
      plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_88,&local_58);
      pfVar10 = (float *)FUN_1801fcfc0(*plVar7 + 0x28);
      if ((*(char *)pfVar10 != '\0') && (DAT_180400b70 != 0)) {
        if (DAT_180400e51 != '\0') {
          return pfVar10;
        }
        pfVar10 = (float *)FUN_18012e770();
        return pfVar10;
      }
    }
    if ((DAT_180400b80 == '\0') && (DAT_180400e51 == '\0')) {
      return pfVar10;
    }
    pfVar10 = (float *)FUN_18012f290();
    return pfVar10;
  }
  if (DAT_180400b80 != '\0') {
    FUN_18012f290();
  }
  local_50 = 0x93fd561a96ab0c67;
  local_58 = 0x4ebcf38ca2af7c6e;
  plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_78,&local_50);
  plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_88,&local_58);
  piVar8 = (int *)FUN_1802029c0(*plVar7 + 0x28);
  if (*piVar8 - 1U < 0xd) {
    pcVar9 = (&PTR_s_Custom___imported_18033bf70)[*piVar8];
  }
  else {
    pcVar9 = &DAT_1804010c0;
    if (DAT_1804010c0 == '\0') {
      pcVar9 = (char *)0x0;
    }
  }
  if (bVar1) {
    if (pcVar9 == (char *)0x0) {
      local_50 = 0x93fd561a96ab0c67;
      local_58 = 0x4f0efc17f02b64be;
      plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_78,&local_50);
      plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_88,&local_58);
      pcVar11 = (char *)FUN_1801fcfc0(*plVar7 + 0x28);
      if ((*pcVar11 == '\0') || (DAT_180400b70 == 0)) goto LAB_18012f626;
    }
    cVar3 = '\x01';
  }
  else {
LAB_18012f626:
    cVar3 = '\0';
  }
  if (bVar2) {
    pcVar11 = (char *)FUN_18012a9f0();
  }
  else {
    pcVar11 = (char *)0x0;
  }
  pcVar12 = "";
  if (pcVar9 != (char *)0x0) {
    pcVar12 = pcVar9;
  }
  uVar4 = strcmp(&DAT_180400b20,pcVar12);
  pfVar10 = (float *)(ulonglong)uVar4;
  if ((cVar3 != DAT_180425f88) ||
     ((cVar3 != '\0' && ((pcVar11 != (char *)0x0) != (bool)DAT_1803fcfa8)))) {
    local_90 = (uint)DAT_180400b70;
    local_98 = (uint)DAT_180400eb8;
    pcVar12 = "<vtf>";
    if (pcVar9 != (char *)0x0) {
      pcVar12 = pcVar9;
    }
    pcVar13 = "<null>";
    if (pcVar11 != (char *)0x0) {
      pcVar13 = pcVar11;
    }
    pfVar10 = (float *)FUN_180014410("[SKY] Update: want=%d sky=\'%s\' src=\'%s\' applied=%d texLoaded=%d\n"
                                     ,cVar3,pcVar13,pcVar12);
    DAT_1803fcfa8 = pcVar11 != (char *)0x0;
    DAT_180425f88 = cVar3;
  }
  if (DAT_180400eb8 != 0) {
    if ((((cVar3 != '\0') && (pcVar11 != (char *)0x0)) &&
        (iVar5 = strcmp(pcVar11,&DAT_180401180), iVar5 == 0)) && (uVar4 == 0)) {
      pfVar10 = (float *)0x0;
      if (((DAT_180401110 != '\0') && (pcVar9 == (char *)0x0)) && (1 < DAT_180400c04)) {
        local_50 = 0x93fd561a96ab0c67;
        local_58 = 0xaeca5b24c521e60;
        plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_78,&local_50);
        plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_88,&local_58);
        pfVar10 = (float *)FUN_180202dc0(*plVar7 + 0x28);
        if (DAT_1803809c4 < (float)((uint)(*pfVar10 - DAT_180400c00) & _DAT_1803817c0)) {
          FUN_180014410("[SKY] re-apply (fps %.1f -> %.1f)\n",(double)DAT_180400c00,(double)*pfVar10
                       );
          FUN_18012c6f0(0);
          pfVar10 = (float *)FUN_18012c830(pcVar11,0);
        }
      }
      goto LAB_18012f7d5;
    }
    pfVar10 = (float *)FUN_18012c6f0(1);
  }
  if (cVar3 == '\0') {
    return pfVar10;
  }
  if (pcVar11 == (char *)0x0) {
    return pfVar10;
  }
LAB_18012f7d5:
  if (DAT_180400eb8 == 0) {
    pfVar10 = (float *)FUN_18012c830(pcVar11,pcVar9);
  }
  return pfVar10;
}


