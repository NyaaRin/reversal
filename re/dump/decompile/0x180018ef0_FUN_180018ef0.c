// 0x180018ef0  FUN_180018ef0
// size=574 thunk=false
// signature: undefined FUN_180018ef0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_180018ef0(longlong param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined4 local_d0 [2];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 *local_68 [2];
  undefined1 local_58 [16];
  undefined1 local_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_1803da4c0 ^ (ulonglong)auStack_f8;
  puVar10 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar10 = (undefined8 *)*param_2;
  }
  uVar12 = 0;
  uVar14 = 0xcbf29ce484222325;
  if (param_2[2] != 0) {
    do {
      uVar14 = (uVar14 ^ *(byte *)((longlong)puVar10 + uVar12)) * 0x100000001b3;
      uVar12 = uVar12 + 1;
    } while (uVar12 < (ulonglong)param_2[2]);
  }
  local_28 = param_2;
  lVar9 = FUN_180229bd0(param_1 + 0x18,local_68,param_2,uVar14);
  lVar9 = *(longlong *)(lVar9 + 8);
  if (lVar9 == 0) {
    lVar9 = *(longlong *)(param_1 + 0x20);
  }
  if (lVar9 == *(longlong *)(param_1 + 0x20)) {
    puVar10 = (undefined8 *)FUN_18016d4c0(local_48,param_2);
    local_68[0] = puVar10;
    FUN_18020d250(local_d0);
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    local_78 = 0;
    FUN_18001d080(&local_90,&DAT_18033e5ea,0);
    if (&local_90 != puVar10) {
      puVar13 = puVar10;
      if (0xf < (ulonglong)puVar10[3]) {
        puVar13 = (undefined8 *)*puVar10;
      }
      FUN_180212700(&local_90,puVar13,puVar10[2]);
    }
    local_d8 = param_1;
    FUN_18020e450(puVar10);
    plVar11 = (longlong *)FUN_180219600(param_1 + 0x18,local_58,param_2);
    lVar9 = *plVar11;
    *(longlong *)(lVar9 + 0x30) = local_d8;
    puVar1 = (undefined4 *)(lVar9 + 0x38);
    if (puVar1 != local_d0) {
      FUN_18022e8b0(puVar1);
      *puVar1 = local_d0[0];
      uVar2 = *(undefined8 *)(lVar9 + 0x40);
      *(undefined8 *)(lVar9 + 0x40) = local_c8;
      uVar3 = *(undefined8 *)(lVar9 + 0x48);
      *(undefined8 *)(lVar9 + 0x48) = local_c0;
      uVar4 = *(undefined8 *)(lVar9 + 0x50);
      *(undefined8 *)(lVar9 + 0x50) = local_b8;
      uVar5 = *(undefined8 *)(lVar9 + 0x58);
      *(undefined8 *)(lVar9 + 0x58) = local_b0;
      uVar6 = *(undefined8 *)(lVar9 + 0x60);
      *(undefined8 *)(lVar9 + 0x60) = local_a8;
      uVar7 = *(undefined8 *)(lVar9 + 0x68);
      *(undefined8 *)(lVar9 + 0x68) = local_a0;
      uVar8 = *(undefined8 *)(lVar9 + 0x70);
      *(undefined8 *)(lVar9 + 0x70) = local_98;
      local_c8 = uVar2;
      local_c0 = uVar3;
      local_b8 = uVar4;
      local_b0 = uVar5;
      local_a8 = uVar6;
      local_a0 = uVar7;
      local_98 = uVar8;
    }
    FUN_18020e8a0(lVar9 + 0x78,&local_90);
    FUN_18020e450(&local_90);
    local_68[0] = (undefined8 *)local_d0;
    FUN_180209700(&local_b8);
    FUN_18020d1d0(&local_c8);
    FUN_18020e450(param_2);
  }
  else {
    plVar11 = (longlong *)FUN_180219600(param_1 + 0x18,local_68,param_2);
    lVar9 = *plVar11;
    FUN_18020e450(param_2);
  }
  return lVar9 + 0x30;
}


