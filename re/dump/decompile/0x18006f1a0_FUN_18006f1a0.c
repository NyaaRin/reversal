// 0x18006f1a0  FUN_18006f1a0
// size=208 thunk=false
// signature: undefined FUN_18006f1a0()
// status: ok


void FUN_18006f1a0(undefined8 param_1)

{
  longlong *plVar1;
  char *pcVar2;
  size_t sVar3;
  longlong *plVar4;
  char *_Str;
  
  if ((DAT_1803fa678 == (longlong *)0x0) ||
     (plVar1 = (longlong *)(**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0),
     plVar1 == (longlong *)0x0)) {
    pcVar2 = (char *)0x0;
  }
  else {
    pcVar2 = (char *)(**(code **)(*plVar1 + 0xb8))(plVar1,1,0);
  }
  plVar1 = (longlong *)0x0;
  _Str = "";
  if (pcVar2 != (char *)0x0) {
    _Str = pcVar2;
  }
  sVar3 = strlen(_Str);
  FUN_180212700(&DAT_1803eb838,_Str,sVar3);
  if (DAT_18042586d != '\0') {
    plVar4 = plVar1;
    if (DAT_1803fa678 != (longlong *)0x0) {
      plVar4 = (longlong *)(**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0);
    }
    if (plVar4 != (longlong *)0x0) {
      plVar1 = (longlong *)(**(code **)(*plVar4 + 0xb8))(plVar4,1,0);
    }
    FUN_18006f000(plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00018006f26f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1803fefd8)(param_1);
  return;
}


