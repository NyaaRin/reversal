// 0x1801f7a80  FUN_1801f7a80
// size=639 thunk=false
// signature: undefined FUN_1801f7a80()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801f7a80(void)

{
  code *pcVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *_Memory;
  undefined1 *puVar5;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 *puStack_20;
  longlong local_18;
  ulonglong local_10;
  
  puVar5 = auStack_98;
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  local_28 = (undefined8 *)0x0;
  puStack_20 = (undefined8 *)0x0;
  local_18 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0;
  FUN_18001d080(&local_58,
                "48 83 EC 38 48 8B 0D ? ? ? ? 48 8D 15 ? ? ? ? 0F 29 74 24 20 0F 28 F0 F2 0F 5C 35 ? ? ? ?"
                ,0x59);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0;
  FUN_18001d080(&local_78,"engine.dll",10);
  FUN_180016410(&local_28,&local_78,&local_58,4);
  FUN_18020e450(&local_78);
  FUN_18020e450(&local_58);
  local_38 = &local_58;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0;
  FUN_18001d080(&local_58,"F2 0F 11 05 ? ? ? ? 0F 84",0x19);
  local_30 = &local_78;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0;
  FUN_18001d080(&local_78,"engine.dll",10);
  lVar3 = FUN_180015f40(&local_78,&local_58);
  if (lVar3 != 0) {
    DAT_1803fa398 = lVar3 + 8 + (longlong)*(int *)(lVar3 + 4);
  }
  FUN_180014410("[PAT] NET_SetTimeForTimescale = %zu copy(ies)\n",
                (longlong)puStack_20 - (longlong)local_28 >> 3);
  FUN_180014410("[PAT] net_time_for_scale      = %p\n",DAT_1803fa398);
  if ((local_28 == puStack_20) || (DAT_1803fa398 == 0)) {
    FUN_180014410("[SPEED] net-time compensation disabled (missing signature)\n");
  }
  else {
    if ((longlong)puStack_20 - (longlong)local_28 >> 3 != 0) {
      uVar2 = FUN_180242fc0(*local_28,FUN_1801f79a0,&DAT_1803fa470);
      uVar4 = FUN_1802436b0(uVar2);
      FUN_180014410("[SPEED] NET_SetTimeForTimescale #0 @ %p hook=%s\n",*local_28,uVar4);
    }
    if (1 < (ulonglong)((longlong)puStack_20 - (longlong)local_28 >> 3)) {
      uVar2 = FUN_180242fc0(local_28[1],FUN_1801f7a10,&DAT_1803fa3a8);
      uVar4 = FUN_1802436b0(uVar2);
      FUN_180014410("[SPEED] NET_SetTimeForTimescale #1 @ %p hook=%s\n",local_28[1],uVar4);
    }
  }
  if (local_28 != (undefined8 *)0x0) {
    _Memory = local_28;
    puVar5 = auStack_98;
    if ((0xfff < (ulonglong)((local_18 - (longlong)local_28 >> 3) * 8)) &&
       (_Memory = (undefined8 *)local_28[-1], puVar5 = auStack_98,
       0x1f < (ulonglong)((longlong)local_28 + (-8 - (longlong)_Memory)))) {
      _Memory = (undefined8 *)0x5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
      puVar5 = auStack_90;
    }
    *(undefined8 *)(puVar5 + -8) = 0x1801f7cd6;
    free(_Memory);
  }
  *(undefined8 *)(puVar5 + -8) = 0x1801f7cee;
  return;
}


