// 0x18006e9c0  FUN_18006e9c0
// size=332 thunk=false
// signature: undefined FUN_18006e9c0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18006e9c0(void *param_1,int param_2,undefined4 param_3)

{
  BOOL BVar1;
  longlong *lp;
  
  if ((((DAT_1803fefe0 != '\0') && (DAT_1803fa668 != (longlong *)0x0)) &&
      (lp = (longlong *)(**(code **)(*DAT_1803fa668 + 0x240))(), lp != (longlong *)0x0)) &&
     (((BVar1 = IsBadReadPtr(lp,8), BVar1 == 0 &&
       (BVar1 = IsBadReadPtr((void *)*lp,0x148), BVar1 == 0)) && (param_2 < 0x1001)))) {
    _DAT_1805ba2e0 = _DAT_1803fef00;
    uRam00000001805ba2e8 = uRam00000001803fef08;
    _DAT_1805ba2f0 = _DAT_1803fef10;
    uRam00000001805ba2f8 = uRam00000001803fef18;
    _DAT_1805ba300 = _DAT_1803fef20;
    uRam00000001805ba308 = uRam00000001803fef28;
    _DAT_1805ba310 = _DAT_1803fef30;
    uRam00000001805ba318 = uRam00000001803fef38;
    _DAT_1805ba320 = _DAT_1803fef40;
    uRam00000001805ba328 = uRam00000001803fef48;
    _DAT_1805ba330 = _DAT_1803fef50;
    uRam00000001805ba338 = uRam00000001803fef58;
    _DAT_1805ba340 = (undefined *)_DAT_1803fef60;
    uRam00000001805ba348 = uRam00000001803fef68;
    _DAT_1805ba350 = _DAT_1803fef70;
    uRam00000001805ba358 = uRam00000001803fef78;
    memset(&DAT_18042bd00,0,0x1010);
    memcpy(&DAT_18042bd00,param_1,(longlong)param_2);
    _DAT_1805ba300 = CONCAT44(DAT_1805ba300_4,param_3);
    _DAT_1805ba340 = &DAT_18042bd00;
    (**(code **)(*lp + 0x140))(lp,&DAT_1805ba2e0,0,0);
  }
  return;
}


