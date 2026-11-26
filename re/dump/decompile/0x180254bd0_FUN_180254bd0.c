// 0x180254bd0  FUN_180254bd0
// size=691 thunk=false
// signature: undefined FUN_180254bd0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180254bd0(longlong *param_1,undefined8 param_2,ulonglong *param_3,ulonglong *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  void *pvVar7;
  size_t sVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  void *pvVar12;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  ulonglong local_58;
  ulonglong local_50;
  
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  lVar11 = *param_1;
  uVar2 = *param_3;
  uVar5 = (param_1[1] - lVar11 >> 5) * -0x5555555555555555;
  local_68 = param_2;
  if ((uVar2 <= uVar5 && uVar5 - uVar2 != 0) &&
     (uVar3 = *param_4, uVar3 <= uVar5 && uVar5 - uVar3 != 0)) {
    uVar5 = param_4[1];
    local_70 = uVar2 * 0x60;
    lVar1 = local_70 + lVar11;
    pvVar12 = (void *)(param_3[1] * 0x10 + *(longlong *)(local_70 + lVar11));
    if (uVar2 == uVar3) {
      pvVar7 = (void *)(*(longlong *)(local_70 + lVar11) + uVar5 * 0x10);
      if (pvVar12 != pvVar7) {
        sVar8 = *(longlong *)(lVar1 + 8) - (longlong)pvVar7;
        memmove(pvVar12,pvVar7,sVar8);
        *(size_t *)(lVar1 + 8) = (longlong)pvVar12 + sVar8;
      }
    }
    else {
      local_78 = uVar3 * 0x60;
      if (pvVar12 != *(void **)(lVar1 + 8)) {
        *(void **)(lVar1 + 8) = pvVar12;
      }
      pvVar12 = *(void **)(local_78 + lVar11);
      pvVar7 = (void *)(uVar5 * 0x10 + (longlong)pvVar12);
      if (pvVar12 != pvVar7) {
        sVar8 = *(longlong *)(local_78 + 8 + lVar11) - (longlong)pvVar7;
        memmove(pvVar12,pvVar7,sVar8);
        *(size_t *)(local_78 + 8 + lVar11) = sVar8 + (longlong)pvVar12;
      }
      FUN_180260dc0(lVar1,*(undefined8 *)(lVar1 + 8),*(longlong *)(local_78 + lVar11),
                    *(longlong *)(local_78 + 8 + lVar11) - *(longlong *)(local_78 + lVar11) >> 4);
      uVar5 = uVar2 + 1;
      if (param_1[0x13] != 0) {
        for (; uVar5 <= uVar3; uVar5 = uVar5 + 1) {
          uVar6 = (param_1[1] - *param_1 >> 5) * -0x5555555555555555;
          if (uVar6 < uVar5 || uVar6 - uVar5 == 0) goto LAB_180254e7f;
          local_60 = *(undefined8 *)(uVar5 * 0x60 + 0x58 + *param_1);
          plVar4 = (longlong *)param_1[0x13];
          local_58 = uVar5;
          if (plVar4 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::_Xbad_function_call();
          }
          (**(code **)(*plVar4 + 0x10))(plVar4,&local_58,&local_60);
        }
      }
      lVar11 = (uVar2 + 1) * 0x60 + *param_1;
      lVar9 = local_78 + 0x60 + *param_1;
      if (lVar11 != lVar9) {
        lVar10 = param_1[1];
        for (; lVar9 != lVar10; lVar9 = lVar9 + 0x60) {
          FUN_180261ae0(lVar11,lVar9);
          lVar11 = lVar11 + 0x60;
        }
        lVar9 = param_1[1];
        for (lVar10 = lVar11; lVar10 != lVar9; lVar10 = lVar10 + 0x60) {
          FUN_18023b050(lVar10);
        }
        param_1[1] = lVar11;
      }
    }
    *(undefined8 *)(lVar1 + 0x50) = 0;
    uVar5 = (param_1[1] - *param_1 >> 5) * -0x5555555555555555;
    if (uVar2 <= uVar5 && uVar5 - uVar2 != 0) {
      *(undefined1 *)(*param_1 + 0x20 + local_70) = 1;
      uVar5 = (param_1[1] - *param_1 >> 5) * -0x5555555555555555;
      if (uVar2 <= uVar5 && uVar5 - uVar2 != 0) {
        *(undefined1 *)(*param_1 + 0x23 + local_70) = 1;
        FUN_180256830(param_1,local_68,uVar2,uVar2);
        *(undefined1 *)(param_1 + 3) = 1;
        return;
      }
    }
  }
LAB_180254e7f:
                    /* WARNING: Subroutine does not return */
  FUN_180262180();
}


