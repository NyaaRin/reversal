// 0x18025a180  FUN_18025a180
// size=336 thunk=false
// signature: undefined FUN_18025a180()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18025a180(longlong param_1,undefined1 param_2)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 ****ppppuVar6;
  bool bVar7;
  undefined1 auStack_88 [32];
  undefined8 ***local_68;
  undefined8 ***pppuStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 ***local_48;
  ulonglong uStack_40;
  undefined8 ***local_38;
  ulonglong uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  uVar3 = *(ulonglong *)(param_1 + 0x110);
  lVar4 = *(longlong *)(param_1 + 0xf0);
  uVar5 = (*(longlong *)(param_1 + 0xf8) - lVar4 >> 4) * -0x5555555555555555;
  if (uVar3 <= uVar5 && uVar5 - uVar3 != 0) {
    puVar1 = (ulonglong *)(lVar4 + uVar3 * 0x30);
    local_48 = (undefined8 ***)*puVar1;
    uStack_40 = puVar1[1];
    puVar1 = (ulonglong *)(lVar4 + 0x10 + uVar3 * 0x30);
    local_38 = (undefined8 ***)*puVar1;
    uStack_30 = puVar1[1];
    puVar2 = (undefined8 *)(lVar4 + 0x20 + uVar3 * 0x30);
    local_28 = *puVar2;
    uStack_20 = puVar2[1];
    bVar7 = local_48 < local_38;
    if (local_48 == local_38) {
      bVar7 = uStack_40 < uStack_30;
    }
    ppppuVar6 = &local_38;
    if (!bVar7 && (local_48 != local_38 || uStack_40 != uStack_30)) {
      ppppuVar6 = &local_48;
    }
    local_68 = *ppppuVar6;
    pppuStack_60 = ppppuVar6[1];
    ppppuVar6 = &local_38;
    if (bVar7) {
      ppppuVar6 = &local_48;
    }
    local_58 = *(undefined4 *)ppppuVar6;
    uStack_54 = *(undefined4 *)((longlong)ppppuVar6 + 4);
    uStack_50 = *(undefined4 *)(ppppuVar6 + 1);
    uStack_4c = *(undefined4 *)((longlong)ppppuVar6 + 0xc);
    FUN_180254e90(param_1 + 0x50,&local_48,&local_58,&local_68);
    local_68 = &local_48;
    if (0xf < uStack_30) {
      local_68 = local_48;
    }
    pppuStack_60 = local_38;
    FUN_180259c60(param_1,&local_68,1,param_2);
    FUN_18020e450(&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180262180();
}


