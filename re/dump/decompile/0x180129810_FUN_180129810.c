// 0x180129810  FUN_180129810
// size=532 thunk=false
// signature: undefined FUN_180129810()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180129810(void)

{
  char cVar1;
  longlong *plVar2;
  char *pcVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 auStack_78 [32];
  char local_58;
  char local_57;
  int local_54;
  int local_50;
  longlong *local_48;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  if (DAT_1804015a4 == -1) {
    return;
  }
  local_18 = 0x93fd561a96ab0c67;
  local_20 = 0x5391b64679e936ba;
  plVar2 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_40,&local_18);
  plVar2 = (longlong *)FUN_180241a30(*plVar2 + 0x28,local_30,&local_20);
  pcVar3 = (char *)FUN_1801fcfc0(*plVar2 + 0x28);
  if (*pcVar3 == '\0') {
    return;
  }
  if (DAT_1803fa668 == (longlong *)0x0) {
    return;
  }
  if (DAT_1803fa360 == (longlong *)0x0) {
    return;
  }
  local_58 = 0;
  local_58 = (**(code **)(*DAT_1803fa668 + 0xd0))();
  if (local_58 == '\0') {
    return;
  }
  cVar1 = FUN_180129320();
  if (cVar1 == '\0') {
    return;
  }
  if ((DAT_1803fa608 != 0) && (iVar5 = *(int *)(DAT_1803fa608 + 0x1c), 0 < iVar5)) {
    local_18 = CONCAT44(local_18._4_4_,iVar5);
    if (iVar5 < 0x81) goto LAB_180129961;
  }
  local_54 = 0;
  if (DAT_1803fa668 != (longlong *)0x0) {
    local_54 = (**(code **)(*DAT_1803fa668 + 0xa8))();
  }
  iVar5 = 0x80;
  if (local_54 - 1U < 0x80) {
    iVar5 = local_54;
  }
  local_18 = CONCAT44(local_18._4_4_,iVar5);
LAB_180129961:
  local_50 = 0;
  local_50 = (**(code **)(*DAT_1803fa668 + 0x60))();
  iVar5 = 1;
  do {
    while( true ) {
      local_20 = CONCAT44(local_20._4_4_,iVar5);
      if ((int)local_18 < iVar5) {
        return;
      }
      if (iVar5 != local_50) break;
LAB_180129a3c:
      iVar5 = iVar5 + 1;
    }
    local_48 = (longlong *)0x0;
    plVar2 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,iVar5);
    if (plVar2 == (longlong *)0x0) goto LAB_180129a3c;
    local_48 = plVar2;
    plVar4 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2);
    if (plVar4 == (longlong *)0x0) {
      local_57 = '\x01';
    }
    else {
      local_57 = (**(code **)(*plVar4 + 0x40))(plVar4);
    }
    if (local_57 != '\0') goto LAB_180129a3c;
    cVar1 = FUN_1801297e0(plVar2);
    if (cVar1 == '\0') {
      DAT_1804015a8 = DAT_1804015a8 + 1;
      if (2 < DAT_1804015a8) {
        DAT_1804015a4 = 0xffffffff;
        FUN_180014410(&DAT_180358688);
        return;
      }
      goto LAB_180129a3c;
    }
    DAT_1804015a8 = 0;
    iVar5 = iVar5 + 1;
  } while( true );
}


