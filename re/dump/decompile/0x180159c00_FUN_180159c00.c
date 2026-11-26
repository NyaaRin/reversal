// 0x180159c00  FUN_180159c00
// size=432 thunk=false
// signature: undefined FUN_180159c00()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint * FUN_180159c00(uint *param_1,int param_2)

{
  char cVar1;
  uint *puVar2;
  size_t sVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  uint *local_1c0;
  uint local_1b0;
  uint uStack_1ac;
  uint uStack_1a8;
  uint uStack_1a4;
  undefined8 local_1a0;
  undefined8 uStack_198;
  char local_188 [336];
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_1e8;
  local_1c8 = 0;
  local_1c0 = param_1;
  if (param_2 < 1) {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    FUN_18001d080(0,&DAT_18033e9cc,1);
  }
  else {
    FUN_180159750(&local_1b0);
    puVar4 = &local_1b0;
    if (0xf < uStack_198) {
      puVar4 = (uint *)CONCAT44(uStack_1ac,local_1b0);
    }
    if (((local_1a0 < 7) ||
        (puVar2 = (uint *)thunk_FUN_1802d5870(puVar4,(uint *)((longlong)puVar4 + 7),"player ",7),
        puVar2 == (uint *)((longlong)puVar4 + 7))) || (puVar2 != puVar4)) {
      uVar5 = (uint)local_1a0;
      uVar6 = local_1a0._4_4_;
      uVar7 = (uint)uStack_198;
      uVar8 = uStack_198._4_4_;
    }
    else {
      memset(local_188,0,0x144);
      if (((DAT_1803fa668 != (longlong *)0x0) &&
          (cVar1 = (**(code **)(*DAT_1803fa668 + 0x40))(DAT_1803fa668,param_2,local_188),
          cVar1 != '\0')) && (local_188[0] != '\0')) {
        param_1[0] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        sVar3 = strlen(local_188);
        FUN_18001d080(param_1,local_188,sVar3);
        local_1c8 = 1;
        FUN_18020e450(&local_1b0);
        return param_1;
      }
      uVar5 = (uint)local_1a0;
      uVar6 = local_1a0._4_4_;
      uVar7 = (uint)uStack_198;
      uVar8 = uStack_198._4_4_;
    }
    local_1c8 = 1;
    *param_1 = local_1b0;
    param_1[1] = uStack_1ac;
    param_1[2] = uStack_1a8;
    param_1[3] = uStack_1a4;
    local_1b0 = local_1b0 & 0xffffff00;
    uStack_198 = 0xf;
    local_1a0 = 0;
    param_1[4] = uVar5;
    param_1[5] = uVar6;
    param_1[6] = uVar7;
    param_1[7] = uVar8;
    FUN_18020e450(&local_1b0);
  }
  return param_1;
}


