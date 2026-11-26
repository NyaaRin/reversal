// 0x18001f750  FUN_18001f750
// size=120 thunk=false
// signature: undefined FUN_18001f750()
// status: ok


char * FUN_18001f750(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  char *pcVar4;
  char *pcVar5;
  
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x20))();
  if (plVar3 != (longlong *)0x0) {
    uVar2 = (**(code **)(*plVar3 + 0x48))(plVar3);
    if (DAT_1803fa668 != (longlong *)0x0) {
      pcVar5 = (char *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x1fb0)
      ;
      cVar1 = (**(code **)(*DAT_1803fa668 + 0x40))(DAT_1803fa668,uVar2,pcVar5);
      pcVar4 = "unknown";
      if (cVar1 != '\0') {
        pcVar4 = pcVar5;
      }
      return pcVar4;
    }
  }
  return "unknown";
}


