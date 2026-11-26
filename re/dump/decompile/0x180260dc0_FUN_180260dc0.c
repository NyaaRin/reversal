// 0x180260dc0  FUN_180260dc0
// size=797 thunk=false
// signature: undefined FUN_180260dc0()
// status: ok


void FUN_180260dc0(longlong *param_1,void *param_2,void *param_3,ulonglong param_4)

{
  code *pcVar1;
  void *pvVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  void *pvVar7;
  ulonglong uVar8;
  size_t _Size;
  longlong lVar9;
  size_t sVar10;
  undefined8 uStack_100;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [24];
  longlong *local_d8;
  void *local_d0;
  longlong *local_c8;
  void *local_c0;
  longlong *local_b8;
  ulonglong local_60;
  void *local_58;
  ulonglong local_50;
  void *local_48;
  
  if (param_4 != 0) {
    puVar5 = auStack_f8;
    puVar6 = auStack_f8;
    local_b8 = param_3;
    local_c8 = param_1;
    local_d8 = param_1 + 1;
    pvVar4 = (void *)*local_d8;
    if ((ulonglong)(param_1[2] - (longlong)pvVar4 >> 4) < param_4) {
      local_d8 = (longlong *)*param_1;
      local_c0 = (void *)((longlong)pvVar4 - (longlong)local_d8);
      local_d0 = (void *)((longlong)pvVar4 - (longlong)local_d8 >> 4);
      if (0xfffffffffffffffU - (longlong)local_d0 < param_4) {
                    /* WARNING: Subroutine does not return */
        FUN_18020cc40();
      }
      uVar3 = param_1[2] - (longlong)local_d8 >> 4;
      if (uVar3 <= 0xfffffffffffffff - (uVar3 >> 1)) {
        uVar3 = uVar3 + (uVar3 >> 1);
        uVar8 = (longlong)local_d0 + param_4;
        if ((longlong)local_d0 + param_4 <= uVar3) {
          uVar8 = uVar3;
        }
        if (uVar8 < 0x1000000000000000) {
          uVar3 = uVar8 * 0x10;
          if (uVar3 == 0) {
            pvVar7 = (void *)0x0;
            puVar6 = auStack_f8;
          }
          else if (uVar3 < 0x1000) {
            pvVar7 = (void *)FUN_1802d8350(uVar3);
          }
          else {
            if (uVar3 + 0x27 <= uVar3) goto LAB_1802610d9;
            lVar9 = FUN_1802d8350();
            if (lVar9 == 0) {
              pcVar1 = (code *)swi(0x29);
              lVar9 = (*pcVar1)(5);
              puVar5 = auStack_f0;
            }
            pvVar7 = (void *)(lVar9 + 0x27U & 0xffffffffffffffe0);
            *(longlong *)((longlong)pvVar7 - 8) = lVar9;
            puVar6 = puVar5;
          }
          *(longlong *)(puVar6 + 0x30) = (longlong)param_2 - *(longlong *)(puVar6 + 0x20);
          lVar9 = (longlong)param_2 - *(longlong *)(puVar6 + 0x20) >> 4;
          pvVar2 = (void *)((lVar9 + param_4) * 0x10 + (longlong)pvVar7);
          *(void **)(puVar6 + 0x68) = pvVar2;
          *(longlong **)(puVar6 + 0x70) = param_1;
          *(void **)(puVar6 + 0x78) = pvVar7;
          *(ulonglong *)(puVar6 + 0x80) = uVar8;
          *(void **)(puVar6 + 0x88) = pvVar2;
          *(void **)(puVar6 + 0x90) = pvVar2;
          pvVar2 = (void *)((longlong)pvVar7 + lVar9 * 0x10);
          *(undefined8 *)(puVar6 + -8) = 0x180260f3e;
          memmove(pvVar2,*(void **)(puVar6 + 0x40),param_4 << 4);
          *(void **)(puVar6 + 0x88) = pvVar2;
          if ((param_4 == 1) && (param_2 == pvVar4)) {
            sVar10 = *(size_t *)(puVar6 + 0x38);
            param_2 = *(void **)(puVar6 + 0x20);
            pvVar4 = pvVar7;
          }
          else {
            *(undefined8 *)(puVar6 + -8) = 0x180260f72;
            memmove(pvVar7,*(void **)(puVar6 + 0x20),*(size_t *)(puVar6 + 0x30));
            *(void **)(puVar6 + 0x88) = pvVar7;
            sVar10 = (longlong)pvVar4 - (longlong)param_2;
            pvVar4 = *(void **)(puVar6 + 0x68);
          }
          *(undefined8 *)(puVar6 + -8) = 0x180260f8d;
          memmove(pvVar4,param_2,sVar10);
          *(undefined8 *)(puVar6 + 0x78) = 0;
          pvVar4 = (void *)*param_1;
          if (pvVar4 != (void *)0x0) {
            pvVar2 = pvVar4;
            if ((0xfff < (param_1[2] - (longlong)pvVar4 & 0xfffffffffffffff0U)) &&
               (pvVar2 = *(void **)((longlong)pvVar4 + -8),
               0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar2)))) {
              pcVar1 = (code *)swi(0x29);
              pvVar2 = (void *)(*pcVar1)(5);
              puVar6 = puVar6 + 8;
            }
            *(undefined8 *)(puVar6 + -8) = 0x180260fda;
            free(pvVar2);
          }
          *param_1 = (longlong)pvVar7;
          param_1[1] = (longlong)
                       ((*(longlong *)(puVar6 + 0x28) + param_4) * 0x10 + (longlong)pvVar7);
          param_1[2] = (longlong)((longlong)pvVar7 + uVar3);
          return;
        }
      }
LAB_1802610d9:
                    /* WARNING: Subroutine does not return */
      FUN_180012fe0();
    }
    uVar3 = (longlong)pvVar4 - (longlong)param_2 >> 4;
    sVar10 = param_4 * 0x10;
    local_c0 = pvVar4;
    local_b8 = local_d8;
    if (param_4 < uVar3) {
      pvVar7 = (void *)((longlong)pvVar4 + param_4 * -0x10);
      local_d0 = (void *)param_4;
      memmove(pvVar4,pvVar7,sVar10);
      *local_d8 = (longlong)(sVar10 + (longlong)pvVar4);
      _Size = (longlong)pvVar7 - (longlong)param_2;
      memmove((void *)((longlong)pvVar4 - _Size),param_2,_Size);
      local_60 = param_4;
      local_58 = param_3;
      memmove(param_2,param_3,sVar10);
    }
    else {
      pvVar7 = (void *)(sVar10 + (longlong)param_2);
      local_d0 = pvVar7;
      memmove(pvVar7,param_2,(longlong)pvVar4 - (longlong)param_2);
      *local_d8 = (longlong)((longlong)pvVar7 + uVar3 * 0x10);
      local_50 = param_4;
      local_48 = param_3;
      memmove(param_2,param_3,sVar10);
    }
  }
  return;
}


