// 0x180233da0  FUN_180233da0
// size=365 thunk=false
// signature: undefined FUN_180233da0()
// status: ok


void FUN_180233da0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                  void *param_5,size_t param_6)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  longlong lVar4;
  ulonglong uVar5;
  code *pcVar6;
  longlong lVar7;
  void *pvVar8;
  ulonglong uVar9;
  void *_Src;
  undefined1 *puVar10;
  void *unaff_RDI;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar10 = auStack_48;
  lVar4 = param_1[2];
  _Src = (void *)0x7fffffffffffffff;
  if (0x7fffffffffffffffU - lVar4 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1800130a0();
  }
  uVar5 = param_1[3];
  pvVar8 = (void *)(param_2 + lVar4 | 0xf);
  if ((pvVar8 < (void *)0x8000000000000000) && (uVar5 <= 0x7fffffffffffffff - (uVar5 >> 1))) {
    pvVar3 = (void *)(uVar5 + (uVar5 >> 1));
    _Src = pvVar8;
    if (pvVar8 < pvVar3) {
      _Src = pvVar3;
    }
    uVar1 = (longlong)_Src + 1;
    if (uVar1 == 0) {
      unaff_RDI = (void *)0x0;
    }
    else {
      if (0xfff < uVar1) {
        uVar9 = (longlong)_Src + 0x28;
        if (uVar9 <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_180012fe0();
        }
        goto LAB_180233e3f;
      }
      unaff_RDI = (void *)FUN_1802d8350(uVar1);
    }
LAB_180233e62:
    param_1[2] = param_2 + lVar4;
    param_1[3] = _Src;
    if (uVar5 < 0x10) {
      memcpy(unaff_RDI,param_5,param_6);
      memcpy((void *)((longlong)unaff_RDI + param_6),param_1,lVar4 + 1);
      goto LAB_180233ee4;
    }
    _Src = (void *)*param_1;
    memcpy(unaff_RDI,param_5,param_6);
    memcpy((void *)((longlong)unaff_RDI + param_6),_Src,lVar4 + 1);
    if (0xfff < uVar5 + 1) {
      puVar2 = (undefined8 *)((longlong)_Src + -8);
      _Src = (void *)((longlong)_Src + (-8 - (longlong)*puVar2));
      if (_Src < (void *)0x20) {
        free((void *)*puVar2);
        goto LAB_180233ee4;
      }
      goto LAB_180233ebf;
    }
  }
  else {
    uVar9 = 0x8000000000000027;
LAB_180233e3f:
    lVar7 = FUN_1802d8350(uVar9);
    if (lVar7 != 0) {
      unaff_RDI = (void *)(lVar7 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)unaff_RDI - 8) = lVar7;
      goto LAB_180233e62;
    }
LAB_180233ebf:
    pcVar6 = (code *)swi(0x29);
    (*pcVar6)(5);
    puVar10 = auStack_40;
  }
  *(undefined8 *)(puVar10 + -8) = 0x180233ece;
  free(_Src);
LAB_180233ee4:
  *param_1 = unaff_RDI;
  return;
}


