// 0x1800ddea0  FUN_1800ddea0
// size=628 thunk=false
// signature: undefined FUN_1800ddea0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_1800ddea0(undefined8 param_1,longlong param_2,undefined4 param_3,float *param_4,float *param_5)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_c8 [32];
  float local_a8;
  float local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  float local_78;
  float local_74;
  float local_70;
  float local_68;
  float local_64;
  float local_60;
  float local_58;
  float local_54;
  float local_50;
  float local_48;
  float local_44;
  float local_40;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_c8;
  param_5[0] = 0.0;
  param_5[1] = 0.0;
  param_5[2] = 0.0;
  if ((param_2 != 0) && (DAT_1803fa608 != 0)) {
    if (0 < DAT_18040a554) {
      FUN_1800de120();
    }
    cVar1 = FUN_1800dde30(param_1);
    if (cVar1 != '\0') {
      if (DAT_18040a5d0 != '\0') {
        return 1;
      }
      local_a0 = 0;
      local_98 = 0;
      local_80 = FUN_18001e4e0(param_1);
      cVar1 = FUN_1800ddaa0(local_80,&local_a0);
      if (cVar1 != '\0') {
        local_a8 = 0.0;
        local_a4 = 0.0;
        local_90 = 0;
        uStack_88 = 0;
        cVar1 = FUN_1800dd490(param_3,&local_a8,&local_a4,&local_90);
        if (cVar1 != '\0') {
          lVar3 = (longlong)DAT_18040a5d4;
          (&DAT_18040a570)[lVar3 * 4] = (undefined4)local_90;
          (&DAT_18040a574)[lVar3 * 4] = local_90._4_4_;
          (&DAT_18040a578)[lVar3 * 4] = (undefined4)uStack_88;
          (&DAT_18040a57c)[lVar3 * 4] = uStack_88._4_4_;
          iVar2 = DAT_18040a5d4 + 1;
          DAT_18040a5d4 =
               iVar2 + (iVar2 / 6 + (iVar2 >> 0x1f) +
                       (int)(((longlong)iVar2 / 6 + ((longlong)iVar2 >> 0x3f) & 0xffffffffU) >> 0x1f
                            )) * -6;
          if (DAT_18040a554 < 6) {
            DAT_18040a554 = DAT_18040a554 + 1;
          }
          FUN_1802d3e70(param_4,&local_68,&local_78,&local_58);
          fVar5 = (float)local_a0 * local_a8;
          fVar4 = local_a0._4_4_ * local_a4;
          local_48 = fVar5 * local_78 + local_68 + fVar4 * local_58;
          local_44 = fVar5 * local_74 + local_64 + fVar4 * local_54;
          local_40 = fVar5 * local_70 + local_60 + fVar4 * local_50;
          FUN_1802d4540(&local_48,param_5);
          *param_5 = *param_5 - *param_4;
          param_5[1] = param_5[1] - param_4[1];
          param_5[2] = param_5[2] - param_4[2];
          fVar4 = (float)FUN_1802d3e00();
          *param_5 = fVar4;
          fVar4 = (float)FUN_1802d3e00(param_5[1]);
          param_5[1] = fVar4;
          param_5[2] = 0.0;
          if ((((uint)*param_5 & 0x7f800000) != 0x7f800000) &&
             (((uint)fVar4 & 0x7f800000) != 0x7f800000)) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}


