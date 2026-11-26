// 0x180114b30  FUN_180114b30
// size=423 thunk=false
// signature: undefined FUN_180114b30()
// status: ok


undefined8 FUN_180114b30(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  char *pcVar5;
  int local_res8 [2];
  int local_res10 [2];
  undefined8 in_stack_ffffffffffffffd8;
  uint uVar6;
  
  uVar6 = (uint)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  if ((DAT_1803fa640 != (longlong *)0x0) && (DAT_1803fa668 != 0)) {
    local_res8[0] = 0;
    local_res10[0] = 0;
    cVar3 = FUN_180114990(local_res8,local_res10);
    iVar2 = local_res10[0];
    iVar1 = local_res8[0];
    if (local_res8[0] < 1) {
      return 0;
    }
    if (local_res10[0] < 1) {
      return 0;
    }
    if (DAT_18040a378 != 0) {
      if ((local_res8[0] != DAT_18040a290) || (local_res10[0] != DAT_18040a36c)) {
        AcquireSRWLockExclusive((PSRWLOCK)&DAT_18040a280);
        uVar4 = DAT_18040a258;
        DAT_1803e8844 = DAT_1803e8844 + 1;
        DAT_18040a378 = 0;
        DAT_18040a26c = 0;
        LOCK();
        DAT_18040a389 = 0;
        UNLOCK();
        DAT_18040a258 = 0;
        DAT_18040a380 = 0;
        DAT_18040a368 = 0;
        DAT_18040a370 = 0;
        DAT_18040a388 = 0;
        ReleaseSRWLockExclusive((PSRWLOCK)&DAT_18040a280);
        DAT_18040a38a = 0;
        FUN_180114540(uVar4);
      }
      if (DAT_18040a378 != 0) {
        return 1;
      }
    }
    if (cVar3 == '\0') {
      uVar4 = 4;
    }
    else {
      uVar4 = 5;
    }
    DAT_18040a378 =
         (**(code **)(*DAT_1803fa640 + 0x2c0))
                   (DAT_1803fa640,iVar1,iVar2,uVar4,(ulonglong)uVar6 << 0x20,cVar3 != '\0');
    if (DAT_18040a378 != 0) {
      DAT_18040a290 = iVar1;
      DAT_18040a36c = iVar2;
      pcVar5 = "FULLFB";
      if (cVar3 != '\0') {
        pcVar5 = "OFFSCREEN";
      }
      FUN_180014410("[SP] cleanRT created %dx%d %s (%p)\n",iVar1,iVar2,pcVar5,DAT_18040a378);
      return 1;
    }
  }
  return 0;
}


