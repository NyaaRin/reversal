// 0x18023d2a0  FUN_18023d2a0
// size=931 thunk=false
// signature: undefined FUN_18023d2a0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18023d2a0(longlong *param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  byte bVar7;
  undefined1 auStack_b8 [32];
  char local_98;
  undefined8 *local_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong lStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  iVar6 = 0;
  local_98 = param_3;
  lVar3 = FUN_18023d1f0();
  if (0 < *(int *)(param_2 + 0x20)) {
    uVar4 = FUN_180234420(param_1,*(undefined8 *)(param_2 + 0x10));
    if ((char)uVar4 == '\0') {
LAB_18023d511:
      param_1[0x16] = lVar3;
      return uVar4 & 0xffffffffffffff00;
    }
    if (*param_1 == *(longlong *)(lVar3 * 0x40 + param_1[0x13])) {
      param_1[0x16] = lVar3;
      uVar4 = FUN_180234420(param_1,*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x10));
      return uVar4;
    }
    iVar6 = 1;
    if (1 < *(int *)(param_2 + 0x20)) {
      do {
        FUN_18023ca00(param_1 + 1,param_1[0x13] + lVar3 * 0x40 + 8);
        uVar4 = FUN_180234420(param_1,*(undefined8 *)(param_2 + 0x10));
        if ((char)uVar4 == '\0') goto LAB_18023d511;
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(param_2 + 0x20));
    }
  }
  local_88 = 0;
  local_90 = &uStack_80;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  lStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  bVar7 = 0;
  lVar1 = *param_1;
  cVar2 = FUN_180234420(param_1,*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x10));
  if (cVar2 != '\0') {
    if (param_3 != '\0') {
      local_88 = *param_1;
      FUN_18023ca00(&uStack_80,param_1 + 1);
      if (&lStack_60 != param_1 + 5) {
        lVar5 = param_1[5];
        FUN_18023d0b0(&lStack_60,lVar5,param_1[6] - lVar5 >> 4);
      }
      bVar7 = 1;
      goto LAB_18023d412;
    }
    goto LAB_18023d633;
  }
LAB_18023d412:
  lVar5 = lVar1;
  if ((iVar6 != 0) || (*(int *)(param_2 + 0x24) == 0)) goto LAB_18023d580;
  *param_1 = lVar1;
  FUN_18023ca00(param_1 + 1,lVar3 * 0x40 + param_1[0x13] + 8);
  cVar2 = FUN_180234420(param_1,*(undefined8 *)(param_2 + 0x10));
  if (cVar2 != '\0') {
    lVar5 = *param_1;
    if (lVar1 != lVar5) {
      cVar2 = FUN_180234420(param_1,*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x10));
      if (cVar2 != '\0') {
        if (local_98 == '\0') goto LAB_18023d633;
        local_88 = *param_1;
        FUN_18023ca00(&uStack_80,param_1 + 1);
        if (&lStack_60 != param_1 + 5) {
          lVar1 = param_1[5];
          FUN_18023d0b0(&lStack_60,lVar1,param_1[6] - lVar1 >> 4);
        }
        bVar7 = 1;
      }
      iVar6 = 1;
LAB_18023d580:
      if (*(int *)(param_2 + 0x24) != -1) {
        if (*(int *)(param_2 + 0x24) <= iVar6) goto LAB_18023d488;
        iVar6 = iVar6 + 1;
      }
      *param_1 = lVar5;
      FUN_18023ca00(param_1 + 1,lVar3 * 0x40 + param_1[0x13] + 8);
      cVar2 = FUN_180234420(param_1,*(undefined8 *)(param_2 + 0x10));
      if ((cVar2 == '\0') || (lVar1 = *param_1, lVar1 == lVar5)) goto LAB_18023d488;
      cVar2 = FUN_180234420(param_1,*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x10));
      lVar5 = lVar1;
      if (cVar2 != '\0') {
        if (local_98 == '\0') goto LAB_18023d633;
        local_88 = *param_1;
        FUN_18023ca00(&uStack_80,param_1 + 1);
        if (&lStack_60 != param_1 + 5) {
          lVar1 = param_1[5];
          FUN_18023d0b0(&lStack_60,lVar1,param_1[6] - lVar1 >> 4);
        }
        bVar7 = 1;
      }
      goto LAB_18023d580;
    }
    if (((*(byte *)(param_1 + 0x1a) & 0x3e) != 0) &&
       (cVar2 = FUN_180234420(param_1,*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x10)),
       cVar2 != '\0')) {
LAB_18023d633:
      bVar7 = 1;
      goto LAB_18023d4c8;
    }
  }
LAB_18023d488:
  if (bVar7 != 0) {
    *param_1 = local_88;
    FUN_18023ca00(param_1 + 1,&uStack_80);
    if (param_1 + 5 != &lStack_60) {
      FUN_18023d0b0(param_1 + 5,lStack_60,local_58 - lStack_60 >> 4);
    }
  }
LAB_18023d4c8:
  param_1[0x16] = lVar3;
  FUN_18020d430(&lStack_60);
  local_90 = &uStack_80;
  FUN_18021e060(&uStack_80);
  return (ulonglong)bVar7;
}


