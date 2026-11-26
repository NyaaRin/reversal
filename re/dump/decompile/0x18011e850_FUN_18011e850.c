// 0x18011e850  FUN_18011e850
// size=87 thunk=false
// signature: undefined FUN_18011e850()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18011e850(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_18011e240(param_2);
  if (cVar1 != '\0') {
    LOCK();
    _DAT_180401600 = _DAT_180401600 + 1;
    UNLOCK();
    return 0;
  }
  LOCK();
  _DAT_180401618 = _DAT_180401618 + 1;
  UNLOCK();
  FUN_18011e680(param_2);
                    /* WARNING: Could not recover jumptable at 0x00018011e8a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*DAT_180401608)(param_1,param_2);
  return uVar2;
}


