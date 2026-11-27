// 0x1800b1230  Features_Autowall_HomigradAutowall_vfunc02
// size=45 thunk=false
// signature: undefined Features_Autowall_HomigradAutowall_vfunc02()
// status: ok


ulonglong Features_Autowall_HomigradAutowall_vfunc02(undefined8 param_1,char *param_2)

{
  int iVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != (char *)0x0) {
    iVar1 = strcmp(param_2,"Z-City/Homigrad");
    uVar2 = CONCAT44(extraout_var,iVar1);
    if (iVar1 == 0) {
      return CONCAT71((int7)(uVar2 >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}


