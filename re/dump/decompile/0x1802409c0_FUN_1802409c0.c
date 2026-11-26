// 0x1802409c0  FUN_1802409c0
// size=262 thunk=false
// signature: undefined FUN_1802409c0()
// status: ok


void FUN_1802409c0(longlong param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  code *pcVar2;
  uint *puVar3;
  void *pvVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  longlong *plVar8;
  size_t _NewSize;
  
  plVar8 = (longlong *)(*(longlong *)(param_1 + 8) + 0x20);
  uVar7 = (int)param_3 - (int)param_2;
  puVar3 = (uint *)*plVar8;
  puVar6 = (uint *)0x0;
  if (puVar3 != (uint *)0x0) {
    do {
      if (*puVar3 <= uVar7) break;
      plVar8 = (longlong *)(*plVar8 + 0x18);
      puVar3 = (uint *)*plVar8;
    } while (puVar3 != (uint *)0x0);
    puVar6 = (uint *)*plVar8;
    if ((puVar6 != (uint *)0x0) && (uVar7 == *puVar6)) goto joined_r0x000180240a3b;
  }
  puVar3 = (uint *)FUN_1802d8350();
  *puVar3 = uVar7;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  *plVar8 = (longlong)puVar3;
  *(uint **)(puVar3 + 6) = puVar6;
  puVar6 = (uint *)*plVar8;
joined_r0x000180240a3b:
  do {
    if (param_2 == param_3) {
      return;
    }
    uVar1 = *param_2;
    uVar7 = puVar6[2];
    if (uVar7 <= puVar6[3]) {
      uVar5 = uVar7 >> 1;
      if (uVar5 < 0x11) {
        uVar5 = 0x10;
LAB_180240a60:
        _NewSize = (size_t)(uVar7 + uVar5);
        if (~uVar5 <= uVar7) goto LAB_180240a6b;
      }
      else {
        if (uVar5 != 0xffffffff) goto LAB_180240a60;
LAB_180240a6b:
        _NewSize = 0xffffffff;
      }
      if (((uint)_NewSize == uVar7) ||
         (pvVar4 = realloc(*(void **)(puVar6 + 4),_NewSize), pvVar4 == (void *)0x0)) {
        std::_Xregex_error(9);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(void **)(puVar6 + 4) = pvVar4;
      puVar6[2] = (uint)_NewSize;
    }
    param_2 = param_2 + 1;
    *(undefined1 *)((ulonglong)puVar6[3] + *(longlong *)(puVar6 + 4)) = uVar1;
    puVar6[3] = puVar6[3] + 1;
  } while( true );
}


