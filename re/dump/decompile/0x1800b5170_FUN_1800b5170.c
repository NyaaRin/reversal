// 0x1800b5170  FUN_1800b5170
// size=140 thunk=false
// signature: undefined FUN_1800b5170()
// status: ok


void FUN_1800b5170(void)

{
  char cVar1;
  
  if (DAT_18040a608 == (code *)0x0) {
    return;
  }
  if ((((DAT_18040a628 == '\0') && (cVar1 = FUN_1800b5000(), cVar1 != '\0')) && (DAT_1803fa608 != 0)
      ) && (((DAT_18040a62c <= (float)*(double *)(DAT_1803fa608 + 0x10) &&
             ((float)*(double *)(DAT_1803fa608 + 0x10) - DAT_18040a62c <= DAT_180380a58)) &&
            ((DAT_18040a5f8 != 0 && (DAT_18040a5f0 != 0)))))) {
    FUN_1800b50c0();
                    /* WARNING: Could not recover jumptable at 0x0001800b51e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_18040a608)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001800b51f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_18040a608)();
  return;
}


