// 0x18006cc20  FUN_18006cc20
// size=114 thunk=false
// signature: undefined FUN_18006cc20()
// status: ok


longlong FUN_18006cc20(longlong param_1,int param_2,uint param_3,undefined2 *param_4)

{
  undefined8 uVar1;
  BOOL BVar2;
  undefined4 extraout_var;
  uint7 uVar4;
  longlong lVar3;
  uint *lp;
  
  lp = (uint *)((longlong)param_2 * 0x30 + param_1);
  BVar2 = IsBadReadPtr(lp,0x30);
  uVar4 = (uint7)(CONCAT44(extraout_var,BVar2) >> 8);
  if (BVar2 == 0) {
    if (((param_3 ^ *lp) & 0xffffc000) == 0) {
      param_4[1] = *(undefined2 *)((longlong)lp + 0x22);
      *param_4 = (short)lp[8];
      uVar1 = *(undefined8 *)(lp + 4);
      *(undefined8 *)(param_4 + 4) = uVar1;
      lVar3 = CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
    }
    else {
      lVar3 = (ulonglong)uVar4 << 8;
    }
  }
  else {
    lVar3 = (ulonglong)uVar4 << 8;
  }
  return lVar3;
}


