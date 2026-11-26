// 0x1800a6200  FUN_1800a6200
// size=1438 thunk=false
// signature: undefined FUN_1800a6200()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1800a6200(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                       undefined8 param_5,undefined4 *param_6,float *param_7,float *param_8,
                       float *param_9)

{
  char cVar1;
  uint uVar2;
  float *pfVar3;
  uint uVar4;
  char *pcVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 local_88;
  float local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  float local_60;
  undefined8 local_58;
  float local_50;
  undefined8 local_48;
  float local_40;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  local_58 = 0;
  local_50 = 0.0;
  local_68 = 0;
  local_60 = 0.0;
  local_98 = &local_68;
  cVar1 = FUN_1800a5580(param_2,param_3,param_4,&local_58);
  if (cVar1 == '\0') {
    if (DAT_1803fa608 == (float *)0x0) {
      dVar10 = 0.0;
      pcVar5 = "read";
    }
    else {
      dVar10 = (double)*DAT_1803fa608;
      pcVar5 = "read";
    }
  }
  else {
    cVar1 = FUN_1800a7660(param_2,param_4,param_8);
    if (cVar1 == '\0') {
      if (DAT_1803fa608 == (float *)0x0) {
        dVar10 = 0.0;
        pcVar5 = "eye";
      }
      else {
        dVar10 = (double)*DAT_1803fa608;
        pcVar5 = "eye";
      }
    }
    else {
      FUN_1802d4050(&local_58,param_7);
      if (((((((uint)*param_7 & 0x7f800000) == 0x7f800000) ||
            (((uint)param_7[1] & 0x7f800000) == 0x7f800000)) ||
           (((uint)param_7[2] & 0x7f800000) == 0x7f800000)) ||
          (((((uint)(float)local_68 & 0x7f800000) == 0x7f800000 ||
            (((uint)local_68._4_4_ & 0x7f800000) == 0x7f800000)) ||
           ((((uint)local_60 & 0x7f800000) == 0x7f800000 ||
            ((((uint)*param_8 & 0x7f800000) == 0x7f800000 ||
             (((uint)param_8[1] & 0x7f800000) == 0x7f800000)))))))) ||
         (((uint)param_8[2] & 0x7f800000) == 0x7f800000)) {
        if (DAT_1803fa608 == (float *)0x0) {
          dVar10 = 0.0;
        }
        else {
          dVar10 = (double)*DAT_1803fa608;
        }
        pcVar5 = "nan";
      }
      else {
        local_88 = 0;
        local_80 = 0.0;
        pfVar3 = (float *)FUN_18001c430(param_4,local_78);
        local_88 = *(undefined8 *)pfVar3;
        local_80 = pfVar3[2];
        if (((((uint)*pfVar3 & 0x7f800000) == 0x7f800000) ||
            (((uint)pfVar3[1] & 0x7f800000) == 0x7f800000)) ||
           (((uint)local_80 & 0x7f800000) == 0x7f800000)) {
          if (DAT_1803fa608 == (float *)0x0) {
            dVar10 = 0.0;
            pcVar5 = "eyepos";
          }
          else {
            dVar10 = (double)*DAT_1803fa608;
            pcVar5 = "eyepos";
          }
        }
        else {
          fVar9 = (float)local_68 - *pfVar3;
          if (((uint)fVar9 & 0x7f800000) != 0x7f800000) {
            fVar7 = local_68._4_4_ - pfVar3[1];
            if (((((uint)fVar7 & 0x7f800000) != 0x7f800000) &&
                (fVar8 = local_60 - local_80, ((uint)fVar8 & 0x7f800000) != 0x7f800000)) &&
               (fVar7 * fVar7 + fVar9 * fVar9 + fVar8 * fVar8 <= DAT_1803812c4)) {
              local_48 = 0;
              local_40 = 0.0;
              FUN_1802d4050(param_8,&local_48);
              if (((((uint)(float)local_48 & 0x7f800000) != 0x7f800000) &&
                  (((uint)local_48._4_4_ & 0x7f800000) != 0x7f800000)) &&
                 ((((uint)local_40 & 0x7f800000) != 0x7f800000 &&
                  (DAT_180380a58 <
                   local_48._4_4_ * param_7[1] + (float)local_48 * *param_7 + local_40 * param_7[2])
                  ))) {
                fVar9 = param_8[1];
                fVar7 = param_8[2];
                *param_9 = (float)local_58 - *param_8;
                param_9[1] = local_58._4_4_ - fVar9;
                param_9[2] = local_50 - fVar7;
                fVar9 = (float)FUN_1802d3e00();
                *param_9 = fVar9;
                fVar7 = (float)FUN_1802d3e00(param_9[1]);
                param_9[1] = fVar7;
                param_9[2] = 0.0;
                fVar9 = *param_9;
                if ((((((uint)fVar9 & 0x7f800000) != 0x7f800000) &&
                     (((uint)fVar7 & 0x7f800000) != 0x7f800000)) &&
                    ((float)((uint)fVar9 & _DAT_1803817c0) <= DAT_18038103c)) &&
                   ((float)((uint)fVar7 & _DAT_1803817c0) <= DAT_18038103c)) {
                  *param_6 = (float)local_68;
                  param_6[1] = local_68._4_4_;
                  param_6[2] = local_60;
                  return CONCAT71((uint7)(uint3)(((uint)fVar7 & 0x7f800000) >> 8),1);
                }
                uVar2 = ((int)DAT_1803feee0 / 0x3c) * 0x3c;
                pfVar3 = (float *)(ulonglong)uVar2;
                uVar4 = DAT_1803feee0 + 1;
                bVar6 = DAT_1803feee0 == uVar2;
                DAT_1803feee0 = uVar4;
                if (bVar6) {
                  local_98 = (undefined8 *)DAT_180380e10;
                  pfVar3 = (float *)FUN_180014410(&DAT_180349f30,"RENDER",(double)fVar9,
                                                  (double)fVar7);
                }
                goto LAB_1800a6776;
              }
              if (DAT_1803fa608 == (float *)0x0) {
                dVar10 = 0.0;
                pcVar5 = "reversed";
              }
              else {
                dVar10 = (double)*DAT_1803fa608;
                pcVar5 = "reversed";
              }
              goto LAB_1800a6728;
            }
          }
          if (DAT_1803fa608 == (float *)0x0) {
            dVar10 = 0.0;
            pcVar5 = "reach";
          }
          else {
            dVar10 = (double)*DAT_1803fa608;
            pcVar5 = "reach";
          }
        }
      }
    }
  }
LAB_1800a6728:
  if (((DAT_1804258f8 != pcVar5) || (DAT_1803e7368 < 0.0)) ||
     (pfVar3 = DAT_1803fa608, DAT_180380d68 <= dVar10 - DAT_1803e7368)) {
    DAT_1803e7368 = dVar10;
    DAT_1804258f8 = pcVar5;
    pfVar3 = (float *)FUN_180014410(&DAT_180349ec0,"RENDER");
  }
LAB_1800a6776:
  return (ulonglong)pfVar3 & 0xffffffffffffff00;
}


