// 0x1800c54e0  FUN_1800c54e0
// size=683 thunk=false
// signature: undefined FUN_1800c54e0()
// status: ok


undefined1 FUN_1800c54e0(longlong *param_1)

{
  char cVar1;
  BOOL BVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  char *pcVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *local_res8;
  undefined8 *local_res10;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28 [4];
  
  if (((param_1 == (longlong *)0x0) || (BVar2 = IsBadReadPtr(param_1,8), BVar2 != 0)) ||
     (BVar2 = IsBadReadPtr((void *)*param_1,8), BVar2 != 0)) {
    return 0;
  }
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x20))(param_1);
  if (plVar4 == (longlong *)0x0) {
    return 0;
  }
  uVar5 = FUN_180241610(&DAT_1803fadf0,0xf7521f28977a3033);
  uVar5 = FUN_180241610(uVar5,0xe5e03453c741697f);
  pcVar6 = (char *)FUN_1801fcfc0(uVar5);
  if ((*pcVar6 != '\0') && (cVar1 = (**(code **)(*plVar4 + 0x40))(plVar4), cVar1 != '\0')) {
    return 0;
  }
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x28))(param_1);
  if (plVar4 == (longlong *)0x0) {
    return 0;
  }
  uVar5 = FUN_180241610(&DAT_1803fadf0,0xf7521f28977a3033);
  uVar5 = FUN_180241610(uVar5,0x8dbcb6da1c093609);
  pcVar6 = (char *)FUN_1801fcfc0(uVar5);
  if ((*pcVar6 != '\0') && (cVar1 = (**(code **)(*plVar4 + 0x18))(plVar4), cVar1 == '\0')) {
    return 0;
  }
  cVar1 = (**(code **)(*param_1 + 0x438))(param_1);
  if (cVar1 == '\0') {
    return 0;
  }
  uVar5 = FUN_180241610(&DAT_1803fadf0,0xf7521f28977a3033);
  uVar5 = FUN_180241610(uVar5,0xd782259d0bddef5c);
  pcVar6 = (char *)FUN_1801fcfc0(uVar5);
  if (*pcVar6 != '\0') {
    lVar7 = FUN_18001d710(param_1,&local_res8);
    if ((*(byte *)(lVar7 + 2) & 1) != 0) {
      return 0;
    }
    local_res8 = &local_68;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0;
    FUN_18001d080(&local_68,"DT_BaseAnimating",0x10);
    local_res8 = &local_68;
    local_res10 = local_28;
    uVar5 = FUN_18016d4c0(local_28,&local_68);
    uVar5 = FUN_180018ef0(&DAT_1803fac80,uVar5);
    FUN_18020e450(&local_68);
    local_res8 = &local_48;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    FUN_18001d080(&local_48,"m_flModelScale",0xe);
    local_res10 = &local_48;
    local_res8 = local_28;
    uVar8 = FUN_18016d4c0(local_28,&local_48);
    iVar3 = FUN_180018c10(uVar5,uVar8);
    FUN_18020e450(&local_48);
    if ((0 < iVar3) &&
       (*(float *)((longlong)iVar3 + (longlong)param_1) <= DAT_1803809ec &&
        DAT_1803809ec != *(float *)((longlong)iVar3 + (longlong)param_1))) {
      return 0;
    }
    iVar3 = FUN_18001c680(param_1);
    if (100000 < iVar3) {
      return 0;
    }
  }
  iVar3 = FUN_18001c680(param_1);
  if (iVar3 < 1) {
    return 0;
  }
  return 1;
}


