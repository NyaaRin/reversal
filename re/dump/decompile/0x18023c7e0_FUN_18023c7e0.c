// 0x18023c7e0  FUN_18023c7e0
// size=532 thunk=false
// signature: undefined FUN_18023c7e0()
// status: ok


void FUN_18023c7e0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong local_58;
  ulonglong uStack_50;
  longlong local_48;
  ulonglong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  uint uStack_20;
  undefined4 uStack_1c;
  
  lVar3 = *param_1;
  uVar7 = param_1[3];
  if (uVar7 == 0) {
    uVar8 = 0;
    lVar9 = lVar3;
  }
  else {
    uVar8 = (*param_3 - lVar3 >> 2) * 0x20 + param_3[1];
    if (((longlong)uVar8 < 0) && (uVar8 != 0)) {
      lVar9 = -((~uVar8 >> 5) * 4 + 4);
    }
    else {
      lVar9 = (uVar8 >> 5) * 4;
    }
    lVar9 = lVar3 + lVar9;
    uStack_20 = (uint)uVar8 & 0x1f;
    uVar8 = (ulonglong)uStack_20;
    uVar6 = param_4[1] + (*param_4 - lVar3 >> 2) * 0x20;
    if (((longlong)uVar6 < 0) && (uVar6 != 0)) {
      local_48 = -((~uVar6 >> 5) * 4 + 4);
    }
    else {
      local_48 = (uVar6 >> 5) * 4;
    }
    local_48 = lVar3 + local_48;
    local_40 = (ulonglong)((uint)uVar6 & 0x1f);
    if ((lVar9 != local_48) || (uVar8 != local_40)) {
      if (((longlong)uVar7 < 0) && (uVar7 != 0)) {
        local_58 = -((~uVar7 >> 5) * 4 + 4);
      }
      else {
        local_58 = (uVar7 >> 5) * 4;
      }
      local_58 = lVar3 + local_58;
      uStack_1c = 0;
      uStack_50 = (ulonglong)((uint)uVar7 & 0x1f);
      local_28 = lVar9;
      FUN_18023f4f0(&local_38,&local_48,&local_58,&local_28);
      lVar4 = *param_1;
      uVar7 = (local_38 - lVar4 >> 2) * 0x20 + local_30;
      if (0x7fffffffffffffff < uVar7) {
        FUN_18022ebe0();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar6 = uVar7 + 0x1f >> 5;
      if ((uVar6 < (ulonglong)(param_1[1] - lVar4 >> 2)) &&
         (lVar1 = lVar4 + uVar6 * 4, lVar1 != param_1[1])) {
        param_1[1] = lVar1;
      }
      param_1[3] = uVar7;
      if ((uVar7 & 0x1f) != 0) {
        puVar2 = (uint *)(lVar4 + -4 + uVar6 * 4);
        *puVar2 = *puVar2 & (1 << ((byte)uVar7 & 0x1f)) - 1U;
      }
    }
  }
  uVar8 = (lVar9 - lVar3 >> 2) * 0x20 + uVar8;
  if (((longlong)uVar8 < 0) && (uVar8 != 0)) {
    lVar3 = -((~uVar8 >> 5) * 4 + 4);
  }
  else {
    lVar3 = (uVar8 >> 5) * 4;
  }
  *param_2 = *param_1 + lVar3;
  param_2[1] = (ulonglong)((uint)uVar8 & 0x1f);
  return;
}


