// 0x1800d6550  FUN_1800d6550
// size=124 thunk=false
// signature: undefined FUN_1800d6550()
// status: ok


ulonglong FUN_1800d6550(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  ulonglong in_RAX;
  undefined8 uVar2;
  char *pcVar3;
  ulonglong uVar4;
  undefined4 extraout_var;
  
  if ((param_1 == 0) || (param_2 == (undefined8 *)0x0)) {
    uVar4 = in_RAX & 0xffffffffffffff00;
  }
  else {
    uVar2 = FUN_180241610(&DAT_1803fadf0,0x93fd561a96ab0c67);
    uVar2 = FUN_180241610(uVar2,0xb180266dc2efa3d2);
    pcVar3 = (char *)FUN_1801fcfc0(uVar2);
    if (*pcVar3 == '\0') {
      uVar4 = (ulonglong)pcVar3 & 0xffffffffffffff00;
    }
    else {
      pcVar3 = (char *)(**(code **)*param_2)(param_2);
      uVar4 = 0;
      if (pcVar3 != (char *)0x0) {
        iVar1 = strcmp(pcVar3,"Z-City/Homigrad");
        uVar4 = CONCAT44(extraout_var,iVar1);
        if (iVar1 == 0) {
          return CONCAT71((int7)(uVar4 >> 8),1);
        }
      }
      uVar4 = uVar4 & 0xffffffffffffff00;
    }
  }
  return uVar4;
}


