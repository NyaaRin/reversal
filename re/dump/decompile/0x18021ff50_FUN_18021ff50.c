// 0x18021ff50  FUN_18021ff50
// size=429 thunk=false
// signature: undefined FUN_18021ff50()
// status: ok


void FUN_18021ff50(undefined8 *param_1,ulonglong param_2,undefined8 param_3,void *param_4,
                  longlong param_5)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined2 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  code *pcVar6;
  size_t _Size;
  longlong lVar7;
  void *pvVar8;
  ulonglong uVar9;
  void *_Src;
  undefined1 *puVar10;
  void *unaff_RDI;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  
  puVar10 = auStack_58;
  lVar4 = param_1[2];
  _Src = (void *)0x7ffffffffffffffe;
  if (0x7ffffffffffffffeU - lVar4 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1800130a0();
  }
  uVar5 = param_1[3];
  pvVar8 = (void *)(lVar4 + param_2 | 7);
  if ((pvVar8 < (void *)0x7fffffffffffffff) && (uVar5 <= 0x7ffffffffffffffe - (uVar5 >> 1))) {
    pvVar2 = (void *)(uVar5 + (uVar5 >> 1));
    _Src = pvVar8;
    if (pvVar8 < pvVar2) {
      _Src = pvVar2;
    }
    if (0x7fffffffffffffff < (longlong)_Src + 1U) goto LAB_1802200f3;
    uVar9 = ((longlong)_Src + 1U) * 2;
    if (uVar9 != 0) goto LAB_18021ffec;
    unaff_RDI = (void *)0x0;
LAB_180220029:
    _Size = lVar4 * 2;
    param_1[2] = lVar4 + param_2;
    param_1[3] = _Src;
    puVar3 = (undefined2 *)((longlong)unaff_RDI + (param_5 + lVar4) * 2);
    if (uVar5 < 8) {
      memcpy(unaff_RDI,param_1,_Size);
      memcpy((void *)(_Size + (longlong)unaff_RDI),param_4,param_5 * 2);
      *puVar3 = 0;
      goto LAB_1802200ce;
    }
    _Src = (void *)*param_1;
    memcpy(unaff_RDI,_Src,_Size);
    memcpy((void *)(_Size + (longlong)unaff_RDI),param_4,param_5 * 2);
    *puVar3 = 0;
    if (0xfff < uVar5 * 2 + 2) {
      puVar1 = (undefined8 *)((longlong)_Src + -8);
      _Src = (void *)((longlong)_Src + (-8 - (longlong)*puVar1));
      if (_Src < (void *)0x20) {
        free((void *)*puVar1);
        goto LAB_1802200ce;
      }
      goto LAB_1802200a1;
    }
  }
  else {
    uVar9 = 0xfffffffffffffffe;
LAB_18021ffec:
    if (uVar9 < 0x1000) {
      unaff_RDI = (void *)FUN_1802d8350();
      goto LAB_180220029;
    }
    if (uVar9 + 0x27 <= uVar9) {
LAB_1802200f3:
                    /* WARNING: Subroutine does not return */
      FUN_180012fe0();
    }
    lVar7 = FUN_1802d8350(uVar9 + 0x27);
    if (lVar7 != 0) {
      unaff_RDI = (void *)(lVar7 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)unaff_RDI - 8) = lVar7;
      goto LAB_180220029;
    }
LAB_1802200a1:
    pcVar6 = (code *)swi(0x29);
    (*pcVar6)(5);
    puVar10 = auStack_50;
  }
  *(undefined8 *)(puVar10 + -8) = 0x1802200b0;
  free(_Src);
LAB_1802200ce:
  *param_1 = unaff_RDI;
  return;
}


