// 0x1801f7810  FUN_1801f7810
// size=183 thunk=false
// signature: undefined FUN_1801f7810()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801f7810(void)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  float local_18 [6];
  
  (*DAT_1803fa460)();
  pfVar2 = DAT_1803fa480;
  if (((DAT_180423572 != '\0') && (DAT_180423573 != '\0')) &&
     ((DAT_1803e90b8 < DAT_180380ba0 || (_DAT_180380bb4 < DAT_1803e90b8)))) {
    pfVar3 = local_18;
    local_18[0] = DAT_1803e90b8;
    if (DAT_1803e90b8 < DAT_1803809c4) {
      pfVar3 = (float *)&DAT_1803310e4;
    }
    if (DAT_180380e28 < DAT_1803e90b8) {
      pfVar3 = (float *)&DAT_1803310e0;
    }
    if ((DAT_1803fa428 != (float *)0x0) && (DAT_1803fa480 != (float *)0x0)) {
      fVar1 = *pfVar3;
      *DAT_1803fa428 = fVar1 * *DAT_1803fa428;
      *pfVar2 = fVar1 * *pfVar2;
    }
  }
  return;
}


