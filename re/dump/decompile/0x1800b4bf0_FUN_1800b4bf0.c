// 0x1800b4bf0  FUN_1800b4bf0
// size=1015 thunk=false
// signature: undefined FUN_1800b4bf0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1800b4bf0(longlong param_1,int param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  ulonglong uVar4;
  int *piVar5;
  int iVar6;
  char cVar7;
  float fVar8;
  undefined1 auStack_408 [32];
  undefined4 *local_3e8;
  undefined1 local_3d8;
  undefined1 local_3d7;
  int local_3d4;
  undefined8 local_3d0;
  undefined4 local_3c8;
  ulonglong local_3c0 [3];
  longlong local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  ulonglong local_370;
  undefined8 local_368;
  undefined1 local_360;
  undefined4 local_35c;
  char local_358;
  undefined4 local_348;
  undefined8 local_344;
  undefined4 local_33c;
  undefined4 local_338;
  undefined4 local_334;
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 local_328;
  undefined8 local_324;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined8 uStack_310;
  undefined4 local_2fc;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined8 local_2bc;
  undefined4 local_2b4;
  undefined1 local_2a4 [268];
  undefined8 local_198;
  undefined4 local_190;
  float local_18c;
  undefined4 local_188;
  float local_184;
  undefined8 local_180;
  undefined4 local_178;
  undefined1 local_174 [284];
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_408;
  uVar4 = local_58;
  if (((((param_1 != 0) && (uVar4 = (ulonglong)(param_2 - 1U), param_2 - 1U < 0x20)) &&
       (local_3c0[2] = param_4, uVar4 = FUN_1800b3c00(), *(char *)(uVar4 + 0x20) != '\0')) &&
      ((DAT_1803f9290 != (longlong *)0x0 && (DAT_1803fa658 != (longlong *)0x0)))) &&
     (DAT_1803fa5a0 != 0)) {
    local_3c0[0] = 0;
    local_3c0[1] = 0;
    uVar4 = FUN_180024b50(local_3c0);
    uVar1 = DAT_1803fe4ac;
    cVar7 = (char)local_3c0[1];
    DAT_1803fe4ac = uVar1;
    if (cVar7 != '\0') {
      local_3d7 = DAT_1803fe4ac;
      DAT_1803fe4ac = 1;
      local_3a0 = 0;
      local_398 = 0;
      uStack_390 = 0;
      local_388 = 0;
      uStack_380 = 0;
      local_378 = 0;
      local_370 = 0;
      local_368 = 0;
      local_360 = 0;
      local_35c = 0;
      local_358 = 0;
      local_3a8 = param_1;
      cVar2 = FUN_1800b4790(param_1,&local_3a0);
      if (cVar2 != '\0') {
        local_358 = cVar2;
        piVar5 = (int *)FUN_1800b3c00();
        local_3d0 = *param_3;
        fVar8 = (float)((ulonglong)local_3d0 >> 0x20);
        local_3c8 = *(undefined4 *)(param_3 + 1);
        fVar8 = fVar8 * fVar8 + (float)local_3d0 * (float)local_3d0;
        if (fVar8 < 0.0) {
          fVar8 = sqrtf(fVar8);
        }
        else {
          fVar8 = SQRT(fVar8);
        }
        FUN_1800b4420(piVar5[1] + param_1,&local_3d0,0xc);
        memset(local_174,0,0x11c);
        iVar6 = 0;
        local_198 = 0;
        local_178 = 0;
        local_190 = 0;
        if (fVar8 <= DAT_180380bb0) {
          local_18c = 0.0;
        }
        else {
          local_18c = atan2f(local_3d0._4_4_,(float)local_3d0);
          local_18c = local_18c * DAT_1803810bc;
        }
        local_188 = 0;
        local_180 = 0;
        if ((local_370 & 2) != 0) {
          local_178 = 4;
        }
        local_348 = 0;
        local_344 = 0;
        local_334 = 0;
        local_338 = 0;
        local_33c = 0;
        local_328 = 0;
        local_32c = 0;
        local_330 = 0;
        local_324 = 0;
        uStack_31c = 0;
        uStack_318 = 0;
        uStack_314 = 0;
        uStack_310 = 0;
        local_2f4 = 0;
        local_2f8 = 0;
        local_2fc = 0;
        local_2e8 = 0;
        local_2ec = 0;
        local_2f0 = 0;
        local_2e4 = 0;
        local_2bc = 0;
        local_2b4 = 0;
        local_184 = fVar8;
        memset(local_2a4,0,0x100);
        for (; local_3d4 = iVar6, iVar6 < param_2; iVar6 = iVar6 + 1) {
          memset(&local_348,0,0x1a4);
          local_3e8 = &local_348;
          (**(code **)(*DAT_1803f9290 + 0x90))(DAT_1803f9290,param_1,&local_198,DAT_1803fa5a0);
          (**(code **)(*DAT_1803fa658 + 8))(DAT_1803fa658,param_1,&local_348);
          (**(code **)(*DAT_1803f9290 + 0x98))(DAT_1803f9290,param_1,&local_198,&local_348);
        }
        cVar3 = FUN_1800b4400(*piVar5 + param_1,local_3c0[2],0xc);
        local_3d8 = cVar3 != '\0';
        FUN_1800b4ba0();
        if (cVar2 != '\0') {
          FUN_1800b49e0(local_3a8,&local_3a0);
        }
        DAT_1803fe4ac = uVar1;
        if ((cVar7 != '\0') && ((longlong)DAT_1803fa368 - 1U < 0xfffffffffffffffe)) {
          *DAT_1803fa368 = local_3c0[0];
        }
        return (ulonglong)(cVar3 != '\0');
      }
      uVar4 = (longlong)DAT_1803fa368 - 1U;
      DAT_1803fe4ac = uVar1;
      if ((longlong)DAT_1803fa368 - 1U < 0xfffffffffffffffe) {
        *DAT_1803fa368 = local_3c0[0];
        uVar4 = local_3c0[0];
      }
    }
  }
  return uVar4 & 0xffffffffffffff00;
}


