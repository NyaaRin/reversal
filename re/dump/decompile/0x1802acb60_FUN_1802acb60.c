// 0x1802acb60  FUN_1802acb60
// size=113 thunk=false
// signature: undefined FUN_1802acb60()
// status: ok


ulonglong FUN_1802acb60(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  
  pcVar2 = "#SCROLLY";
  if (param_2 == 0) {
    pcVar2 = "#SCROLLX";
  }
  uVar1 = FUN_180268980(pcVar2,0,*(undefined4 *)
                                  (param_1[0x22] + -4 + (longlong)(int)param_1[0x21] * 4));
  if (*(int *)(*param_1 + 0x1578) == (int)uVar1) {
    FUN_1802899e0(uVar1 & 0xffffffff,0xb,pcVar2);
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}


