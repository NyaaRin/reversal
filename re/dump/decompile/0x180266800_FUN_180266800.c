// 0x180266800  FUN_180266800
// size=241 thunk=false
// signature: undefined FUN_180266800()
// status: ok


ulonglong * FUN_180266800(ulonglong *param_1,longlong *param_2)

{
  void *_Dst;
  void *_Src;
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [40];
  
  puVar7 = auStack_48;
  puVar6 = auStack_48;
  uVar5 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar4 = param_2[1] - *param_2 >> 5;
  if (uVar4 != 0) {
    if (0x7ffffffffffffff < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_18020cc40();
    }
    uVar4 = uVar4 * 0x20;
    if (uVar4 != 0) {
      if (uVar4 < 0x1000) {
        uVar5 = FUN_1802d8350(uVar4);
        puVar7 = auStack_48;
      }
      else {
        if (uVar4 + 0x27 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_180012fe0();
        }
        lVar2 = FUN_1802d8350();
        lVar3 = lVar2;
        if (lVar2 == 0) {
          lVar3 = 5;
          pcVar1 = (code *)swi(0x29);
          lVar2 = (*pcVar1)();
          puVar6 = auStack_40;
        }
        uVar5 = lVar2 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar5 - 8) = lVar3;
        puVar7 = puVar6;
      }
    }
    *param_1 = uVar5;
    param_1[1] = uVar5;
    param_1[2] = uVar5 + uVar4;
    *(ulonglong **)(puVar7 + 0x20) = param_1;
    _Dst = (void *)*param_1;
    _Src = (void *)*param_2;
    uVar5 = param_2[1] - (longlong)_Src;
    *(undefined8 *)(puVar7 + -8) = 0x1802668c0;
    memmove(_Dst,_Src,uVar5);
    param_1[1] = (uVar5 & 0xffffffffffffffe0) + (longlong)_Dst;
    *(undefined8 *)(puVar7 + 0x20) = 0;
  }
  return param_1;
}


