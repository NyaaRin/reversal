// 0x18010caa0  FUN_18010caa0
// size=382 thunk=false
// signature: undefined FUN_18010caa0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18010caa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  longlong lVar6;
  char *pcVar7;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  ulonglong local_80;
  char *local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  local_88 = param_5;
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  uVar2 = 0xf6e;
  if ((((*(char *)(lVar6 + 0xf6e) != '\0') &&
       (*(undefined1 *)(lVar6 + 0xf6e) = 0, lVar1 = DAT_1803fa378, DAT_18040964c == '\0')) &&
      (pcVar7 = (char *)(lVar6 + 0xf4a), *pcVar7 == '\0')) && (DAT_1803fa378 != 0)) {
    local_78 = pcVar7;
    uVar3 = FUN_180109640();
    if (((uVar3 == 0) || (DAT_1803fa598 == 0)) || (DAT_1803f9280 == 0)) {
      DAT_180409650 = DAT_180409650 + 1;
      uVar2 = uVar3;
    }
    else {
      local_50 = 0x93fd561a96ab0c67;
      local_48 = 0xf4da6ac1d14e886e;
      local_80 = uVar3;
      plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_70,&local_50);
      plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_60,&local_48);
      puVar5 = (undefined4 *)FUN_1802029c0(*plVar4 + 0x28);
      lVar6 = FUN_1801070a0(*puVar5);
      uVar2 = 0;
      if (lVar6 != 0) {
        *pcVar7 = '\x01';
        local_90 = local_88;
        local_98 = param_4;
        FUN_180109e40(uVar3,lVar1,param_2,param_3);
        *pcVar7 = '\0';
        return 1;
      }
    }
  }
  return uVar2 & 0xffffffffffffff00;
}


