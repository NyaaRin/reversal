// 0x1801fafb0  FUN_1801fafb0
// size=792 thunk=false
// signature: undefined FUN_1801fafb0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801fafb0(void)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  BOOL BVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_58 [32];
  DWORD local_38;
  DWORD local_34;
  ulonglong local_30;
  
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  FUN_180071870();
  DAT_1803ff270 = 0;
  DAT_1803e89e0 = 0;
  FUN_1801225a0();
  FUN_1801fb2d0();
  FUN_180115da0();
  FUN_1801fb2d0();
  FUN_1801ecf00();
  FUN_1801fb2d0();
  FUN_1801fb2d0();
  FUN_1801fb2d0();
  FUN_1801fb2d0();
  FUN_1801fb2d0();
  FUN_1801fb2d0();
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_1803fa400);
  iVar6 = 0;
  plVar5 = (longlong *)*DAT_1803faac0;
  cVar1 = *(char *)((longlong)plVar5 + 0x19);
  plVar2 = DAT_1803faac0;
  while (DAT_1803faac0 = plVar2, cVar1 == '\0') {
    if (((plVar5[4] != 0) && (plVar5[5] != 0)) &&
       (BVar4 = IsBadReadPtr((void *)(plVar5[4] + 0x9f0),8), BVar4 == 0)) {
      local_38 = 0;
      BVar4 = VirtualProtect((LPVOID)(plVar5[4] + 0x9f0),8,0x40,&local_38);
      if (BVar4 != 0) {
        LOCK();
        if (*(code **)(plVar5[4] + 0x9f0) == FUN_1801ee2f0) {
          *(longlong *)(plVar5[4] + 0x9f0) = plVar5[5];
        }
        UNLOCK();
        local_34 = 0;
        VirtualProtect((LPVOID)(plVar5[4] + 0x9f0),8,local_38,&local_34);
        iVar6 = iVar6 + 1;
      }
    }
    plVar2 = (longlong *)plVar5[2];
    if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar2 + 0x19);
      plVar5 = plVar2;
      plVar2 = (longlong *)*plVar2;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*plVar2 + 0x19);
        plVar5 = plVar2;
        plVar2 = (longlong *)*plVar2;
      }
    }
    else {
      cVar1 = *(char *)(plVar5[1] + 0x19);
      plVar3 = (longlong *)plVar5[1];
      plVar2 = plVar5;
      while ((plVar5 = plVar3, cVar1 == '\0' && (plVar2 == (longlong *)plVar5[2]))) {
        cVar1 = *(char *)(plVar5[1] + 0x19);
        plVar3 = (longlong *)plVar5[1];
        plVar2 = plVar5;
      }
    }
    plVar2 = DAT_1803faac0;
    cVar1 = *(char *)((longlong)plVar5 + 0x19);
  }
  cVar1 = *(char *)(plVar2[1] + 0x19);
  plVar5 = (longlong *)plVar2[1];
  while (cVar1 == '\0') {
    FUN_180214c40(&DAT_1803faac0,&DAT_1803faac0,plVar5[2]);
    plVar3 = (longlong *)*plVar5;
    free(plVar5);
    plVar5 = plVar3;
    cVar1 = *(char *)((longlong)plVar3 + 0x19);
  }
  plVar2[1] = (longlong)plVar2;
  *plVar2 = (longlong)plVar2;
  plVar2[2] = (longlong)plVar2;
  _DAT_1803faac8 = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1803fa400);
  if (iVar6 != 0) {
    FUN_180014410("[UNLOAD] SWEP PrimaryAttack restored on %d weapon vtables\n",iVar6);
  }
  FUN_1801fb2d0();
  FUN_1801fb2d0();
  FUN_1801fb2d0();
  FUN_1801fb2d0();
  FUN_1801fb2d0();
  FUN_1801fb2d0();
  FUN_1801fb2d0();
  FUN_1801fb2d0();
  FUN_180014410("[UNLOAD] all vtables restored\n");
  return;
}


