// 0x1800abd90  FUN_1800abd90
// size=279 thunk=false
// signature: undefined FUN_1800abd90()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800abd90(float *param_1,undefined ***param_2)

{
  char cVar1;
  undefined ***pppuVar2;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined **local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_88 [54];
  char local_52;
  char local_51;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_e8;
  if (DAT_1803fa610 != 0) {
    if (((uint)*param_1 & 0x7f800000) != 0x7f800000) {
      if (((uint)param_1[1] & 0x7f800000) != 0x7f800000) {
        if (((uint)param_1[2] & 0x7f800000) != 0x7f800000) {
          local_b0 = param_1[2] + DAT_180380bb0;
          local_a8 = vftable_CDoubleTraceFilter;
          local_b8 = *param_1 + 0.0;
          local_b4 = param_1[1] + 0.0;
          local_c8 = local_88;
          pppuVar2 = &local_a8;
          if (param_2 != (undefined ***)0x0) {
            pppuVar2 = param_2;
          }
          local_a0 = 0;
          uStack_98 = 0;
          cVar1 = FUN_1800abbc0(0,&local_b8,local_b4,pppuVar2);
          if ((cVar1 != '\0') && ((local_51 != '\0' || (local_52 != '\0')))) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}


