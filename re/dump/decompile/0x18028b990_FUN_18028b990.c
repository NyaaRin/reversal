// 0x18028b990  FUN_18028b990
// size=356 thunk=false
// signature: undefined FUN_18028b990()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18028b990(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  int local_58 [4];
  undefined8 local_48;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  local_58[0] = 0;
  local_48 = 0;
  puVar5 = (undefined4 *)FUN_18028b650(&local_38,param_3,0x12);
  local_38 = *puVar5;
  uStack_34 = puVar5[1];
  iStack_30 = puVar5[2];
  iStack_2c = puVar5[3];
  uVar7 = 0;
  do {
    if (iStack_2c <= iStack_30) break;
    uVar2 = FUN_18028b470(&local_38);
    uVar6 = (int)uVar7 + 1;
    *(undefined4 *)((longlong)&local_48 + uVar7 * 4) = uVar2;
    uVar7 = (ulonglong)uVar6;
  } while ((int)uVar6 < 2);
  lVar1 = local_48;
  iVar4 = local_48._4_4_;
  lVar8 = (longlong)local_48._4_4_;
  if ((local_48._4_4_ != 0) && (iVar3 = (int)local_48, (int)local_48 != 0)) {
    local_48 = 0;
    iStack_3c = 0;
    if ((-1 < lVar1) &&
       (((-1 < iVar3 && (iVar4 <= *(int *)((longlong)param_2 + 0xc))) &&
        (iVar3 <= *(int *)((longlong)param_2 + 0xc) - iVar4)))) {
      iStack_3c = iVar3;
      local_48 = lVar8 + *param_2;
    }
    uStack_40 = 0;
    local_38 = (int)local_48;
    uStack_34 = local_48._4_4_;
    iStack_30 = 0;
    iStack_2c = iStack_3c;
    puVar5 = (undefined4 *)FUN_18028b650(&local_48,&local_38,0x13);
    local_38 = *puVar5;
    uStack_34 = puVar5[1];
    iStack_30 = puVar5[2];
    iStack_2c = puVar5[3];
    uVar7 = 0;
    do {
      if (iStack_2c <= iStack_30) break;
      iVar3 = FUN_18028b470(&local_38);
      uVar6 = (int)uVar7 + 1;
      local_58[uVar7] = iVar3;
      uVar7 = (ulonglong)uVar6;
    } while ((int)uVar6 < 1);
    if (local_58[0] != 0) {
      iVar4 = local_58[0] + iVar4;
      if ((*(int *)((longlong)param_2 + 0xc) < iVar4) || (iVar4 < 0)) {
        iVar4 = *(int *)((longlong)param_2 + 0xc);
      }
      *(int *)(param_2 + 1) = iVar4;
      FUN_18028b360(param_1,param_2);
      return param_1;
    }
  }
  param_1[1] = 0;
  *param_1 = 0;
  return param_1;
}


