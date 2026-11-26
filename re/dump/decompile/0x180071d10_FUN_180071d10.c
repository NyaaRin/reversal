// 0x180071d10  FUN_180071d10
// size=950 thunk=false
// signature: undefined FUN_180071d10()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180071d10(float *param_1,float *param_2)

{
  char cVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_108 [32];
  float local_e8;
  undefined4 local_e4;
  float local_e0;
  float local_dc;
  float local_d8 [2];
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b0;
  float local_ac;
  float local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_1803da4c0 ^ (ulonglong)auStack_108;
  cVar1 = FUN_180071c60();
  if (cVar1 != '\0') {
    fVar5 = DAT_180430160 - DAT_180430190;
    if (((uint)fVar5 & 0x7f800000) != 0x7f800000) {
      fVar4 = DAT_180430164 - DAT_180430194;
      if (((uint)fVar4 & 0x7f800000) != 0x7f800000) {
        fVar6 = DAT_180430168 - DAT_180430198;
        if ((((((uint)fVar6 & 0x7f800000) != 0x7f800000) &&
             (fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6 <= DAT_1803812c4)) &&
            (((uint)DAT_180430170 & 0x7f800000) != 0x7f800000)) &&
           ((((uint)DAT_180430174 & 0x7f800000) != 0x7f800000 &&
            (((uint)DAT_180430178 & 0x7f800000) != 0x7f800000)))) {
          if ((DAT_1803e9ad0 <= DAT_180381420) ||
             (local_e0 = DAT_1803e9ad0, DAT_180381188 <= DAT_1803e9ad0)) {
            local_e0 = 0.0;
          }
          if (DAT_180423964 == '\0') {
            pfVar3 = &local_dc;
            local_d8[0] = 0.9;
            local_dc = 0.0;
            if (0.0 <= DAT_180423980) {
              pfVar3 = &DAT_180423980;
            }
            pfVar2 = local_d8;
            if (DAT_180423980 <= DAT_180380b68) {
              pfVar2 = pfVar3;
            }
            local_e8 = (DAT_180380bb0 - *pfVar2) * DAT_1803e9ac8;
          }
          else {
            local_e8 = DAT_1803e9ac8;
            local_e0 = 0.0;
          }
          local_e4 = DAT_1803e9acc;
          FUN_1802d3e70(&local_e8,&local_d0,&local_c0,&local_b0);
          *param_1 = fVar4 * local_cc + fVar5 * local_d0 + fVar6 * local_c8;
          param_1[1] = fVar4 * local_bc + fVar5 * local_c0 + fVar6 * local_b8;
          param_1[2] = fVar4 * local_ac + fVar5 * local_b0 + fVar6 * local_a8;
          local_ac = local_ac * DAT_180430174;
          local_bc = local_bc * DAT_180430174;
          local_c0 = local_c0 * DAT_180430170;
          local_b0 = local_b0 * DAT_180430170;
          local_a8 = local_a8 * DAT_180430178;
          local_b8 = local_b8 * DAT_180430178;
          *param_2 = local_cc * DAT_180430174 + local_d0 * DAT_180430170 + local_c8 * DAT_180430178;
          param_2[1] = local_bc + local_c0 + local_b8;
          param_2[2] = local_ac + local_b0 + local_a8;
          return 1;
        }
      }
    }
  }
  return 0;
}


