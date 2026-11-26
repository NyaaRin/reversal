// 0x18006bd90  FUN_18006bd90
// size=250 thunk=false
// signature: undefined FUN_18006bd90()
// status: ok


void FUN_18006bd90(void *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  BOOL BVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((param_1 != (void *)0x0) && (BVar4 = IsBadReadPtr(param_1,0x88), BVar4 == 0)) {
    lVar1 = *(longlong *)((longlong)param_1 + 0x48);
    lVar2 = *(longlong *)((longlong)param_1 + 0x50);
    lVar3 = *(longlong *)((longlong)param_1 + 0x58);
    if ((lVar1 == 0) || (lVar2 == 0)) {
      lVar5 = -1;
      lVar6 = lVar2 - lVar1;
    }
    else {
      lVar6 = lVar2 - lVar1;
      lVar5 = (longlong)*(int *)((longlong)param_1 + 0x44) + lVar6 * 8;
    }
    lVar7 = -1;
    if ((lVar1 == 0) || (lVar2 == 0)) {
      lVar6 = -1;
    }
    if ((lVar3 != 0) && (lVar1 != 0)) {
      lVar7 = lVar1 - lVar3;
    }
    FUN_180014410("[NWCAP] %s obj=%p bits@20=%d flag@30=%02X word@40=%08X avail@44=%d in@48=%p end@50=%p pktbase@58=%p 60=%08X 64=%08X flag@80=%02X | in-base=%lld end-in=%lld availBits=%lld\n"
                  ,param_2,param_1,*(undefined4 *)((longlong)param_1 + 0x20),
                  *(undefined1 *)((longlong)param_1 + 0x30),
                  *(undefined4 *)((longlong)param_1 + 0x40),*(int *)((longlong)param_1 + 0x44),lVar1
                  ,lVar2,lVar3,*(undefined4 *)((longlong)param_1 + 0x60),
                  *(undefined4 *)((longlong)param_1 + 100),*(undefined1 *)((longlong)param_1 + 0x80)
                  ,lVar7,lVar6,lVar5);
  }
  return;
}


