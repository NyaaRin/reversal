// 0x180239b60  FUN_180239b60
// size=607 thunk=false
// signature: undefined FUN_180239b60()
// status: ok


ulonglong FUN_180239b60(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  longlong lVar1;
  code *pcVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  void *_Dst;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  ulonglong uVar13;
  byte local_28 [16];
  
  lVar5 = *param_1;
  uVar13 = (*param_2 - lVar5 >> 2) * 0x20 + param_2[1];
  if (param_3 != 0) {
    if (0x7fffffffffffffffU - param_1[3] < param_3) {
      FUN_18022ebe0();
      pcVar2 = (code *)swi(3);
      uVar13 = (*pcVar2)();
      return uVar13;
    }
    _Dst = (void *)param_1[1];
    uVar7 = param_3 + 0x1f + param_1[3] >> 5;
    uVar3 = 0;
    local_28[0] = 0;
    local_28[1] = 0;
    local_28[2] = 0;
    local_28[3] = 0;
    uVar4 = (longlong)_Dst - lVar5 >> 2;
    if (uVar7 < uVar4) {
      param_1[1] = lVar5 + uVar7 * 4;
    }
    else if (uVar4 < uVar7) {
      if ((ulonglong)(param_1[2] - lVar5 >> 2) < uVar7) {
        FUN_18023e400(param_1,uVar7,local_28);
      }
      else {
        lVar8 = uVar7 - uVar4;
        local_28[4] = 0;
        local_28[5] = 0;
        local_28[6] = 0;
        local_28[7] = 0;
        lVar5 = 0;
        do {
          lVar6 = lVar5 + 1;
          if (local_28[lVar5] != local_28[lVar5 + 4]) {
            uVar3 = -(uint)(local_28[lVar5] < local_28[lVar5 + 4]) | 1;
            break;
          }
          lVar5 = lVar6;
        } while (lVar6 != 4);
        if (uVar3 == 0) {
          memset(_Dst,0,lVar8 * 4);
          _Dst = (void *)((longlong)_Dst + lVar8 * 4);
        }
        else if (lVar8 != 0) {
          memset(_Dst,0,lVar8 * 4);
          do {
            _Dst = (void *)((longlong)_Dst + 4);
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        param_1[1] = (longlong)_Dst;
      }
    }
    uVar4 = param_1[3];
    if (uVar4 == 0) {
      param_1[3] = param_3;
    }
    else {
      lVar5 = *param_1;
      if (((longlong)uVar4 < 0) && (uVar4 != 0)) {
        lVar8 = -((~uVar4 >> 5) * 4 + 4);
      }
      else {
        lVar8 = (uVar4 >> 5) * 4;
      }
      uVar7 = (ulonglong)((uint)uVar4 & 0x1f);
      uVar4 = uVar4 + param_3;
      param_1[3] = uVar4;
      if (((longlong)uVar4 < 0) && (uVar4 != 0)) {
        lVar6 = -((~uVar4 >> 5) * 4 + 4);
      }
      else {
        lVar6 = (uVar4 >> 5) * 4;
      }
      uVar4 = (ulonglong)((uint)uVar4 & 0x1f);
      if (((longlong)uVar13 < 0) && (uVar13 != 0)) {
        lVar1 = -((~uVar13 >> 5) * 4 + 4);
      }
      else {
        lVar1 = (uVar13 >> 5) * 4;
      }
      puVar9 = (uint *)(lVar5 + lVar8);
      puVar11 = (uint *)(lVar5 + lVar6);
      while (((uint *)(lVar5 + lVar1) != puVar9 || (((uint)uVar13 & 0x1f) != uVar7))) {
        puVar10 = puVar9 + -1;
        if (uVar7 == 0) {
          uVar7 = 0x1f;
        }
        else {
          uVar7 = uVar7 - 1;
          puVar10 = puVar9;
        }
        puVar12 = puVar11 + -1;
        if (uVar4 == 0) {
          uVar4 = 0x1f;
        }
        else {
          uVar4 = uVar4 - 1;
          puVar12 = puVar11;
        }
        puVar9 = puVar10;
        puVar11 = puVar12;
        if ((*puVar10 & 1 << ((byte)uVar7 & 0x1f)) == 0) {
          *puVar12 = *puVar12 & ~(1 << ((uint)uVar4 & 0x1f));
        }
        else {
          *puVar12 = *puVar12 | 1 << ((uint)uVar4 & 0x1f);
        }
      }
    }
  }
  return uVar13;
}


