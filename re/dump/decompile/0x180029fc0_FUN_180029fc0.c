// 0x180029fc0  FUN_180029fc0
// size=452 thunk=false
// signature: undefined FUN_180029fc0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180029fc0(void)

{
  undefined8 *puVar1;
  char *_Str;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  size_t sVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_e8 [32];
  longlong local_c8 [2];
  int local_b8 [2];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined2 local_78;
  undefined1 local_76;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  lVar3 = DAT_1803e9b10;
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_e8;
  lVar7 = DAT_1803e9b08;
  if (DAT_1803e9b08 != DAT_1803e9b10) {
    do {
      local_c8[0] = lVar7;
      FUN_18020e450(lVar7 + 0x48);
      FUN_18020d5c0(lVar7 + 0x28);
      FUN_18020e450(lVar7 + 8);
      local_c8[0] = lVar7 + 0x68;
      lVar7 = local_c8[0];
    } while (local_c8[0] != lVar3);
    DAT_1803e9b10 = DAT_1803e9b08;
  }
  puVar4 = (undefined8 *)FUN_180029cc0();
  puVar1 = (undefined8 *)puVar4[1];
  local_b8[0] = DAT_1803e9130;
  for (puVar4 = (undefined8 *)*puVar4; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    _Str = (char *)*puVar4;
    uStack_a8 = 0;
    local_a0 = 0;
    local_98 = 0xf;
    local_b0 = 0;
    local_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 1;
    local_76 = 1;
    uStack_68 = 0;
    local_60 = 0;
    local_58 = 0xf;
    local_70 = 0;
    DAT_1803e9130 = local_b8[0] + 1;
    sVar5 = strlen(_Str);
    FUN_180212700(&local_b0,_Str,sVar5);
    puVar6 = (undefined8 *)FUN_180029ed0();
    plVar2 = (longlong *)puVar6[1];
    for (plVar8 = (longlong *)*puVar6; plVar8 != plVar2; plVar8 = plVar8 + 1) {
      local_c8[0] = *plVar8;
      FUN_180210ae0(&local_90,local_c8);
    }
    if (DAT_1803e9b10 == DAT_1803e9b18) {
      FUN_180229690(&DAT_1803e9b08,DAT_1803e9b10,local_b8);
    }
    else {
      FUN_180210160(DAT_1803e9b10,local_b8);
      DAT_1803e9b10 = DAT_1803e9b10 + 0x68;
    }
    FUN_18020e450(&local_70);
    FUN_18020d5c0(&local_90);
    FUN_18020e450(&local_b0);
    local_b8[0] = DAT_1803e9130;
  }
  DAT_1803e9130 = local_b8[0];
  DAT_180423751 = 1;
  return;
}


