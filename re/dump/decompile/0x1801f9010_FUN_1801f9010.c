// 0x1801f9010  FUN_1801f9010
// size=202 thunk=false
// signature: undefined FUN_1801f9010()
// status: ok


undefined8 FUN_1801f9010(int param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  longlong lVar1;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  char local_38;
  
  if (((((DAT_1803fa360 != (longlong *)0x0) && (0 < param_1)) && (param_2 != (float *)0x0)) &&
      ((param_3 != (float *)0x0 && (param_4 != (float *)0x0)))) && (param_5 != (float *)0x0)) {
    lVar1 = (**(code **)(*DAT_1803fa360 + 0x18))();
    if (lVar1 != 0) {
      FUN_180190220(&local_48,lVar1,0);
      if (local_38 != '\0') {
        *param_2 = local_48;
        *param_3 = local_44;
        *param_4 = local_40 - local_48;
        *param_5 = local_3c - local_44;
        if ((0.0 < *param_4) && (0.0 < local_3c - local_44)) {
          return 1;
        }
      }
    }
  }
  return 0;
}


