// 0x180117450  FUN_180117450
// size=811 thunk=false
// signature: undefined FUN_180117450()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_180117450(undefined8 param_1)

{
  bool bVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  char *pcVar8;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  if (((DAT_1804236a5 == '\0') && (DAT_180423650 == 0)) && (DAT_1804236a0 == 0)) {
    cVar4 = FUN_180117170();
    if (cVar4 != '\0') {
      local_28._0_7_ = (uint7)(uint)local_28;
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_180423628);
      AcquireSRWLockShared((PSRWLOCK)&DAT_180423640);
      if ((((DAT_1804236a0 == 0) && (DAT_1804236b0 == 0)) && (DAT_18042359c == 0)) &&
         (DAT_180423678 == 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      ReleaseSRWLockShared((PSRWLOCK)&DAT_180423640);
      DAT_180423678 = DAT_180423678 + 1;
      local_28 = CONCAT44(local_28._4_4_,DAT_1803e90bc);
      DAT_180423580 = 1;
      local_28 = CONCAT17(1,(uint7)local_28);
      if (!bVar1) {
        if (DAT_1803fa608 == 0) {
          DAT_1803e90d4 = 0xffffffff;
        }
        else {
          DAT_1803e90d4 = *(undefined4 *)(DAT_1803fa608 + 4);
        }
        DAT_180423618 = GetTickCount64();
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180423628);
      if (DAT_180423630 == (code *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (*DAT_180423630)(param_1);
      }
      goto LAB_180117754;
    }
  }
  local_28 = 0x93fd561a96ab0c67;
  local_20 = 0x6c96c33ad11a014c;
  plVar7 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_48,&local_28);
  plVar7 = (longlong *)FUN_180241a30(*plVar7 + 0x28,local_38,&local_20);
  pcVar8 = (char *)FUN_1801fcfc0(*plVar7 + 0x28);
  local_28._0_5_ = (uint5)(uint)local_28;
  local_28 = local_28 & 0xffffffffffffff;
  cVar4 = *pcVar8;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_180423628);
  AcquireSRWLockShared((PSRWLOCK)&DAT_180423640);
  if (((DAT_1804236a0 == 0) && (DAT_1804236b0 == 0)) &&
     ((DAT_18042359c == 0 && (DAT_180423678 == 0)))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180423640);
  uVar2 = local_28;
  local_28 = CONCAT44(local_28._4_4_,DAT_1803e90bc);
  if (cVar4 != '\0') {
    LOCK();
    DAT_1804236a0 = DAT_1804236a0 + 1;
    UNLOCK();
    local_28._5_3_ = SUB83(uVar2,5);
    local_28._0_5_ = CONCAT14(1,DAT_1803e90bc);
  }
  uVar5 = FUN_180071590(1);
  uVar3 = local_28;
  DAT_18042359c = DAT_18042359c + 1;
  DAT_180423610 = 1;
  local_28._7_1_ = SUB81(uVar3,7);
  local_28._0_7_ = CONCAT16(1,CONCAT15(uVar5,(uint5)local_28));
  if (!bVar1) {
    if (DAT_1803fa608 == 0) {
      DAT_1803e90d4 = 0xffffffff;
    }
    else {
      DAT_1803e90d4 = *(undefined4 *)(DAT_1803fa608 + 4);
    }
    DAT_180423618 = GetTickCount64();
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180423628);
  if (cVar4 != '\0') {
    if (DAT_180409880 != '\0') {
      FUN_18012a2e0();
      FUN_18012a210(0);
    }
    if (DAT_1803fa46f == '\0') {
      FUN_18012fcf0(0);
    }
    if ((DAT_180401593 != '\0') && (DAT_1803fa46f == '\0')) {
      FUN_180130390(DAT_180380bb0,DAT_180380bb0,DAT_180380bb0,1);
    }
  }
  if (DAT_180423630 == (code *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (*DAT_180423630)(param_1);
  }
  if (cVar4 != '\0') {
    FUN_18012a350();
    if (DAT_180409880 != '\0') {
      FUN_18012a210(1);
    }
    if (DAT_1803fa46f == '\0') {
      FUN_18012fcf0(1);
    }
    if ((DAT_180401593 != '\0') && (DAT_1803fa46f == '\0')) {
      FUN_180130920();
    }
  }
LAB_180117754:
  FUN_180071780(&local_28);
  return uVar6;
}


