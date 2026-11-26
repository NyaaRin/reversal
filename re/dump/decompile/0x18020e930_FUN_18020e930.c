// 0x18020e930  FUN_18020e930
// size=281 thunk=false
// signature: undefined FUN_18020e930()
// status: ok


undefined8 *
FUN_18020e930(undefined8 *param_1,undefined8 param_2,undefined8 param_3,void *param_4,size_t param_5
             ,void *param_6,size_t param_7)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *_Dst;
  undefined1 *puVar6;
  undefined8 uStack_60;
  undefined1 auStack_58 [32];
  
  puVar6 = auStack_58;
  _Dst = (undefined8 *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = param_5 + param_7;
  param_1[3] = 0;
  if (uVar1 < 0x10) {
    uVar3 = 0xf;
    _Dst = param_1;
  }
  else {
    uVar3 = uVar1 | 0xf;
    puVar6 = auStack_58;
    if (uVar3 < 0x8000000000000000) goto LAB_18020e9b0;
    uVar4 = 0x8000000000000027;
    puVar6 = auStack_58;
    uVar3 = 0x7fffffffffffffff;
    while( true ) {
      *(undefined8 *)(puVar6 + -8) = 0x18020e9a4;
      lVar5 = FUN_1802d8350(uVar4);
      if (lVar5 != 0) {
        _Dst = (undefined8 *)(lVar5 + 0x27U & 0xffffffffffffffe0);
        _Dst[-1] = lVar5;
        *param_1 = _Dst;
        goto LAB_18020ea02;
      }
      pcVar2 = (code *)swi(0x29);
      uVar3 = (*pcVar2)(5);
      puVar6 = puVar6 + 8;
LAB_18020e9b0:
      if (uVar3 < 0x16) {
        uVar3 = 0x16;
      }
      if (uVar3 == 0xffffffffffffffff) break;
      if (uVar3 + 1 < 0x1000) {
        *(undefined8 *)(puVar6 + -8) = 0x18020e9f2;
        _Dst = (undefined8 *)FUN_1802d8350();
        break;
      }
      uVar4 = uVar3 + 0x28;
      if (uVar4 <= uVar3 + 1) {
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar6 + -8) = &UNK_18020ea49;
        FUN_180012fe0();
      }
    }
    *param_1 = _Dst;
  }
LAB_18020ea02:
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  *(undefined8 *)(puVar6 + -8) = 0x18020ea18;
  memcpy(_Dst,param_4,param_5);
  *(undefined8 *)(puVar6 + -8) = 0x18020ea27;
  memcpy((void *)(param_5 + (longlong)_Dst),param_6,param_7);
  *(undefined1 *)(uVar1 + (longlong)_Dst) = 0;
  return param_1;
}


