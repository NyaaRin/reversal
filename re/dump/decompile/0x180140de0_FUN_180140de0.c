// 0x180140de0  FUN_180140de0
// size=672 thunk=false
// signature: undefined FUN_180140de0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint * FUN_180140de0(uint *param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  size_t sVar4;
  undefined8 uVar5;
  uint *puVar6;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  char *local_130;
  uint *local_128;
  longlong *local_120;
  undefined1 local_118 [32];
  uint local_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  char local_d8 [192];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_158;
  local_138 = 0;
  if (param_2 == 0) {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0xf;
    param_1[7] = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    local_128 = param_1;
    plVar2 = (longlong *)FUN_18001dbf0(param_2);
    if (plVar2 == (longlong *)0x0) {
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[6] = 0xf;
      param_1[7] = 0;
      *(undefined1 *)param_1 = 0;
    }
    else {
      local_130 = (char *)0x0;
      local_120 = plVar2;
      local_130 = (char *)FUN_18001e410(plVar2);
      if (((local_130 < (char *)0x10000) || (*local_130 == '\0')) &&
         ((lVar3 = (**(code **)(*plVar2 + 0x78))(plVar2), lVar3 == 0 ||
          (local_130 = *(char **)(lVar3 + 0x10), *(char **)(lVar3 + 0x10) == (char *)0x0)))) {
        local_130 = (char *)0x0;
      }
      FUN_180140d70(&local_f8,local_130);
      puVar6 = &local_f8;
      if (0xf < uStack_e0) {
        puVar6 = (uint *)CONCAT44(uStack_f4,local_f8);
      }
      cVar1 = FUN_18001ef10(plVar2,puVar6,local_d8);
      if (cVar1 == '\0') {
        lVar3 = FUN_1800e0870(&local_f8,"weapon_");
        if (lVar3 == 0) {
          uVar5 = FUN_18020e670(&local_f8,local_118,7,0xffffffffffffffff);
          FUN_18020e8a0(&local_f8,uVar5);
          FUN_18020e450(local_118);
        }
        else {
          lVar3 = FUN_1800e0870(&local_f8,"CWeapon");
          if (lVar3 == 0) {
            uVar5 = FUN_18020e670(&local_f8,local_118,7,0xffffffffffffffff);
            FUN_18020e8a0(&local_f8,uVar5);
            FUN_18020e450(local_118);
          }
          else {
            lVar3 = FUN_1800e0870(&local_f8,&DAT_18035d1f8);
            if (lVar3 == 0) {
              uVar5 = FUN_18020e670(&local_f8,local_118,2,0xffffffffffffffff);
              FUN_18020e8a0(&local_f8,uVar5);
              FUN_18020e450(local_118);
            }
          }
        }
        param_1[0] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        *param_1 = local_f8;
        param_1[1] = uStack_f4;
        param_1[2] = uStack_f0;
        param_1[3] = uStack_ec;
        param_1[4] = (uint)local_e8;
        param_1[5] = local_e8._4_4_;
        param_1[6] = (uint)uStack_e0;
        param_1[7] = uStack_e0._4_4_;
        local_e8 = 0;
        uStack_e0 = 0xf;
        local_f8 = local_f8 & 0xffffff00;
        local_138 = 1;
        FUN_18020e450(&local_f8);
      }
      else {
        param_1[0] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        sVar4 = strlen(local_d8);
        FUN_18001d080(param_1,local_d8,sVar4);
        local_138 = 1;
        FUN_18020e450(&local_f8);
      }
    }
  }
  return param_1;
}


