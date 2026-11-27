// 0x180015270  FUN_180015270
// size=489 thunk=false
// signature: undefined FUN_180015270()
// status: ok


void FUN_180015270(longlong param_1,ulonglong *param_2,ulonglong *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  longlong lVar1;
  undefined ***pppuVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined4 local_a8 [2];
  undefined ***local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  undefined **local_78;
  longlong local_70;
  undefined ***local_40;
  
  uVar5 = *param_3;
  lVar1 = *(longlong *)(param_1 + 0x50);
  uVar6 = (*(longlong *)(param_1 + 0x58) - lVar1 >> 5) * -0x5555555555555555;
  if (uVar5 < uVar6) {
    uVar4 = *(longlong *)(uVar5 * 0x60 + 8 + lVar1) - *(longlong *)(uVar5 * 0x60 + lVar1) >> 4;
    if (param_3[1] <= uVar4) {
      uVar4 = param_3[1];
    }
  }
  else {
    uVar5 = uVar6 - 1;
    if (uVar6 < uVar5 || uVar6 - uVar5 == 0) goto LAB_180015454;
    uVar4 = *(longlong *)(uVar5 * 0x60 + 8 + lVar1) - *(longlong *)(uVar5 * 0x60 + lVar1) >> 4;
  }
  uVar3 = *param_2;
  if (uVar3 < uVar6) {
    uVar6 = *(longlong *)(uVar3 * 0x60 + 8 + lVar1) - *(longlong *)(uVar3 * 0x60 + lVar1) >> 4;
    if (param_2[1] <= uVar6) {
      uVar6 = param_2[1];
    }
  }
  else {
    uVar3 = uVar6 - 1;
    if (uVar6 < uVar3 || uVar6 - uVar3 == 0) {
LAB_180015454:
                    /* WARNING: Subroutine does not return */
      FUN_180262180();
    }
    uVar6 = *(longlong *)(uVar3 * 0x60 + 8 + lVar1) - *(longlong *)(uVar3 * 0x60 + lVar1) >> 4;
  }
  local_a8[0] = 0xff604cee;
  local_a0 = (undefined ***)0x0;
  bVar7 = uVar3 < uVar5;
  if (uVar3 == uVar5) {
    bVar7 = uVar6 < uVar4;
  }
  if (bVar7) {
    pppuVar2 = *(undefined ****)(param_1 + 0x360);
    if (pppuVar2 == *(undefined ****)(param_1 + 0x368)) {
      FUN_180262c20((longlong *)(param_1 + 0x358),pppuVar2,&local_a0,local_a8,param_6);
    }
    else {
      *pppuVar2 = (undefined **)0x0;
      *(undefined4 *)(pppuVar2 + 1) = 0xff604cee;
      pppuVar2[2] = (undefined **)0x0;
      pppuVar2[3] = (undefined **)0x0;
      pppuVar2[4] = (undefined **)0x0;
      pppuVar2[5] = (undefined **)0x0;
      local_a0 = pppuVar2;
      FUN_18001d080(pppuVar2 + 2,*param_6,param_6[1]);
      *(longlong *)(param_1 + 0x360) = *(longlong *)(param_1 + 0x360) + 0x30;
    }
    local_a0 = &local_78;
    local_78 = 
    vftable_std_3_XAEAUGlyph_Z_std_std_D_DU__char_traits_0_KIAEBV__basic_string_view_3_IEAAXUDocPos_TextEditor__4__addSquiggle_V_lambda_1_____Func_impl_no_alloc
    ;
    local_70 = (*(longlong *)(param_1 + 0x360) - *(longlong *)(param_1 + 0x358) >> 4) *
               -0x5555555555555555;
    local_40 = &local_78;
    local_98 = uVar5;
    local_90 = uVar4;
    local_88 = uVar3;
    local_80 = uVar6;
    FUN_180255080((longlong *)(param_1 + 0x50),&local_88,&local_98,&local_78);
  }
  return;
}


