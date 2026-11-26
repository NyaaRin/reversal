// 0x180211510  FUN_180211510
// size=293 thunk=false
// signature: undefined FUN_180211510()
// status: ok


void FUN_180211510(undefined8 *param_1,void *param_2,ulonglong param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  void *_Dst;
  undefined8 uStack_50;
  undefined1 auStack_48 [32];
  
  puVar5 = auStack_48;
  if (0x7ffffffffffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_1800130a0();
  }
  if (param_3 < 8) {
    param_1[2] = param_3;
    param_1[3] = 7;
    memcpy(param_1,param_2,param_3 * 2);
    *(undefined2 *)(param_3 * 2 + (longlong)param_1) = 0;
    return;
  }
  uVar2 = param_3 | 7;
  _Dst = (void *)0x0;
  if (uVar2 < 0x7fffffffffffffff) goto LAB_1802115b4;
  uVar4 = 0xfffffffffffffffe;
  puVar5 = auStack_48;
  uVar2 = 0x7ffffffffffffffe;
  do {
    if (uVar4 < 0x1000) {
      *(undefined8 *)(puVar5 + -8) = 0x1802115f3;
      _Dst = (void *)FUN_1802d8350();
      goto LAB_1802115f6;
    }
    if (uVar4 + 0x27 <= uVar4) {
LAB_18021162b:
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar5 + -8) = &UNK_180211630;
      FUN_180012fe0();
    }
    *(undefined8 *)(puVar5 + -8) = 0x1802115a8;
    lVar3 = FUN_1802d8350(uVar4 + 0x27);
    if (lVar3 != 0) {
      _Dst = (void *)(lVar3 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)_Dst - 8) = lVar3;
      goto LAB_1802115f6;
    }
    pcVar1 = (code *)swi(0x29);
    uVar2 = (*pcVar1)(5);
    puVar5 = puVar5 + 8;
LAB_1802115b4:
    if (uVar2 < 10) {
      uVar2 = 10;
    }
    if (0x7fffffffffffffff < uVar2 + 1) goto LAB_18021162b;
    uVar4 = (uVar2 + 1) * 2;
    if (uVar4 == 0) {
LAB_1802115f6:
      param_1[2] = param_3;
      *param_1 = _Dst;
      param_1[3] = uVar2;
      *(undefined8 *)(puVar5 + -8) = 0x180211612;
      memcpy(_Dst,param_2,param_3 * 2);
      *(undefined2 *)(param_3 * 2 + (longlong)_Dst) = 0;
      return;
    }
  } while( true );
}


