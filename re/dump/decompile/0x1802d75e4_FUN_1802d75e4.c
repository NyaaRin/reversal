// 0x1802d75e4  FUN_1802d75e4
// size=39 thunk=false
// signature: undefined FUN_1802d75e4()
// status: ok


ulonglong FUN_1802d75e4(void)

{
  UINT UVar1;
  BOOL BVar2;
  ulonglong uVar3;
  
  UVar1 = ___lc_codepage_func();
  uVar3 = 0xfde9;
  if (UVar1 != 0xfde9) {
    BVar2 = AreFileApisANSI();
    uVar3 = (ulonglong)(BVar2 == 0);
  }
  return uVar3;
}


