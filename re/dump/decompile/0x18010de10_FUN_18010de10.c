// 0x18010de10  FUN_18010de10
// size=448 thunk=false
// signature: undefined FUN_18010de10()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18010de10(longlong *param_1,undefined8 param_2,float param_3)

{
  float fVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_b8 [32];
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  fVar1 = DAT_180380bb0;
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  local_90 = param_2;
  uVar7 = 0;
  if (*(float *)*param_1 - param_3 <= DAT_180380bb0) {
    uVar8 = 0;
  }
  else {
    fVar6 = (float)param_2 / (*(float *)*param_1 - param_3);
    local_60 = CONCAT44(local_60._4_4_,0x3f800000);
    local_98[0] = 0;
    local_68 = CONCAT44(local_68._4_4_,fVar6);
    puVar5 = (ulonglong *)local_98;
    if (0.0 <= fVar6) {
      puVar5 = &local_68;
    }
    puVar4 = &local_60;
    if (fVar6 <= DAT_180380bb0) {
      puVar4 = puVar5;
    }
    uVar8 = (undefined4)*puVar4;
  }
  local_68 = 0x7ce33bb364b938d2;
  local_60 = 0x93fd561a96ab0c67;
  plVar2 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_88,&local_60);
  plVar2 = (longlong *)FUN_180241a30(*plVar2 + 0x28,local_78,&local_68);
  puVar3 = (undefined4 *)FUN_180202dc0(*plVar2 + 0x28);
  *puVar3 = uVar8;
  param_3 = *(float *)(*param_1 + 4) - param_3;
  if (fVar1 < param_3) {
    param_3 = local_90._4_4_ / param_3;
    local_98[0] = 0x3f800000;
    local_60 = local_60 & 0xffffffff00000000;
    local_68 = CONCAT44(local_68._4_4_,param_3);
    puVar5 = &local_60;
    if (0.0 <= param_3) {
      puVar5 = &local_68;
    }
    puVar4 = (ulonglong *)local_98;
    if (param_3 <= fVar1) {
      puVar4 = puVar5;
    }
    uVar7 = (undefined4)*puVar4;
  }
  local_60 = 0x93fd561a96ab0c67;
  local_68 = 0x7ce33cb364b93a85;
  plVar2 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_78,&local_60);
  plVar2 = (longlong *)FUN_180241a30(*plVar2 + 0x28,local_88,&local_68);
  puVar3 = (undefined4 *)FUN_180202dc0(*plVar2 + 0x28);
  *puVar3 = uVar7;
  return;
}


