// 0x1801fc020  FUN_1801fc020
// size=453 thunk=false
// signature: undefined FUN_1801fc020()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1801fc020(undefined8 *param_1,uint param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  void *_Dst;
  short *_Src;
  undefined8 uStack_90;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 *local_60;
  short local_30;
  short local_2e [3];
  ulonglong local_28;
  
  puVar6 = auStack_88;
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  local_68 = 0;
  _Src = local_2e;
  uVar5 = (ulonglong)param_2;
  do {
    _Src = _Src + -1;
    uVar2 = uVar5 / 10;
    *_Src = (short)uVar5 + (short)((uint)(ushort)((short)uVar2 << 2) + (int)uVar2) * -2 + 0x30;
    uVar5 = uVar2;
  } while ((int)uVar2 != 0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (_Src == local_2e) {
    param_1[3] = 7;
    *(undefined2 *)param_1 = 0;
    puVar6 = auStack_88;
  }
  else {
    uVar5 = (longlong)local_2e - (longlong)_Src >> 1;
    local_60 = param_1;
    if (0x7ffffffffffffffe < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_1800130a0();
    }
    if (uVar5 < 8) {
      param_1[2] = uVar5;
      param_1[3] = 7;
      memcpy(param_1,_Src,uVar5 * 2);
      *(undefined2 *)(uVar5 * 2 + (longlong)param_1) = 0;
      puVar6 = auStack_88;
    }
    else {
      uVar2 = uVar5 | 7;
      if (uVar2 < 0x7fffffffffffffff) goto LAB_1801fc14b;
      uVar4 = 0xfffffffffffffffe;
      puVar6 = auStack_88;
      uVar2 = 0x7ffffffffffffffe;
      do {
        if (uVar4 < 0x1000) {
          *(undefined8 *)(puVar6 + -8) = 0x1801fc189;
          _Dst = (void *)FUN_1802d8350();
          goto LAB_1801fc18c;
        }
        if (uVar4 + 0x27 <= uVar4) {
LAB_1801fc1e1:
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar6 + -8) = &UNK_1801fc1e6;
          FUN_180012fe0();
        }
        *(undefined8 *)(puVar6 + -8) = 0x1801fc13f;
        lVar3 = FUN_1802d8350(uVar4 + 0x27);
        if (lVar3 != 0) {
          _Dst = (void *)(lVar3 + 0x27U & 0xffffffffffffffe0);
          *(longlong *)((longlong)_Dst - 8) = lVar3;
          goto LAB_1801fc18c;
        }
        pcVar1 = (code *)swi(0x29);
        uVar2 = (*pcVar1)(5);
        puVar6 = puVar6 + 8;
LAB_1801fc14b:
        if (uVar2 < 10) {
          uVar2 = 10;
        }
        if (0x7fffffffffffffff < uVar2 + 1) goto LAB_1801fc1e1;
        uVar4 = (uVar2 + 1) * 2;
      } while (uVar4 != 0);
      _Dst = (void *)0x0;
LAB_1801fc18c:
      *param_1 = _Dst;
      param_1[2] = uVar5;
      param_1[3] = uVar2;
      *(undefined8 *)(puVar6 + -8) = 0x1801fc1a8;
      memcpy(_Dst,_Src,uVar5 * 2);
      *(undefined2 *)(uVar5 * 2 + (longlong)_Dst) = 0;
    }
  }
  *(undefined4 *)(puVar6 + 0x20) = 1;
  *(undefined8 *)(puVar6 + -8) = 0x1801fc1c6;
  return param_1;
}


