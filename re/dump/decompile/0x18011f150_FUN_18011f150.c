// 0x18011f150  FUN_18011f150
// size=1240 thunk=false
// signature: undefined FUN_18011f150()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18011f150(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *_Memory;
  ulonglong uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [24];
  ulonglong local_a8;
  char *local_a0;
  char *local_98;
  ulonglong local_90;
  char *local_88;
  undefined8 *local_78;
  longlong lStack_70;
  longlong local_68;
  undefined8 *local_60;
  longlong lStack_58;
  longlong local_50;
  longlong *local_48;
  longlong *plStack_40;
  longlong local_38;
  ulonglong local_30;
  
  puVar6 = auStack_c8;
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_c8;
  if (DAT_1804015f8 == '\0') {
    local_48 = (longlong *)0x0;
    plStack_40 = (longlong *)0x0;
    lVar7 = 0;
    local_38 = 0;
    FUN_18011ea60(0,"40 53 48 83 EC 30 48 8B 0D ? ? ? ? 8D 5A 02 83 B9 0C 10 00 00 00",&local_48);
    lVar8 = lVar7;
    if (local_48 != plStack_40) {
      lVar8 = *local_48;
    }
    uVar5 = (longlong)plStack_40 - (longlong)local_48 >> 3;
    local_60 = (undefined8 *)0x0;
    lStack_58 = 0;
    local_50 = 0;
    FUN_18011ea60(0,
                  "40 53 48 83 EC 30 48 89 6C 24 40 48 8B D9 48 8B 0D ? ? ? ? 8B EA 48 89 74 24 48 8B B1 0C 10 00 00 85 F6"
                  ,&local_60);
    local_78 = (undefined8 *)0x0;
    lStack_70 = 0;
    local_68 = 0;
    FUN_18011ea60(0,
                  "40 53 48 83 EC 30 48 89 6C 24 40 48 8B D9 48 8B 0D ? ? ? ? 48 8B EA 48 89 74 24 48 8B B1 0C 10 00 00 85 F6"
                  ,&local_78);
    local_90 = lStack_70 - (longlong)local_78 >> 3;
    local_a8 = lStack_58 - (longlong)local_60 >> 3;
    pcVar9 = "";
    local_98 = " (WARN: expected 2 clones)";
    local_88 = " (WARN: expected 2 clones)";
    if (1 < local_90) {
      local_88 = "";
    }
    if (1 < local_a8) {
      local_98 = "";
    }
    local_a0 = " (WARN: no CallN found)";
    if (local_a8 != 0) {
      local_a0 = "";
    }
    if (1 < uVar5) {
      pcVar9 = " AMBIGUOUS";
    }
    FUN_180014410("[GMFilter] Call1=%p (matches=%zu%s)  CallN matches=%zu%s%s  CallStr matches=%zu%s\n"
                  ,lVar8,uVar5,pcVar9);
    if (lVar8 == 0) {
      FUN_180014410("[GMFilter] Install ABORT: Call1 pattern not found -- feature disabled\n");
    }
    else {
      DAT_1804015d8 = (longlong *)FUN_18011eef0(lVar8);
      if (DAT_1804015d8 != (longlong *)0x0) {
        lVar7 = *DAT_1804015d8;
      }
      FUN_180014410("[GMFilter] callback global = %p  (deref = %p)\n",DAT_1804015d8,lVar7);
      iVar2 = FUN_180242fc0(lVar8,FUN_18011e7f0,&DAT_1804015e0);
      uVar3 = FUN_1802436b0(iVar2);
      FUN_180014410("[GMFilter] MH Call1  @ %p: %s\n",lVar8,uVar3);
      if (iVar2 == 0) {
        FUN_180243560(lVar8,1);
      }
      if (1 < (ulonglong)((longlong)plStack_40 - (longlong)local_48 >> 3)) {
        iVar2 = FUN_180242fc0(local_48[1],FUN_18011e850,&DAT_180401608);
        uVar3 = FUN_1802436b0(iVar2);
        FUN_180014410("[GMFilter] MH Call1b @ %p: %s\n",local_48[1],uVar3);
        if (iVar2 == 0) {
          FUN_180243560(local_48[1],1);
        }
      }
      if (lStack_58 - (longlong)local_60 >> 3 != 0) {
        iVar2 = FUN_180242fc0(*local_60,FUN_18011e8b0,&DAT_1804015d0);
        uVar3 = FUN_1802436b0(iVar2);
        FUN_180014410("[GMFilter] MH CallN1 @ %p: %s\n",*local_60,uVar3);
        if (iVar2 == 0) {
          FUN_180243560(*local_60,1);
        }
      }
      if (1 < (ulonglong)(lStack_58 - (longlong)local_60 >> 3)) {
        iVar2 = FUN_180242fc0(local_60[1],FUN_18011e910,&DAT_180401620);
        uVar3 = FUN_1802436b0(iVar2);
        FUN_180014410("[GMFilter] MH CallN2 @ %p: %s\n",local_60[1],uVar3);
        if (iVar2 == 0) {
          FUN_180243560(local_60[1],1);
        }
      }
      if (lStack_70 - (longlong)local_78 >> 3 != 0) {
        iVar2 = FUN_180242fc0(*local_78,&LAB_18011ea20,&DAT_1804015e8);
        uVar3 = FUN_1802436b0(iVar2);
        FUN_180014410("[GMFilter] MH CallStr1 @ %p: %s\n",*local_78,uVar3);
        if (iVar2 == 0) {
          FUN_180243560(*local_78,1);
        }
      }
      if (1 < (ulonglong)(lStack_70 - (longlong)local_78 >> 3)) {
        iVar2 = FUN_180242fc0(local_78[1],&LAB_18011ea40,&DAT_1804015f0);
        uVar3 = FUN_1802436b0(iVar2);
        FUN_180014410("[GMFilter] MH CallStr2 @ %p: %s\n",local_78[1],uVar3);
        if (iVar2 == 0) {
          FUN_180243560(local_78[1],1);
        }
      }
      DAT_1804015f8 = '\x01';
    }
    puVar6 = auStack_c8;
    if (local_78 != (undefined8 *)0x0) {
      puVar4 = local_78;
      puVar6 = auStack_c8;
      if ((0xfff < (ulonglong)((local_68 - (longlong)local_78 >> 3) * 8)) &&
         (puVar4 = (undefined8 *)local_78[-1], puVar6 = auStack_c8,
         0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)puVar4)))) {
        puVar4 = (undefined8 *)0x5;
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)();
        puVar6 = auStack_c0;
      }
      *(undefined8 *)(puVar6 + -8) = 0x18011f550;
      free(puVar4);
      local_78 = (undefined8 *)0x0;
      lStack_70 = 0;
      local_68 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      puVar4 = local_60;
      if ((0xfff < (ulonglong)((local_50 - (longlong)local_60 >> 3) * 8)) &&
         (puVar4 = (undefined8 *)local_60[-1],
         0x1f < (ulonglong)((longlong)local_60 + (-8 - (longlong)puVar4)))) {
        puVar4 = (undefined8 *)0x5;
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)();
        puVar6 = puVar6 + 8;
      }
      *(undefined8 *)(puVar6 + -8) = 0x18011f5aa;
      free(puVar4);
      local_60 = (undefined8 *)0x0;
      lStack_58 = 0;
      local_50 = 0;
    }
    if (local_48 != (longlong *)0x0) {
      _Memory = local_48;
      if ((0xfff < (ulonglong)((local_38 - (longlong)local_48 >> 3) * 8)) &&
         (_Memory = (longlong *)local_48[-1],
         0x1f < (ulonglong)((longlong)local_48 + (-8 - (longlong)_Memory)))) {
        _Memory = (longlong *)0x5;
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)();
        puVar6 = puVar6 + 8;
      }
      *(undefined8 *)(puVar6 + -8) = 0x18011f604;
      free(_Memory);
    }
  }
  *(undefined8 *)(puVar6 + -8) = 0x18011f61c;
  return;
}


