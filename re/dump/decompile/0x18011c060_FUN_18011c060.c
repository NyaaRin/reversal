// 0x18011c060  FUN_18011c060
// size=1066 thunk=false
// signature: undefined FUN_18011c060()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18011c060(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
                  int param_5,undefined4 param_6,undefined8 param_7)

{
  code *pcVar1;
  char cVar2;
  size_t sVar3;
  void **ppvVar4;
  undefined8 ****ppppuVar5;
  void *_Memory;
  undefined8 ****_Memory_00;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 uStack_380;
  undefined1 auStack_378 [8];
  undefined1 auStack_370 [24];
  int local_358 [4];
  undefined8 local_348 [2];
  undefined1 local_338 [64];
  void *local_2f8;
  void *pvStack_2f0;
  void *local_2e8;
  void *pvStack_2e0;
  undefined8 ***local_2d8;
  undefined8 **ppuStack_2d0;
  undefined8 **local_2c8;
  undefined8 **ppuStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  char local_268 [528];
  ulonglong local_58;
  
  puVar7 = auStack_378;
  puVar8 = auStack_378;
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_378;
  puVar9 = auStack_378;
  if (DAT_180423710 == (code *)0x0) goto LAB_18011c467;
  local_268[0] = '\0';
  if (DAT_180423709 != '\0') {
    AcquireSRWLockShared((PSRWLOCK)&DAT_180423720);
    cVar2 = FUN_18011a830(&DAT_1803e9b58);
    if ((cVar2 != '\0') && (DAT_1803e9b68 < 0x208)) {
      puVar6 = &DAT_1803e9b58;
      if (0xf < DAT_1803e9b70) {
        puVar6 = DAT_1803e9b58;
      }
      memcpy(local_268,puVar6,DAT_1803e9b68 + 1);
      ReleaseSRWLockShared((PSRWLOCK)&DAT_180423720);
      if (DAT_180423728 != '\0') {
        local_2b8 = 0;
        uStack_2b0 = 0;
        local_2a8 = 0;
        uStack_2a0 = 0;
        local_298 = 0;
        uStack_290 = 0;
        local_288 = 0;
        uStack_280 = 0;
        local_278 = 0;
        uStack_270 = 0;
        FUN_18011b4a0(&local_2b8);
        puVar7 = &DAT_18033e5ea;
        if (param_3 != (undefined1 *)0x0) {
          puVar7 = param_3;
        }
        FUN_180014410("[LOADURL] serverurl \'%s\' suppressed (our page is already up), address \'%s\'\n"
                      ,puVar7,&local_2b8);
        local_348[0] = param_7;
        local_358[2] = param_6;
        local_358[0] = param_5;
        (*DAT_180423710)(param_1,param_2,&local_2b8,param_4);
        puVar9 = auStack_378;
        goto LAB_18011c467;
      }
      pvStack_2f0 = (void *)0x0;
      local_2e8 = (void *)0x0;
      pvStack_2e0 = (void *)0xf;
      local_2f8 = (void *)0x0;
      local_2d8 = (undefined8 ****)0x0;
      ppuStack_2d0 = (undefined8 ***)0x0;
      local_2c8 = (undefined8 ***)0x0;
      ppuStack_2c0 = (undefined8 ***)0x0;
      sVar3 = strlen(local_268);
      FUN_18001d080(&local_2d8,local_268,sVar3);
      AcquireSRWLockShared((PSRWLOCK)&DAT_180423720);
      puVar6 = &DAT_1803e9b78;
      if (0xf < DAT_1803e9b90) {
        puVar6 = DAT_1803e9b78;
      }
      FUN_180212700(&local_2f8,puVar6,DAT_1803e9b88);
      ReleaseSRWLockShared((PSRWLOCK)&DAT_180423720);
      if (local_2e8 == (void *)0x0) {
LAB_18011c395:
        if (param_5 < 2) {
          param_5 = 2;
        }
        ppppuVar5 = &local_2d8;
        if ((undefined8 ***)0xf < ppuStack_2c0) {
          ppppuVar5 = (undefined8 ****)local_2d8;
        }
        puVar7 = &DAT_18033e5ea;
        if (param_3 != (undefined1 *)0x0) {
          puVar7 = param_3;
        }
        *(undefined8 *)(puVar8 + -8) = 0x18011c3cd;
        FUN_180014410("[LOADURL] serverurl \'%s\' -> \'%s\'\n",puVar7,ppppuVar5);
        ppppuVar5 = &local_2d8;
        if ((undefined8 ***)0xf < ppuStack_2c0) {
          ppppuVar5 = (undefined8 ****)local_2d8;
        }
        *(undefined8 *)(puVar8 + 0x30) = param_7;
        *(undefined4 *)(puVar8 + 0x28) = param_6;
        *(int *)(puVar8 + 0x20) = param_5;
        *(undefined8 *)(puVar8 + -8) = 0x18011c401;
        (*DAT_180423710)(param_1,param_2,ppppuVar5,param_4);
      }
      else {
        ppvVar4 = (void **)FUN_18011b680(local_338,&local_2f8);
        puVar8 = auStack_378;
        if (&local_2f8 != ppvVar4) {
          if ((void *)0xf < pvStack_2e0) {
            _Memory = local_2f8;
            puVar7 = auStack_378;
            if ((0xfff < (longlong)pvStack_2e0 + 1U) &&
               (_Memory = *(void **)((longlong)local_2f8 + -8), puVar7 = auStack_378,
               0x1f < (ulonglong)((longlong)local_2f8 + (-8 - (longlong)_Memory)))) {
              _Memory = (void *)0x5;
              pcVar1 = (code *)swi(0x29);
              (*pcVar1)();
              puVar7 = auStack_370;
            }
            *(undefined8 *)(puVar7 + -8) = 0x18011c28a;
            free(_Memory);
          }
          local_2f8 = *ppvVar4;
          pvStack_2f0 = ppvVar4[1];
          local_2e8 = ppvVar4[2];
          pvStack_2e0 = ppvVar4[3];
          ppvVar4[2] = (void *)0x0;
          ppvVar4[3] = (void *)0xf;
          *(undefined1 *)ppvVar4 = 0;
          puVar8 = puVar7;
        }
        *(undefined8 *)(puVar8 + -8) = 0x18011c2c2;
        FUN_18020e450(puVar8 + 0x40);
        *(undefined8 *)(puVar8 + -8) = 0x18011c2d0;
        ppppuVar5 = (undefined8 ****)FUN_18011ae40(puVar8 + 0x60,&local_2f8);
        if (&local_2d8 != ppppuVar5) {
          if ((undefined8 ***)0xf < ppuStack_2c0) {
            _Memory_00 = (undefined8 ****)local_2d8;
            if ((0xfff < (longlong)ppuStack_2c0 + 1U) &&
               (_Memory_00 = (undefined8 ****)local_2d8[-1],
               0x1f < (ulonglong)((longlong)local_2d8 + (-8 - (longlong)_Memory_00)))) {
              _Memory_00 = (undefined8 ****)0x5;
              pcVar1 = (code *)swi(0x29);
              (*pcVar1)();
              puVar8 = puVar8 + 8;
            }
            *(undefined8 *)(puVar8 + -8) = 0x18011c31f;
            free(_Memory_00);
          }
          local_2d8 = *ppppuVar5;
          ppuStack_2d0 = ppppuVar5[1];
          local_2c8 = ppppuVar5[2];
          ppuStack_2c0 = ppppuVar5[3];
          ppppuVar5[2] = (undefined8 ***)0x0;
          ppppuVar5[3] = (undefined8 ***)0xf;
          *(undefined1 *)ppppuVar5 = 0;
        }
        *(undefined8 *)(puVar8 + -8) = 0x18011c357;
        FUN_18020e450(puVar8 + 0x60);
        *(undefined8 *)(puVar8 + -8) = 0x18011c360;
        cVar2 = FUN_18011b190(&local_2f8);
        if (cVar2 != '\0') goto LAB_18011c395;
        *(undefined8 *)(puVar8 + 0x30) = param_7;
        *(undefined4 *)(puVar8 + 0x28) = param_6;
        *(int *)(puVar8 + 0x20) = param_5;
        *(undefined8 *)(puVar8 + -8) = 0x18011c393;
        (*DAT_180423710)(param_1,param_2,&DAT_18033e5ea,param_4);
      }
      *(undefined8 *)(puVar8 + -8) = 0x18011c40b;
      FUN_18020e450(&local_2d8);
      *(undefined8 *)(puVar8 + -8) = 0x18011c415;
      FUN_18020e450(&local_2f8);
      puVar9 = puVar8;
      goto LAB_18011c467;
    }
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180423720);
  }
  if (DAT_180423709 != '\0') {
    param_3 = &DAT_18033e5ea;
  }
  local_348[0] = param_7;
  local_358[2] = param_6;
  local_358[0] = param_5;
  (*DAT_180423710)(param_1,param_2,param_3,param_4);
  puVar9 = auStack_378;
LAB_18011c467:
  *(undefined8 *)(puVar9 + -8) = 0x18011c476;
  return;
}


