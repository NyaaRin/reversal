// 0x1800b5e40  FUN_1800b5e40
// size=226 thunk=false
// signature: undefined FUN_1800b5e40()
// status: ok


ulonglong FUN_1800b5e40(void *param_1,int param_2,float *param_3)

{
  BOOL BVar1;
  uint uVar2;
  ulonglong in_RAX;
  undefined4 extraout_var;
  longlong lVar3;
  float local_res20 [2];
  
  if ((-1 < DAT_1803e7c84) && (param_1 != (void *)0x0)) {
    BVar1 = IsBadReadPtr(param_1,8);
    in_RAX = CONCAT44(extraout_var,BVar1);
    if (BVar1 == 0) {
      lVar3 = FUN_1800b58b0();
      in_RAX = 0;
      if (lVar3 != 0) {
        lVar3 = FUN_1800b5940(param_1,lVar3);
        in_RAX = 0;
        if (lVar3 != 0) {
          local_res20[0] = 0.0;
          in_RAX = FUN_1800b2030((longlong)DAT_1803e7c84 + lVar3 + param_2 * 4,local_res20);
          if ((char)in_RAX != '\0') {
            uVar2 = (uint)local_res20[0] & 0x7f800000;
            in_RAX = (ulonglong)CONCAT31((int3)(uVar2 >> 8),uVar2 != 0x7f800000);
            if (((uVar2 != 0x7f800000) && (DAT_180381428 <= local_res20[0])) &&
               (local_res20[0] <= DAT_180381210)) {
              *param_3 = local_res20[0];
              return in_RAX;
            }
          }
        }
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}


