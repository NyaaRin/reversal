// 0x18011bd60  FUN_18011bd60
// size=757 thunk=false
// signature: undefined FUN_18011bd60()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18011bd60(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined1 *puVar3;
  char cVar4;
  void **ppvVar5;
  undefined8 ****ppppuVar6;
  undefined8 uVar7;
  void *_Memory;
  undefined8 ****_Memory_00;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [24];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined8 ***local_68;
  undefined8 **ppuStack_60;
  undefined8 **local_58;
  undefined8 **ppuStack_50;
  void *local_48;
  void *pvStack_40;
  void *local_38;
  void *pvStack_30;
  ulonglong local_28;
  
  puVar9 = auStack_c8;
  puVar10 = auStack_c8;
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_c8;
  uVar7 = 0;
  puVar3 = auStack_c8;
  if (((param_1 != 0) && (puVar3 = auStack_c8, DAT_180423709 != '\0')) &&
     (plVar1 = *(longlong **)(param_1 + 0x78), puVar3 = auStack_c8, plVar1 != (longlong *)0x0)) {
    ppuStack_60 = (undefined8 ***)0x0;
    local_58 = (undefined8 ***)0x0;
    ppuStack_50 = (undefined8 ***)0xf;
    local_68 = (undefined8 ****)0x0;
    pvStack_40 = (void *)0x0;
    local_38 = (void *)0x0;
    pvStack_30 = (void *)0xf;
    local_48 = (void *)0x0;
    AcquireSRWLockShared((PSRWLOCK)&DAT_180423720);
    puVar8 = &DAT_1803e9b58;
    if (0xf < DAT_1803e9b70) {
      puVar8 = DAT_1803e9b58;
    }
    FUN_180212700(&local_68,puVar8,DAT_1803e9b68);
    puVar8 = &DAT_1803e9b78;
    if (0xf < DAT_1803e9b90) {
      puVar8 = DAT_1803e9b78;
    }
    FUN_180212700(&local_48,puVar8,DAT_1803e9b88);
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180423720);
    if (local_38 != (void *)0x0) {
      ppvVar5 = (void **)FUN_18011b680(local_a8,&local_48);
      puVar10 = auStack_c8;
      if (&local_48 != ppvVar5) {
        if ((void *)0xf < pvStack_30) {
          _Memory = local_48;
          puVar9 = auStack_c8;
          if ((0xfff < (longlong)pvStack_30 + 1U) &&
             (_Memory = *(void **)((longlong)local_48 + -8), puVar9 = auStack_c8,
             0x1f < (ulonglong)((longlong)local_48 + (-8 - (longlong)_Memory)))) {
            _Memory = (void *)0x5;
            pcVar2 = (code *)swi(0x29);
            (*pcVar2)();
            puVar9 = auStack_c0;
          }
          *(undefined8 *)(puVar9 + -8) = 0x18011bebf;
          free(_Memory);
        }
        local_48 = *ppvVar5;
        pvStack_40 = ppvVar5[1];
        local_38 = ppvVar5[2];
        pvStack_30 = ppvVar5[3];
        ppvVar5[2] = (void *)0x0;
        ppvVar5[3] = (void *)0xf;
        *(undefined1 *)ppvVar5 = 0;
        puVar10 = puVar9;
      }
      *(undefined8 *)(puVar10 + -8) = 0x18011bef6;
      FUN_18020e450(local_a8);
      *(undefined8 *)(puVar10 + -8) = 0x18011bf03;
      ppppuVar6 = (undefined8 ****)FUN_18011ae40(local_88,&local_48);
      if (&local_68 != ppppuVar6) {
        if ((undefined8 ***)0xf < ppuStack_50) {
          _Memory_00 = (undefined8 ****)local_68;
          if ((0xfff < (longlong)ppuStack_50 + 1U) &&
             (_Memory_00 = (undefined8 ****)local_68[-1],
             0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)_Memory_00)))) {
            _Memory_00 = (undefined8 ****)0x5;
            pcVar2 = (code *)swi(0x29);
            (*pcVar2)();
            puVar10 = puVar10 + 8;
          }
          *(undefined8 *)(puVar10 + -8) = 0x18011bf52;
          free(_Memory_00);
        }
        local_68 = *ppppuVar6;
        ppuStack_60 = ppppuVar6[1];
        local_58 = ppppuVar6[2];
        ppuStack_50 = ppppuVar6[3];
        ppppuVar6[2] = (undefined8 ***)0x0;
        ppppuVar6[3] = (undefined8 ***)0xf;
        *(undefined1 *)ppppuVar6 = 0;
      }
      *(undefined8 *)(puVar10 + -8) = 0x18011bf89;
      FUN_18020e450(local_88);
    }
    if ((undefined8 ***)local_58 != (undefined8 ***)0x0) {
      if (local_38 != (void *)0x0) {
        *(undefined8 *)(puVar10 + -8) = 0x18011bfa2;
        cVar4 = FUN_18011b190(&local_48);
        if (cVar4 == '\0') goto LAB_18011c008;
      }
      ppppuVar6 = &local_68;
      if ((undefined8 ***)0xf < ppuStack_50) {
        ppppuVar6 = (undefined8 ****)local_68;
      }
      *(undefined8 *)(puVar10 + -8) = 0x18011bfc0;
      FUN_180014410("[LOADURL] default loading page -> %s\n",ppppuVar6);
      pcVar2 = *(code **)(*plVar1 + 400);
      *(undefined8 *)(puVar10 + -8) = 0x18011bfcf;
      (*pcVar2)(plVar1,param_1);
      ppppuVar6 = &local_68;
      if ((undefined8 ***)0xf < ppuStack_50) {
        ppppuVar6 = (undefined8 ****)local_68;
      }
      pcVar2 = *(code **)(*plVar1 + 0xe8);
      *(undefined8 *)(puVar10 + -8) = 0x18011bfed;
      (*pcVar2)(plVar1,ppppuVar6,(ulonglong)local_58 & 0xffffffff);
      *(undefined8 *)(puVar10 + -8) = 0x18011bff7;
      FUN_18020e450(&local_48);
      *(undefined8 *)(puVar10 + -8) = 0x18011c001;
      FUN_18020e450(&local_68);
      uVar7 = 1;
      goto LAB_18011c031;
    }
LAB_18011c008:
    *(undefined8 *)(puVar10 + -8) = 0x18011c011;
    FUN_18020e450(&local_48);
    *(undefined8 *)(puVar10 + -8) = 0x18011c01b;
    FUN_18020e450(&local_68);
    puVar3 = puVar10;
  }
  puVar10 = puVar3;
  if (DAT_180423730 != (code *)0x0) {
    *(undefined8 *)(puVar10 + -8) = 0x18011c02c;
    uVar7 = (*DAT_180423730)(param_1);
  }
LAB_18011c031:
  *(undefined8 *)(puVar10 + -8) = 0x18011c03d;
  return uVar7;
}


