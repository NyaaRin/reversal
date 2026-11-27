// 0x180136d80  FUN_180136d80
// size=1168 thunk=false
// signature: undefined FUN_180136d80()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180136d80(undefined8 param_1,longlong *param_2)

{
  ulonglong uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined1 auStack_148 [32];
  uint local_128;
  uint local_120;
  uint local_118;
  undefined4 local_110;
  uint local_108;
  undefined4 local_100;
  undefined8 local_f8;
  char local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  ulonglong local_d0;
  undefined8 local_c8 [2];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
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
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_148;
  local_e0 = param_1;
  local_d8 = param_2;
  if (param_2 == (longlong *)0x0) {
    FUN_180014410("[AS] diag %-6s: no IClientUser\n",param_1);
    return;
  }
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
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
  local_48 = 0;
  uStack_40 = 0;
  FUN_180131ef0(param_2,&local_b8);
  iVar6 = FUN_1801318c0(param_2);
  if (-1 < iVar6) {
    (**(code **)(*param_2 + (longlong)iVar6 * 8))(param_2,4000,1);
  }
  local_d0 = FUN_180132160(param_2);
  iVar6 = FUN_1801318c0(param_2);
  if (iVar6 < 0) {
    local_e8 = '\0';
  }
  else {
    local_e8 = (**(code **)(*param_2 + (longlong)iVar6 * 8))(param_2);
  }
  iVar6 = FUN_1801318c0(param_2);
  if (iVar6 < 0) {
    cVar5 = '\0';
  }
  else {
    cVar5 = (**(code **)(*param_2 + (longlong)iVar6 * 8))(param_2,4000);
  }
  iVar6 = FUN_1801318c0(param_2);
  if (iVar6 < 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = (**(code **)(*param_2 + (longlong)iVar6 * 8))(param_2,4000);
  }
  uVar11 = 0;
  iVar6 = FUN_1801318c0(param_2);
  if (iVar6 < 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = (**(code **)(*param_2 + (longlong)iVar6 * 8))(param_2);
  }
  iVar6 = FUN_1801318c0(param_2);
  uVar9 = 0;
  uVar7 = uVar9;
  if (-1 < iVar6) {
    uVar7 = (**(code **)(*param_2 + (longlong)iVar6 * 8))(param_2);
  }
  iVar6 = FUN_1801318c0(param_2);
  if (-1 < iVar6) {
    local_c8[0] = 0;
    (**(code **)(*param_2 + (longlong)iVar6 * 8))(param_2,local_c8,0);
    uVar11 = local_c8[0];
  }
  uVar1 = local_d0;
  local_108 = (uint)(cVar2 != '\0');
  local_118 = (uint)(cVar5 != '\0');
  local_120 = 4000;
  local_128 = (uint)(local_e8 != '\0');
  local_110 = uVar8;
  local_100 = uVar7;
  local_f8 = uVar11;
  FUN_180014410("[AS] diag %-6s: id=%llu name=\'%s\' loggedOn=%d ownsApp%u=%d ownershipTicket=%d connectTokens=%d gamesRunning=%d runningGameID=%llu\n"
                ,param_1,local_d0,&local_b8);
  uVar10 = FUN_180132040(param_2);
  if (uVar10 != 0) {
    if (uVar10 != uVar1) {
      FUN_180014410("[AS] diag %-6s: LICENCE IS BORROWED - app %u is family-shared from %llu. Servers that ban family sharing will let this account in and then kick it.\n"
                    ,param_1,4000,uVar10);
      goto LAB_180137028;
    }
    if (uVar10 != 0) {
      FUN_180014410("[AS] diag %-6s: licence owner=%llu (this account owns the game)\n",param_1,
                    uVar10);
      goto LAB_180137028;
    }
  }
  FUN_180014410("[AS] diag %-6s: licence owner could not be read out of the ownership ticket (layout unknown) - family sharing not ruled out\n"
                ,param_1);
LAB_180137028:
  iVar6 = FUN_1801318c0(param_2);
  if (iVar6 < 0) {
    cVar5 = '\0';
  }
  else {
    cVar5 = (**(code **)(*param_2 + (longlong)iVar6 * 8))(param_2);
  }
  local_c8[0] = CONCAT44(local_c8[0]._4_4_,(uint)(cVar5 != '\0'));
  iVar6 = FUN_1801318c0(param_2);
  if (iVar6 < 0) {
    local_d0 = local_d0 & 0xffffffff00000000;
  }
  else {
    uVar8 = (**(code **)(*param_2 + (longlong)iVar6 * 8))(param_2);
    local_d0 = CONCAT44(local_d0._4_4_,uVar8);
  }
  iVar6 = FUN_1801318c0(param_2);
  if (-1 < iVar6) {
    uVar9 = (**(code **)(*param_2 + (longlong)iVar6 * 8))(param_2);
  }
  iVar6 = FUN_1801318c0(param_2);
  if (iVar6 < 0) {
    cVar5 = '\0';
  }
  else {
    cVar5 = (**(code **)(*param_2 + (longlong)iVar6 * 8))(param_2,4000);
  }
  iVar6 = FUN_1801318c0(param_2);
  if (iVar6 < 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = (**(code **)(*param_2 + (longlong)iVar6 * 8))(param_2);
  }
  iVar6 = FUN_1801318c0(param_2);
  if (iVar6 < 0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = (**(code **)(*param_2 + (longlong)iVar6 * 8))(param_2);
  }
  iVar6 = FUN_1801318c0(param_2);
  if (iVar6 < 0) {
    cVar4 = '\0';
  }
  else {
    cVar4 = (**(code **)(*param_2 + (longlong)iVar6 * 8))(param_2);
  }
  local_108 = (undefined4)local_c8[0];
  local_110 = (undefined4)local_d0;
  local_120 = (uint)(cVar5 != '\0');
  local_128 = (uint)(cVar2 != '\0');
  local_118 = uVar9;
  FUN_180014410("[AS] diag %-6s: limited=%d lockedDown=%d communityBanned=%d vacBanned(app)=%d accountFlags=0x%08X securityPolicy=0x%08X twoFactor=%d\n"
                ,param_1,cVar4 != '\0',cVar3 != '\0');
  local_d0 = local_d0 & 0xffffffff00000000;
  iVar6 = FUN_1801318c0(param_2);
  if (iVar6 < 0) {
    cVar5 = '\0';
  }
  else {
    cVar5 = (**(code **)(*param_2 + (longlong)iVar6 * 8))(param_2,&local_d0);
  }
  FUN_180014410("[AS] diag %-6s: otherSessionPlaying=%d(kind=%u)\n",param_1,cVar5 != '\0',
                local_d0 & 0xffffffff);
  return;
}


