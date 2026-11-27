// 0x1801f3490  FUN_1801f3490
// size=205 thunk=false
// signature: undefined FUN_1801f3490()
// status: ok


ulonglong FUN_1801f3490(void)

{
  byte bVar1;
  char cVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  char in_stack_00000028;
  
  if (DAT_1803fa438 == (code *)0x0) {
    return in_RAX & 0xffffffffffffff00;
  }
  if (DAT_1803ff270 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001801f34d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*DAT_1803fa438)();
    return uVar3;
  }
  bVar1 = (*DAT_1803fa438)();
  if (DAT_1803f925e != '\0') {
    if (bVar1 == 0) {
      DAT_1803f925d = 1;
    }
    else if (in_stack_00000028 != '\0') {
      DAT_1803fa468 = DAT_1803fa468 + 1;
    }
  }
  cVar2 = FUN_18003a090("WriteUserCmd");
  if (cVar2 != '\0') {
    FUN_1802007c0();
  }
  return (ulonglong)bVar1;
}


