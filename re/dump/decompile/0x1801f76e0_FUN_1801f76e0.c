// 0x1801f76e0  FUN_1801f76e0
// size=267 thunk=false
// signature: undefined FUN_1801f76e0()
// status: ok


ulonglong FUN_1801f76e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  LPVOID pvVar1;
  char cVar2;
  uint uVar3;
  BOOL BVar4;
  ulonglong uVar5;
  bool bVar6;
  LPVOID local_30;
  undefined8 local_28;
  
  if (DAT_1803fa488 == (code *)0x0) {
    return 0;
  }
  if ((DAT_1803facf8 != '\0') && (DAT_1803ff270 != '\0')) {
    LOCK();
    bVar6 = DAT_180425f84 == 0;
    if (bVar6) {
      DAT_180425f84 = 1;
    }
    UNLOCK();
    if (bVar6) {
      local_30 = (LPVOID)0x0;
      local_28 = 0;
      cVar2 = FUN_1800b77a0(param_1,&local_30);
      uVar3 = (*DAT_1803fa488)(param_1,param_2,param_3,param_4,cVar2);
      pvVar1 = local_30;
      if (((cVar2 != '\0') && (local_30 != (LPVOID)0x0)) &&
         (BVar4 = IsBadWritePtr(local_30,0x24), BVar4 == 0)) {
        *(undefined4 *)((longlong)pvVar1 + 0x10) = (undefined4)local_28;
        *(undefined4 *)((longlong)pvVar1 + 0x1c) = local_28._4_4_;
      }
      LOCK();
      DAT_180425f84 = 0;
      UNLOCK();
      return (ulonglong)uVar3;
    }
                    /* WARNING: Could not recover jumptable at 0x0001801f776c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*DAT_1803fa488)(param_1);
    return uVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x0001801f7736. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (*DAT_1803fa488)();
  return uVar5;
}


