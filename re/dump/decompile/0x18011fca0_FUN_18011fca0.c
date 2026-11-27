// 0x18011fca0  FUN_18011fca0
// size=1112 thunk=false
// signature: undefined FUN_18011fca0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18011fca0(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 uStack_100;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [24];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  longlong lStack_50;
  longlong local_48;
  undefined8 *local_40;
  longlong lStack_38;
  longlong local_30;
  undefined8 *local_28;
  longlong lStack_20;
  longlong local_18;
  ulonglong local_10;
  
  puVar5 = auStack_f8;
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_f8;
  if (DAT_1804236f0 == '\0') {
    local_28 = (undefined8 *)0x0;
    lStack_20 = 0;
    local_18 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    FUN_18001d080(&local_d8,"48 89 5C 24 08 57 48 83 EC 20 8B FA 48 8B D9 FF 15 ? ? ? ?",0x3a);
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    local_80 = 0;
    FUN_18001d080(&local_98,"client.dll",10);
    FUN_180016410(&local_28,&local_98,&local_d8,4);
    FUN_18020e450(&local_98);
    FUN_18020e450(&local_d8);
    local_40 = (undefined8 *)0x0;
    lStack_38 = 0;
    local_30 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    FUN_18001d080(&local_b8,"48 89 5C 24 08 57 48 83 EC 20 48 8B FA 48 8B D9 FF 15 ? ? ? ?",0x3d);
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    FUN_18001d080(&local_d8,"client.dll",10);
    FUN_180016410(&local_40,&local_d8,&local_b8,4);
    FUN_18020e450(&local_d8);
    FUN_18020e450(&local_b8);
    local_58 = (undefined8 *)0x0;
    lStack_50 = 0;
    local_48 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = 0;
    FUN_18001d080(&local_78,
                  "48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 20 80 79 08 00 41 0F B6 F8 8B F2 48 8B D9"
                  ,0x53);
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    FUN_18001d080(&local_b8,"client.dll",10);
    FUN_180016410(&local_58,&local_b8,&local_78,4);
    FUN_18020e450(&local_b8);
    FUN_18020e450(&local_78);
    FUN_180014410("[SEPROBE] StartFunction matches=%zu  StartFunctionStr matches=%zu  CallFunction matches=%zu\n"
                  ,lStack_20 - (longlong)local_28 >> 3,lStack_38 - (longlong)local_40 >> 3,
                  lStack_50 - (longlong)local_58 >> 3);
    if (lStack_20 - (longlong)local_28 == 8) {
      iVar2 = FUN_180242fc0(*local_28,FUN_18011f780,&DAT_1804236e0);
      uVar3 = FUN_1802436b0(iVar2);
      FUN_180014410("[SEPROBE] MH StartFunction    @ %p: %s\n",*local_28,uVar3);
      if (iVar2 == 0) {
        FUN_180243560(*local_28,1);
      }
    }
    else {
      FUN_180014410("[SEPROBE] StartFunction NOT hooked (expected exactly 1 match)\n");
    }
    if (lStack_38 - (longlong)local_40 == 8) {
      iVar2 = FUN_180242fc0(*local_40,FUN_18011faf0,&DAT_1804236f8);
      uVar3 = FUN_1802436b0(iVar2);
      FUN_180014410("[SEPROBE] MH StartFunctionStr @ %p: %s\n",*local_40,uVar3);
      if (iVar2 == 0) {
        FUN_180243560(*local_40,1);
      }
    }
    else {
      FUN_180014410("[SEPROBE] StartFunctionStr NOT hooked (expected exactly 1 match)\n");
    }
    if (lStack_50 - (longlong)local_58 == 8) {
      iVar2 = FUN_180242fc0(*local_58,FUN_18011f930,&DAT_1804236e8);
      uVar3 = FUN_1802436b0(iVar2);
      FUN_180014410("[SEPROBE] MH CallFunction     @ %p: %s\n",*local_58,uVar3);
      if (iVar2 == 0) {
        FUN_180243560(*local_58,1);
      }
    }
    else {
      FUN_180014410("[SEPROBE] CallFunction NOT hooked (expected exactly 1 match)\n");
    }
    DAT_1804236f0 = '\x01';
    puVar5 = auStack_f8;
    if (local_58 != (undefined8 *)0x0) {
      puVar4 = local_58;
      puVar5 = auStack_f8;
      if ((0xfff < (ulonglong)((local_48 - (longlong)local_58 >> 3) * 8)) &&
         (puVar4 = (undefined8 *)local_58[-1], puVar5 = auStack_f8,
         0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)puVar4)))) {
        puVar4 = (undefined8 *)0x5;
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)();
        puVar5 = auStack_f0;
      }
      *(undefined8 *)(puVar5 + -8) = 0x180120017;
      free(puVar4);
      local_58 = (undefined8 *)0x0;
      lStack_50 = 0;
      local_48 = 0;
    }
    if (local_40 != (undefined8 *)0x0) {
      puVar4 = local_40;
      if ((0xfff < (ulonglong)((local_30 - (longlong)local_40 >> 3) * 8)) &&
         (puVar4 = (undefined8 *)local_40[-1],
         0x1f < (ulonglong)((longlong)local_40 + (-8 - (longlong)puVar4)))) {
        puVar4 = (undefined8 *)0x5;
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)();
        puVar5 = puVar5 + 8;
      }
      *(undefined8 *)(puVar5 + -8) = 0x180120071;
      free(puVar4);
      local_40 = (undefined8 *)0x0;
      lStack_38 = 0;
      local_30 = 0;
    }
    if (local_28 != (undefined8 *)0x0) {
      puVar4 = local_28;
      if ((0xfff < (ulonglong)((local_18 - (longlong)local_28 >> 3) * 8)) &&
         (puVar4 = (undefined8 *)local_28[-1],
         0x1f < (ulonglong)((longlong)local_28 + (-8 - (longlong)puVar4)))) {
        puVar4 = (undefined8 *)0x5;
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)();
        puVar5 = puVar5 + 8;
      }
      *(undefined8 *)(puVar5 + -8) = 0x1801200cb;
      free(puVar4);
    }
  }
  *(undefined8 *)(puVar5 + -8) = 0x1801200e3;
  return;
}


