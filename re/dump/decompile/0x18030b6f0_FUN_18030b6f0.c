// 0x18030b6f0  FUN_18030b6f0
// size=78 thunk=false
// signature: undefined FUN_18030b6f0()
// status: ok


void FUN_18030b6f0(void)

{
  uint uVar1;
  undefined *puVar2;
  
  uVar1 = (uint)DAT_1803fae38 & 3;
  puVar2 = DAT_1803fae28;
  if (uVar1 != 1) {
    if (uVar1 != 2) goto LAB_18030b723;
    puVar2 = &DAT_1803fae00;
  }
  (*(code *)*DAT_1803fae30)(puVar2);
LAB_18030b723:
  DAT_1803fae38 = 0;
  FUN_180241430(&DAT_1803fadf0);
  return;
}


