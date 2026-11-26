// 0x18025a7b0  FUN_18025a7b0
// size=453 thunk=false
// signature: undefined FUN_18025a7b0()
// status: ok


void FUN_18025a7b0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  bool bVar7;
  bool bVar8;
  ulonglong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  ulonglong uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uVar6 = *(ulonglong *)(param_1 + 0x108);
  lVar2 = *(longlong *)(param_1 + 0xf0);
  uVar3 = (*(longlong *)(param_1 + 0xf8) - lVar2 >> 4) * -0x5555555555555555;
  if (uVar3 < uVar6 || uVar3 - uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180262180();
  }
  puVar5 = (ulonglong *)(lVar2 + uVar6 * 0x30);
  local_38 = *puVar5;
  uStack_30 = puVar5[1];
  puVar5 = (ulonglong *)(lVar2 + 0x10 + uVar6 * 0x30);
  local_28 = *puVar5;
  uStack_20 = puVar5[1];
  puVar1 = (undefined8 *)(lVar2 + 0x20 + uVar6 * 0x30);
  local_18 = *puVar1;
  uStack_10 = puVar1[1];
  bVar7 = local_38 < local_28;
  bVar8 = local_38 == local_28;
  if (bVar8) {
    bVar7 = uStack_30 < uStack_20;
    bVar8 = uStack_30 == uStack_20;
    if (!bVar8) goto LAB_18025a8c5;
    puVar5 = &local_28;
    if (bVar7) {
      puVar5 = &local_38;
    }
    local_68 = *puVar5;
    uStack_60 = puVar5[1];
    FUN_1802564e0(param_1 + 0x50,&local_58,&local_68,1);
    uStack_60 = uStack_50;
    local_68 = local_58;
    if ((local_58 == local_48) && (uStack_50 == local_40)) goto LAB_18025a94d;
    local_58 = local_48;
    uStack_50 = local_40;
    uVar4 = FUN_180254e90(param_1 + 0x50,&local_38,&local_68,&local_58);
    FUN_18020e8a0(param_1 + 0x7b8,uVar4);
  }
  else {
LAB_18025a8c5:
    uVar6 = local_38;
    if (!bVar7) {
      uVar6 = local_28;
    }
    uVar3 = local_38;
    if (bVar7 || bVar8) {
      uVar3 = local_28;
    }
    if (uVar6 != uVar3) goto LAB_18025a94d;
    bVar7 = local_38 < local_28;
    puVar5 = &local_28;
    if (local_38 == local_28) {
      bVar7 = uStack_30 < uStack_20;
      if (uStack_20 < uStack_30) {
        puVar5 = &local_38;
      }
    }
    else if (local_28 < local_38) {
      puVar5 = &local_38;
    }
    local_68 = *puVar5;
    uStack_60 = puVar5[1];
    puVar5 = &local_28;
    if (bVar7) {
      puVar5 = &local_38;
    }
    local_58 = *puVar5;
    uStack_50 = puVar5[1];
    uVar4 = FUN_180254e90(param_1 + 0x50,&local_38,&local_58,&local_68);
    FUN_18020e8a0(param_1 + 0x7b8,uVar4);
  }
  FUN_18020e450(&local_38);
LAB_18025a94d:
  *(undefined1 *)(param_1 + 0x7b0) = 1;
  *(undefined1 *)(param_1 + 0x7b2) = 1;
  return;
}


