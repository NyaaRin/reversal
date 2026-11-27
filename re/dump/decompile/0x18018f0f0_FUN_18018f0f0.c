// 0x18018f0f0  FUN_18018f0f0
// size=772 thunk=false
// signature: undefined FUN_18018f0f0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

float * FUN_18018f0f0(float *param_1,longlong param_2,int param_3,float *param_4)

{
  char cVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_e8 [32];
  int local_c8;
  int local_c0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float local_98;
  float local_94;
  float local_90;
  float local_88;
  float local_84;
  int local_80;
  int local_7c [4];
  float local_6c;
  undefined4 local_68;
  undefined8 local_64;
  float local_5c;
  undefined8 local_58;
  undefined4 local_50;
  float local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_e8;
  if ((*(char *)(param_2 + 0x2c) != '\0') && (DAT_1803fa668 != (longlong *)0x0)) {
    local_80 = 0;
    local_7c[0] = 0;
    (**(code **)(*DAT_1803fa668 + 0x28))(DAT_1803fa668,&local_80,local_7c);
    if ((1 < local_80) && (1 < local_7c[0])) {
      if (param_3 == 1) {
        local_98 = *param_4 + 0.0;
        local_94 = param_4[1] + 0.0;
        local_90 = *(float *)(param_2 + 0x1c) + param_4[2];
        cVar1 = FUN_180021ac0(&local_98,&local_88);
        if (cVar1 != '\0') {
          local_b8 = *param_4 + 0.0;
          fStack_b4 = param_4[1] + 0.0;
          fStack_b0 = *(float *)(param_2 + 0x10) + param_4[2];
          cVar1 = FUN_180021ac0(&local_b8,&local_98);
          if (cVar1 != '\0') {
            fVar5 = local_94 - local_84;
            if (fVar5 < 0.0) {
              fVar5 = (float)((uint)fVar5 ^ DAT_1803817f0);
            }
            if (fVar5 < DAT_180380d30) {
              *(undefined1 *)(param_1 + 4) = 0;
              return param_1;
            }
            fVar4 = local_84;
            if (local_94 <= local_84) {
              fVar4 = local_94;
            }
            if (local_84 <= local_94) {
              local_84 = local_94;
            }
            fVar3 = (local_98 + local_88) * DAT_180380ac0;
            fVar5 = fVar5 * DAT_180380ad4 * DAT_180380ac0;
            *param_1 = fVar3 - fVar5;
            param_1[1] = fVar4;
            param_1[2] = fVar5 + fVar3;
            param_1[3] = local_84;
            *(undefined1 *)(param_1 + 4) = 1;
            return param_1;
          }
        }
      }
      else {
        if (*(char *)(param_2 + 0x2d) == '\0') {
          local_6c = *param_4;
          local_5c = param_4[1];
          local_4c = param_4[2];
          local_7c[2] = 0;
          local_7c[3] = 0;
          local_68 = 0;
          local_64 = 0x3f800000;
          local_58 = 0;
          local_50 = 0x3f800000;
          local_7c[1] = 0x3f800000;
        }
        else {
          cVar1 = FUN_18018e680(param_4,local_7c + 1,0);
          if (cVar1 == '\0') goto LAB_18018f3c2;
        }
        local_c0 = local_7c[0];
        local_c8 = local_80;
        piVar2 = (int *)FUN_18018df20(&local_b8,param_2 + 8,param_2 + 0x14,local_7c + 1);
        local_b8 = (float)piVar2[1];
        fStack_b4 = (float)piVar2[2];
        fVar5 = (float)piVar2[3];
        fVar4 = (float)piVar2[4];
        if (*piVar2 == 3) {
          if (*(char *)(param_2 + 0x2d) == '\0') {
            fVar3 = (fVar5 - local_b8) * DAT_180380b20;
            fVar6 = (fVar4 - fStack_b4) * DAT_180380b74;
            if (fVar3 <= DAT_180380fc4) {
              fVar3 = DAT_180380fc4;
            }
            fVar4 = (fVar4 + fStack_b4) * DAT_180380ac0;
            if (fVar6 <= DAT_180381004) {
              fVar6 = DAT_180381004;
            }
            fVar5 = (fVar5 + local_b8) * DAT_180380ac0;
            local_b8 = fVar5 - fVar3 * DAT_180380ac0;
            fVar5 = fVar3 * DAT_180380ac0 + fVar5;
            fStack_b4 = fVar4 - fVar6 * DAT_180380ac0;
            fVar4 = fVar6 * DAT_180380ac0 + fVar4;
          }
          *(undefined1 *)(param_1 + 4) = 1;
          *(ulonglong *)param_1 = CONCAT44(fStack_b4,local_b8);
          *(ulonglong *)(param_1 + 2) = CONCAT44(fVar4,fVar5);
          return param_1;
        }
      }
    }
  }
LAB_18018f3c2:
  *(undefined1 *)(param_1 + 4) = 0;
  return param_1;
}


