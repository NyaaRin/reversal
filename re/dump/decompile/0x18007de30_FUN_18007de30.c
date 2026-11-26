// 0x18007de30  FUN_18007de30
// size=261 thunk=false
// signature: undefined FUN_18007de30()
// status: ok


ulonglong FUN_18007de30(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong in_RAX;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  uVar1 = param_1[3];
  lVar2 = param_1[2];
  plVar6 = param_1;
  if (0xf < uVar1) {
    plVar6 = (longlong *)*param_1;
  }
  if (lVar2 == 0xf) {
    iVar3 = memcmp(plVar6,"ptp_weapon_base",0xf);
    in_RAX = CONCAT44(extraout_var,iVar3);
    if (iVar3 == 0) goto LAB_18007df11;
  }
  plVar6 = param_1;
  if (0xf < uVar1) {
    plVar6 = (longlong *)*param_1;
  }
  if (lVar2 == 0xd) {
    in_RAX = 0x6d6f6f7a5f707470;
    lVar5 = *plVar6 + -0x6d6f6f7a5f707470;
    if (lVar5 == 0) {
      in_RAX = 0x7361625f;
      lVar5 = (ulonglong)*(uint *)(plVar6 + 1) - 0x7361625f;
      if (lVar5 == 0) {
        in_RAX = 0;
        lVar5 = (ulonglong)*(byte *)((longlong)plVar6 + 0xc) - 0x65;
      }
    }
    if (lVar5 == 0) goto LAB_18007df11;
  }
  plVar6 = param_1;
  if (0xf < uVar1) {
    plVar6 = (longlong *)*param_1;
  }
  uVar4 = in_RAX;
  if (lVar2 == 0xf) {
    iVar3 = memcmp(plVar6,"ptp_scoped_base",0xf);
    in_RAX = CONCAT44(extraout_var_00,iVar3);
    uVar4 = in_RAX;
    if (iVar3 == 0) goto LAB_18007df11;
  }
  if (0xf < uVar1) {
    param_1 = (longlong *)*param_1;
  }
  if (lVar2 == 0x10) {
    uVar4 = *param_1 + 0x8b90978ca08f8b90;
    if (uVar4 == 0) {
      uVar4 = param_1[1] + 0x9a8c9e9da0918a99;
    }
    in_RAX = 0;
    if (uVar4 == 0) {
LAB_18007df11:
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
  return uVar4 & 0xffffffffffffff00;
}


