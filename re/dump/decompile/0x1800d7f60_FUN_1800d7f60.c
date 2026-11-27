// 0x1800d7f60  FUN_1800d7f60
// size=210 thunk=false
// signature: undefined FUN_1800d7f60()
// status: ok


undefined1 FUN_1800d7f60(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  
  if (param_2 < (char *)0x10001) {
    return 0;
  }
  pcVar1 = strstr(param_2,"weapon_ar2");
  if (((((pcVar1 == (char *)0x0) && (pcVar1 = strstr(param_2,"weapon_smg1"), pcVar1 == (char *)0x0))
       && (pcVar1 = strstr(param_2,"CWeaponAR2"), pcVar1 == (char *)0x0)) &&
      ((pcVar1 = strstr(param_2,"CWeaponSMG1"), pcVar1 == (char *)0x0 &&
       (pcVar1 = strstr(param_2,"AR2"), pcVar1 == (char *)0x0)))) &&
     ((pcVar1 = strstr(param_2,"SMG1"), pcVar1 == (char *)0x0 &&
      ((pcVar1 = strstr(param_2,"ar2"), pcVar1 == (char *)0x0 &&
       (pcVar1 = strstr(param_2,"smg1"), pcVar1 == (char *)0x0)))))) {
    return 0;
  }
  return 1;
}


