// 0x18020ea80  FUN_18020ea80
// size=264 thunk=false
// signature: undefined FUN_18020ea80()
// status: ok


undefined8 * FUN_18020ea80(undefined8 *param_1,ulonglong param_2,char param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  void *_Dst;
  undefined1 *puVar5;
  undefined8 uStack_50;
  undefined1 auStack_48 [32];
  
  puVar5 = auStack_48;
  _Dst = (void *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (0x7fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1800130a0();
  }
  if (param_2 < 0x10) {
    param_1[2] = param_2;
    param_1[3] = 0xf;
    memset(param_1,(int)param_3,param_2);
    *(undefined1 *)(param_2 + (longlong)param_1) = 0;
    return param_1;
  }
  uVar2 = param_2 | 0xf;
  if (uVar2 < 0x8000000000000000) goto LAB_18020eb11;
  uVar3 = 0x8000000000000027;
  puVar5 = auStack_48;
  uVar2 = 0x7fffffffffffffff;
  while( true ) {
    *(undefined8 *)(puVar5 + -8) = 0x18020eb05;
    lVar4 = FUN_1802d8350(uVar3);
    if (lVar4 != 0) break;
    pcVar1 = (code *)swi(0x29);
    uVar2 = (*pcVar1)(5);
    puVar5 = puVar5 + 8;
LAB_18020eb11:
    if (uVar2 < 0x16) {
      uVar2 = 0x16;
    }
    if (uVar2 == 0xffffffffffffffff) goto LAB_18020eb53;
    if (uVar2 + 1 < 0x1000) {
      *(undefined8 *)(puVar5 + -8) = 0x18020eb50;
      _Dst = (void *)FUN_1802d8350();
      goto LAB_18020eb53;
    }
    uVar3 = uVar2 + 0x28;
    if (uVar3 <= uVar2 + 1) {
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar5 + -8) = &UNK_18020eb89;
      FUN_180012fe0();
    }
  }
  _Dst = (void *)(lVar4 + 0x27U & 0xffffffffffffffe0);
  *(longlong *)((longlong)_Dst - 8) = lVar4;
LAB_18020eb53:
  *param_1 = _Dst;
  param_1[2] = param_2;
  param_1[3] = uVar2;
  *(undefined8 *)(puVar5 + -8) = 0x18020eb6c;
  memset(_Dst,(int)param_3,param_2);
  *(undefined1 *)((longlong)_Dst + param_2) = 0;
  return param_1;
}


