// 0x1801225a0  FUN_1801225a0
// size=250 thunk=false
// signature: undefined FUN_1801225a0()
// status: ok


void FUN_1801225a0(void)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  LOCK();
  DAT_1803e8970 = DAT_1803e8970 + 1;
  UNLOCK();
  FUN_18020b400(&DAT_1805c3990);
  FUN_18020aea0(&DAT_180458210);
  FUN_18020da70(&DAT_1805c7b10);
  lVar2 = DAT_1803edd50;
  lVar4 = DAT_1803edd48;
  if (DAT_1803edd48 != DAT_1803edd50) {
    do {
      FUN_18020e450(lVar4);
      lVar4 = lVar4 + 0x20;
    } while (lVar4 != lVar2);
    DAT_1803edd50 = DAT_1803edd48;
  }
  iVar3 = _Mtx_lock(&DAT_1803e8990);
  if (iVar3 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_1803e89dc == 0x7fffffff) {
    DAT_1803e89dc = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  if (DAT_1803e9bf0 != DAT_1803e9bf8) {
    DAT_1803e9bf8 = DAT_1803e9bf0;
  }
  FUN_18020b2d0(&DAT_1805c7b50);
  FUN_180209ce0(&DAT_180458250);
                    /* WARNING: Could not recover jumptable at 0x000180122693. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Mtx_unlock(&DAT_1803e8990);
  return;
}


