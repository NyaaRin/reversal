// 0x1801f6a20  FUN_1801f6a20
// size=657 thunk=false
// signature: undefined FUN_1801f6a20()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801f6a20(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 auStack_d8 [32];
  char local_b8;
  undefined1 local_b7;
  undefined1 local_b6;
  undefined1 local_b5;
  undefined1 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 local_88 [2];
  undefined1 local_78 [64];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  undefined2 local_24;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_d8;
  uVar6 = FUN_1801f1840();
  if (DAT_1803fa440 != 0) {
    if (DAT_1803ff270 == '\0') {
      FUN_1801f1b00(uVar6,param_1,param_2);
    }
    else {
      DAT_1803f925b = '\0';
      local_90 = 0x93fd561a96ab0c67;
      local_88[0] = 0x6c96c33ad11a014c;
      plVar3 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_a0,&local_90);
      plVar3 = (longlong *)FUN_180241a30(*plVar3 + 0x28,&local_b8,local_88);
      pcVar4 = (char *)FUN_1801fcfc0(*plVar3 + 0x28);
      if (*pcVar4 == '\0') {
        LOCK();
        DAT_1804236a5 = 0;
        UNLOCK();
      }
      else {
        FUN_180118b80();
      }
      uVar6 = FUN_180118e50(&local_b8);
      FUN_1801f1b00(uVar6,param_1,param_2);
      lVar1 = DAT_1803fa660;
      if ((local_b8 != '\0') && (DAT_1803fa660 != 0)) {
        *(undefined1 *)(DAT_1803fa660 + 0x90) = local_b7;
        *(undefined1 *)(lVar1 + 0x91) = local_b6;
        *(undefined1 *)(lVar1 + 0x92) = local_b5;
        *(undefined1 *)(lVar1 + 0x93) = local_b4;
        *(undefined4 *)(lVar1 + 0x94) = local_b0;
        *(undefined4 *)(lVar1 + 0x98) = local_ac;
        *(undefined4 *)(lVar1 + 0x9c) = local_a8;
        *(undefined4 *)(lVar1 + 0xa0) = local_a4;
      }
      if ((DAT_1803f9258 == '\0') || (DAT_1803fa478 == 0)) {
        DAT_1803f925b = '\x01';
      }
      else if (DAT_1803f925b == '\0') {
        if (DAT_1803ff25d == '\0') {
          return;
        }
        if (DAT_1803fa668 == (longlong *)0x0) {
          return;
        }
        cVar2 = (**(code **)(*DAT_1803fa668 + 0xd0))();
        if (cVar2 != '\0') {
          DAT_1803ff264 = DAT_1803ff264 + 1;
        }
        if (DAT_1803f925b == '\0') {
          return;
        }
      }
      if (DAT_1803fa608 == 0) {
        iVar5 = -1;
      }
      else {
        iVar5 = *(int *)(DAT_1803fa608 + 4);
      }
      local_2c = 0x42b40000;
      local_28 = 0xffffffff;
      local_24 = 0;
      AcquireSRWLockShared((PSRWLOCK)&DAT_1804260d8);
      FUN_1802d4780(local_78,&DAT_1805707c0);
      local_38 = DAT_1805c7c00;
      local_34 = DAT_1805c7c04;
      local_30 = DAT_1805c7c08;
      local_2c = DAT_1803da5c0;
      local_28 = DAT_1803e7498;
      local_24 = CONCAT11(DAT_1803fe650,DAT_180425428);
      ReleaseSRWLockShared((PSRWLOCK)&DAT_1804260d8);
      if (((DAT_1803fa668 != (longlong *)0x0) &&
          (cVar2 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar2 != '\0')) && (local_28 != iVar5)) {
        FUN_1801f5b70();
      }
      if (DAT_1803f925b != '\0') {
        FUN_1801f62b0();
      }
    }
  }
  return;
}


