// 0x180243910  FUN_180243910
// size=90 thunk=false
// signature: undefined FUN_180243910()
// status: ok


ulonglong FUN_180243910(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  
  uVar2 = param_1[4];
  uVar1 = (param_1[1] - *param_1 >> 4) * -0x5555555555555555;
  if (uVar1 < uVar2 || uVar1 - uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180262180();
  }
  puVar3 = (ulonglong *)(uVar2 * 0x30 + *param_1);
  uVar2 = puVar3[2];
  if ((*puVar3 == uVar2) && (uVar2 = puVar3[3], puVar3[1] == uVar2)) {
    return uVar2 & 0xffffffffffffff00;
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}


