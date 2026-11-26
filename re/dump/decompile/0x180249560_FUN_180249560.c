// 0x180249560  FUN_180249560
// size=1094 thunk=false
// signature: undefined FUN_180249560()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180249560(longlong param_1)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 uVar11;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  uint local_108;
  ulonglong local_100;
  ulonglong local_f8;
  undefined8 ******local_f0;
  longlong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  longlong local_d0 [4];
  undefined1 local_b0 [32];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 ******local_78;
  longlong lStack_70;
  longlong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_148;
  local_80 = 0;
  local_108 = 0;
  local_90 = *(undefined4 *)(param_1 + 0x720);
  uStack_8c = *(undefined4 *)(param_1 + 0x724);
  uStack_88 = *(undefined4 *)(param_1 + 0x728);
  uStack_84 = *(undefined4 *)(param_1 + 0x72c);
  if (*(ulonglong *)(param_1 + 0x720) <
      (ulonglong)
      ((*(longlong *)(param_1 + 0x58) - *(longlong *)(param_1 + 0x50) >> 5) * -0x5555555555555555))
  {
    local_80 = *(undefined8 *)
                (*(ulonglong *)(param_1 + 0x720) * 0x60 + 0x58 + *(longlong *)(param_1 + 0x50));
  }
  cVar5 = FUN_180281720("LineNumberContextMenu",0);
  if (cVar5 != '\0') {
    plVar7 = *(longlong **)(param_1 + 0x690);
    if (plVar7 == (longlong *)0x0) {
      FUN_180281560();
    }
    else {
      (**(code **)(*plVar7 + 0x10))(plVar7,&local_90);
    }
    FUN_180281800();
  }
  cVar5 = FUN_180281720("TextContextMenu",0);
  if (cVar5 != '\0') {
    plVar7 = *(longlong **)(param_1 + 0x6d0);
    if (plVar7 == (longlong *)0x0) {
      FUN_180281560();
    }
    else {
      (**(code **)(*plVar7 + 0x10))(plVar7,&local_90);
    }
    FUN_180281800();
  }
  cVar5 = FUN_180280eb0();
  uVar8 = 1;
  if (cVar5 != '\0') {
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = *(longlong *)(lVar2 + 0xec0);
    *(uint *)(lVar3 + 0x1f48) = *(uint *)(lVar3 + 0x1f48) | 1;
    *(undefined8 *)(lVar3 + 0x1f58) = *(undefined8 *)(param_1 + 0x718);
    *(undefined4 *)(lVar3 + 0x1f60) = 0;
    *(undefined4 *)(lVar3 + 0x1f64) = 0x3f800000;
    *(undefined4 *)(lVar3 + 0x1f4c) = 1;
    cVar5 = FUN_180281720("TextHoverPopup",0x1000);
    if (cVar5 != '\0') {
      if (*(longlong *)(param_1 + 0x710) == 0) {
        FUN_180281560();
      }
      else {
        if (*(char *)(lVar2 + 0x10) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar2 = *(longlong *)(lVar2 + 0xec0);
        *(undefined1 *)(*(longlong *)(lVar2 + 0x1520) + 0xce) = 1;
        FUN_180282660(*(undefined8 *)(lVar2 + 0x1520));
        plVar7 = *(longlong **)(param_1 + 0x710);
        if (plVar7 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::_Xbad_function_call();
        }
        (**(code **)(*plVar7 + 0x10))(plVar7,&local_90);
      }
      FUN_180281800();
    }
  }
  local_118 = *(undefined8 *)(param_1 + 0x4d8);
  local_120 = *(undefined4 *)(param_1 + 0x4f0);
  local_128 = *(undefined8 *)(param_1 + 0x40);
  cVar5 = FUN_18025e940(param_1 + 0x370,param_1 + 0x50,param_1 + 0xf0,param_1 + 0x1d8);
  if (cVar5 == '\0') {
    return;
  }
  uVar4 = *(ulonglong *)(param_1 + 0x388);
  uVar10 = *(ulonglong *)(param_1 + 0x390);
  lVar2 = *(longlong *)(param_1 + 0x50);
  uVar6 = (*(longlong *)(param_1 + 0x58) - lVar2 >> 5) * -0x5555555555555555;
  local_e0 = uVar4;
  local_d8 = uVar10;
  if (uVar6 < uVar4 || uVar6 - uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180262180();
  }
  lVar3 = *(longlong *)(uVar4 * 0x60 + lVar2);
  uVar6 = *(longlong *)(uVar4 * 0x60 + 8 + lVar2) - lVar3 >> 4;
  if (uVar10 < uVar6) {
    uVar1 = *(ushort *)(lVar3 + uVar10 * 0x10);
    if (uVar1 < 0x7f) {
      uVar11 = extraout_XMM0_Da;
      if ((0x19 < (uVar1 | 0x20) - 0x61) && ((9 < uVar1 - 0x30 && (uVar1 != 0x5f))))
      goto LAB_18024986c;
    }
    else {
      cVar5 = FUN_180260600(extraout_XMM0_Da,uVar1);
      uVar11 = extraout_XMM0_Da_00;
      if ((cVar5 == '\0') &&
         (cVar5 = FUN_180260690(extraout_XMM0_Da_00,uVar1), uVar11 = extraout_XMM0_Da_01,
         cVar5 == '\0')) goto LAB_18024986c;
    }
    do {
      uVar1 = *(ushort *)(lVar3 + uVar10 * 0x10);
      if (uVar1 < 0x7f) {
        if ((0x19 < (uVar1 | 0x20) - 0x61) && ((9 < uVar1 - 0x30 && (uVar1 != 0x5f)))) break;
      }
      else {
        cVar5 = FUN_180260600(uVar11,uVar1);
        uVar11 = extraout_XMM0_Da_02;
        if ((cVar5 == '\0') &&
           (cVar5 = FUN_180260690(extraout_XMM0_Da_02,uVar1), uVar11 = extraout_XMM0_Da_03,
           cVar5 == '\0')) break;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar6);
  }
LAB_18024986c:
  local_100 = uVar4;
  local_f8 = uVar10;
  if (*(ulonglong *)(param_1 + 0x4a8) <
      (ulonglong)(*(longlong *)(param_1 + 0x488) - *(longlong *)(param_1 + 0x480) >> 5)) {
    plVar7 = (longlong *)
             FUN_18016d4c0(local_b0,*(ulonglong *)(param_1 + 0x4a8) * 0x20 +
                                    *(longlong *)(param_1 + 0x480));
  }
  else {
    local_d0[0] = 0;
    local_d0[1] = 0;
    local_d0[2] = 0;
    local_d0[3] = 0;
    FUN_18001d080(local_d0,&DAT_18033e5ea,0);
    plVar7 = local_d0;
    uVar8 = 2;
  }
  local_78 = (undefined8 ******)0x0;
  lStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = (undefined8 *******)*plVar7;
  lStack_70 = plVar7[1];
  local_68 = plVar7[2];
  uStack_60 = plVar7[3];
  *(undefined1 *)plVar7 = 0;
  plVar7[2] = 0;
  plVar7[3] = 0xf;
  uVar9 = uVar8 | 4;
  local_108 = uVar9;
  if ((uVar8 & 2) != 0) {
    uVar9 = uVar8 & 0xfffffffd | 4;
    local_108 = uVar9;
    FUN_18020e450(local_d0);
  }
  if ((uVar9 & 1) != 0) {
    uVar9 = uVar9 & 0xfffffffe;
    local_108 = uVar9;
    FUN_18020e450(local_b0);
  }
  local_f0 = &local_78;
  if (0xf < uStack_60) {
    local_f0 = local_78;
  }
  local_e8 = local_68;
  FUN_18025a5c0(param_1,&local_e0,&local_100,&local_f0);
  local_108 = uVar9 & 0xfffffffb;
  FUN_18020e450(&local_78);
  return;
}


