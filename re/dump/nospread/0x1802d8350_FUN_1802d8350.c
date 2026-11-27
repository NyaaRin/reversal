// 1802d8350  FUN_1802d8350
// signature: undefined FUN_1802d8350()
// status: ok


void FUN_1802d8350(size_t param_1)

{
  int iVar1;
  void *pvVar2;
  
  do {
    pvVar2 = malloc(param_1);
    if (pvVar2 != (void *)0x0) {
      return;
    }
    iVar1 = _callnewh(param_1);
  } while (iVar1 != 0);
  if (param_1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_180012fe0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802d90b0();
}


