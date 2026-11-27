// 0x1801ebcd0  FUN_1801ebcd0
// size=299 thunk=false
// signature: undefined FUN_1801ebcd0()
// status: ok


ulonglong FUN_1801ebcd0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined4 param_6)

{
  longlong lVar1;
  undefined1 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 unaff_retaddr;
  undefined8 local_38 [3];
  
  if (DAT_1803fa4f8 == (code *)0x0) {
    return 0x8876086c;
  }
  if (DAT_1803ff270 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001801ebd17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*DAT_1803fa4f8)();
    return uVar5;
  }
  uVar2 = FUN_1801eb5c0();
  cVar3 = FUN_1801eb640();
  if ((cVar3 != '\0') && (param_2 == DAT_1803fa580)) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar1 + 0xec8) == '\0') {
      if (*(char *)(lVar1 + 0xec9) == '\0') {
        cVar3 = FUN_1801ebc10(unaff_retaddr);
        if (cVar3 == '\0') goto LAB_1801ebdd8;
      }
      local_38[0] = 0;
      cVar3 = FUN_1801eba30(local_38,uVar2);
      if (cVar3 != '\0') {
        uVar4 = FUN_1801eb750(param_1,local_38[0],param_4,param_3,param_5,param_6);
        FUN_1801ebb90();
        return (ulonglong)uVar4;
      }
    }
  }
LAB_1801ebdd8:
                    /* WARNING: Could not recover jumptable at 0x0001801ebdf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (*DAT_1803fa4f8)(param_1,param_2,param_3,param_4);
  return uVar5;
}


