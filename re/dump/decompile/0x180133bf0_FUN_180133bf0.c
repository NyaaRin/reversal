// 0x180133bf0  FUN_180133bf0
// size=1751 thunk=false
// signature: undefined FUN_180133bf0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180133bf0(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  DWORD DVar3;
  size_t sVar4;
  void **ppvVar5;
  undefined8 uVar6;
  void *pvVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  undefined1 auStack_688 [8];
  undefined1 auStack_680 [24];
  wchar_t *local_668;
  undefined4 local_658;
  undefined8 *local_650;
  undefined **local_648;
  undefined8 *local_640;
  undefined8 *local_638;
  undefined8 local_630;
  undefined8 uStack_628;
  undefined8 local_620;
  undefined8 local_618;
  undefined8 local_610;
  undefined8 uStack_608;
  undefined8 local_600;
  undefined8 local_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined8 local_5e0;
  undefined8 local_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined8 local_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined8 local_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 local_578;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 local_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 local_540;
  undefined8 local_538;
  undefined8 local_530;
  undefined1 local_528 [32];
  undefined1 local_508 [32];
  undefined1 local_4e8 [32];
  undefined1 local_4c8 [32];
  undefined1 local_4a8 [32];
  undefined1 local_488 [32];
  void *local_468;
  void *pvStack_460;
  void *local_458;
  void *pvStack_450;
  wchar_t local_448 [264];
  WCHAR local_238 [264];
  ulonglong local_28;
  
  puVar9 = auStack_688;
  puVar10 = auStack_688;
  puVar11 = auStack_688;
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_688;
  local_658 = 0;
  local_530 = param_1;
  memset(local_448,0,0x208);
  pvStack_460 = (void *)0x0;
  local_458 = (void *)0x0;
  pvStack_450 = (void *)0x7;
  local_468 = (void *)0x0;
  local_668 = local_448;
  iVar2 = SHGetFolderPathW(0,0x8005,0,0);
  if (iVar2 < 0) {
    memset(local_238,0,0x208);
    DVar3 = GetEnvironmentVariableW(L"USERPROFILE",local_238,0x104);
    if (DVar3 == 0) {
      local_650 = &local_590;
      local_590 = 0;
      uStack_588 = 0;
      local_580 = 0;
      local_578 = 0;
      FUN_180211510(&local_590,L"mayrrX64",8);
      local_658 = 0;
      local_650 = (undefined8 *)0x0;
      local_648 = &PTR_vftable_std__System_error_category_1803e9500;
      uVar13 = FUN_180067fd0(local_528,&local_650);
      local_658 = 0x20000;
      if ((int)local_650 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1800670a0(uVar13,&local_650);
      }
      ppvVar5 = (void **)FUN_180066720(local_4a8,local_528,&local_590);
      puVar12 = auStack_688;
      if (&local_468 != ppvVar5) {
        if ((void *)0x7 < pvStack_450) {
          pvVar7 = local_468;
          puVar11 = auStack_688;
          if ((0xfff < (longlong)pvStack_450 * 2 + 2U) &&
             (pvVar7 = *(void **)((longlong)local_468 + -8), puVar11 = auStack_688,
             0x1f < (ulonglong)((longlong)local_468 + (-8 - (longlong)pvVar7)))) {
            pvVar7 = (void *)0x5;
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)();
            puVar11 = auStack_680;
          }
          *(undefined8 *)(puVar11 + -8) = 0x18013413e;
          free(pvVar7);
        }
        local_468 = *ppvVar5;
        pvStack_460 = ppvVar5[1];
        local_458 = ppvVar5[2];
        pvStack_450 = ppvVar5[3];
        ppvVar5[2] = (void *)0x0;
        ppvVar5[3] = (void *)0x7;
        *(undefined2 *)ppvVar5 = 0;
        puVar12 = puVar11;
      }
      *(undefined8 *)(puVar12 + -8) = 0x180134189;
      FUN_18021e290(local_4a8);
      *(undefined4 *)(puVar12 + 0x30) = 0;
      *(undefined8 *)(puVar12 + -8) = 0x18013419a;
      FUN_18021e290(local_528);
      puVar8 = &local_590;
    }
    else {
      local_640 = &local_5b0;
      local_5b0 = 0;
      uStack_5a8 = 0;
      local_5a0 = 0;
      local_598 = 0;
      FUN_180211510(&local_5b0,L"mayrrX64",8);
      local_658 = 0;
      local_638 = &local_5d0;
      local_5d0 = 0;
      uStack_5c8 = 0;
      local_5c0 = 0;
      local_5b8 = 0;
      FUN_180211510(&local_5d0,L"Documents",9);
      local_658 = 0;
      local_650 = &local_5f0;
      sVar4 = wcslen(local_238);
      local_5f0 = 0;
      uStack_5e8 = 0;
      local_5e0 = 0;
      local_5d8 = 0;
      FUN_180211510(&local_5f0,local_238,sVar4);
      local_658 = 0;
      uVar6 = FUN_180066720(local_4c8,&local_5f0,&local_5d0);
      ppvVar5 = (void **)FUN_180066720(local_4e8,uVar6,&local_5b0);
      puVar12 = auStack_688;
      if (&local_468 != ppvVar5) {
        if ((void *)0x7 < pvStack_450) {
          pvVar7 = local_468;
          puVar10 = auStack_688;
          if ((0xfff < (longlong)pvStack_450 * 2 + 2U) &&
             (pvVar7 = *(void **)((longlong)local_468 + -8), puVar10 = auStack_688,
             0x1f < (ulonglong)((longlong)local_468 + (-8 - (longlong)pvVar7)))) {
            pvVar7 = (void *)0x5;
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)();
            puVar10 = auStack_680;
          }
          *(undefined8 *)(puVar10 + -8) = 0x180133fd2;
          free(pvVar7);
        }
        local_468 = *ppvVar5;
        pvStack_460 = ppvVar5[1];
        local_458 = ppvVar5[2];
        pvStack_450 = ppvVar5[3];
        ppvVar5[2] = (void *)0x0;
        ppvVar5[3] = (void *)0x7;
        *(undefined2 *)ppvVar5 = 0;
        puVar12 = puVar10;
      }
      *(undefined8 *)(puVar12 + -8) = 0x18013401d;
      FUN_18021e290(local_4e8);
      *(undefined8 *)(puVar12 + -8) = 0x18013402a;
      FUN_18021e290(local_4c8);
      *(undefined8 *)(puVar12 + -8) = 0x180134034;
      FUN_18021e290(&local_5f0);
      *(undefined8 *)(puVar12 + -8) = 0x18013403e;
      FUN_18021e290(&local_5d0);
      puVar8 = &local_5b0;
    }
  }
  else {
    local_638 = &local_610;
    local_610 = 0;
    uStack_608 = 0;
    local_600 = 0;
    local_5f8 = 0;
    FUN_180211510(&local_610,L"mayrrX64",8);
    local_658 = 0;
    local_640 = &local_630;
    sVar4 = wcslen(local_448);
    local_630 = 0;
    uStack_628 = 0;
    local_620 = 0;
    local_618 = 0;
    FUN_180211510(&local_630,local_448,sVar4);
    local_658 = 0;
    ppvVar5 = (void **)FUN_180066720(local_508,&local_630,&local_610);
    puVar12 = auStack_688;
    if (&local_468 != ppvVar5) {
      if ((void *)0x7 < pvStack_450) {
        pvVar7 = local_468;
        puVar9 = auStack_688;
        if ((0xfff < (longlong)pvStack_450 * 2 + 2U) &&
           (pvVar7 = *(void **)((longlong)local_468 + -8), puVar9 = auStack_688,
           0x1f < (ulonglong)((longlong)local_468 + (-8 - (longlong)pvVar7)))) {
          pvVar7 = (void *)0x5;
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)();
          puVar9 = auStack_680;
        }
        *(undefined8 *)(puVar9 + -8) = 0x180133dbd;
        free(pvVar7);
      }
      local_468 = *ppvVar5;
      pvStack_460 = ppvVar5[1];
      local_458 = ppvVar5[2];
      pvStack_450 = ppvVar5[3];
      ppvVar5[2] = (void *)0x0;
      ppvVar5[3] = (void *)0x7;
      *(undefined2 *)ppvVar5 = 0;
      puVar12 = puVar9;
    }
    *(undefined8 *)(puVar12 + -8) = 0x180133e08;
    FUN_18021e290(local_508);
    *(undefined8 *)(puVar12 + -8) = 0x180133e13;
    FUN_18021e290(puVar12 + 0x58);
    puVar8 = (undefined8 *)(puVar12 + 0x78);
  }
  *(undefined8 *)(puVar12 + -8) = 0x1801341a4;
  FUN_18021e290(puVar8);
  *(undefined8 **)(puVar12 + 0x38) = &local_550;
  local_550 = 0;
  uStack_548 = 0;
  local_540 = 0;
  local_538 = 0;
  *(undefined8 *)(puVar12 + -8) = 0x1801341d2;
  FUN_180211510(&local_550,L"tokens.dat",10);
  *(undefined4 *)(puVar12 + 0x30) = 4;
  *(undefined4 *)(puVar12 + 0x30) = 0;
  *(undefined4 *)(puVar12 + 0x30) = 2;
  *(undefined4 *)(puVar12 + 0x30) = 0;
  *(undefined8 **)(puVar12 + 0x48) = &local_570;
  local_570 = 0;
  uStack_568 = 0;
  local_560 = 0;
  local_558 = 0;
  *(undefined8 *)(puVar12 + -8) = 0x18013421c;
  FUN_180211510(&local_570,L"settings",8);
  *(undefined4 *)(puVar12 + 0x30) = 0x10;
  *(undefined4 *)(puVar12 + 0x30) = 0;
  *(undefined4 *)(puVar12 + 0x30) = 8;
  *(undefined4 *)(puVar12 + 0x30) = 0;
  *(undefined8 *)(puVar12 + -8) = 0x18013424f;
  uVar6 = FUN_180066720(local_488,&local_468,&local_570);
  *(undefined8 *)(puVar12 + -8) = 0x18013425f;
  FUN_180066720(param_1,uVar6,&local_550);
  *(undefined4 *)(puVar12 + 0x30) = 1;
  *(undefined8 *)(puVar12 + -8) = 0x180134272;
  FUN_18021e290(local_488);
  *(undefined8 *)(puVar12 + -8) = 0x18013427c;
  FUN_18021e290(&local_570);
  *(undefined8 *)(puVar12 + -8) = 0x180134286;
  FUN_18021e290(&local_550);
  *(undefined8 *)(puVar12 + -8) = 0x180134293;
  FUN_18021e290(&local_468);
  *(undefined8 *)(puVar12 + -8) = 0x1801342a5;
  return param_1;
}


