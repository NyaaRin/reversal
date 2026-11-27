// 0x18006cca0  FUN_18006cca0
// size=131 thunk=false
// signature: undefined FUN_18006cca0()
// status: ok


ulonglong FUN_18006cca0(longlong param_1,ushort param_2,undefined2 *param_3)

{
  undefined2 *lp;
  void *lp_00;
  BOOL BVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  undefined4 extraout_var_00;
  
  lp = (undefined2 *)(param_1 + (ulonglong)param_2 * 0x48);
  BVar1 = IsBadReadPtr(lp,0x48);
  if (BVar1 == 0) {
    *param_3 = *lp;
    param_3[1] = lp[1];
    lp_00 = *(void **)(lp + 4);
    *(void **)(param_3 + 4) = lp_00;
    *(undefined2 **)(param_3 + 8) = lp + 8;
    *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(lp + 0xe);
    uVar2 = (ulonglong)*(uint *)(lp + 0x10);
    *(uint *)(param_3 + 0xe) = *(uint *)(lp + 0x10);
    if (lp_00 != (void *)0x0) {
      BVar1 = IsBadReadPtr(lp_00,1);
      uVar2 = CONCAT44(extraout_var_00,BVar1);
      if (BVar1 != 0) {
        *(undefined8 *)(param_3 + 4) = 0;
      }
    }
    uVar2 = CONCAT71((int7)(uVar2 >> 8),1);
  }
  else {
    uVar2 = CONCAT44(extraout_var,BVar1) & 0xffffffffffffff00;
  }
  return uVar2;
}


