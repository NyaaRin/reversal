// 0x180169260  vfunc_shared_180169260
// size=530 thunk=false
// signature: undefined vfunc_shared_180169260()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * vfunc_shared_180169260
                  (longlong *param_1,float *param_2,undefined8 param_3,float *param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  float local_40;
  float local_3c;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  local_48 = param_3;
  (**(code **)(*param_1 + 0x10))(param_1,&local_40);
  fVar1 = (float)(**(code **)(*param_1 + 0x30))(param_1);
  fVar3 = (float)param_3;
  switch((int)param_1[1]) {
  case 0:
    fVar3 = fVar3 - local_40 * DAT_180380ac0;
    goto LAB_1801692da;
  case 1:
    fVar3 = fVar3 - local_40 * DAT_180380ac0;
    local_48._4_4_ = local_48._4_4_ + param_4[3] + fVar1 + param_5;
    break;
  case 2:
  case 9:
    fVar3 = ((fVar3 + *param_4) - local_40) - fVar1;
    goto LAB_18016933a;
  case 3:
  case 0xb:
    fVar3 = fVar3 + param_4[2] + fVar1;
LAB_18016933a:
    local_48._4_4_ = local_48._4_4_ + param_4[1] + param_5;
    break;
  case 4:
    fVar3 = fVar3 + *param_4;
    goto LAB_1801692da;
  case 5:
    fVar3 = (fVar3 + param_4[2]) - local_40;
LAB_1801692da:
    local_48._4_4_ = (((local_48._4_4_ + param_4[1]) - local_3c) - fVar1) - param_5;
    break;
  case 6:
    fVar3 = fVar3 + *param_4;
    local_48._4_4_ = local_48._4_4_ + param_4[3] + fVar1 + param_5;
    break;
  case 7:
    fVar3 = (fVar3 + param_4[2]) - local_40;
    local_48._4_4_ = local_48._4_4_ + param_4[3] + fVar1 + param_5;
    break;
  default:
    fVar3 = fVar3 - local_40 * DAT_180380ac0;
    local_48._4_4_ = local_48._4_4_ - local_3c * DAT_180380ac0;
    break;
  case 10:
    fVar3 = ((fVar3 + *param_4) - local_40) - fVar1;
    goto LAB_18016936c;
  case 0xc:
    fVar3 = fVar3 + param_4[2] + fVar1;
LAB_18016936c:
    local_48._4_4_ = ((local_48._4_4_ + param_4[3]) - local_3c) - param_5;
  }
  fVar1 = *(float *)((longlong)param_1 + 0xc);
  fVar2 = *(float *)(param_1 + 2);
  if ((DAT_1803fcb80 == '\0') && ((int)param_1[1] == 8)) {
    fVar1 = fVar1 * DAT_1803fcb6c;
    fVar2 = fVar2 * DAT_1803fcb6c;
  }
  *param_2 = fVar3 + fVar1;
  param_2[1] = local_48._4_4_ + fVar2;
  return param_2;
}


