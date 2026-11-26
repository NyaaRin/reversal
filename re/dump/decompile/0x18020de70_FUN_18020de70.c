// 0x18020de70  FUN_18020de70
// size=204 thunk=false
// signature: undefined FUN_18020de70()
// status: ok


ulonglong * FUN_18020de70(ulonglong *param_1,ulonglong param_2)

{
  void *_Dst;
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [40];
  
  puVar6 = auStack_48;
  puVar5 = auStack_48;
  uVar3 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    if (0x3fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_18020cc40();
    }
    param_2 = param_2 * 4;
    if (param_2 != 0) {
      if (param_2 < 0x1000) {
        uVar3 = FUN_1802d8350(param_2);
        puVar6 = auStack_48;
      }
      else {
        if (param_2 + 0x27 <= param_2) {
                    /* WARNING: Subroutine does not return */
          FUN_180012fe0();
        }
        lVar2 = FUN_1802d8350();
        lVar4 = lVar2;
        if (lVar2 == 0) {
          lVar4 = 5;
          pcVar1 = (code *)swi(0x29);
          lVar2 = (*pcVar1)();
          puVar5 = auStack_40;
        }
        uVar3 = lVar2 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar3 - 8) = lVar4;
        puVar6 = puVar5;
      }
    }
    *param_1 = uVar3;
    param_1[1] = uVar3;
    param_1[2] = uVar3 + param_2;
    *(ulonglong **)(puVar6 + 0x20) = param_1;
    _Dst = (void *)*param_1;
    *(undefined8 *)(puVar6 + -8) = 0x18020df19;
    memset(_Dst,0,param_2);
    param_1[1] = (ulonglong)((longlong)_Dst + param_2);
    *(undefined8 *)(puVar6 + 0x20) = 0;
  }
  return param_1;
}


