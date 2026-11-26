// 0x180259f30  FUN_180259f30
// size=587 thunk=false
// signature: undefined FUN_180259f30()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180259f30(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  char cVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  bool bVar11;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  undefined8 ***local_f8;
  ulonglong uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  ulonglong local_a8;
  ulonglong uStack_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 ***local_78 [2];
  undefined8 local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_138;
  plVar1 = (longlong *)(param_1 + 0xf0);
  uVar3 = *(ulonglong *)(param_1 + 0x110);
  lVar4 = *plVar1;
  uVar9 = (*(longlong *)(param_1 + 0xf8) - lVar4 >> 4) * -0x5555555555555555;
  if (uVar9 < uVar3 || uVar9 - uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180262180();
  }
  puVar10 = (ulonglong *)(lVar4 + uVar3 * 0x30);
  uVar6 = *puVar10;
  local_a8 = uVar6;
  uStack_a0 = puVar10[1];
  puVar10 = (ulonglong *)(lVar4 + 0x10 + uVar3 * 0x30);
  uVar7 = *puVar10;
  local_98 = uVar7;
  uStack_90 = puVar10[1];
  puVar2 = (undefined8 *)(lVar4 + 0x20 + uVar3 * 0x30);
  local_88 = *puVar2;
  uStack_80 = puVar2[1];
  local_d8 = param_1 + 0x50;
  uVar9 = *(ulonglong *)(lVar4 + 0x18 + uVar3 * 0x30);
  uVar3 = *(ulonglong *)(lVar4 + 8 + uVar3 * 0x30);
  puVar10 = &local_98;
  if (uVar6 == uVar7) {
    if (uVar9 < uVar3) {
      puVar10 = &local_a8;
    }
    bVar11 = uVar3 < uVar9;
  }
  else {
    if (uVar7 < uVar6) {
      puVar10 = &local_a8;
    }
    bVar11 = uVar6 < uVar7;
  }
  local_f8 = (undefined8 ***)*puVar10;
  uStack_f0 = puVar10[1];
  puVar10 = &local_98;
  if (bVar11) {
    puVar10 = &local_a8;
  }
  local_e8 = (undefined8 ****)*puVar10;
  uStack_e0 = puVar10[1];
  FUN_180254e90(local_d8,local_78,&local_e8,&local_f8);
  local_e8 = (undefined8 ****)0x0;
  uStack_e0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_f8 = local_78;
  if (0xf < local_60) {
    local_f8 = local_78[0];
  }
  uStack_f0 = local_68;
  bVar11 = uVar6 < uVar7;
  if (uVar6 == uVar7) {
    bVar11 = uVar3 < uVar9;
  }
  puVar10 = &local_98;
  if (!bVar11 && (uVar6 != uVar7 || uVar3 != uVar9)) {
    puVar10 = &local_a8;
  }
  local_b8 = (undefined4)*puVar10;
  uStack_b4 = *(undefined4 *)((longlong)puVar10 + 4);
  uStack_b0 = (undefined4)puVar10[1];
  uStack_ac = *(undefined4 *)((longlong)puVar10 + 0xc);
  local_108 = &local_c8;
  local_110 = &local_e8;
  local_118 = param_2;
  cVar8 = FUN_180255a80(local_d8,&local_b8,&local_f8,1);
  if (cVar8 != '\0') {
    local_b8 = (undefined4)local_c8;
    uStack_b4 = local_c8._4_4_;
    uStack_b0 = (undefined4)uStack_c0;
    uStack_ac = uStack_c0._4_4_;
    local_f8 = local_e8;
    uStack_f0 = uStack_e0;
    uVar3 = *(ulonglong *)(param_1 + 0x110);
    uVar9 = (*(longlong *)(param_1 + 0xf8) - *plVar1 >> 4) * -0x5555555555555555;
    if (uVar9 < uVar3 || uVar9 - uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180262180();
    }
    *(undefined1 *)(*plVar1 + 0x21 + uVar3 * 0x30) = 0;
    puVar5 = *(undefined4 **)(param_1 + 0xf8);
    if (puVar5 == *(undefined4 **)(param_1 + 0x100)) {
      FUN_180262ec0(plVar1,puVar5,&local_f8,&local_b8);
    }
    else {
      *puVar5 = (undefined4)local_e8;
      puVar5[1] = local_e8._4_4_;
      puVar5[2] = (undefined4)uStack_e0;
      puVar5[3] = uStack_e0._4_4_;
      puVar5[4] = (undefined4)local_c8;
      puVar5[5] = local_c8._4_4_;
      puVar5[6] = (undefined4)uStack_c0;
      puVar5[7] = uStack_c0._4_4_;
      *(undefined2 *)(puVar5 + 8) = 0x100;
      *(undefined1 *)((longlong)puVar5 + 0x22) = 1;
      *(undefined8 *)(puVar5 + 10) = 0;
      *(longlong *)(param_1 + 0xf8) = *(longlong *)(param_1 + 0xf8) + 0x30;
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0xf8) + -0xf) = 1;
    *(longlong *)(param_1 + 0x110) =
         (*(longlong *)(param_1 + 0xf8) - *plVar1 >> 4) * -0x5555555555555555 + -1;
  }
  FUN_18020e450(local_78);
  return;
}


