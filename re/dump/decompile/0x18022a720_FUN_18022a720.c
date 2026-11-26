// 0x18022a720  FUN_18022a720
// size=412 thunk=false
// signature: undefined FUN_18022a720()
// status: ok


void FUN_18022a720(undefined8 *param_1,ulonglong param_2,undefined8 param_3,size_t param_4,
                  char param_5)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  size_t _Size;
  ulonglong uVar4;
  code *pcVar5;
  longlong lVar6;
  void *pvVar7;
  ulonglong uVar8;
  void *_Src;
  undefined1 *puVar9;
  void *unaff_RDI;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [24];
  size_t local_48;
  
  puVar9 = auStack_68;
  _Size = param_1[2];
  _Src = (void *)0x7fffffffffffffff;
  local_48 = param_4;
  if (0x7fffffffffffffff - _Size < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1800130a0();
  }
  uVar4 = param_1[3];
  pvVar7 = (void *)(_Size + param_2 | 0xf);
  if ((pvVar7 < (void *)0x8000000000000000) && (uVar4 <= 0x7fffffffffffffff - (uVar4 >> 1))) {
    pvVar3 = (void *)(uVar4 + (uVar4 >> 1));
    _Src = pvVar7;
    if (pvVar7 < pvVar3) {
      _Src = pvVar3;
    }
    uVar1 = (longlong)_Src + 1;
    if (uVar1 == 0) {
      unaff_RDI = (void *)0x0;
    }
    else {
      if (0xfff < uVar1) {
        uVar8 = (longlong)_Src + 0x28;
        if (uVar8 <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_180012fe0();
        }
        goto LAB_18022a7c6;
      }
      unaff_RDI = (void *)FUN_1802d8350(uVar1);
    }
LAB_18022a7ed:
    param_1[2] = _Size + param_2;
    param_1[3] = _Src;
    if (uVar4 < 0x10) {
      memcpy(unaff_RDI,param_1,_Size);
      memset((void *)(_Size + (longlong)unaff_RDI),(int)param_5,local_48);
      *(undefined1 *)(param_4 + _Size + (longlong)unaff_RDI) = 0;
      goto LAB_18022a88a;
    }
    _Src = (void *)*param_1;
    memcpy(unaff_RDI,_Src,_Size);
    memset((void *)(_Size + (longlong)unaff_RDI),(int)param_5,local_48);
    *(undefined1 *)(param_4 + _Size + (longlong)unaff_RDI) = 0;
    if (0xfff < uVar4 + 1) {
      puVar2 = (undefined8 *)((longlong)_Src + -8);
      _Src = (void *)((longlong)_Src + (-8 - (longlong)*puVar2));
      if (_Src < (void *)0x20) {
        free((void *)*puVar2);
        goto LAB_18022a88a;
      }
      goto LAB_18022a85b;
    }
  }
  else {
    uVar8 = 0x8000000000000027;
LAB_18022a7c6:
    lVar6 = FUN_1802d8350(uVar8);
    if (lVar6 != 0) {
      unaff_RDI = (void *)(lVar6 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)unaff_RDI - 8) = lVar6;
      goto LAB_18022a7ed;
    }
LAB_18022a85b:
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
    puVar9 = auStack_60;
  }
  *(undefined8 *)(puVar9 + -8) = 0x18022a86a;
  free(_Src);
LAB_18022a88a:
  *param_1 = unaff_RDI;
  return;
}


