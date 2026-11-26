// 0x180229ea0  FUN_180229ea0
// size=467 thunk=false
// signature: undefined FUN_180229ea0()
// status: ok


void FUN_180229ea0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,size_t param_4,
                  longlong param_5,void *param_6,size_t param_7)

{
  ulonglong uVar1;
  size_t _Size;
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
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [24];
  void *local_48;
  size_t local_40;
  
  puVar10 = auStack_68;
  _Src = (void *)0x7fffffffffffffff;
  lVar4 = param_1[2];
  local_48 = param_6;
  if (0x7fffffffffffffffU - lVar4 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1800130a0();
  }
  uVar5 = param_1[3];
  pvVar8 = (void *)(lVar4 + param_2 | 0xf);
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
        goto LAB_180229f4e;
      }
      unaff_RDI = (void *)FUN_1802d8350(uVar1);
    }
LAB_180229f75:
    param_1[3] = _Src;
    param_1[2] = lVar4 + param_2;
    pvVar8 = (void *)(param_4 + (longlong)unaff_RDI);
    _Size = ((lVar4 - param_4) - param_5) + 1;
    local_40 = _Size;
    if (uVar5 < 0x10) {
      memcpy(unaff_RDI,param_1,param_4);
      memcpy(pvVar8,local_48,param_7);
      memcpy((void *)(param_7 + (longlong)pvVar8),(void *)((longlong)param_1 + param_5 + param_4),
             _Size);
      goto LAB_18022a041;
    }
    _Src = (void *)*param_1;
    memcpy(unaff_RDI,_Src,param_4);
    memcpy(pvVar8,local_48,param_7);
    memcpy((void *)(param_7 + (longlong)pvVar8),(void *)((longlong)_Src + param_5 + param_4),
           local_40);
    if (0xfff < uVar5 + 1) {
      puVar2 = (undefined8 *)((longlong)_Src + -8);
      _Src = (void *)((longlong)_Src + (-8 - (longlong)*puVar2));
      if (_Src < (void *)0x20) {
        free((void *)*puVar2);
        goto LAB_18022a041;
      }
      goto LAB_18022a005;
    }
  }
  else {
    uVar9 = 0x8000000000000027;
LAB_180229f4e:
    lVar7 = FUN_1802d8350(uVar9);
    if (lVar7 != 0) {
      unaff_RDI = (void *)(lVar7 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)unaff_RDI - 8) = lVar7;
      goto LAB_180229f75;
    }
LAB_18022a005:
    pcVar6 = (code *)swi(0x29);
    (*pcVar6)(5);
    puVar10 = auStack_60;
  }
  *(undefined8 *)(puVar10 + -8) = 0x18022a014;
  free(_Src);
LAB_18022a041:
  *param_1 = unaff_RDI;
  return;
}


