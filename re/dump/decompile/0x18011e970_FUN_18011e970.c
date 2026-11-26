// 0x18011e970  FUN_18011e970
// size=175 thunk=false
// signature: undefined FUN_18011e970()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18011e970(code *UNRECOVERED_JUMPTABLE,undefined8 param_2,char *param_3)

{
  longlong lVar1;
  DWORD DVar2;
  char cVar3;
  DWORD DVar4;
  undefined8 uVar5;
  bool bVar6;
  
  LOCK();
  lVar1 = DAT_180401610 + 1;
  UNLOCK();
  bVar6 = DAT_180401610 == 0;
  DAT_180401610 = lVar1;
  if (bVar6) {
    FUN_180014410("[GMFilter] CallStr path is LIVE -- by-name dispatch reaches us\n");
  }
  cVar3 = FUN_18011e4d0(param_3);
  DVar2 = DAT_1803ff984;
  if (cVar3 == '\0') {
    LOCK();
    _DAT_180401618 = _DAT_180401618 + 1;
    UNLOCK();
    if (((DAT_1803ff954 != '\0') &&
        (((DAT_1803ff984 == 0 || (DVar4 = GetCurrentThreadId(), DVar2 == DVar4)) &&
         (param_3 != (char *)0x0)))) && (*param_3 != '\0')) {
      FUN_1801ff5b0();
    }
                    /* WARNING: Could not recover jumptable at 0x00018011ea1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*UNRECOVERED_JUMPTABLE)(param_2,param_3);
    return uVar5;
  }
  LOCK();
  _DAT_180401600 = _DAT_180401600 + 1;
  UNLOCK();
  return 0;
}


