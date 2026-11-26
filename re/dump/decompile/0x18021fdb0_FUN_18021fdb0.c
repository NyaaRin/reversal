// 0x18021fdb0  FUN_18021fdb0
// size=400 thunk=false
// signature: undefined FUN_18021fdb0()
// status: ok


void FUN_18021fdb0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                  void *param_5,longlong param_6)

{
  undefined8 *puVar1;
  void *pvVar2;
  size_t _Size;
  longlong lVar3;
  ulonglong uVar4;
  code *pcVar5;
  size_t _Size_00;
  longlong lVar6;
  void *pvVar7;
  ulonglong uVar8;
  void *_Src;
  undefined1 *puVar9;
  void *unaff_RDI;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar9 = auStack_48;
  lVar3 = param_1[2];
  _Src = (void *)0x7ffffffffffffffe;
  if (0x7ffffffffffffffeU - lVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1800130a0();
  }
  uVar4 = param_1[3];
  pvVar7 = (void *)(lVar3 + param_2 | 7);
  if ((pvVar7 < (void *)0x7fffffffffffffff) && (uVar4 <= 0x7ffffffffffffffe - (uVar4 >> 1))) {
    pvVar2 = (void *)(uVar4 + (uVar4 >> 1));
    _Src = pvVar7;
    if (pvVar7 < pvVar2) {
      _Src = pvVar2;
    }
    if (0x7fffffffffffffff < (longlong)_Src + 1U) goto LAB_18021ff36;
    uVar8 = ((longlong)_Src + 1U) * 2;
    if (uVar8 != 0) goto LAB_18021fe49;
    unaff_RDI = (void *)0x0;
LAB_18021fe86:
    _Size = lVar3 * 2 + 2;
    param_1[2] = lVar3 + param_2;
    param_1[3] = _Src;
    _Size_00 = param_6 * 2;
    if (uVar4 < 8) {
      memcpy(unaff_RDI,param_5,_Size_00);
      memcpy((void *)(_Size_00 + (longlong)unaff_RDI),param_1,_Size);
      goto LAB_18021ff16;
    }
    _Src = (void *)*param_1;
    memcpy(unaff_RDI,param_5,_Size_00);
    memcpy((void *)(_Size_00 + (longlong)unaff_RDI),_Src,_Size);
    if (0xfff < uVar4 * 2 + 2) {
      puVar1 = (undefined8 *)((longlong)_Src + -8);
      _Src = (void *)((longlong)_Src + (-8 - (longlong)*puVar1));
      if (_Src < (void *)0x20) {
        free((void *)*puVar1);
        goto LAB_18021ff16;
      }
      goto LAB_18021fef2;
    }
  }
  else {
    uVar8 = 0xfffffffffffffffe;
LAB_18021fe49:
    if (uVar8 < 0x1000) {
      unaff_RDI = (void *)FUN_1802d8350();
      goto LAB_18021fe86;
    }
    if (uVar8 + 0x27 <= uVar8) {
LAB_18021ff36:
                    /* WARNING: Subroutine does not return */
      FUN_180012fe0();
    }
    lVar6 = FUN_1802d8350(uVar8 + 0x27);
    if (lVar6 != 0) {
      unaff_RDI = (void *)(lVar6 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)unaff_RDI - 8) = lVar6;
      goto LAB_18021fe86;
    }
LAB_18021fef2:
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
    puVar9 = auStack_40;
  }
  *(undefined8 *)(puVar9 + -8) = 0x18021ff01;
  free(_Src);
LAB_18021ff16:
  *param_1 = unaff_RDI;
  return;
}


