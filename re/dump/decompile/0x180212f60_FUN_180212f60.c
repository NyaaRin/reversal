// 0x180212f60  FUN_180212f60
// size=638 thunk=false
// signature: undefined FUN_180212f60()
// status: ok


void FUN_180212f60(longlong *param_1,void *param_2,void *param_3,ulonglong param_4)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  void *_Dst;
  ulonglong uVar4;
  longlong lVar5;
  void *pvVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  size_t sVar10;
  ulonglong uVar11;
  undefined8 uStack_100;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  void *local_d0;
  longlong *local_c8;
  ulonglong local_c0;
  longlong *local_b8;
  ulonglong local_60;
  void *local_58;
  ulonglong local_50;
  void *local_48;
  
  if (param_4 != 0) {
    puVar8 = auStack_f8;
    local_b8 = param_1;
    plVar1 = param_1 + 1;
    pvVar6 = (void *)*plVar1;
    local_c0 = param_4;
    if ((ulonglong)(param_1[2] - (longlong)pvVar6) < param_4) {
      local_d8 = (longlong *)*param_1;
      local_c8 = (longlong *)((longlong)pvVar6 - (longlong)local_d8);
      uVar11 = 0x7fffffffffffffff;
      if (0x7fffffffffffffffU - (longlong)local_c8 < param_4) {
                    /* WARNING: Subroutine does not return */
        FUN_18020cc40();
      }
      uVar9 = param_4 + (longlong)local_c8;
      local_c0 = uVar9;
      uVar4 = param_1[2] - (longlong)local_d8;
      uVar7 = uVar4 >> 1;
      if (uVar4 <= 0x7fffffffffffffff - uVar7) goto LAB_180213019;
      uVar4 = 0x8000000000000026;
      puVar8 = auStack_f8;
      while( true ) {
        *(undefined8 *)(puVar8 + -8) = 0x18021300d;
        lVar3 = FUN_1802d8350(uVar4);
        if (lVar3 != 0) break;
        uVar4 = 5;
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)();
        puVar8 = puVar8 + 8;
LAB_180213019:
        uVar11 = uVar9;
        if (uVar9 <= uVar4 + uVar7) {
          uVar11 = uVar4 + uVar7;
        }
        if (uVar11 == 0) {
          _Dst = (void *)0x0;
          goto LAB_180213062;
        }
        if (uVar11 < 0x1000) {
          *(undefined8 *)(puVar8 + -8) = 0x18021305f;
          _Dst = (void *)FUN_1802d8350(uVar11);
          goto LAB_180213062;
        }
        uVar4 = uVar11 + 0x27;
        if (uVar4 <= uVar11) {
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar8 + -8) = &UNK_1802131df;
          FUN_180012fe0();
        }
      }
      _Dst = (void *)(lVar3 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)_Dst - 8) = lVar3;
LAB_180213062:
      lVar3 = (longlong)param_2 - *(longlong *)(puVar8 + 0x20);
      *(longlong *)(puVar8 + 0x28) = lVar3;
      lVar5 = param_4 + lVar3 + (longlong)_Dst;
      *(longlong *)(puVar8 + 0x68) = lVar5;
      *(longlong **)(puVar8 + 0x70) = param_1;
      *(void **)(puVar8 + 0x78) = _Dst;
      *(ulonglong *)(puVar8 + 0x80) = uVar11;
      *(longlong *)(puVar8 + 0x88) = lVar5;
      *(longlong *)(puVar8 + 0x90) = lVar5;
      *(undefined8 *)(puVar8 + -8) = 0x1802130af;
      memmove((void *)(lVar3 + (longlong)_Dst),param_3,param_4);
      *(void **)(puVar8 + 0x88) = (void *)(lVar3 + (longlong)_Dst);
      if ((param_4 == 1) && (param_2 == pvVar6)) {
        sVar10 = *(size_t *)(puVar8 + 0x30);
        param_2 = *(void **)(puVar8 + 0x20);
        pvVar6 = _Dst;
      }
      else {
        *(undefined8 *)(puVar8 + -8) = 0x1802130e3;
        memmove(_Dst,*(void **)(puVar8 + 0x20),*(size_t *)(puVar8 + 0x28));
        *(void **)(puVar8 + 0x88) = _Dst;
        sVar10 = (longlong)pvVar6 - (longlong)param_2;
        pvVar6 = *(void **)(puVar8 + 0x68);
      }
      *(undefined8 *)(puVar8 + -8) = 0x1802130fe;
      memmove(pvVar6,param_2,sVar10);
      *(undefined8 *)(puVar8 + 0x78) = 0;
      *(undefined8 *)(puVar8 + -8) = 0x18021311c;
      FUN_18022c3f0(*(undefined8 *)(puVar8 + 0x40),_Dst,*(undefined8 *)(puVar8 + 0x38),uVar11);
    }
    else {
      uVar11 = (longlong)pvVar6 - (longlong)param_2;
      local_d8 = param_1;
      local_d0 = pvVar6;
      local_c8 = plVar1;
      if (param_4 < uVar11) {
        memmove(pvVar6,(void *)((longlong)pvVar6 - param_4),param_4);
        *plVar1 = param_4 + (longlong)pvVar6;
        sVar10 = (longlong)((longlong)pvVar6 - param_4) - (longlong)param_2;
        memmove((void *)((longlong)pvVar6 - sVar10),param_2,sVar10);
        local_60 = param_4;
        local_58 = param_3;
        memmove(param_2,param_3,param_4);
      }
      else {
        pvVar6 = (void *)(param_4 + (longlong)param_2);
        local_b8 = pvVar6;
        memmove(pvVar6,param_2,uVar11);
        *plVar1 = (longlong)pvVar6 + uVar11;
        local_50 = param_4;
        local_48 = param_3;
        memmove(param_2,param_3,param_4);
      }
    }
  }
  return;
}


