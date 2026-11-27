// 0x18030b740  FUN_18030b740
// size=78 thunk=false
// signature: undefined FUN_18030b740()
// status: ok


void FUN_18030b740(void)

{
  uint uVar1;
  undefined *puVar2;
  
  uVar1 = (uint)DAT_1803fade8 & 3;
  puVar2 = DAT_1803fadd8;
  if (uVar1 != 1) {
    if (uVar1 != 2) goto LAB_18030b773;
    puVar2 = &DAT_1803fadb0;
  }
  (*(code *)*DAT_1803fade0)(puVar2);
LAB_18030b773:
  DAT_1803fade8 = 0;
  FUN_180241430(&DAT_1803fada0);
  return;
}


