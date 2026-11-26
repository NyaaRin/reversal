// 0x18021e540  FUN_18021e540
// size=484 thunk=false
// signature: undefined FUN_18021e540()
// status: ok


undefined8 *
FUN_18021e540(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  size_t _Size;
  ulonglong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  void *pvVar9;
  undefined1 *puVar10;
  undefined8 uStack_60;
  undefined1 auStack_58 [32];
  
  puVar10 = auStack_58;
  pvVar9 = (void *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  _Size = param_3[2];
  uVar2 = param_4[2];
  uVar1 = uVar2 + _Size;
  if ((param_3[3] - _Size < uVar2) || ((ulonglong)param_3[3] < (ulonglong)param_4[3])) {
    if (param_4[3] - uVar2 < _Size) {
      if (0x7fffffffffffffff - _Size < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      uVar6 = uVar1 | 0xf;
      if (uVar6 < 0x8000000000000000) goto LAB_18021e682;
      uVar7 = 0x8000000000000027;
      puVar10 = auStack_58;
      uVar6 = 0x7fffffffffffffff;
      while( true ) {
        *(undefined8 *)(puVar10 + -8) = 0x18021e676;
        lVar8 = FUN_1802d8350(uVar7);
        if (lVar8 != 0) break;
        pcVar3 = (code *)swi(0x29);
        uVar6 = (*pcVar3)(5);
        puVar10 = puVar10 + 8;
LAB_18021e682:
        if (uVar6 < 0x16) {
          uVar6 = 0x16;
        }
        if (uVar6 == 0xffffffffffffffff) goto LAB_18021e6c4;
        if (uVar6 + 1 < 0x1000) {
          *(undefined8 *)(puVar10 + -8) = 0x18021e6c1;
          pvVar9 = (void *)FUN_1802d8350();
          goto LAB_18021e6c4;
        }
        uVar7 = uVar6 + 0x28;
        if (uVar7 <= uVar6 + 1) {
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar10 + -8) = &UNK_18021e725;
          FUN_180012fe0();
        }
      }
      pvVar9 = (void *)(lVar8 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)pvVar9 - 8) = lVar8;
LAB_18021e6c4:
      *param_1 = pvVar9;
      param_1[2] = uVar1;
      param_1[3] = uVar6;
      if (0xf < (ulonglong)param_3[3]) {
        param_3 = (undefined8 *)*param_3;
      }
      *(undefined8 *)(puVar10 + -8) = 0x18021e6e7;
      memcpy(pvVar9,param_3,_Size);
      if (0xf < (ulonglong)param_4[3]) {
        param_4 = (undefined8 *)*param_4;
      }
      *(undefined8 *)(puVar10 + -8) = 0x18021e702;
      memcpy((void *)(_Size + (longlong)pvVar9),param_4,uVar2 + 1);
    }
    else {
      uVar4 = param_4[1];
      *param_1 = *param_4;
      param_1[1] = uVar4;
      uVar4 = param_4[3];
      param_1[2] = param_4[2];
      param_1[3] = uVar4;
      param_4[2] = 0;
      param_4[3] = 0xf;
      *(undefined1 *)param_4 = 0;
      pvVar9 = (void *)*param_1;
      memmove((void *)((longlong)pvVar9 + _Size),pvVar9,uVar2 + 1);
      if (0xf < (ulonglong)param_3[3]) {
        param_3 = (undefined8 *)*param_3;
      }
      memcpy(pvVar9,param_3,_Size);
      param_1[2] = uVar1;
    }
  }
  else {
    uVar4 = param_3[1];
    *param_1 = *param_3;
    param_1[1] = uVar4;
    uVar4 = param_3[3];
    param_1[2] = param_3[2];
    param_1[3] = uVar4;
    param_3[2] = 0;
    param_3[3] = 0xf;
    *(undefined1 *)param_3 = 0;
    puVar5 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar5 = (undefined8 *)*param_1;
    }
    if (0xf < (ulonglong)param_4[3]) {
      param_4 = (undefined8 *)*param_4;
    }
    memcpy((void *)(_Size + (longlong)puVar5),param_4,uVar2 + 1);
    param_1[2] = uVar1;
  }
  return param_1;
}


