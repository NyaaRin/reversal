// 0x180121710  FUN_180121710
// size=579 thunk=false
// signature: undefined FUN_180121710()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_180121710(undefined8 *param_1,longlong param_2,int param_3,int param_4,longlong param_5,
             char param_6,char param_7)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 uVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar13;
  undefined1 auStack_a8 [32];
  undefined *local_88;
  undefined1 local_80 [16];
  longlong local_70;
  longlong local_68;
  longlong local_60 [2];
  ulonglong local_50;
  
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  local_68 = param_5;
  if ((param_2 == 0) || (param_3 < 1)) {
    *param_1 = 0xffffffffffffffff;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined1 *)((longlong)param_1 + 0x24) = 1;
    param_1[5] = 0;
  }
  else {
    local_88 = &DAT_1803e8990;
    local_70 = param_2;
    iVar9 = _Mtx_lock(&DAT_1803e8990);
    if (iVar9 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar3 = (code *)swi(3);
      puVar10 = (undefined8 *)(*pcVar3)();
      return puVar10;
    }
    uVar13 = extraout_XMM0_Da;
    if (DAT_1803e89dc == 0x7fffffff) {
      DAT_1803e89dc = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
      uVar13 = extraout_XMM0_Da_00;
    }
    lVar12 = DAT_1803e8970;
    plVar11 = (longlong *)FUN_1802170e0(uVar13,local_80,&local_70);
    lVar2 = *plVar11;
    uVar13 = extraout_XMM0_Da_01;
    if (((*(int *)(lVar2 + 0x18) != param_3) || (*(int *)(lVar2 + 0x1c) != param_4)) ||
       (*(longlong *)(lVar2 + 0x28) != lVar12)) {
      if (*(longlong *)(lVar2 + 0x30) != 0) {
        local_60[0] = 0;
        uVar13 = FUN_18020b0b0(extraout_XMM0_Da_01,local_60,lVar2 + 0x30);
        if ((local_60[0] != DAT_180458258) && (*(longlong *)(local_60[0] + 0x18) == local_70)) {
          uVar13 = FUN_180204d00(uVar13,local_60);
        }
      }
      *(int *)(lVar2 + 0x18) = param_3;
      *(int *)(lVar2 + 0x1c) = param_4;
      lVar1 = DAT_1803e8980 + 1;
      lVar7 = lVar1;
      *(longlong *)(lVar2 + 0x20) = DAT_1803e8980;
      DAT_1803e8980 = lVar7;
      if (lVar1 == 0) {
        DAT_1803e8980 = 1;
      }
      *(longlong *)(lVar2 + 0x28) = lVar12;
      *(undefined8 *)(lVar2 + 0x30) = 0;
      *(undefined4 *)(lVar2 + 0x38) = 0;
      *(undefined1 *)(lVar2 + 0x3c) = 1;
      *(undefined8 *)(lVar2 + 0x40) = 0;
    }
    if (local_68 != 0) {
      lVar12 = local_68;
      if ((*(longlong *)(lVar2 + 0x30) != 0) && (*(longlong *)(lVar2 + 0x30) != local_68)) {
        local_60[0] = 0;
        uVar13 = FUN_18020b0b0(uVar13,local_60,lVar2 + 0x30);
        if ((local_60[0] != DAT_180458258) && (*(longlong *)(local_60[0] + 0x18) == local_70)) {
          uVar13 = FUN_180204d00(uVar13,local_60);
          lVar12 = local_68;
        }
      }
      lVar1 = local_70;
      *(longlong *)(lVar2 + 0x30) = lVar12;
      if ((*(char *)(lVar2 + 0x39) == '\0') && (param_6 == '\0')) {
        uVar8 = 0;
      }
      else {
        uVar8 = 1;
      }
      *(undefined1 *)(lVar2 + 0x39) = uVar8;
      if ((*(char *)(lVar2 + 0x3a) == '\0') && (param_7 == '\0')) {
        uVar8 = 0;
      }
      else {
        uVar8 = 1;
      }
      *(undefined1 *)(lVar2 + 0x3a) = uVar8;
      plVar11 = (longlong *)FUN_180216df0(uVar13,local_60,&local_68);
      *(longlong *)(*plVar11 + 0x18) = lVar1;
    }
    uVar6 = *(undefined8 *)(lVar2 + 0x20);
    *param_1 = *(undefined8 *)(lVar2 + 0x18);
    param_1[1] = uVar6;
    uVar13 = *(undefined4 *)(lVar2 + 0x2c);
    uVar4 = *(undefined4 *)(lVar2 + 0x30);
    uVar5 = *(undefined4 *)(lVar2 + 0x34);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(lVar2 + 0x28);
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar13;
    *(undefined4 *)(param_1 + 3) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
    uVar13 = *(undefined4 *)(lVar2 + 0x3c);
    uVar4 = *(undefined4 *)(lVar2 + 0x40);
    uVar5 = *(undefined4 *)(lVar2 + 0x44);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(lVar2 + 0x38);
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar13;
    *(undefined4 *)(param_1 + 5) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uVar5;
    _Mtx_unlock(&DAT_1803e8990);
  }
  return param_1;
}


