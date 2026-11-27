// 0x180240e30  FUN_180240e30
// size=382 thunk=false
// signature: undefined FUN_180240e30()
// status: ok


undefined8 * FUN_180240e30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  void *pvVar3;
  void *_Src;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  size_t _Size;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [24];
  undefined8 *local_48;
  undefined8 *local_38;
  undefined8 *local_30;
  
  puVar10 = auStack_68;
  puVar9 = auStack_68;
  *param_1 = *param_2;
  puVar1 = param_1 + 1;
  uVar8 = 0;
  *puVar1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar7 = (longlong)(param_2[2] - param_2[1]) >> 2;
  local_38 = param_1;
  local_30 = puVar1;
  if (uVar7 != 0) {
    if (0x3fffffffffffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_18020cc40();
    }
    FUN_18022eb50(puVar1);
    pvVar3 = (void *)*puVar1;
    _Size = param_2[2] - (longlong)param_2[1];
    local_48 = puVar1;
    memmove(pvVar3,(void *)param_2[1],_Size);
    param_1[2] = (void *)((longlong)pvVar3 + ((longlong)_Size >> 2) * 4);
    local_48 = (undefined8 *)0x0;
  }
  param_1[4] = param_2[4];
  puVar2 = param_1 + 5;
  *puVar2 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar7 = (longlong)(param_2[6] - param_2[5]) >> 4;
  if (uVar7 != 0) {
    if (0xfffffffffffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_18020cc40();
    }
    uVar7 = uVar7 * 0x10;
    if (uVar7 != 0) {
      if (uVar7 < 0x1000) {
        uVar8 = FUN_1802d8350(uVar7);
        puVar10 = auStack_68;
      }
      else {
        if (uVar7 + 0x27 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_180012fe0();
        }
        lVar5 = FUN_1802d8350();
        lVar6 = lVar5;
        if (lVar5 == 0) {
          lVar6 = 5;
          pcVar4 = (code *)swi(0x29);
          lVar5 = (*pcVar4)();
          puVar9 = auStack_60;
        }
        uVar8 = lVar5 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar8 - 8) = lVar6;
        puVar10 = puVar9;
      }
    }
    *puVar2 = uVar8;
    param_1[6] = uVar8;
    param_1[7] = uVar8 + uVar7;
    *(ulonglong **)(puVar10 + 0x28) = puVar2;
    pvVar3 = (void *)*puVar2;
    _Src = (void *)param_2[5];
    uVar8 = param_2[6] - (longlong)_Src;
    *(undefined8 *)(puVar10 + -8) = 0x180240f77;
    memmove(pvVar3,_Src,uVar8);
    param_1[6] = (uVar8 & 0xfffffffffffffff0) + (longlong)pvVar3;
    *(undefined8 *)(puVar10 + 0x28) = 0;
  }
  return param_1;
}


