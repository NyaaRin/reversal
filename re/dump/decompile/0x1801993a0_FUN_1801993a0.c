// 0x1801993a0  FUN_1801993a0
// size=728 thunk=false
// signature: undefined FUN_1801993a0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000180199467) */

undefined8
FUN_1801993a0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  DWORD DVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined4 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 local_100 [32];
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_168;
  local_108 = param_5;
  local_138 = 0;
  local_128 = param_1;
  local_120 = param_2;
  local_118 = param_3;
  local_110 = param_4;
  FUN_180025c60(param_4);
  cVar1 = FUN_180196e40();
  if (cVar1 == '\0') {
    DAT_1804096f1 = '\0';
  }
  else if (DAT_1804096e7 != '\0') {
    FUN_180198f40();
    cVar1 = FUN_180196e40();
    if (cVar1 == '\0') {
      DAT_1804096f1 = '\0';
    }
    else {
      DVar2 = GetTickCount();
      uVar4 = 0x32;
      if (DAT_1804096f1 != '\0') {
        uVar4 = 500;
      }
      if (uVar4 <= DVar2 - DAT_180409760) {
        LOCK();
        UNLOCK();
        DAT_180409760 = DVar2;
        FUN_180197c80();
      }
    }
    if (param_3 - 1U < 0x400000) {
      if ((ulonglong)(DAT_180409708 + param_3) < 0x2000001) {
        uStack_78 = 0;
        local_70 = 0;
        local_68 = 0xf;
        local_80 = 0;
        local_130 = 0;
        cVar1 = FUN_180197030(param_2,param_3,&local_80,&local_130);
        if (cVar1 != '\0') {
          uStack_98 = 0;
          local_90 = 0;
          local_88 = 0xf;
          local_a0 = 0;
          FUN_180196f70(param_4,0x300,&local_a0);
          FUN_180197680(local_60,&local_a0,local_130);
          uVar3 = FUN_180197fc0(local_c0);
          FUN_1801fc680(local_e0,uVar3,&DAT_18034f6d4);
          FUN_18021e540(local_100);
          local_138 = 1;
          FUN_18020e450(local_e0);
          FUN_18020e450(local_c0);
          FUN_180199040(local_100,&local_80,local_130);
          local_138 = 0;
          FUN_18020e450(local_100);
          FUN_18020e450(local_60);
          FUN_18020e450(&local_a0);
        }
        FUN_18020e450(&local_80);
      }
      else {
        LOCK();
        DAT_180409700 = DAT_180409700 + 1;
        UNLOCK();
      }
    }
  }
  if (DAT_1804096f8 == (code *)0x0) {
    uVar3 = 1;
  }
  else {
    local_148 = param_5;
    uVar3 = (*DAT_1804096f8)(param_1,param_2,param_3,param_4);
  }
  return uVar3;
}


