// 0x180223610  FUN_180223610
// size=566 thunk=false
// signature: undefined FUN_180223610()
// status: ok


undefined8 * FUN_180223610(undefined8 param_1,void *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  void *pvVar5;
  longlong lVar6;
  void *_Dst;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  size_t _Size;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [80];
  
  pvVar5 = DAT_1803e9a80;
  puVar7 = auStack_98;
  puVar8 = auStack_98;
  lVar6 = ((longlong)DAT_1803e9a88 - (longlong)DAT_1803e9a80 >> 2) * -0x5555555555555555;
  if (lVar6 == 0x1555555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_18020cc40();
  }
  uVar4 = ((longlong)DAT_1803e9a90 - (longlong)DAT_1803e9a80 >> 2) * -0x5555555555555555;
  uVar3 = 0x1555555555555555 - (uVar4 >> 1);
  if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
    uVar3 = lVar6 + 1;
    uVar4 = (uVar4 >> 1) + uVar4;
    uVar9 = uVar3;
    if (uVar3 <= uVar4) {
      uVar9 = uVar4;
    }
    if (uVar9 < 0x1555555555555556) {
      uVar4 = uVar9 * 0xc;
      if (uVar4 == 0) {
        _Dst = (void *)0x0;
        puVar8 = auStack_98;
      }
      else if (uVar4 < 0x1000) {
        _Dst = (void *)FUN_1802d8350(uVar4);
      }
      else {
        if (uVar4 + 0x27 <= uVar4) goto LAB_180223842;
        lVar6 = FUN_1802d8350();
        if (lVar6 == 0) {
          pcVar2 = (code *)swi(0x29);
          lVar6 = (*pcVar2)(5);
          puVar7 = auStack_90;
        }
        _Dst = (void *)(lVar6 + 0x27U & 0xffffffffffffffe0);
        *(longlong *)((longlong)_Dst - 8) = lVar6;
        puVar8 = puVar7;
      }
      puVar1 = (undefined8 *)((longlong)_Dst + (((longlong)param_2 - (longlong)pvVar5) / 0xc) * 0xc)
      ;
      pvVar5 = (void *)((longlong)puVar1 + 0xc);
      *(void ***)(puVar8 + 0x20) = &DAT_1803e9a80;
      *(void **)(puVar8 + 0x28) = _Dst;
      *(ulonglong *)(puVar8 + 0x30) = uVar9;
      *(void **)(puVar8 + 0x38) = pvVar5;
      *(void **)(puVar8 + 0x40) = pvVar5;
      *puVar1 = *param_3;
      *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_3 + 1);
      *(undefined8 **)(puVar8 + 0x38) = puVar1;
      if (param_2 == DAT_1803e9a88) {
        _Size = (longlong)DAT_1803e9a88 - (longlong)DAT_1803e9a80;
        pvVar5 = _Dst;
        param_2 = DAT_1803e9a80;
      }
      else {
        *(undefined8 *)(puVar8 + -8) = 0x18022377e;
        memmove(_Dst,DAT_1803e9a80,(longlong)param_2 - (longlong)DAT_1803e9a80);
        *(void **)(puVar8 + 0x38) = _Dst;
        _Size = (longlong)DAT_1803e9a88 - (longlong)param_2;
      }
      *(undefined8 *)(puVar8 + -8) = 0x180223798;
      memmove(pvVar5,param_2,_Size);
      *(undefined8 *)(puVar8 + 0x28) = 0;
      if (DAT_1803e9a80 != (void *)0x0) {
        pvVar5 = DAT_1803e9a80;
        if ((0xfff < (ulonglong)(((longlong)DAT_1803e9a90 - (longlong)DAT_1803e9a80 >> 2) * 4)) &&
           (pvVar5 = *(void **)((longlong)DAT_1803e9a80 + -8),
           0x1f < (ulonglong)((longlong)DAT_1803e9a80 + (-8 - (longlong)pvVar5)))) {
          pvVar5 = (void *)0x5;
          pcVar2 = (code *)swi(0x29);
          (*pcVar2)();
          puVar8 = puVar8 + 8;
        }
        *(undefined8 *)(puVar8 + -8) = 0x180223807;
        free(pvVar5);
      }
      DAT_1803e9a80 = _Dst;
      DAT_1803e9a88 = (void *)((longlong)_Dst + uVar3 * 0xc);
      DAT_1803e9a90 = (void *)(uVar4 + (longlong)_Dst);
      return puVar1;
    }
  }
LAB_180223842:
                    /* WARNING: Subroutine does not return */
  FUN_180012fe0();
}


