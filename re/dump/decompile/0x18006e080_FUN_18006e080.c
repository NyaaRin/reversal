// 0x18006e080  FUN_18006e080
// size=168 thunk=false
// signature: undefined FUN_18006e080()
// status: ok


ulonglong FUN_18006e080(longlong *param_1)

{
  BOOL BVar1;
  ulonglong in_RAX;
  undefined4 extraout_var;
  ulonglong uVar2;
  undefined4 extraout_var_00;
  char *lp;
  undefined4 extraout_var_01;
  char *pcVar3;
  bool bVar4;
  
  if (param_1 < (longlong *)0x10000) {
    uVar2 = in_RAX & 0xffffffffffffff00;
  }
  else {
    BVar1 = IsBadReadPtr(param_1,8);
    uVar2 = CONCAT44(extraout_var,BVar1);
    if (BVar1 == 0) {
      if ((void *)*param_1 != (void *)0x0) {
        BVar1 = IsBadReadPtr((void *)*param_1,0x50);
        uVar2 = CONCAT44(extraout_var_00,BVar1);
        if (BVar1 == 0) {
          lp = (char *)(**(code **)(*param_1 + 8))(param_1);
          uVar2 = 0;
          if (lp != (char *)0x0) {
            BVar1 = IsBadReadPtr(lp,1);
            uVar2 = CONCAT44(extraout_var_01,BVar1);
            if (BVar1 == 0) {
              pcVar3 = "networkstring";
              for (; *lp != '\0'; lp = lp + 1) {
                bVar4 = *lp == *pcVar3;
                if (!bVar4) goto LAB_18006e113;
                pcVar3 = pcVar3 + 1;
              }
              bVar4 = *pcVar3 == '\0';
LAB_18006e113:
              return CONCAT71((int7)((ulonglong)pcVar3 >> 8),bVar4);
            }
          }
          return uVar2 & 0xffffffffffffff00;
        }
      }
      uVar2 = uVar2 & 0xffffffffffffff00;
    }
    else {
      uVar2 = uVar2 & 0xffffffffffffff00;
    }
  }
  return uVar2;
}


