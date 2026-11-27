// 0x180029d70  FUN_180029d70
// size=235 thunk=false
// signature: undefined FUN_180029d70()
// status: ok


ulonglong * FUN_180029d70(ulonglong *param_1,undefined8 *param_2)

{
  void *_Src;
  void *_Dst;
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  size_t _Size;
  ulonglong uVar7;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [40];
  
  puVar6 = auStack_58;
  puVar5 = auStack_58;
  uVar3 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  _Src = (void *)*param_2;
  _Size = param_2[1] - (longlong)_Src;
  uVar7 = (longlong)_Size >> 3;
  if (uVar7 != 0) {
    if (0x1fffffffffffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_18020cc40();
    }
    uVar7 = uVar7 * 8;
    if (uVar7 != 0) {
      if (uVar7 < 0x1000) {
        uVar3 = FUN_1802d8350(uVar7);
        puVar6 = auStack_58;
      }
      else {
        if (uVar7 + 0x27 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_180012fe0();
        }
        lVar2 = FUN_1802d8350();
        lVar4 = lVar2;
        if (lVar2 == 0) {
          lVar4 = 5;
          pcVar1 = (code *)swi(0x29);
          lVar2 = (*pcVar1)();
          puVar5 = auStack_50;
        }
        uVar3 = lVar2 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar3 - 8) = lVar4;
        puVar6 = puVar5;
      }
    }
    *param_1 = uVar3;
    param_1[1] = uVar3;
    param_1[2] = uVar3 + uVar7;
    *(ulonglong **)(puVar6 + 0x20) = param_1;
    _Dst = (void *)*param_1;
    *(undefined8 *)(puVar6 + -8) = 0x180029e30;
    memmove(_Dst,_Src,_Size);
    param_1[1] = (ulonglong)((longlong)_Dst + uVar7);
    *(undefined8 *)(puVar6 + 0x20) = 0;
  }
  return param_1;
}


