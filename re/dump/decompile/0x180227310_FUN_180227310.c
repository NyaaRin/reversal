// 0x180227310  FUN_180227310
// size=539 thunk=false
// signature: undefined FUN_180227310()
// status: ok


undefined8 * FUN_180227310(longlong *param_1,void *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  void *pvVar8;
  void *pvVar9;
  longlong lVar10;
  void *_Dst;
  undefined1 *puVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  size_t _Size;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined8 local_68;
  
  puVar11 = auStack_88;
  puVar12 = auStack_88;
  local_68 = param_3;
  lVar2 = *param_1;
  lVar10 = (param_1[1] - lVar2 >> 2) * -0x3333333333333333;
  if (lVar10 == 0xccccccccccccccc) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar7 = (param_1[2] - lVar2 >> 2) * -0x3333333333333333;
  uVar6 = 0xccccccccccccccc - (uVar7 >> 1);
  if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
    uVar6 = lVar10 + 1;
    uVar7 = uVar7 + (uVar7 >> 1);
    uVar13 = uVar6;
    if (uVar6 <= uVar7) {
      uVar13 = uVar7;
    }
    if (uVar13 < 0xccccccccccccccd) {
      uVar7 = uVar13 * 0x14;
      if (uVar7 == 0) {
        _Dst = (void *)0x0;
        puVar12 = auStack_88;
      }
      else if (uVar7 < 0x1000) {
        _Dst = (void *)FUN_1802d8350(uVar7);
      }
      else {
        if (uVar7 + 0x27 <= uVar7) goto LAB_180227527;
        lVar10 = FUN_1802d8350();
        if (lVar10 == 0) {
          pcVar4 = (code *)swi(0x29);
          lVar10 = (*pcVar4)(5);
          puVar11 = auStack_80;
        }
        _Dst = (void *)(lVar10 + 0x27U & 0xffffffffffffffe0);
        *(longlong *)((longlong)_Dst - 8) = lVar10;
        puVar12 = puVar11;
      }
      puVar1 = (undefined8 *)((longlong)_Dst + (((longlong)param_2 - lVar2) / 0x14) * 0x14);
      pvVar8 = (void *)((longlong)puVar1 + 0x14);
      *(longlong **)(puVar12 + 0x28) = param_1;
      *(void **)(puVar12 + 0x30) = _Dst;
      *(ulonglong *)(puVar12 + 0x38) = uVar13;
      *(void **)(puVar12 + 0x40) = pvVar8;
      *(void **)(puVar12 + 0x48) = pvVar8;
      puVar3 = *(undefined8 **)(puVar12 + 0x20);
      uVar5 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar5;
      *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(puVar3 + 2);
      *(undefined8 **)(puVar12 + 0x40) = puVar1;
      pvVar9 = (void *)*param_1;
      if (param_2 == (void *)param_1[1]) {
        _Size = param_1[1] - (longlong)pvVar9;
        pvVar8 = _Dst;
        param_2 = pvVar9;
      }
      else {
        *(undefined8 *)(puVar12 + -8) = 0x180227470;
        memmove(_Dst,pvVar9,(longlong)param_2 - (longlong)pvVar9);
        *(void **)(puVar12 + 0x40) = _Dst;
        _Size = param_1[1] - (longlong)param_2;
      }
      *(undefined8 *)(puVar12 + -8) = 0x180227487;
      memmove(pvVar8,param_2,_Size);
      *(undefined8 *)(puVar12 + 0x30) = 0;
      pvVar8 = (void *)*param_1;
      if (pvVar8 != (void *)0x0) {
        pvVar9 = pvVar8;
        if ((0xfff < (ulonglong)((param_1[2] - (longlong)pvVar8 >> 2) * 4)) &&
           (pvVar9 = *(void **)((longlong)pvVar8 + -8),
           0x1f < (ulonglong)((longlong)pvVar8 + (-8 - (longlong)pvVar9)))) {
          pvVar9 = (void *)0x5;
          pcVar4 = (code *)swi(0x29);
          (*pcVar4)();
          puVar12 = puVar12 + 8;
        }
        *(undefined8 *)(puVar12 + -8) = 0x1802274ef;
        free(pvVar9);
      }
      *param_1 = (longlong)_Dst;
      param_1[1] = (longlong)((longlong)_Dst + uVar6 * 0x14);
      param_1[2] = (longlong)(uVar7 + (longlong)_Dst);
      return puVar1;
    }
  }
LAB_180227527:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}


