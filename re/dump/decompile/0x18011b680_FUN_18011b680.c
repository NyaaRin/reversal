// 0x18011b680  FUN_18011b680
// size=798 thunk=false
// signature: undefined FUN_18011b680()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18011b680(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 ******ppppppuVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_138 [32];
  longlong local_118;
  uint local_108;
  undefined8 *****local_100;
  undefined8 uStack_f8;
  longlong local_f0;
  ulonglong local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 *local_c0;
  undefined1 local_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_138;
  local_108 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_c0 = param_1;
  FUN_18011b4a0(&local_98);
  FUN_18016d4c0(param_1,param_2);
  local_108 = 1;
  if ((char)local_98 == '\0') {
    local_e0 = 0;
    uStack_d8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    FUN_18001d080(&local_e0,"&#8212;",7);
    puVar3 = &local_e0;
    uVar8 = 5;
  }
  else {
    puVar3 = (undefined8 *)FUN_18011b570(local_b8,&local_98);
    uVar8 = 3;
  }
  lVar10 = puVar3[2];
  if (lVar10 == 0) {
    lVar10 = 1;
  }
  puVar6 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar6 = (undefined8 *)*param_1;
  }
  local_108 = uVar8;
  if ((7 < (ulonglong)param_1[2]) &&
     (lVar9 = param_1[2] + (longlong)puVar6, lVar4 = thunk_FUN_1802d6b60(puVar6,lVar9,"{{ADDR}}",8),
     lVar4 != lVar9)) {
    for (lVar4 = lVar4 - (longlong)puVar6; lVar4 != -1; lVar4 = lVar4 - (longlong)puVar6) {
      local_118 = puVar3[2];
      puVar6 = puVar3;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar6 = (undefined8 *)*puVar3;
      }
      FUN_18021ad40(param_1,lVar4,8,puVar6);
      uVar2 = param_1[2];
      puVar6 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar6 = (undefined8 *)*param_1;
      }
      if (((uVar2 < 8) || (uVar2 - 8 < (ulonglong)(lVar4 + lVar10))) ||
         (lVar4 = thunk_FUN_1802d6b60(lVar4 + lVar10 + (longlong)puVar6,uVar2 + (longlong)puVar6,
                                      "{{ADDR}}",8), lVar4 == uVar2 + (longlong)puVar6)) break;
    }
  }
  if ((uVar8 & 4) != 0) {
    uVar8 = uVar8 & 0xfffffffb;
    local_108 = uVar8;
    FUN_18020e450(&local_e0);
  }
  if ((uVar8 & 2) != 0) {
    local_108 = uVar8 & 0xfffffffd;
    FUN_18020e450(local_b8);
  }
  local_100 = (undefined8 ******)0x0;
  uStack_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  FUN_18001d080(&local_100,"Sep  7 2026",0xb);
  lVar10 = local_f0;
  lVar9 = local_f0;
  if (local_f0 == 0) {
    lVar9 = 1;
  }
  puVar3 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar3 = (undefined8 *)*param_1;
  }
  lVar4 = local_118;
  if ((8 < (ulonglong)param_1[2]) &&
     (lVar1 = param_1[2] + (longlong)puVar3, lVar5 = thunk_FUN_1802d6b60(puVar3,lVar1,"{{BUILD}}",9)
     , lVar4 = local_118, lVar5 != lVar1)) {
    local_118 = lVar10;
    for (lVar5 = lVar5 - (longlong)puVar3; lVar5 != -1; lVar5 = lVar5 - (longlong)puVar3) {
      ppppppuVar7 = &local_100;
      if (0xf < local_e8) {
        ppppppuVar7 = (undefined8 ******)local_100;
      }
      FUN_18021ad40(param_1,lVar5,9,ppppppuVar7);
      uVar2 = param_1[2];
      puVar3 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar3 = (undefined8 *)*param_1;
      }
      lVar4 = local_118;
      if (((uVar2 < 9) || (uVar2 - 9 < (ulonglong)(lVar5 + lVar9))) ||
         (lVar5 = thunk_FUN_1802d6b60(lVar5 + lVar9 + (longlong)puVar3,uVar2 + (longlong)puVar3,
                                      "{{BUILD}}",9), lVar4 = local_118,
         lVar5 == uVar2 + (longlong)puVar3)) break;
      local_118 = local_f0;
    }
  }
  local_118 = lVar4;
  FUN_18020e450(&local_100);
  return param_1;
}


