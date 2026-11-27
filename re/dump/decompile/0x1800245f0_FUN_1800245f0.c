// 0x1800245f0  FUN_1800245f0
// size=165 thunk=false
// signature: undefined FUN_1800245f0()
// status: ok


ulonglong FUN_1800245f0(int param_1)

{
  SHORT SVar1;
  undefined6 extraout_var;
  ulonglong uVar2;
  undefined6 extraout_var_00;
  int vKey;
  
  uVar2 = (ulonglong)(param_1 - 1U);
  if (0xfd < param_1 - 1U) goto switchD_180024635_caseD_6a;
  SVar1 = GetAsyncKeyState(param_1);
  uVar2 = CONCAT62(extraout_var,SVar1);
  if (SVar1 < 0) {
LAB_180024611:
    return CONCAT71((int7)(uVar2 >> 8),1);
  }
  if (param_1 - 0x60U < 0xf) {
    uVar2 = (ulonglong)(int)(param_1 - 0x60U);
    switch(param_1) {
    case 0x60:
      vKey = 0x2d;
      break;
    case 0x61:
      vKey = 0x23;
      break;
    case 0x62:
      vKey = 0x28;
      break;
    case 99:
      vKey = 0x22;
      break;
    case 100:
      vKey = 0x25;
      break;
    case 0x65:
      vKey = 0xc;
      break;
    case 0x66:
      vKey = 0x27;
      break;
    case 0x67:
      vKey = 0x24;
      break;
    case 0x68:
      vKey = 0x26;
      break;
    case 0x69:
      vKey = 0x21;
      break;
    default:
      goto switchD_180024635_caseD_6a;
    case 0x6e:
      vKey = 0x2e;
    }
    SVar1 = GetAsyncKeyState(vKey);
    uVar2 = CONCAT62(extraout_var_00,SVar1);
    if (SVar1 < 0) goto LAB_180024611;
  }
switchD_180024635_caseD_6a:
  return uVar2 & 0xffffffffffffff00;
}


